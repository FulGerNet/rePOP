/**
 * PoP SoT xbox-retail - sound, chunk 4
 * Ubisoft Dare sound engine and Jade's glue to it
 * Functions: 120 (0x000C4110 - 0x000D8410)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000C4110
 * Original: 0x000C4110 - 0x000C415F (79 bytes, 30 insns)
 * Folder: sound (source: TFader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000C411Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C411Bu); } /* indirect call */
    }

loc_000C411E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4127; /* jne: not equal / not zero */

loc_000C4122: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000C4127: ;
    edx = MEM32(edi);
    ecx = esi + 0x10;
    MEM32(ecx) = edx;
    eax = MEM32(edi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 8);
    MEM32(ecx + 8) = edx;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4155; /* je: equal / zero */

loc_000C4141: ;
    PUSH32(esp, 0x74);
    ecx = 0x426200;
    edx = 0x4260B0;
    PUSH32(esp, 0x000C4152u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C4152: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4155: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4160
 * Original: 0x000C4160 - 0x000C416E (14 bytes, 5 insns)
 * Folder: sound (between: 0x000C4110 and 0x000C4170)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4160: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4170
 * Original: 0x000C4170 - 0x000C42D6 (358 bytes, 106 insns)
 * Folder: sound (source: TFader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4170: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x404) = eax;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C41AD; /* jne: not equal / not zero */

loc_000C418C: ;
    PUSH32(esp, 0x8A);
    PUSH32(esp, 0x426200);
    PUSH32(esp, 0x4261F0);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C41AAu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C41AA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C41AD: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C41D4; /* je: equal / zero */

loc_000C41B3: ;
    PUSH32(esp, 0x8C);
    PUSH32(esp, 0x426200);
    PUSH32(esp, 0x4261DC);
    ecx = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C41D1u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C41D1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C41D4: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C41FF; /* jne: not equal / not zero */

loc_000C41DC: ;
    edx = MEM32(esp + 0x410);
    MEM32(edx) = 0;
    POP32(esp, edi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000C41F6u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C41F6: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C41FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C422C; /* jne: not equal / not zero */

loc_000C4204: ;
    eax = MEM32(esp + 0x410);
    MEM32(eax) = 0;
    eax = 1;
    POP32(esp, edi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000C4223u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C4223: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C422C: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x410);
    if (CMP_EQ(_fa, _fb)) goto loc_000C4287; /* je: equal / zero */

loc_000C423B: ;
    ecx = MEM32(edi + 0x34);
    edx = MEM32(edi + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C4249u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000C4249: ;
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x000C4254u); RECOMP_ABI_CALL(0x000AFC70u, sub_000AFC70); /* call 0x000AFC70 */

loc_000C4254: ;
    ecx = MEM32(edi + 0x3C);
    edx = 0x10000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x38);
    PUSH32(esp, 0x000C426Bu); RECOMP_ABI_CALL(0x000B0230u, sub_000B0230); /* call 0x000B0230 */

loc_000C426B: ;
    ecx = MEM32(edi + 0x28);
    MEM32(edi + 0x40) = eax;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x28) = ecx;
    POP32(esp, esi);
    if ((_fas >= 0)) goto loc_000C428A; /* jns: not sign (positive) */

loc_000C427E: ;
    MEM32(edi + 0x30) = 0;
    goto loc_000C428A;

loc_000C4287: ;
    eax = MEM32(edi + 0x2C);

loc_000C428A: ;
    ecx = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4293; /* je: equal / zero */

loc_000C4291: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4293: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000C429Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C4299u); } /* indirect call */
    }

loc_000C429C: ;
    edx = MEM32(esp + 0x414);
    ecx = MEM32(edi + 0x20);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000C42AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C42ABu); } /* indirect call */
    }

loc_000C42AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000C42B9; /* je: equal / zero */

loc_000C42B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C42C0; /* jne: not equal / not zero */

loc_000C42B9: ;
    MEM32(edi + 8) = 2;

loc_000C42C0: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, edi);
    PUSH32(esp, 0x000C42CDu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C42CD: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C42E0
 * Original: 0x000C42E0 - 0x000C4344 (100 bytes, 26 insns)
 * Folder: sound (source: TFader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C42E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C42E0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFA00000u (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x408) = eax;
    edi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000C4309; /* jl: less (signed <) */

loc_000C4305: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C432A; /* jle: less or equal (signed <=) */

loc_000C4309: ;
    PUSH32(esp, 0xBC);
    PUSH32(esp, 0x426200);
    PUSH32(esp, 0x426190);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4327u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C4327: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C432A: ;
    ecx = MEM32(esp + 0x408);
    MEM32(edi + 0x24) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000C433Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C433B: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4350
 * Original: 0x000C4350 - 0x000C4393 (67 bytes, 23 insns)
 * Folder: sound (match: xbox-demo 0x000E7870, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4350: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4388; /* je: equal / zero */

loc_000C4354: ;
    MEM32(esi + 0x38) = ecx;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x34) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C4367; /* jne: not equal / not zero */

loc_000C4361: ;
    edx = MEM32(esi + 0x2C);
    MEM32(esi + 0x40) = edx;

loc_000C4367: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x3C) = ecx;
    PUSH32(esp, 0x000C4377u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000C4377: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x30) = 1;
    MEM32(esi + 0x2C) = edi;
    esp += 4; return; /* ret */

loc_000C4388: ;
    MEM32(esi + 0x30) = 0;
    MEM32(esi + 0x2C) = edi;
    esp += 4; return; /* ret */

}

/**
 * sub_000C43A0
 * Original: 0x000C43A0 - 0x000C43E5 (69 bytes, 15 insns)
 * Folder: sound (source: TVirtualSample.hpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C43A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C43A0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x426340);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C43CDu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C43CD: ;
    ecx = MEM32(esp + 0x414);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000C43DCu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C43DC: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C43F0
 * Original: 0x000C43F0 - 0x000C4434 (68 bytes, 15 insns)
 * Folder: sound (source: TVirtualSample.hpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C43F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C43F0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x426340);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C441Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C441D: ;
    ecx = MEM32(esp + 0x414);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000C442Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C442B: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C4440
 * Original: 0x000C4440 - 0x000C4484 (68 bytes, 15 insns)
 * Folder: sound (source: TVirtualSample.hpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4440: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x426340);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C446Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C446D: ;
    ecx = MEM32(esp + 0x414);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000C447Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C447B: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4486
 * Original: 0x000C4486 - 0x000C448E (8 bytes, 8 insns)
 * Folder: sound (between: 0x000C4440 and 0x000C4530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4486(void)
{

loc_000C4486: ;
    (void)0;
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
 * sub_000C448E
 * Original: 0x000C448E - 0x000C4490 (2 bytes, 2 insns)
 * Folder: sound (between: 0x000C4440 and 0x000C4530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C448E(void)
{

loc_000C448E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000C4490
 * Original: 0x000C4490 - 0x000C4529 (153 bytes, 56 insns)
 * Folder: sound (between: 0x000C4440 and 0x000C4530)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4490: ;
    eax = MEM32(0x46B1A4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000C44A2; /* jne: not equal / not zero */

loc_000C449D: ;
    PUSH32(esp, 0x000C44A2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C44A2: ;
    edx = 0x54;
    ecx = eax;
    PUSH32(esp, 0x000C44AEu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C44AE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4518; /* je: equal / zero */

loc_000C44B4: ;
    ecx = MEM32(esp + 0x10);
    eax = 0x10000;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = 0x426258;
    MEM32(edi + 0x20) = esi;
    MEM32(edi + 0x30) = esi;
    MEM32(edi + 0x28) = esi;
    MEM32(edi + 0x2C) = esi;
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x40) = eax;
    MEM32(edi + 0x44) = eax;
    MEM32(edi + 0x1C) = esi;
    MEM32(edi + 0x50) = 0x8000;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000C44F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C44F3u); } /* indirect call */
    }

loc_000C44F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C450F; /* je: equal / zero */

loc_000C44FA: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEM32(edi + 0x34) = eax;
    PUSH32(esp, 0x000C450Bu); RECOMP_ABI_CALL(0x000C4530u, sub_000C4530); /* call 0x000C4530 */

loc_000C450B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C451E; /* jne: not equal / not zero */

loc_000C450F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000C4518u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C4515u); } /* indirect call */
    }

loc_000C4518: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C451E: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4530
 * Original: 0x000C4530 - 0x000C45B9 (137 bytes, 35 insns)
 * Folder: sound (source: TVirtualSample.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4530: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esp + 0x408);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4585; /* jne: not equal / not zero */

loc_000C4550: ;
    PUSH32(esp, 0x4E);
    PUSH32(esp, 0x4262D8);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C456Bu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C456B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000C457Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C457C: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C4585: ;
    ecx = MEM32(eax + 8);
    MEM32(edi + 0x28) = ecx;
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C4598u); RECOMP_ABI_CALL(0x000AFC70u, sub_000AFC70); /* call 0x000AFC70 */

loc_000C4598: ;
    ecx = MEM32(esp + 0x408);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x2C) = eax;
    eax = 1;
    POP32(esp, esi);
    PUSH32(esp, 0x000C45B0u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C45B0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C45C0
 * Original: 0x000C45C0 - 0x000C461F (95 bytes, 25 insns)
 * Folder: sound (source: TVirtualSample.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C45C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C45C0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x410);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C4605; /* jle: less or equal (signed <=) */

loc_000C45E4: ;
    PUSH32(esp, 0x9B);
    PUSH32(esp, 0x4262D8);
    PUSH32(esp, 0x4262BC);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C4602u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C4602: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4605: ;
    ecx = MEM32(esp + 0x408);
    MEM32(esi + 0x30) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000C4616u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C4616: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4620
 * Original: 0x000C4620 - 0x000C4682 (98 bytes, 26 insns)
 * Folder: sound (source: TVirtualSample.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4620: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C4660; /* jle: less or equal (signed <=) */

loc_000C463F: ;
    PUSH32(esp, 0xA1);
    PUSH32(esp, 0x4262D8);
    PUSH32(esp, 0x42629C);
    ecx = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C465Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C465D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4660: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    eax = 0xFFFE0000u;
    if (CMP_EQ(_fa, _fb)) goto loc_000C466E; /* je: equal / zero */

loc_000C466B: ;
    eax = MEM32(esi + 0x30);

loc_000C466E: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, esi);
    PUSH32(esp, 0x000C467Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C467B: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C4690
 * Original: 0x000C4690 - 0x000C4771 (225 bytes, 79 insns)
 * Folder: sound (match: xbox-demo 0x000E7B60, between)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4690: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C46AE; /* jne: not equal / not zero */

loc_000C469B: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    eax = 2;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_000C46AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C46C1; /* jne: not equal / not zero */

loc_000C46B3: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = 0;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_000C46C1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C46D2u); RECOMP_ABI_CALL(0x000AFC70u, sub_000AFC70); /* call 0x000AFC70 */

loc_000C46D2: ;
    edx = MEM32(edi + 0x30);
    ecx = MEM32(edi + 0x2C);
    esi = edx + eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C4717; /* jle: less or equal (signed <=) */

loc_000C46E2: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C46EEu); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000C46EE: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(edi + 8) = 2;
    MEM32(edi + 0x30) = 0xFFFE0000u;
    MEM32(edi + 0x20) = 0;
    eax = 7;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_000C4717: ;
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0x30) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000C4736; /* je: equal / zero */

loc_000C4721: ;
    ecx = MEM32(edi + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x24) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_000C4736; /* jg: greater (signed >) */

loc_000C472F: ;
    MEM32(edi + 0x1C) = 0;

loc_000C4736: ;
    edx = MEM32(ebx);
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(edi + 0x30);
    eax = MEM32(edi + 0x50);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C4766; /* jge: greater or equal (signed >=) */

loc_000C474D: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4766; /* jne: not equal / not zero */

loc_000C4754: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(edi + 0x20) = 1;
    eax = 8;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_000C4766: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 3;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C4780
 * Original: 0x000C4780 - 0x000C4840 (192 bytes, 51 insns)
 * Folder: sound (source: TMultiTrack.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4780: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368C1B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x404) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000C47CA; /* jbe: below or equal (unsigned <=) */

loc_000C47AC: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x426500);
    PUSH32(esp, 0x4264E0);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C47C7u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C47C7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C47CA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C483B; /* jbe: below or equal (unsigned <=) */

loc_000C47CE: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C47DC; /* jne: not equal / not zero */

loc_000C47D7: ;
    PUSH32(esp, 0x000C47DCu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C47DC: ;
    PUSH32(esp, esi);
    edx = 0xA4;
    ecx = eax;
    PUSH32(esp, 0x000C47E9u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C47E9: ;
    esi = eax;
    MEM32(esp + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x414) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000C4809; /* je: equal / zero */

loc_000C47FE: ;
    eax = edi;
    PUSH32(esp, 0x000C4805u); RECOMP_ABI_CALL(0x000C4840u, sub_000C4840); /* call 0x000C4840 */

loc_000C4805: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C482E; /* jne: not equal / not zero */

loc_000C4809: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000C480C: ;
    POP32(esp, esi);

loc_000C480D: ;
    ecx = MEM32(esp + 0x408);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000C4827u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C4827: ;
    _fb = (uint32_t)(0x414) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x414;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C482E: ;
    ecx = MEM32(esp + 0x41C);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C480C;

loc_000C483B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000C480D;

}

/**
 * sub_000C4840
 * Original: 0x000C4840 - 0x000C490B (203 bytes, 62 insns)
 * Folder: sound (between: 0x000C4780 and 0x000C4A10)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4840: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi) = 0x4263B0;
    MEM32(esi + 0x10) = 2;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x6C) = edi;
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = 0xFFFFFFFFu;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x94) = edi;
    MEM32(esi + 0x98) = edi;
    MEM32(esi + 0xA0) = edi;
    MEM32(esi + 0x9C) = edi;
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x84) = edi;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x78) = edi;
    ebx = eax * 8;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C48DC; /* jne: not equal / not zero */

loc_000C48D7: ;
    PUSH32(esp, 0x000C48DCu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C48DC: ;
    edx = ebx;
    ecx = eax;
    PUSH32(esp, 0x000C48E5u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C48E5: ;
    ecx = MEM32(esi + 0x5C);
    MEM32(esi + 0x2C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C4906; /* jbe: below or equal (unsigned <=) */

loc_000C48F1: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(ecx + eax * 8) = edi;
    edx = MEM32(esi + 0x2C);
    MEM32(edx + eax * 8 + 4) = edi;
    ecx = MEM32(esi + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C48F1; /* jb: below (unsigned <) */

loc_000C4906: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4910
 * Original: 0x000C4910 - 0x000C492E (30 bytes, 12 insns)
 * Folder: sound (between: 0x000C4780 and 0x000C4A10)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4910: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000C491Bu); RECOMP_ABI_CALL(0x000C4930u, sub_000C4930); /* call 0x000C4930 */

loc_000C491B: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C4927; /* je: equal / zero */

loc_000C4922: ;
    PUSH32(esp, 0x000C4927u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C4927: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4930
 * Original: 0x000C4930 - 0x000C4A0F (223 bytes, 74 insns)
 * Folder: sound (between: 0x000C4780 and 0x000C4A10)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C4930: ;
    eax = MEM32(edi + 0x28);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, esi);
    MEM32(edi) = 0x4263B0;
    if (CMP_EQ(_fa, _fb)) goto loc_000C4944; /* je: equal / zero */

loc_000C4941: ;
    MEM32(edi + 0x28) = ebp;

loc_000C4944: ;
    esi = MEM32(edi + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4953; /* je: equal / zero */

loc_000C494B: ;
    PUSH32(esp, 0x000C4950u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C4950: ;
    MEM32(edi + 0x38) = ebp;

loc_000C4953: ;
    esi = MEM32(edi + 0x3C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4962; /* je: equal / zero */

loc_000C495A: ;
    PUSH32(esp, 0x000C495Fu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C495F: ;
    MEM32(edi + 0x3C) = ebp;

loc_000C4962: ;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x34), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C499A; /* je: equal / zero */

loc_000C4967: ;
    eax = MEM32(edi + 0x50);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C498E; /* jbe: below or equal (unsigned <=) */

loc_000C4971: ;
    eax = MEM32(edi + 0x34);
    esi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4986; /* je: equal / zero */

loc_000C497B: ;
    PUSH32(esp, 0x000C4980u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C4980: ;
    ecx = MEM32(edi + 0x34);
    MEM32(ecx + ebx * 4) = ebp;

loc_000C4986: ;
    eax = MEM32(edi + 0x50);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C4971; /* jb: below (unsigned <) */

loc_000C498E: ;
    esi = MEM32(edi + 0x34);
    PUSH32(esp, 0x000C4996u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C4996: ;
    MEM32(edi + 0x34) = ebp;
    POP32(esp, ebx);

loc_000C499A: ;
    esi = MEM32(edi + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C49A9; /* je: equal / zero */

loc_000C49A1: ;
    PUSH32(esp, 0x000C49A6u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C49A6: ;
    MEM32(edi + 0x30) = ebp;

loc_000C49A9: ;
    esi = MEM32(edi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C49B8; /* je: equal / zero */

loc_000C49B0: ;
    PUSH32(esp, 0x000C49B5u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C49B5: ;
    MEM32(edi + 0x2C) = ebp;

loc_000C49B8: ;
    esi = MEM32(edi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C49C7; /* je: equal / zero */

loc_000C49BF: ;
    PUSH32(esp, 0x000C49C4u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C49C4: ;
    MEM32(edi + 0x20) = ebp;

loc_000C49C7: ;
    esi = MEM32(edi + 0x94);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C49DC; /* je: equal / zero */

loc_000C49D1: ;
    PUSH32(esp, 0x000C49D6u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C49D6: ;
    MEM32(edi + 0x94) = ebp;

loc_000C49DC: ;
    esi = MEM32(edi + 0xA0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C49F1; /* je: equal / zero */

loc_000C49E6: ;
    PUSH32(esp, 0x000C49EBu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C49EB: ;
    MEM32(edi + 0xA0) = ebp;

loc_000C49F1: ;
    esi = MEM32(edi + 0x9C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4A06; /* je: equal / zero */

loc_000C49FB: ;
    PUSH32(esp, 0x000C4A00u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C4A00: ;
    MEM32(edi + 0x9C) = ebp;

loc_000C4A06: ;
    POP32(esp, esi);
    MEM32(edi) = 0x423E58;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4A10
 * Original: 0x000C4A10 - 0x000C4A37 (39 bytes, 17 insns)
 * Folder: sound (match: xbox-demo 0x000E7E60, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4A10: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x5C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C4A35; /* jbe: below or equal (unsigned <=) */

loc_000C4A1C: ;
    /* nop */

loc_000C4A20: ;
    esi = MEM32(ecx + 0x2C);
    MEM32(esi + eax * 8) = edx;
    esi = MEM32(ecx + 0x2C);
    MEM32(esi + eax * 8 + 4) = edx;
    esi = MEM32(ecx + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C4A20; /* jb: below (unsigned <) */

loc_000C4A35: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4A40
 * Original: 0x000C4A40 - 0x000C4A66 (38 bytes, 14 insns)
 * Folder: sound (match: xbox-demo 0x000E7E90, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000C4A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000C4A4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C4A48u); } /* indirect call */
    }

loc_000C4A4B: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x4293C8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    eax = 0xFFFE0000u;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000C4A64; /* jnp: not parity */

loc_000C4A61: ;
    eax = MEM32(esi + 0x64);

loc_000C4A64: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4A70
 * Original: 0x000C4A70 - 0x000C4C3E (462 bytes, 155 insns)
 * Folder: sound (source: TMultiTrack.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C4A70: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7659BC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C4AA5; /* je: equal / zero */

loc_000C4A81: ;
    ecx = MEM32(esi + 0x5C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4A97; /* jne: not equal / not zero */

loc_000C4A89: ;
    MEM32(0x7659BC) = ebx;
    eax = 6;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C4A97: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x7659BC) = eax;
    eax = 6;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C4AA5: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), ebx (32-bit) */
    PUSH32(esp, ebp);
    ebp = 1;
    MEM32(0x7659BC) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000C4ABD; /* je: equal / zero */

loc_000C4AB6: ;
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C4ABD: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000C4B5E; /* jne: not equal / not zero */

loc_000C4AC7: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, esi);
    eax = esi + 0x24;
    edx = esi + 0x74;
    edi = esp + 0x10;
    PUSH32(esp, edi);
    MEM32(eax) = 0x20;
    MEM32(esi + 0x28) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000C4AE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C4AE2u); } /* indirect call */
    }

loc_000C4AE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4B14; /* jne: not equal / not zero */

loc_000C4AEA: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4B07; /* je: equal / zero */

loc_000C4AF0: ;
    PUSH32(esp, 0xDE);

loc_000C4AF5: ;
    ecx = 0x426500;
    edx = 0x422AB0;
    PUSH32(esp, 0x000C4B04u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C4B04: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4B07: ;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = ebp;
    POP32(esp, ebp);
    eax = 6;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C4B14: ;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4B1C; /* je: equal / zero */

loc_000C4B19: ;
    MEM32(esi + 0x6C) = ebx;

loc_000C4B1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4B39; /* jne: not equal / not zero */

loc_000C4B20: ;
    PUSH32(esp, 0xE5);
    ecx = 0x426500;
    edx = 0x4264C0;
    PUSH32(esp, 0x000C4B34u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C4B34: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C4B3E;

loc_000C4B39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4B53; /* je: equal / zero */

loc_000C4B3E: ;
    eax = esi;
    PUSH32(esp, 0x000C4B45u); RECOMP_ABI_CALL(0x000C4D50u, sub_000C4D50); /* call 0x000C4D50 */

loc_000C4B45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4B5B; /* jne: not equal / not zero */

loc_000C4B49: ;
    MEM32(esi + 0x4C) = ebp;
    MEM32(esi + 8) = 2;

loc_000C4B53: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C4B5B: ;
    MEM32(esi + 0x48) = ebp;

loc_000C4B5E: ;
    _fa = (uint32_t)(MEM32(esi + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x94), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4B89; /* jne: not equal / not zero */

loc_000C4B66: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = MEM32(esi + 0x90);
    if (CMP_NE(_fa, _fb)) goto loc_000C4B7A; /* jne: not equal / not zero */

loc_000C4B75: ;
    PUSH32(esp, 0x000C4B7Au); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C4B7A: ;
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x000C4B83u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C4B83: ;
    MEM32(esi + 0x94) = eax;

loc_000C4B89: ;
    _fa = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x9C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4BB4; /* jne: not equal / not zero */

loc_000C4B91: ;
    edi = MEM32(esi + 0x78);
    eax = MEM32(0x46B1A4);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4BA5; /* jne: not equal / not zero */

loc_000C4BA0: ;
    PUSH32(esp, 0x000C4BA5u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C4BA5: ;
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x000C4BAEu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C4BAE: ;
    MEM32(esi + 0x9C) = eax;

loc_000C4BB4: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = esi + 0x24;
    PUSH32(esp, esi);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x1C);
    edi = esp + 0x10;
    PUSH32(esp, edi);
    MEM32(esi + 0x28) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000C4BD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C4BD4u); } /* indirect call */
    }

loc_000C4BD7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4BF2; /* jne: not equal / not zero */

loc_000C4BDE: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4B07; /* je: equal / zero */

loc_000C4BE8: ;
    PUSH32(esp, 0x104);
    goto loc_000C4AF5;

loc_000C4BF2: ;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4BFA; /* je: equal / zero */

loc_000C4BF7: ;
    MEM32(esi + 0x6C) = ebx;

loc_000C4BFA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4C17; /* jne: not equal / not zero */

loc_000C4BFE: ;
    PUSH32(esp, 0x10B);
    ecx = 0x426500;
    edx = 0x4264C0;
    PUSH32(esp, 0x000C4C12u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C4C12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C4C20;

loc_000C4C17: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4B53; /* je: equal / zero */

loc_000C4C20: ;
    ecx = esi;
    PUSH32(esp, 0x000C4C27u); RECOMP_ABI_CALL(0x000C55E0u, sub_000C55E0); /* call 0x000C55E0 */

loc_000C4C27: ;
    eax = esi;
    PUSH32(esp, 0x000C4C2Eu); RECOMP_ABI_CALL(0x000C5980u, sub_000C5980); /* call 0x000C5980 */

loc_000C4C2E: ;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x40) = ebp;
    POP32(esp, ebp);
    MEM32(0x7659BC) = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C4C40
 * Original: 0x000C4C40 - 0x000C4D4C (268 bytes, 77 insns)
 * Folder: sound (source: TMultiTrack.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4C40: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    edx = MEM32(esi + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esi + 0x88);
    MEM32(esp + 0x40C) = eax;
    eax = esi + 0x24;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + edi * 4);
    edx = MEM32(esi + 0x30);
    ecx = MEM32(edx + ecx * 8);
    PUSH32(esp, esi);
    MEM32(esi + 0x28) = ecx;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    ebx = esp + 0xC;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000C4C7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C4C7Cu); } /* indirect call */
    }

loc_000C4C7F: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4CDA; /* jne: not equal / not zero */

loc_000C4C86: ;
    PUSH32(esp, 0x127);
    PUSH32(esp, 0x426500);
    PUSH32(esp, 0x4264C0);
    PUSH32(esp, 0x428D10);
    eax = esp + 0x1C;
    PUSH32(esp, eax);

loc_000C4C9F: ;
    PUSH32(esp, 0x000C4CA4u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C4CA4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4CA7: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4CBC; /* je: equal / zero */

loc_000C4CAE: ;
    MEM32(esi + 0x6C) = 0;
    MEM32(esi + 0x68) = 0xFFFFFFFFu;

loc_000C4CBC: ;
    eax = esi;
    PUSH32(esp, 0x000C4CC3u); RECOMP_ABI_CALL(0x000C5A50u, sub_000C5A50); /* call 0x000C5A50 */

loc_000C4CC3: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000C4CD3u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C4CD3: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C4CDA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4CFA; /* jne: not equal / not zero */

loc_000C4CDF: ;
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0x426500);
    PUSH32(esp, 0x41FFC0);
    PUSH32(esp, 0x428D10);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    goto loc_000C4C9F;

loc_000C4CFA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4CA7; /* jne: not equal / not zero */

loc_000C4CFF: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4D28; /* je: equal / zero */

loc_000C4D07: ;
    PUSH32(esp, 0x131);
    PUSH32(esp, 0x426500);
    PUSH32(esp, 0x422AB0);
    edx = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C4D25u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C4D25: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4D28: ;
    ecx = MEM32(esp + 0x40C);
    MEM32(esi + 0x68) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = 1;
    eax = 6;
    POP32(esp, ebx);
    PUSH32(esp, 0x000C4D45u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C4D45: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C4D50
 * Original: 0x000C4D50 - 0x000C4DA8 (88 bytes, 28 insns)
 * Folder: sound (between: 0x000C4C40 and 0x000C4E20)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C4D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4D50: ;
    _fa = (uint32_t)(MEM32(eax + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x74), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4DA5; /* jne: not equal / not zero */

loc_000C4D56: ;
    ecx = MEM32(eax + 0x5C);
    _fa = (uint32_t)(MEM32(eax + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x78), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4DA5; /* jne: not equal / not zero */

loc_000C4D5E: ;
    edx = MEM32(eax + 0x7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x24) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C4DA5; /* jbe: below or equal (unsigned <=) */

loc_000C4D66: ;
    edx = MEM32(eax + 0x80);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C4DA5; /* jbe: below or equal (unsigned <=) */

loc_000C4D70: ;
    edx = MEM32(eax + 0x84);
    ecx = ecx * 4 + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4DA5; /* jne: not equal / not zero */

loc_000C4D81: ;
    ecx = MEM32(eax + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C4DA5; /* jbe: below or equal (unsigned <=) */

loc_000C4D8B: ;
    ecx = MEM32(eax + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C4DA5; /* jbe: below or equal (unsigned <=) */

loc_000C4D95: ;
    ecx = MEM32(eax + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C4DA5; /* jbe: below or equal (unsigned <=) */

loc_000C4D9F: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000C4DA5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C4DB0
 * Original: 0x000C4DB0 - 0x000C4E12 (98 bytes, 40 insns)
 * Folder: sound (between: 0x000C4C40 and 0x000C4E20)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4DB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4DC7; /* je: equal / zero */

loc_000C4DBD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C4DC7: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = edi + 0x10;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = eax;
    eax = esp + 8;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000C4DEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C4DECu); } /* indirect call */
    }

loc_000C4DEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4DFE; /* jne: not equal / not zero */

loc_000C4DF3: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C4DFE: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x1C) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C4E20
 * Original: 0x000C4E20 - 0x000C4E5A (58 bytes, 28 insns)
 * Folder: sound (match: xbox-demo 0x000E8270, between)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C4E20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    edi = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000C4E2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C4E2Bu); } /* indirect call */
    }

loc_000C4E2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4E49; /* je: equal / zero */

loc_000C4E32: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000C4E3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C4E3Bu); } /* indirect call */
    }

loc_000C4E3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C4E50; /* jne: not equal / not zero */

loc_000C4E42: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000C4E49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C4E47u); } /* indirect call */
    }

loc_000C4E49: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000C4E50: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C4E60
 * Original: 0x000C4E60 - 0x000C555E (1790 bytes, 518 insns)
 * Folder: sound (source: TMultiTrack.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C4E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C4E60: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x88));
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebp);
    ebp = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x98);
    MEM32(esp + 0x8C) = eax;
    MEM32(edi) = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000C4EB8; /* jne: not equal / not zero */

loc_000C4EA1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x000C4EAFu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C4EAF: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x88)) >> 32) & 1);
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C4EB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C4ED4; /* jne: not equal / not zero */

loc_000C4EBD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x000C4ECBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C4ECB: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x88)) >> 32) & 1);
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C4ED4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x40), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000C4F1E; /* jne: not equal / not zero */

loc_000C4EDA: ;
    esi = ebp;
    PUSH32(esp, 0x000C4EE1u); RECOMP_ABI_CALL(0x000C4A70u, sub_000C4A70); /* call 0x000C4A70 */

loc_000C4EE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C4F03; /* je: equal / zero */

loc_000C4EE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C4F1E; /* jne: not equal / not zero */

loc_000C4EEB: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x000C4EFAu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C4EFA: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x88)) >> 32) & 1);
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C4F03: ;
    POP32(esp, esi);
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, 0x000C4F15u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C4F15: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x88)) >> 32) & 1);
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C4F1E: ;
    esi = MEM32(esp + 0xA0);
    PUSH32(esp, ebx);
    edx = ebp;
    PUSH32(esp, 0x000C4F2Du); RECOMP_ABI_CALL(0x000C5B30u, sub_000C5B30); /* call 0x000C5B30 */

loc_000C4F2D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C4F53; /* jne: not equal / not zero */

loc_000C4F34: ;
    PUSH32(esp, 0x1C2);
    ecx = 0x426500;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000C4F48u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C4F48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4F4B: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000C5545;

loc_000C4F53: ;
    eax = MEM32(ebp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C4F63; /* je: equal / zero */

loc_000C4F5A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x68) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C50B1; /* jne: not equal / not zero */

loc_000C4F63: ;
    eax = MEM32(ebp + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x9C);
    if (CMP_EQ(_fa, _fb)) goto loc_000C501E; /* je: equal / zero */

loc_000C4F78: ;
    ecx = MEM32(ebp + 0xA0);
    _fa = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebx * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C500A; /* jne: not equal / not zero */

loc_000C4F88: ;
    edx = MEM32(ebp + 0x98);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + ebx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + ebx * 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000C4FAC; /* jae: above or equal (unsigned >=) */

loc_000C4F95: ;
    PUSH32(esp, 0x1CF);
    ecx = 0x426500;
    edx = 0x426488;
    PUSH32(esp, 0x000C4FA9u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C4FA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C4FAC: ;
    ecx = MEM32(ebp + 0x98);
    ecx = MEM32(ecx + ebx * 4);
    edx = MEM32(ebp + 0x9C);
    esi = MEM32(edx + ebx * 4);
    eax = MEM32(esp + 0x9C);
    edi = MEM32(eax + 4);
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    _cf = 0; /* logical op clears CF */
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
    eax = MEM32(ebp + 0x98);
    eax = MEM32(eax + ebx * 4);
    ecx = MEM32(esp + 0xA0);
    MEM32(ecx) = eax;
    edx = MEM32(ebp + 0xA0);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x9C);
    MEM32(edx + ebx * 4) = 1;
    MEM32(esp + 0x1C) = 1;
    edi = ecx;

loc_000C500A: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C501E; /* jne: not equal / not zero */

loc_000C5010: ;
    edi = ebp;
    PUSH32(esp, 0x000C5017u); RECOMP_ABI_CALL(0x000C5560u, sub_000C5560); /* call 0x000C5560 */

loc_000C5017: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C5545;

loc_000C501E: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(edi);
    eax = MEM32(ebp + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ebx * 8 + 4) = edx;
    eax = MEM32(ebp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C5055; /* jne: not equal / not zero */

loc_000C5033: ;
    ecx = ebx;
    esi = ebp;
    PUSH32(esp, 0x000C503Cu); RECOMP_ABI_CALL(0x000C4C40u, sub_000C4C40); /* call 0x000C4C40 */

loc_000C503C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C4F4B; /* je: equal / zero */

loc_000C5049: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C5096; /* je: equal / zero */

loc_000C504E: ;
    MEM32(ebp + 0x44) = 1;

loc_000C5055: ;
    edx = MEM32(ebp + 0x38);
    eax = MEM32(edx + ebx * 4);
    edi = MEM32(ebp + 0x30);
    ecx = edx + ebx * 4;
    edx = MEM32(edi + eax * 8 + 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x80) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C50BB; /* jne: not equal / not zero */

loc_000C506F: ;
    edx = MEM32(ebp + 0x3C);
    _fa = (uint32_t)(MEM32(edx + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ebx * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C50BB; /* je: equal / zero */

loc_000C5078: ;
    eax = MEM32(esp + 0xA0);
    edi = ebp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x000C508Cu); RECOMP_ABI_CALL(0x000C5560u, sub_000C5560); /* call 0x000C5560 */

loc_000C508C: ;
    eax = 4;
    goto loc_000C5545;

loc_000C5096: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000C50B1; /* je: equal / zero */

loc_000C50A4: ;
    ecx = MEM32(ebp + 0xA0);
    MEM32(ecx + ebx * 4) = 0;

loc_000C50B1: ;
    eax = 6;
    goto loc_000C5545;

loc_000C50BB: ;
    edx = MEM32(esp + 0x9C);
    edx = MEM32(edx);
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(esp + 0x18)));
    edx = edx - MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C5351; /* je: equal / zero */

loc_000C50CE: ;
    edi = edi;

loc_000C50D0: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C5351; /* je: equal / zero */

loc_000C50DA: ;
    esi = MEM32(ebp + 0x34);
    eax = MEM32(ecx);
    eax = MEM32(esi + eax * 4);
    esi = eax + ebx * 8;
    eax = MEM32(ecx);
    eax = MEM32(edi + eax * 8 + 4);
    eax = MEM32(eax + ebx * 4 + 0xC);
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 4))) >> 32) & 1);
    eax = eax + MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi)));
    eax = eax - MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(esp + 0x10)));
    edx = edx - MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x24) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_000C538C; /* jae: above or equal (unsigned >=) */

loc_000C5104: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000C515E; /* jbe: below or equal (unsigned <=) */

loc_000C5108: ;
    edx = MEM32(ecx);
    esi = MEM32(ebp + 0x34);
    esi = MEM32(esi + edx * 4);
    esi = MEM32(esi + ebx * 8);
    _fb = (uint32_t)(MEM32(edi + edx * 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(edi + edx * 8))) >> 32) & 1);
    esi = esi + MEM32(edi + edx * 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0x2C);
    edi = MEM32(edx + ebx * 8 + 4);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(esp + 0x10))) >> 32) & 1);
    edi = edi + MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
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
    if (CMP_NE(_fa, _fb)) goto loc_000C5138; /* jne: not equal / not zero */

loc_000C5135: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x64)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C5138: ;
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(ecx + ebx * 4);
    ecx = MEM32(ebp + 0x34);
    edx = MEM32(ecx + edx * 4);
    ecx = edx + ebx * 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C5449; /* je: equal / zero */

loc_000C515E: ;
    eax = MEM32(ebp + 0x38);
    edx = MEM32(ebp + 0x30);
    ecx = MEM32(eax + ebx * 4);
    ecx = MEM32(edx + ecx * 8 + 4);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x80) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = eax + ebx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000C53E0; /* je: equal / zero */

loc_000C517C: ;
    ecx = MEM32(eax);
    esi = MEM32(edx + ecx * 8 + 4);
    esi = MEM32(esi);
    edi = ecx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x50) (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edx + ecx * 8 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_000C51BE; /* jae: above or equal (unsigned >=) */

loc_000C519A: ;
    ecx = MEM32(ebp + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C51BE; /* jne: not equal / not zero */

loc_000C51A1: ;
    esi = MEM32(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = esi;
    edx = MEM32(ebp + 0x50);
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000C52B8; /* jb: below (unsigned <) */

loc_000C51B3: ;
    MEM32(eax) = 0;
    goto loc_000C52B8;

loc_000C51BE: ;
    esi = MEM32(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = esi;
    edx = MEM32(ebp + 0x50);
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000C51D2; /* jb: below (unsigned <) */

loc_000C51CC: ;
    MEM32(eax) = 0;

loc_000C51D2: ;
    edi = ebp;
    PUSH32(esp, 0x000C51D9u); RECOMP_ABI_CALL(0x000C5AC0u, sub_000C5AC0); /* call 0x000C5AC0 */

loc_000C51D9: ;
    ecx = MEM32(ebp + 0x88);
    edx = MEM32(ebp + 0x38);
    eax = ebp + 0x24;
    MEM32(eax) = ecx;
    edi = ebx * 4;
    ecx = MEM32(edi + edx);
    edx = MEM32(ebp + 0x30);
    ecx = MEM32(edx + ecx * 8);
    PUSH32(esp, ebp);
    MEM32(ebp + 0x28) = ecx;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ecx);
    esi = esp + 0x30;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000C5209u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5206u); } /* indirect call */
    }

loc_000C5209: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000C522D; /* jne: not equal / not zero */

loc_000C5214: ;
    PUSH32(esp, 0x231);
    ecx = 0x426500;
    edx = 0x4264C0;
    PUSH32(esp, 0x000C5228u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C5228: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C5236;

loc_000C522D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C5455; /* je: equal / zero */

loc_000C5236: ;
    eax = MEM32(ebp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C524B; /* je: equal / zero */

loc_000C523D: ;
    MEM32(ebp + 0x6C) = 0;
    MEM32(ebp + 0x68) = 0xFFFFFFFFu;

loc_000C524B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C5351; /* je: equal / zero */

loc_000C5254: ;
    ecx = MEM32(esp + 0x14);
    eax = 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C5267; /* jne: not equal / not zero */

loc_000C5261: ;
    MEM32(esp + 0x20) = eax;
    goto loc_000C526D;

loc_000C5267: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C5271; /* jne: not equal / not zero */

loc_000C526D: ;
    MEM32(esp + 0x14) = eax;

loc_000C5271: ;
    eax = MEM32(ebp + 0x38);
    ecx = MEM32(eax + ebx * 4);
    edx = MEM32(ebp + 0x30);
    eax = MEM32(edx + ecx * 8 + 4);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000C52AF; /* je: equal / zero */

loc_000C5284: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, 0x426440);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C5298u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C5298: ;
    PUSH32(esp, 0x261);
    ecx = 0x426500;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000C52ACu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C52AC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C52AF: ;
    edi = ebx;
    eax = ebp;
    PUSH32(esp, 0x000C52B8u); RECOMP_ABI_CALL(0x000C5A50u, sub_000C5A50); /* call 0x000C5A50 */

loc_000C52B8: ;
    eax = MEM32(esp + 0x9C);
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(ecx + ebx * 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebp + 0x30);
    edx = MEM32(edi + edx * 8 + 4);
    edx = MEM32(edx + ebx * 4 + 0xC);
    ecx = ecx + ebx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) eax = edx; /* cmova */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000C53E0; /* jbe: below or equal (unsigned <=) */

loc_000C52EE: ;
    edx = MEM32(ecx);
    esi = MEM32(ebp + 0x34);
    esi = MEM32(esi + edx * 4);
    esi = MEM32(esi + ebx * 8);
    _fb = (uint32_t)(MEM32(edi + edx * 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(edi + edx * 8))) >> 32) & 1);
    esi = esi + MEM32(edi + edx * 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0x2C);
    edi = MEM32(edx + ebx * 8 + 4);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(esp + 0x10))) >> 32) & 1);
    edi = edi + MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
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
    if (CMP_NE(_fa, _fb)) goto loc_000C531E; /* jne: not equal / not zero */

loc_000C531B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x64)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C531E: ;
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(ecx + ebx * 4);
    ecx = MEM32(ebp + 0x34);
    edx = MEM32(ecx + edx * 4);
    esi = MEM32(esp + 0x10);
    ecx = edx + ebx * 8;
    edx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x14);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000C53E0; /* jne: not equal / not zero */

loc_000C534E: ;
    MEM32(ebp + 8) = eax;

loc_000C5351: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xA0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    eax = MEM32(ebp + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C553A; /* je: equal / zero */

loc_000C536F: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C553A; /* jne: not equal / not zero */

loc_000C537B: ;
    MEM32(ebp + 0x70) = 0;
    eax = 5;
    goto loc_000C5545;

loc_000C538C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000C53E0; /* jbe: below or equal (unsigned <=) */

loc_000C5390: ;
    eax = MEM32(ecx);
    esi = MEM32(ebp + 0x34);
    esi = MEM32(esi + eax * 4);
    esi = MEM32(esi + ebx * 8);
    _fb = (uint32_t)(MEM32(edi + eax * 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(edi + eax * 8))) >> 32) & 1);
    esi = esi + MEM32(edi + eax * 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x2C);
    edi = MEM32(eax + ebx * 8 + 4);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(esp + 0x10))) >> 32) & 1);
    edi = edi + MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
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
    if (CMP_NE(_fa, _fb)) goto loc_000C53C0; /* jne: not equal / not zero */

loc_000C53BD: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x64)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) + edx;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C53C0: ;
    ecx = MEM32(ebp + 0x38);
    eax = MEM32(ecx + ebx * 4);
    ecx = MEM32(ebp + 0x34);
    eax = MEM32(ecx + eax * 4);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(eax + ebx * 8);
    eax = eax + ebx * 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = esi;
    MEM32(eax) = ecx;

loc_000C53E0: ;
    ecx = MEM32(ebp + 0x38);
    edi = MEM32(ebp + 0x30);
    esi = ebx * 4;
    edx = MEM32(ecx + esi);
    eax = MEM32(edi + edx * 8 + 4);
    edx = MEM32(eax);
    eax = MEM32(ebp + 0x80);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C5429; /* jne: not equal / not zero */

loc_000C5402: ;
    eax = MEM32(ecx);
    edx = MEM32(ebp + 0x34);
    edx = MEM32(edx + eax * 4);
    eax = MEM32(edi + eax * 8 + 4);
    eax = MEM32(eax + ebx * 4 + 0xC);
    _fb = (uint32_t)(MEM32(edx + ebx * 8 + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edx + ebx * 8 + 4))) >> 32) & 1);
    eax = eax + MEM32(edx + ebx * 8 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx + ebx * 8;
    _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(edx)));
    eax = eax - MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C54E5; /* je: equal / zero */

loc_000C5421: ;
    MEM32(esp + 0x14) = 0;

loc_000C5429: ;
    edx = MEM32(esp + 0x9C);
    edx = MEM32(edx);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000C50D0; /* jb: below (unsigned <) */

loc_000C5444: ;
    goto loc_000C5351;

loc_000C5449: ;
    MEM32(ebp + 8) = 2;
    goto loc_000C5351;

loc_000C5455: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5474; /* je: equal / zero */

loc_000C545D: ;
    PUSH32(esp, 0x235);
    ecx = 0x426500;
    edx = 0x422AB0;
    PUSH32(esp, 0x000C5471u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C5471: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C5474: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 0x68) = ebx;
    MEM32(ebp + 0x6C) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000C548E; /* jne: not equal / not zero */

loc_000C5482: ;
    ecx = MEM32(ebp + 0x64);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x64) = ecx;

loc_000C548E: ;
    ecx = MEM32(ebp + 0x38);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C5499u); RECOMP_ABI_CALL(0x000C5BD0u, sub_000C5BD0); /* call 0x000C5BD0 */

loc_000C5499: ;
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(edi + ecx);
    eax = MEM32(ebp + 0x34);
    ecx = MEM32(eax + edx * 4);
    edx = MEM32(esp + 0x24);
    eax = ecx + ebx * 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(eax)) < (uint32_t)(edx));
    MEM32(eax) = MEM32(eax) - edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xA0);
    MEM32(eax) = 0;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000C54C9; /* jne: not equal / not zero */

loc_000C54C2: ;
    MEM32(ebp + 0x70) = 1;

loc_000C54C9: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C54DE; /* je: equal / zero */

loc_000C54D1: ;
    ecx = MEM32(ebp + 0xA0);
    MEM32(edi + ecx) = 0;

loc_000C54DE: ;
    eax = 6;
    goto loc_000C5545;

loc_000C54E5: ;
    edx = MEM32(ebp + 0x3C);
    MEM32(esi + edx) = 1;
    eax = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = 1;
    if (CMP_BE(_fa, _fb)) goto loc_000C5512; /* jbe: below or equal (unsigned <=) */

loc_000C54FB: ;
    eax = MEM32(ebp + 0x3C);
    edx = MEM32(ebp + 0x5C);

loc_000C5501: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000C5508; /* jne: not equal / not zero */

loc_000C5506: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C5508: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C5501; /* jne: not equal / not zero */

loc_000C550E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5519; /* je: equal / zero */

loc_000C5512: ;
    MEM32(ebp + 8) = 2;

loc_000C5519: ;
    edi = ebp;
    PUSH32(esp, 0x000C5520u); RECOMP_ABI_CALL(0x000C5560u, sub_000C5560); /* call 0x000C5560 */

loc_000C5520: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xA0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    eax = 4;
    goto loc_000C5545;

loc_000C553A: ;
    edi = ebp;
    PUSH32(esp, 0x000C5541u); RECOMP_ABI_CALL(0x000C5560u, sub_000C5560); /* call 0x000C5560 */

loc_000C5541: ;
    eax = MEM32(esp + 0x14);

loc_000C5545: ;
    ecx = MEM32(esp + 0x94);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000C5555u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C5555: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x88)) >> 32) & 1);
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C5198
 * Original: 0x000C5198 - 0x000C555E (966 bytes, 288 insns)
 * Folder: sound (source: TMultiTrack.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5198(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C5198: ;
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_000C51BE;

loc_000C519A: ;
    ecx = MEM32(ebp + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C51BE; /* jne: not equal / not zero */

loc_000C51A1: ;
    esi = MEM32(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = esi;
    edx = MEM32(ebp + 0x50);
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C52B8; /* jb: below (unsigned <) */

loc_000C51B3: ;
    MEM32(eax) = 0;
    goto loc_000C52B8;

loc_000C51BE: ;
    esi = MEM32(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = esi;
    edx = MEM32(ebp + 0x50);
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C51D2; /* jb: below (unsigned <) */

loc_000C51CC: ;
    MEM32(eax) = 0;

loc_000C51D2: ;
    edi = ebp;
    PUSH32(esp, 0x000C51D9u); RECOMP_ABI_CALL(0x000C5AC0u, sub_000C5AC0); /* call 0x000C5AC0 */

loc_000C51D9: ;
    ecx = MEM32(ebp + 0x88);
    edx = MEM32(ebp + 0x38);
    eax = ebp + 0x24;
    MEM32(eax) = ecx;
    edi = ebx * 4;
    ecx = MEM32(edi + edx);
    edx = MEM32(ebp + 0x30);
    ecx = MEM32(edx + ecx * 8);
    PUSH32(esp, ebp);
    MEM32(ebp + 0x28) = ecx;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ecx);
    esi = esp + 0x30;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000C5209u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5206u); } /* indirect call */
    }

loc_000C5209: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000C522D; /* jne: not equal / not zero */

loc_000C5214: ;
    PUSH32(esp, 0x231);
    ecx = 0x426500;
    edx = 0x4264C0;
    PUSH32(esp, 0x000C5228u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C5228: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C5236;

loc_000C522D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5455; /* je: equal / zero */

loc_000C5236: ;
    eax = MEM32(ebp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C524B; /* je: equal / zero */

loc_000C523D: ;
    MEM32(ebp + 0x6C) = 0;
    MEM32(ebp + 0x68) = 0xFFFFFFFFu;

loc_000C524B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5351; /* je: equal / zero */

loc_000C5254: ;
    ecx = MEM32(esp + 0x14);
    eax = 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5267; /* jne: not equal / not zero */

loc_000C5261: ;
    MEM32(esp + 0x20) = eax;
    goto loc_000C526D;

loc_000C5267: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5271; /* jne: not equal / not zero */

loc_000C526D: ;
    MEM32(esp + 0x14) = eax;

loc_000C5271: ;
    eax = MEM32(ebp + 0x38);
    ecx = MEM32(eax + ebx * 4);
    edx = MEM32(ebp + 0x30);
    eax = MEM32(edx + ecx * 8 + 4);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C52AF; /* je: equal / zero */

loc_000C5284: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, 0x426440);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C5298u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C5298: ;
    PUSH32(esp, 0x261);
    ecx = 0x426500;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000C52ACu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C52AC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C52AF: ;
    edi = ebx;
    eax = ebp;
    PUSH32(esp, 0x000C52B8u); RECOMP_ABI_CALL(0x000C5A50u, sub_000C5A50); /* call 0x000C5A50 */

loc_000C52B8: ;
    eax = MEM32(esp + 0x9C);
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(ecx + ebx * 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebp + 0x30);
    edx = MEM32(edi + edx * 8 + 4);
    edx = MEM32(edx + ebx * 4 + 0xC);
    ecx = ecx + ebx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) eax = edx; /* cmova */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C53E0; /* jbe: below or equal (unsigned <=) */

loc_000C52EE: ;
    edx = MEM32(ecx);
    esi = MEM32(ebp + 0x34);
    esi = MEM32(esi + edx * 4);
    esi = MEM32(esi + ebx * 8);
    _fb = (uint32_t)(MEM32(edi + edx * 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edi + edx * 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0x2C);
    edi = MEM32(edx + ebx * 8 + 4);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edx = ecx;
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
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
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
    if (CMP_NE(_fa, _fb)) goto loc_000C531E; /* jne: not equal / not zero */

loc_000C531B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C531E: ;
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(ecx + ebx * 4);
    ecx = MEM32(ebp + 0x34);
    edx = MEM32(ecx + edx * 4);
    esi = MEM32(esp + 0x10);
    ecx = edx + ebx * 8;
    edx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x14);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000C53E0; /* jne: not equal / not zero */

loc_000C534E: ;
    MEM32(ebp + 8) = eax;

loc_000C5351: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xA0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    eax = MEM32(ebp + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C553A; /* je: equal / zero */

loc_000C536F: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C553A; /* jne: not equal / not zero */

loc_000C537B: ;
    MEM32(ebp + 0x70) = 0;
    eax = 5;
    goto loc_000C5545;

    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C53E0; /* jbe: below or equal (unsigned <=) */

loc_000C5390: ;
    eax = MEM32(ecx);
    esi = MEM32(ebp + 0x34);
    esi = MEM32(esi + eax * 4);
    esi = MEM32(esi + ebx * 8);
    _fb = (uint32_t)(MEM32(edi + eax * 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edi + eax * 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x2C);
    edi = MEM32(eax + ebx * 8 + 4);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
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
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
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
    if (CMP_NE(_fa, _fb)) goto loc_000C53C0; /* jne: not equal / not zero */

loc_000C53BD: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) + edx;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C53C0: ;
    ecx = MEM32(ebp + 0x38);
    eax = MEM32(ecx + ebx * 4);
    ecx = MEM32(ebp + 0x34);
    eax = MEM32(ecx + eax * 4);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(eax + ebx * 8);
    eax = eax + ebx * 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = esi;
    MEM32(eax) = ecx;

loc_000C53E0: ;
    ecx = MEM32(ebp + 0x38);
    edi = MEM32(ebp + 0x30);
    esi = ebx * 4;
    edx = MEM32(ecx + esi);
    eax = MEM32(edi + edx * 8 + 4);
    edx = MEM32(eax);
    eax = MEM32(ebp + 0x80);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5429; /* jne: not equal / not zero */

loc_000C5402: ;
    eax = MEM32(ecx);
    edx = MEM32(ebp + 0x34);
    edx = MEM32(edx + eax * 4);
    eax = MEM32(edi + eax * 8 + 4);
    eax = MEM32(eax + ebx * 4 + 0xC);
    _fb = (uint32_t)(MEM32(edx + ebx * 8 + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx + ebx * 8 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx + ebx * 8;
    _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C54E5; /* je: equal / zero */

loc_000C5421: ;
    MEM32(esp + 0x14) = 0;

loc_000C5429: ;
    edx = MEM32(esp + 0x9C);
    edx = MEM32(edx);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000C50D0(); return; } /* jb: below (unsigned <) */

loc_000C5444: ;
    goto loc_000C5351;

    MEM32(ebp + 8) = 2;
    goto loc_000C5351;

loc_000C5455: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5474; /* je: equal / zero */

loc_000C545D: ;
    PUSH32(esp, 0x235);
    ecx = 0x426500;
    edx = 0x422AB0;
    PUSH32(esp, 0x000C5471u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C5471: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C5474: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0x68) = ebx;
    MEM32(ebp + 0x6C) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000C548E; /* jne: not equal / not zero */

loc_000C5482: ;
    ecx = MEM32(ebp + 0x64);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x64) = ecx;

loc_000C548E: ;
    ecx = MEM32(ebp + 0x38);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C5499u); RECOMP_ABI_CALL(0x000C5BD0u, sub_000C5BD0); /* call 0x000C5BD0 */

loc_000C5499: ;
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(edi + ecx);
    eax = MEM32(ebp + 0x34);
    ecx = MEM32(eax + edx * 4);
    edx = MEM32(esp + 0x24);
    eax = ecx + ebx * 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xA0);
    MEM32(eax) = 0;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C54C9; /* jne: not equal / not zero */

loc_000C54C2: ;
    MEM32(ebp + 0x70) = 1;

loc_000C54C9: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C54DE; /* je: equal / zero */

loc_000C54D1: ;
    ecx = MEM32(ebp + 0xA0);
    MEM32(edi + ecx) = 0;

loc_000C54DE: ;
    eax = 6;
    goto loc_000C5545;

loc_000C54E5: ;
    edx = MEM32(ebp + 0x3C);
    MEM32(esi + edx) = 1;
    eax = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 1;
    if (CMP_BE(_fa, _fb)) goto loc_000C5512; /* jbe: below or equal (unsigned <=) */

loc_000C54FB: ;
    eax = MEM32(ebp + 0x3C);
    edx = MEM32(ebp + 0x5C);

loc_000C5501: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5508; /* jne: not equal / not zero */

loc_000C5506: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C5508: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C5501; /* jne: not equal / not zero */

loc_000C550E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5519; /* je: equal / zero */

loc_000C5512: ;
    MEM32(ebp + 8) = 2;

loc_000C5519: ;
    edi = ebp;
    PUSH32(esp, 0x000C5520u); RECOMP_ABI_CALL(0x000C5560u, sub_000C5560); /* call 0x000C5560 */

loc_000C5520: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xA0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    eax = 4;
    goto loc_000C5545;

loc_000C553A: ;
    edi = ebp;
    PUSH32(esp, 0x000C5541u); RECOMP_ABI_CALL(0x000C5560u, sub_000C5560); /* call 0x000C5560 */

loc_000C5541: ;
    eax = MEM32(esp + 0x14);

loc_000C5545: ;
    ecx = MEM32(esp + 0x94);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000C5555u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C5555: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C5560
 * Original: 0x000C5560 - 0x000C55DE (126 bytes, 35 insns)
 * Folder: sound (between: 0x000C5198 and 0x000C5980)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5560: ;
    eax = MEM32(edi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000C55DD; /* je: equal / zero */

loc_000C556F: ;
    eax = MEM32(edi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_000C5591; /* jbe: below or equal (unsigned <=) */

loc_000C5577: ;
    eax = MEM32(edi + 0xA0);
    ecx = MEM32(edi + 0x5C);

loc_000C5580: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5587; /* jne: not equal / not zero */

loc_000C5585: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C5587: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C5580; /* jne: not equal / not zero */

loc_000C558D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C55DC; /* je: equal / zero */

loc_000C5591: ;
    esi = MEM32(edi + 0x94);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C55A0; /* je: equal / zero */

loc_000C559B: ;
    PUSH32(esp, 0x000C55A0u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C55A0: ;
    esi = MEM32(edi + 0xA0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000C55B9; /* je: equal / zero */

loc_000C55B4: ;
    PUSH32(esp, 0x000C55B9u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C55B9: ;
    esi = MEM32(edi + 0x9C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0xA0) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000C55D2; /* je: equal / zero */

loc_000C55CD: ;
    PUSH32(esp, 0x000C55D2u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C55D2: ;
    MEM32(edi + 0x9C) = 0;

loc_000C55DC: ;
    POP32(esp, esi);

loc_000C55DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C55E0
 * Original: 0x000C55E0 - 0x000C597B (923 bytes, 285 insns)
 * Folder: sound (between: 0x000C5198 and 0x000C5980)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C55E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C55E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2004;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C55F0u); RECOMP_ABI_CALL(0x00347D50u, sub_00347D50); /* call 0x00347D50 */

loc_000C55F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C5601u); RECOMP_ABI_CALL(0x000C5B50u, sub_000C5B50); /* call 0x000C5B50 */

loc_000C5601: ;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5624; /* jne: not equal / not zero */

loc_000C5608: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esi + 0x58);
    if (CMP_NE(_fa, _fb)) goto loc_000C5619; /* jne: not equal / not zero */

loc_000C5614: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C5619u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5619: ;
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C5622u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C5622: ;
    goto loc_000C5644;

loc_000C5624: ;
    ebx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5647; /* je: equal / zero */

loc_000C562C: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C563A; /* jne: not equal / not zero */

loc_000C5635: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C563Au); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C563A: ;
    PUSH32(esp, edi);
    edx = ebx;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C5644u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000C5644: ;
    MEM32(esi + 0x20) = eax;

loc_000C5647: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C566E; /* jne: not equal / not zero */

loc_000C564E: ;
    edi = MEM32(esi + 0x5C);
    eax = MEM32(0x46B1A4);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5662; /* jne: not equal / not zero */

loc_000C565D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C5662u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5662: ;
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C566Bu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C566B: ;
    MEM32(esi + 0x38) = eax;

loc_000C566E: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5695; /* jne: not equal / not zero */

loc_000C5675: ;
    edi = MEM32(esi + 0x5C);
    eax = MEM32(0x46B1A4);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5689; /* jne: not equal / not zero */

loc_000C5684: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C5689u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5689: ;
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C5692u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C5692: ;
    MEM32(esi + 0x3C) = eax;

loc_000C5695: ;
    ebx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C56BB; /* jne: not equal / not zero */

loc_000C569C: ;
    edi = MEM32(esi + 0x50);
    eax = MEM32(0x46B1A4);
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C56B0; /* jne: not equal / not zero */

loc_000C56AB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C56B0u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C56B0: ;
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C56B9u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C56B9: ;
    goto loc_000C56E3;

loc_000C56BB: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C56E6; /* je: equal / zero */

loc_000C56C4: ;
    edi = eax * 8;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C56D9; /* jne: not equal / not zero */

loc_000C56D4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C56D9u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C56D9: ;
    PUSH32(esp, ebx);
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C56E3u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000C56E3: ;
    MEM32(esi + 0x30) = eax;

loc_000C56E6: ;
    ebx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5734; /* jne: not equal / not zero */

loc_000C56ED: ;
    edi = MEM32(esi + 0x50);
    eax = MEM32(0x46B1A4);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5701; /* jne: not equal / not zero */

loc_000C56FC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C5701u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5701: ;
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C570Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C570A: ;
    ecx = MEM32(esi + 0x50);
    MEM32(esi + 0x34) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C5782; /* jbe: below or equal (unsigned <=) */

loc_000C5716: ;
    goto loc_000C5720;

    /* nop */
    /* nop */

loc_000C5720: ;
    ecx = MEM32(esi + 0x34);
    MEM32(ecx + eax * 4) = 0;
    ecx = MEM32(esi + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C5720; /* jb: below (unsigned <) */

loc_000C5732: ;
    goto loc_000C5782;

loc_000C5734: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5782; /* je: equal / zero */

loc_000C573D: ;
    edi = eax * 4;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5752; /* jne: not equal / not zero */

loc_000C574D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C5752u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5752: ;
    PUSH32(esp, ebx);
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C575Cu); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000C575C: ;
    ecx = MEM32(esi + 0x50);
    MEM32(esi + 0x34) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000C5782; /* jae: above or equal (unsigned >=) */

loc_000C576A: ;
    /* nop */

loc_000C5770: ;
    edx = MEM32(esi + 0x34);
    MEM32(edx + eax * 4) = 0;
    ecx = MEM32(esi + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C5770; /* jb: below (unsigned <) */

loc_000C5782: ;
    ecx = MEM32(esi + 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000C5835; /* jbe: below or equal (unsigned <=) */

loc_000C5793: ;
    ecx = MEM32(esi + 0x34);
    edi = MEM32(esi + 0x5C);
    ebx = MEM32(ecx + eax * 4);
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C57FA; /* jne: not equal / not zero */

loc_000C57A3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C57B1; /* jne: not equal / not zero */

loc_000C57AC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C57B1u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C57B1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000C57B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C57B6u); } /* indirect call */
    }

loc_000C57B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5817; /* jne: not equal / not zero */

loc_000C57BD: ;
    eax = esp + 0x10;
    ecx = 0x41F48C;
    edx = eax;
    esi = 0xFFF;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_000C57D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C57E3; /* je: equal / zero */

loc_000C57D4: ;
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C57D0; /* jne: not equal / not zero */

loc_000C57E3: ;
    ecx = esp + 0x100F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000C58C3; /* jae: above or equal (unsigned >=) */

loc_000C57F2: ;
    MEM8(eax) = 0;
    goto loc_000C58CB;

loc_000C57FA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5821; /* je: equal / zero */

loc_000C57FF: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C580D; /* jne: not equal / not zero */

loc_000C5808: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C580Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C580D: ;
    PUSH32(esp, ebx);
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C5817u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000C5817: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + edx * 4) = eax;

loc_000C5821: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000C5793; /* jb: below (unsigned <) */

loc_000C5835: ;
    eax = MEM32(esi + 0x94);
    MEM32(esi + 0x98) = eax;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5875; /* jne: not equal / not zero */

loc_000C584B: ;
    edi = MEM32(esi + 0x5C);
    eax = MEM32(0x46B1A4);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C585F; /* jne: not equal / not zero */

loc_000C585A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C585Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C585F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000C5867u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5864u); } /* indirect call */
    }

loc_000C5867: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C58EF; /* je: equal / zero */

loc_000C586F: ;
    MEM32(esi + 0xA0) = eax;

loc_000C5875: ;
    edx = MEM32(esi + 0x5C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = edx * 4;
    if (CMP_BE(_fa, _fb)) goto loc_000C5974; /* jbe: below or equal (unsigned <=) */

loc_000C5889: ;
    /* nop */

loc_000C5890: ;
    edx = MEM32(esi + 0xA0);
    MEM32(edx + eax * 4) = 0;
    edx = MEM32(esi + 0x98);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C5950; /* jbe: below or equal (unsigned <=) */

loc_000C58AD: ;
    edx = MEM32(esi + 0x94);
    edi = MEM32(esi + 0x9C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + eax * 4) = edx;
    goto loc_000C595D;

loc_000C58C3: ;
    MEM8(esp + 0x100F) = 0;

loc_000C58CB: ;
    PUSH32(esp, 0x42ABA0);
    edx = esp + 0x1014;
    ecx = 0x400;
    esi = esp + 0x14;
    edi = esp + 0x1014;
    PUSH32(esp, edx);
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
    PUSH32(esp, 0x000C58EFu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_000C58EF: ;
    eax = esp + 0x10;
    ecx = 0x41F48C;
    edx = eax;
    esi = 0xFFF;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000C5901: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5914; /* je: equal / zero */

loc_000C5905: ;
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5901; /* jne: not equal / not zero */

loc_000C5914: ;
    ecx = esp + 0x100F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000C5924; /* jae: above or equal (unsigned >=) */

loc_000C591F: ;
    MEM8(eax) = 0;
    goto loc_000C592C;

loc_000C5924: ;
    MEM8(esp + 0x100F) = 0;

loc_000C592C: ;
    PUSH32(esp, 0x42ABA0);
    edx = esp + 0x1014;
    ecx = 0x400;
    esi = esp + 0x14;
    edi = esp + 0x1014;
    PUSH32(esp, edx);
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
    PUSH32(esp, 0x000C5950u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_000C5950: ;
    edx = MEM32(esi + 0x9C);
    MEM32(edx + eax * 4) = 0;

loc_000C595D: ;
    edx = MEM32(esi + 0x98);
    ebx = MEM32(edx + eax * 4);
    edx = MEM32(esi + 0x5C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C5890; /* jb: below (unsigned <) */

loc_000C5974: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5980
 * Original: 0x000C5980 - 0x000C5A45 (197 bytes, 74 insns)
 * Folder: sound (match: xbox-demo 0x000E8CB0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5980: ;
    edx = MEM32(eax + 0x5C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C59A4; /* jbe: below or equal (unsigned <=) */

loc_000C598C: ;
    /* nop */

loc_000C5990: ;
    edx = MEM32(eax + 0x38);
    MEM32(edx + ecx * 4) = ebx;
    edx = MEM32(eax + 0x3C);
    MEM32(edx + ecx * 4) = ebx;
    edx = MEM32(eax + 0x5C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C5990; /* jb: below (unsigned <) */

loc_000C59A4: ;
    edx = MEM32(eax + 0x50);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C5A43; /* jbe: below or equal (unsigned <=) */

loc_000C59B1: ;
    edx = MEM32(eax + 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000C59B6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C59DB; /* jbe: below or equal (unsigned <=) */

loc_000C59BC: ;
    /* nop */

loc_000C59C0: ;
    edx = MEM32(eax + 0x34);
    edx = MEM32(edx + ecx * 4);
    MEM32(edx + esi * 8) = ebx;
    edx = MEM32(eax + 0x34);
    edx = MEM32(edx + ecx * 4);
    MEM32(edx + esi * 8 + 4) = ebx;
    edx = MEM32(eax + 0x5C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C59C0; /* jb: below (unsigned <) */

loc_000C59DB: ;
    edx = MEM32(eax + 0x88);
    esi = MEM32(eax + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x30);
    MEM32(esi + ecx * 8) = edx;
    edx = MEM32(eax + 0x30);
    esi = MEM32(edx + ecx * 8);
    edx = edx + ecx * 8;
    MEM32(edx + 4) = esi;
    edx = MEM32(eax + 0x30);
    edx = MEM32(edx + ecx * 8 + 4);
    MEM32(edx) = ebx;
    edx = MEM32(eax + 0x30);
    edx = MEM32(edx + ecx * 8 + 4);
    MEM32(edx + 4) = ebx;
    edx = MEM32(eax + 0x5C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C5A35; /* jbe: below or equal (unsigned <=) */

loc_000C5A17: ;
    edi = 0xC;
    /* nop */

loc_000C5A20: ;
    edx = MEM32(eax + 0x30);
    edx = MEM32(edx + ecx * 8 + 4);
    MEM32(edi + edx) = ebx;
    edx = MEM32(eax + 0x5C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C5A20; /* jb: below (unsigned <) */

loc_000C5A35: ;
    esi = MEM32(eax + 0x50);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C59B6; /* jb: below (unsigned <) */

loc_000C5A41: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000C5A43: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5A50
 * Original: 0x000C5A50 - 0x000C5AC0 (112 bytes, 43 insns)
 * Folder: sound (match: xbox-demo 0x000E8D80, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5A50: ;
    edx = MEM32(eax + 0x5C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C5ABF; /* jbe: below or equal (unsigned <=) */

loc_000C5A59: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    goto loc_000C5A60;

    /* nop */

loc_000C5A60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(eax + 0x38);
    esi = MEM32(eax + 0x34);
    edx = MEM32(edx + edi * 4);
    if (CMP_NE(_fa, _fb)) goto loc_000C5A87; /* jne: not equal / not zero */

loc_000C5A6D: ;
    edx = MEM32(esi + edx * 4);
    esi = MEM32(eax + 0x84);
    MEM32(edx + 4) = esi;
    edx = MEM32(eax + 0x38);
    edx = MEM32(edx + edi * 4);
    esi = MEM32(eax + 0x34);
    edx = MEM32(esi + edx * 4);
    goto loc_000C5AB0;

loc_000C5A87: ;
    esi = MEM32(esi + edx * 4);
    ebx = MEM32(eax + 0x30);
    edx = MEM32(ebx + edx * 8 + 4);
    edx = MEM32(edx + ecx * 4 + 8);
    ebx = MEM32(esi + ecx * 8 + -4);
    esi = esi + ecx * 8;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edx;
    edx = MEM32(eax + 0x38);
    edx = MEM32(edx + edi * 4);
    esi = MEM32(eax + 0x34);
    edx = MEM32(esi + edx * 4);
    edx = edx + ecx * 8;

loc_000C5AB0: ;
    esi = MEM32(edx + 4);
    MEM32(edx) = esi;
    edx = MEM32(eax + 0x5C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C5A60; /* jb: below (unsigned <) */

loc_000C5ABD: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000C5ABF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5AC0
 * Original: 0x000C5AC0 - 0x000C5B2C (108 bytes, 32 insns)
 * Folder: sound (source: TMultiTrack.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5AC0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(edi + 0x5C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C5B18; /* jbe: below or equal (unsigned <=) */

loc_000C5ADC: ;
    /* nop */

loc_000C5AE0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5B10; /* je: equal / zero */

loc_000C5AE4: ;
    eax = MEM32(edi + 0x38);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ebx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + ebx * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5B10; /* jne: not equal / not zero */

loc_000C5AEF: ;
    PUSH32(esp, 0x371);
    PUSH32(esp, 0x426500);
    PUSH32(esp, 0x426408);
    edx = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C5B0Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C5B0D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C5B10: ;
    eax = MEM32(edi + 0x5C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C5AE0; /* jb: below (unsigned <) */

loc_000C5B18: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, esi);
    PUSH32(esp, 0x000C5B25u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C5B25: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C5B30
 * Original: 0x000C5B30 - 0x000C5B50 (32 bytes, 14 insns)
 * Folder: sound (match: xbox-demo 0x000E8E90, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5B30: ;
    ecx = MEM32(edx + 0x5C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C5B4C; /* jbe: below or equal (unsigned <=) */

loc_000C5B39: ;
    edx = MEM32(edx + 0x2C);
    /* nop */

loc_000C5B40: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5B4F; /* je: equal / zero */

loc_000C5B44: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C5B40; /* jb: below (unsigned <) */

loc_000C5B4C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000C5B4F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5B50
 * Original: 0x000C5B50 - 0x000C5BCC (124 bytes, 34 insns)
 * Folder: sound (source: TMultiTrack.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5B50: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(ecx + 0x60);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x8C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5B7E; /* je: equal / zero */

loc_000C5B75: ;
    eax = eax + eax + 2;
    MEM32(ecx + 0x50) = eax;
    goto loc_000C5B84;

loc_000C5B7E: ;
    edx = eax + eax;
    MEM32(ecx + 0x50) = edx;

loc_000C5B84: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(ecx + 0x88);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ecx + 0x58) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_000C5BB9; /* jae: above or equal (unsigned >=) */

loc_000C5B98: ;
    PUSH32(esp, 0x3AC);
    PUSH32(esp, 0x426500);
    PUSH32(esp, 0x4263F4);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C5BB6u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C5BB6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C5BB9: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000C5BC5u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C5BC5: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C5BD0
 * Original: 0x000C5BD0 - 0x000C5BE9 (25 bytes, 11 insns)
 * Folder: sound (between: 0x000C5B50 and 0x000C5FA0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5BD0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5BE3; /* jne: not equal / not zero */

loc_000C5BD6: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x50);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

loc_000C5BE3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5BF0
 * Original: 0x000C5BF0 - 0x000C5CA0 (176 bytes, 62 insns)
 * Folder: sound (between: 0x000C5B50 and 0x000C5FA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C5BF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000C5BF8; /* jae: above or equal (unsigned >=) */

loc_000C5BF5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000C5BF8: ;
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5C76; /* je: equal / zero */

loc_000C5C02: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x38);
    PUSH32(esp, edi);
    MEM32(esi + 0x5C) = eax;
    edi = eax * 4;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5C1F; /* jne: not equal / not zero */

loc_000C5C1A: ;
    PUSH32(esp, 0x000C5C1Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5C1F: ;
    PUSH32(esp, ebx);
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x000C5C29u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000C5C29: ;
    edi = MEM32(esi + 0x5C);
    ebx = MEM32(esi + 0x3C);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(0x46B1A4);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5C43; /* jne: not equal / not zero */

loc_000C5C3E: ;
    PUSH32(esp, 0x000C5C43u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5C43: ;
    PUSH32(esp, ebx);
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x000C5C4Du); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000C5C4D: ;
    edi = MEM32(esi + 0x5C);
    ebx = MEM32(esi + 0x2C);
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(0x46B1A4);
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5C67; /* jne: not equal / not zero */

loc_000C5C62: ;
    PUSH32(esp, 0x000C5C67u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5C67: ;
    PUSH32(esp, ebx);
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x000C5C71u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000C5C71: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    POP32(esp, ebx);

loc_000C5C76: ;
    ecx = esi;
    MEM32(esi + 0x40) = ebp;
    MEM32(esi + 0x44) = ebp;
    MEM32(esi + 0x4C) = ebp;
    MEM32(esi + 0x6C) = ebp;
    MEM32(esi + 0x48) = ebp;
    MEM32(esi + 0x54) = ebp;
    MEM32(esi + 0x64) = ebp;
    MEM32(esi + 0x68) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000C5C99u); RECOMP_ABI_CALL(0x000C4A10u, sub_000C4A10); /* call 0x000C4A10 */

loc_000C5C99: ;
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5CA0
 * Original: 0x000C5CA0 - 0x000C5D69 (201 bytes, 63 insns)
 * Folder: sound (between: 0x000C5B50 and 0x000C5FA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5CA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F68);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5CC4; /* jne: not equal / not zero */

loc_000C5CBF: ;
    PUSH32(esp, 0x000C5CC4u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5CC4: ;
    PUSH32(esp, esi);
    edx = 0xDC;
    ecx = eax;
    PUSH32(esp, 0x000C5CD1u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C5CD1: ;
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000C5CEC; /* je: equal / zero */

loc_000C5CE1: ;
    esi = eax;
    PUSH32(esp, 0x000C5CE8u); RECOMP_ABI_CALL(0x000C5D70u, sub_000C5D70); /* call 0x000C5D70 */

loc_000C5CE8: ;
    esi = eax;
    goto loc_000C5CEE;

loc_000C5CEC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C5CEE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_000C5D3E; /* je: equal / zero */

loc_000C5CFA: ;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 4) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5D0F; /* jne: not equal / not zero */

loc_000C5D0A: ;
    PUSH32(esp, 0x000C5D0Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5D0F: ;
    edx = 0x68;
    ecx = eax;
    PUSH32(esp, 0x000C5D1Bu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C5D1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x84) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C5D35; /* je: equal / zero */

loc_000C5D25: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000C5D31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5D2Eu); } /* indirect call */
    }

loc_000C5D31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5D51; /* jne: not equal / not zero */

loc_000C5D35: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000C5D3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5D3Bu); } /* indirect call */
    }

loc_000C5D3E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000C5D51: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 8);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C5D70
 * Original: 0x000C5D70 - 0x000C5E0D (157 bytes, 40 insns)
 * Folder: sound (between: 0x000C5B50 and 0x000C5FA0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5D70: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi) = 0x426568;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x5C) = edi;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x8C) = edi;
    MEM32(esi + 0x90) = edi;
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x78) = edi;
    MEM32(esi + 0x84) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x6C) = edi;
    MEM32(esi + 0x94) = edi;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x80) = edi;
    MEM32(esi + 0xCC) = edi;
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0xD4) = edi;
    MEM32(esi + 0x98) = edi;
    MEM32(esi + 0xD8) = edi;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5DF0; /* jne: not equal / not zero */

loc_000C5DEB: ;
    PUSH32(esp, 0x000C5DF0u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5DF0: ;
    edx = 0x20;
    ecx = eax;
    PUSH32(esp, 0x000C5DFCu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C5DFC: ;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x1C) = 0xC94A0;
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5E10
 * Original: 0x000C5E10 - 0x000C5E2E (30 bytes, 12 insns)
 * Folder: sound (between: 0x000C5B50 and 0x000C5FA0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000C5E1Bu); RECOMP_ABI_CALL(0x000C5E30u, sub_000C5E30); /* call 0x000C5E30 */

loc_000C5E1B: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C5E27; /* je: equal / zero */

loc_000C5E22: ;
    PUSH32(esp, 0x000C5E27u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C5E27: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5E30
 * Original: 0x000C5E30 - 0x000C5E96 (102 bytes, 33 insns)
 * Folder: sound (between: 0x000C5B50 and 0x000C5FA0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5E30: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi) = 0x426568;
    if (CMP_EQ(_fa, _fb)) goto loc_000C5E43; /* je: equal / zero */

loc_000C5E3E: ;
    PUSH32(esp, 0x000C5E43u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C5E43: ;
    esi = MEM32(edi + 0x6C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5E4F; /* je: equal / zero */

loc_000C5E4A: ;
    PUSH32(esp, 0x000C5E4Fu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C5E4F: ;
    esi = MEM32(edi + 0x70);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5E5B; /* je: equal / zero */

loc_000C5E56: ;
    PUSH32(esp, 0x000C5E5Bu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C5E5B: ;
    esi = MEM32(edi + 0x78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5E67; /* je: equal / zero */

loc_000C5E62: ;
    PUSH32(esp, 0x000C5E67u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C5E67: ;
    esi = MEM32(edi + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5E76; /* je: equal / zero */

loc_000C5E71: ;
    PUSH32(esp, 0x000C5E76u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C5E76: ;
    esi = MEM32(edi + 0x50);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5E82; /* je: equal / zero */

loc_000C5E7D: ;
    PUSH32(esp, 0x000C5E82u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C5E82: ;
    esi = MEM32(edi + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5E8E; /* je: equal / zero */

loc_000C5E89: ;
    PUSH32(esp, 0x000C5E8Eu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C5E8E: ;
    MEM32(edi) = 0x423E58;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C5EA0
 * Original: 0x000C5EA0 - 0x000C5F12 (114 bytes, 44 insns)
 * Folder: sound (between: 0x000C5B50 and 0x000C5FA0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5EA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000C5EAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5EABu); } /* indirect call */
    }

loc_000C5EAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5EB7; /* jne: not equal / not zero */

loc_000C5EB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000C5EB7: ;
    ecx = esi;
    eax = MEM32(ecx);
    edx = edi + 0x10;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0x10 (16-bit) */
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000C5EE7; /* jne: not equal / not zero */

loc_000C5ED9: ;
    edx = ZX16(MEM16(esi + 6));
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x88) = edx;
    goto loc_000C5EE9;

loc_000C5EE7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C5EE9: ;
    esi = ZX16(MEM16(esi + 6));
    eax = MEM32(0x46B1A4);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5EFE; /* jne: not equal / not zero */

loc_000C5EF9: ;
    PUSH32(esp, 0x000C5EFEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C5EFE: ;
    edx = esi;
    ecx = eax;
    PUSH32(esp, 0x000C5F07u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C5F07: ;
    MEM32(edi + 0x54) = eax;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5F20
 * Original: 0x000C5F20 - 0x000C5F26 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000C5B50 and 0x000C5FA0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5F20(void)
{

loc_000C5F20: ;
    eax = 0x481;
    esp += 4; return; /* ret */

}

/**
 * sub_000C5F30
 * Original: 0x000C5F30 - 0x000C5F92 (98 bytes, 40 insns)
 * Folder: sound (between: 0x000C5B50 and 0x000C5FA0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5F30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5F47; /* je: equal / zero */

loc_000C5F3D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C5F47: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = edi + 0x10;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = eax;
    eax = esp + 8;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000C5F6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5F6Cu); } /* indirect call */
    }

loc_000C5F6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5F7E; /* jne: not equal / not zero */

loc_000C5F73: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C5F7E: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x58) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C5FA0
 * Original: 0x000C5FA0 - 0x000C5FDF (63 bytes, 30 insns)
 * Folder: sound (match: xbox-demo 0x000E9250, between)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C5FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x58);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000C5FB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5FB0u); } /* indirect call */
    }

loc_000C5FB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C5FCE; /* je: equal / zero */

loc_000C5FB7: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000C5FC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5FC0u); } /* indirect call */
    }

loc_000C5FC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C5FD5; /* jne: not equal / not zero */

loc_000C5FC7: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000C5FCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C5FCCu); } /* indirect call */
    }

loc_000C5FCE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000C5FD5: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C5FE0
 * Original: 0x000C5FE0 - 0x000C6007 (39 bytes, 13 insns)
 * Folder: sound (match: xbox-demo 0x000E9290, between)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C5FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C5FE0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6002; /* je: equal / zero */

loc_000C5FE7: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6002; /* jne: not equal / not zero */

loc_000C5FEF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x58) = 0;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000C6002: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C6010
 * Original: 0x000C6010 - 0x000C602A (26 bytes, 10 insns)
 * Folder: sound (between: 0x000C5FE0 and 0x000C6030)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C6010: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C601B; /* jne: not equal / not zero */

loc_000C6018: ;
    esp += 8; return; /* ret 4 */

loc_000C601B: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C6030
 * Original: 0x000C6030 - 0x000C6078 (72 bytes, 15 insns)
 * Folder: sound (match: xbox-demo 0x000E92C0, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C6030: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x80) = eax;
    MEM32(ecx + 0xCC) = eax;
    MEM32(ecx + 0xD0) = eax;
    MEM32(ecx + 0xD4) = eax;
    MEM32(ecx + 0x98) = eax;
    MEM32(ecx + 0xD8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000C6080
 * Original: 0x000C6080 - 0x000C6228 (424 bytes, 134 insns)
 * Folder: sound (between: 0x000C6030 and 0x000C6230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C6080: ;
    eax = MEM32(esi + 0x50);
    MEM32(eax + 0x14) = 4;
    ecx = MEM32(esi + 0x50);
    eax = 1;
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(esi + 0x50);
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x50);
    MEM32(esi + 0x8C) = eax;
    eax = MEM32(ecx + 0x18);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x14)); }
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6158; /* je: equal / zero */

loc_000C60BE: ;
    ebp = MEM32(esi + 0x64);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    MEM32(esi + 0x60) = ebx;
    eax = MEM32(0x46B1A4);
    if (CMP_NE(_fa, _fb)) goto loc_000C60E1; /* jne: not equal / not zero */

loc_000C60CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C60D6; /* jne: not equal / not zero */

loc_000C60D1: ;
    PUSH32(esp, 0x000C60D6u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C60D6: ;
    edx = ebx;
    ecx = eax;
    PUSH32(esp, 0x000C60DFu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C60DF: ;
    goto loc_000C60F4;

loc_000C60E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C60EA; /* jne: not equal / not zero */

loc_000C60E5: ;
    PUSH32(esp, 0x000C60EAu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C60EA: ;
    PUSH32(esp, ebp);
    edx = ebx;
    ecx = eax;
    PUSH32(esp, 0x000C60F4u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000C60F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x64) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C6152; /* je: equal / zero */

loc_000C60FB: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(esi + 0x50);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x68) = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x14)); }
    ebp = MEM32(esi + 0x6C);
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esi + 0x88));
    eax = MEM32(0x46B1A4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6138; /* jne: not equal / not zero */

loc_000C6124: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C612D; /* jne: not equal / not zero */

loc_000C6128: ;
    PUSH32(esp, 0x000C612Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C612D: ;
    edx = ebx;
    ecx = eax;
    PUSH32(esp, 0x000C6136u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C6136: ;
    goto loc_000C614B;

loc_000C6138: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6141; /* jne: not equal / not zero */

loc_000C613C: ;
    PUSH32(esp, 0x000C6141u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C6141: ;
    PUSH32(esp, ebp);
    edx = ebx;
    ecx = eax;
    PUSH32(esp, 0x000C614Bu); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000C614B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x6C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C6158; /* jne: not equal / not zero */

loc_000C6152: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000C6158: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C621F; /* jbe: below or equal (unsigned <=) */

loc_000C6164: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x22;
    ebx = 5;

loc_000C6170: ;
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + -2) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + 6) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + -10) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + 8) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + -8) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + 2) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + 0xA) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + -6) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + 4) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + 0xC) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + -4) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + 6) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + 0xE) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(eax + ebp + -2) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM32(ecx + ebp + 4) = ebx;
    ebp = MEM32(esi + 0x54);
    MEM16(ecx + ebp + 0x10) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM16(ecx + ebp + 0x12) = LO16(edi);
    ebp = MEM32(esi + 0x54);
    MEM32(ecx + ebp + 8) = edi;
    ebp = MEM32(esi + 0x54);
    MEM32(ecx + ebp + 0xC) = edi;
    ebp = ZX16(MEM16(esi + 0x16));
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
    if (CMP_L(_fas, _fbs)) goto loc_000C6170; /* jl: less (signed <) */

loc_000C621F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C6230
 * Original: 0x000C6230 - 0x000C6283 (83 bytes, 20 insns)
 * Folder: sound (match: xbox-demo 0x000E94A0, between)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C6230: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000C623Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C623Au); } /* indirect call */
    }

loc_000C623D: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esi + 0xD0) = 1;
    PUSH32(esp, 0x000C6255u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000C6255: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xD4) = eax;
    MEM32(esi + 0x8C) = 0;
    MEM32(esi + 0x68) = 0;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xD8) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C6283
 * Original: 0x000C6283 - 0x000C6290 (13 bytes, 13 insns)
 * Folder: sound (between: 0x000C6230 and 0x000C6290)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6283(void)
{

loc_000C6283: ;
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000C6290
 * Original: 0x000C6290 - 0x000C62BF (47 bytes, 16 insns)
 * Folder: sound (match: xbox-demo 0x000E9500, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C6290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C6290: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C62B9; /* je: equal / zero */

loc_000C6296: ;
    edx = MEM32(ecx + 0x88);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x24));
    eax = MEM32(ecx + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C62B9; /* ja: above (unsigned >) */

loc_000C62AA: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C62B4u); RECOMP_ABI_CALL(0x000AFC70u, sub_000AFC70); /* call 0x000AFC70 */

loc_000C62B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C62B9: ;
    eax = 0xFFFE0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000C62C0
 * Original: 0x000C62C0 - 0x000C6EE2 (3106 bytes, 899 insns)
 * Folder: sound (between: 0x000C6290 and 0x000C6EF0)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C62C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C62C0: ;
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x53C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x538) = eax;
    eax = MEM32(esp + 0x540);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(eax);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 4) = eax;
    MEM32(esp + 0x10) = eax;
    eax = 0x3B9ACA00;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000C633D; /* jne: not equal / not zero */

loc_000C631A: ;
    edx = MEM32(esp + 0x548);
    MEM32(edx) = 0;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x538);
    PUSH32(esp, 0x000C6334u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C6334: ;
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x53C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C633D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C636A; /* jne: not equal / not zero */

loc_000C6342: ;
    eax = MEM32(esp + 0x548);
    MEM32(eax) = 0;
    eax = 1;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x538);
    PUSH32(esp, 0x000C6361u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C6361: ;
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x53C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C636A: ;
    eax = MEM32(ebp + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000C65D5; /* jne: not equal / not zero */

loc_000C637B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esp + 0x44;
    eax = esp + 0x1C;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(ebp + 0x58);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    MEM32(esp + 0x28) = 8;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000C639Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C639Bu); } /* indirect call */
    }

loc_000C639E: ;
    ecx = MEM32(esp + 0x20);
    edi = eax;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C63CB; /* je: equal / zero */

loc_000C63AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C63CB; /* je: equal / zero */

loc_000C63B0: ;
    PUSH32(esp, 0x183);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x426A30);
    ebx = 0x426AA4;
    esi = ebp;
    PUSH32(esp, 0x000C63CBu); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C63CB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000C63D9; /* jne: not equal / not zero */

loc_000C63D4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C63E2; /* je: equal / zero */

loc_000C63D9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C63F6; /* je: equal / zero */

loc_000C63DD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C63F6; /* je: equal / zero */

loc_000C63E2: ;
    ecx = MEM32(esp + 0x554);
    MEM32(ecx) = 0;
    eax = edi;
    goto loc_000C6EC9;

loc_000C63F6: ;
    ecx = MEM32(ebp + 0x58);
    eax = ebp + 0x20;
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    MEM32(esp + 0x28) = 0x30;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000C6418u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C6415u); } /* indirect call */
    }

loc_000C6418: ;
    ecx = MEM32(esp + 0x20);
    edi = eax;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000C6449; /* je: equal / zero */

loc_000C642A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6449; /* je: equal / zero */

loc_000C642E: ;
    PUSH32(esp, 0x195);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x426A30);
    ebx = 0x426AA4;
    esi = ebp;
    PUSH32(esp, 0x000C6449u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C6449: ;
    ecx = MEM32(esp + 0x1C);
    eax = 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6461; /* jne: not equal / not zero */

loc_000C6456: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6465; /* je: equal / zero */

loc_000C645B: ;
    MEM32(esp + 0x10) = eax;
    goto loc_000C647F;

loc_000C6461: ;
    MEM32(esp + 0x1C) = edi;

loc_000C6465: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6473; /* jne: not equal / not zero */

loc_000C646A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C63E2; /* je: equal / zero */

loc_000C6473: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C647F; /* je: equal / zero */

loc_000C6477: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C63E2; /* jne: not equal / not zero */

loc_000C647F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6523; /* je: equal / zero */

loc_000C6489: ;
    eax = MEM32(0x426A2C);
    edx = MEM32(0x426A28);
    esi = MEM32(ebp + 4);
    MEM32(esp + 0x4C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x48) = edx;
    ecx = 0x3E;
    edi = esp + 0x50;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C64CC; /* jne: not equal / not zero */

loc_000C64B2: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C64CC; /* je: equal / zero */

loc_000C64B9: ;
    eax = esi + 0x38;
    edx = esp + 0x48;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000C64C2: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C64C2; /* jne: not equal / not zero */

loc_000C64CC: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C64EC; /* jne: not equal / not zero */

loc_000C64D2: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C64EC; /* je: equal / zero */

loc_000C64D9: ;
    eax = esi + 0x28;
    edx = esp + 0x48;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000C64E2: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C64E2; /* jne: not equal / not zero */

loc_000C64EC: ;
    edx = MEM32(esi);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x150;
    PUSH32(esp, 0x4269B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C6506u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C6506: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C6509: ;
    ecx = MEM32(esp + 0x554);
    eax = 2;
    MEM32(ebp + 8) = eax;
    MEM32(ecx) = 0;
    goto loc_000C6EC9;

loc_000C6523: ;
    edx = MEM32(ebp + 0x50);
    eax = MEM32(ebp + 0x30);
    esi = ebp;
    MEM32(edx + 0x18) = eax;
    PUSH32(esp, 0x000C6533u); RECOMP_ABI_CALL(0x000C6080u, sub_000C6080); /* call 0x000C6080 */

loc_000C6533: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6509; /* je: equal / zero */

loc_000C6537: ;
    edx = MEM32(ebp + 0x50);
    eax = MEM32(ebp + 0x4C);
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(ebp + 0x50);
    edx = MEM32(ebp + 0x44);
    MEM32(ecx + 0x14) = edx;
    eax = MEM32(ebp + 0x50);
    ecx = MEM32(ebp + 0x48);
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebp + 0x50);
    eax = MEM32(ebp + 0x20);
    MEM32(edx) = eax;
    ecx = MEM32(ebp + 0x50);
    edx = MEM32(ebp + 0x3C);
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(ebp + 0x50);
    ecx = MEM32(ebp + 0x34);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + 0x50);
    edx = MEM32(ecx + 0x1C);
    MEM32(ebp + 0x98) = edx;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C65A4; /* je: equal / zero */

loc_000C6580: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C65CB; /* je: equal / zero */

loc_000C6585: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C65A4; /* je: equal / zero */

loc_000C658A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C65A4; /* je: equal / zero */

loc_000C658F: ;
    eax = MEM32(esp + 0x554);
    MEM32(eax) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000C6EC9;

loc_000C65A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C65CB; /* jbe: below or equal (unsigned <=) */

loc_000C65A9: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C65B6; /* jne: not equal / not zero */

loc_000C65AF: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C65CB; /* je: equal / zero */

loc_000C65B6: ;
    ecx = MEM32(esp + 0x554);
    MEM32(ecx) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000C6EC9;

loc_000C65CB: ;
    MEM32(ebp + 0x90) = 0;

loc_000C65D5: ;
    eax = MEM32(ebp + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C66A0; /* je: equal / zero */

loc_000C65E3: ;
    ecx = MEM32(ebp + 0x50);
    ebx = MEM32(ebp + 0xD4);
    edx = MEM32(ecx + 0xC);
    edi = MEM32(ecx + 0x18);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    esi = eax;
    edx = esi;
    edx = edx & 0x80000001u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000C660C; /* jns: not sign (positive) */

loc_000C6607: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C660C: ;
    if ((edx == 0)) goto loc_000C660F; /* je: equal / zero */

loc_000C660E: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000C660F: ;
    eax = MEM32(ecx + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    MEM32(esp + 0x20) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x1C));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x1C)); }
    edx = MEM32(esp + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = edx + eax + 0x30;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + 0x94) = esi;
    if (CMP_B(_fa, _fb)) goto loc_000C6650; /* jb: below (unsigned <) */

loc_000C6647: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x94) = eax;

loc_000C6650: ;
    edi = MEM32(ecx + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C6675; /* je: equal / zero */

loc_000C6662: ;
    eax = MEM32(ecx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x14));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + edx;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C6675: ;
    eax = MEM32(ecx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC)); }
    ecx = MEM32(ebp + 0x58);
    edx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0xD4) = ebx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000C6695u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C6692u); } /* indirect call */
    }

loc_000C6695: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x68) = eax;
    MEM32(ebp + 0xD0) = eax;

loc_000C66A0: ;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C6DFB; /* jbe: below or equal (unsigned <=) */

loc_000C66AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6713; /* je: equal / zero */

loc_000C66B1: ;
    ecx = MEM32(ebp + 0x88);
    esi = MEM32(ebp + 0x6C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(esp + 0x550);
    edi = MEM32(eax + 4);
    edx = ecx;
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
    _fa = (uint32_t)(MEM32(ebp + 0xD8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xD8), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C66F1; /* jne: not equal / not zero */

loc_000C66DE: ;
    eax = MEM32(ebp + 0x68);
    ecx = MEM32(esp + 0x554);
    MEM32(ecx) = eax;
    MEM32(ebp + 8) = 2;

loc_000C66F1: ;
    eax = MEM32(ebp + 0x68);
    edx = MEM32(ebp + 0xCC);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0xCC) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(ebp + 0x68) = 0;

loc_000C6713: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6E8E; /* je: equal / zero */

loc_000C671F: ;
    /* nop */

loc_000C6720: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6E8E; /* je: equal / zero */

loc_000C672A: ;
    ecx = MEM32(ebp + 0x50);
    edx = MEM32(ebp + 0x98);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6932; /* jne: not equal / not zero */

loc_000C673C: ;
    ecx = MEM32(ecx + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    eax = ebp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x58);
    edx = MEM32(ecx);
    esi = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000C6756u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C6753u); } /* indirect call */
    }

loc_000C6756: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 5 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000C678E; /* jne: not equal / not zero */

loc_000C6763: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6773; /* je: equal / zero */

loc_000C6768: ;
    edi = 5;
    MEM32(esp + 0x10) = edi;
    goto loc_000C678E;

loc_000C6773: ;
    PUSH32(esp, 0x212);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x426928);
    ebx = 0x426980;
    esi = ebp;
    PUSH32(esp, 0x000C678Eu); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C678E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000C6C87; /* je: equal / zero */

loc_000C679B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6CED; /* je: equal / zero */

loc_000C67A4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C67B1; /* je: equal / zero */

loc_000C67A8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6CA2; /* jne: not equal / not zero */

loc_000C67B1: ;
    eax = MEM32(ebp + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6814; /* je: equal / zero */

loc_000C67BB: ;
    ecx = MEM32(ebp + 0x60);
    edi = MEM32(ebp + 0x84);
    esi = MEM32(ebp + 0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
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
    ecx = MEM32(ebp + 0x60);
    eax = MEM32(ebp + 0x80);
    esi = MEM32(ebp + 0x84);
    edi = MEM32(ebp + 0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x80) = eax;
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
    eax = MEM32(ebp + 0x80);
    MEM32(ebp + 0x60) = eax;
    MEM32(ebp + 0x80) = 0;

loc_000C6814: ;
    ecx = MEM32(ebp + 0x50);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(ebp + 0x60);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C683F; /* je: equal / zero */

loc_000C6824: ;
    PUSH32(esp, 0x22B);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x426868);
    ebx = 0x4268AC;
    esi = ebp;
    PUSH32(esp, 0x000C683Fu); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C683F: ;
    eax = MEM32(ebp + 0x50);
    ecx = MEM32(eax + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_000C688A; /* jle: less or equal (signed <=) */

loc_000C684F: ;
    /* nop */

loc_000C6850: ;
    ecx = MEM32(ebp + 0x64);
    _fa = (uint32_t)(MEM32(edi + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + ecx), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6874; /* je: equal / zero */

loc_000C6859: ;
    PUSH32(esp, 0x231);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x426830);
    ebx = 0x4268AC;
    esi = ebp;
    PUSH32(esp, 0x000C6874u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C6874: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(ebp + 0x50);
    ecx = MEM32(edx + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000C6850; /* jl: less (signed <) */

loc_000C688A: ;
    eax = MEM32(ebp + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C691E; /* jne: not equal / not zero */

loc_000C6898: ;
    eax = MEM32(ebp + 0x50);
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000C68DA; /* je: equal / zero */

loc_000C68A1: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C68C3; /* je: equal / zero */

loc_000C68A6: ;
    PUSH32(esp, 0x240);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x41FFC0);
    ebx = 0x4268AC;
    esi = ebp;
    PUSH32(esp, 0x000C68C1u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C68C1: ;
    goto loc_000C68F4;

loc_000C68C3: ;
    ecx = MEM32(eax + 0xC);
    esi = MEM32(ebp + 0x64);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    edi = MEM32(ebp + 0x54);
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
    goto loc_000C68EF;

loc_000C68DA: ;
    ecx = MEM32(eax + 0xC);
    esi = MEM32(ebp + 0x64);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    edi = MEM32(ebp + 0x54);
    edx = ecx;
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

loc_000C68EF: ;
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

loc_000C68F4: ;
    eax = MEM32(ebp + 0x50);
    edx = MEM32(eax + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C691E; /* jle: less or equal (signed <=) */

loc_000C6900: ;
    edx = eax;
    eax = MEM32(ebp + 0x54);
    edx = MEM32(edx + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C6910;

    /* nop */

loc_000C6910: ;
    esi = MEM32(eax);
    MEM32(esp + ecx * 4 + 0x28) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C6910; /* jl: less (signed <) */

loc_000C691E: ;
    MEM32(ebp + 0x90) = 1;
    MEM32(ebp + 0x98) = 0;

loc_000C6932: ;
    edi = MEM32(ebp + 0x98);
    esi = MEM32(ebp + 0x94);
    ecx = MEM32(ebp + 0x28);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0x98) = edi;
    MEM32(ebp + 0x94) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_000C6A13; /* jae: above or equal (unsigned >=) */

loc_000C6959: ;
    eax = MEM32(ebp + 0x50);
    ecx = MEM32(eax + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x14));
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebp + 0x60;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(edx) = ecx;
    ecx = MEM32(ebp + 0x58);
    eax = MEM32(ecx);
    esi = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000C697Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C6978u); } /* indirect call */
    }

loc_000C697B: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 5 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000C69B3; /* jne: not equal / not zero */

loc_000C6988: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6998; /* je: equal / zero */

loc_000C698D: ;
    edi = 5;
    MEM32(esp + 0x10) = edi;
    goto loc_000C69B3;

loc_000C6998: ;
    PUSH32(esp, 0x25E);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x426928);
    ebx = 0x4268F4;
    esi = ebp;
    PUSH32(esp, 0x000C69B3u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C69B3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000C6CFE; /* je: equal / zero */

loc_000C69C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6D47; /* je: equal / zero */

loc_000C69C9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C69D6; /* je: equal / zero */

loc_000C69CD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6D19; /* jne: not equal / not zero */

loc_000C69D6: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x60) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C69FA; /* je: equal / zero */

loc_000C69DF: ;
    PUSH32(esp, 0x26E);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x4267F0);
    ebx = 0x426818;
    esi = ebp;
    PUSH32(esp, 0x000C69FAu); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C69FA: ;
    ecx = MEM32(ebp + 0x50);
    eax = MEM32(ecx + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC)); }
    MEM32(ebp + 0x68) = eax;
    edx = MEM32(ecx + 0x18);
    MEM32(ecx + 8) = edx;
    goto loc_000C6B04;

loc_000C6A13: ;
    if (CMP_NE(_fa, _fb)) goto loc_000C6DC8; /* jne: not equal / not zero */

loc_000C6A19: ;
    ecx = MEM32(ebp + 0x50);
    edx = MEM32(ecx + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x2C));
    ecx = MEM32(ebp + 0x58);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    eax = ebp + 0x60;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esp + 0x1C;
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000C6A3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C6A38u); } /* indirect call */
    }

loc_000C6A3B: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 5 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000C6A73; /* jne: not equal / not zero */

loc_000C6A48: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6A58; /* je: equal / zero */

loc_000C6A4D: ;
    edi = 5;
    MEM32(esp + 0x10) = edi;
    goto loc_000C6A73;

loc_000C6A58: ;
    PUSH32(esp, 0x27A);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x426928);
    ebx = 0x4268F4;
    esi = ebp;
    PUSH32(esp, 0x000C6A73u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C6A73: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000C6A99; /* jne: not equal / not zero */

loc_000C6A7C: ;
    PUSH32(esp, 0x27D);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x4268D4);
    ebx = 0x4268F4;
    esi = ebp;
    PUSH32(esp, 0x000C6A97u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C6A97: ;
    goto loc_000C6ACD;

loc_000C6A99: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6ABB; /* jne: not equal / not zero */

loc_000C6A9E: ;
    PUSH32(esp, 0x27E);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x4264C0);
    ebx = 0x4268F4;
    esi = ebp;
    PUSH32(esp, 0x000C6AB9u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C6AB9: ;
    goto loc_000C6ACD;

loc_000C6ABB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6D58; /* je: equal / zero */

loc_000C6AC4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6D89; /* je: equal / zero */

loc_000C6ACD: ;
    eax = MEM32(ebp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6AF1; /* je: equal / zero */

loc_000C6AD6: ;
    PUSH32(esp, 0x294);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x42679C);
    ebx = 0x4267C4;
    esi = ebp;
    PUSH32(esp, 0x000C6AF1u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C6AF1: ;
    esi = MEM32(ebp + 0x2C);
    ecx = MEM32(ebp + 0x50);
    eax = esi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC)); }
    MEM32(ebp + 0x68) = eax;
    MEM32(ecx + 8) = esi;

loc_000C6B04: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C6B0Au); RECOMP_ABI_CALL(0x000C74B0u, sub_000C74B0); /* call 0x000C74B0 */

loc_000C6B0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6DAC; /* je: equal / zero */

loc_000C6B12: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B9ACA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), 0x3B9ACA00 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6B47; /* je: equal / zero */

loc_000C6B1C: ;
    ecx = MEM32(ebp + 0x50);
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C6B47; /* jle: less or equal (signed <=) */

loc_000C6B28: ;
    goto loc_000C6B30;

    /* nop */

loc_000C6B30: ;
    SET_LO16(ecx, MEM16(esp + eax * 4 + 0x28));
    edx = MEM32(ebp + 0x6C);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(ebp + 0x50);
    ecx = MEM32(edx + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C6B30; /* jl: less (signed <) */

loc_000C6B47: ;
    edx = MEM32(ebp + 0x68);
    eax = MEM32(ebp + 0xD4);
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_000C6B6A; /* jns: not sign (positive) */

loc_000C6B56: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0xD4) = eax;
    MEM32(ebp + 0x68) = 0;
    goto loc_000C6C76;

loc_000C6B6A: ;
    esi = MEM32(ebp + 0x6C);
    edx = MEM32(esp + 0x14);
    esi = esi + eax * 2;
    eax = MEM32(esp + 0x550);
    edi = MEM32(eax);
    ebx = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    edx = MEM32(ebp + 0x88);
    if (CMP_A(_fa, _fb)) goto loc_000C6BCE; /* ja: above (unsigned >) */

loc_000C6B8B: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edx = MEM32(eax + 4);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
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
    ecx = MEM32(ebp + 0x68);
    eax = MEM32(ebp + 0xD4);
    esi = MEM32(ebp + 0xCC);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0xCC) = esi;
    MEM32(esp + 0x14) = ebx;
    MEM32(ebp + 0x68) = eax;
    goto loc_000C6C3B;

loc_000C6BCE: ;
    ecx = edx;
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edx = MEM32(eax + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
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
    eax = MEM32(ebp + 0xD4);
    edx = MEM32(ebp + 0xCC);
    esi = MEM32(ebp + 0x68);
    ecx = eax + ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0x88);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    MEM32(ebp + 0xCC) = edx;
    edx = MEM32(ebp + 0x6C);
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C6C22u); RECOMP_ABI_CALL(0x00346EA0u, sub_00346EA0); /* call 0x00346EA0 */

loc_000C6C22: ;
    edx = MEM32(ebp + 0xD4);
    eax = MEM32(ebp + 0x68);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x68) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;

loc_000C6C3B: ;
    MEM32(ebp + 0xD4) = eax;
    eax = MEM32(esp + 0x10);
    ecx = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6C76; /* jne: not equal / not zero */

loc_000C6C4E: ;
    edx = MEM32(ebp + 0x68);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C6C6F; /* jbe: below or equal (unsigned <=) */

loc_000C6C57: ;
    MEM32(ebp + 0x94) = MEM32(ebp + 0x94) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    MEM32(ebp + 0x98) = eax;
    MEM32(ebp + 0xD8) = ecx;
    goto loc_000C6C76;

loc_000C6C6F: ;
    MEM32(ebp + 8) = 2;

loc_000C6C76: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6720; /* jne: not equal / not zero */

loc_000C6C82: ;
    goto loc_000C6E8E;

loc_000C6C87: ;
    PUSH32(esp, 0x217);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x4268D4);

loc_000C6C96: ;
    ebx = 0x4268F4;
    esi = ebp;
    PUSH32(esp, 0x000C6CA2u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C6CA2: ;
    eax = MEM32(ebp + 0x80);
    edi = MEM32(ebp + 0x84);
    ecx = MEM32(esp + 0x18);
    esi = MEM32(ebp + 0x64);
    edx = MEM32(esp + 0x554);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
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
    eax = MEM32(ebp + 0x80);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x80) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx) = 0;
    goto loc_000C6EC9;

loc_000C6CED: ;
    PUSH32(esp, 0x218);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x4264C0);
    goto loc_000C6C96;

loc_000C6CFE: ;
    PUSH32(esp, 0x261);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x4268D4);

loc_000C6D0D: ;
    ebx = 0x4268F4;
    esi = ebp;
    PUSH32(esp, 0x000C6D19u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000C6D19: ;
    ecx = MEM32(ebp + 0x94);
    eax = MEM32(ebp + 0x98);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x98) = eax;
    eax = MEM32(esp + 0x554);
    MEM32(ebp + 0x94) = ecx;
    MEM32(eax) = 0;
    eax = edi;
    goto loc_000C6EC9;

loc_000C6D47: ;
    PUSH32(esp, 0x262);
    PUSH32(esp, 0x426A70);
    PUSH32(esp, 0x4264C0);
    goto loc_000C6D0D;

loc_000C6D58: ;
    ecx = MEM32(ebp + 0x94);
    eax = MEM32(ebp + 0x98);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x94) = ecx;
    ecx = MEM32(esp + 0x554);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x98) = eax;
    MEM32(ecx) = 0;
    eax = 6;
    goto loc_000C6EC9;

loc_000C6D89: ;
    edx = MEM32(esp + 0x550);
    eax = MEM32(edx);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x554);
    MEM32(ecx) = eax;
    eax = 2;
    MEM32(ebp + 8) = eax;
    goto loc_000C6EC9;

loc_000C6DAC: ;
    edx = MEM32(esp + 0x554);
    MEM32(ebp + 8) = 2;
    MEM32(edx) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000C6EC9;

loc_000C6DC8: ;
    eax = MEM32(esp + 0x554);
    MEM32(ebp + 8) = 2;
    PUSH32(esp, 0x29E);
    ecx = 0x426A70;
    edx = 0x41FFC0;
    MEM32(eax) = 0;
    PUSH32(esp, 0x000C6DF0u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C6DF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000C6EC9;

loc_000C6DFB: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ebp + 0x88);
    ebx = MEM32(esp + 0x550);
    edi = MEM32(ebx);
    esi = MEM32(ebp + 0x6C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    ecx = edx;
    edx = MEM32(ebx + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
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
    edx = MEM32(esp + 0x554);
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xCC) = MEM32(ebp + 0xCC) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0xCC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx);
    MEM32(edx) = ecx;
    ecx = MEM32(ebp + 0x68);
    esi = MEM32(ebp + 0x88);
    edi = MEM32(ebp + 0x6C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    edx = MEM32(ebp + 0x68);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + 0x68) = edx;
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C6E8A; /* jne: not equal / not zero */

loc_000C6E77: ;
    edx = MEM32(ebp + 0xD8);
    ecx = 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C6E8E; /* je: equal / zero */

loc_000C6E8A: ;
    MEM32(esp + 0x10) = eax;

loc_000C6E8E: ;
    eax = MEM32(esp + 0x550);
    eax = MEM32(eax);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x554);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;
    edx = MEM32(ebp + 8);
    ecx = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6EC1; /* je: equal / zero */

loc_000C6EB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C6EC1; /* je: equal / zero */

loc_000C6EB6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C6EC9; /* jne: not equal / not zero */

loc_000C6EBF: ;
    goto loc_000C6EC6;

loc_000C6EC1: ;
    eax = 4;

loc_000C6EC6: ;
    MEM32(ebp + 8) = ecx;

loc_000C6EC9: ;
    ecx = MEM32(esp + 0x548);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    PUSH32(esp, 0x000C6ED9u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C6ED9: ;
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x53C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C6EF0
 * Original: 0x000C6EF0 - 0x000C72D9 (1001 bytes, 278 insns)
 * Folder: sound (match: xbox-demo 0x000EA0F0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C6EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C6EF0: ;
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
    ebx = MEM32(ebx * 4 + 0x435820);
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
    edi = 0x435B30;
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
    mm3 = MMX_MEM(0x441B08); /* movq */
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
    if ((_fa == 0)) goto loc_000C714E; /* je: equal / zero */

loc_000C6FFF: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x441AF8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x441AF8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x441B00); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + 0xC);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x441AE8)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -20);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x435860);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x441AE8)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x441AF0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x441AD0)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x441AC0)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x441AC0)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x441AF8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C70FD; /* jge: greater or equal (signed >=) */

loc_000C70F8: ;
    ebx = 0x10F;

loc_000C70FD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C710A; /* jle: less or equal (signed <=) */

loc_000C7105: ;
    ebx = 0xA00;

loc_000C710A: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x441AD8); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x441AC8)); /* por */
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
    goto loc_000C7211;

loc_000C714E: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x441AE0)); /* movd */
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
    ebx = MEM32(ebx * 4 + 0x435860);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x441AD0)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x441AD8); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x441AC0)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x441AC0)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x441AC8)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x441AF8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C71ED; /* jge: greater or equal (signed >=) */

loc_000C71E8: ;
    ebx = 0x10F;

loc_000C71ED: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7201; /* jle: less or equal (signed <=) */

loc_000C71FC: ;
    ebx = 0xA00;

loc_000C7201: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000C7211: ;
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
    if (CMP_G(_fas, _fbs)) goto loc_000C7275; /* jg: greater (signed >) */

loc_000C7273: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000C7275: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x300 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7295; /* jle: less or equal (signed <=) */

loc_000C727D: ;
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

loc_000C7295: ;
    SET_LO16(esi, MEM16(eax + 0x10));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    edx = SX16(LO16(esi));
    if (CMP_G(_fas, _fbs)) goto loc_000C72A3; /* jg: greater (signed >) */

loc_000C72A1: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000C72A3: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    edi = SX16(LO16(ecx));
    ebx = 0x3C0;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C72CF; /* jle: less or equal (signed <=) */

loc_000C72B5: ;
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

loc_000C72CF: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C72E0
 * Original: 0x000C72E0 - 0x000C73AF (207 bytes, 71 insns)
 * Folder: sound (match: xbox-demo 0x000EA4E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C72E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C72E0: ;
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
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C7390; /* jge: greater or equal (signed >=) */

loc_000C738B: ;
    ebx = 0x10F;

loc_000C7390: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C739D; /* jle: less or equal (signed <=) */

loc_000C7398: ;
    ebx = 0xA00;

loc_000C739D: ;
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
 * sub_000C73B0
 * Original: 0x000C73B0 - 0x000C742F (127 bytes, 49 insns)
 * Folder: sound (match: xbox-demo 0x000EA5B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C73B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C73B0: ;
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

loc_000C73D7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    mm2 = mm7; /* movq */
    if (CMP_GE(_fas, _fbs)) goto loc_000C740A; /* jge: greater or equal (signed >=) */

loc_000C73DF: ;
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
    if ((_fa != 0)) goto loc_000C73D7; /* jne: not equal / not zero */

loc_000C7408: ;
    goto loc_000C7426;

loc_000C740A: ;
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
    if ((_fa != 0)) goto loc_000C73D7; /* jne: not equal / not zero */

loc_000C7426: ;
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
 * sub_000C7430
 * Original: 0x000C7430 - 0x000C74AF (127 bytes, 49 insns)
 * Folder: sound (match: xbox-demo 0x000EA630, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C7430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C7430: ;
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

loc_000C7457: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    mm2 = mm7; /* movq */
    if (CMP_GE(_fas, _fbs)) goto loc_000C748A; /* jge: greater or equal (signed >=) */

loc_000C745F: ;
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
    if ((_fa != 0)) goto loc_000C7457; /* jne: not equal / not zero */

loc_000C7488: ;
    goto loc_000C74A6;

loc_000C748A: ;
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
    if ((_fa != 0)) goto loc_000C7457; /* jne: not equal / not zero */

loc_000C74A6: ;
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
 * sub_000C74B0
 * Original: 0x000C74B0 - 0x000C8A45 (5525 bytes, 1643 insns)
 * Folder: sound (between: 0x000C7430 and 0x000C7596)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C74B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C74B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000C74D5; /* jne: not equal / not zero */

loc_000C74C5: ;
    MEM32(ebp + -8) = 0xC6EF0;
    MEM32(ebp + -16) = 0xC7430;
    goto loc_000C74E3;

loc_000C74D5: ;
    MEM32(ebp + -8) = 0xC72E0;
    MEM32(ebp + -16) = 0xC73B0;

loc_000C74E3: ;
    edi = MEM32(eax + 8);
    ecx = MEM32(esi + 0x7C);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000C7539; /* jae: above or equal (unsigned >=) */

loc_000C74F0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x46B1A4);
    if (CMP_NE(_fa, _fb)) goto loc_000C750D; /* jne: not equal / not zero */

loc_000C74F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7502; /* jne: not equal / not zero */

loc_000C74FD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C7502u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C7502: ;
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C750Bu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C750B: ;
    goto loc_000C7523;

loc_000C750D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(esi + 0x78);
    if (CMP_NE(_fa, _fb)) goto loc_000C7519; /* jne: not equal / not zero */

loc_000C7514: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C7519u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C7519: ;
    PUSH32(esp, ebx);
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C7523u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000C7523: ;
    MEM32(esi + 0x78) = eax;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 8);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x7C) = ecx;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C758F; /* je: equal / zero */

loc_000C7539: ;
    edi = MEM32(eax + 8);
    ecx = MEM32(esi + 0x74);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000C759A; /* jae: above or equal (unsigned >=) */

loc_000C7546: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x46B1A4);
    if (CMP_NE(_fa, _fb)) goto loc_000C7563; /* jne: not equal / not zero */

loc_000C754F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7558; /* jne: not equal / not zero */

loc_000C7553: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C7558u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C7558: ;
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C7561u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C7561: ;
    goto loc_000C7579;

loc_000C7563: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(esi + 0x70);
    if (CMP_NE(_fa, _fb)) goto loc_000C756F; /* jne: not equal / not zero */

loc_000C756A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C756Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C756F: ;
    PUSH32(esp, ebx);
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C7579u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000C7579: ;
    MEM32(esi + 0x70) = eax;
    eax = MEM32(esi + 0x50);
    edx = MEM32(eax + 8);
    ecx = MEM32(esi + 0x70);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x74) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000C759A; /* jne: not equal / not zero */

loc_000C758F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000C759A: ;
    ecx = MEM32(eax + 0xC);
    edi = MEM32(esi + 0x6C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    MEM32(ebp + -20) = edi;
    if (CMP_A(_fa, _fb)) goto loc_000C8A37; /* ja: above (unsigned >) */

loc_000C75AD: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0xC8A48); /* switch: 6 entries, 3 targets */
    if (_jt == 0x000C75B4u) goto loc_000C75B4;
    if (_jt == 0x000C78D8u) goto loc_000C78D8;
    if (_jt == 0x000C8A37u) goto loc_000C8A37;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C75B4: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x14);
    eax = MEM32(esi + 0x78);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -16); PUSH32(esp, 0x000C75C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C75C4u); } /* indirect call */
    }

loc_000C75C7: ;
    ecx = MEM32(esi + 0x50);
    ebx = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC)); }
    ecx = MEM32(esi + 0x68);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C75F8; /* jbe: below or equal (unsigned <=) */

loc_000C75E1: ;
    PUSH32(esp, 0x5E4);
    ecx = 0x426740;
    edx = 0x426704;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C75F5u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C75F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C75F8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7601; /* je: equal / zero */

loc_000C75FD: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = ebx;

loc_000C7601: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C76F8; /* jne: not equal / not zero */

loc_000C760E: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7665; /* jne: not equal / not zero */

loc_000C7616: ;
    eax = MEM32(ebp + -4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C78A6; /* jbe: below or equal (unsigned <=) */

loc_000C7623: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + ebx * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C7631u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C762Eu); } /* indirect call */
    }

loc_000C7631: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + ebx * 4 + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C7647u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C7644u); } /* indirect call */
    }

loc_000C7647: ;
    ecx = MEM32(edi);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    MEM32(edi) = ecx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C7623; /* jb: below (unsigned <) */

loc_000C7660: ;
    goto loc_000C78A6;

loc_000C7665: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000C78A9; /* jbe: below or equal (unsigned <=) */

loc_000C7674: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(ebp + -20) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000C76E4; /* jle: less or equal (signed <=) */

loc_000C767B: ;
    MEM32(ebp + 8) = edx;
    ebx = eax * 4;

loc_000C7685: ;
    edx = MEM32(esi + 0x54);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C7696u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C7693u); } /* indirect call */
    }

loc_000C7696: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;
    edx = MEM32(esi + 0x54);
    eax = MEM32(ebp + 8);
    ecx = edx + eax + 0x34;
    edx = MEM32(esi + 0x78);
    eax = MEM32(edx + ebx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C76B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C76B0u); } /* indirect call */
    }

loc_000C76B3: ;
    ecx = MEM32(edi);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -20);
    MEM32(edi) = ecx;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x68;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000C7685; /* jl: less (signed <) */

loc_000C76DC: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C76E4: ;
    ecx = MEM32(esi + 0x50);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000C7674; /* jb: below (unsigned <) */

loc_000C76F3: ;
    goto loc_000C78A9;

loc_000C76F8: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = edi;
    edi = MEM32(ebp + -4);
    eax = 0;

loc_000C770F: ;
    ebx = MEM32(ebp + -24);
    esi = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C789E; /* jge: greater or equal (signed >=) */

loc_000C771D: ;
    ebx = MEM32(ebx + eax * 4);
    MEM32(ebp + -12) = eax;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = ebx;
    edi = 0x435B30;
    ebx = MEM32(ebx * 4 + 0x4358A0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx;
    ebx = ebx & 0xFFFFFF00u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
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
    edi = MEM32(ebp + -16);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
    edi = mm6.ud[0]; /* movd */
    MEM32(esi + 0x28) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C77C2; /* jge: greater or equal (signed >=) */

loc_000C77BD: ;
    ebx = 0x10F;

loc_000C77C2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C77CF; /* jle: less or equal (signed <=) */

loc_000C77CA: ;
    ebx = 0xA00;

loc_000C77CF: ;
    edi = MEM32(ebp + -32);
    MEM32(esi + 4) = ebx;
    ebx = MEM32(ecx + eax * 4 + 4);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + eax * 2) = edx;
    edx = ebx;
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
    MEM32(ebp + -16) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -16);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
    edi = mm6.ud[0]; /* movd */
    MEM32(esi + 0x28) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x20) = edx;
    eax = MEM32(ebp + -12);
    edi = MEM32(ebp + -32);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C787E; /* jge: greater or equal (signed >=) */

loc_000C7879: ;
    ebx = 0x10F;

loc_000C787E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C788B; /* jle: less or equal (signed <=) */

loc_000C7886: ;
    ebx = 0xA00;

loc_000C788B: ;
    MEM16(edi + eax * 2 + 2) = LO16(edx);
    MEM32(esi + 4) = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -4);
    goto loc_000C770F;

loc_000C789E: ;
    (void)0; /* emms - empty MMX state */
    edi = MEM32(ebp + -20);
    esi = MEM32(ebp + 8);

loc_000C78A6: ;
    ebx = MEM32(ebp + -4);

loc_000C78A9: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8A37; /* je: equal / zero */

loc_000C78B5: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + ebx * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C78C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C78C0u); } /* indirect call */
    }

loc_000C78C3: ;
    MEM16(edi + ebx * 2) = LO16(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000C78D8: ;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(esi + 0x78);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebp + -16); PUSH32(esp, 0x000C78EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C78E8u); } /* indirect call */
    }

loc_000C78EB: ;
    ecx = MEM32(esi + 0x50);
    ebx = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC)); }
    ecx = MEM32(esi + 0x68);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C791C; /* jbe: below or equal (unsigned <=) */

loc_000C7905: ;
    PUSH32(esp, 0x702);
    ecx = 0x426740;
    edx = 0x426704;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C7919u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C7919: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C791C: ;
    eax = ebx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C88D6; /* je: equal / zero */

loc_000C792F: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8275; /* jne: not equal / not zero */

loc_000C793C: ;
    ecx = 0x441AB8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C795D; /* je: equal / zero */

loc_000C7946: ;
    PUSH32(esp, 0x71B);
    ecx = 0x426740;
    edx = 0x4266E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C795Au); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C795A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C795D: ;
    edx = 0x441AB0;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C797E; /* je: equal / zero */

loc_000C7967: ;
    PUSH32(esp, 0x71C);
    ecx = 0x426740;
    edx = 0x4266B4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C797Bu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C797B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C797E: ;
    eax = 0x441AA8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C799E; /* je: equal / zero */

loc_000C7987: ;
    PUSH32(esp, 0x71D);
    ecx = 0x426740;
    edx = 0x426698;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C799Bu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C799B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C799E: ;
    ecx = 0x441AA0;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C79BF; /* je: equal / zero */

loc_000C79A8: ;
    PUSH32(esp, 0x71E);
    ecx = 0x426740;
    edx = 0x426678;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C79BCu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C79BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C79BF: ;
    edx = 0x441A98;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C79E0; /* je: equal / zero */

loc_000C79C9: ;
    PUSH32(esp, 0x71F);
    ecx = 0x426740;
    edx = 0x426658;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C79DDu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C79DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C79E0: ;
    eax = 0x441A90;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7A00; /* je: equal / zero */

loc_000C79E9: ;
    PUSH32(esp, 0x720);
    ecx = 0x426740;
    edx = 0x426630;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C79FDu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C79FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A00: ;
    ecx = 0x441A88;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7A21; /* je: equal / zero */

loc_000C7A0A: ;
    PUSH32(esp, 0x721);
    ecx = 0x426740;
    edx = 0x426610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C7A1Eu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C7A1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A21: ;
    edx = 0x441A80;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7A42; /* je: equal / zero */

loc_000C7A2B: ;
    PUSH32(esp, 0x722);
    ecx = 0x426740;
    edx = 0x4265F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C7A3Fu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C7A3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A42: ;
    eax = 0x441A78;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7A62; /* je: equal / zero */

loc_000C7A4B: ;
    PUSH32(esp, 0x723);
    ecx = 0x426740;
    edx = 0x4265D0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C7A5Fu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C7A5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A62: ;
    ecx = 0x441A70;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7A83; /* je: equal / zero */

loc_000C7A6C: ;
    PUSH32(esp, 0x724);
    ecx = 0x426740;
    edx = 0x4265B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C7A80u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C7A80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A83: ;
    eax = MEM32(esi + 0x54);
    edx = MEM32(esi + 0x78);
    MEM32(ebp + -44) = eax;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -36) = eax;
    eax = MEM32(esi + 0x70);
    MEM32(ebp + -40) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -12) = eax;

loc_000C7AA6: ;
    ebx = 0;
    MEM32(ebp + -32) = 0;

loc_000C7AB2: ;
    edi = MEM32(ebp + -24);
    ebx = MEM32(edi + ebx * 8);
    eax = MEM32(ebp + -44);
    mm0 = MMX_FROM32(MEM32(eax + 0x10)); /* movd */
    mm6 = MMX_FROM32(MEM32(eax + 0x20)); /* movd */
    mm2 = MMX_MEM(eax + 0x18); /* movq */
    mm4 = MMX_MEM(eax + 0x28); /* movq */
    mm0 = MMX_PMADDWD(mm0, mm6); /* pmaddwd */
    esi = MEM32(ebp + -32);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 4);
    edx = ebx;
    MEM32(edi + esi * 8) = ebx;
    edi = ebx;
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
    MEM32(ebp + -56) = ebx;
    eax = edi;
    ebx = MEM32(ebx * 4 + 0x435820);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -52) = mm0.ud[0]; /* movd */
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
    edi = 0x435B30;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = mm1.ud[0]; /* movd */
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
    eax = MEM32(ebp + -44);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx ^ 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(ebp + -28);
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebp + -52);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -48) = edx;
    mm5 = MMX_FROM32(ecx); /* movd */
    mm6 = MMX_PSLLQ(mm6, 16u); /* psllq */
    mm0 = MMX_FROM32(MEM32(ebp + -48)); /* movd */
    mm5 = MMX_PSLLD(mm5, 16u); /* pslld */
    mm2 = MMX_MEM(eax + 8); /* movq */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm3 = MMX_MEM(0x441AB8); /* movq */
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
    esi = MEM32(ebp + -12);
    ebx = MEM32(ebp + -40);
    MEM16(ebx + esi * 2) = LO16(ecx);
    ebx = mm1.ud[0]; /* movd */
    mm1 = MMX_PSLLD(mm1, 16u); /* pslld */
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000C7D0E; /* je: equal / zero */

loc_000C7BBF: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x441AA8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x441AA8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x441AB0); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + -44);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x441A98)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -56);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x435860);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x441A98)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x441AA0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x441A80)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x441A70)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x441A70)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x441AA8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C7CBD; /* jge: greater or equal (signed >=) */

loc_000C7CB8: ;
    ebx = 0x10F;

loc_000C7CBD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7CCA; /* jle: less or equal (signed <=) */

loc_000C7CC5: ;
    ebx = 0xA00;

loc_000C7CCA: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x441A88); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x441A78)); /* por */
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
    goto loc_000C7DD1;

loc_000C7D0E: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x441A90)); /* movd */
    mm2 = mm1; /* movq */
    mm1 = MMX_PMULLW(mm1, mm3); /* pmullw */
    esi = MEM32(ebp + -44);
    eax = 0x7CFF0000;
    mm2 = MMX_PMULHW(mm2, mm3); /* pmulhw */
    mm1 = MMX_PUNPCKLWD(mm1, mm2); /* punpcklwd */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm1 = MMX_PACKSSDW(mm1, mm3); /* packssdw */
    mm0 = MMX_MEM(esi + 0x28); /* movq */
    mm7 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm0 = MMX_PSLLQ(mm0, 48u); /* psllq */
    ecx = 0xF6;
    ebx = MEM32(ebp + -56);
    mm4 = MMX_FROM32(ecx); /* movd */
    mm6 = mm0; /* movq */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    ebx = MEM32(ebx * 4 + 0x435860);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x441A80)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x441A88); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x441A70)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x441A70)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x441A78)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x441AA8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C7DAD; /* jge: greater or equal (signed >=) */

loc_000C7DA8: ;
    ebx = 0x10F;

loc_000C7DAD: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7DC1; /* jle: less or equal (signed <=) */

loc_000C7DBC: ;
    ebx = 0xA00;

loc_000C7DC1: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000C7DD1: ;
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
    ebx = MEM32(ebp + -28);
    mm2 = MMX_PSUBSW(mm2, mm5); /* psubsw */
    MEM32(esi + 0xC) = eax;
    /* nop */
    MEM32(esi + 8) = ebx;
    /* nop */
    MEM32(esi + 0x10) = mm2.ud[0]; /* movd */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    edi = MEM32(ebp + -44);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x10);
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x300 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7E3B; /* jle: less or equal (signed <=) */

loc_000C7E36: ;
    ebx = 0x300;

loc_000C7E3B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFD00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFD00u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C7E48; /* jge: greater or equal (signed >=) */

loc_000C7E43: ;
    ebx = 0xFFFFFD00u;

loc_000C7E48: ;
    ecx = 0x3C0;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7E55; /* jle: less or equal (signed <=) */

loc_000C7E53: ;
    eax = ecx;

loc_000C7E55: ;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7E61; /* jle: less or equal (signed <=) */

loc_000C7E5D: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000C7E61: ;
    MEM16(edi + 0x10) = LO16(eax);
    MEM16(edi + 0x12) = LO16(ebx);
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -32);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C7AB2; /* jne: not equal / not zero */

loc_000C7E81: ;
    ebx = 0;
    MEM32(ebp + -32) = ebx;

loc_000C7E89: ;
    edi = MEM32(ebp + -24);
    ebx = MEM32(edi + ebx * 8 + 4);
    eax = MEM32(ebp + -36);
    mm0 = MMX_FROM32(MEM32(eax + 0x10)); /* movd */
    mm6 = MMX_FROM32(MEM32(eax + 0x20)); /* movd */
    mm2 = MMX_MEM(eax + 0x18); /* movq */
    mm4 = MMX_MEM(eax + 0x28); /* movq */
    mm0 = MMX_PMADDWD(mm0, mm6); /* pmaddwd */
    esi = MEM32(ebp + -32);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 4);
    edx = ebx;
    MEM32(edi + esi * 8 + 4) = ebx;
    edi = ebx;
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
    MEM32(ebp + -56) = ebx;
    eax = edi;
    ebx = MEM32(ebx * 4 + 0x435820);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -52) = mm0.ud[0]; /* movd */
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
    edi = 0x435B30;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = mm1.ud[0]; /* movd */
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
    eax = MEM32(ebp + -36);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx ^ 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(ebp + -28);
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebp + -52);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -48) = edx;
    mm5 = MMX_FROM32(ecx); /* movd */
    mm6 = MMX_PSLLQ(mm6, 16u); /* psllq */
    mm0 = MMX_FROM32(MEM32(ebp + -48)); /* movd */
    mm5 = MMX_PSLLD(mm5, 16u); /* pslld */
    mm2 = MMX_MEM(eax + 8); /* movq */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm3 = MMX_MEM(0x441AB8); /* movq */
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
    esi = MEM32(ebp + -12);
    ebx = MEM32(ebp + -40);
    MEM16(ebx + esi * 2) = LO16(ecx);
    ebx = mm1.ud[0]; /* movd */
    mm1 = MMX_PSLLD(mm1, 16u); /* pslld */
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000C80E7; /* je: equal / zero */

loc_000C7F98: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x441AA8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x441AA8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x441AB0); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + -36);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x441A98)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -56);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x435860);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x441A98)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x441AA0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x441A80)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x441A70)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x441A70)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x441AA8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C8096; /* jge: greater or equal (signed >=) */

loc_000C8091: ;
    ebx = 0x10F;

loc_000C8096: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C80A3; /* jle: less or equal (signed <=) */

loc_000C809E: ;
    ebx = 0xA00;

loc_000C80A3: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x441A88); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x441A78)); /* por */
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
    goto loc_000C81AA;

loc_000C80E7: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x441A90)); /* movd */
    mm2 = mm1; /* movq */
    mm1 = MMX_PMULLW(mm1, mm3); /* pmullw */
    esi = MEM32(ebp + -36);
    eax = 0x7CFF0000;
    mm2 = MMX_PMULHW(mm2, mm3); /* pmulhw */
    mm1 = MMX_PUNPCKLWD(mm1, mm2); /* punpcklwd */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm1 = MMX_PACKSSDW(mm1, mm3); /* packssdw */
    mm0 = MMX_MEM(esi + 0x28); /* movq */
    mm7 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm0 = MMX_PSLLQ(mm0, 48u); /* psllq */
    ecx = 0xF6;
    ebx = MEM32(ebp + -56);
    mm4 = MMX_FROM32(ecx); /* movd */
    mm6 = mm0; /* movq */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    ebx = MEM32(ebx * 4 + 0x435860);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x441A80)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x441A88); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x441A70)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x441A70)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x441A78)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x441AA8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C8186; /* jge: greater or equal (signed >=) */

loc_000C8181: ;
    ebx = 0x10F;

loc_000C8186: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000C819A; /* jle: less or equal (signed <=) */

loc_000C8195: ;
    ebx = 0xA00;

loc_000C819A: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000C81AA: ;
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
    ebx = MEM32(ebp + -28);
    mm2 = MMX_PSUBSW(mm2, mm5); /* psubsw */
    MEM32(esi + 0xC) = eax;
    /* nop */
    MEM32(esi + 8) = ebx;
    /* nop */
    MEM32(esi + 0x10) = mm2.ud[0]; /* movd */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    edi = MEM32(ebp + -36);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x10);
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x300 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8214; /* jle: less or equal (signed <=) */

loc_000C820F: ;
    ebx = 0x300;

loc_000C8214: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFD00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFD00u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C8221; /* jge: greater or equal (signed >=) */

loc_000C821C: ;
    ebx = 0xFFFFFD00u;

loc_000C8221: ;
    ecx = 0x3C0;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C822E; /* jle: less or equal (signed <=) */

loc_000C822C: ;
    eax = ecx;

loc_000C822E: ;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C823A; /* jle: less or equal (signed <=) */

loc_000C8236: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000C823A: ;
    MEM16(edi + 0x10) = LO16(eax);
    MEM16(edi + 0x12) = LO16(ebx);
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -32);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C7E89; /* jne: not equal / not zero */

loc_000C825A: ;
    edi = MEM32(ebp + -24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = edi;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7AA6; /* jne: not equal / not zero */

loc_000C826E: ;
    (void)0; /* emms - empty MMX state */
    goto loc_000C88CA;

loc_000C8275: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x78);
    edx = MEM32(esi + 0x70);
    MEM32(ebp + -48) = eax;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -52) = edx;
    edi = MEM32(ebp + -16);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = 0;
    MEM32(ebp + -12) = eax;

loc_000C829A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C88C8; /* je: equal / zero */

loc_000C82A2: ;
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8);
    esi = MEM32(ebp + -48);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C8349; /* jge: greater or equal (signed >=) */

loc_000C8344: ;
    ebx = 0x10F;

loc_000C8349: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8356; /* jle: less or equal (signed <=) */

loc_000C8351: ;
    ebx = 0xA00;

loc_000C8356: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 8);
    esi = MEM32(ebp + -48);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C840B; /* jge: greater or equal (signed >=) */

loc_000C8406: ;
    ebx = 0x10F;

loc_000C840B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8418; /* jle: less or equal (signed <=) */

loc_000C8413: ;
    ebx = 0xA00;

loc_000C8418: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 2) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 0x10);
    esi = MEM32(ebp + -48);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C84CE; /* jge: greater or equal (signed >=) */

loc_000C84C9: ;
    ebx = 0x10F;

loc_000C84CE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C84DB; /* jle: less or equal (signed <=) */

loc_000C84D6: ;
    ebx = 0xA00;

loc_000C84DB: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 4) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 0x18);
    esi = MEM32(ebp + -48);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C8591; /* jge: greater or equal (signed >=) */

loc_000C858C: ;
    ebx = 0x10F;

loc_000C8591: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C859E; /* jle: less or equal (signed <=) */

loc_000C8599: ;
    ebx = 0xA00;

loc_000C859E: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 6) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 4);
    esi = MEM32(ebp + -56);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C8654; /* jge: greater or equal (signed >=) */

loc_000C864F: ;
    ebx = 0x10F;

loc_000C8654: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8661; /* jle: less or equal (signed <=) */

loc_000C865C: ;
    ebx = 0xA00;

loc_000C8661: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 8) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 0xC);
    esi = MEM32(ebp + -56);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C8717; /* jge: greater or equal (signed >=) */

loc_000C8712: ;
    ebx = 0x10F;

loc_000C8717: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8724; /* jle: less or equal (signed <=) */

loc_000C871F: ;
    ebx = 0xA00;

loc_000C8724: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 0xA) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 0x14);
    esi = MEM32(ebp + -56);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C87DA; /* jge: greater or equal (signed >=) */

loc_000C87D5: ;
    ebx = 0x10F;

loc_000C87DA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C87E7; /* jle: less or equal (signed <=) */

loc_000C87E2: ;
    ebx = 0xA00;

loc_000C87E7: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 0xC) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 0x1C);
    esi = MEM32(ebp + -56);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C889D; /* jge: greater or equal (signed >=) */

loc_000C8898: ;
    ebx = 0x10F;

loc_000C889D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C88AA; /* jle: less or equal (signed <=) */

loc_000C88A5: ;
    ebx = 0xA00;

loc_000C88AA: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 0xE) = LO16(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_000C829A;

loc_000C88C8: ;
    (void)0; /* emms - empty MMX state */

loc_000C88CA: ;
    eax = MEM32(ebp + -16);
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -4);
    esi = MEM32(ebp + 8);

loc_000C88D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000C8906; /* jge: greater or equal (signed >=) */

loc_000C88DD: ;
    /* nop */

loc_000C88E0: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx + edx * 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C88F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C88EEu); } /* indirect call */
    }

loc_000C88F1: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esi + 0x70);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + ecx * 2) = LO16(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000C88E0; /* jl: less (signed <) */

loc_000C8906: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x50);
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8961; /* jne: not equal / not zero */

loc_000C8915: ;
    ecx = 0;
    ebx = MEM32(ebp + -4);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + -20);

loc_000C8923: ;
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + 8); /* movq */
    mm2 = mm0; /* movq */
    mm0 = MMX_PADDSW(mm0, mm1); /* paddsw */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm2 = MMX_PSUBSW(mm2, mm1); /* psubsw */
    mm3 = mm0; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm2); /* punpcklwd */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PUNPCKHWD(mm0, mm2); /* punpckhwd */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(edx + -16, mm3); /* movq */
    MMX_STORE(edx + -8, mm0); /* movq */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C8923; /* jl: less (signed <) */

loc_000C8951: ;
    (void)0; /* emms - empty MMX state */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000C8961: ;
    edx = ebx + -4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C89FA; /* jl: less (signed <) */

loc_000C896E: ;
    edi = edi;

loc_000C8970: ;
    ecx = MEM32(esi + 0x70);
    ecx = MEM32(ecx + eax * 4);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = ecx;
    ebx = MEM32(esi + 0x70);
    ebx = MEM32(ebx + eax * 4 + 8);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ebx;
    ecx = MEM32(esi + 0x70);
    ecx = ZX16(MEM16(ecx + eax * 4 + 2));
    MEM32(edi + 4) = ecx;
    ebx = MEM32(esi + 0x70);
    ebx = MEM32(ebx + eax * 4 + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & 0xFFFF0000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ebx;
    ecx = MEM32(esi + 0x70);
    ecx = MEM32(ecx + eax * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = ecx;
    ebx = MEM32(esi + 0x70);
    ebx = MEM32(ebx + eax * 4 + 0xC);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ebx;
    ecx = MEM32(esi + 0x70);
    ecx = ZX16(MEM16(ecx + eax * 4 + 6));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    ebx = MEM32(esi + 0x70);
    ebx = MEM32(ebx + eax * 4 + 0xC);
    ebx = ebx & 0xFFFF0000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8970; /* jle: less or equal (signed <=) */

loc_000C89F7: ;
    ebx = MEM32(ebp + -4);

loc_000C89FA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C8A37; /* je: equal / zero */

loc_000C89FE: ;
    edx = MEM32(esi + 0x70);
    ecx = MEM32(edx + eax * 4);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = ecx;
    edx = MEM32(esi + 0x70);
    edx = MEM32(edx + eax * 4 + 8);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = edx;
    ecx = MEM32(esi + 0x70);
    ecx = ZX16(MEM16(ecx + eax * 4 + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    edx = MEM32(esi + 0x70);
    eax = MEM32(edx + eax * 4 + 8);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = eax;

loc_000C8A37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C7596
 * Original: 0x000C7596 - 0x000C8A45 (5295 bytes, 1561 insns)
 * Folder: sound (source: tadpcm.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C7596(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C7596: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    { uint32_t _jt = MEM32(ecx * 4 + 0xC8A48); /* switch: 6 entries, 3 targets */
    if (_jt == 0x000C75B4u) goto loc_000C75B4;
    if (_jt == 0x000C78D8u) goto loc_000C78D8;
    if (_jt == 0x000C8A37u) goto loc_000C8A37;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C75B4: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x14);
    eax = MEM32(esi + 0x78);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -16); PUSH32(esp, 0x000C75C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C75C4u); } /* indirect call */
    }

loc_000C75C7: ;
    ecx = MEM32(esi + 0x50);
    ebx = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC)); }
    ecx = MEM32(esi + 0x68);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C75F8; /* jbe: below or equal (unsigned <=) */

loc_000C75E1: ;
    PUSH32(esp, 0x5E4);
    ecx = 0x426740;
    edx = 0x426704;
    PUSH32(esp, 0x000C75F5u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C75F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C75F8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7601; /* je: equal / zero */

loc_000C75FD: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = ebx;

loc_000C7601: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C76F8; /* jne: not equal / not zero */

loc_000C760E: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7665; /* jne: not equal / not zero */

loc_000C7616: ;
    eax = MEM32(ebp + -4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C78A6; /* jbe: below or equal (unsigned <=) */

loc_000C7623: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + ebx * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C7631u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C762Eu); } /* indirect call */
    }

loc_000C7631: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + ebx * 4 + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C7647u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C7644u); } /* indirect call */
    }

loc_000C7647: ;
    ecx = MEM32(edi);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    MEM32(edi) = ecx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000C7623; /* jb: below (unsigned <) */

loc_000C7660: ;
    goto loc_000C78A6;

loc_000C7665: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000C78A9; /* jbe: below or equal (unsigned <=) */

loc_000C7674: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(ebp + -20) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000C76E4; /* jle: less or equal (signed <=) */

loc_000C767B: ;
    MEM32(ebp + 8) = edx;
    ebx = eax * 4;

loc_000C7685: ;
    edx = MEM32(esi + 0x54);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C7696u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C7693u); } /* indirect call */
    }

loc_000C7696: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;
    edx = MEM32(esi + 0x54);
    eax = MEM32(ebp + 8);
    ecx = edx + eax + 0x34;
    edx = MEM32(esi + 0x78);
    eax = MEM32(edx + ebx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C76B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C76B0u); } /* indirect call */
    }

loc_000C76B3: ;
    ecx = MEM32(edi);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -20);
    MEM32(edi) = ecx;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x68;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000C7685; /* jl: less (signed <) */

loc_000C76DC: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C76E4: ;
    ecx = MEM32(esi + 0x50);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000C7674; /* jb: below (unsigned <) */

loc_000C76F3: ;
    goto loc_000C78A9;

loc_000C76F8: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = edi;
    edi = MEM32(ebp + -4);
    eax = 0;

loc_000C770F: ;
    ebx = MEM32(ebp + -24);
    esi = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C789E; /* jge: greater or equal (signed >=) */

loc_000C771D: ;
    ebx = MEM32(ebx + eax * 4);
    MEM32(ebp + -12) = eax;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = ebx;
    edi = 0x435B30;
    ebx = MEM32(ebx * 4 + 0x4358A0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx;
    ebx = ebx & 0xFFFFFF00u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
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
    edi = MEM32(ebp + -16);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
    edi = mm6.ud[0]; /* movd */
    MEM32(esi + 0x28) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C77C2; /* jge: greater or equal (signed >=) */

loc_000C77BD: ;
    ebx = 0x10F;

loc_000C77C2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C77CF; /* jle: less or equal (signed <=) */

loc_000C77CA: ;
    ebx = 0xA00;

loc_000C77CF: ;
    edi = MEM32(ebp + -32);
    MEM32(esi + 4) = ebx;
    ebx = MEM32(ecx + eax * 4 + 4);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + eax * 2) = edx;
    edx = ebx;
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
    MEM32(ebp + -16) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -16);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
    edi = mm6.ud[0]; /* movd */
    MEM32(esi + 0x28) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x20) = edx;
    eax = MEM32(ebp + -12);
    edi = MEM32(ebp + -32);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C787E; /* jge: greater or equal (signed >=) */

loc_000C7879: ;
    ebx = 0x10F;

loc_000C787E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C788B; /* jle: less or equal (signed <=) */

loc_000C7886: ;
    ebx = 0xA00;

loc_000C788B: ;
    MEM16(edi + eax * 2 + 2) = LO16(edx);
    MEM32(esi + 4) = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -4);
    goto loc_000C770F;

loc_000C789E: ;
    (void)0; /* emms - empty MMX state */
    edi = MEM32(ebp + -20);
    esi = MEM32(ebp + 8);

loc_000C78A6: ;
    ebx = MEM32(ebp + -4);

loc_000C78A9: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8A37; /* je: equal / zero */

loc_000C78B5: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + ebx * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C78C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C78C0u); } /* indirect call */
    }

loc_000C78C3: ;
    MEM16(edi + ebx * 2) = LO16(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000C78D8: ;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(esi + 0x78);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebp + -16); PUSH32(esp, 0x000C78EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C78E8u); } /* indirect call */
    }

loc_000C78EB: ;
    ecx = MEM32(esi + 0x50);
    ebx = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC)); }
    ecx = MEM32(esi + 0x68);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C791C; /* jbe: below or equal (unsigned <=) */

loc_000C7905: ;
    PUSH32(esp, 0x702);
    ecx = 0x426740;
    edx = 0x426704;
    PUSH32(esp, 0x000C7919u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C7919: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C791C: ;
    eax = ebx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C88D6; /* je: equal / zero */

loc_000C792F: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8275; /* jne: not equal / not zero */

loc_000C793C: ;
    ecx = 0x441AB8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C795D; /* je: equal / zero */

loc_000C7946: ;
    PUSH32(esp, 0x71B);
    ecx = 0x426740;
    edx = 0x4266E0;
    PUSH32(esp, 0x000C795Au); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C795A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C795D: ;
    edx = 0x441AB0;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C797E; /* je: equal / zero */

loc_000C7967: ;
    PUSH32(esp, 0x71C);
    ecx = 0x426740;
    edx = 0x4266B4;
    PUSH32(esp, 0x000C797Bu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C797B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C797E: ;
    eax = 0x441AA8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C799E; /* je: equal / zero */

loc_000C7987: ;
    PUSH32(esp, 0x71D);
    ecx = 0x426740;
    edx = 0x426698;
    PUSH32(esp, 0x000C799Bu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C799B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C799E: ;
    ecx = 0x441AA0;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C79BF; /* je: equal / zero */

loc_000C79A8: ;
    PUSH32(esp, 0x71E);
    ecx = 0x426740;
    edx = 0x426678;
    PUSH32(esp, 0x000C79BCu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C79BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C79BF: ;
    edx = 0x441A98;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C79E0; /* je: equal / zero */

loc_000C79C9: ;
    PUSH32(esp, 0x71F);
    ecx = 0x426740;
    edx = 0x426658;
    PUSH32(esp, 0x000C79DDu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C79DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C79E0: ;
    eax = 0x441A90;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7A00; /* je: equal / zero */

loc_000C79E9: ;
    PUSH32(esp, 0x720);
    ecx = 0x426740;
    edx = 0x426630;
    PUSH32(esp, 0x000C79FDu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C79FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A00: ;
    ecx = 0x441A88;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7A21; /* je: equal / zero */

loc_000C7A0A: ;
    PUSH32(esp, 0x721);
    ecx = 0x426740;
    edx = 0x426610;
    PUSH32(esp, 0x000C7A1Eu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C7A1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A21: ;
    edx = 0x441A80;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7A42; /* je: equal / zero */

loc_000C7A2B: ;
    PUSH32(esp, 0x722);
    ecx = 0x426740;
    edx = 0x4265F0;
    PUSH32(esp, 0x000C7A3Fu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C7A3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A42: ;
    eax = 0x441A78;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7A62; /* je: equal / zero */

loc_000C7A4B: ;
    PUSH32(esp, 0x723);
    ecx = 0x426740;
    edx = 0x4265D0;
    PUSH32(esp, 0x000C7A5Fu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C7A5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A62: ;
    ecx = 0x441A70;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C7A83; /* je: equal / zero */

loc_000C7A6C: ;
    PUSH32(esp, 0x724);
    ecx = 0x426740;
    edx = 0x4265B0;
    PUSH32(esp, 0x000C7A80u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C7A80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C7A83: ;
    eax = MEM32(esi + 0x54);
    edx = MEM32(esi + 0x78);
    MEM32(ebp + -44) = eax;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -36) = eax;
    eax = MEM32(esi + 0x70);
    MEM32(ebp + -40) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -12) = eax;

loc_000C7AA6: ;
    ebx = 0;
    MEM32(ebp + -32) = 0;

loc_000C7AB2: ;
    edi = MEM32(ebp + -24);
    ebx = MEM32(edi + ebx * 8);
    eax = MEM32(ebp + -44);
    mm0 = MMX_FROM32(MEM32(eax + 0x10)); /* movd */
    mm6 = MMX_FROM32(MEM32(eax + 0x20)); /* movd */
    mm2 = MMX_MEM(eax + 0x18); /* movq */
    mm4 = MMX_MEM(eax + 0x28); /* movq */
    mm0 = MMX_PMADDWD(mm0, mm6); /* pmaddwd */
    esi = MEM32(ebp + -32);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 4);
    edx = ebx;
    MEM32(edi + esi * 8) = ebx;
    edi = ebx;
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
    MEM32(ebp + -56) = ebx;
    eax = edi;
    ebx = MEM32(ebx * 4 + 0x435820);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -52) = mm0.ud[0]; /* movd */
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
    edi = 0x435B30;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = mm1.ud[0]; /* movd */
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
    eax = MEM32(ebp + -44);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx ^ 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(ebp + -28);
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebp + -52);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -48) = edx;
    mm5 = MMX_FROM32(ecx); /* movd */
    mm6 = MMX_PSLLQ(mm6, 16u); /* psllq */
    mm0 = MMX_FROM32(MEM32(ebp + -48)); /* movd */
    mm5 = MMX_PSLLD(mm5, 16u); /* pslld */
    mm2 = MMX_MEM(eax + 8); /* movq */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm3 = MMX_MEM(0x441AB8); /* movq */
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
    esi = MEM32(ebp + -12);
    ebx = MEM32(ebp + -40);
    MEM16(ebx + esi * 2) = LO16(ecx);
    ebx = mm1.ud[0]; /* movd */
    mm1 = MMX_PSLLD(mm1, 16u); /* pslld */
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000C7D0E; /* je: equal / zero */

loc_000C7BBF: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x441AA8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x441AA8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x441AB0); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + -44);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x441A98)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -56);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x435860);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x441A98)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x441AA0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x441A80)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x441A70)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x441A70)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x441AA8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C7CBD; /* jge: greater or equal (signed >=) */

loc_000C7CB8: ;
    ebx = 0x10F;

loc_000C7CBD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7CCA; /* jle: less or equal (signed <=) */

loc_000C7CC5: ;
    ebx = 0xA00;

loc_000C7CCA: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x441A88); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x441A78)); /* por */
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
    goto loc_000C7DD1;

loc_000C7D0E: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x441A90)); /* movd */
    mm2 = mm1; /* movq */
    mm1 = MMX_PMULLW(mm1, mm3); /* pmullw */
    esi = MEM32(ebp + -44);
    eax = 0x7CFF0000;
    mm2 = MMX_PMULHW(mm2, mm3); /* pmulhw */
    mm1 = MMX_PUNPCKLWD(mm1, mm2); /* punpcklwd */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm1 = MMX_PACKSSDW(mm1, mm3); /* packssdw */
    mm0 = MMX_MEM(esi + 0x28); /* movq */
    mm7 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm0 = MMX_PSLLQ(mm0, 48u); /* psllq */
    ecx = 0xF6;
    ebx = MEM32(ebp + -56);
    mm4 = MMX_FROM32(ecx); /* movd */
    mm6 = mm0; /* movq */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    ebx = MEM32(ebx * 4 + 0x435860);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x441A80)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x441A88); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x441A70)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x441A70)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x441A78)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x441AA8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C7DAD; /* jge: greater or equal (signed >=) */

loc_000C7DA8: ;
    ebx = 0x10F;

loc_000C7DAD: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7DC1; /* jle: less or equal (signed <=) */

loc_000C7DBC: ;
    ebx = 0xA00;

loc_000C7DC1: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000C7DD1: ;
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
    ebx = MEM32(ebp + -28);
    mm2 = MMX_PSUBSW(mm2, mm5); /* psubsw */
    MEM32(esi + 0xC) = eax;
    /* nop */
    MEM32(esi + 8) = ebx;
    /* nop */
    MEM32(esi + 0x10) = mm2.ud[0]; /* movd */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    edi = MEM32(ebp + -44);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x10);
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x300 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7E3B; /* jle: less or equal (signed <=) */

loc_000C7E36: ;
    ebx = 0x300;

loc_000C7E3B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFD00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFD00u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C7E48; /* jge: greater or equal (signed >=) */

loc_000C7E43: ;
    ebx = 0xFFFFFD00u;

loc_000C7E48: ;
    ecx = 0x3C0;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7E55; /* jle: less or equal (signed <=) */

loc_000C7E53: ;
    eax = ecx;

loc_000C7E55: ;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C7E61; /* jle: less or equal (signed <=) */

loc_000C7E5D: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000C7E61: ;
    MEM16(edi + 0x10) = LO16(eax);
    MEM16(edi + 0x12) = LO16(ebx);
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -32);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C7AB2; /* jne: not equal / not zero */

loc_000C7E81: ;
    ebx = 0;
    MEM32(ebp + -32) = ebx;

loc_000C7E89: ;
    edi = MEM32(ebp + -24);
    ebx = MEM32(edi + ebx * 8 + 4);
    eax = MEM32(ebp + -36);
    mm0 = MMX_FROM32(MEM32(eax + 0x10)); /* movd */
    mm6 = MMX_FROM32(MEM32(eax + 0x20)); /* movd */
    mm2 = MMX_MEM(eax + 0x18); /* movq */
    mm4 = MMX_MEM(eax + 0x28); /* movq */
    mm0 = MMX_PMADDWD(mm0, mm6); /* pmaddwd */
    esi = MEM32(ebp + -32);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 4);
    edx = ebx;
    MEM32(edi + esi * 8 + 4) = ebx;
    edi = ebx;
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
    MEM32(ebp + -56) = ebx;
    eax = edi;
    ebx = MEM32(ebx * 4 + 0x435820);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -52) = mm0.ud[0]; /* movd */
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
    edi = 0x435B30;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = mm1.ud[0]; /* movd */
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
    eax = MEM32(ebp + -36);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx ^ 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(ebp + -28);
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebp + -52);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -48) = edx;
    mm5 = MMX_FROM32(ecx); /* movd */
    mm6 = MMX_PSLLQ(mm6, 16u); /* psllq */
    mm0 = MMX_FROM32(MEM32(ebp + -48)); /* movd */
    mm5 = MMX_PSLLD(mm5, 16u); /* pslld */
    mm2 = MMX_MEM(eax + 8); /* movq */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm3 = MMX_MEM(0x441AB8); /* movq */
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
    esi = MEM32(ebp + -12);
    ebx = MEM32(ebp + -40);
    MEM16(ebx + esi * 2) = LO16(ecx);
    ebx = mm1.ud[0]; /* movd */
    mm1 = MMX_PSLLD(mm1, 16u); /* pslld */
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000C80E7; /* je: equal / zero */

loc_000C7F98: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x441AA8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x441AA8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x441AB0); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + -36);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x441A98)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -56);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x435860);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x441A98)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x441AA0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x441A80)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x441A70)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x441A70)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x441AA8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C8096; /* jge: greater or equal (signed >=) */

loc_000C8091: ;
    ebx = 0x10F;

loc_000C8096: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C80A3; /* jle: less or equal (signed <=) */

loc_000C809E: ;
    ebx = 0xA00;

loc_000C80A3: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x441A88); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x441A78)); /* por */
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
    goto loc_000C81AA;

loc_000C80E7: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x441A90)); /* movd */
    mm2 = mm1; /* movq */
    mm1 = MMX_PMULLW(mm1, mm3); /* pmullw */
    esi = MEM32(ebp + -36);
    eax = 0x7CFF0000;
    mm2 = MMX_PMULHW(mm2, mm3); /* pmulhw */
    mm1 = MMX_PUNPCKLWD(mm1, mm2); /* punpcklwd */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm1 = MMX_PACKSSDW(mm1, mm3); /* packssdw */
    mm0 = MMX_MEM(esi + 0x28); /* movq */
    mm7 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm0 = MMX_PSLLQ(mm0, 48u); /* psllq */
    ecx = 0xF6;
    ebx = MEM32(ebp + -56);
    mm4 = MMX_FROM32(ecx); /* movd */
    mm6 = mm0; /* movq */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    ebx = MEM32(ebx * 4 + 0x435860);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x441A80)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x441A88); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x441A70)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x441A70)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x441A78)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x441AA8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C8186; /* jge: greater or equal (signed >=) */

loc_000C8181: ;
    ebx = 0x10F;

loc_000C8186: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000C819A; /* jle: less or equal (signed <=) */

loc_000C8195: ;
    ebx = 0xA00;

loc_000C819A: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000C81AA: ;
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
    ebx = MEM32(ebp + -28);
    mm2 = MMX_PSUBSW(mm2, mm5); /* psubsw */
    MEM32(esi + 0xC) = eax;
    /* nop */
    MEM32(esi + 8) = ebx;
    /* nop */
    MEM32(esi + 0x10) = mm2.ud[0]; /* movd */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    edi = MEM32(ebp + -36);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x10);
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x300 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8214; /* jle: less or equal (signed <=) */

loc_000C820F: ;
    ebx = 0x300;

loc_000C8214: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFD00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFD00u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C8221; /* jge: greater or equal (signed >=) */

loc_000C821C: ;
    ebx = 0xFFFFFD00u;

loc_000C8221: ;
    ecx = 0x3C0;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C822E; /* jle: less or equal (signed <=) */

loc_000C822C: ;
    eax = ecx;

loc_000C822E: ;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C823A; /* jle: less or equal (signed <=) */

loc_000C8236: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000C823A: ;
    MEM16(edi + 0x10) = LO16(eax);
    MEM16(edi + 0x12) = LO16(ebx);
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -32);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C7E89; /* jne: not equal / not zero */

loc_000C825A: ;
    edi = MEM32(ebp + -24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = edi;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C7AA6; /* jne: not equal / not zero */

loc_000C826E: ;
    (void)0; /* emms - empty MMX state */
    goto loc_000C88CA;

loc_000C8275: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x78);
    edx = MEM32(esi + 0x70);
    MEM32(ebp + -48) = eax;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -52) = edx;
    edi = MEM32(ebp + -16);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = 0;
    MEM32(ebp + -12) = eax;

loc_000C829A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C88C8; /* je: equal / zero */

loc_000C82A2: ;
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8);
    esi = MEM32(ebp + -48);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C8349; /* jge: greater or equal (signed >=) */

loc_000C8344: ;
    ebx = 0x10F;

loc_000C8349: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8356; /* jle: less or equal (signed <=) */

loc_000C8351: ;
    ebx = 0xA00;

loc_000C8356: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 8);
    esi = MEM32(ebp + -48);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C840B; /* jge: greater or equal (signed >=) */

loc_000C8406: ;
    ebx = 0x10F;

loc_000C840B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8418; /* jle: less or equal (signed <=) */

loc_000C8413: ;
    ebx = 0xA00;

loc_000C8418: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 2) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 0x10);
    esi = MEM32(ebp + -48);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C84CE; /* jge: greater or equal (signed >=) */

loc_000C84C9: ;
    ebx = 0x10F;

loc_000C84CE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C84DB; /* jle: less or equal (signed <=) */

loc_000C84D6: ;
    ebx = 0xA00;

loc_000C84DB: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 4) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 0x18);
    esi = MEM32(ebp + -48);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C8591; /* jge: greater or equal (signed >=) */

loc_000C858C: ;
    ebx = 0x10F;

loc_000C8591: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C859E; /* jle: less or equal (signed <=) */

loc_000C8599: ;
    ebx = 0xA00;

loc_000C859E: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 6) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 4);
    esi = MEM32(ebp + -56);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C8654; /* jge: greater or equal (signed >=) */

loc_000C864F: ;
    ebx = 0x10F;

loc_000C8654: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8661; /* jle: less or equal (signed <=) */

loc_000C865C: ;
    ebx = 0xA00;

loc_000C8661: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 8) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 0xC);
    esi = MEM32(ebp + -56);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C8717; /* jge: greater or equal (signed >=) */

loc_000C8712: ;
    ebx = 0x10F;

loc_000C8717: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8724; /* jle: less or equal (signed <=) */

loc_000C871F: ;
    ebx = 0xA00;

loc_000C8724: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 0xA) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 0x14);
    esi = MEM32(ebp + -56);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C87DA; /* jge: greater or equal (signed >=) */

loc_000C87D5: ;
    ebx = 0x10F;

loc_000C87DA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C87E7; /* jle: less or equal (signed <=) */

loc_000C87E2: ;
    ebx = 0xA00;

loc_000C87E7: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 0xC) = LO16(edx);
    ebx = MEM32(ebp + -44);
    ebx = MEM32(ebx + eax * 8 + 0x1C);
    esi = MEM32(ebp + -56);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    edx = ebx;
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
    MEM32(ebp + -40) = ebx;
    eax = eax & 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebx * 4 + 0x4358A0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x435B30;
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
    edi = MEM32(ebp + -40);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi * 4 + 0x435920);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000C889D; /* jge: greater or equal (signed >=) */

loc_000C8898: ;
    ebx = 0x10F;

loc_000C889D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C88AA; /* jle: less or equal (signed <=) */

loc_000C88A5: ;
    ebx = 0xA00;

loc_000C88AA: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -52);
    MEM16(ebx + eax * 4 + 0xE) = LO16(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_000C829A;

loc_000C88C8: ;
    (void)0; /* emms - empty MMX state */

loc_000C88CA: ;
    eax = MEM32(ebp + -16);
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -4);
    esi = MEM32(ebp + 8);

loc_000C88D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000C8906; /* jge: greater or equal (signed >=) */

loc_000C88DD: ;
    /* nop */

loc_000C88E0: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx + edx * 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000C88F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C88EEu); } /* indirect call */
    }

loc_000C88F1: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esi + 0x70);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + ecx * 2) = LO16(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000C88E0; /* jl: less (signed <) */

loc_000C8906: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x50);
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8961; /* jne: not equal / not zero */

loc_000C8915: ;
    ecx = 0;
    ebx = MEM32(ebp + -4);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + -20);

loc_000C8923: ;
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + 8); /* movq */
    mm2 = mm0; /* movq */
    mm0 = MMX_PADDSW(mm0, mm1); /* paddsw */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm2 = MMX_PSUBSW(mm2, mm1); /* psubsw */
    mm3 = mm0; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm2); /* punpcklwd */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PUNPCKHWD(mm0, mm2); /* punpckhwd */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(edx + -16, mm3); /* movq */
    MMX_STORE(edx + -8, mm0); /* movq */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C8923; /* jl: less (signed <) */

loc_000C8951: ;
    (void)0; /* emms - empty MMX state */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000C8961: ;
    edx = ebx + -4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C89FA; /* jl: less (signed <) */

loc_000C896E: ;
    edi = edi;

loc_000C8970: ;
    ecx = MEM32(esi + 0x70);
    ecx = MEM32(ecx + eax * 4);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = ecx;
    ebx = MEM32(esi + 0x70);
    ebx = MEM32(ebx + eax * 4 + 8);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ebx;
    ecx = MEM32(esi + 0x70);
    ecx = ZX16(MEM16(ecx + eax * 4 + 2));
    MEM32(edi + 4) = ecx;
    ebx = MEM32(esi + 0x70);
    ebx = MEM32(ebx + eax * 4 + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx & 0xFFFF0000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ebx;
    ecx = MEM32(esi + 0x70);
    ecx = MEM32(ecx + eax * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = ecx;
    ebx = MEM32(esi + 0x70);
    ebx = MEM32(ebx + eax * 4 + 0xC);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ebx;
    ecx = MEM32(esi + 0x70);
    ecx = ZX16(MEM16(ecx + eax * 4 + 6));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    ebx = MEM32(esi + 0x70);
    ebx = MEM32(ebx + eax * 4 + 0xC);
    ebx = ebx & 0xFFFF0000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C8970; /* jle: less or equal (signed <=) */

loc_000C89F7: ;
    ebx = MEM32(ebp + -4);

loc_000C89FA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C8A37; /* je: equal / zero */

loc_000C89FE: ;
    edx = MEM32(esi + 0x70);
    ecx = MEM32(edx + eax * 4);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = ecx;
    edx = MEM32(esi + 0x70);
    edx = MEM32(edx + eax * 4 + 8);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = edx;
    ecx = MEM32(esi + 0x70);
    ecx = ZX16(MEM16(ecx + eax * 4 + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    edx = MEM32(esi + 0x70);
    eax = MEM32(edx + eax * 4 + 8);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = eax;

loc_000C8A37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C8A60
 * Original: 0x000C8A60 - 0x000C8B0C (172 bytes, 65 insns)
 * Folder: sound (between: 0x000C7596 and 0x000C8CD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8A60: ;
    eax = MEM32(0x46B1A4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8A72; /* jne: not equal / not zero */

loc_000C8A6D: ;
    PUSH32(esp, 0x000C8A72u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C8A72: ;
    edx = 0x70;
    ecx = eax;
    PUSH32(esp, 0x000C8A7Eu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C8A7E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8AFB; /* je: equal / zero */

loc_000C8A84: ;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi) = 0x426AC8;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x1C) = 0xC94A0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x38;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x6C) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = edi;
    MEM32(esi + 0x2C) = 0xA;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 4) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000C8AD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8AD3u); } /* indirect call */
    }

loc_000C8AD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8AE9; /* jne: not equal / not zero */

loc_000C8ADA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000C8AE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8AE0u); } /* indirect call */
    }

loc_000C8AE3: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C8AE9: ;
    PUSH32(esp, 0x000C8AEEu); RECOMP_ABI_CALL(0x000C8B30u, sub_000C8B30); /* call 0x000C8B30 */

loc_000C8AEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8B01; /* jne: not equal / not zero */

loc_000C8AF2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000C8AFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8AF8u); } /* indirect call */
    }

loc_000C8AFB: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C8B01: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(ecx) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8B10
 * Original: 0x000C8B10 - 0x000C8B2E (30 bytes, 12 insns)
 * Folder: sound (between: 0x000C7596 and 0x000C8CD0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000C8B1Bu); RECOMP_ABI_CALL(0x000C8B90u, sub_000C8B90); /* call 0x000C8B90 */

loc_000C8B1B: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C8B27; /* je: equal / zero */

loc_000C8B22: ;
    PUSH32(esp, 0x000C8B27u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C8B27: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C8B30
 * Original: 0x000C8B30 - 0x000C8B81 (81 bytes, 31 insns)
 * Folder: sound (between: 0x000C7596 and 0x000C8CD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8B30: ;
    ecx = MEM32(esi + 0x24);
    eax = 0x400;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = MEM32(0x46B1A4);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8B54; /* jne: not equal / not zero */

loc_000C8B4F: ;
    PUSH32(esp, 0x000C8B54u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C8B54: ;
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x000C8B5Du); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C8B5D: ;
    ecx = MEM32(esi + 0x24);
    edi = eax;
    eax = 0x400;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x34) = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x30) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8B90
 * Original: 0x000C8B90 - 0x000C8BB2 (34 bytes, 10 insns)
 * Folder: sound (between: 0x000C7596 and 0x000C8CD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8B90: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi) = 0x426AC8;
    if (CMP_EQ(_fa, _fb)) goto loc_000C8BA3; /* je: equal / zero */

loc_000C8B9E: ;
    PUSH32(esp, 0x000C8BA3u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C8BA3: ;
    MEM32(edi + 0x34) = 0;
    MEM32(edi) = 0x423E58;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8BC0
 * Original: 0x000C8BC0 - 0x000C8C12 (82 bytes, 33 insns)
 * Folder: sound (between: 0x000C7596 and 0x000C8CD0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8BC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000C8BCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8BCBu); } /* indirect call */
    }

loc_000C8BCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8BD9; /* jne: not equal / not zero */

loc_000C8BD2: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000C8BD9: ;
    ecx = edi;
    eax = MEM32(ecx);
    edx = esi + 0x10;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0x10 (16-bit) */
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000C8BD2; /* jne: not equal / not zero */

loc_000C8BFA: ;
    edx = ZX16(MEM16(edi + 6));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24) = edx;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), LO16(eax) (16-bit) */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x40) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C8C20
 * Original: 0x000C8C20 - 0x000C8C51 (49 bytes, 21 insns)
 * Folder: sound (between: 0x000C7596 and 0x000C8CD0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8C20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C8C28u); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000C8C28: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000C8C2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8C2Cu); } /* indirect call */
    }

loc_000C8C2F: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C8C39u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000C8C39: ;
    edx = ZX16(MEM16(esi + 0x16));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8C60
 * Original: 0x000C8C60 - 0x000C8CC2 (98 bytes, 40 insns)
 * Folder: sound (between: 0x000C7596 and 0x000C8CD0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8C60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8C77; /* je: equal / zero */

loc_000C8C6D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C8C77: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = edi + 0x10;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = eax;
    eax = esp + 8;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000C8C9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8C9Cu); } /* indirect call */
    }

loc_000C8C9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8CAE; /* jne: not equal / not zero */

loc_000C8CA3: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C8CAE: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x20) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C8CD0
 * Original: 0x000C8CD0 - 0x000C8CF7 (39 bytes, 13 insns)
 * Folder: sound (match: xbox-demo 0x000EBE10, between)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C8CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8CD0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8CF2; /* je: equal / zero */

loc_000C8CD7: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8CF2; /* jne: not equal / not zero */

loc_000C8CDF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x20) = 0;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000C8CF2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C8D00
 * Original: 0x000C8D00 - 0x000C8D74 (116 bytes, 33 insns)
 * Folder: sound (source: timaadpcm.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8D00: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000C8D43; /* je: equal / zero */

loc_000C8D22: ;
    PUSH32(esp, 0xC3);
    PUSH32(esp, 0x426DC8);
    PUSH32(esp, 0x426DB8);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C8D40u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C8D40: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8D43: ;
    ecx = MEM32(esp + 0x408);
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x6C) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = 0xA;
    POP32(esp, esi);
    PUSH32(esp, 0x000C8D6Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C8D6D: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C8D80
 * Original: 0x000C8D80 - 0x000C8DDA (90 bytes, 21 insns)
 * Folder: sound (source: timaadpcm.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8D80: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8DA4; /* jne: not equal / not zero */

loc_000C8D99: ;
    eax = MEM32(esp + 0x408);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C8DC5; /* je: equal / zero */

loc_000C8DA4: ;
    PUSH32(esp, 0xD1);
    PUSH32(esp, 0x426DC8);
    PUSH32(esp, 0x426D98);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C8DC2u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C8DC2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8DC5: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000C8DD1u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C8DD1: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C8DE0
 * Original: 0x000C8DE0 - 0x000C8DFE (30 bytes, 12 insns)
 * Folder: sound (between: 0x000C8D80 and 0x000C8E00)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C8DE0: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8DEC; /* jne: not equal / not zero */

loc_000C8DE6: ;
    eax = 0xFFFE0000u;
    esp += 4; return; /* ret */

loc_000C8DEC: ;
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C8DF9u); RECOMP_ABI_CALL(0x000AFC70u, sub_000AFC70); /* call 0x000AFC70 */

loc_000C8DF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C8E00
 * Original: 0x000C8E00 - 0x000C9404 (1540 bytes, 468 insns)
 * Folder: sound (source: timaadpcm.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C8E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C8E00: ;
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(esp + 0x438) = eax;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8E41; /* jne: not equal / not zero */

loc_000C8E20: ;
    PUSH32(esp, 0xEA);
    PUSH32(esp, 0x426DC8);
    PUSH32(esp, 0x4261F0);
    eax = esp + 0x48;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C8E3Eu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C8E3E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8E41: ;
    ebx = MEM32(esp + 0x448);
    MEM32(ebx) = esi;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8E6A; /* jne: not equal / not zero */

loc_000C8E52: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x430);
    PUSH32(esp, 0x000C8E61u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C8E61: ;
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C8E6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8E87; /* jne: not equal / not zero */

loc_000C8E6F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x430);
    PUSH32(esp, 0x000C8E7Eu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C8E7E: ;
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C8E87: ;
    eax = MEM32(esp + 0x444);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8E9C; /* jne: not equal / not zero */

loc_000C8E95: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C93EB;

loc_000C8E9C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), esi (32-bit) */
    ecx = MEM32(ebp + 0x64);
    if (CMP_EQ(_fa, _fb)) goto loc_000C8F10; /* je: equal / zero */

loc_000C8EA4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    edi = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000C8EE4; /* je: equal / zero */

loc_000C8EAB: ;
    MEM32(ebp + 0x64) = esi;
    ecx = MEM32(ebx);
    edx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C8ECE; /* jbe: below or equal (unsigned <=) */

loc_000C8EB7: ;
    PUSH32(esp, 0xFE);
    ecx = 0x426DC8;
    edx = 0x426D64;
    PUSH32(esp, 0x000C8ECBu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C8ECB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C8ECE: ;
    SET_LO16(edx, MEM16(ebp + 0x60));
    MEM16(edi) = LO16(edx);
    eax = MEM32(ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x448);

loc_000C8EE4: ;
    _fa = (uint32_t)(MEM8(ebp + 0x5C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x5C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8EFC; /* jne: not equal / not zero */

loc_000C8EEA: ;
    ecx = MEM32(ebx);
    edx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C8E95; /* ja: above (unsigned >) */

loc_000C8EF3: ;
    SET_LO16(edx, MEM16(ebp + 0x5E));
    MEM16(edi) = LO16(edx);
    MEM32(ebx) = MEM32(ebx) + 1;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C8EFC: ;
    MEM32(ebp + 8) = 2;
    MEM32(ebp + 0x6C) = esi;
    eax = 4;
    goto loc_000C93EB;

loc_000C8F10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = edi;
    MEM32(esp + 0x2C) = esi;
    esi = MEM32(ebp + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C8F42; /* jne: not equal / not zero */

loc_000C8F35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C8F42; /* je: equal / zero */

loc_000C8F39: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = 1;

loc_000C8F42: ;
    ecx = MEM32(ebp + 0x24);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x20) = esi;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_A(_fa, _fb)) goto loc_000C8F5A; /* ja: above (unsigned >) */

loc_000C8F56: ;
    MEM32(esp + 0x20) = edi;

loc_000C8F5A: ;
    edi = MEM32(esp + 0x20);
    edx = MEM32(ebp + 0x68);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x28) = edi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx + edi;
    MEM32(esp + 0x1C) = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x30) (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000C8F97; /* jbe: below or equal (unsigned <=) */

loc_000C8F84: ;
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C8F8Eu); RECOMP_ABI_CALL(0x000D7530u, sub_000D7530); /* call 0x000D7530 */

loc_000C8F8E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x34) = eax;
    MEM32(ebp + 0x30) = esi;

loc_000C8F97: ;
    eax = MEM32(ebp + 0x34);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C907E; /* je: equal / zero */

loc_000C8FA4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    edx = MEM32(esp + 0x448);
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edx + 4);
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C91DB; /* je: equal / zero */

loc_000C8FCE: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000C8FE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C8FDEu); } /* indirect call */
    }

loc_000C8FE1: ;
    MEM32(esp + 0x14) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C91AE; /* ja: above (unsigned >) */

loc_000C8FEF: ;
    ecx = ZX8(MEM8(eax + 0xC9414));
    { uint32_t _jt = MEM32(ecx * 4 + 0xC9404); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000C8FFDu) goto loc_000C8FFD;
    if (_jt == 0x000C9172u) goto loc_000C9172;
    if (_jt == 0x000C91A0u) goto loc_000C91A0;
    if (_jt == 0x000C91C5u) goto loc_000C91C5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000C8FFD: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C901A; /* je: equal / zero */

loc_000C9003: ;
    PUSH32(esp, 0x145);
    ecx = 0x426DC8;
    edx = 0x426D3C;
    PUSH32(esp, 0x000C9017u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9017: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C901A: ;
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000C903B; /* jae: above or equal (unsigned >=) */

loc_000C9024: ;
    PUSH32(esp, 0x146);
    ecx = 0x426DC8;
    edx = 0x426CF8;
    PUSH32(esp, 0x000C9038u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9038: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C903B: ;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C90E2; /* jne: not equal / not zero */

loc_000C9046: ;
    ecx = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x18);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebp + 0x44;
    edi = eax;
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
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C908D; /* je: equal / zero */

loc_000C9066: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x426CB8);

loc_000C9071: ;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C907Bu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C907B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C907E: ;
    MEM32(ebp + 8) = 2;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000C93EB;

loc_000C908D: ;
    edi = MEM32(ebp + 0x40);
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x50);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C90B1; /* je: equal / zero */

loc_000C90A4: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x426C70);
    goto loc_000C9071;

loc_000C90B1: ;
    SET_LO8(ecx, MEM8(ebp + 0x56));
    SET_LO16(edx, MEM16(ebp + 0x54));
    edi = MEM32(esp + 0x28);
    MEM8(ebp + 0x3A) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x5A));
    MEM8(ebp + 0x3E) = LO8(ecx);
    ecx = MEM32(esp + 0x18);
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(esp + 0x30);
    MEM16(ebp + 0x38) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + 0x58));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebp + 0x3C) = LO16(edx);
    MEM32(esp + 0x18) = ecx;

loc_000C90E2: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C91C5; /* je: equal / zero */

loc_000C90EE: ;
    ecx = MEM32(ebx);
    edx = MEM32(esp + 0x448);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C9114; /* jbe: below or equal (unsigned <=) */

loc_000C90FD: ;
    PUSH32(esp, 0x171);
    ecx = 0x426DC8;
    edx = 0x426C20;
    PUSH32(esp, 0x000C9111u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9111: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9114: ;
    esi = MEM32(esp + 0x18);
    ecx = edi;
    edi = MEM32(esp + 0x10);
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
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + esi;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000C914E; /* jae: above or equal (unsigned >=) */

loc_000C9137: ;
    PUSH32(esp, 0x17D);
    ecx = 0x426DC8;
    edx = 0x426BDC;
    PUSH32(esp, 0x000C914Bu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C914B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C914E: ;
    eax = MEM32(esp + 0x28);
    edi = MEM32(ebp + 0x2C);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x2C) = edi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = ecx;
    edi = eax;
    goto loc_000C91C5;

loc_000C9172: ;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9180; /* je: equal / zero */

loc_000C9179: ;
    eax = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9197; /* je: equal / zero */

loc_000C9180: ;
    PUSH32(esp, 0x184);
    ecx = 0x426DC8;
    edx = 0x426BA8;
    PUSH32(esp, 0x000C9194u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9194: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9197: ;
    MEM32(ebp + 8) = 2;
    goto loc_000C91C5;

loc_000C91A0: ;
    MEM32(ebp + 8) = 2;
    PUSH32(esp, 0x190);
    goto loc_000C91B3;

loc_000C91AE: ;
    PUSH32(esp, 0x193);

loc_000C91B3: ;
    edx = 0x41FFC0;
    ecx = 0x426DC8;
    PUSH32(esp, 0x000C91C2u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C91C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C91C5: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C91DB; /* je: equal / zero */

loc_000C91CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C91DB; /* je: equal / zero */

loc_000C91D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C93E2; /* jne: not equal / not zero */

loc_000C91DB: ;
    eax = MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C921D; /* je: equal / zero */

loc_000C91E2: ;
    ecx = MEM32(ebx);
    edx = MEM32(esp + 0x448);
    eax = MEM32(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C9209; /* jbe: below or equal (unsigned <=) */

loc_000C91F2: ;
    PUSH32(esp, 0x19D);
    ecx = 0x426DC8;
    edx = 0x426D64;
    PUSH32(esp, 0x000C9206u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9206: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9209: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(ebp + 0x60));
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM32(ebx) = MEM32(ebx) + 1;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000C921D: ;
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C9368; /* jbe: below or equal (unsigned <=) */

loc_000C922B: ;
    _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = esi;
    if ((_fa == 0)) goto loc_000C9368; /* je: equal / zero */

loc_000C923B: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9288; /* je: equal / zero */

loc_000C9243: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9267; /* je: equal / zero */

loc_000C924A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9267; /* je: equal / zero */

loc_000C9250: ;
    PUSH32(esp, 0x1AD);
    ecx = 0x426DC8;
    edx = 0x426B74;
    PUSH32(esp, 0x000C9264u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9264: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9267: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000C9283; /* jae: above or equal (unsigned >=) */

loc_000C926C: ;
    PUSH32(esp, 0x1AF);
    ecx = 0x426DC8;
    edx = 0x426B58;
    PUSH32(esp, 0x000C9280u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9280: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9283: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = esi;

loc_000C9288: ;
    ecx = MEM32(ebp + 0x24);
    edi = esi * 4;
    edi = edi >> LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C92FC; /* je: equal / zero */

loc_000C9298: ;
    edx = MEM32(ebx);
    eax = MEM32(esp + 0x448);
    ecx = MEM32(eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C92C0; /* jbe: below or equal (unsigned <=) */

loc_000C92A9: ;
    PUSH32(esp, 0x1B6);
    ecx = 0x426DC8;
    edx = 0x426B10;
    PUSH32(esp, 0x000C92BDu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C92BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C92C0: ;
    ecx = MEM32(ebp + 0x40);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    esi = ebp + 0x38;
    eax = edi;
    PUSH32(esp, 0x000C92D6u); RECOMP_ABI_CALL(0x000C9E40u, sub_000C9E40); /* call 0x000C9E40 */

loc_000C92D6: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    MEM32(ebx) = eax;
    goto loc_000C9300;

loc_000C92FC: ;
    edx = MEM32(esp + 0x18);

loc_000C9300: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x64) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9368; /* je: equal / zero */

loc_000C930B: ;
    ecx = MEM32(ebp + 0x40);
    PUSH32(esp, ecx);
    esi = ebp + 0x38;
    eax = 2;
    ecx = esp + 0x20;
    PUSH32(esp, 0x000C9320u); RECOMP_ABI_CALL(0x000C9E40u, sub_000C9E40); /* call 0x000C9E40 */

loc_000C9320: ;
    edx = MEM32(ebx);
    eax = MEM32(esp + 0x44C);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C934A; /* jbe: below or equal (unsigned <=) */

loc_000C9333: ;
    PUSH32(esp, 0x1C8);
    ecx = 0x426DC8;
    edx = 0x426D64;
    PUSH32(esp, 0x000C9347u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9347: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C934A: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(esp + 0x1C));
    SET_LO16(edx, MEM16(esp + 0x1E));
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM32(ebx) = MEM32(ebx) + 1;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebp + 0x60) = LO16(edx);

loc_000C9368: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C93E2; /* jne: not equal / not zero */

loc_000C936F: ;
    eax = MEM32(ebp + 0x64);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C93AF; /* je: equal / zero */

loc_000C9378: ;
    eax = MEM32(ebx);
    edx = MEM32(esp + 0x448);
    esi = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C93A1; /* ja: above (unsigned >) */

loc_000C9388: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(edx, MEM16(ebp + 0x60));
    MEM16(eax) = LO16(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM32(ebx) = MEM32(ebx) + 1;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x64) = ecx;
    goto loc_000C93AF;

loc_000C93A1: ;
    MEM32(esp + 0x14) = ecx;
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + 0x6C) = 1;

loc_000C93AF: ;
    _fa = (uint32_t)(MEM8(ebp + 0x5C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x5C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C93E2; /* jne: not equal / not zero */

loc_000C93B5: ;
    eax = MEM32(ebx);
    edx = MEM32(esp + 0x448);
    esi = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C93D4; /* ja: above (unsigned >) */

loc_000C93C5: ;
    SET_LO16(eax, MEM16(ebp + 0x5E));
    ecx = MEM32(esp + 0x10);
    MEM16(ecx) = LO16(eax);
    MEM32(ebx) = MEM32(ebx) + 1;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000C93E2;

loc_000C93D4: ;
    MEM32(esp + 0x14) = ecx;
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + 0x6C) = 1;

loc_000C93E2: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + edx;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);

loc_000C93EB: ;
    ecx = MEM32(esp + 0x440);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000C93FBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C93FB: ;
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C9235
 * Original: 0x000C9235 - 0x000C9404 (463 bytes, 140 insns)
 * Folder: sound (source: timaadpcm.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9235(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C9235: ;
    if (_flags /* je: equal / zero */) goto loc_000C9368;

loc_000C923B: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9288; /* je: equal / zero */

loc_000C9243: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9267; /* je: equal / zero */

loc_000C924A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9267; /* je: equal / zero */

loc_000C9250: ;
    PUSH32(esp, 0x1AD);
    ecx = 0x426DC8;
    edx = 0x426B74;
    PUSH32(esp, 0x000C9264u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9264: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9267: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000C9283; /* jae: above or equal (unsigned >=) */

loc_000C926C: ;
    PUSH32(esp, 0x1AF);
    ecx = 0x426DC8;
    edx = 0x426B58;
    PUSH32(esp, 0x000C9280u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9280: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9283: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = esi;

loc_000C9288: ;
    ecx = MEM32(ebp + 0x24);
    edi = esi * 4;
    edi = edi >> LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C92FC; /* je: equal / zero */

loc_000C9298: ;
    edx = MEM32(ebx);
    eax = MEM32(esp + 0x448);
    ecx = MEM32(eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C92C0; /* jbe: below or equal (unsigned <=) */

loc_000C92A9: ;
    PUSH32(esp, 0x1B6);
    ecx = 0x426DC8;
    edx = 0x426B10;
    PUSH32(esp, 0x000C92BDu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C92BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C92C0: ;
    ecx = MEM32(ebp + 0x40);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    esi = ebp + 0x38;
    eax = edi;
    PUSH32(esp, 0x000C92D6u); RECOMP_ABI_CALL(0x000C9E40u, sub_000C9E40); /* call 0x000C9E40 */

loc_000C92D6: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    MEM32(ebx) = eax;
    goto loc_000C9300;

loc_000C92FC: ;
    edx = MEM32(esp + 0x18);

loc_000C9300: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x64) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9368; /* je: equal / zero */

loc_000C930B: ;
    ecx = MEM32(ebp + 0x40);
    PUSH32(esp, ecx);
    esi = ebp + 0x38;
    eax = 2;
    ecx = esp + 0x20;
    PUSH32(esp, 0x000C9320u); RECOMP_ABI_CALL(0x000C9E40u, sub_000C9E40); /* call 0x000C9E40 */

loc_000C9320: ;
    edx = MEM32(ebx);
    eax = MEM32(esp + 0x44C);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C934A; /* jbe: below or equal (unsigned <=) */

loc_000C9333: ;
    PUSH32(esp, 0x1C8);
    ecx = 0x426DC8;
    edx = 0x426D64;
    PUSH32(esp, 0x000C9347u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9347: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C934A: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(esp + 0x1C));
    SET_LO16(edx, MEM16(esp + 0x1E));
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM32(ebx) = MEM32(ebx) + 1;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebp + 0x60) = LO16(edx);

loc_000C9368: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C93E2; /* jne: not equal / not zero */

loc_000C936F: ;
    eax = MEM32(ebp + 0x64);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C93AF; /* je: equal / zero */

loc_000C9378: ;
    eax = MEM32(ebx);
    edx = MEM32(esp + 0x448);
    esi = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C93A1; /* ja: above (unsigned >) */

loc_000C9388: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(edx, MEM16(ebp + 0x60));
    MEM16(eax) = LO16(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM32(ebx) = MEM32(ebx) + 1;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x64) = ecx;
    goto loc_000C93AF;

loc_000C93A1: ;
    MEM32(esp + 0x14) = ecx;
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + 0x6C) = 1;

loc_000C93AF: ;
    _fa = (uint32_t)(MEM8(ebp + 0x5C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x5C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C93E2; /* jne: not equal / not zero */

loc_000C93B5: ;
    eax = MEM32(ebx);
    edx = MEM32(esp + 0x448);
    esi = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000C93D4; /* ja: above (unsigned >) */

loc_000C93C5: ;
    SET_LO16(eax, MEM16(ebp + 0x5E));
    ecx = MEM32(esp + 0x10);
    MEM16(ecx) = LO16(eax);
    MEM32(ebx) = MEM32(ebx) + 1;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000C93E2;

loc_000C93D4: ;
    MEM32(esp + 0x14) = ecx;
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + 0x6C) = 1;

loc_000C93E2: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + edx;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x440);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000C93FBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C93FB: ;
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C9420
 * Original: 0x000C9420 - 0x000C9497 (119 bytes, 45 insns)
 * Folder: sound (between: 0x000C9235 and 0x000C9540)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9420: ;
    eax = MEM32(0x46B1A4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9432; /* jne: not equal / not zero */

loc_000C942D: ;
    PUSH32(esp, 0x000C9432u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C9432: ;
    edx = 0x30;
    ecx = eax;
    PUSH32(esp, 0x000C943Eu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C943E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9486; /* je: equal / zero */

loc_000C9444: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi) = 0x426E28;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x1C) = 0xC94A0;
    edx = MEM32(esi);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000C9479u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C9476u); } /* indirect call */
    }

loc_000C9479: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C948C; /* jne: not equal / not zero */

loc_000C947D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000C9486u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C9483u); } /* indirect call */
    }

loc_000C9486: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C948C: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = esi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C94A0
 * Original: 0x000C94A0 - 0x000C94BA (26 bytes, 11 insns)
 * Folder: sound (between: 0x000C9235 and 0x000C9540)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C94A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C94A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C94B8; /* je: equal / zero */

loc_000C94AB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000C94B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C94AFu); } /* indirect call */
    }

loc_000C94B2: ;
    MEM32(esi) = 0;

loc_000C94B8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C94C0
 * Original: 0x000C94C0 - 0x000C9506 (70 bytes, 29 insns)
 * Folder: sound (between: 0x000C9235 and 0x000C9540)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C94C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C94C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000C94CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C94CBu); } /* indirect call */
    }

loc_000C94CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C94FF; /* je: equal / zero */

loc_000C94D2: ;
    ecx = edi;
    eax = MEM32(ecx);
    edx = esi + 0x10;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0x10 (16-bit) */
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000C94FF; /* jne: not equal / not zero */

loc_000C94F3: ;
    edx = ZX16(MEM16(edi + 6));
    POP32(esp, edi);
    MEM32(esi + 0x2C) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000C94FF: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C9510
 * Original: 0x000C9510 - 0x000C9537 (39 bytes, 16 insns)
 * Folder: sound (between: 0x000C9235 and 0x000C9540)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9510: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C9518u); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000C9518: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000C951Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C951Cu); } /* indirect call */
    }

loc_000C951F: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C9529u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000C9529: ;
    edx = ZX16(MEM16(esi + 0x16));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9540
 * Original: 0x000C9540 - 0x000C956C (44 bytes, 21 insns)
 * Folder: sound (match: xbox-demo 0x000EC770, between)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9540: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    ebx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C9558u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000C9558: ;
    ecx = MEM32(esi + 0x2C);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x1C); PUSH32(esp, 0x000C9566u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C9563u); } /* indirect call */
    }

loc_000C9566: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C9570
 * Original: 0x000C9570 - 0x000C959F (47 bytes, 20 insns)
 * Folder: sound (match: xbox-demo 0x000EC7A0, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9570: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9580; /* jne: not equal / not zero */

loc_000C9579: ;
    eax = 0xFFFE0000u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C9580: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000C9588u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C9585u); } /* indirect call */
    }

loc_000C9588: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C959D; /* jl: less (signed <) */

loc_000C958C: ;
    ecx = MEM32(esi + 0x2C);
    esi = MEM32(esi + 0x18);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C959Au); RECOMP_ABI_CALL(0x000AFC70u, sub_000AFC70); /* call 0x000AFC70 */

loc_000C959A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C959D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C95A0
 * Original: 0x000C95A0 - 0x000C9680 (224 bytes, 75 insns)
 * Folder: sound (source: TPCM.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C95A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C95A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000C95C8; /* jne: not equal / not zero */

loc_000C95B4: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    eax = 2;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000C95C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C95DC; /* jne: not equal / not zero */

loc_000C95CD: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000C95DC: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, ebx);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = esi + 0x24;
    MEM32(edi) = edx;
    eax = MEM32(eax + 4);
    MEM32(esi + 0x28) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000C9603u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C9600u); } /* indirect call */
    }

loc_000C9603: ;
    ecx = MEM32(esi + 0x2C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0xC), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C962D; /* je: equal / zero */

loc_000C9616: ;
    PUSH32(esp, 0xCA);
    ecx = 0x426EC0;
    edx = 0x426E98;
    PUSH32(esp, 0x000C962Au); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C962A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C962D: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(esp + 0xC);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000C9658; /* jne: not equal / not zero */

loc_000C9641: ;
    PUSH32(esp, 0xD6);
    ecx = 0x426EC0;
    edx = 0x4264C0;
    PUSH32(esp, 0x000C9655u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9655: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9658: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C9677; /* jbe: below or equal (unsigned <=) */

loc_000C9660: ;
    PUSH32(esp, 0xD7);
    ecx = 0x426EC0;
    edx = 0x426E70;
    PUSH32(esp, 0x000C9674u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9674: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9677: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C9680
 * Original: 0x000C9680 - 0x000C96B4 (52 bytes, 18 insns)
 * Folder: sound (between: 0x000C95A0 and 0x000C96C0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000C9680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9680: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C968E; /* jne: not equal / not zero */

loc_000C9689: ;
    PUSH32(esp, 0x000C968Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C968E: ;
    edx = 0x54;
    ecx = eax;
    PUSH32(esp, 0x000C969Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C969A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C96A7; /* je: equal / zero */

loc_000C969E: ;
    PUSH32(esp, 0x000C96A3u); RECOMP_ABI_CALL(0x000C98F0u, sub_000C98F0); /* call 0x000C98F0 */

loc_000C96A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C96AB; /* jne: not equal / not zero */

loc_000C96A7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000C96AB: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C96C0
 * Original: 0x000C96C0 - 0x000C9749 (137 bytes, 58 insns)
 * Folder: sound (match: xbox-demo 0x000EC8E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C96C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C96C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C970F; /* je: equal / zero */

loc_000C96E5: ;
    mm0 = MMX_FROM32(MEM32(esi)); /* movd */
    /* nop */
    mm1 = MMX_FROM32(MEM32(esi)); /* movd */
    /* nop */
    mm2 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    /* nop */
    mm3 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PUNPCKLWD(mm0, mm1); /* punpcklwd */
    mm2 = MMX_PUNPCKLWD(mm2, mm3); /* punpcklwd */
    MMX_STORE(edi + -16, mm0); /* movq */
    /* nop */
    MMX_STORE(edi + -8, mm2); /* movq */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C96E5; /* jne: not equal / not zero */

loc_000C970F: ;
    ecx = MEM32(ebp + 0x10);
    /* nop */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = MEM32(ebp + -4);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    /* nop */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C9740; /* je: equal / zero */

loc_000C9720: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    SET_LO16(ebx, MEM16(esi));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C9720; /* jne: not equal / not zero */

loc_000C9740: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9750
 * Original: 0x000C9750 - 0x000C981C (204 bytes, 71 insns)
 * Folder: sound (match: xbox-demo 0x000EC970, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C9750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0;
    eax = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x10);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C97D6; /* je: equal / zero */

loc_000C977B: ;
    MEM16(0x768218) = LO16(eax);
    MEM16(0x76821A) = LO16(ebx);
    MEM16(0x76821C) = LO16(eax);
    MEM16(0x76821E) = LO16(ebx);
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x768218)); /* paddusw */

loc_000C979F: ;
    mm2 = MMX_FROM32(MEM32(esi)); /* movd */
    /* nop */
    mm3 = MMX_FROM32(MEM32(esi)); /* movd */
    /* nop */
    mm4 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm2 = MMX_PUNPCKLWD(mm2, mm3); /* punpcklwd */
    mm5 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm2 = MMX_PMULHW(mm2, mm0); /* pmulhw */
    mm4 = MMX_PUNPCKLWD(mm4, mm5); /* punpcklwd */
    mm2 = MMX_PSLLW(mm2, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, mm0); /* pmulhw */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    MMX_STORE(edi + -16, mm2); /* movq */
    /* nop */
    MMX_STORE(edi + -8, mm4); /* movq */
    /* nop */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C979F; /* jne: not equal / not zero */

loc_000C97D6: ;
    ecx = MEM32(ebp + 0x10);
    /* nop */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = MEM32(ebp + -4);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    /* nop */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C9813; /* je: equal / zero */

loc_000C97E7: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ebx = (uint32_t)(int32_t)SMEM16(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x14));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + 0x18));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xE) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFFFF0000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C97E7; /* jne: not equal / not zero */

loc_000C9813: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9820
 * Original: 0x000C9820 - 0x000C98EA (202 bytes, 68 insns)
 * Folder: sound (match: xbox-demo 0x000ECA40, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000C9820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = MEM32(ebp + 8);
    /* nop */
    edi = MEM32(ebp + 0xC);
    MEM16(0x768210) = LO16(edx);
    MEM32(ebp + -4) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C98B9; /* je: equal / zero */

loc_000C984F: ;
    MEM16(0x768214) = LO16(edx);
    edx = MEM32(ebp + 0x18);
    MEM16(0x768212) = LO16(edx);
    MEM16(0x768216) = LO16(edx);
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x768210)); /* paddusw */

loc_000C9871: ;
    mm2 = MMX_MEM(esi); /* movq */
    /* nop */
    mm3 = MMX_MEM(esi + 8); /* movq */
    mm2 = MMX_PMULHW(mm2, mm0); /* pmulhw */
    mm4 = MMX_MEM(esi + 0x10); /* movq */
    mm3 = MMX_PMULHW(mm3, mm0); /* pmulhw */
    mm5 = MMX_MEM(esi + 0x18); /* movq */
    mm4 = MMX_PMULHW(mm4, mm0); /* pmulhw */
    mm2 = MMX_PSLLW(mm2, 2u); /* psllw */
    mm5 = MMX_PMULHW(mm5, mm0); /* pmulhw */
    mm3 = MMX_PSLLW(mm3, 2u); /* psllw */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(edi + -32, mm2); /* movq */
    mm5 = MMX_PSLLW(mm5, 2u); /* psllw */
    MMX_STORE(edi + -24, mm3); /* movq */
    /* nop */
    MMX_STORE(edi + -16, mm4); /* movq */
    /* nop */
    MMX_STORE(edi + -8, mm5); /* movq */
    /* nop */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C9871; /* jne: not equal / not zero */

loc_000C98B9: ;
    ecx = MEM32(ebp + 0x10);
    /* nop */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = MEM32(ebp + -4);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    /* nop */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000C98E2; /* je: equal / zero */

loc_000C98CA: ;
    mm2 = MMX_FROM32(MEM32(esi)); /* movd */
    mm2 = MMX_PMULHW(mm2, mm0); /* pmulhw */
    mm2 = MMX_PSLLW(mm2, 2u); /* psllw */
    MEM32(edi) = mm2.ud[0]; /* movd */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000C98CA; /* jne: not equal / not zero */

loc_000C98E2: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000C98F0
 * Original: 0x000C98F0 - 0x000C993D (77 bytes, 21 insns)
 * Folder: sound (between: 0x000C9820 and 0x000C9990)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C98F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C98F0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x10000;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = 0x4000;
    MEM32(eax + 0x3C) = 0x4000;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x28) = 1;
    MEM32(eax) = 0x426F18;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9940
 * Original: 0x000C9940 - 0x000C995E (30 bytes, 12 insns)
 * Folder: sound (between: 0x000C9820 and 0x000C9990)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9940: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000C994Bu); RECOMP_ABI_CALL(0x000C9960u, sub_000C9960); /* call 0x000C9960 */

loc_000C994B: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C9957; /* je: equal / zero */

loc_000C9952: ;
    PUSH32(esp, 0x000C9957u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C9957: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C9960
 * Original: 0x000C9960 - 0x000C9989 (41 bytes, 11 insns)
 * Folder: sound (between: 0x000C9820 and 0x000C9990)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9960: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi) = 0x426F18;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9981; /* je: equal / zero */

loc_000C996E: ;
    PUSH32(esp, 0x000C9973u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000C9973: ;
    MEM32(edi + 0x4C) = 0;
    MEM32(edi + 0x50) = 0;

loc_000C9981: ;
    MEM32(edi) = 0x423E58;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9990
 * Original: 0x000C9990 - 0x000C9BF2 (610 bytes, 195 insns)
 * Folder: sound (source: TVolPanMMX.cpp)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C9990: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(esp + 0x408) = eax;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C99CC; /* je: equal / zero */

loc_000C99AB: ;
    PUSH32(esp, 0x1B3);
    PUSH32(esp, 0x426FB0);
    PUSH32(esp, 0x4261DC);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C99C9u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000C99C9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C99CC: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C99F7; /* jne: not equal / not zero */

loc_000C99D4: ;
    ecx = MEM32(esp + 0x414);
    MEM32(ecx) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000C99EEu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C99EE: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C99F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9A1F; /* jne: not equal / not zero */

loc_000C99FC: ;
    edx = MEM32(esp + 0x414);
    MEM32(edx) = 0;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000C9A16u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C9A16: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000C9A1F: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9A47; /* je: equal / zero */

loc_000C9A2B: ;
    eax = MEM32(ebx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C9A35u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000C9A35: ;
    ecx = MEM32(ebx + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(ebx + 0x30) = eax;
    PUSH32(esp, 0x000C9A42u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000C9A42: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C9A50;

loc_000C9A47: ;
    edx = MEM32(ebx + 0x40);
    eax = MEM32(ebx + 0x44);
    MEM32(ebx + 0x30) = edx;

loc_000C9A50: ;
    ecx = MEM32(ebx + 0x30);
    esi = MEM32(ebx + 0x20);
    edx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x418);
    MEM32(ebx + 0x34) = eax;
    eax = MEM32(ebx + 0x50);
    MEM32(ebx + 0x38) = ecx;
    MEM32(ebx + 0x3C) = edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000C9AA9; /* jae: above or equal (unsigned >=) */

loc_000C9A79: ;
    eax = MEM32(ebx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x50) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9A8F; /* je: equal / zero */

loc_000C9A83: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C9A8Au); RECOMP_ABI_CALL(0x000D7530u, sub_000D7530); /* call 0x000D7530 */

loc_000C9A8A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C9AA6;

loc_000C9A8F: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9A9D; /* jne: not equal / not zero */

loc_000C9A98: ;
    PUSH32(esp, 0x000C9A9Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000C9A9D: ;
    edx = esi;
    ecx = eax;
    PUSH32(esp, 0x000C9AA6u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000C9AA6: ;
    MEM32(ebx + 0x4C) = eax;

loc_000C9AA9: ;
    eax = MEM32(edi);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, ebp);
    esi = ebx + 0x48;
    MEM32(esi) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000C9AC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C9ABDu); } /* indirect call */
    }

loc_000C9AC0: ;
    edx = MEM32(esp + 0x10);
    ebp = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000C9AE5; /* jbe: below or equal (unsigned <=) */

loc_000C9ACA: ;
    PUSH32(esp, 0x1DE);
    ecx = 0x426FB0;
    edx = 0x426F84;
    PUSH32(esp, 0x000C9ADEu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9ADE: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9AE5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9B07; /* jne: not equal / not zero */

loc_000C9AEA: ;
    PUSH32(esp, 0x1DF);
    ecx = 0x426FB0;
    edx = 0x4264C0;
    PUSH32(esp, 0x000C9AFEu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9AFE: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C9B18;

loc_000C9B07: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9B11; /* je: equal / zero */

loc_000C9B0C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9B18; /* jne: not equal / not zero */

loc_000C9B11: ;
    MEM32(ebx + 8) = 2;

loc_000C9B18: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9B2A; /* jne: not equal / not zero */

loc_000C9B1C: ;
    ecx = MEM32(esp + 0x420);
    MEM32(ecx) = edx;
    goto loc_000C9BD7;

loc_000C9B2A: ;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edi = MEM32(edi + 4);
    esi = MEM32(ebx + 0x4C);
    if (CMP_NE(_fa, _fb)) goto loc_000C9B6F; /* jne: not equal / not zero */

loc_000C9B38: ;
    eax = MEM32(ebx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9B5A; /* jne: not equal / not zero */

loc_000C9B42: ;
    _fa = (uint32_t)(MEM32(ebx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x3C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9B5A; /* jne: not equal / not zero */

loc_000C9B47: ;
    eax = MEM32(ebx + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C9B55u); RECOMP_ABI_CALL(0x000C96C0u, sub_000C96C0); /* call 0x000C96C0 */

loc_000C9B55: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C9BCA;

loc_000C9B5A: ;
    ecx = MEM32(ebx + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C9B6Du); RECOMP_ABI_CALL(0x000C9750u, sub_000C9750); /* call 0x000C9750 */

loc_000C9B6D: ;
    goto loc_000C9BC7;

loc_000C9B6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9B8F; /* je: equal / zero */

loc_000C9B74: ;
    PUSH32(esp, 0x241);
    ecx = 0x426FB0;
    edx = 0x426F68;
    PUSH32(esp, 0x000C9B88u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000C9B88: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9B8F: ;
    eax = MEM32(ebx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9BB4; /* jne: not equal / not zero */

loc_000C9B99: ;
    _fa = (uint32_t)(MEM32(ebx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x3C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9BB4; /* jne: not equal / not zero */

loc_000C9B9E: ;
    ecx = MEM32(ebx + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ecx;
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
    goto loc_000C9BCA;

loc_000C9BB4: ;
    ecx = MEM32(ebx + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C9BC7u); RECOMP_ABI_CALL(0x000C9820u, sub_000C9820); /* call 0x000C9820 */

loc_000C9BC7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9BCA: ;
    ecx = MEM32(esp + 0x420);
    edx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;

loc_000C9BD7: ;
    ecx = MEM32(esp + 0x414);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000C9BE9u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000C9BE9: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C9C00
 * Original: 0x000C9C00 - 0x000C9CEE (238 bytes, 76 insns)
 * Folder: sound (match: xbox-demo 0x000ECDB0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C9C00: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9CEA; /* je: equal / zero */

loc_000C9C12: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x20);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 2);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(edx * 4 + 0x435C78);
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000C9CE0; /* jle: less or equal (signed <=) */

loc_000C9C3E: ;
    MEM32(esp + 0x1C) = eax;

loc_000C9C42: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9C4C; /* je: equal / zero */

loc_000C9C46: ;
    eax = MEM32(esp + 0x10);
    goto loc_000C9C5F;

loc_000C9C4C: ;
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000C9C5F: ;
    ecx = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(eax * 4 + 0x435C38);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ebx;
    if ((_fas >= 0)) goto loc_000C9C80; /* jns: not sign (positive) */

loc_000C9C7C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C9C8A;

loc_000C9C80: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x58 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C9C8A; /* jle: less or equal (signed <=) */

loc_000C9C85: ;
    edx = 0x58;

loc_000C9C8A: ;
    ecx = eax;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + ecx + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C9CA1; /* je: equal / zero */

loc_000C9C9D: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000C9CA3;

loc_000C9CA1: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9CA3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C9CB2; /* jle: less or equal (signed <=) */

loc_000C9CAB: ;
    esi = 0x7FFF;
    goto loc_000C9CBF;

loc_000C9CB2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C9CBF; /* jge: greater or equal (signed >=) */

loc_000C9CBA: ;
    esi = 0xFFFF8000u;

loc_000C9CBF: ;
    edi = MEM32(edx * 4 + 0x435C78);
    eax = MEM32(esp + 0x1C);
    MEM16(ebp) = LO16(esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_000C9C42; /* jne: not equal / not zero */

loc_000C9CDC: ;
    ecx = MEM32(esp + 0x28);

loc_000C9CE0: ;
    POP32(esp, edi);
    MEM16(ecx) = LO16(esi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx + 2) = LO8(edx);
    POP32(esp, ebx);

loc_000C9CEA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C9CF0
 * Original: 0x000C9CF0 - 0x000C9E3F (335 bytes, 99 insns)
 * Folder: sound (match: xbox-demo 0x000ECEA0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C9CF0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9E3B; /* je: equal / zero */

loc_000C9D03: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    ebx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(esp + 0x20) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ebx * 4 + 0x435C78);
    MEM32(esp + 0x10) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    MEM32(esp + 0x24) = edx;
    edx = (uint32_t)(int32_t)SMEM8(esi + 6);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(edx * 4 + 0x435C78);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x28) = ecx;
    ebp = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_000C9E21; /* jle: less or equal (signed <=) */

loc_000C9D4E: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = eax;

loc_000C9D53: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C9D76; /* je: equal / zero */

loc_000C9D57: ;
    esi = MEM32(esp + 0x1C);
    eax = (uint32_t)(int32_t)SMEM8(esi);
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    edx = ebx;
    MEM32(esp + 0x1C) = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_000C9D82;

loc_000C9D76: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x20);

loc_000C9D82: ;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(eax * 4 + 0x435C38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(eax * 4 + 0x435C38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_000C9D92; /* jns: not sign (positive) */

loc_000C9D8E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C9D9C;

loc_000C9D92: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x58 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C9D9C; /* jle: less or equal (signed <=) */

loc_000C9D97: ;
    edx = 0x58;

loc_000C9D9C: ;
    esi = eax;
    esi = esi & 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi + esi + 1;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((3) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C9DB3; /* je: equal / zero */

loc_000C9DAF: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000C9DB5;

loc_000C9DB3: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9DB5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C9DC4; /* jle: less or equal (signed <=) */

loc_000C9DBD: ;
    ecx = 0x7FFF;
    goto loc_000C9DD1;

loc_000C9DC4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000C9DD1; /* jge: greater or equal (signed >=) */

loc_000C9DCC: ;
    ecx = 0xFFFF8000u;

loc_000C9DD1: ;
    esi = MEM32(esp + 0x24);
    eax = MEM32(edx * 4 + 0x435C78);
    MEM16(esi) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x24) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9DF8; /* je: equal / zero */

loc_000C9DEA: ;
    MEM32(esp + 0x14) = ecx;
    ebx = edx;
    MEM32(esp + 0x28) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000C9E09;

loc_000C9DF8: ;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x2C) = eax;
    ebp = 1;

loc_000C9E09: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = eax;
    if ((_fa != 0)) goto loc_000C9D53; /* jne: not equal / not zero */

loc_000C9E1C: ;
    esi = MEM32(esp + 0x38);
    POP32(esp, edi);

loc_000C9E21: ;
    SET_LO16(eax, MEM16(esp + 0x10));
    SET_LO16(ecx, MEM16(esp + 0x14));
    MEM8(esi + 2) = LO8(ebx);
    MEM16(esi) = LO16(eax);
    MEM16(esi + 4) = LO16(ecx);
    MEM8(esi + 6) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000C9E3B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7340
 * Original: 0x000D7340 - 0x000D7369 (41 bytes, 11 insns)
 * Folder: sound (match: xbox-demo 0x000ED220, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7340: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FF);
    PUSH32(esp, 0x46E7A8);
    PUSH32(esp, 0x000D7359u); RECOMP_ABI_CALL(0x0034819Du, sub_0034819D); /* call 0x0034819D */

loc_000D7359: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x46EFA7) = 0;
    eax = 0x46E7A8;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7370
 * Original: 0x000D7370 - 0x000D7431 (193 bytes, 58 insns)
 * Folder: sound (between: 0x000D7340 and 0x000D7550)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000D7370: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x404));
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D73B9; /* jne: not equal / not zero */

loc_000D7386: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x428DA8);
    PUSH32(esp, 0x428D9C);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D73A1u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D73A1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D73B2u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D73B2: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x404)) >> 32) & 1);
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D73B9: ;
    eax = MEM32(0x46B1A4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40C);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (2) _cf = (int)(((esi) >> ((2) - 1)) & 1);
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D73D4; /* jne: not equal / not zero */

loc_000D73CF: ;
    PUSH32(esp, 0x000D73D4u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D73D4: ;
    edx = ebx + esi * 4 + 8;
    ecx = eax;
    PUSH32(esp, 0x000D73DFu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000D73DF: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D73F9; /* jne: not equal / not zero */

loc_000D73E5: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D73F2u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D73F2: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x404)) >> 32) & 1);
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D73F9: ;
    eax = esi * 4;
    ecx = eax + -1;
    PUSH32(esp, edi);
    edi = edx + 8;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    MEM32(eax + -4) = edx;
    MEM32(eax + -8) = ebx;
    POP32(esp, esi);
    PUSH32(esp, 0x000D742Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D742A: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x404)) >> 32) & 1);
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7440
 * Original: 0x000D7440 - 0x000D7506 (198 bytes, 66 insns)
 * Folder: sound (between: 0x000D7340 and 0x000D7550)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7440: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x414);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x40C) = eax;
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000D74A4; /* jne: not equal / not zero */

loc_000D7462: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x428DA8);
    PUSH32(esp, 0x428D9C);
    eax = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D747Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D747D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D748C; /* je: equal / zero */

loc_000D7484: ;
    esi = MEM32(ebp + -4);
    PUSH32(esp, 0x000D748Cu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000D748C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000D749Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D749D: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D74A4: ;
    ecx = MEM32(esp + 0x41C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D74B2u); RECOMP_ABI_CALL(0x000D7370u, sub_000D7370); /* call 0x000D7370 */

loc_000D74B2: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D74E1; /* je: equal / zero */

loc_000D74BF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D74ED; /* je: equal / zero */

loc_000D74C3: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) ebx = eax; /* cmovb */
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebp;
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
    edi = MEM32(esp + 0x10);

loc_000D74E1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D74ED; /* je: equal / zero */

loc_000D74E5: ;
    esi = MEM32(ebp + -4);
    PUSH32(esp, 0x000D74EDu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000D74ED: ;
    ecx = MEM32(esp + 0x414);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000D74FFu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D74FF: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7510
 * Original: 0x000D7510 - 0x000D7529 (25 bytes, 7 insns)
 * Folder: sound (between: 0x000D7340 and 0x000D7550)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7510: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D751E; /* jne: not equal / not zero */

loc_000D7519: ;
    PUSH32(esp, 0x000D751Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D751E: ;
    edx = MEM32(esp + 4);
    ecx = eax;
    g_seh_ebp = ebp; sub_00016060(); return; /* tail jmp 0x00016060 */

}

/**
 * sub_000D7530
 * Original: 0x000D7530 - 0x000D754F (31 bytes, 10 insns)
 * Folder: sound (between: 0x000D7340 and 0x000D7550)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7530: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D753E; /* jne: not equal / not zero */

loc_000D7539: ;
    PUSH32(esp, 0x000D753Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D753E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000D754Eu); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000D754E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7550
 * Original: 0x000D7550 - 0x000D75C0 (112 bytes, 29 insns)
 * Folder: sound (source: Sndmem.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7550: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D7597; /* jne: not equal / not zero */

loc_000D7566: ;
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x428D58);
    PUSH32(esp, 0x428D4C);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7581u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D7581: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D7590u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7590: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D7597: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D75A5; /* jne: not equal / not zero */

loc_000D75A0: ;
    PUSH32(esp, 0x000D75A5u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D75A5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D75ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D75AAu); } /* indirect call */
    }

loc_000D75AD: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D75B9u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D75B9: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D75C0
 * Original: 0x000D75C0 - 0x000D75E4 (36 bytes, 18 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D75C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D75C0: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    PUSH32(esp, edi);
    edi = edx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(ebx));
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D75F0
 * Original: 0x000D75F0 - 0x000D777D (397 bytes, 123 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D75F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D75F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369240);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -16) = esp;
    eax = ebp + -276;
    edi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D762Bu); RECOMP_ABI_CALL(0x000D7B80u, sub_000D7B80); /* call 0x000D7B80 */

loc_000D762B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D76A6; /* je: equal / zero */

loc_000D7634: ;
    MEM32(ebp + -4) = ebx;
    ecx = MEM32(0x46B18C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7648; /* jne: not equal / not zero */

loc_000D7641: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7646u); RECOMP_ABI_CALL(0x00093250u, sub_00093250); /* call 0x00093250 */

loc_000D7646: ;
    ecx = eax;

loc_000D7648: ;
    PUSH32(esp, 0x41);
    edx = ebp + -276;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7656u); RECOMP_ABI_CALL(0x00094170u, sub_00094170); /* call 0x00094170 */

loc_000D7656: ;
    edi = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7667u); RECOMP_ABI_CALL(0x000958C0u, sub_000958C0); /* call 0x000958C0 */

loc_000D7667: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D76FD; /* je: equal / zero */

loc_000D7671: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D767F; /* jne: not equal / not zero */

loc_000D767A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D767Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D767F: ;
    edx = 0x10;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D768Bu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000D768B: ;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = ebx;
    goto loc_000D7764;

    eax = 0xD76FD;
    esp += 4; return; /* ret */

loc_000D76A6: ;
    _fa = (uint32_t)(MEM32(0x758B9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758B9C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D76C2; /* jne: not equal / not zero */

loc_000D76AE: ;
    _fa = (uint32_t)(MEM32(0x758BA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758BA4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D76C2; /* jne: not equal / not zero */

loc_000D76B6: ;
    MEM32(ebp + -4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D76C2u); RECOMP_ABI_CALL(0x000D7C20u, sub_000D7C20); /* call 0x000D7C20 */

loc_000D76C2: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ebx) (8-bit) */
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D76E6; /* je: equal / zero */

loc_000D76CF: ;
    /* nop */

loc_000D76D0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D76D9u); RECOMP_ABI_CALL(0x003490BDu, sub_003490BD); /* call 0x003490BD */

loc_000D76D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D76D0; /* jne: not equal / not zero */

loc_000D76E6: ;
    ecx = MEM32(0x758B9C);
    PUSH32(esp, 0x900000);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D76F7u); RECOMP_ABI_CALL(0x000E35D0u, sub_000E35D0); /* call 0x000E35D0 */

loc_000D76F7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7714; /* jne: not equal / not zero */

loc_000D76FD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000D7764;

    MEM32(0x758BA4) = 1;
    eax = 0xD76FD;
    esp += 4; return; /* ret */

loc_000D7714: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7722; /* jne: not equal / not zero */

loc_000D771D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7722u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D7722: ;
    edx = 0x10;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D772Eu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000D772E: ;
    edx = MEM32(0x758634);
    edi = eax;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7757u); RECOMP_ABI_CALL(0x00095940u, sub_00095940); /* call 0x00095940 */

loc_000D7757: ;
    ecx = MEM32(0x758634);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7762u); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000D7762: ;
    eax = edi;

loc_000D7764: ;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(ebp + -20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7776u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7776: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D769B
 * Original: 0x000D769B - 0x000D777D (226 bytes, 70 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D769B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D769B: ;
    eax = 0xD76FD;
    esp += 4; return; /* ret */

    _fa = (uint32_t)(MEM32(0x758B9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758B9C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D76C2; /* jne: not equal / not zero */

loc_000D76AE: ;
    _fa = (uint32_t)(MEM32(0x758BA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758BA4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D76C2; /* jne: not equal / not zero */

loc_000D76B6: ;
    MEM32(ebp + -4) = 2;
    PUSH32(esp, 0x000D76C2u); RECOMP_ABI_CALL(0x000D7C20u, sub_000D7C20); /* call 0x000D7C20 */

loc_000D76C2: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ebx) (8-bit) */
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D76E6; /* je: equal / zero */

loc_000D76CF: ;
    /* nop */

loc_000D76D0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D76D9u); RECOMP_ABI_CALL(0x003490BDu, sub_003490BD); /* call 0x003490BD */

loc_000D76D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D76D0; /* jne: not equal / not zero */

loc_000D76E6: ;
    ecx = MEM32(0x758B9C);
    PUSH32(esp, 0x900000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D76F7u); RECOMP_ABI_CALL(0x000E35D0u, sub_000E35D0); /* call 0x000E35D0 */

loc_000D76F7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7714; /* jne: not equal / not zero */

loc_000D76FD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000D7764;

    MEM32(0x758BA4) = 1;
    eax = 0xD76FD;
    esp += 4; return; /* ret */

loc_000D7714: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7722; /* jne: not equal / not zero */

loc_000D771D: ;
    PUSH32(esp, 0x000D7722u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D7722: ;
    edx = 0x10;
    ecx = eax;
    PUSH32(esp, 0x000D772Eu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000D772E: ;
    edx = MEM32(0x758634);
    edi = eax;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x000D7757u); RECOMP_ABI_CALL(0x00095940u, sub_00095940); /* call 0x00095940 */

loc_000D7757: ;
    ecx = MEM32(0x758634);
    PUSH32(esp, 0x000D7762u); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000D7762: ;
    eax = edi;

loc_000D7764: ;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0x000D7776u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7776: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7702
 * Original: 0x000D7702 - 0x000D777D (123 bytes, 38 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7702(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7702: ;
    MEM32(0x758BA4) = 1;
    eax = 0xD76FD;
    esp += 4; return; /* ret */

    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7722; /* jne: not equal / not zero */

loc_000D771D: ;
    PUSH32(esp, 0x000D7722u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D7722: ;
    edx = 0x10;
    ecx = eax;
    PUSH32(esp, 0x000D772Eu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000D772E: ;
    edx = MEM32(0x758634);
    edi = eax;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x000D7757u); RECOMP_ABI_CALL(0x00095940u, sub_00095940); /* call 0x00095940 */

loc_000D7757: ;
    ecx = MEM32(0x758634);
    PUSH32(esp, 0x000D7762u); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000D7762: ;
    eax = edi;

loc_000D7764: ;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0x000D7776u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7776: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7780
 * Original: 0x000D7780 - 0x000D782B (171 bytes, 74 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7780: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D7825; /* je: equal / zero */

loc_000D7793: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D77A8; /* je: equal / zero */

loc_000D779A: ;
    PUSH32(esp, ebx);
    eax = ebp;
    ebx = ecx;
    PUSH32(esp, 0x000D77A4u); RECOMP_ABI_CALL(0x000E3110u, sub_000E3110); /* call 0x000E3110 */

loc_000D77A4: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D77A8: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7825; /* je: equal / zero */

loc_000D77AE: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7825; /* je: equal / zero */

loc_000D77B5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000D77BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D77B7u); } /* indirect call */
    }

loc_000D77BA: ;
    ecx = MEM32(edi + 0xC);
    edx = ecx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D77C8; /* jbe: below or equal (unsigned <=) */

loc_000D77C4: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;

loc_000D77C8: ;
    eax = MEM32(edi + 8);
    edx = MEM32(0x758634);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D77D9u); RECOMP_ABI_CALL(0x00095940u, sub_00095940); /* call 0x00095940 */

loc_000D77D9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D7808; /* jbe: below or equal (unsigned <=) */

loc_000D77DF: ;
    /* nop */

loc_000D77E0: ;
    ecx = MEM32(0x758634);
    PUSH32(esp, 0x000D77EBu); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000D77EB: ;
    eax = MEM32(0x758634);
    ecx = esi + ebx;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    edx = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7802u); RECOMP_ABI_CALL(0x00095BE0u, sub_00095BE0); /* call 0x00095BE0 */

loc_000D7802: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D77E0; /* jb: below (unsigned <) */

loc_000D7808: ;
    eax = MEM32(edi + 0xC);
    ebx = MEM32(0x758634);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = eax;
    edi = MEM32(edi + 8);
    PUSH32(esp, 0x000D781Eu); RECOMP_ABI_CALL(0x00095A30u, sub_00095A30); /* call 0x00095A30 */

loc_000D781E: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D7825: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7830
 * Original: 0x000D7830 - 0x000D7965 (309 bytes, 136 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000D7840; /* jne: not equal / not zero */

loc_000D783A: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D7840: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D78F1; /* je: equal / zero */

loc_000D784C: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    if ((_fa == 0)) goto loc_000D78CA; /* je: equal / zero */

loc_000D7852: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D78B8; /* je: equal / zero */

loc_000D7855: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D7860; /* je: equal / zero */

loc_000D7858: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D7860: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000D786D; /* jae: above or equal (unsigned >=) */

loc_000D7867: ;
    ebp = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000D786F;

loc_000D786D: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D786F: ;
    edi = MEM32(esi + 4);
    ebx = MEM32(0x758634);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_A(_fa, _fb)) ebp = eax; /* cmova */
    PUSH32(esp, 0x000D7882u); RECOMP_ABI_CALL(0x00095A30u, sub_00095A30); /* call 0x00095A30 */

loc_000D7882: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);

loc_000D788F: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(0x758634);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x000D78A6u); RECOMP_ABI_CALL(0x00095940u, sub_00095940); /* call 0x00095940 */

loc_000D78A6: ;
    ecx = MEM32(0x758634);
    PUSH32(esp, 0x000D78B1u); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000D78B1: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D78B8: ;
    PUSH32(esp, esi);
    eax = 1;
    ecx = ebx;
    PUSH32(esp, 0x000D78C5u); RECOMP_ABI_CALL(0x000E3170u, sub_000E3170); /* call 0x000E3170 */

loc_000D78C5: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D78CA: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    ebp = ebx;
    ebx = MEM32(0x758634);
    if (CMP_A(_fa, _fb)) ebp = eax; /* cmova */
    PUSH32(esp, 0x000D78E2u); RECOMP_ABI_CALL(0x00095A30u, sub_00095A30); /* call 0x00095A30 */

loc_000D78E2: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, edx);
    goto loc_000D788F;

loc_000D78F1: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D78FE; /* jne: not equal / not zero */

loc_000D78F7: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D78FE: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D793B; /* je: equal / zero */

loc_000D7903: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D7936; /* je: equal / zero */

loc_000D7906: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D78F7; /* jne: not equal / not zero */

loc_000D7909: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000D790Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D790Bu); } /* indirect call */
    }

loc_000D790E: ;
    esi = eax;
    ecx = edx;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D792D; /* ja: above (unsigned >) */

loc_000D7919: ;
    if (CMP_B(_fa, _fb)) goto loc_000D791F; /* jb: below (unsigned <) */

loc_000D791B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000D792D; /* jae: above or equal (unsigned >=) */

loc_000D791F: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000D7926u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7923u); } /* indirect call */
    }

loc_000D7926: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0xC) = eax;
    goto loc_000D793E;

loc_000D792D: ;
    MEM32(edi + 0xC) = 0;
    goto loc_000D793E;

loc_000D7936: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + ebx;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D793E;

loc_000D793B: ;
    MEM32(edi + 0xC) = ebx;

loc_000D793E: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000D7945u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7942u); } /* indirect call */
    }

loc_000D7945: ;
    esi = MEM32(edi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D795E; /* jb: below (unsigned <) */

loc_000D794E: ;
    if (CMP_A(_fa, _fb)) goto loc_000D7954; /* ja: above (unsigned >) */

loc_000D7950: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D795E; /* jbe: below or equal (unsigned <=) */

loc_000D7954: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000D795Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7958u); } /* indirect call */
    }

loc_000D795B: ;
    MEM32(edi + 0xC) = eax;

loc_000D795E: ;
    eax = MEM32(edi + 0xC);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7970
 * Original: 0x000D7970 - 0x000D79CE (94 bytes, 39 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7970: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D79CD; /* je: equal / zero */

loc_000D7974: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7985; /* je: equal / zero */

loc_000D797B: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7983u); RECOMP_ABI_CALL(0x000D79D0u, sub_000D79D0); /* call 0x000D79D0 */

loc_000D7983: ;
    goto loc_000D79B7;

loc_000D7985: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D79AA; /* je: equal / zero */

loc_000D798D: ;
    ecx = esi;
    PUSH32(esp, 0x000D7994u); RECOMP_ABI_CALL(0x00098C90u, sub_00098C90); /* call 0x00098C90 */

loc_000D7994: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D79A2; /* jne: not equal / not zero */

loc_000D799D: ;
    PUSH32(esp, 0x000D79A2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D79A2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D79AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D79A7u); } /* indirect call */
    }

loc_000D79AA: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D79B7; /* je: equal / zero */

loc_000D79B1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D79B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D79B5u); } /* indirect call */
    }

loc_000D79B7: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D79C5; /* jne: not equal / not zero */

loc_000D79C0: ;
    PUSH32(esp, 0x000D79C5u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D79C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D79CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D79CAu); } /* indirect call */
    }

loc_000D79CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D79D0
 * Original: 0x000D79D0 - 0x000D7A34 (100 bytes, 39 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D79D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D79D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7A10; /* je: equal / zero */

loc_000D79DD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x758634);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D79EAu); RECOMP_ABI_CALL(0x00095A30u, sub_00095A30); /* call 0x00095A30 */

loc_000D79EA: ;
    esi = MEM32(ebp + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7A0E; /* je: equal / zero */

loc_000D79F1: ;
    ecx = esi;
    PUSH32(esp, 0x000D79F8u); RECOMP_ABI_CALL(0x00098C90u, sub_00098C90); /* call 0x00098C90 */

loc_000D79F8: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7A06; /* jne: not equal / not zero */

loc_000D7A01: ;
    PUSH32(esp, 0x000D7A06u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D7A06: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D7A0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7A0Bu); } /* indirect call */
    }

loc_000D7A0E: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000D7A10: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D7A2D; /* je: equal / zero */

loc_000D7A17: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7A25; /* jne: not equal / not zero */

loc_000D7A20: ;
    PUSH32(esp, 0x000D7A25u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D7A25: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D7A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7A2Au); } /* indirect call */
    }

loc_000D7A2D: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D7A40
 * Original: 0x000D7A40 - 0x000D7B29 (233 bytes, 74 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D7A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369230);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    MEM32(ebp + -16) = esp;
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D7A93; /* je: equal / zero */

loc_000D7A75: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7A7D; /* jne: not equal / not zero */

loc_000D7A7A: ;
    MEM8(esi) = 0x2F;

loc_000D7A7D: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7A86u); RECOMP_ABI_CALL(0x003490BDu, sub_003490BD); /* call 0x003490BD */

loc_000D7A86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7A75; /* jne: not equal / not zero */

loc_000D7A93: ;
    ecx = ebp + -276;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7AA0u); RECOMP_ABI_CALL(0x000D7B80u, sub_000D7B80); /* call 0x000D7B80 */

loc_000D7AA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7AB1; /* je: equal / zero */

loc_000D7AA7: ;
    eax = 1;
    g_seh_ebp = ebp; sub_000D7B3B(); return; /* tail jmp 0x000D7B3B */

loc_000D7AB1: ;
    eax = MEM32(0x758B9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7AD8; /* jne: not equal / not zero */

loc_000D7ABA: ;
    eax = MEM32(0x758BA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000D7B39(); return; } /* jne: not equal / not zero */

loc_000D7AC3: ;
    MEM32(ebp + -4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7ACFu); RECOMP_ABI_CALL(0x000D7C20u, sub_000D7C20); /* call 0x000D7C20 */

loc_000D7ACF: ;
    eax = MEM32(0x758B9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000D7B39(); return; } /* je: equal / zero */

loc_000D7AD8: ;
    edx = MEM32(eax + 4);
    esi = eax + 4;
    ebx = ebp + -280;
    MEM32(ebp + -280) = edi;
    MEM32(ebp + -288) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7AF5u); RECOMP_ABI_CALL(0x000E3860u, sub_000E3860); /* call 0x000E3860 */

loc_000D7AF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    MEM32(ebp + -280) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000D7B54(); return; } /* je: equal / zero */

loc_000D7AFF: ;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7B09u); RECOMP_ABI_CALL(0x0034761Du, sub_0034761D); /* call 0x0034761D */

loc_000D7B09: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000D7B54(); return; } /* jl: less (signed <) */

loc_000D7B10: ;
    edx = MEM32(ebp + -288);
    eax = ebp + -280;
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    g_seh_ebp = ebp; sub_000D7B3B(); return; /* tail jmp 0x000D7B3B */

}

/**
 * sub_000D7B29
 * Original: 0x000D7B29 - 0x000D7B39 (16 bytes, 3 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B29(void)
{

loc_000D7B29: ;
    MEM32(0x758BA4) = 1;
    eax = 0xD7B39;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7B39
 * Original: 0x000D7B39 - 0x000D7B54 (27 bytes, 11 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7B39: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0x000D7B4Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7B4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7B3B
 * Original: 0x000D7B3B - 0x000D7B54 (25 bytes, 10 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7B3B: ;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0x000D7B4Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7B4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7B54
 * Original: 0x000D7B54 - 0x000D7B80 (44 bytes, 21 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7B54: ;
    eax = MEM32(esi);
    edx = MEM32(ebp + -288);
    MEM32(ebp + -284) = eax;
    eax = ebp + -284;
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    g_seh_ebp = ebp; sub_000D7B3B(); return; /* tail jmp 0x000D7B3B */

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
 * sub_000D7B80
 * Original: 0x000D7B80 - 0x000D7C1A (154 bytes, 44 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7B80: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x100) = eax;
    eax = MEM32(0x758460);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7C05; /* jne: not equal / not zero */

loc_000D7B9B: ;
    eax = MEM32(esp + 0x108);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x428E10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7BB2u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D7BB2: ;
    eax = MEM32(0x46B18C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7BC3; /* jne: not equal / not zero */

loc_000D7BBE: ;
    PUSH32(esp, 0x000D7BC3u); RECOMP_ABI_CALL(0x00093250u, sub_00093250); /* call 0x00093250 */

loc_000D7BC3: ;
    PUSH32(esp, esi);
    edx = esp + 4;
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x000D7BD0u); RECOMP_ABI_CALL(0x00093790u, sub_00093790); /* call 0x00093790 */

loc_000D7BD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D7C05; /* je: equal / zero */

loc_000D7BD5: ;
    edx = MEM32(esp + 0x10C);
    eax = esp;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000D7BE3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7BE3; /* jne: not equal / not zero */

loc_000D7BED: ;
    eax = 1;
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x000D7BFEu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7BFE: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D7C05: ;
    ecx = MEM32(esp + 0x100);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D7C13u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7C13: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7C0E
 * Original: 0x000D7C0E - 0x000D7C1A (12 bytes, 3 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7C0E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7C0E: ;
    PUSH32(esp, 0x000D7C13u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7C13: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7C20
 * Original: 0x000D7C20 - 0x000D7D08 (232 bytes, 67 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D7C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369226);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    MEM32(ebp + -20) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    if (CMP_NE(_fa, _fb)) goto loc_000D7C5A; /* jne: not equal / not zero */

loc_000D7C55: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7C5Au); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D7C5A: ;
    edx = 0x14;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7C66u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000D7C66: ;
    MEM32(ebp + -284) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000D7C84; /* je: equal / zero */

loc_000D7C77: ;
    PUSH32(esp, eax);
    edi = 0x428E00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7C82u); RECOMP_ABI_CALL(0x000E3390u, sub_000E3390); /* call 0x000E3390 */

loc_000D7C82: ;
    goto loc_000D7C86;

loc_000D7C84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D7C86: ;
    MEM32(0x758B9C) = eax;
    MEM32(ebp + -4) = 1;
    eax = MEM32(0x758F24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x428E00);
    ecx = ebp + -280;
    PUSH32(esp, 0x428DF8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7CAEu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D7CAE: ;
    ecx = MEM32(0x46B1A4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7CC2; /* jne: not equal / not zero */

loc_000D7CBB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7CC0u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D7CC0: ;
    ecx = eax;

loc_000D7CC2: ;
    edx = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7CCCu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000D7CCC: ;
    MEM32(ebp + -284) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ebp + -4) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_000D7CE8; /* je: equal / zero */

loc_000D7CDA: ;
    PUSH32(esp, eax);
    edi = ebp + -280;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7CE6u); RECOMP_ABI_CALL(0x000E3390u, sub_000E3390); /* call 0x000E3390 */

loc_000D7CE6: ;
    goto loc_000D7CEA;

loc_000D7CE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D7CEA: ;
    MEM32(0x758BA0) = eax;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(ebp + -20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7D01u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7D01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7D08
 * Original: 0x000D7D08 - 0x000D7D0E (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D7550 and 0x000D7D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7D08(void)
{

loc_000D7D08: ;
    eax = 0xD7CEF;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7D10
 * Original: 0x000D7D10 - 0x000D8001 (753 bytes, 239 insns)
 * Folder: sound (source: sndstrmfile.c)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D7D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3691FB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x30C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -16) = esp;
    eax = ebp + -276;
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7D4Bu); RECOMP_ABI_CALL(0x000D7B80u, sub_000D7B80); /* call 0x000D7B80 */

loc_000D7D4B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7F44; /* je: equal / zero */

loc_000D7D58: ;
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_000D7D60: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7D60; /* jne: not equal / not zero */

loc_000D7D67: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000D7D85; /* jae: above or equal (unsigned >=) */

loc_000D7D6E: ;
    PUSH32(esp, 0xEB);
    ecx = 0x428E48;
    edx = 0x428E18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7D82u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000D7D82: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7D85: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x41FB20);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7D92u); RECOMP_ABI_CALL(0x00348A20u, sub_00348A20); /* call 0x00348A20 */

loc_000D7D92: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000D7DAF; /* jne: not equal / not zero */

loc_000D7D9B: ;
    edx = ebp + -276;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000D7DA3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7DA3; /* jne: not equal / not zero */

loc_000D7DAD: ;
    goto loc_000D7DE8;

loc_000D7DAF: ;
    MEM32(ebp + -276) = 0x2F642F;
    edx = eax;
    goto loc_000D7DC0;

    /* nop */

loc_000D7DC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7DC0; /* jne: not equal / not zero */

loc_000D7DC7: ;
    edi = ebp + -276;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000D7DD0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7DD0; /* jne: not equal / not zero */

loc_000D7DD8: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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

loc_000D7DE8: ;
    eax = ebp + -276;
    edx = eax + 1;

loc_000D7DF1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7DF1; /* jne: not equal / not zero */

loc_000D7DF8: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7E17; /* jle: less or equal (signed <=) */

loc_000D7E00: ;
    _fa = (uint32_t)(MEM8(ebp + ecx + -276)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + ecx + -276), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7E12; /* jne: not equal / not zero */

loc_000D7E0A: ;
    MEM8(ebp + ecx + -276) = 0x2F;

loc_000D7E12: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7E00; /* jl: less (signed <) */

loc_000D7E17: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7E1Cu); RECOMP_ABI_CALL(0x00016050u, sub_00016050); /* call 0x00016050 */

loc_000D7E1C: ;
    edx = 0x10;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7E28u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000D7E28: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7EB1; /* je: equal / zero */

loc_000D7E32: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7E37u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_000D7E37: ;
    MEM32(ebp + -280) = ebx;
    MEM8(ebp + -792) = 0;
    MEM8(ebp + -536) = 0;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, eax);
    ebx = ebp + -792;
    ecx = ebp + -276;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7E60u); RECOMP_ABI_CALL(0x00094310u, sub_00094310); /* call 0x00094310 */

loc_000D7E60: ;
    MEM8(ebp + -4) = 1;
    ecx = MEM32(0x758634);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ebx;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = ebp + -792;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000D7E7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7E7Cu); } /* indirect call */
    }

loc_000D7E7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 8) = eax;
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000D7EB9; /* jne: not equal / not zero */

loc_000D7E89: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7E97; /* jne: not equal / not zero */

loc_000D7E92: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7E97u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D7E97: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D7E9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7E9Cu); } /* indirect call */
    }

loc_000D7E9F: ;
    eax = ebp + -792;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7EB1u); RECOMP_ABI_CALL(0x00093210u, sub_00093210); /* call 0x00093210 */

loc_000D7EB1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000D7FE8;

loc_000D7EB9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7ECB; /* jne: not equal / not zero */

loc_000D7EBF: ;
    MEM32(ebp + 8) = 0x19000;
    MEM8(esi + 4) = LO8(ebx);
    goto loc_000D7ECF;

loc_000D7ECB: ;
    MEM8(esi + 4) = 1;

loc_000D7ECF: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7EDCu); RECOMP_ABI_CALL(0x000958C0u, sub_000958C0); /* call 0x000958C0 */

loc_000D7EDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D7F20; /* jne: not equal / not zero */

loc_000D7EE3: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7EF0; /* je: equal / zero */

loc_000D7EEA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D7EF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7EEEu); } /* indirect call */
    }

loc_000D7EF0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7EFE; /* jne: not equal / not zero */

loc_000D7EF9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7EFEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D7EFE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D7F06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7F03u); } /* indirect call */
    }

loc_000D7F06: ;
    eax = ebp + -792;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7F18u); RECOMP_ABI_CALL(0x00093210u, sub_00093210); /* call 0x00093210 */

loc_000D7F18: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000D7FE8;

loc_000D7F20: ;
    eax = ebp + -792;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7F32u); RECOMP_ABI_CALL(0x00093210u, sub_00093210); /* call 0x00093210 */

loc_000D7F32: ;
    eax = esi;
    goto loc_000D7FE8;

    eax = 0xD7E9F;
    esp += 4; return; /* ret */

loc_000D7F44: ;
    _fa = (uint32_t)(MEM32(0x758B9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758B9C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7EB1; /* je: equal / zero */

loc_000D7F50: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F5E; /* jne: not equal / not zero */

loc_000D7F59: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7F5Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D7F5E: ;
    edx = 0x10;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7F6Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000D7F6A: ;
    ebx = eax;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D7F91; /* je: equal / zero */

loc_000D7F73: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F7B; /* jne: not equal / not zero */

loc_000D7F78: ;
    MEM8(edi) = 0x2F;

loc_000D7F7B: ;
    eax = (uint32_t)(int32_t)SMEM8(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7F84u); RECOMP_ABI_CALL(0x003490BDu, sub_003490BD); /* call 0x003490BD */

loc_000D7F84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F73; /* jne: not equal / not zero */

loc_000D7F91: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7FA9; /* jne: not equal / not zero */

loc_000D7F99: ;
    MEM32(ebp + 8) = 0x19000;
    edi = MEM32(ebp + 8);
    MEM8(ebx + 4) = 0;
    goto loc_000D7FAD;

loc_000D7FA9: ;
    MEM8(ebx + 4) = 1;

loc_000D7FAD: ;
    ecx = MEM32(0x758B9C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7FBAu); RECOMP_ABI_CALL(0x000E35D0u, sub_000E35D0); /* call 0x000E35D0 */

loc_000D7FBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = eax;
    MEM32(ebx + 8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000D7FE6; /* jne: not equal / not zero */

loc_000D7FC7: ;
    ecx = MEM32(0x758BA0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7FD4u); RECOMP_ABI_CALL(0x000E35D0u, sub_000E35D0); /* call 0x000E35D0 */

loc_000D7FD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D7FE6; /* jne: not equal / not zero */

loc_000D7FDA: ;
    esi = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7FE1u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000D7FE1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000D7FE8;

loc_000D7FE6: ;
    eax = ebx;

loc_000D7FE8: ;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(ebp + -20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D7FFAu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7FFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7F39
 * Original: 0x000D7F39 - 0x000D8001 (200 bytes, 66 insns)
 * Folder: sound (between: 0x000D7D10 and 0x000D8010)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7F39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7F39: ;
    eax = 0xD7E9F;
    esp += 4; return; /* ret */

    _fa = (uint32_t)(MEM32(0x758B9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758B9C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000D7EB1(); return; } /* je: equal / zero */

loc_000D7F50: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F5E; /* jne: not equal / not zero */

loc_000D7F59: ;
    PUSH32(esp, 0x000D7F5Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D7F5E: ;
    edx = 0x10;
    ecx = eax;
    PUSH32(esp, 0x000D7F6Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000D7F6A: ;
    ebx = eax;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D7F91; /* je: equal / zero */

loc_000D7F73: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F7B; /* jne: not equal / not zero */

loc_000D7F78: ;
    MEM8(edi) = 0x2F;

loc_000D7F7B: ;
    eax = (uint32_t)(int32_t)SMEM8(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7F84u); RECOMP_ABI_CALL(0x003490BDu, sub_003490BD); /* call 0x003490BD */

loc_000D7F84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F73; /* jne: not equal / not zero */

loc_000D7F91: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7FA9; /* jne: not equal / not zero */

loc_000D7F99: ;
    MEM32(ebp + 8) = 0x19000;
    edi = MEM32(ebp + 8);
    MEM8(ebx + 4) = 0;
    goto loc_000D7FAD;

loc_000D7FA9: ;
    MEM8(ebx + 4) = 1;

loc_000D7FAD: ;
    ecx = MEM32(0x758B9C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D7FBAu); RECOMP_ABI_CALL(0x000E35D0u, sub_000E35D0); /* call 0x000E35D0 */

loc_000D7FBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = eax;
    MEM32(ebx + 8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000D7FE6; /* jne: not equal / not zero */

loc_000D7FC7: ;
    ecx = MEM32(0x758BA0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D7FD4u); RECOMP_ABI_CALL(0x000E35D0u, sub_000E35D0); /* call 0x000E35D0 */

loc_000D7FD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D7FE6; /* jne: not equal / not zero */

loc_000D7FDA: ;
    esi = ebx;
    PUSH32(esp, 0x000D7FE1u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000D7FE1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000D7FE8;

loc_000D7FE6: ;
    eax = ebx;

loc_000D7FE8: ;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0x000D7FFAu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7FFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8000
 * Original: 0x000D8000 - 0x000D8001 (1 bytes, 1 insns)
 * Folder: sound (between: 0x000D7D10 and 0x000D8010)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8000(void)
{

loc_000D8000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8010
 * Original: 0x000D8010 - 0x000D80AD (157 bytes, 39 insns)
 * Folder: sound (source: sndstrmfile.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8010: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D8079; /* je: equal / zero */

loc_000D8026: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8079; /* je: equal / zero */

loc_000D802B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8049; /* je: equal / zero */

loc_000D8031: ;
    PUSH32(esp, 0x000D8036u); RECOMP_ABI_CALL(0x000E31F0u, sub_000E31F0); /* call 0x000E31F0 */

loc_000D8036: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D8042u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D8042: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D8049: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = edx;
    edx = MEM32(0x758634);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D805Bu); RECOMP_ABI_CALL(0x00095940u, sub_00095940); /* call 0x00095940 */

loc_000D805B: ;
    ecx = MEM32(0x758634);
    PUSH32(esp, 0x000D8066u); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000D8066: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D8072u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D8072: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D8079: ;
    PUSH32(esp, 0x160);
    PUSH32(esp, 0x428E48);
    PUSH32(esp, 0x41FFC0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D8097u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D8097: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D80A6u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D80A6: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D80B0
 * Original: 0x000D80B0 - 0x000D812F (127 bytes, 35 insns)
 * Folder: sound (source: sndstrmfile.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D80B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D80B0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D80FB; /* je: equal / zero */

loc_000D80C6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D80FB; /* je: equal / zero */

loc_000D80CB: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x758634);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D80F6; /* je: equal / zero */

loc_000D80D9: ;
    edi = MEM32(eax + 4);

loc_000D80DC: ;
    PUSH32(esp, 0x000D80E1u); RECOMP_ABI_CALL(0x00095A30u, sub_00095A30); /* call 0x00095A30 */

loc_000D80E1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D80EFu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D80EF: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D80F6: ;
    edi = MEM32(ecx + 0xC);
    goto loc_000D80DC;

loc_000D80FB: ;
    PUSH32(esp, 0x17B);
    PUSH32(esp, 0x428E48);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D8119u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D8119: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D8128u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D8128: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D8130
 * Original: 0x000D8130 - 0x000D8334 (516 bytes, 164 insns)
 * Folder: sound (source: sndstrmfile.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D8130: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x414);
    PUSH32(esp, edi);
    edi = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x40C) = eax;
    eax = MEM32(esp + 0x414);
    ebx = ecx;
    MEM32(ebp) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000D82F8; /* je: equal / zero */

loc_000D8166: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D82F8; /* je: equal / zero */

loc_000D816F: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8219; /* je: equal / zero */

loc_000D817A: ;
    ecx = ZX8(MEM8(edi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D8184u); RECOMP_ABI_CALL(0x000E3220u, sub_000E3220); /* call 0x000E3220 */

loc_000D8184: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D8190; /* ja: above (unsigned >) */

loc_000D8189: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD8334); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000D8190u) goto loc_000D8190;
    if (_jt == 0x000D81A9u) goto loc_000D81A9;
    if (_jt == 0x000D81C5u) goto loc_000D81C5;
    if (_jt == 0x000D81E1u) goto loc_000D81E1;
    if (_jt == 0x000D81FDu) goto loc_000D81FD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D8190: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D81A2u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D81A2: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D81A9: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D81BEu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D81BE: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D81C5: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 3;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D81DAu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D81DA: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D81E1: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 4;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D81F6u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D81F6: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D81FD: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D8212u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D8212: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D8219: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8243; /* jne: not equal / not zero */

loc_000D821D: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_000D822A: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ecx;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D823Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D823C: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D8243: ;
    SET_LO8(ecx, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(edi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_000D82A1; /* jne: not equal / not zero */

loc_000D824D: ;
    edx = MEM32(0x758634);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D825Bu); RECOMP_ABI_CALL(0x00095BE0u, sub_00095BE0); /* call 0x00095BE0 */

loc_000D825B: ;
    ecx = MEM32(0x758634);
    MEM32(ebp) = eax;
    PUSH32(esp, 0x000D8269u); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000D8269: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), ebx (32-bit) */
    eax = MEM32(edi + 0xC);
    eax = MEM32(eax + 0x14);
    if (CMP_AE(_fa, _fb)) goto loc_000D8281; /* jae: above or equal (unsigned >=) */

loc_000D8274: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = ecx + ecx + 2;
    goto loc_000D822A;

loc_000D8281: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = edx;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D829Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D829A: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D82A1: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D81E1; /* jl: less (signed <) */

loc_000D82A9: ;
    PUSH32(esp, eax);
    eax = MEM32(0x758634);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D82B6u); RECOMP_ABI_CALL(0x00095BE0u, sub_00095BE0); /* call 0x00095BE0 */

loc_000D82B6: ;
    ecx = MEM32(0x758634);
    MEM32(ebp) = eax;
    PUSH32(esp, 0x000D82C4u); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000D82C4: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8190; /* jne: not equal / not zero */

loc_000D82D2: ;
    edi = MEM32(ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D82F1u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D82F1: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D82F8: ;
    PUSH32(esp, 0x1A7);
    PUSH32(esp, 0x428E48);
    PUSH32(esp, 0x41FFC0);
    edx = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D8316u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D8316: ;
    ecx = MEM32(esp + 0x420);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 4;
    POP32(esp, ebx);
    PUSH32(esp, 0x000D832Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D832D: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D8350
 * Original: 0x000D8350 - 0x000D840E (190 bytes, 49 insns)
 * Folder: sound (source: sndstrmfile.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8350: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D83D8; /* je: equal / zero */

loc_000D8366: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D83D8; /* je: equal / zero */

loc_000D836B: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8389; /* je: equal / zero */

loc_000D8371: ;
    PUSH32(esp, 0x000D8376u); RECOMP_ABI_CALL(0x000E32F0u, sub_000E32F0); /* call 0x000E32F0 */

loc_000D8376: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D8382u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D8382: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D8389: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(0x758634);
    edx = MEM32(ecx + 0x18);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0xC));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D83C0; /* jb: below (unsigned <) */

loc_000D839E: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D83C0; /* jne: not equal / not zero */

loc_000D83A5: ;
    eax = 1;
    eax = ZX8(LO8(eax));
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D83B9u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D83B9: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D83C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX8(LO8(eax));
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D83D1u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D83D1: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D83D8: ;
    PUSH32(esp, 0x213);
    PUSH32(esp, 0x428E48);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D83F6u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D83F6: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D8407u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D8407: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D8410
 * Original: 0x000D8410 - 0x000D8501 (241 bytes, 72 insns)
 * Folder: sound (source: sndstrmfile.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8410: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D84CD; /* je: equal / zero */

loc_000D842A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D84CD; /* je: equal / zero */

loc_000D8433: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D846A; /* je: equal / zero */

loc_000D8439: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D8441u); RECOMP_ABI_CALL(0x000D79D0u, sub_000D79D0); /* call 0x000D79D0 */

loc_000D8441: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D844F; /* jne: not equal / not zero */

loc_000D844A: ;
    PUSH32(esp, 0x000D844Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D844F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D8457u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8454u); } /* indirect call */
    }

loc_000D8457: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D8463u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D8463: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D846A: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000D8472u); RECOMP_ABI_CALL(0x000D80B0u, sub_000D80B0); /* call 0x000D80B0 */

loc_000D8472: ;
    esi = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8496; /* je: equal / zero */

loc_000D8479: ;
    ecx = esi;
    PUSH32(esp, 0x000D8480u); RECOMP_ABI_CALL(0x00098C90u, sub_00098C90); /* call 0x00098C90 */

loc_000D8480: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D848E; /* jne: not equal / not zero */

loc_000D8489: ;
    PUSH32(esp, 0x000D848Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D848E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D8496u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8493u); } /* indirect call */
    }

loc_000D8496: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D84A4; /* je: equal / zero */

loc_000D849E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D84A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D84A2u); } /* indirect call */
    }

loc_000D84A4: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D84B2; /* jne: not equal / not zero */

loc_000D84AD: ;
    PUSH32(esp, 0x000D84B2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000D84B2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D84BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D84B7u); } /* indirect call */
    }

loc_000D84BA: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D84C6u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D84C6: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D84CD: ;
    PUSH32(esp, 0x231);
    PUSH32(esp, 0x428E48);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D84EBu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D84EB: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D84FAu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D84FA: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
