/**
 * PoP SoT xbox-demo - xdk/d3d8, chunk 1
 * Direct3D 8 for the NV2A (D3D section)
 * Functions: 52 (0x002A2E00 - 0x002A5FA8)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_002A2E00
 * Original: 0x002A2E00 - 0x002A2E4D (77 bytes, 26 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2E00(void)
{

loc_002A2E00: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002A2E2Eu); RECOMP_ABI_CALL(0x0029F000u, sub_0029F000); /* call 0x0029F000 */

loc_002A2E2E: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi) = 0x50001;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_002A2E50
 * Original: 0x002A2E50 - 0x002A2E9A (74 bytes, 18 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A2E50: ;
    eax = MEM32(0x2A8498);
    _fa = (uint32_t)(MEM8(eax + 0x8D4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x8D4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_002A2EDB(); return; } /* je: equal / zero */

loc_002A2E5E: ;
    eax = MEM32(0x2AAC5C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x70) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x70 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_002A2EDB(); return; } /* je: equal / zero */

loc_002A2E67: ;
    _fa = (uint32_t)(MEM32(0x2AAC58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2AAC58), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002A2EDB(); return; } /* jne: not equal / not zero */

loc_002A2E70: ;
    ecx = MEM32(0x2A83FC);
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM32(0x2AAC58) = ecx;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_002A2EDB(); return; } /* ja: above (unsigned >) */

loc_002A2E88: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x2A2EDC)); return; /* indirect tail jmp */

    MEM32(0x2A83FC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002A2E8F
 * Original: 0x002A2E8F - 0x002A2E9A (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2E8F(void)
{

loc_002A2E8F: ;
    MEM32(0x2A83FC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002A2E9A
 * Original: 0x002A2E9A - 0x002A2EA5 (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2E9A(void)
{

loc_002A2E9A: ;
    MEM32(0x2A83FC) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_002A2EA5
 * Original: 0x002A2EA5 - 0x002A2EB0 (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2EA5(void)
{

loc_002A2EA5: ;
    MEM32(0x2A83FC) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_002A2EB0
 * Original: 0x002A2EB0 - 0x002A2EBB (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2EB0(void)
{

loc_002A2EB0: ;
    MEM32(0x2A83FC) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_002A2EBB
 * Original: 0x002A2EBB - 0x002A2EC6 (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2EBB(void)
{

loc_002A2EBB: ;
    MEM32(0x2A83FC) = 0x80000001u;
    esp += 4; return; /* ret */

}

/**
 * sub_002A2EC6
 * Original: 0x002A2EC6 - 0x002A2ED1 (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2EC6(void)
{

loc_002A2EC6: ;
    MEM32(0x2A83FC) = 0x80000002u;
    esp += 4; return; /* ret */

}

/**
 * sub_002A2ED1
 * Original: 0x002A2ED1 - 0x002A2EDC (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2ED1(void)
{

loc_002A2ED1: ;
    MEM32(0x2A83FC) = 0x80000004u;
    esp += 4; return; /* ret */

}

/**
 * sub_002A2F00
 * Original: 0x002A2F00 - 0x002A327B (891 bytes, 260 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A2F00: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi + 0x8D4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x40000000;
    MEM32(esp + 0x20) = 0x40800000;
    MEM32(esp + 0x24) = 0x41000000;
    if (TEST_Z(_fa, _fb)) goto loc_002A3037; /* je: equal / zero */

loc_002A2F3B: ;
    edi = MEM32(0x2AAC60);
    eax = MEM32(esi + 0x8D8);
    ecx = MEM32(0x2AAC54);
    PUSH32(esp, 0x2AAC48);
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1FF)) >> 32) & 1);
    edi = edi + 0x1FF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFE00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2AAC40);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x31C800); PUSH32(esp, 0x002A2F71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002A2F6Bu); } /* indirect call */
    }

loc_002A2F71: ;
    ebx = MEM32(esi + 0x8D8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x18)) >> 32) & 1);
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_002A2F82; /* jge: greater or equal (signed >=) */

loc_002A2F7E: ;
    MEM32(ebx) = ebp;
    goto loc_002A2FD6;

loc_002A2F82: ;
    edx = MEM32(0x2AAC54);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002A2F93u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_002A2F93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002A2FAF; /* jne: not equal / not zero */

loc_002A2F9A: ;
    PUSH32(esp, 0x2A71AC);
    PUSH32(esp, 0x002A2FA4u); RECOMP_ABI_CALL(0x002A38C0u, sub_002A38C0); /* call 0x002A38C0 */

loc_002A2FA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002A2FAF: ;
    eax = MEM32(0x2AAC48);
    edx = MEM32(0x2AAC4C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x2AAC48) = eax;
    eax = MEM32(0x2AAC50);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x2AAC4C) = edx;
    MEM32(0x2AAC50) = eax;
    MEM32(ebx) = eax;

loc_002A2FD6: ;
    _fa = (uint32_t)(MEM32(esi + 0x8D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8D0), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002A3273; /* jne: not equal / not zero */

loc_002A2FE2: ;
    MEM32(esi + 0x8D0) = 0x26000000;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0xFFFFFFEFu;

loc_002A2FF3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002A2FFAu); RECOMP_ABI_CALL(0x00281CC1u, sub_00281CC1); /* call 0x00281CC1 */

loc_002A2FFA: ;
    eax = edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2710 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002A3023; /* jb: below (unsigned <) */

loc_002A3004: ;
    ecx = MEM32(esi + 0x8D4);
    eax = MEM32(0x2AAC50);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x8D0) = ebp;
    MEM32(esi + 0x8D4) = ecx;
    MEM32(0x2AAC50) = eax;

loc_002A3023: ;
    _fa = (uint32_t)(MEM32(esi + 0x8D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8D0), 0x26000000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002A2FF3; /* je: equal / zero */

loc_002A302F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002A3037: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002A3273; /* je: equal / zero */

loc_002A303F: ;
    ecx = MEM32(0x2AAC38);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(0x2AAC3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_002A309C; /* je: equal / zero */

loc_002A304D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002A3057u); RECOMP_ABI_CALL(0x00293032u, sub_00293032); /* call 0x00293032 */

loc_002A3057: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(0x2AAC38);
    edi = MEM32(esp + 0x14);
    ebp = MEM32(0x2AAC3C);
    ebx = MEM32(0x2AAC34);
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002A3273; /* jl: less (signed <) */

loc_002A3080: ;
    if (CMP_G(_fas, _fbs)) goto loc_002A308E; /* jg: greater (signed >) */

loc_002A3082: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2AAC30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x2AAC30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002A3273; /* jb: below (unsigned <) */

loc_002A308E: ;
    MEM32(0x2AAC38) = edx;
    MEM32(0x2AAC3C) = edi;
    goto loc_002A30A6;

loc_002A309C: ;
    PUSH32(esp, 0x2AAC38);
    PUSH32(esp, 0x002A30A6u); RECOMP_ABI_CALL(0x00293032u, sub_00293032); /* call 0x00293032 */

loc_002A30A6: ;
    SET_LO8(eax, MEM8(0x2AAC5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_002A30DB; /* jns: not sign (positive) */

loc_002A30AF: ;
    eax = MEM32(0x2AAC54);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A30BFu); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_002A30BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002A30DB; /* jne: not equal / not zero */

loc_002A30C6: ;
    PUSH32(esp, 0x2A718C);
    PUSH32(esp, 0x002A30D0u); RECOMP_ABI_CALL(0x002A38C0u, sub_002A38C0); /* call 0x002A38C0 */

loc_002A30D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002A30DB: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x002A30E2u); RECOMP_ABI_CALL(0x00297EA0u, sub_00297EA0); /* call 0x00297EA0 */

loc_002A30E2: ;
    ebp = eax;
    eax = MEM32(0x2AAC5C);
    edx = MEM32(ebp + 0x10);
    edi = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002A310B; /* jne: not equal / not zero */

loc_002A30FA: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebp + 0xF));
    eax = 1;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002A3116;

loc_002A310B: ;
    eax = edx;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002A3116: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002A312C; /* jne: not equal / not zero */

loc_002A311A: ;
    ecx = MEM32(ebp + 0xC);
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
    goto loc_002A3133;

loc_002A312C: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002A3133: ;
    ecx = MEM32(esi + 0x8D8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x40)) >> 32) & 1);
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    if (LO8(ecx)) _cf = (int)(((eax) >> ((LO8(ecx)) - 1)) & 1);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (LO8(ecx)) _cf = (int)(((edx) >> ((LO8(ecx)) - 1)) & 1);
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002A3163u); RECOMP_ABI_CALL(0x002A2E00u, sub_002A2E00); /* call 0x002A2E00 */

loc_002A3163: ;
    edx = MEM32(esp + edi * 4 + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A3173u); RECOMP_ABI_CALL(0x00299C90u, sub_00299C90); /* call 0x00299C90 */

loc_002A3173: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002A3179u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_002A3179: ;
    PUSH32(esp, 0x002A317Eu); RECOMP_ABI_CALL(0x00297AC0u, sub_00297AC0); /* call 0x00297AC0 */

loc_002A317E: ;
    edi = MEM32(esi + 0x8D8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002A318Au); RECOMP_ABI_CALL(0x00293032u, sub_00293032); /* call 0x00293032 */

loc_002A318A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x002A3193u); RECOMP_ABI_CALL(0x00293043u, sub_00293043); /* call 0x00293043 */

loc_002A3193: ;
    SET_LO8(eax, MEM8(0x2AAC5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(0x2AAC50);
    MEM32(edi + 0x10) = ecx;
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_002A3213; /* jns: not sign (positive) */

loc_002A31A5: ;
    edi = MEM32(0x2AAC60);
    edx = MEM32(esi + 0x8D8);
    eax = MEM32(0x2AAC54);
    PUSH32(esp, 0x2AAC48);
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1FF)) >> 32) & 1);
    edi = edi + 0x1FF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFE00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2AAC40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7FC); PUSH32(esp, 0x002A31DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002A31D5u); } /* indirect call */
    }

loc_002A31DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002A3273; /* jl: less (signed <) */

loc_002A31E3: ;
    edx = MEM32(0x2AAC50);
    ecx = MEM32(0x2AAC48);
    eax = MEM32(0x2AAC4C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, ebp);
    MEM32(0x2AAC50) = edx;
    MEM32(0x2AAC48) = ecx;
    MEM32(0x2AAC4C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002A3213: ;
    eax = MEM32(esi + 0x8D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002A3273; /* jne: not equal / not zero */

loc_002A321D: ;
    ebp = 0x26000000;
    MEM32(esi + 0x8D0) = ebp;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0xFFFFFFEFu;
    /* nop */

loc_002A3230: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002A3237u); RECOMP_ABI_CALL(0x00281CC1u, sub_00281CC1); /* call 0x00281CC1 */

loc_002A3237: ;
    ecx = edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2710 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002A3265; /* jb: below (unsigned <) */

loc_002A3242: ;
    ecx = MEM32(esi + 0x8D4);
    eax = MEM32(0x2AAC50);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x8D0) = 0;
    MEM32(esi + 0x8D4) = ecx;
    MEM32(0x2AAC50) = eax;

loc_002A3265: ;
    _fa = (uint32_t)(MEM32(esi + 0x8D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8D0), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002A3230; /* je: equal / zero */

loc_002A326D: ;
    MEM32(0x2AAC50) = MEM32(0x2AAC50) + 1;
    _fa = (uint32_t)(MEM32(0x2AAC50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002A3273: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002A3280
 * Original: 0x002A3280 - 0x002A37E4 (1380 bytes, 409 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A3280: ;
    eax = MEM32(0x2AAC58);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x2A8498);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002A32AD; /* je: equal / zero */

loc_002A3299: ;
    _fa = (uint32_t)(MEM8(ebp + 0x8D4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x8D4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002A32AD; /* je: equal / zero */

loc_002A32A2: ;
    MEM32(0x2A83FC) = eax;
    MEM32(0x2AAC58) = ebx;

loc_002A32AD: ;
    ecx = MEM32(ebp + 0x8D0);
    eax = ecx;
    eax = eax & 0xFF000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28000000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002A369F; /* ja: above (unsigned >) */

loc_002A32C5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002A367D; /* je: equal / zero */

loc_002A32CB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A3692; /* je: equal / zero */

loc_002A32D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A3366; /* je: equal / zero */

loc_002A32E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A37DC; /* jne: not equal / not zero */

loc_002A32EB: ;
    SET_LO8(eax, MEM8(0x2AAC5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_002A332A; /* jns: not sign (positive) */

loc_002A32F4: ;
    eax = MEM32(0x2AAC54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A332A; /* je: equal / zero */

loc_002A32FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    ecx = esp + 0x1B;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2AAC40);
    PUSH32(esp, eax);
    MEM8(esp + 0x27) = 1;
    { uint32_t _icall_target = MEM32(0x31C77C); PUSH32(esp, 0x002A3317u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002A3311u); } /* indirect call */
    }

loc_002A3317: ;
    edx = MEM32(0x2AAC54);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x002A3324u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002A331Eu); } /* indirect call */
    }

loc_002A3324: ;
    MEM32(0x2AAC54) = edi;

loc_002A332A: ;
    edx = MEM32(ebp + 0x8D4);
    eax = MEM32(ebp + 0x8D8);
    edx = edx & 0xFFFFFFCFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x8D4) = edx;
    MEM32(ebp + 0x8D0) = 0x24000000;
    if (CMP_EQ(_fa, _fb)) goto loc_002A3358; /* je: equal / zero */

loc_002A334D: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A3358u); RECOMP_ABI_CALL(0x00284A3Eu, sub_00284A3E); /* call 0x00284A3E */

loc_002A3358: ;
    MEM32(ebp + 0x8D8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002A3366: ;
    eax = MEM32(ebp + 0x8D8);
    ecx = MEM32(eax);
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 0xC);
    MEM32(0x2AAC5C) = ecx;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(0x2AAC6C) = edx;
    MEM32(0x2AAC68) = eax;
    MEM32(0x2AAC58) = ebx;
    PUSH32(esp, 0x002A3398u); RECOMP_ABI_CALL(0x00293043u, sub_00293043); /* call 0x00293043 */

loc_002A3398: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002A33A9u); RECOMP_ABI_CALL(0x0028A9A0u, sub_0028A9A0); /* call 0x0028A9A0 */

loc_002A33A9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A33B6u); RECOMP_ABI_CALL(0x0028AE80u, sub_0028AE80); /* call 0x0028AE80 */

loc_002A33B6: ;
    PUSH32(esp, ebx);
    MEM32(0x2AAC30) = eax;
    MEM32(0x2AAC34) = edx;
    MEM32(0x2AAC38) = edi;
    MEM32(0x2AAC3C) = edi;
    PUSH32(esp, 0x002A33D3u); RECOMP_ABI_CALL(0x00297EA0u, sub_00297EA0); /* call 0x00297EA0 */

loc_002A33D3: ;
    ebx = eax;
    eax = MEM32(0x2AAC5C);
    esi = MEM32(ebx + 0x10);
    edx = eax;
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002A3404; /* jne: not equal / not zero */

loc_002A33F3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebx + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002A340F;

loc_002A3404: ;
    eax = esi;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002A340F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A3425; /* jne: not equal / not zero */

loc_002A3413: ;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002A342C;

loc_002A3425: ;
    esi = esi & 0xFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002A342C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 0x1C;
    PUSH32(esp, ecx);
    ecx = edx;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi >> LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002A344Eu); RECOMP_ABI_CALL(0x002A2E00u, sub_002A2E00); /* call 0x002A2E00 */

loc_002A344E: ;
    ebx = MEM32(esp + 0x50);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A3469; /* jne: not equal / not zero */

loc_002A3456: ;
    ecx = MEM32(esp + 0x4C);
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002A3475;

loc_002A3469: ;
    edi = ebx;
    edi = edi >> 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002A3475: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002A347Fu); RECOMP_ABI_CALL(0x00297BB0u, sub_00297BB0); /* call 0x00297BB0 */

loc_002A347F: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x58) = 0x28;
    if (CMP_NE(_fa, _fb)) goto loc_002A34A8; /* jne: not equal / not zero */

loc_002A3495: ;
    ecx = MEM32(esp + 0x4C);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002A34B0;

loc_002A34A8: ;
    eax = ebx;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002A34B0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002A34CB; /* jne: not equal / not zero */

loc_002A34B8: ;
    ecx = MEM32(esp + 0x4C);
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 1;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002A34D5;

loc_002A34CB: ;
    ebx = ebx >> 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002A34D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x60) = ebx;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEM16(esp + 0x68) = 1;
    MEM32(esp + 0x6C) = edi;
    MEM32(esp + 0x70) = esi;
    MEM32(0x2AAC60) = esi;
    eax = eax * 8 + 0x10;
    MEM16(esp + 0x6A) = LO16(eax);
    MEM32(esp + 0x74) = edi;
    MEM32(esp + 0x78) = edi;
    MEM32(esp + 0x7C) = edi;
    PUSH32(esp, 0x002A3519u); RECOMP_ABI_CALL(0x00297BB0u, sub_00297BB0); /* call 0x00297BB0 */

loc_002A3519: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    MEM32(esp + 0x80) = eax;
    PUSH32(esp, 0x002A352Au); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_002A352A: ;
    eax = esi + 0x1FF;
    eax = eax & 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xAE800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A3540u); RECOMP_ABI_CALL(0x0028499Eu, sub_0028499E); /* call 0x0028499E */

loc_002A3540: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x8D8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002A355C; /* jne: not equal / not zero */

loc_002A354A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D0) = 0x25000003;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002A355C: ;
    edi = eax;
    SET_LO8(eax, MEM8(0x2AAC5C));
    ecx = 0xA;
    esi = esp + 0x58;
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
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_002A3656; /* jns: not sign (positive) */

loc_002A3578: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A7260);
    MEM32(0x2AAC54) = 0xFFFFFFFFu;
    PUSH32(esp, 0x002A3593u); RECOMP_ABI_CALL(0x00281E45u, sub_00281E45); /* call 0x00281E45 */

loc_002A3593: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A35AA; /* jne: not equal / not zero */

loc_002A3597: ;
    PUSH32(esp, 0x002A359Cu); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_002A359C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A7238);
    PUSH32(esp, 0x002A35A7u); RECOMP_ABI_CALL(0x002A38C0u, sub_002A38C0); /* call 0x002A38C0 */

loc_002A35A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A35AA: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002A35C5; /* jl: less (signed <) */

loc_002A35B0: ;
    eax = 0x40000000;
    if (CMP_G(_fas, _fbs)) goto loc_002A35BD; /* jg: greater (signed >) */

loc_002A35B7: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002A35C5; /* jbe: below or equal (unsigned <=) */

loc_002A35BD: ;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = esi;

loc_002A35C5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2AAC40);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40100100);
    PUSH32(esp, 0x2AAC54);
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x54) = 0x40;
    MEM32(esp + 0x50) = 0x3366E0;
    { uint32_t _icall_target = MEM32(0x31C7F8); PUSH32(esp, 0x002A35FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002A35F7u); } /* indirect call */
    }

loc_002A35FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002A360C; /* jge: greater or equal (signed >=) */

loc_002A3601: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A721C);
    goto loc_002A37AC;

loc_002A360C: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(0x2AAC54);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(0x2AAC48) = esi;
    MEM32(0x2AAC4C) = esi;
    PUSH32(esp, 0x002A3630u); RECOMP_ABI_CALL(0x002814D9u, sub_002814D9); /* call 0x002814D9 */

loc_002A3630: ;
    eax = MEM32(0x2AAC54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A363Bu); RECOMP_ABI_CALL(0x0028135Bu, sub_0028135B); /* call 0x0028135B */

loc_002A363B: ;
    ecx = MEM32(0x2AAC4C);
    edx = MEM32(0x2AAC48);
    eax = MEM32(0x2AAC54);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A3656u); RECOMP_ABI_CALL(0x002814D9u, sub_002814D9); /* call 0x002814D9 */

loc_002A3656: ;
    eax = MEM32(ebp + 0x8D4);
    POP32(esp, edi);
    MEM32(0x2AAC50) = esi;
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(ebp + 0x8D4) = eax;
    MEM32(ebp + 0x8D0) = 0x22000000;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002A367D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A3692; /* je: equal / zero */

loc_002A3681: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002A3688u); RECOMP_ABI_CALL(0x00281CC1u, sub_00281CC1); /* call 0x00281CC1 */

loc_002A3688: ;
    eax = MEM32(ebp + 0x8D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A3681; /* jne: not equal / not zero */

loc_002A3692: ;
    PUSH32(esp, 0x002A3697u); RECOMP_ABI_CALL(0x002A2F00u, sub_002A2F00); /* call 0x002A2F00 */

loc_002A3697: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002A369F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x29000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A3700; /* je: equal / zero */

loc_002A36A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A37DC; /* jne: not equal / not zero */

loc_002A36B1: ;
    ecx = MEM32(ebp + 0x8D8);
    eax = MEM32(ecx);
    MEM32(0x2AAC64) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002A36D3; /* je: equal / zero */

loc_002A36C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D0) = 0x44000004;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002A36D3: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x2A7214);
    PUSH32(esp, 0x2A7208);
    PUSH32(esp, 0x2A7200);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002A36EBu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_002A36EB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D0) = 0x43000000;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002A3700: ;
    edx = MEM32(ebp + 0x8D4);
    edx = edx & 0xFFFFFFEFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x8D4) = edx;
    eax = MEM32(0x2AAC54);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A3722u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_002A3722: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A3749; /* jne: not equal / not zero */

loc_002A3729: ;
    PUSH32(esp, 0x2A718C);
    PUSH32(esp, 0x002A3733u); RECOMP_ABI_CALL(0x002A38C0u, sub_002A38C0); /* call 0x002A38C0 */

loc_002A3733: ;
    eax = MEM32(0x2AAC50);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002A374B; /* jle: less or equal (signed <=) */

loc_002A3741: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x2AAC50) = eax;
    goto loc_002A374B;

loc_002A3749: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002A374B: ;
    edi = MEM32(0x2AAC6C);
    ecx = MEM32(0x2AAC54);
    edi = edi & 0xFFFFFFFEu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(0x2AAC6C) = edi;
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x002A3767u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002A3761u); } /* indirect call */
    }

loc_002A3767: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2AAC40);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x80110000u);
    PUSH32(esp, 0x2AAC54);
    MEM32(0x2AAC54) = ebx;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x60) = 0x40;
    MEM32(esp + 0x5C) = 0x3366E0;
    { uint32_t _icall_target = MEM32(0x31C7F8); PUSH32(esp, 0x002A37A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002A379Cu); } /* indirect call */
    }

loc_002A37A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002A37C6; /* jge: greater or equal (signed >=) */

loc_002A37A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A71CC);

loc_002A37AC: ;
    PUSH32(esp, 0x002A37B1u); RECOMP_ABI_CALL(0x002A38C0u, sub_002A38C0); /* call 0x002A38C0 */

loc_002A37B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D0) = 0x25000004;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002A37C6: ;
    MEM32(0x2AAC48) = esi;
    MEM32(0x2AAC4C) = esi;
    MEM32(ebp + 0x8D0) = 0x2A000000;

loc_002A37DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002A37F0
 * Original: 0x002A37F0 - 0x002A3841 (81 bytes, 25 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A37F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A37F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002A37FDu); RECOMP_ABI_CALL(0x0028499Eu, sub_0028499E); /* call 0x0028499E */

loc_002A37FD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A3807; /* jne: not equal / not zero */

loc_002A3803: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002A3807: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esi) = 0x1050001;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x002A383Bu); RECOMP_ABI_CALL(0x00298FB0u, sub_00298FB0); /* call 0x00298FB0 */

loc_002A383B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002A3850
 * Original: 0x002A3850 - 0x002A3880 (48 bytes, 13 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A3850: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1050001;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002A3880
 * Original: 0x002A3880 - 0x002A3894 (20 bytes, 7 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3880(void)
{

loc_002A3880: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002A3891u); RECOMP_ABI_CALL(0x0029EC70u, sub_0029EC70); /* call 0x0029EC70 */

loc_002A3891: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002A38A0
 * Original: 0x002A38A0 - 0x002A38C0 (32 bytes, 12 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A38A0(void)
{

loc_002A38A0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A38BDu); RECOMP_ABI_CALL(0x0029EF60u, sub_0029EF60); /* call 0x0029EF60 */

loc_002A38BD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002A38C0
 * Original: 0x002A38C0 - 0x002A38F3 (51 bytes, 14 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A38C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A38C0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0x10C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002A38E2u); RECOMP_ABI_CALL(0x0028AFEDu, sub_0028AFED); /* call 0x0028AFED */

loc_002A38E2: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A38ECu); RECOMP_ABI_CALL(0x00284E64u, sub_00284E64); /* call 0x00284E64 */

loc_002A38EC: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002A3900
 * Original: 0x002A3900 - 0x002A3991 (145 bytes, 56 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A3900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_002A3910: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 8);
    eax = ecx;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x20000000 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(edx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002A396B; /* je: equal / zero */

loc_002A392B: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(ebx + 0xC);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A396B; /* je: equal / zero */

loc_002A393C: ;
    /* nop */

loc_002A3940: ;
    edi = MEM32(eax + 4);
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ebp = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
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
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A3940; /* jne: not equal / not zero */

loc_002A3967: ;
    ecx = MEM32(esp + 0x10);

loc_002A396B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebx + 4);
    MEM32(ebx + 4) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_002A3981; /* jns: not sign (positive) */

loc_002A3979: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = ecx;

loc_002A3981: ;
    ebx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002A3910; /* ja: above (unsigned >) */

loc_002A3989: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002A39A0
 * Original: 0x002A39A0 - 0x002A3C3C (668 bytes, 211 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A39A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A39A0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x002A39B7u); RECOMP_ABI_CALL(0x002A2250u, sub_002A2250); /* call 0x002A2250 */

loc_002A39B7: ;
    ebx = MEM32(esp + 0x40);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_002A3C10; /* js: sign (negative) */

loc_002A39C4: ;
    eax = MEM32(ebx + 0xC);
    edi = MEM32(ebx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_002A39FB; /* je: equal / zero */

loc_002A39E3: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x10) = 0x20000000;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;

loc_002A39FB: ;
    SET_LO8(eax, MEM8(esi + 8));
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    eax = MEM32(esi);
    if (TEST_NZ(_fa, _fb)) goto loc_002A3BA0; /* jne: not equal / not zero */

loc_002A3A0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_002A3A1C; /* jb: below (unsigned <) */

loc_002A3A13: ;
    PUSH32(esp, 0x002A3A18u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_002A3A18: ;
    MEM32(esp + 0x18) = eax;

loc_002A3A1C: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    ecx = MEM32(esi + 0x2C);
    MEM32(esp + 0x1C) = edx;
    edx = ecx;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    ecx = edi;
    if (CMP_B(_fa, _fb)) goto loc_002A3A83; /* jb: below (unsigned <) */

loc_002A3A37: ;
    edx = MEM32(esp + 0x20);
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = edi;
    PUSH32(esp, 0x002A3A78u); RECOMP_ABI_CALL(0x002A3900u, sub_002A3900); /* call 0x002A3900 */

loc_002A3A78: ;
    edx = MEM32(esi + 0x50);
    MEM32(ebx + 0x14) = edx;
    goto loc_002A3B79;

loc_002A3A83: ;
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x40100;
    MEM32(eax + 4) = 0;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = ecx;
    ecx = eax + 0xC;
    eax = MEM32(esi + 0x48);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + eax * 4;
    ebx = esi + edx * 4 + 0x260;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x40000000 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002A3AD9; /* jne: not equal / not zero */

loc_002A3AB9: ;
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebp;
    ebp = eax;
    ebp = ebp << 5;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebp | 0xD;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x48) = eax;
    goto loc_002A3AF6;

loc_002A3AD9: ;
    ebx = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebp;
    ebp = ebx;
    ebp = ebp << 5;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebp | 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002A3AF6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x14);
    MEM32(ebx) = eax;
    eax = edi + ecx;
    MEM32(ebx + 4) = 0;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = edx;
    MEM32(ebx + 0x10) = edi;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = esi + 0x4C;
    MEM32(esp + 0x20) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_002A3B4F; /* jbe: below or equal (unsigned <=) */

loc_002A3B25: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x50) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A3B4F; /* je: equal / zero */

loc_002A3B31: ;
    edx = MEM32(esi + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    eax = 0;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x20);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A3B6A; /* je: equal / zero */

loc_002A3B4F: ;
    MEM32(esp + 0x20) = edi;
    eax = 1;
    ecx = MEM32(esp + 0x20);
    { uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), eax);
      eax = _old; }  /* xadd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x18);
    MEM32(eax + 4) = ebp;

loc_002A3B6A: ;
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esi + 0x50);
    MEM32(edx + 0x14) = ecx;
    MEM32(esi + 0x54) = ebx;
    ebx = edx;

loc_002A3B79: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esi + 0x3C);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 0x3C) = edx;
    ecx = MEM32(0x2AAC20);
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002A3BF2; /* jbe: below or equal (unsigned <=) */

loc_002A3B97: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002A3B9Eu); RECOMP_ABI_CALL(0x0029D1E0u, sub_0029D1E0); /* call 0x0029D1E0 */

loc_002A3B9E: ;
    goto loc_002A3BF2;

loc_002A3BA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002A3BA9; /* jb: below (unsigned <) */

loc_002A3BA4: ;
    PUSH32(esp, 0x002A3BA9u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_002A3BA9: ;
    ecx = eax + 0xC;
    MEM32(eax) = 0x40100;
    edx = ecx;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | 0xE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    edx = edi;
    edx = edx & 0xFFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = edx;
    eax = ecx + 0x14;
    edx = eax;
    edx = edx & 0xFFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 4) = 0;
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edi;
    MEM32(esi) = eax;

loc_002A3BF2: ;
    eax = MEM32(esi + 0x2C);
    MEM32(ebx + 8) = eax;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A3C32; /* je: equal / zero */

loc_002A3C00: ;
    ecx = MEM32(esi + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002A3C10: ;
    edi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x002A3C1Fu); RECOMP_ABI_CALL(0x0029D550u, sub_0029D550); /* call 0x0029D550 */

loc_002A3C1F: ;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002A3C2Cu); RECOMP_ABI_CALL(0x002A2780u, sub_002A2780); /* call 0x002A2780 */

loc_002A3C2C: ;
    eax = ebp + edi * 4;
    MEM32(esi) = eax;

loc_002A3C32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002A3C40
 * Original: 0x002A3C40 - 0x002A3CCE (142 bytes, 55 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A3C40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ebx + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_002A3C57; /* jne: not equal / not zero */

loc_002A3C52: ;
    eax = 0x18;

loc_002A3C57: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A3C62u); RECOMP_ABI_CALL(0x0028499Eu, sub_0028499E); /* call 0x0028499E */

loc_002A3C62: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A3CC8; /* je: equal / zero */

loc_002A3C6A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(esi) = 0x1020001;
    if (CMP_EQ(_fa, _fb)) goto loc_002A3C9E; /* je: equal / zero */

loc_002A3C87: ;
    edx = esi + 0x18;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ebx;
    MEM32(esi) = 0x81020001u;
    MEM32(esi + 4) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002A3C9E: ;
    PUSH32(esp, 0xB2800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002A3CA9u); RECOMP_ABI_CALL(0x0028499Eu, sub_0028499E); /* call 0x0028499E */

loc_002A3CA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A3CC0; /* jne: not equal / not zero */

loc_002A3CAD: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002A3CB8u); RECOMP_ABI_CALL(0x00284A3Eu, sub_00284A3E); /* call 0x00284A3E */

loc_002A3CB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002A3CC0: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = ebx;
    eax = esi;

loc_002A3CC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002A3CD0
 * Original: 0x002A3CD0 - 0x002A3D35 (101 bytes, 28 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A3CD0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002A3CE1u); RECOMP_ABI_CALL(0x002A2250u, sub_002A2250); /* call 0x002A2250 */

loc_002A3CE1: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002A3CEBu); RECOMP_ABI_CALL(0x0029D640u, sub_0029D640); /* call 0x0029D640 */

loc_002A3CEB: ;
    MEM32(esi + 0x760) = edi;
    MEM32(esi + 0x764) = 0;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 0x80000;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x76C) = eax;
    MEM32(esi + 0x768) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi) = edx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 4);
    edx = eax + ecx + -516;
    eax = MEM32(esi + 8);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002A3D40
 * Original: 0x002A3D40 - 0x002A3DCD (141 bytes, 41 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A3D40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002A3D51u); RECOMP_ABI_CALL(0x002A2250u, sub_002A2250); /* call 0x002A2250 */

loc_002A3D51: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A3D5Bu); RECOMP_ABI_CALL(0x002A3DD0u, sub_002A3DD0); /* call 0x002A3DD0 */

loc_002A3D5B: ;
    eax = MEM32(esi + 0x760);
    edx = MEM32(eax + 4);
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x764);
    ecx = ecx + edx + 4;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esi + 0x768);
    edx = MEM32(esi + 0x76C);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFF7Bu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x760);
    MEM32(esi) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002A3DAD; /* jne: not equal / not zero */

loc_002A3DA7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A3DADu); RECOMP_ABI_CALL(0x00298E90u, sub_00298E90); /* call 0x00298E90 */

loc_002A3DAD: ;
    eax = MEM32(esi + 0x764);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002A3DBF; /* je: equal / zero */

loc_002A3DB8: ;
    eax = 0x88760829u;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002A3DBF: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0xFF7F7F;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A3DD0
 * Original: 0x002A3DD0 - 0x002A3E73 (163 bytes, 63 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A3DD0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi + 0x760);
    edx = MEM32(eax + 4);
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x480;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((3) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002A3E5D; /* jle: less or equal (signed <=) */

loc_002A3DFB: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_002A3E68; /* js: sign (negative) */

loc_002A3E02: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = edi + 1;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x002A3E15u); RECOMP_ABI_CALL(0x0029D550u, sub_0029D550); /* call 0x0029D550 */

loc_002A3E15: ;
    edx = eax;
    ebx = edi * 4;
    eax = edi;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40000100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40000100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    ecx = ebx;
    ebp = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(esi + 0x760);
    eax = ebx + edx + 4;
    MEM32(esi) = eax;
    edx = MEM32(ecx + 4);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002A3E5D: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002A3E68: ;
    edx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002A3E80
 * Original: 0x002A3E80 - 0x002A3E83 (3 bytes, 1 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3E80(void)
{

loc_002A3E80: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002A3E83
 * Original: 0x002A3E83 - 0x002A3FEA (359 bytes, 116 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002A3E83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A3E83: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi + 0x200;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x154) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002A3EA4; /* jne: not equal / not zero */

loc_002A3EA2: ;
    MEM32(ecx) = eax;

loc_002A3EA4: ;
    eax = MEM32(edi + 0x140);
    MEM32(esi + 0x158) = eax;
    MEM32(ecx) = 0xFFFFFFFFu;
    eax = edi + 0x680504;
    ecx = MEM32(eax);
    ebx = 0xFF;
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx;
    ecx = ZX8(MEM8(eax + 1));
    eax = MEM32(eax);
    MEM32(ebp + -4) = edx;
    MEM32(esi + 0xD0) = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    MEM32(esi + 0xD4) = ecx;
    MEM32(esi + 0xD8) = edx;
    MEM32(esi + 0xDC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002A3F1D; /* je: equal / zero */

loc_002A3EFA: ;
    eax = MEM32(esi + 0xBC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = edx;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + -8);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002A3F1F;

loc_002A3F1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002A3F1F: ;
    MEM32(esi + 0xC4) = eax;
    eax = edi + 0x680508;
    ecx = MEM32(eax);
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ecx;
    ecx = ZX8(MEM8(eax + 1));
    eax = MEM32(eax);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0xE0) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esi + 0xE4) = ecx;
    MEM32(esi + 0xE8) = edx;
    MEM32(esi + 0xEC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002A3F88; /* je: equal / zero */

loc_002A3F65: ;
    eax = MEM32(esi + 0xBC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = edx;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + -8);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002A3F8A;

loc_002A3F88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002A3F8A: ;
    MEM32(esi + 0xC8) = eax;
    eax = edi + 0x680500;
    ecx = MEM32(eax);
    edi = ZX8(MEM8(eax + 1));
    eax = MEM32(eax);
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = eax;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = edi;
    MEM32(esi + 0xF8) = edx;
    MEM32(esi + 0xFC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002A3FDD; /* je: equal / zero */

loc_002A3FC6: ;
    eax = MEM32(esi + 0xBC);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = edx;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    goto loc_002A3FDF;

loc_002A3FDD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002A3FDF: ;
    POP32(esp, edi);
    MEM32(esi + 0xCC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002A3FEA
 * Original: 0x002A3FEA - 0x002A40E8 (254 bytes, 72 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002A3FEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A3FEA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = MEM32(edi + 0x100200);
    MEM32(esi + 0x14C) = eax;
    eax = MEM32(edi + 0x100204);
    MEM32(esi + 0x150) = eax;
    eax = MEM32(edi + 0x1218);
    ecx = 0x100;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ebx = 0x5000;
    PUSH32(esp, ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xB0) = edx;
    { uint32_t _icall_target = MEM32(0x31C908); PUSH32(esp, 0x002A4039u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002A4033u); } /* indirect call */
    }

loc_002A4039: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x10) = eax;
    eax = ecx + 0x700000;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x130) = eax;
    ecx = ecx & 0x1F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x3000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x2210) = ecx;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x128;
    MEM32(ecx) = eax;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    edx = edx & 0x1FC00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x12C) = eax;
    edx = edx | 0x200;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1FC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFF900020u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFF900020u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x2214) = edx;
    MEM32(esi + 0x160) = eax;
    ecx = edi + 0x100214;
    eax = MEM32(ecx);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    eax = 0x700000;

loc_002A40BE: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x705000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x705000 (32-bit) */
    MEM32(ecx + edi) = 0;
    if (CMP_B(_fa, _fb)) goto loc_002A40BE; /* jb: below (unsigned <) */

loc_002A40D4: ;
    PUSH32(esp, 8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002A40DDu); RECOMP_ABI_CALL(0x0029FFB7u, sub_0029FFB7); /* call 0x0029FFB7 */

loc_002A40DD: ;
    POP32(esp, edi);
    MEM32(esi + 0x140) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002A40E8
 * Original: 0x002A40E8 - 0x002A41B7 (207 bytes, 49 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A40E8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A40E8: ;
    eax = MEM32(ecx);
    MEM8(eax + 0x6013D4) = 0x1F;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x6013D5));
    MEM8(eax + 0x6013D4) = 0x1F;
    MEM8(eax + 0x6013D5) = 0x57;
    MEM8(eax + 0x6013D4) = 0x52;
    SET_LO8(ecx, MEM8(eax + 0x6013D5));
    MEM8(eax + 0x6013D4) = 0x52;
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax + 0x6013D5) = LO8(ecx);
    ecx = MEM32(eax + 0x8088);
    ecx = ecx & 0xFFFFF43Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x400;
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x8088) = ecx;
    ecx = MEM32(eax + 0x8088);
    ecx = ecx & 0xF43FFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0x4000000;
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x8088) = ecx;
    ecx = eax + 0x808C;
    edx = MEM32(ecx);
    edx = edx & 0xFFFFF40Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    edx = MEM32(ecx);
    edx = edx & 0xF40FFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    MEM8(eax + 0x6013D4) = 0x20;
    MEM8(eax + 0x6013D5) = 0x29;
    MEM8(eax + 0x6013D4) = 0x1B;
    edx = eax + 0x600804;
    MEM8(eax + 0x6013D5) = 5;
    ecx = MEM32(edx);
    ecx = ecx & 0xFFFFFFFAu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002A41B6; /* jne: not equal / not zero */

loc_002A41A8: ;
    MEM8(eax + 0x6013D4) = 0x1F;
    MEM8(eax + 0x6013D5) = 0x99;

loc_002A41B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002A41B7
 * Original: 0x002A41B7 - 0x002A41ED (54 bytes, 18 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A41B7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A41B7: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    _fb = (uint32_t)(0x8918) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8918;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    edx = 0x1000;
    ecx = 0x100000;

loc_002A41CC: ;
    MEM32(eax + -8) = edx;
    MEM32(eax) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A41CC; /* jne: not equal / not zero */

loc_002A41EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002A41ED
 * Original: 0x002A41ED - 0x002A421D (48 bytes, 15 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A41ED(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A41ED: ;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 0x140);
    eax = ecx;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x400780) = eax;
    eax = ecx + 0x70000;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);

loc_002A4210: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4210; /* jne: not equal / not zero */

loc_002A421C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002A421D
 * Original: 0x002A421D - 0x002A428E (113 bytes, 19 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A421D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A421D: ;
    eax = MEM32(ecx);
    MEM32(ecx + 0x120) = 0xFF;
    MEM32(ecx + 0x124) = 0x800000;
    MEM32(ecx + 0x11C) = 0x1111111;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3210) = edx;
    MEM32(eax + 0x3270) = edx;
    MEM32(eax + 0x3240) = edx;
    MEM32(eax + 0x3244) = edx;
    MEM32(eax + 0x3058) = edx;
    MEM32(eax + 0x3258) = edx;
    ecx = MEM32(ecx + 0x104);
    MEM32(eax + 0x2504) = ecx;
    MEM32(eax + 0x2508) = edx;
    MEM32(eax + 0x250C) = edx;
    MEM32(eax + 0x3228) = edx;
    MEM32(eax + 0x2410) = edx;
    MEM32(eax + 0x2420) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002A428E
 * Original: 0x002A428E - 0x002A42CD (63 bytes, 23 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A428E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A428E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = MEM32(esi + 0x400700);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A42CA; /* je: equal / zero */

loc_002A429E: ;
    PUSH32(esp, ebx);

loc_002A429F: ;
    ebx = MEM32(esi + 0x100);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002A42B1; /* je: equal / zero */

loc_002A42AA: ;
    ecx = edi;
    PUSH32(esp, 0x002A42B1u); RECOMP_ABI_CALL(0x0029FCA0u, sub_0029FCA0); /* call 0x0029FCA0 */

loc_002A42B1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002A42C0; /* je: equal / zero */

loc_002A42B9: ;
    ecx = edi;
    PUSH32(esp, 0x002A42C0u); RECOMP_ABI_CALL(0x0029F730u, sub_0029F730); /* call 0x0029F730 */

loc_002A42C0: ;
    _fa = (uint32_t)(MEM32(esi + 0x400700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400700), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A429F; /* jne: not equal / not zero */

loc_002A42C9: ;
    POP32(esp, ebx);

loc_002A42CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002A42CD
 * Original: 0x002A42CD - 0x002A4306 (57 bytes, 15 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A42CD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A42CD: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, 2);
    POP32(esp, edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A4302; /* je: equal / zero */

loc_002A42DB: ;
    eax = MEM32(ecx + eax * 4 + 0x138);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x400784) = eax;
    MEM32(esi + 0x400788) = edx;
    PUSH32(esp, 0x002A42F8u); RECOMP_ABI_CALL(0x002A428Eu, sub_002A428E); /* call 0x002A428E */

loc_002A42F8: ;
    MEM32(esi + 0x400144) = 0x10000000;

loc_002A4302: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002A4306
 * Original: 0x002A4306 - 0x002A4503 (509 bytes, 132 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002A4306(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A4306: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x2500);
    ebx = MEM32(esi + 0x128);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(eax + 0x3200);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(eax + 0x3250);
    MEM32(ebp + -12) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x2500) = ecx;
    MEM32(eax + 0x3200) = ecx;
    MEM32(eax + 0x3250) = ecx;
    ecx = MEM32(eax + 0x3204);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x3240);
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    edi = MEM32(eax + 0x3244);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + 0x3248);
    MEM32(edx + 8) = edi;
    edi = MEM32(eax + 0x322C);
    MEM32(edx + 0xC) = edi;
    edi = MEM32(eax + 0x3228);
    MEM32(edx + 0x10) = edi;
    edi = MEM32(eax + 0x3224);
    MEM32(edx + 0x14) = edi;
    edi = MEM32(eax + 0x3280);
    MEM32(edx + 0x18) = edi;
    edi = MEM32(eax + 0x3254);
    MEM32(edx + 0x1C) = edi;
    edi = MEM32(eax + 0x3268);
    MEM32(edx + 0x20) = edi;
    edi = MEM32(eax + 0x3264);
    MEM32(edx + 0x24) = edi;
    edi = MEM32(eax + 0x3260);
    MEM32(edx + 0x28) = edi;
    edi = MEM32(eax + 0x326C);
    MEM32(edx + 0x2C) = edi;
    edi = MEM32(eax + 0x324C);
    MEM32(edx + 0x30) = edi;
    edx = MEM32(eax + 0x3204);
    edi = 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002A440E; /* je: equal / zero */

loc_002A43DD: ;
    edx = MEM32(eax + 0x2508);
    MEM32(ebp + -4) = 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) << LO8(ecx);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -4);
    ecx = ~ecx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = edx;
    edx = MEM32(eax + 0x3240);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x3244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x3244) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A4408; /* je: equal / zero */

loc_002A4405: ;
    ecx = ecx | MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002A4408: ;
    MEM32(eax + 0x2508) = ecx;

loc_002A440E: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x3204) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x104), edx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002A443F; /* je: equal / zero */

loc_002A442C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A443F; /* je: equal / zero */

loc_002A4431: ;
    ecx = MEM32(eax + 0x3204);
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x3204) = ecx;

loc_002A443F: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + eax;
    edi = MEM32(edx);
    MEM32(eax + 0x3240) = edi;
    edi = MEM32(edx + 4);
    MEM32(eax + 0x3244) = edi;
    edi = MEM32(edx + 8);
    MEM32(eax + 0x3248) = edi;
    edi = MEM32(edx + 0xC);
    MEM32(eax + 0x322C) = edi;
    edi = MEM32(edx + 0x10);
    MEM32(eax + 0x3228) = edi;
    edi = MEM32(edx + 0x14);
    MEM32(eax + 0x3224) = edi;
    edi = MEM32(edx + 0x18);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x3280) = edi;
    edi = MEM32(edx + 0x1C);
    MEM32(eax + 0x3254) = edi;
    edi = MEM32(edx + 0x20);
    MEM32(eax + 0x3268) = edi;
    edi = MEM32(edx + 0x24);
    MEM32(eax + 0x3264) = edi;
    edi = MEM32(edx + 0x28);
    MEM32(eax + 0x3260) = edi;
    edi = MEM32(edx + 0x2C);
    MEM32(eax + 0x326C) = edi;
    edx = MEM32(edx + 0x30);
    POP32(esp, edi);
    MEM32(eax + 0x324C) = edx;
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x104), ecx (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002A44DA; /* je: equal / zero */

loc_002A44CC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A44DA; /* je: equal / zero */

loc_002A44D4: ;
    MEM32(eax + 0x3220) = ecx;

loc_002A44DA: ;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 0x204C) = 0x1FFFFF;
    MEM32(eax + 0x3250) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x3200) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x2500) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002A4503
 * Original: 0x002A4503 - 0x002A4515 (18 bytes, 6 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A4503(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A4503: ;
    eax = MEM32(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x600100) = ecx;
    MEM32(eax + 0x600140) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002A4515
 * Original: 0x002A4515 - 0x002A46A2 (397 bytes, 115 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002A4515(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A4515: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = ecx;
    eax = MEM32(edx);
    ecx = MEM32(edx + 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2500);
    PUSH32(esp, edi);
    MEM32(eax + 0x2500) = 0;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002A4538: ;
    edi = MEM32(edx + 0x10C);
    edi = esi + edi * 4 + 0x1C0000;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDFC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xDFC (32-bit) */
    MEM32(eax + edi * 4) = 0;
    if (CMP_B(_fa, _fb)) goto loc_002A4538; /* jb: below (unsigned <) */

loc_002A4555: ;
    edi = MEM32(edx + 0x140);
    esi = MEM32(edx + 0x10C);
    edi = ecx + edi * 4 + 0x1C0000;
    MEM32(eax + edi * 4) = esi;
    esi = MEM32(edx + 0x10C);
    MEM32(edx + ecx * 4 + 0x138) = esi;
    esi = ecx;
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edx + 0x128)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0x128);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = esi;
    edi = esi;
    POP32(esp, ebx);

loc_002A458D: ;
    MEM32(edi) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A458D; /* jne: not equal / not zero */

loc_002A4599: ;
    edi = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    edi = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_002A45AD; /* jae: above or equal (unsigned >=) */

loc_002A45AA: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);

loc_002A45AD: ;
    esi = 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002A45B8; /* jbe: below or equal (unsigned <=) */

loc_002A45B6: ;
    ebx = esi;

loc_002A45B8: ;
    edi = MEM32(ebp + 0xC);
    ebx = ebx >> 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002A45C7; /* jae: above or equal (unsigned >=) */

loc_002A45C4: ;
    PUSH32(esp, 0x20);
    POP32(esp, edi);

loc_002A45C7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002A45CD; /* jbe: below or equal (unsigned <=) */

loc_002A45CB: ;
    edi = esi;

loc_002A45CD: ;
    esi = MEM32(ebp + 0x10);
    edi = edi >> 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002A45DC; /* jbe: below or equal (unsigned <=) */

loc_002A45D9: ;
    PUSH32(esp, 0xF);
    POP32(esp, esi);

loc_002A45DC: ;
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = esi;
    esi = MEM32(ebp + -4);
    MEM32(esi + 0x14) = ebx;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x104) = MEM32(edx + 0x104) | edi;
    _fa = (uint32_t)(MEM32(edx + 0x104)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(edx + 0x104);
    MEM32(eax + 0x2504) = esi;
    MEM32(eax + 0x3200) = 0;
    MEM32(eax + 0x3250) = 0;
    esi = eax + 0x3204;
    MEM32(esi) = ecx;
    _fa = (uint32_t)(MEM32(edx + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x104), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002A4642; /* je: equal / zero */

loc_002A4638: ;
    ecx = MEM32(esi);
    ecx = ecx | 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;

loc_002A4642: ;
    esi = MEM32(ebp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3240) = ecx;
    MEM32(eax + 0x3244) = ecx;
    esi = MEM32(esi + 0xC);
    MEM32(eax + 0x322C) = esi;
    MEM32(eax + 0x3230) = ecx;
    MEM32(eax + 0x3228) = ecx;
    MEM32(eax + 0x3280) = ecx;
    MEM32(eax + 0x3224) = ebx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edx + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x104), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002A4683; /* je: equal / zero */

loc_002A467D: ;
    MEM32(eax + 0x3220) = ecx;

loc_002A4683: ;
    MEM32(eax + 0x3250) = ecx;
    MEM32(eax + 0x3200) = ecx;
    MEM32(eax + 0x2500) = ecx;
    MEM32(edx + 0x108) = MEM32(edx + 0x108) | edi;
    _fa = (uint32_t)(MEM32(edx + 0x108)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002A46A2
 * Original: 0x002A46A2 - 0x002A46DB (57 bytes, 20 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002A46A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A46A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ebp + 8);
    ecx = ecx + edx * 8;
    edx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx | 0xFFFFFF80u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002A46DB
 * Original: 0x002A46DB - 0x002A4750 (117 bytes, 34 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A46DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A46DB: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    ecx = eax;
    PUSH32(esp, esi);
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x39) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x39;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_002A4716; /* je: equal / zero */

loc_002A46F2: ;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002A470F; /* je: equal / zero */

loc_002A46F7: ;
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002A4708; /* je: equal / zero */

loc_002A46FC: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_002A471C; /* jne: not equal / not zero */

loc_002A4701: ;
    esi = 0xA00;
    goto loc_002A471C;

loc_002A4708: ;
    esi = 0xB00;
    goto loc_002A471C;

loc_002A470F: ;
    esi = 0x201;
    goto loc_002A471C;

loc_002A4716: ;
    ecx = ecx | 0x1000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002A471C: ;
    eax = MEM32(esp + 0xC);
    edi = eax + 0x70000;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + edx) = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x700004) = esi;
    POP32(esp, edi);
    MEM32(eax + 0x700008) = 0;
    MEM32(eax + 0x70000C) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002A4750
 * Original: 0x002A4750 - 0x002A512F (2527 bytes, 568 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002A4750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A4750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x100);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + edx * 4 + 0x138);
    esi = edi + 0x70000;
    ecx = esi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx + eax;
    ecx = MEM32(edx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx) = ecx;
    ecx = esi;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + ecx * 4 + 0x33C) = 0xFFFF0000u;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + ecx * 4 + 0x340) = edx;
    MEM32(eax + ecx * 4 + 0x344) = edx;
    MEM32(eax + ecx * 4 + 0x348) = edx;
    MEM32(eax + ecx * 4 + 0x34C) = edx;
    MEM32(eax + ecx * 4 + 0x350) = edx;
    MEM32(eax + ecx * 4 + 0x354) = edx;
    MEM32(eax + ecx * 4 + 0x358) = edx;
    MEM32(eax + ecx * 4 + 0x35C) = edx;
    MEM32(eax + ecx * 4 + 0x360) = edx;
    MEM32(eax + ecx * 4 + 0x364) = edx;
    MEM32(eax + ecx * 4 + 0x368) = edx;
    MEM32(eax + ecx * 4 + 0x36C) = edx;
    MEM32(eax + ecx * 4 + 0x370) = edx;
    MEM32(eax + ecx * 4 + 0x374) = edx;
    MEM32(eax + ecx * 4 + 0x378) = edx;
    MEM32(eax + ecx * 4 + 0x37C) = edx;
    MEM32(eax + ecx * 4 + 0x380) = edx;
    MEM32(eax + ecx * 4 + 0x384) = edx;
    MEM32(eax + ecx * 4 + 0x388) = edx;
    MEM32(eax + ecx * 4 + 0x38C) = edx;
    MEM32(eax + ecx * 4 + 0x390) = edx;
    MEM32(eax + ecx * 4 + 0x394) = edx;
    MEM32(eax + ecx * 4 + 0x398) = edx;
    MEM32(eax + ecx * 4 + 0x39C) = edx;
    esi = 0xFFF0000;
    MEM32(eax + ecx * 4 + 0x3A0) = esi;
    MEM32(eax + ecx * 4 + 0x3A4) = esi;
    MEM32(eax + ecx * 4 + 0x3A8) = edx;
    MEM32(eax + ecx * 4 + 0x3AC) = edx;
    MEM32(eax + ecx * 4 + 0x3B0) = edx;
    MEM32(eax + ecx * 4 + 0x3B4) = edx;
    MEM32(eax + ecx * 4 + 0x3B8) = edx;
    MEM32(eax + ecx * 4 + 0x3BC) = edx;
    MEM32(eax + ecx * 4 + 0x3C0) = edx;
    MEM32(eax + ecx * 4 + 0x3C4) = edx;
    MEM32(eax + ecx * 4 + 0x3C8) = edx;
    MEM32(eax + ecx * 4 + 0x3CC) = edx;
    MEM32(eax + ecx * 4 + 0x3D0) = edx;
    MEM32(eax + ecx * 4 + 0x3D4) = edx;
    MEM32(eax + ecx * 4 + 0x3D8) = edx;
    MEM32(eax + ecx * 4 + 0x3DC) = edx;
    MEM32(eax + ecx * 4 + 0x3E0) = edx;
    MEM32(eax + ecx * 4 + 0x3E4) = edx;
    MEM32(eax + ecx * 4 + 0x3E8) = edx;
    MEM32(eax + ecx * 4 + 0x3EC) = edx;
    MEM32(eax + ecx * 4 + 0x3F0) = edx;
    MEM32(eax + ecx * 4 + 0x3F4) = edx;
    MEM32(eax + ecx * 4 + 0x3F8) = edx;
    MEM32(eax + ecx * 4 + 0x3FC) = edx;
    MEM32(eax + ecx * 4 + 0x400) = edx;
    MEM32(eax + ecx * 4 + 0x404) = edx;
    MEM32(eax + ecx * 4 + 0x408) = edx;
    MEM32(eax + ecx * 4 + 0x40C) = edx;
    MEM32(eax + ecx * 4 + 0x410) = edx;
    MEM32(eax + ecx * 4 + 0x414) = edx;
    MEM32(eax + ecx * 4 + 0x418) = edx;
    MEM32(eax + ecx * 4 + 0x41C) = edx;
    MEM32(eax + ecx * 4 + 0x420) = edx;
    MEM32(eax + ecx * 4 + 0x424) = edx;
    MEM32(eax + ecx * 4 + 0x428) = edx;
    MEM32(ebp + -20) = edi;
    MEM32(eax + ecx * 4 + 0x42C) = edx;
    MEM32(eax + ecx * 4 + 0x430) = edx;
    MEM32(eax + ecx * 4 + 0x434) = edx;
    MEM32(eax + ecx * 4 + 0x438) = edx;
    MEM32(eax + ecx * 4 + 0x43C) = edx;
    MEM32(eax + ecx * 4 + 0x440) = edx;
    MEM32(eax + ecx * 4 + 0x444) = edx;
    MEM32(eax + ecx * 4 + 0x448) = edx;
    MEM32(eax + ecx * 4 + 0x44C) = edx;
    MEM32(eax + ecx * 4 + 0x450) = edx;
    MEM32(eax + ecx * 4 + 0x454) = edx;
    MEM32(eax + ecx * 4 + 0x458) = edx;
    MEM32(eax + ecx * 4 + 0x45C) = edx;
    MEM32(eax + ecx * 4 + 0x460) = edx;
    MEM32(eax + ecx * 4 + 0x464) = edx;
    MEM32(eax + ecx * 4 + 0x468) = edx;
    MEM32(eax + ecx * 4 + 0x46C) = edx;
    MEM32(eax + ecx * 4 + 0x470) = edx;
    MEM32(eax + ecx * 4 + 0x474) = edx;
    MEM32(eax + ecx * 4 + 0x478) = edx;
    MEM32(eax + ecx * 4 + 0x47C) = 0x101;
    MEM32(eax + ecx * 4 + 0x480) = edx;
    MEM32(eax + ecx * 4 + 0x484) = edx;
    MEM32(eax + ecx * 4 + 0x488) = edx;
    MEM32(eax + ecx * 4 + 0x48C) = edx;
    MEM32(eax + ecx * 4 + 0x490) = 0x111;
    MEM32(eax + ecx * 4 + 0x494) = edx;
    MEM32(eax + ecx * 4 + 0x498) = edx;
    MEM32(eax + ecx * 4 + 0x49C) = edx;
    MEM32(eax + ecx * 4 + 0x4A0) = edx;
    MEM32(eax + ecx * 4 + 0x4A4) = edx;
    MEM32(eax + ecx * 4 + 0x4A8) = 0x44400000;
    MEM32(eax + ecx * 4 + 0x4AC) = edx;
    MEM32(eax + ecx * 4 + 0x4B0) = edx;
    MEM32(eax + ecx * 4 + 0x4B4) = edx;
    MEM32(eax + ecx * 4 + 0x4B8) = edx;
    MEM32(eax + ecx * 4 + 0x4BC) = edx;
    MEM32(eax + ecx * 4 + 0x4C0) = edx;
    MEM32(eax + ecx * 4 + 0x4C4) = edx;
    MEM32(eax + ecx * 4 + 0x4C8) = edx;
    MEM32(eax + ecx * 4 + 0x4CC) = edx;
    MEM32(eax + ecx * 4 + 0x4D0) = edx;
    esi = 0x30303;
    MEM32(eax + ecx * 4 + 0x4D4) = esi;
    MEM32(eax + ecx * 4 + 0x4D8) = esi;
    MEM32(eax + ecx * 4 + 0x4DC) = esi;
    MEM32(eax + ecx * 4 + 0x4E0) = esi;
    MEM32(eax + ecx * 4 + 0x4E4) = edx;
    MEM32(eax + ecx * 4 + 0x4E8) = edx;
    MEM32(eax + ecx * 4 + 0x4EC) = edx;
    MEM32(eax + ecx * 4 + 0x4F0) = edx;
    esi = 0x80000;
    MEM32(eax + ecx * 4 + 0x4F4) = esi;
    MEM32(eax + ecx * 4 + 0x4F8) = esi;
    MEM32(eax + ecx * 4 + 0x4FC) = esi;
    MEM32(eax + ecx * 4 + 0x500) = esi;
    MEM32(eax + ecx * 4 + 0x504) = edx;
    MEM32(eax + ecx * 4 + 0x508) = edx;
    esi = 0x1012000;
    MEM32(eax + ecx * 4 + 0x50C) = esi;
    MEM32(eax + ecx * 4 + 0x510) = esi;
    MEM32(eax + ecx * 4 + 0x514) = esi;
    MEM32(eax + ecx * 4 + 0x518) = esi;
    esi = 0x105B8;
    MEM32(eax + ecx * 4 + 0x51C) = esi;
    MEM32(eax + ecx * 4 + 0x520) = esi;
    MEM32(eax + ecx * 4 + 0x524) = esi;
    MEM32(eax + ecx * 4 + 0x528) = esi;
    esi = 0x80008;
    MEM32(eax + ecx * 4 + 0x52C) = esi;
    MEM32(eax + ecx * 4 + 0x530) = esi;
    MEM32(eax + ecx * 4 + 0x534) = esi;
    MEM32(eax + ecx * 4 + 0x538) = esi;
    MEM32(eax + ecx * 4 + 0x53C) = edx;
    MEM32(eax + ecx * 4 + 0x540) = edx;
    MEM32(eax + ecx * 4 + 0x544) = edx;
    MEM32(eax + ecx * 4 + 0x548) = edx;
    MEM32(eax + ecx * 4 + 0x54C) = edx;
    MEM32(eax + ecx * 4 + 0x550) = edx;
    MEM32(eax + ecx * 4 + 0x554) = edx;
    MEM32(eax + ecx * 4 + 0x558) = edx;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 8);
    esi = edi + eax + 0x70055C;
    POP32(esp, edi);

loc_002A4B7C: ;
    MEM32(esi) = 0x7FF0000;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4B7C; /* jne: not equal / not zero */

loc_002A4B88: ;
    PUSH32(esp, 8);
    esi = eax + ecx * 4 + 0x57C;
    POP32(esp, edi);

loc_002A4B92: ;
    MEM32(esi) = 0x7FF0000;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4B92; /* jne: not equal / not zero */

loc_002A4B9E: ;
    MEM32(eax + ecx * 4 + 0x59C) = edx;
    MEM32(eax + ecx * 4 + 0x5A0) = edx;
    MEM32(eax + ecx * 4 + 0x5A4) = 0x4B7FFFFF;
    MEM32(eax + ecx * 4 + 0x5A8) = edx;
    MEM32(eax + ecx * 4 + 0x5AC) = edx;
    MEM32(eax + ecx * 4 + 0x5B0) = edx;
    MEM32(eax + ecx * 4 + 0x5B4) = edx;
    MEM32(eax + ecx * 4 + 0x5B8) = edx;
    MEM32(eax + ecx * 4 + 0x5BC) = edx;
    MEM32(eax + ecx * 4 + 0x5C0) = edx;
    MEM32(eax + ecx * 4 + 0x5C4) = edx;
    MEM32(eax + ecx * 4 + 0x5C8) = edx;
    MEM32(eax + ecx * 4 + 0x5CC) = edx;
    MEM32(eax + ecx * 4 + 0x5D0) = edx;
    MEM32(eax + ecx * 4 + 0x5D4) = edx;
    MEM32(eax + ecx * 4 + 0x5D8) = edx;
    MEM32(eax + ecx * 4 + 0x5DC) = edx;
    MEM32(eax + ecx * 4 + 0x5E0) = edx;
    MEM32(eax + ecx * 4 + 0x5E4) = edx;
    MEM32(eax + ecx * 4 + 0x5E8) = edx;
    MEM32(eax + ecx * 4 + 0x5EC) = edx;
    MEM32(eax + ecx * 4 + 0x5F0) = edx;
    MEM32(eax + ecx * 4 + 0x5F4) = edx;
    MEM32(eax + ecx * 4 + 0x5F8) = edx;
    MEM32(eax + ecx * 4 + 0x5FC) = ebx;
    MEM32(eax + ecx * 4 + 0x600) = edx;
    MEM32(eax + ecx * 4 + 0x604) = 0x4000;
    MEM32(eax + ecx * 4 + 0x608) = edx;
    MEM32(eax + ecx * 4 + 0x60C) = edx;
    MEM32(eax + ecx * 4 + 0x610) = ebx;
    MEM32(eax + ecx * 4 + 0x614) = edx;
    PUSH32(esp, 0x23);
    MEM32(eax + ecx * 4 + 0x618) = 0x40000;
    MEM32(eax + ecx * 4 + 0x61C) = 0x10000;
    POP32(esp, edi);
    MEM32(eax + ecx * 4 + 0x620) = edx;
    PUSH32(esp, 4);
    MEM32(eax + ecx * 4 + 0x624) = edx;
    MEM32(eax + ecx * 4 + 0x628) = edx;
    esi = eax + ecx * 4 + 0x62C;
    POP32(esp, ebx);

loc_002A4CB7: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4CB7; /* jne: not equal / not zero */

loc_002A4CBE: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x6B8;
    POP32(esp, edi);

loc_002A4CC8: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4CC8; /* jne: not equal / not zero */

loc_002A4CCF: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x72C;
    POP32(esp, edi);

loc_002A4CD9: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4CD9; /* jne: not equal / not zero */

loc_002A4CE0: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x7A0;
    POP32(esp, edi);

loc_002A4CEA: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4CEA; /* jne: not equal / not zero */

loc_002A4CF1: ;
    PUSH32(esp, 2);
    esi = eax + ecx * 4 + 0x814;
    POP32(esp, edi);

loc_002A4CFB: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4CFB; /* jne: not equal / not zero */

loc_002A4D02: ;
    esi = 0x80;
    ebx = eax + ecx * 4 + 0x81C;
    edi = esi;

loc_002A4D10: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4D10; /* jne: not equal / not zero */

loc_002A4D18: ;
    ebx = eax + ecx * 4 + 0xA1C;
    edi = esi;

loc_002A4D21: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4D21; /* jne: not equal / not zero */

loc_002A4D29: ;
    ebx = eax + ecx * 4 + 0xC1C;
    edi = esi;

loc_002A4D32: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4D32; /* jne: not equal / not zero */

loc_002A4D3A: ;
    ebx = eax + ecx * 4 + 0xE1C;

loc_002A4D41: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4D41; /* jne: not equal / not zero */

loc_002A4D49: ;
    esi = eax + ecx * 4 + 0x101C;
    edi = 0xC0;

loc_002A4D55: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4D55; /* jne: not equal / not zero */

loc_002A4D5D: ;
    ebx = eax + ecx * 4 + 0x131C;
    edi = 0x1E0;
    esi = 0x6A7;

loc_002A4D6E: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4D6E; /* jne: not equal / not zero */

loc_002A4D76: ;
    edi = eax + ecx * 4 + 0x1A9C;
    MEM32(ebp + -12) = 0x88;

loc_002A4D84: ;
    MEM32(edi) = 0x10700FF9;
    PUSH32(esp, 4);
    POP32(esp, ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0x436086C;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = 0xC001B;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A4D84; /* jne: not equal / not zero */

loc_002A4DAC: ;
    edi = ecx + esi;
    ebx = esi;
    edi = eax + edi * 4;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = 0x300;
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x300;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A4DC7: ;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_002A4DC7; /* jne: not equal / not zero */

loc_002A4DD5: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x68;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A4DEB: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_002A4DEB; /* jne: not equal / not zero */

loc_002A4DF9: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xD0;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A4E0F: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_002A4E0F; /* jne: not equal / not zero */

loc_002A4E1D: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A4E33: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_002A4E33; /* jne: not equal / not zero */

loc_002A4E41: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x14;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A4E57: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_002A4E57; /* jne: not equal / not zero */

loc_002A4E65: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xF;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A4E78: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_002A4E78; /* jne: not equal / not zero */

loc_002A4E86: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xE;
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A4E99: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_002A4E99; /* jne: not equal / not zero */

loc_002A4EA7: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x44;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A4EBA: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_002A4EBA; /* jne: not equal / not zero */

loc_002A4EC8: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x20;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A4EDB: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_002A4EDB; /* jne: not equal / not zero */

loc_002A4EE9: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xF;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A4EFC: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_002A4EFC; /* jne: not equal / not zero */

loc_002A4F0A: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + esi * 4) = edx;
    edi = ebx + 0xE0;
    esi = ecx + edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + esi * 4) = 0x3F800000;
    esi = ecx + edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + esi * 4) = edx;
    esi = ecx + edi;
    MEM32(eax + esi * 4) = edx;
    esi = MEM32(ebp + -20);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = ebx + 0xF0;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x40000000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F000000;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xF4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x40000000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = 0xBF800000u;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xF8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0xBF800000u;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xE4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0xFE000;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F8;
    ebx = MEM32(ebp + -20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4) = edx;
    ecx = esi + edi;
    edi = MEM32(ebp + -28);
    MEM32(eax + ecx * 4 + 0x700004) = edx;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4 + 0x700004) = 0x2FE000;
    ecx = 0x1C527C;
    edx = edi + ebx * 4 + 0x1C0004;
    MEM32(eax + edx * 4) = ecx;
    edx = esi + edi;
    MEM32(eax + edx * 4 + 0x700014) = ecx;
    MEM32(eax + edx * 4 + 0x700018) = ecx;
    esi = edi + ebx * 4 + 0x1C0008;
    MEM32(eax + edx * 4 + 0x70001C) = ecx;
    MEM32(eax + esi * 4) = ecx;
    POP32(esp, edi);
    MEM32(eax + edx * 4 + 0x700024) = ecx;
    POP32(esp, esi);
    MEM32(eax + edx * 4 + 0x700028) = ecx;
    MEM32(eax + edx * 4 + 0x70002C) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002A512F
 * Original: 0x002A512F - 0x002A5252 (291 bytes, 78 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002A512F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A512F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx);
    eax = MEM32(esi + 0x400100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002A5149; /* je: equal / zero */

loc_002A5144: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002A5149u); RECOMP_ABI_CALL(0x0029FCA0u, sub_0029FCA0); /* call 0x0029FCA0 */

loc_002A5149: ;
    eax = MEM32(esi + 0x400720);
    ecx = ebx;
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0x400720) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002A5163u); RECOMP_ABI_CALL(0x002A428Eu, sub_002A428E); /* call 0x002A428E */

loc_002A5163: ;
    edx = MEM32(ebp + 8);
    edi = ebx + 0x134;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A517D; /* je: equal / zero */

loc_002A5172: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002A517Au); RECOMP_ABI_CALL(0x002A42CDu, sub_002A42CD); /* call 0x002A42CD */

loc_002A517A: ;
    edx = MEM32(ebp + 8);

loc_002A517D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    MEM32(edi) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002A51A9; /* jne: not equal / not zero */

loc_002A5184: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x400144) = 0x10000100;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400764) = 0x8000000;
    MEM32(esi + 0x400720) = eax;
    goto loc_002A524B;

loc_002A51A9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + edx * 4 + 0x144)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + edx * 4 + 0x144), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A51DC; /* je: equal / zero */

loc_002A51B4: ;
    eax = esi + 0x400080;
    MEM32(eax) = 0x70000;
    edi = MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(eax);
    PUSH32(esp, 0xF);
    MEM32(esi + 0x400750) = 0x3D0000;
    POP32(esp, eax);

loc_002A51D3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x400754) = ecx;
    if ((_fa != 0)) goto loc_002A51D3; /* jne: not equal / not zero */

loc_002A51DC: ;
    ecx = esi + 0x400084;
    eax = MEM32(ecx);
    eax = eax | 0x1000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    edi = edx;
    edi = edi & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x400148) = edi;
    eax = MEM32(ebx + eax * 4 + 0x138);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x400784) = eax;
    MEM32(esi + 0x400788) = 1;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002A521Fu); RECOMP_ABI_CALL(0x002A428Eu, sub_002A428E); /* call 0x002A428E */

loc_002A521F: ;
    eax = MEM32(esi + 0x400148);
    eax = eax & 0xE0FFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400148) = eax;
    MEM32(esi + 0x400144) = 0x10010100;
    _fb = (uint32_t)(0x400764) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x400764;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    eax = eax & 0xCFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = eax;

loc_002A524B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002A5252
 * Original: 0x002A5252 - 0x002A52D3 (129 bytes, 33 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5252(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A5252: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(esi + 0x3224) = 0xF0078;
    MEM32(esi + 0x2044) = 0x101FFFF;
    eax = MEM32(ecx + 0x120);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2040) = eax;
    MEM32(esi + 0x2500) = ebp;
    MEM32(esi + 0x3000) = ebp;
    PUSH32(esp, edi);
    MEM32(esi + 0x3050) = ebp;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x3200) = ebp;
    edi = esi + 0x3250;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = ebp;
    MEM32(esi + 0x3220) = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002A52AEu); RECOMP_ABI_CALL(0x002A4306u, sub_002A4306); /* call 0x002A4306 */

loc_002A52AE: ;
    MEM32(esi + 0x3210) = ebp;
    MEM32(esi + 0x3270) = ebp;
    MEM32(edi) = ebx;
    MEM32(esi + 0x3200) = ebx;
    MEM32(esi + 0x2500) = ebx;
    POP32(esp, edi);
    MEM32(esi + 0x2500) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A52D3
 * Original: 0x002A52D3 - 0x002A5548 (629 bytes, 133 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A52D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A52D3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = esi + 0x200;
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFEFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(eax);
    ecx = ecx | 0x1000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x7EC) = eax;
    MEM32(edi + 0x7FC) = eax;
    MEM32(edi + 0x808) = eax;
    MEM32(edi + 0x814) = eax;
    MEM32(edi + 0x7F0) = 0x118700;
    MEM32(edi + 0x7F4) = 0x28C3FF;
    MEM32(edi + 0x7F8) = 0xF3DE0479u;
    MEM32(edi + 0x800) = 4;
    MEM32(edi + 0x804) = 0x45EAD10E;
    MEM32(edi + 0x80C) = 0x78;
    MEM32(edi + 0x810) = 0x40;
    MEM32(esi + 0x400080) = eax;
    eax = MEM32(edi + 0x7F0);
    MEM32(esi + 0x400084) = eax;
    eax = MEM32(edi + 0x7F4);
    MEM32(esi + 0x400880) = eax;
    eax = MEM32(edi + 0x7F8);
    MEM32(esi + 0x40008C) = eax;
    eax = MEM32(edi + 0x7FC);
    MEM32(esi + 0x400090) = eax;
    eax = MEM32(edi + 0x800);
    MEM32(esi + 0x400094) = eax;
    eax = MEM32(edi + 0x804);
    MEM32(esi + 0x400B80) = eax;
    eax = MEM32(edi + 0x808);
    MEM32(esi + 0x400B84) = eax;
    eax = MEM32(edi + 0x80C);
    MEM32(esi + 0x400098) = eax;
    eax = MEM32(edi + 0x810);
    MEM32(esi + 0x40009C) = eax;
    eax = MEM32(edi + 0x814);
    MEM32(esi + 0x400B88) = eax;
    eax = MEM32(edi + 0x140);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    MEM32(esi + 0x400780) = eax;
    PUSH32(esp, 0x002A53EDu); RECOMP_ABI_CALL(0x002A428Eu, sub_002A428E); /* call 0x002A428E */

loc_002A53ED: ;
    PUSH32(esp, 0x50);
    POP32(esp, edx);
    eax = esi + 0x400904;
    ebx = 0x1FFC;
    ecx = 0xEA0000;

loc_002A5400: ;
    ebp = MEM32(eax + -3147456);
    MEM32(eax) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx + -32;
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    MEM32(esi + 0x400754) = ebp;
    ebp = MEM32(eax + -3147452);
    MEM32(eax + 4) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx;
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    MEM32(esi + 0x400754) = ebp;
    ebp = MEM32(eax + -3147460);
    MEM32(eax + -4) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx + -64;
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x70 (32-bit) */
    MEM32(esi + 0x400754) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_002A5400; /* jl: less (signed <) */

loc_002A5475: ;
    MEM32(esp + 0x10) = 0xFFBFF710u;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - esi;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x400980;
    MEM32(esp + 0x14) = 8;

loc_002A548F: ;
    ebp = MEM32(esp + 0x10);
    edx = MEM32(eax + -3147392);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edx;
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x400750) = ebp;
    MEM32(esi + 0x400754) = edx;
    if ((_fa != 0)) goto loc_002A548F; /* jne: not equal / not zero */

loc_002A54B6: ;
    eax = MEM32(esi + 0x100324);
    MEM32(esi + 0x4009A0) = eax;
    MEM32(esi + 0x400750) = 0xEA000C;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(esi + 0x100200);
    MEM32(esi + 0x4009A4) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(esi + 0x100204);
    MEM32(esi + 0x4009A8) = eax;
    MEM32(esi + 0x400750) = 0xEA0004;
    MEM32(esi + 0x400754) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x40014C) = eax;
    MEM32(esi + 0x400150) = eax;
    MEM32(esi + 0x400154) = eax;
    MEM32(esi + 0x400158) = eax;
    MEM32(esi + 0x400144) = 0x10000000;
    MEM32(esi + 0x400764) = 0x8000000;
    PUSH32(esp, MEM32(edi + 0x134));
    ecx = edi;
    PUSH32(esp, 0x002A5541u); RECOMP_ABI_CALL(0x002A512Fu, sub_002A512F); /* call 0x002A512F */

loc_002A5541: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A5550
 * Original: 0x002A5550 - 0x002A55D1 (129 bytes, 45 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A5550: ;
    eax = edi;
    PUSH32(esp, esi);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _jt = MEM32(eax * 4 + 0x2A55D4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002A555Du) goto loc_002A555D;
    if (_jt == 0x002A5577u) goto loc_002A5577;
    if (_jt == 0x002A557Eu) goto loc_002A557E;
    if (_jt == 0x002A5592u) goto loc_002A5592;
    if (_jt == 0x002A5599u) goto loc_002A5599;
    if (_jt == 0x002A55A3u) goto loc_002A55A3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002A555D: ;
    eax = edx;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax * 4 + 0x2A9418);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A5572; /* jne: not equal / not zero */

loc_002A556D: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002A55A8;

loc_002A5572: ;
    esi = eax + 8;
    goto loc_002A55A8;

loc_002A5577: ;
    esi = 1;
    goto loc_002A55A8;

loc_002A557E: ;
    eax = MEM32(0x2A84A8);
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 5;
    MEM32(0x2A84A8) = eax;
    goto loc_002A55A8;

loc_002A5592: ;
    esi = 0xD;
    goto loc_002A55A8;

loc_002A5599: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x10 (8-bit) */
    esi = 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_002A55A8; /* je: equal / zero */

loc_002A55A3: ;
    esi = 4;

loc_002A55A8: ;
    eax = ecx;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    edx = edx & 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx >> 0xD;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002A55F0
 * Original: 0x002A55F0 - 0x002A5B47 (1367 bytes, 373 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A55F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A55F0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x780);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A5614; /* je: equal / zero */

loc_002A5604: ;
    eax = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002A5614: ;
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = eax & 0xFFFEFFBFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x2A83D8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002A563F; /* je: equal / zero */

loc_002A5633: ;
    MEM32(esp + 0xC) = 3;
    eax = MEM32(esp + 0xC);

loc_002A563F: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ecx = esp + 0x30;
    MEM32(esp + 0x14) = eax;
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = ecx;
    ecx = eax + 0x2A8000;
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edi);
    goto loc_002A5670;

    /* nop */

loc_002A5670: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(ecx + 0x34);
    esi = MEM32(ecx + 0x38);
    ebp = MEM32(ecx + 0x3C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x50), 5 (32-bit) */
    MEM32(esp + 0x10) = edi;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = edx;
    goto loc_002A56A0;

    /* nop */

loc_002A56A0: ;
    MEM32(esp + 0x14) = edx;
    ecx = eax + -1;
    { uint32_t _jt = MEM32(ecx * 4 + 0x2A5B48); /* switch: 26 entries, 22 targets */
    if (_jt == 0x002A56AEu) goto loc_002A56AE;
    if (_jt == 0x002A56F8u) goto loc_002A56F8;
    if (_jt == 0x002A5710u) goto loc_002A5710;
    if (_jt == 0x002A5725u) goto loc_002A5725;
    if (_jt == 0x002A572Eu) goto loc_002A572E;
    if (_jt == 0x002A5739u) goto loc_002A5739;
    if (_jt == 0x002A5753u) goto loc_002A5753;
    if (_jt == 0x002A575Eu) goto loc_002A575E;
    if (_jt == 0x002A5766u) goto loc_002A5766;
    if (_jt == 0x002A5781u) goto loc_002A5781;
    if (_jt == 0x002A579Cu) goto loc_002A579C;
    if (_jt == 0x002A57C8u) goto loc_002A57C8;
    if (_jt == 0x002A57F9u) goto loc_002A57F9;
    if (_jt == 0x002A581Eu) goto loc_002A581E;
    if (_jt == 0x002A585Au) goto loc_002A585A;
    if (_jt == 0x002A5886u) goto loc_002A5886;
    if (_jt == 0x002A588Du) goto loc_002A588D;
    if (_jt == 0x002A58B9u) goto loc_002A58B9;
    if (_jt == 0x002A58F7u) goto loc_002A58F7;
    if (_jt == 0x002A5925u) goto loc_002A5925;
    if (_jt == 0x002A596Au) goto loc_002A596A;
    if (_jt == 0x002A5993u) goto loc_002A5993;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002A56AE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002A56ED; /* je: equal / zero */

loc_002A56B3: ;
    ecx = ebx;
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A59D6; /* jne: not equal / not zero */

loc_002A56CC: ;
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x20);
    MEM32(edi) = eax;
    eax = eax | 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x24) = edx;
    MEM32(edi + 0x48) = eax;
    MEM32(edi + 0x6C) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002A5A75;

loc_002A56ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    goto loc_002A59D6;

loc_002A56F8: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x002A5706u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A5706: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002A59D6;

loc_002A5710: ;
    edi = ebp;
    edx = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002A571Bu); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A571B: ;
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002A59D6;

loc_002A5725: ;
    eax = edx;
    eax = eax | 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002A5735;

loc_002A572E: ;
    eax = edx;
    eax = eax | 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002A5735: ;
    MEM32(esp + 0x14) = eax;

loc_002A5739: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x002A5747u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A5747: ;
    esi = eax;
    ecx = 0x20000;
    goto loc_002A59CB;

loc_002A5753: ;
    eax = edx;
    eax = eax | 0x18000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = eax;

loc_002A575E: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) | 0x8000;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002A5766: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x002A5774u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A5774: ;
    esi = eax;
    esi = esi | 0x202000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002A59C9;

loc_002A5781: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x002A578Fu); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A578F: ;
    esi = eax;
    esi = esi | 0x204000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002A59C9;

loc_002A579C: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x002A57AAu); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A57AA: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    ecx = 0x10010;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002A57BFu); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A57BF: ;
    esi = MEM32(esp + 0x10);
    goto loc_002A59C7;

loc_002A57C8: ;
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002A57DDu); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A57DD: ;
    edi = MEM32(esp + 0x10);
    edx = ebx;
    ecx = 0x20020;
    esi = eax;
    PUSH32(esp, 0x002A57EFu); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A57EF: ;
    ecx = 0x10030;
    goto loc_002A59BE;

loc_002A57F9: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x002A5807u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A5807: ;
    esi = eax;
    esi = esi | 0x200000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 2;
    ecx = 0x10030;
    goto loc_002A59C0;

loc_002A581E: ;
    ecx = 0x30000;
    edx = ebx;
    edi = esi;
    PUSH32(esp, 0x002A582Cu); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A582C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002A584D; /* je: equal / zero */

loc_002A5833: ;
    edi = 2;
    edx = ebx;
    ecx = 0x20000;
    PUSH32(esp, 0x002A5844u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A5844: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    goto loc_002A59D6;

loc_002A584D: ;
    esi = esi | 0x200000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    goto loc_002A59D6;

loc_002A585A: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x002A5868u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A5868: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    ecx = 0x10020;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002A587Du); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A587D: ;
    esi = MEM32(esp + 0x10);
    goto loc_002A59C7;

loc_002A5886: ;
    ecx = 0x30000;
    goto loc_002A58BE;

loc_002A588D: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x002A589Bu); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A589B: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    ecx = 0x10030;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002A58B0u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A58B0: ;
    esi = MEM32(esp + 0x10);
    goto loc_002A59C7;

loc_002A58B9: ;
    ecx = 0x30010;

loc_002A58BE: ;
    edi = esi;
    edx = ebx;
    PUSH32(esp, 0x002A58C7u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A58C7: ;
    edi = ebp;
    edx = ebx;
    ecx = 0x20000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002A58D9u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A58D9: ;
    ebp = MEM32(esp + 0x10);
    edi = esi;
    edx = ebx;
    ecx = 0x10020;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002A58EDu); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A58ED: ;
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002A59D6;

loc_002A58F7: ;
    edi = 1;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x002A5908u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A5908: ;
    ecx = MEM32(esp + 0xCC);
    edx = MEM32(ecx + 8);
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0x10000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 8) = edx;
    goto loc_002A59D6;

loc_002A5925: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30040;
    PUSH32(esp, 0x002A5933u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A5933: ;
    edi = ebp;
    edx = ebx;
    ecx = 0x20040;
    esi = eax;
    PUSH32(esp, 0x002A5943u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A5943: ;
    ecx = MEM32(esp + 0x2C);
    ecx = ecx | 0x820000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x6C) = edx;
    ebx = ebx | 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002A59D6;

loc_002A596A: ;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x002A5976u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A5976: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = esi;
    edx = ebx;
    ecx = 0x10000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002A598Du); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A598D: ;
    esi = MEM32(esp + 0x10);
    goto loc_002A59C7;

loc_002A5993: ;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x002A599Fu); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A599F: ;
    edi = esi;
    edx = ebx;
    ecx = 0x20000;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x002A59B1u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A59B1: ;
    esi = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x10);
    ecx = 0x10010;

loc_002A59BE: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002A59C0: ;
    edx = ebx;
    PUSH32(esp, 0x002A59C7u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A59C7: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002A59C9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002A59CB: ;
    edx = ebx;
    edi = ebp;
    PUSH32(esp, 0x002A59D4u); RECOMP_ABI_CALL(0x002A5550u, sub_002A5550); /* call 0x002A5550 */

loc_002A59D4: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002A59D6: ;
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A5A02; /* jne: not equal / not zero */

loc_002A59E6: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002A5A02: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx & 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(ecx + edi) = eax;
    MEM32(ecx + edi + 0x24) = edx;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_002A5A3F; /* js: sign (negative) */

loc_002A5A1A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x48);
    ebp = MEM32(eax + 0x4C);
    eax = MEM32(eax + 0x40);
    edx = MEM32(esp + 0x2C);
    ebx = ebx | 0xE8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    edi = ecx;
    goto loc_002A56A0;

loc_002A5A3F: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002A5A73; /* je: equal / zero */

loc_002A5A61: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_002A5670; /* jne: not equal / not zero */

loc_002A5A73: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002A5A75: ;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002A5A80: ;
    MEM32(edi) = ebp;
    MEM32(edi + 0x24) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x6C) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002A5A80; /* jne: not equal / not zero */

loc_002A5A91: ;
    ecx = MEM32(esp + 0xCC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x38) = 0x200AC0;
    MEM32(esp + 0x5C) = 0x201E40;
    MEM32(esp + 0x80) = 0x200260;
    MEM32(esp + 0xA4) = 0x200AA0;
    if (CMP_B(_fa, _fb)) goto loc_002A5ACA; /* jb: below (unsigned <) */

loc_002A5AC5: ;
    PUSH32(esp, 0x002A5ACAu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_002A5ACA: ;
    MEM32(eax) = 0x41E60;
    MEM32(eax + 4) = esi;
    edi = eax + 8;
    ecx = 0x24;
    esi = esp + 0x38;
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
    esi = MEM32(esp + 0xCC);
    edi = MEM32(esp + 0x34);
    ecx = eax + 0x98;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002A5B1A; /* je: equal / zero */

loc_002A5AFE: ;
    edx = MEM32(0x2A839C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A5B1A; /* jne: not equal / not zero */

loc_002A5B08: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = 0x403B8;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002A5B1A: ;
    eax = MEM32(esi + 8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002A5B33; /* je: equal / zero */

loc_002A5B28: ;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) | 0x400F;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002A5B33: ;
    eax = MEM32(esp + 0xD0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002A5BB0
 * Original: 0x002A5BB0 - 0x002A5C60 (176 bytes, 61 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A5BB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    eax = MEM32(esp + 0x20);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002A5BF2u); RECOMP_ABI_CALL(0x0029F000u, sub_0029F000); /* call 0x0029F000 */

loc_002A5BF2: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x1C), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002A5C03; /* je: equal / zero */

loc_002A5BFE: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002A5C03: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x002A5C0Fu); RECOMP_ABI_CALL(0x0028499Eu, sub_0028499E); /* call 0x0028499E */

loc_002A5C0F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A5C2F; /* je: equal / zero */

loc_002A5C15: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002A5C20u); RECOMP_ABI_CALL(0x0028499Eu, sub_0028499E); /* call 0x0028499E */

loc_002A5C20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A5C36; /* jne: not equal / not zero */

loc_002A5C24: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002A5C2Fu); RECOMP_ABI_CALL(0x00284A3Eu, sub_00284A3E); /* call 0x00284A3E */

loc_002A5C2F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

loc_002A5C36: ;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x1040001;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_002A5C60
 * Original: 0x002A5C60 - 0x002A5C6E (14 bytes, 4 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A5C60: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0xE));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002A5C70
 * Original: 0x002A5C70 - 0x002A5C75 (5 bytes, 1 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A5C70: ;
    g_seh_ebp = ebp; sub_0029EC70(); return; /* tail jmp 0x0029EC70 */

}

/**
 * sub_002A5C80
 * Original: 0x002A5C80 - 0x002A5CCA (74 bytes, 29 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A5C80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002A5CAEu); RECOMP_ABI_CALL(0x0029ED30u, sub_0029ED30); /* call 0x0029ED30 */

loc_002A5CAE: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002A5CC3u); RECOMP_ABI_CALL(0x002A37F0u, sub_002A37F0); /* call 0x002A37F0 */

loc_002A5CC3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002A5CD0
 * Original: 0x002A5CD0 - 0x002A5CF3 (35 bytes, 13 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5CD0(void)
{

loc_002A5CD0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002A5CF0u); RECOMP_ABI_CALL(0x0029EF60u, sub_0029EF60); /* call 0x0029EF60 */

loc_002A5CF0: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002A5D00
 * Original: 0x002A5D00 - 0x002A5E76 (374 bytes, 106 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A5D00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2A8498);
    edx = MEM32(eax + 0x1DD8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    MEM32(eax + 0x1C0C) = ecx;
    MEM32(eax + 0x2400) = edx;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x930);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebp = MEM32(edi);
    eax = MEM32(edi + 8);
    ebx = MEM32(edi + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(esp + 0x24);
    edx = MEM32(ebp);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ebp + 0xC);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0x8704) = 0;
    MEM32(esi + 0x8B00) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002A5D73u); RECOMP_ABI_CALL(0x00297BB0u, sub_00297BB0); /* call 0x00297BB0 */

loc_002A5D73: ;
    ecx = MEM32(edi + 4);
    edx = eax;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    edi = MEM32(esp + 0x10);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + eax * 2;
    eax = ecx;
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x8920) = ecx;
    ecx = MEM32(esp + 0x20);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x8930) = eax;
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8928) = ecx;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_A(_fa, _fb)) goto loc_002A5DD7; /* ja: above (unsigned >) */

loc_002A5DD0: ;
    eax = 0x100000;
    goto loc_002A5DE8;

loc_002A5DD7: ;
    eax = edi + -1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = MEM32(esp + 0x24);

loc_002A5DE8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esi + 0x8938) = eax;
    if (CMP_A(_fa, _fb)) goto loc_002A5DFA; /* ja: above (unsigned >) */

loc_002A5DF3: ;
    eax = 0x100000;
    goto loc_002A5E0D;

loc_002A5DFA: ;
    eax = MEM32(esp + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = MEM32(esp + 0x24);

loc_002A5E0D: ;
    MEM32(esi + 0x8940) = eax;
    eax = MEM32(ebp + 4);
    edi = MEM32(ebp);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x8948) = eax;
    eax = MEM32(esp + 0x28);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0x10000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x8950) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_002A5E43; /* je: equal / zero */

loc_002A5E3D: ;
    edx = edx | 0x100000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002A5E43: ;
    MEM32(esi + 0x8958) = edx;
    MEM32(esi + 0x8908) = 0x7FFFFFF;
    eax = MEM32(esi + 0x8140);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0x8140) = eax;
    MEM32(esi + 0x8700) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002A5E80
 * Original: 0x002A5E80 - 0x002A5EE3 (99 bytes, 18 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A5E80: ;
    eax = MEM32(0x2A8498);
    eax = MEM32(eax + 0x930);
    ecx = MEM32(eax + 0x8700);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A5EA1; /* je: equal / zero */

loc_002A5E97: ;
    MEM32(eax + 0x8704) = 1;

loc_002A5EA1: ;
    _fa = (uint32_t)(MEM32(eax + 0x8700)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x8700), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A5EA1; /* jne: not equal / not zero */

loc_002A5EA9: ;
    MEM32(eax + 0x8100) = 0x11;
    MEM32(eax + 0x8920) = edx;
    MEM32(eax + 0x8928) = 0xFFFFFFFFu;
    MEM32(eax + 0x8930) = edx;
    ecx = 0x1000;
    MEM32(eax + 0x8900) = edx;
    MEM32(eax + 0x8910) = ecx;
    MEM32(eax + 0x8918) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002A5EF0
 * Original: 0x002A5EF0 - 0x002A5EF8 (8 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5EF0(void)
{

loc_002A5EF0: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002A5F00
 * Original: 0x002A5F00 - 0x002A5FA4 (164 bytes, 47 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A5F00: ;
    eax = MEM32(0x2AAC24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A5F13; /* jne: not equal / not zero */

loc_002A5F09: ;
    MEM32(0x2AAC24) = 0x80000;

loc_002A5F13: ;
    eax = MEM32(0x2AAC20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002A5F26; /* jne: not equal / not zero */

loc_002A5F1C: ;
    MEM32(0x2AAC20) = 0x8000;

loc_002A5F26: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(0x2A84A8);
    PUSH32(esp, edi);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0x2A84A0;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(0x2A8498) = edi;
    MEM32(0x2A8DD4) = 1;
    MEM32(0x2A84A8) = esi;
    PUSH32(esp, 0x002A5F5Eu); RECOMP_ABI_CALL(0x0029E020u, sub_0029E020); /* call 0x0029E020 */

loc_002A5F5E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002A5F93; /* jge: greater or equal (signed >=) */

loc_002A5F64: ;
    ecx = edi;
    PUSH32(esp, 0x002A5F6Bu); RECOMP_ABI_CALL(0x0029E4F0u, sub_0029E4F0); /* call 0x0029E4F0 */

loc_002A5F6B: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A5F79; /* je: equal / zero */

loc_002A5F73: ;
    MEM32(eax) = 0;

loc_002A5F79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x924;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    MEM32(0x2A8498) = 0;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_002A5F93: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002A5F9D; /* je: equal / zero */

loc_002A5F9B: ;
    MEM32(eax) = edi;

loc_002A5F9D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_002A5FA8
 * Original: 0x002A5FA8 - 0x002A5FB0 (8 bytes, 4 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5FA8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002A5FA8: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

}
