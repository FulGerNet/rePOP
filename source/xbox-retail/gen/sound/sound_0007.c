/**
 * PoP Warrior Within Xbox retail - sound, chunk 7
 * Ubisoft Dare sound engine and Jade's glue to it
 * Functions: 16 (0x004581F0 - 0x00458C00)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_004581F0
 * Original: 0x004581F0 - 0x00458280 (144 bytes, 37 insns)
 * Folder: sound (between: 0x004575B0 and 0x004586C0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004581F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004581F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004581F9u); RECOMP_ABI_CALL(0x00454AC0u, sub_00454AC0); /* call 0x00454AC0 */

loc_004581F9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x20);
    MEM32(esi) = 0x574920;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x5C) = edi;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x8C) = edi;
    MEM32(esi + 0x90) = edi;
    MEM32(esi + 0x94) = edi;
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x68) = edi;
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x98) = edi;
    MEM32(esi + 0x80) = edi;
    MEM32(esi + 0x78) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x84) = edi;
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0xD4) = edi;
    MEM32(esi + 0xD8) = edi;
    MEM32(esi + 0x9C) = edi;
    MEM32(esi + 0xDC) = edi;
    PUSH32(esp, 0x0045826Bu); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_0045826B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x54) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x20) = 0x455D40;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00458280
 * Original: 0x00458280 - 0x00458304 (132 bytes, 48 insns)
 * Folder: sound (between: 0x004575B0 and 0x004586C0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00458280: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x574920;
    if (CMP_EQ(_fa, _fb)) goto loc_00458299; /* je: equal / zero */

loc_00458290: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00458296u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00458296: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00458299: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004582A9; /* je: equal / zero */

loc_004582A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004582A6u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004582A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004582A9: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004582B9; /* je: equal / zero */

loc_004582B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004582B6u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004582B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004582B9: ;
    eax = MEM32(esi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004582C9; /* je: equal / zero */

loc_004582C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004582C6u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004582C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004582C9: ;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004582DC; /* je: equal / zero */

loc_004582D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004582D9u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004582D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004582DC: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004582EC; /* je: equal / zero */

loc_004582E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004582E9u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004582E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004582EC: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004582FC; /* je: equal / zero */

loc_004582F3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004582F9u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004582F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004582FC: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00454AE0(); return; /* tail jmp 0x00454AE0 */

}

/**
 * sub_00458310
 * Original: 0x00458310 - 0x00458354 (68 bytes, 28 insns)
 * Folder: sound (between: 0x004575B0 and 0x004586C0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00458310: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x0045831Fu); RECOMP_ABI_CALL(0x00441DB0u, sub_00441DB0); /* call 0x00441DB0 */

loc_0045831F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0045834C; /* je: equal / zero */

loc_00458325: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00458338; /* jne: not equal / not zero */

loc_0045832B: ;
    eax = MEM32(ebx + 8);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x8C) = eax;
    goto loc_0045833A;

loc_00458338: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0045833A: ;
    ecx = MEM32(ebx + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00458346u); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_00458346: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x58) = eax;

loc_0045834C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00458360
 * Original: 0x00458360 - 0x00458366 (6 bytes, 2 insns)
 * Folder: sound (between: 0x004575B0 and 0x004586C0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458360(void)
{

loc_00458360: ;
    eax = 0x481;
    esp += 4; return; /* ret */

}

/**
 * sub_00458370
 * Original: 0x00458370 - 0x004583C7 (87 bytes, 37 insns)
 * Folder: sound (between: 0x004575B0 and 0x004586C0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00458370: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00458387; /* je: equal / zero */

loc_0045837D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00458387: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00458398u); RECOMP_ABI_CALL(0x00441E20u, sub_00441E20); /* call 0x00441E20 */

loc_00458398: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004583A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004583A1u); } /* indirect call */
    }

loc_004583A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004583B3; /* jne: not equal / not zero */

loc_004583A8: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_004583B3: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x5C) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004583D0
 * Original: 0x004583D0 - 0x0045840F (63 bytes, 30 insns)
 * Folder: sound (between: 0x004575B0 and 0x004586C0)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004583D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004583D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004583E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004583E0u); } /* indirect call */
    }

loc_004583E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004583FE; /* je: equal / zero */

loc_004583E7: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004583F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004583F0u); } /* indirect call */
    }

loc_004583F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00458405; /* jne: not equal / not zero */

loc_004583F7: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004583FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004583FCu); } /* indirect call */
    }

loc_004583FE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00458405: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00458410
 * Original: 0x00458410 - 0x00458437 (39 bytes, 13 insns)
 * Folder: sound (between: 0x004575B0 and 0x004586C0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00458410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00458410: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00458432; /* je: equal / zero */

loc_00458417: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00458432; /* jne: not equal / not zero */

loc_0045841F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x5C) = 0;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00458432: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00458440
 * Original: 0x00458440 - 0x00458488 (72 bytes, 15 insns)
 * Folder: sound (between: 0x004575B0 and 0x004586C0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00458440: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x60) = eax;
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x98) = eax;
    MEM32(ecx + 0x84) = eax;
    MEM32(ecx + 0xD0) = eax;
    MEM32(ecx + 0xD4) = eax;
    MEM32(ecx + 0xD8) = eax;
    MEM32(ecx + 0x9C) = eax;
    MEM32(ecx + 0xDC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00458490
 * Original: 0x00458490 - 0x0045862A (410 bytes, 130 insns)
 * Folder: sound (between: 0x004575B0 and 0x004586C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00458490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0x14) = 4;
    ecx = MEM32(esi + 0x54);
    eax = 1;
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(esi + 0x54);
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x54);
    MEM32(esi + 0x90) = eax;
    eax = MEM32(ecx + 0x18);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x14)); }
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00458558; /* je: equal / zero */

loc_004584D0: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0x64) = eax;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_004584E5; /* jne: not equal / not zero */

loc_004584DB: ;
    PUSH32(esp, 0x004584E0u); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_004584E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004584EE;

loc_004584E5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004584EBu); RECOMP_ABI_CALL(0x000D4010u, sub_000D4010); /* call 0x000D4010 */

loc_004584EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004584EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x68) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00458543; /* je: equal / zero */

loc_004584F5: ;
    eax = MEM32(esi + 0x64);
    ecx = MEM32(esi + 0x70);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0x6C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00458522; /* jne: not equal / not zero */

loc_00458507: ;
    ecx = MEM32(esi + 0x54);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x14)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x8C));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0045851Du); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_0045851D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0045853C;

loc_00458522: ;
    ebx = MEM32(esi + 0x54);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0x14)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x8C));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00458539u); RECOMP_ABI_CALL(0x000D4010u, sub_000D4010); /* call 0x000D4010 */

loc_00458539: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0045853C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x70) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00458558; /* jne: not equal / not zero */

loc_00458543: ;
    PUSH32(esp, 0x574968);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0045854Fu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_0045854F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00458558: ;
    eax = MEM32(esi + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00458621; /* jbe: below or equal (unsigned <=) */

loc_00458565: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x22;
    ebx = 5;
    PUSH32(esp, ebp);

loc_00458572: ;
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + -2) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + 6) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + -10) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + 8) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + -8) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + 2) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + 0xA) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + -6) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + 4) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + 0xC) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + -4) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + 6) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + 0xE) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(eax + ebp + -2) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM32(ecx + ebp + 4) = ebx;
    ebp = MEM32(esi + 0x58);
    MEM16(ecx + ebp + 0x10) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM16(ecx + ebp + 0x12) = LO16(edi);
    ebp = MEM32(esi + 0x58);
    MEM32(ecx + ebp + 8) = edi;
    ebp = MEM32(esi + 0x58);
    MEM32(ecx + ebp + 0xC) = edi;
    ebp = MEM32(esi + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00458572; /* jb: below (unsigned <) */

loc_00458620: ;
    POP32(esp, ebp);

loc_00458621: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00458630
 * Original: 0x00458630 - 0x00458683 (83 bytes, 20 insns)
 * Folder: sound (between: 0x004575B0 and 0x004586C0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00458630: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x5C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0045863Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0045863Au); } /* indirect call */
    }

loc_0045863D: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esi + 0xD4) = 1;
    PUSH32(esp, 0x00458655u); RECOMP_ABI_CALL(0x00442940u, sub_00442940); /* call 0x00442940 */

loc_00458655: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xD8) = eax;
    MEM32(esi + 0x90) = 0;
    MEM32(esi + 0x6C) = 0;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xDC) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00458690
 * Original: 0x00458690 - 0x004586BE (46 bytes, 15 insns)
 * Folder: sound (between: 0x004575B0 and 0x004586C0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00458690: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004586B8; /* je: equal / zero */

loc_00458696: ;
    edx = MEM32(ecx + 0x8C);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x28));
    eax = MEM32(ecx + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004586B8; /* ja: above (unsigned >) */

loc_004586AA: ;
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004586B4u); RECOMP_ABI_CALL(0x004428E0u, sub_004428E0); /* call 0x004428E0 */

loc_004586B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004586B8: ;
    eax = 0xFFFE0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_004586C0
 * Original: 0x004586C0 - 0x00458AA9 (1001 bytes, 278 insns)
 * Folder: sound (match: xbox-retail 0x000C6EF0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004586C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004586C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0;
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    mm0 = MMX_FROM32(MEM32(eax + 0x10)); /* movd */
    mm6 = MMX_FROM32(MEM32(eax + 0x20)); /* movd */
    mm2 = MMX_MEM(eax + 0x18); /* movq */
    mm4 = MMX_MEM(eax + 0x28); /* movq */
    mm0 = MMX_PMADDWD(mm0, mm6); /* pmaddwd */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 4);
    edx = ebx;
    MEM32(ebp + 8) = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    SET_LO16(esi, MEM16(eax + 0x2E));
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    mm3 = MMX_MEM(eax + 0x28); /* movq */
    mm0 = MMX_PSRAD(mm0, 10u); /* psrad */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    mm2 = MMX_PMADDWD(mm2, mm3); /* pmaddwd */
    MEM32(ebp + -20) = ebx;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebx * 4 + 0x574760);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -16) = mm0.ud[0]; /* movd */
    mm1 = mm2; /* movq */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm1 = MMX_PUNPCKHDQ(mm1, mm2); /* punpckhdq */
    edx = ebx;
    mm1 = MMX_PADDD(mm1, mm2); /* paddd */
    ebx = ebx & 0xFFFFFF00u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    mm1 = MMX_PSRAD(mm1, 10u); /* psrad */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0x595FB8;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = mm1.ud[0]; /* movd */
    mm4 = MMX_PSLLQ(mm4, 16u); /* psllq */
    ecx = ebx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = MEM32(edi + edx * 4);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = MEM32(ebp + 0xC);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx ^ 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(ebp + -4);
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebp + -16);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = edx;
    mm5 = MMX_FROM32(ecx); /* movd */
    mm6 = MMX_PSLLQ(mm6, 16u); /* psllq */
    mm0 = MMX_FROM32(MEM32(ebp + -12)); /* movd */
    mm5 = MMX_PSLLD(mm5, 16u); /* pslld */
    mm2 = MMX_MEM(eax + 8); /* movq */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm3 = MMX_MEM(0x5749C0); /* movq */
    mm5 = MMX_PSRLD(mm5, 16u); /* psrld */
    mm0 = MMX_PSRLD(mm0, 16u); /* psrld */
    mm5 = MMX_POR(mm5, mm6); /* por */
    mm4 = MMX_POR(mm4, mm0); /* por */
    mm1 = MMX_PADDW(mm1, mm0); /* paddw */
    MEM32(eax + 0x20) = mm5.ud[0]; /* movd */
    mm2 = MMX_PACKSSDW(mm2, mm5); /* packssdw */
    MMX_STORE(eax + 0x28, mm4); /* movq */
    mm2 = MMX_PSLLQ(mm2, 16u); /* psllq */
    MEM16(eax + 0x30) = LO16(esi);
    MEM32(ebp + -8) = ecx;
    ebx = mm1.ud[0]; /* movd */
    mm1 = MMX_PSLLD(mm1, 16u); /* pslld */
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0045891E; /* je: equal / zero */

loc_004587CF: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x5749B8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x5749B8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x5749B0); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + 0xC);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x5749A8)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -20);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x574780);
    mm4 = MMX_FROM32(ecx); /* movd */
    mm6 = MMX_PMADDWD(mm6, mm4); /* pmaddwd */
    mm3 = MMX_PSRLD(mm3, 8u); /* psrld */
    mm4 = mm3; /* movq */
    mm3 = MMX_PSLLD(mm3, 2u); /* pslld */
    edi = mm6.ud[0]; /* movd */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBSW(mm3, mm7); /* psubsw */
    mm7 = MMX_PSRLQ(mm7, 32u); /* psrlq */
    mm0 = MMX_MEM(esi + 0x28); /* movq */
    mm3 = MMX_PSUBSW(mm3, mm7); /* psubsw */
    mm0 = MMX_PSLLQ(mm0, 48u); /* psllq */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm6 = mm0; /* movq */
    mm3 = MMX_PAND(mm3, MMX_MEM(0x5749A8)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x5749A0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x574998)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x574990)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x574990)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x5749B8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004588CD; /* jge: greater or equal (signed >=) */

loc_004588C8: ;
    ebx = 0x10F;

loc_004588CD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004588DA; /* jle: less or equal (signed <=) */

loc_004588D5: ;
    ebx = 0xA00;

loc_004588DA: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x574988); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x574980)); /* por */
    mm1 = MMX_PSLLD(mm1, 16u); /* pslld */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm4 = MMX_PSLLD(mm4, 16u); /* pslld */
    ecx = 0x3C0;
    ebx = 0x83000000u;
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */
    mm4 = MMX_PSRLD(mm4, 16u); /* psrld */
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    mm1 = MMX_POR(mm1, mm4); /* por */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    goto loc_004589E1;

loc_0045891E: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x574978)); /* movd */
    mm2 = mm1; /* movq */
    mm1 = MMX_PMULLW(mm1, mm3); /* pmullw */
    esi = MEM32(ebp + 0xC);
    eax = 0x7CFF0000;
    mm2 = MMX_PMULHW(mm2, mm3); /* pmulhw */
    mm1 = MMX_PUNPCKLWD(mm1, mm2); /* punpcklwd */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm1 = MMX_PACKSSDW(mm1, mm3); /* packssdw */
    mm0 = MMX_MEM(esi + 0x28); /* movq */
    mm7 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm0 = MMX_PSLLQ(mm0, 48u); /* psllq */
    ecx = 0xF6;
    ebx = MEM32(ebp + -20);
    mm4 = MMX_FROM32(ecx); /* movd */
    mm6 = mm0; /* movq */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    ebx = MEM32(ebx * 4 + 0x574780);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x574998)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x574988); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x574990)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x574990)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x574980)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x5749B8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004589BD; /* jge: greater or equal (signed >=) */

loc_004589B8: ;
    ebx = 0x10F;

loc_004589BD: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_004589D1; /* jle: less or equal (signed <=) */

loc_004589CC: ;
    ebx = 0xA00;

loc_004589D1: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_004589E1: ;
    MMX_STORE(esi + 0x18, mm2); /* movq */
    mm4 = MMX_FROM32(eax); /* movd */
    mm2 = mm1; /* movq */
    mm1 = MMX_PUNPCKLWD(mm1, mm6); /* punpcklwd */
    mm2 = MMX_PADDSW(mm2, mm4); /* paddsw */
    mm5 = MMX_FROM32(ebx); /* movd */
    edi = 0x8000;
    mm1 = MMX_PSRLQ(mm1, 32u); /* psrlq */
    mm2 = MMX_PSUBSW(mm2, mm4); /* psubsw */
    mm0 = MMX_FROM32(edi); /* movd */
    mm2 = MMX_PADDSW(mm2, mm5); /* paddsw */
    ebx = mm1.ud[0]; /* movd */
    mm2 = MMX_PSUBSW(mm2, mm5); /* psubsw */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x7FFF;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(edx); /* movd */
    eax = MEM32(esi + 8);
    mm2 = MMX_PADDSW(mm2, mm5); /* paddsw */
    ebx = MEM32(ebp + -4);
    mm2 = MMX_PSUBSW(mm2, mm5); /* psubsw */
    MEM32(esi + 0xC) = eax;
    /* nop */
    MEM32(esi + 8) = ebx;
    /* nop */
    MEM32(esi + 0x10) = mm2.ud[0]; /* movd */
    (void)0; /* emms - empty MMX state */
    eax = MEM32(ebp + 0xC);
    SET_LO16(ecx, MEM16(eax + 0x12));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    edx = SX16(LO16(ecx));
    if (CMP_G(_fas, _fbs)) goto loc_00458A45; /* jg: greater (signed >) */

loc_00458A43: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00458A45: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x300 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00458A65; /* jle: less or equal (signed <=) */

loc_00458A4D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edx = edx + edx + -1;
    ecx = edx;
    ecx = ecx + ecx * 2;
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + 0x12) = LO16(ecx);

loc_00458A65: ;
    SET_LO16(esi, MEM16(eax + 0x10));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    edx = SX16(LO16(esi));
    if (CMP_G(_fas, _fbs)) goto loc_00458A73; /* jg: greater (signed >) */

loc_00458A71: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00458A73: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    edi = SX16(LO16(ecx));
    ebx = 0x3C0;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00458A9F; /* jle: less or equal (signed <=) */

loc_00458A85: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esi = 0x3C0;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx + edx + -1;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    MEM16(eax + 0x10) = LO16(edx);

loc_00458A9F: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00458AB0
 * Original: 0x00458AB0 - 0x00458B7F (207 bytes, 71 insns)
 * Folder: sound (match: xbox-retail 0x000C72E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00458AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00458AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
    MEM32(ebp + 8) = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = ebx;
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x5747A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x595FB8;
    edx = ebx;
    ebx = ebx & 0xFFFFFF00u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = MEM32(edi + edx * 4);
    mm0 = MMX_FROM32(ecx); /* movd */
    mm1 = MMX_FROM32(eax); /* movd */
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm1 = MMX_PSLLQ(mm1, mm0.q); /* psllq */
    edx = MEM32(esi + 0x28);
    ecx = 0xF6;
    mm4 = MMX_FROM32(ecx); /* movd */
    eax = mm1.ud[0]; /* movd */
    mm6 = MMX_PMADDWD(mm6, mm4); /* pmaddwd */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx ^ 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = MEM32(ebp + -4);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x574820);
    edi = mm6.ud[0]; /* movd */
    MEM32(esi + 0x28) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x20) = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00458B60; /* jge: greater or equal (signed >=) */

loc_00458B5B: ;
    ebx = 0x10F;

loc_00458B60: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00458B6D; /* jle: less or equal (signed <=) */

loc_00458B68: ;
    ebx = 0xA00;

loc_00458B6D: ;
    MEM32(esi + 4) = ebx;
    MEM32(ebp + -8) = edx;
    (void)0; /* emms - empty MMX state */
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00458AB7
 * Original: 0x00458AB7 - 0x00458B7F (200 bytes, 67 insns)
 * Folder: sound (between: 0x00458AB0 and 0x00458B80)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00458AB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00458AB7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
    MEM32(ebp + 8) = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = ebx;
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x5747A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x595FB8;
    edx = ebx;
    ebx = ebx & 0xFFFFFF00u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = MEM32(edi + edx * 4);
    mm0 = MMX_FROM32(ecx); /* movd */
    mm1 = MMX_FROM32(eax); /* movd */
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm1 = MMX_PSLLQ(mm1, mm0.q); /* psllq */
    edx = MEM32(esi + 0x28);
    ecx = 0xF6;
    mm4 = MMX_FROM32(ecx); /* movd */
    eax = mm1.ud[0]; /* movd */
    mm6 = MMX_PMADDWD(mm6, mm4); /* pmaddwd */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx ^ 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = MEM32(ebp + -4);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x574820);
    edi = mm6.ud[0]; /* movd */
    MEM32(esi + 0x28) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x20) = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00458B60; /* jge: greater or equal (signed >=) */

loc_00458B5B: ;
    ebx = 0x10F;

loc_00458B60: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00458B6D; /* jle: less or equal (signed <=) */

loc_00458B68: ;
    ebx = 0xA00;

loc_00458B6D: ;
    MEM32(esi + 4) = ebx;
    MEM32(ebp + -8) = edx;
    (void)0; /* emms - empty MMX state */
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00458B80
 * Original: 0x00458B80 - 0x00458BFF (127 bytes, 49 insns)
 * Folder: sound (match: xbox-retail 0x000C73B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00458B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00458B80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0;
    edx = 0x3F;
    ebx = 0;
    edi = MEM32(ebp + 0xC);
    mm0 = MMX_FROM32(eax); /* movd */
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    mm7 = MMX_FROM32(edx); /* movd */
    mm3 = MMX_FROM32(ebx); /* movd */

loc_00458BA7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    mm2 = mm7; /* movq */
    if (CMP_GE(_fas, _fbs)) goto loc_00458BDA; /* jge: greater or equal (signed >=) */

loc_00458BAF: ;
    mm0 = MMX_PSLLQ(mm0, 32u); /* psllq */
    mm1 = MMX_FROM32(MEM32(esi)); /* movd */
    _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1A;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_POR(mm0, mm1); /* por */
    mm6 = MMX_FROM32(ebx); /* movd */
    mm4 = mm0; /* movq */
    mm2 = MMX_PSLLQ(mm2, mm6.q); /* psllq */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PAND(mm4, mm2); /* pand */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSRLQ(mm4, mm6.q); /* psrlq */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + -4) = mm4.ud[0]; /* movd */
    if ((_fa != 0)) goto loc_00458BA7; /* jne: not equal / not zero */

loc_00458BD8: ;
    goto loc_00458BF6;

loc_00458BDA: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    mm4 = mm0; /* movq */
    mm6 = MMX_FROM32(ebx); /* movd */
    mm2 = MMX_PSLLQ(mm2, mm6.q); /* psllq */
    mm4 = MMX_PAND(mm4, mm2); /* pand */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSRLQ(mm4, mm6.q); /* psrlq */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + -4) = mm4.ud[0]; /* movd */
    if ((_fa != 0)) goto loc_00458BA7; /* jne: not equal / not zero */

loc_00458BF6: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00458C00
 * Original: 0x00458C00 - 0x00458C7F (127 bytes, 49 insns)
 * Folder: sound (match: xbox-retail 0x000C7430, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00458C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00458C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0;
    edx = 0xF;
    ebx = 0;
    edi = MEM32(ebp + 0xC);
    mm0 = MMX_FROM32(eax); /* movd */
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    mm7 = MMX_FROM32(edx); /* movd */
    mm3 = MMX_FROM32(ebx); /* movd */

loc_00458C27: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    mm2 = mm7; /* movq */
    if (CMP_GE(_fas, _fbs)) goto loc_00458C5A; /* jge: greater or equal (signed >=) */

loc_00458C2F: ;
    mm0 = MMX_MEM(esi); /* movq */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x3C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PUNPCKLDQ(mm0, MMX_MEM(esi)); /* punpckldq */
    mm6 = MMX_FROM32(ebx); /* movd */
    mm4 = mm0; /* movq */
    mm2 = MMX_PSLLQ(mm2, mm6.q); /* psllq */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PAND(mm4, mm2); /* pand */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSRLQ(mm4, mm6.q); /* psrlq */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + -4) = mm4.ud[0]; /* movd */
    if ((_fa != 0)) goto loc_00458C27; /* jne: not equal / not zero */

loc_00458C58: ;
    goto loc_00458C76;

loc_00458C5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    mm4 = mm0; /* movq */
    mm6 = MMX_FROM32(ebx); /* movd */
    mm2 = MMX_PSLLQ(mm2, mm6.q); /* psllq */
    mm4 = MMX_PAND(mm4, mm2); /* pand */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSRLQ(mm4, mm6.q); /* psrlq */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + -4) = mm4.ud[0]; /* movd */
    if ((_fa != 0)) goto loc_00458C27; /* jne: not equal / not zero */

loc_00458C76: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
