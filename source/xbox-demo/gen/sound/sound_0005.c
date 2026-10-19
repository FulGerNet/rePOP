/**
 * PoP SoT xbox-demo - sound, chunk 5
 * Ubisoft Dare sound engine and Jade's glue to it
 * Functions: 107 (0x000E9100 - 0x0026FC10)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000E9100
 * Original: 0x000E9100 - 0x000E9120 (32 bytes, 9 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9100: ;
    eax = 0x68;
    PUSH32(esp, 0x000E910Au); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000E910A: ;
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ecx + 0x84) = eax;
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9120
 * Original: 0x000E9120 - 0x000E9184 (100 bytes, 31 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E9120: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x32F2C8;
    if (CMP_EQ(_fa, _fb)) goto loc_000E9132; /* je: equal / zero */

loc_000E912D: ;
    PUSH32(esp, 0x000E9132u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000E9132: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E913E; /* je: equal / zero */

loc_000E9139: ;
    PUSH32(esp, 0x000E913Eu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000E913E: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E914A; /* je: equal / zero */

loc_000E9145: ;
    PUSH32(esp, 0x000E914Au); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000E914A: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9156; /* je: equal / zero */

loc_000E9151: ;
    PUSH32(esp, 0x000E9156u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000E9156: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9165; /* je: equal / zero */

loc_000E9160: ;
    PUSH32(esp, 0x000E9165u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000E9165: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9171; /* je: equal / zero */

loc_000E916C: ;
    PUSH32(esp, 0x000E9171u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000E9171: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E917D; /* je: equal / zero */

loc_000E9178: ;
    PUSH32(esp, 0x000E917Du); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000E917D: ;
    ecx = esi;
    g_seh_ebp = ebp; sub_000E7380(); return; /* tail jmp 0x000E7380 */

}

/**
 * sub_000E9190
 * Original: 0x000E9190 - 0x000E91D3 (67 bytes, 26 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9190: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x000E919Fu); RECOMP_ABI_CALL(0x000DA290u, sub_000DA290); /* call 0x000DA290 */

loc_000E919F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E91CB; /* je: equal / zero */

loc_000E91A5: ;
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 4), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E91BA; /* jne: not equal / not zero */

loc_000E91AC: ;
    eax = ZX16(MEM16(ebx + 6));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x88) = eax;
    goto loc_000E91BC;

loc_000E91BA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E91BC: ;
    eax = ZX16(MEM16(ebx + 6));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, 0x000E91C8u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000E91C8: ;
    MEM32(edi + 0x54) = eax;

loc_000E91CB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E91E0
 * Original: 0x000E91E0 - 0x000E91E6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E91E0(void)
{

loc_000E91E0: ;
    eax = 0x481;
    esp += 4; return; /* ret */

}

/**
 * sub_000E91F0
 * Original: 0x000E91F0 - 0x000E9246 (86 bytes, 36 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E91F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E91F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9207; /* je: equal / zero */

loc_000E91FD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E9207: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = esp + 8;
    eax = edi;
    PUSH32(esp, 0x000E9217u); RECOMP_ABI_CALL(0x000DA300u, sub_000DA300); /* call 0x000DA300 */

loc_000E9217: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000E9223u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E9220u); } /* indirect call */
    }

loc_000E9223: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9232; /* jne: not equal / not zero */

loc_000E9227: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E9232: ;
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
 * sub_000E9250
 * Original: 0x000E9250 - 0x000E928F (63 bytes, 30 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9250: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x58);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000E9263u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E9260u); } /* indirect call */
    }

loc_000E9263: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E927E; /* je: equal / zero */

loc_000E9267: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E9272u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E9270u); } /* indirect call */
    }

loc_000E9272: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9285; /* jne: not equal / not zero */

loc_000E9277: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E927Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E927Cu); } /* indirect call */
    }

loc_000E927E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000E9285: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E9290
 * Original: 0x000E9290 - 0x000E92B7 (39 bytes, 13 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E9290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9290: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E92B2; /* je: equal / zero */

loc_000E9297: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E92B2; /* jne: not equal / not zero */

loc_000E929F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x58) = 0;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000E92B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E92C0
 * Original: 0x000E92C0 - 0x000E9308 (72 bytes, 15 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E92C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E92C0: ;
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
 * sub_000E9310
 * Original: 0x000E9310 - 0x000E9498 (392 bytes, 118 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E9310: ;
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
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E93C2; /* je: equal / zero */

loc_000E9349: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0x60) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E935A; /* jne: not equal / not zero */

loc_000E9353: ;
    PUSH32(esp, 0x000E9358u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000E9358: ;
    goto loc_000E935F;

loc_000E935A: ;
    PUSH32(esp, 0x000E935Fu); RECOMP_ABI_CALL(0x000ED260u, sub_000ED260); /* call 0x000ED260 */

loc_000E935F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x64) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E93AB; /* je: equal / zero */

loc_000E9366: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(esi + 0x6C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0x68) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000E938F; /* jne: not equal / not zero */

loc_000E9378: ;
    ecx = MEM32(esi + 0x50);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x14)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x88));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E938Du); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000E938D: ;
    goto loc_000E93A4;

loc_000E938F: ;
    ebx = MEM32(esi + 0x50);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0x14)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x88));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E93A4u); RECOMP_ABI_CALL(0x000ED260u, sub_000ED260); /* call 0x000ED260 */

loc_000E93A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x6C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E93C2; /* jne: not equal / not zero */

loc_000E93AB: ;
    PUSH32(esp, 0x32F90C);
    edx = 0xA;
    PUSH32(esp, 0x000E93BAu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000E93BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E93C2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x16), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9490; /* jbe: below or equal (unsigned <=) */

loc_000E93CE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x22;
    ebx = 5;
    PUSH32(esp, ebp);
    goto loc_000E93E0;

    /* nop */

loc_000E93E0: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_000E93E0; /* jl: less (signed <) */

loc_000E948F: ;
    POP32(esp, ebp);

loc_000E9490: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E94A0
 * Original: 0x000E94A0 - 0x000E94F3 (83 bytes, 20 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E94A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E94A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000E94ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E94AAu); } /* indirect call */
    }

loc_000E94AD: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esi + 0xD0) = 1;
    PUSH32(esp, 0x000E94C5u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000E94C5: ;
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
 * sub_000E9500
 * Original: 0x000E9500 - 0x000E952F (47 bytes, 16 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9500: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9529; /* je: equal / zero */

loc_000E9506: ;
    edx = MEM32(ecx + 0x88);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x24));
    eax = MEM32(ecx + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E9529; /* ja: above (unsigned >) */

loc_000E951A: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E9524u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000E9524: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E9529: ;
    eax = 0xFFFE0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9530
 * Original: 0x000E9530 - 0x000EA0E3 (2995 bytes, 861 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E9530: ;
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x53C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x538) = eax;
    eax = MEM32(esp + 0x540);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    eax = 0x3B9ACA00;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000E95B1; /* jne: not equal / not zero */

loc_000E958C: ;
    ecx = MEM32(esp + 0x550);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = 0;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x538);
    PUSH32(esp, 0x000E95A8u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E95A8: ;
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x53C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E95B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E95DB; /* jne: not equal / not zero */

loc_000E95B6: ;
    edx = MEM32(esp + 0x550);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = 0;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x538);
    PUSH32(esp, 0x000E95D2u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000E95D2: ;
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x53C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000E95DB: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000E9862; /* jne: not equal / not zero */

loc_000E95EA: ;
    ecx = MEM32(esi + 0x58);
    eax = esp + 0x28;
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    MEM32(esp + 0x28) = 8;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000E960Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E960Au); } /* indirect call */
    }

loc_000E960D: ;
    ecx = MEM32(esp + 0x20);
    edi = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9638; /* je: equal / zero */

loc_000E961B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9638; /* je: equal / zero */

loc_000E961F: ;
    PUSH32(esp, 0x183);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F878);
    ebx = 0x32F8EC;
    PUSH32(esp, 0x000E9638u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9638: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000E964A; /* jne: not equal / not zero */

loc_000E9641: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9F41; /* je: equal / zero */

loc_000E964A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9657; /* je: equal / zero */

loc_000E964E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9F41; /* jne: not equal / not zero */

loc_000E9657: ;
    ecx = MEM32(esi + 0x58);
    eax = esi + 0x20;
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    MEM32(esp + 0x28) = 0x30;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000E9679u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E9676u); } /* indirect call */
    }

loc_000E9679: ;
    ecx = MEM32(esp + 0x20);
    edi = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E96A8; /* je: equal / zero */

loc_000E968B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E96A8; /* je: equal / zero */

loc_000E968F: ;
    PUSH32(esp, 0x195);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F878);
    ebx = 0x32F8EC;
    PUSH32(esp, 0x000E96A8u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E96A8: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E96BF; /* jne: not equal / not zero */

loc_000E96AF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E96C3; /* je: equal / zero */

loc_000E96B4: ;
    edi = 5;
    MEM32(esp + 0x18) = edi;
    goto loc_000E96DE;

loc_000E96BF: ;
    MEM32(esp + 0x14) = edi;

loc_000E96C3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E96D1; /* jne: not equal / not zero */

loc_000E96C8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9F41; /* je: equal / zero */

loc_000E96D1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E96DE; /* je: equal / zero */

loc_000E96D5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9F41; /* jne: not equal / not zero */

loc_000E96DE: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9794; /* je: equal / zero */

loc_000E96E8: ;
    eax = MEM32(0x32F874);
    edx = MEM32(0x32F870);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3E;
    edi = esp + 0x50;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E972B; /* jne: not equal / not zero */

loc_000E9711: ;
    eax = MEM32(edx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E972B; /* je: equal / zero */

loc_000E9718: ;
    eax = edx + 0x38;
    edi = esp + 0x48;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000E9721: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9721; /* jne: not equal / not zero */

loc_000E972B: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E974B; /* jne: not equal / not zero */

loc_000E9731: ;
    eax = MEM32(edx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E974B; /* je: equal / zero */

loc_000E9738: ;
    eax = edx + 0x28;
    edi = esp + 0x48;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000E9741: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9741; /* jne: not equal / not zero */

loc_000E974B: ;
    edx = MEM32(edx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x150;
    PUSH32(esp, 0x32F800);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E9765u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000E9765: ;
    ecx = esp + 0x158;
    PUSH32(esp, ecx);
    edx = 0xD;
    PUSH32(esp, 0x000E9777u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000E9777: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E977A: ;
    edx = MEM32(esp + 0x554);
    eax = 2;
    MEM32(esi + 8) = eax;
    MEM32(edx) = 0;
    goto loc_000EA0CA;

loc_000E9794: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x30);
    MEM32(eax + 0x18) = ecx;
    PUSH32(esp, 0x000E97A2u); RECOMP_ABI_CALL(0x000E9310u, sub_000E9310); /* call 0x000E9310 */

loc_000E97A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E977A; /* je: equal / zero */

loc_000E97A6: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0x50);
    eax = MEM32(esi + 0x44);
    MEM32(edx + 0x14) = eax;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(esi + 0x48);
    MEM32(ecx + 4) = edx;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x20);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x50);
    eax = MEM32(esi + 0x3C);
    MEM32(edx + 0x10) = eax;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(esi + 0x34);
    MEM32(ecx + 0x1C) = edx;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx + 0x1C);
    MEM32(esi + 0x98) = eax;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9822; /* je: equal / zero */

loc_000E97EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9858; /* je: equal / zero */

loc_000E97F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9822; /* je: equal / zero */

loc_000E97F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9822; /* je: equal / zero */

loc_000E97FE: ;
    PUSH32(esp, 0x32F7C0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000E980Au); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000E980A: ;
    ecx = MEM32(esp + 0x558);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000EA0CA;

loc_000E9822: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9858; /* jbe: below or equal (unsigned <=) */

loc_000E9827: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9834; /* jne: not equal / not zero */

loc_000E982D: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9858; /* je: equal / zero */

loc_000E9834: ;
    PUSH32(esp, 0x32F778);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000E9840u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000E9840: ;
    edx = MEM32(esp + 0x558);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000EA0CA;

loc_000E9858: ;
    MEM32(esi + 0x90) = 0;

loc_000E9862: ;
    eax = MEM32(esi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9934; /* je: equal / zero */

loc_000E9870: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(esi + 0xD4);
    edx = MEM32(ecx + 0xC);
    ebx = MEM32(ecx + 0x18);
    MEM32(esp + 0x20) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi = eax;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000E9898; /* jns: not sign (positive) */

loc_000E9893: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E9898: ;
    if ((eax == 0)) goto loc_000E989B; /* je: equal / zero */

loc_000E989A: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E989B: ;
    eax = MEM32(ecx + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(esp + 0x28) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x1C));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x1C)); }
    edx = MEM32(esp + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    edx = edx + eax + 0x30;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x28) = edx;
    MEM32(esi + 0x94) = edi;
    if (CMP_B(_fa, _fb)) goto loc_000E98DC; /* jb: below (unsigned <) */

loc_000E98D3: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x94) = eax;

loc_000E98DC: ;
    ebx = MEM32(ecx + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edx = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E9901; /* je: equal / zero */

loc_000E98EE: ;
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
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + edx;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E9901: ;
    eax = MEM32(ecx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC)); }
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xD4) = ecx;
    ecx = MEM32(esi + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000E9925u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E9922u); } /* indirect call */
    }

loc_000E9925: ;
    edi = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0xD0) = eax;

loc_000E9934: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000EA00C; /* jbe: below or equal (unsigned <=) */

loc_000E993F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E999E; /* je: equal / zero */

loc_000E9945: ;
    ecx = MEM32(esi + 0x88);
    edx = MEM32(esi + 0x6C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(esp + 0x550);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E9963u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E9963: ;
    eax = MEM32(esi + 0xD8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9984; /* jne: not equal / not zero */

loc_000E9971: ;
    edx = MEM32(esi + 0x68);
    eax = MEM32(esp + 0x554);
    MEM32(eax) = edx;
    MEM32(esi + 8) = 2;

loc_000E9984: ;
    eax = MEM32(esi + 0x68);
    edx = MEM32(esi + 0xCC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xCC) = edx;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esi + 0x68) = ebx;

loc_000E999E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA092; /* je: equal / zero */

loc_000E99A6: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA092; /* je: equal / zero */

loc_000E99B0: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9B75; /* jne: not equal / not zero */

loc_000E99C2: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esi + 0x58);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    edi = esi + 0x60;
    MEM32(edi) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000E99DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E99D9u); } /* indirect call */
    }

loc_000E99DC: ;
    ebp = eax;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9A0A; /* jne: not equal / not zero */

loc_000E99E5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E99F1; /* je: equal / zero */

loc_000E99EA: ;
    ebp = 5;
    goto loc_000E9A0A;

loc_000E99F1: ;
    PUSH32(esp, 0x212);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F6E8);
    ebx = 0x32F740;
    PUSH32(esp, 0x000E9A0Au); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9A0A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000E9E9E; /* je: equal / zero */

loc_000E9A17: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9EFD; /* je: equal / zero */

loc_000E9A20: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9A2D; /* je: equal / zero */

loc_000E9A24: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9EB7; /* jne: not equal / not zero */

loc_000E9A2D: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9A82; /* je: equal / zero */

loc_000E9A37: ;
    ecx = MEM32(edi);
    edx = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E9A4Cu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E9A4C: ;
    eax = MEM32(esi + 0x80);
    edx = MEM32(edi);
    ecx = MEM32(esi + 0x64);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esi + 0x80) = eax;
    eax = MEM32(esi + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E9A6Du); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E9A6D: ;
    edx = MEM32(esi + 0x80);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = edx;
    MEM32(esi + 0x80) = 0;

loc_000E9A82: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(edi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9AAA; /* je: equal / zero */

loc_000E9A91: ;
    PUSH32(esp, 0x22B);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F628);
    ebx = 0x32F66C;
    PUSH32(esp, 0x000E9AAAu); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9AAA: ;
    edx = MEM32(esi + 0x50);
    eax = MEM32(edx + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E9AF2; /* jle: less or equal (signed <=) */

loc_000E9AB8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000E9AC0: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9AE2; /* je: equal / zero */

loc_000E9AC9: ;
    PUSH32(esp, 0x231);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F5EC);
    ebx = 0x32F66C;
    PUSH32(esp, 0x000E9AE2u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9AE2: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx + 0xC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E9AC0; /* jl: less (signed <) */

loc_000E9AF0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E9AF2: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9B61; /* jne: not equal / not zero */

loc_000E9AFA: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E9B23; /* je: equal / zero */

loc_000E9B03: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E9B23; /* je: equal / zero */

loc_000E9B08: ;
    PUSH32(esp, 0x240);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x324878);
    ebx = 0x32F66C;
    PUSH32(esp, 0x000E9B21u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9B21: ;
    goto loc_000E9B3A;

loc_000E9B23: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esi + 0x64);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E9B37u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E9B37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E9B3A: ;
    edx = MEM32(esi + 0x50);
    eax = MEM32(edx + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E9B61; /* jle: less or equal (signed <=) */

loc_000E9B48: ;
    eax = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esi + 0x54);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E9B53: ;
    edi = MEM32(eax);
    MEM32(esp + ecx * 4 + 0x30) = edi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E9B53; /* jl: less (signed <) */

loc_000E9B61: ;
    ebp = MEM32(esp + 0x1C);
    MEM32(esi + 0x90) = 1;
    MEM32(esi + 0x98) = ebx;

loc_000E9B75: ;
    eax = MEM32(esi + 0x98);
    edi = MEM32(esi + 0x94);
    ecx = MEM32(esi + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x98) = eax;
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x94) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_000E9C52; /* jae: above or equal (unsigned >=) */

loc_000E9B9C: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x14));
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = esi + 0x60;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 0x58);
    eax = MEM32(ecx);
    edi = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000E9BBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E9BBBu); } /* indirect call */
    }

loc_000E9BBE: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 5 (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000E9BF4; /* jne: not equal / not zero */

loc_000E9BCB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9BDB; /* je: equal / zero */

loc_000E9BD0: ;
    edi = 5;
    MEM32(esp + 0x18) = edi;
    goto loc_000E9BF4;

loc_000E9BDB: ;
    PUSH32(esp, 0x25E);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F6E8);
    ebx = 0x32F6B4;
    PUSH32(esp, 0x000E9BF4u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9BF4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E9F0E; /* je: equal / zero */

loc_000E9C01: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9F55; /* je: equal / zero */

loc_000E9C0A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9C17; /* je: equal / zero */

loc_000E9C0E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9F27; /* jne: not equal / not zero */

loc_000E9C17: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x60) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9C39; /* je: equal / zero */

loc_000E9C20: ;
    PUSH32(esp, 0x26E);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F5AC);
    ebx = 0x32F5D4;
    PUSH32(esp, 0x000E9C39u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9C39: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC)); }
    MEM32(esi + 0x68) = eax;
    edx = MEM32(ecx + 0x18);
    MEM32(ecx + 8) = edx;
    goto loc_000E9D3B;

loc_000E9C52: ;
    if (CMP_NE(_fa, _fb)) goto loc_000E9FD8; /* jne: not equal / not zero */

loc_000E9C58: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 0x2C));
    ecx = MEM32(esi + 0x58);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esi + 0x60;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = esp + 0x14;
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000E9C7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E9C77u); } /* indirect call */
    }

loc_000E9C7A: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 5 (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000E9CB0; /* jne: not equal / not zero */

loc_000E9C87: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9C97; /* je: equal / zero */

loc_000E9C8C: ;
    edi = 5;
    MEM32(esp + 0x18) = edi;
    goto loc_000E9CB0;

loc_000E9C97: ;
    PUSH32(esp, 0x27A);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F6E8);
    ebx = 0x32F6B4;
    PUSH32(esp, 0x000E9CB0u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9CB0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000E9CD4; /* jne: not equal / not zero */

loc_000E9CB9: ;
    PUSH32(esp, 0x27D);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F694);
    ebx = 0x32F6B4;
    PUSH32(esp, 0x000E9CD2u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9CD2: ;
    goto loc_000E9D06;

loc_000E9CD4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9CF4; /* jne: not equal / not zero */

loc_000E9CD9: ;
    PUSH32(esp, 0x27E);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F1F4);
    ebx = 0x32F6B4;
    PUSH32(esp, 0x000E9CF2u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9CF2: ;
    goto loc_000E9D06;

loc_000E9CF4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9F66; /* je: equal / zero */

loc_000E9CFD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9F97; /* je: equal / zero */

loc_000E9D06: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9D28; /* je: equal / zero */

loc_000E9D0F: ;
    PUSH32(esp, 0x294);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F558);
    ebx = 0x32F580;
    PUSH32(esp, 0x000E9D28u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9D28: ;
    ebx = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x50);
    eax = ebx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC)); }
    MEM32(esi + 0x68) = eax;
    MEM32(ecx + 8) = ebx;

loc_000E9D3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E9D41u); RECOMP_ABI_CALL(0x000EA6B0u, sub_000EA6B0); /* call 0x000EA6B0 */

loc_000E9D41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9FBC; /* je: equal / zero */

loc_000E9D49: ;
    eax = MEM32(esp + 0x30);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B9ACA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B9ACA00 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9D79; /* je: equal / zero */

loc_000E9D56: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E9D79; /* jle: less or equal (signed <=) */

loc_000E9D62: ;
    SET_LO16(ecx, MEM16(esp + eax * 4 + 0x30));
    edx = MEM32(esi + 0x6C);
    MEM16(edx + eax * 2) = LO16(ecx);
    edx = MEM32(esi + 0x50);
    ecx = MEM32(edx + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E9D62; /* jl: less (signed <) */

loc_000E9D79: ;
    edx = MEM32(esi + 0x68);
    eax = MEM32(esi + 0xD4);
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_000E9D98; /* jns: not sign (positive) */

loc_000E9D88: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xD4) = eax;
    MEM32(esi + 0x68) = ebx;
    goto loc_000E9E91;

loc_000E9D98: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E9DE3; /* ja: above (unsigned >) */

loc_000E9D9C: ;
    edx = MEM32(esi + 0x88);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x6C);
    eax = ecx + eax * 2;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x558);
    ecx = MEM32(eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E9DC4u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E9DC4: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(esi + 0xD4);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xCC) = MEM32(esi + 0xCC) + edx;
    _fa = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x68) = ebx;
    goto loc_000E9E5C;

loc_000E9DE3: ;
    ecx = MEM32(esi + 0x88);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x6C);
    eax = edx + eax * 2;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x558);
    edx = MEM32(eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E9E0Du); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E9E0D: ;
    ecx = MEM32(esi + 0xD4);
    edx = MEM32(esi + 0xCC);
    edi = MEM32(esi + 0x88);
    eax = ecx + ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(esi + 0xCC) = edx;
    edx = MEM32(esi + 0x6C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E9E46u); RECOMP_ABI_CALL(0x000ED3D0u, sub_000ED3D0); /* call 0x000ED3D0 */

loc_000E9E46: ;
    ecx = MEM32(esi + 0xD4);
    eax = MEM32(esi + 0x68);
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x68) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E9E5C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    MEM32(esi + 0xD4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000E9E91; /* jne: not equal / not zero */

loc_000E9E6B: ;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9E8A; /* jbe: below or equal (unsigned <=) */

loc_000E9E70: ;
    MEM32(esi + 0x94) = MEM32(esi + 0x94) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0xD8) = 4;
    goto loc_000E9E91;

loc_000E9E8A: ;
    MEM32(esi + 8) = 2;

loc_000E9E91: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E99A6; /* jne: not equal / not zero */

loc_000E9E99: ;
    goto loc_000EA092;

loc_000E9E9E: ;
    PUSH32(esp, 0x217);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F694);

loc_000E9EAD: ;
    ebx = 0x32F6B4;
    PUSH32(esp, 0x000E9EB7u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9EB7: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x64);
    ecx = MEM32(esi + 0x84);
    edi = MEM32(esi + 0x80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E9ED4u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000E9ED4: ;
    eax = MEM32(esi + 0x80);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x80) = eax;
    eax = MEM32(esp + 0x554);
    MEM32(eax) = 0;
    eax = ebp;
    goto loc_000EA0CA;

loc_000E9EFD: ;
    PUSH32(esp, 0x218);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F1F4);
    goto loc_000E9EAD;

loc_000E9F0E: ;
    PUSH32(esp, 0x261);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F694);

loc_000E9F1D: ;
    ebx = 0x32F6B4;
    PUSH32(esp, 0x000E9F27u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E9F27: ;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x98);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x94) = ecx;
    MEM32(esi + 0x98) = eax;

loc_000E9F41: ;
    ecx = MEM32(esp + 0x554);
    MEM32(ecx) = 0;
    eax = edi;
    goto loc_000EA0CA;

loc_000E9F55: ;
    PUSH32(esp, 0x262);
    PUSH32(esp, 0x32F8B8);
    PUSH32(esp, 0x32F1F4);
    goto loc_000E9F1D;

loc_000E9F66: ;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x98);
    edx = MEM32(esp + 0x554);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x94) = ecx;
    MEM32(edx) = 0;
    eax = 6;
    goto loc_000EA0CA;

loc_000E9F97: ;
    eax = MEM32(esp + 0x550);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x554);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = ecx;
    MEM32(esi + 8) = 2;
    eax = 2;
    goto loc_000EA0CA;

loc_000E9FBC: ;
    eax = MEM32(esp + 0x554);
    MEM32(esi + 8) = 2;
    MEM32(eax) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000EA0CA;

loc_000E9FD8: ;
    ecx = MEM32(esp + 0x554);
    MEM32(esi + 8) = 2;
    MEM32(ecx) = ebx;
    PUSH32(esp, 0x29E);
    PUSH32(esp, 0x324878);
    edx = 0x32F528;
    ecx = 0x32F8B8;
    PUSH32(esp, 0x000EA001u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EA001: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000EA0CA;

loc_000EA00C: ;
    eax = MEM32(esi + 0x88);
    edi = MEM32(esp + 0x550);
    ecx = MEM32(esi + 0x6C);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    PUSH32(esp, edx);
    edx = MEM32(edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(edi + 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EA035u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EA035: ;
    eax = MEM32(esi + 0xCC);
    ecx = MEM32(esp + 0x560);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xCC) = eax;
    eax = MEM32(edi);
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x68);
    eax = MEM32(esi + 0x88);
    ecx = MEM32(esi + 0x6C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    PUSH32(esp, edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EA06Cu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EA06C: ;
    ecx = MEM32(esi + 0x68);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x68) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000EA090; /* jne: not equal / not zero */

loc_000EA081: ;
    eax = MEM32(esi + 0xD8);
    edi = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA092; /* je: equal / zero */

loc_000EA090: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000EA092: ;
    eax = MEM32(esp + 0x550);
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x554);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;
    edx = MEM32(esi + 8);
    ecx = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA0C2; /* je: equal / zero */

loc_000EA0B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA0C2; /* je: equal / zero */

loc_000EA0B6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA0BE; /* jne: not equal / not zero */

loc_000EA0BB: ;
    MEM32(esi + 8) = ecx;

loc_000EA0BE: ;
    eax = edi;
    goto loc_000EA0CA;

loc_000EA0C2: ;
    MEM32(esi + 8) = ecx;
    eax = 4;

loc_000EA0CA: ;
    ecx = MEM32(esp + 0x548);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000EA0DAu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000EA0DA: ;
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x53C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000EA0F0
 * Original: 0x000EA0F0 - 0x000EA4D9 (1001 bytes, 278 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EA0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA0F0: ;
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
    ebx = MEM32(ebx * 4 + 0x33F998);
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
    edi = 0x33FCA8;
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
    mm3 = MMX_MEM(0x344408); /* movq */
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
    if ((_fa == 0)) goto loc_000EA34E; /* je: equal / zero */

loc_000EA1FF: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x3443F8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x3443F8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x344400); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + 0xC);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x3443E8)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -20);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x33F9D8);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x3443E8)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x3443F0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x3443D0)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x3443C0)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x3443C0)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443F8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EA2FD; /* jge: greater or equal (signed >=) */

loc_000EA2F8: ;
    ebx = 0x10F;

loc_000EA2FD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EA30A; /* jle: less or equal (signed <=) */

loc_000EA305: ;
    ebx = 0xA00;

loc_000EA30A: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x3443D8); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x3443C8)); /* por */
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
    goto loc_000EA411;

loc_000EA34E: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x3443E0)); /* movd */
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
    ebx = MEM32(ebx * 4 + 0x33F9D8);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x3443D0)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x3443D8); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x3443C0)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x3443C0)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x3443C8)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443F8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EA3ED; /* jge: greater or equal (signed >=) */

loc_000EA3E8: ;
    ebx = 0x10F;

loc_000EA3ED: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000EA401; /* jle: less or equal (signed <=) */

loc_000EA3FC: ;
    ebx = 0xA00;

loc_000EA401: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000EA411: ;
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
    if (CMP_G(_fas, _fbs)) goto loc_000EA475; /* jg: greater (signed >) */

loc_000EA473: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000EA475: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x300 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EA495; /* jle: less or equal (signed <=) */

loc_000EA47D: ;
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

loc_000EA495: ;
    SET_LO16(esi, MEM16(eax + 0x10));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    edx = SX16(LO16(esi));
    if (CMP_G(_fas, _fbs)) goto loc_000EA4A3; /* jg: greater (signed >) */

loc_000EA4A1: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000EA4A3: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    edi = SX16(LO16(ecx));
    ebx = 0x3C0;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EA4CF; /* jle: less or equal (signed <=) */

loc_000EA4B5: ;
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

loc_000EA4CF: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA4E0
 * Original: 0x000EA4E0 - 0x000EA5AF (207 bytes, 71 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EA4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA4E0: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EA590; /* jge: greater or equal (signed >=) */

loc_000EA58B: ;
    ebx = 0x10F;

loc_000EA590: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EA59D; /* jle: less or equal (signed <=) */

loc_000EA598: ;
    ebx = 0xA00;

loc_000EA59D: ;
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
 * sub_000EA5B0
 * Original: 0x000EA5B0 - 0x000EA62F (127 bytes, 49 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EA5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA5B0: ;
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

loc_000EA5D7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    mm2 = mm7; /* movq */
    if (CMP_GE(_fas, _fbs)) goto loc_000EA60A; /* jge: greater or equal (signed >=) */

loc_000EA5DF: ;
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
    if ((_fa != 0)) goto loc_000EA5D7; /* jne: not equal / not zero */

loc_000EA608: ;
    goto loc_000EA626;

loc_000EA60A: ;
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
    if ((_fa != 0)) goto loc_000EA5D7; /* jne: not equal / not zero */

loc_000EA626: ;
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
 * sub_000EA630
 * Original: 0x000EA630 - 0x000EA6AF (127 bytes, 49 insns)
 * Folder: sound (between: 0x000E8EC0 and 0x000EA6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EA630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA630: ;
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

loc_000EA657: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    mm2 = mm7; /* movq */
    if (CMP_GE(_fas, _fbs)) goto loc_000EA68A; /* jge: greater or equal (signed >=) */

loc_000EA65F: ;
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
    if ((_fa != 0)) goto loc_000EA657; /* jne: not equal / not zero */

loc_000EA688: ;
    goto loc_000EA6A6;

loc_000EA68A: ;
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
    if ((_fa != 0)) goto loc_000EA657; /* jne: not equal / not zero */

loc_000EA6A6: ;
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
 * sub_000EA6B0
 * Original: 0x000EA6B0 - 0x000EBC35 (5509 bytes, 1634 insns)
 * Folder: sound (source: tadpcm.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EA6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA6B0: ;
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
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000EA6D3; /* jne: not equal / not zero */

loc_000EA6C5: ;
    MEM32(ebp + -8) = 0xEA0F0;
    ebx = 0xEA630;
    goto loc_000EA6DF;

loc_000EA6D3: ;
    MEM32(ebp + -8) = 0xEA4E0;
    ebx = 0xEA5B0;

loc_000EA6DF: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esi + 0x7C);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000EA732; /* jae: above or equal (unsigned >=) */

loc_000EA6EC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA6F7; /* jne: not equal / not zero */

loc_000EA6F0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA6F5u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000EA6F5: ;
    goto loc_000EA6FF;

loc_000EA6F7: ;
    ecx = MEM32(esi + 0x78);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA6FFu); RECOMP_ABI_CALL(0x000ED260u, sub_000ED260); /* call 0x000ED260 */

loc_000EA6FF: ;
    ecx = MEM32(esi + 0x50);
    MEM32(esi + 0x78) = eax;
    eax = MEM32(ecx + 8);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x7C) = eax;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA732; /* jne: not equal / not zero */

loc_000EA715: ;
    PUSH32(esp, 0x32F508);
    edx = 0xB;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA724u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000EA724: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000EA732: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esi + 0x74);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000EA782; /* jae: above or equal (unsigned >=) */

loc_000EA73F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA74A; /* jne: not equal / not zero */

loc_000EA743: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA748u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000EA748: ;
    goto loc_000EA752;

loc_000EA74A: ;
    ecx = MEM32(esi + 0x70);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA752u); RECOMP_ABI_CALL(0x000ED260u, sub_000ED260); /* call 0x000ED260 */

loc_000EA752: ;
    ecx = MEM32(esi + 0x50);
    MEM32(esi + 0x70) = eax;
    edx = MEM32(ecx + 8);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x74) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000EA782; /* jne: not equal / not zero */

loc_000EA765: ;
    PUSH32(esp, 0x32F4EC);
    edx = 0xB;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA774u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000EA774: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000EA782: ;
    eax = MEM32(ecx + 0xC);
    edi = MEM32(esi + 0x6C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(ebp + -20) = edi;
    if (CMP_A(_fa, _fb)) goto loc_000EBC27; /* ja: above (unsigned >) */

loc_000EA795: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xEBC38); /* switch: 6 entries, 3 targets */
    if (_jt == 0x000EA79Cu) goto loc_000EA79C;
    if (_jt == 0x000EAAC5u) goto loc_000EAAC5;
    if (_jt == 0x000EBC27u) goto loc_000EBC27;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000EA79C: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(esi + 0x78);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x000EA7AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EA7ACu); } /* indirect call */
    }

loc_000EA7AE: ;
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
    if (CMP_BE(_fa, _fb)) goto loc_000EA7DF; /* jbe: below or equal (unsigned <=) */

loc_000EA7C8: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x5E4;
    ecx = 0x32F464;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA7DCu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EA7DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EA7DF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EA7E8; /* je: equal / zero */

loc_000EA7E4: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = ebx;

loc_000EA7E8: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA8E5; /* jne: not equal / not zero */

loc_000EA7F5: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA852; /* jne: not equal / not zero */

loc_000EA7FD: ;
    eax = MEM32(ebp + -4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000EAA93; /* jbe: below or equal (unsigned <=) */

loc_000EA80A: ;
    /* nop */

loc_000EA810: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(esi + 0x78);
    eax = MEM32(edx + ebx * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EA81Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EA81Bu); } /* indirect call */
    }

loc_000EA81E: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(esi + 0x78);
    eax = MEM32(edx + ebx * 4 + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EA834u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EA831u); } /* indirect call */
    }

loc_000EA834: ;
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
    if (CMP_B(_fa, _fb)) goto loc_000EA810; /* jb: below (unsigned <) */

loc_000EA84D: ;
    goto loc_000EAA93;

loc_000EA852: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000EAA96; /* jbe: below or equal (unsigned <=) */

loc_000EA861: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(ebp + -20) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000EA8D1; /* jle: less or equal (signed <=) */

loc_000EA868: ;
    MEM32(ebp + 8) = edx;
    ebx = eax * 4;

loc_000EA872: ;
    ecx = MEM32(esi + 0x54);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x78);
    eax = MEM32(ebx + edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EA883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EA880u); } /* indirect call */
    }

loc_000EA883: ;
    edx = MEM32(ebp + 8);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x54);
    eax = ecx + edx + 0x34;
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ebx + ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EA8A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EA89Du); } /* indirect call */
    }

loc_000EA8A0: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_000EA872; /* jl: less (signed <) */

loc_000EA8C9: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000EA8D1: ;
    ecx = MEM32(esi + 0x50);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000EA861; /* jb: below (unsigned <) */

loc_000EA8E0: ;
    goto loc_000EAA96;

loc_000EA8E5: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = edi;
    edi = MEM32(ebp + -4);
    eax = 0;

loc_000EA8FC: ;
    ebx = MEM32(ebp + -24);
    esi = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EAA8B; /* jge: greater or equal (signed >=) */

loc_000EA90A: ;
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
    edi = 0x33FCA8;
    ebx = MEM32(ebx * 4 + 0x33FA18);
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EA9AF; /* jge: greater or equal (signed >=) */

loc_000EA9AA: ;
    ebx = 0x10F;

loc_000EA9AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EA9BC; /* jle: less or equal (signed <=) */

loc_000EA9B7: ;
    ebx = 0xA00;

loc_000EA9BC: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EAA6B; /* jge: greater or equal (signed >=) */

loc_000EAA66: ;
    ebx = 0x10F;

loc_000EAA6B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EAA78; /* jle: less or equal (signed <=) */

loc_000EAA73: ;
    ebx = 0xA00;

loc_000EAA78: ;
    MEM16(edi + eax * 2 + 2) = LO16(edx);
    MEM32(esi + 4) = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -4);
    goto loc_000EA8FC;

loc_000EAA8B: ;
    (void)0; /* emms - empty MMX state */
    edi = MEM32(ebp + -20);
    esi = MEM32(ebp + 8);

loc_000EAA93: ;
    ebx = MEM32(ebp + -4);

loc_000EAA96: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBC27; /* je: equal / zero */

loc_000EAAA2: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + ebx * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EAAB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EAAADu); } /* indirect call */
    }

loc_000EAAB0: ;
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

loc_000EAAC5: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(esi + 0x78);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x000EAAD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EAAD5u); } /* indirect call */
    }

loc_000EAAD7: ;
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
    if (CMP_BE(_fa, _fb)) goto loc_000EAB08; /* jbe: below or equal (unsigned <=) */

loc_000EAAF1: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x702;
    ecx = 0x32F464;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAB05u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAB05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAB08: ;
    eax = ebx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EBAC2; /* je: equal / zero */

loc_000EAB1B: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EB461; /* jne: not equal / not zero */

loc_000EAB28: ;
    ecx = 0x3443B8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAB49; /* je: equal / zero */

loc_000EAB32: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x71B;
    ecx = 0x32F440;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAB46u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAB46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAB49: ;
    edx = 0x3443B0;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAB6A; /* je: equal / zero */

loc_000EAB53: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x71C;
    ecx = 0x32F414;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAB67u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAB67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAB6A: ;
    eax = 0x3443A8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAB8A; /* je: equal / zero */

loc_000EAB73: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x71D;
    ecx = 0x32F3F8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAB87u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAB87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAB8A: ;
    ecx = 0x3443A0;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EABAB; /* je: equal / zero */

loc_000EAB94: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x71E;
    ecx = 0x32F3D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EABA8u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EABA8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EABAB: ;
    edx = 0x344398;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EABCC; /* je: equal / zero */

loc_000EABB5: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x71F;
    ecx = 0x32F3B8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EABC9u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EABC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EABCC: ;
    eax = 0x344390;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EABEC; /* je: equal / zero */

loc_000EABD5: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x720;
    ecx = 0x32F390;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EABE9u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EABE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EABEC: ;
    ecx = 0x344388;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAC0D; /* je: equal / zero */

loc_000EABF6: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x721;
    ecx = 0x32F370;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAC0Au); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAC0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAC0D: ;
    edx = 0x344380;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAC2E; /* je: equal / zero */

loc_000EAC17: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x722;
    ecx = 0x32F350;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAC2Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAC2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAC2E: ;
    eax = 0x344378;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAC4E; /* je: equal / zero */

loc_000EAC37: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x723;
    ecx = 0x32F330;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAC4Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAC4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAC4E: ;
    ecx = 0x344370;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAC6F; /* je: equal / zero */

loc_000EAC58: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x724;
    ecx = 0x32F310;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAC6Cu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAC6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAC6F: ;
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

loc_000EAC92: ;
    ebx = 0;
    MEM32(ebp + -32) = 0;

loc_000EAC9E: ;
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
    ebx = MEM32(ebx * 4 + 0x33F998);
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
    edi = 0x33FCA8;
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
    mm3 = MMX_MEM(0x3443B8); /* movq */
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
    if ((_fa == 0)) goto loc_000EAEFA; /* je: equal / zero */

loc_000EADAB: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x3443A8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x3443A8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x3443B0); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + -44);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x344398)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -56);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x33F9D8);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x344398)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x3443A0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EAEA9; /* jge: greater or equal (signed >=) */

loc_000EAEA4: ;
    ebx = 0x10F;

loc_000EAEA9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EAEB6; /* jle: less or equal (signed <=) */

loc_000EAEB1: ;
    ebx = 0xA00;

loc_000EAEB6: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x344388); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
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
    goto loc_000EAFBD;

loc_000EAEFA: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x344390)); /* movd */
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
    ebx = MEM32(ebx * 4 + 0x33F9D8);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x344388); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EAF99; /* jge: greater or equal (signed >=) */

loc_000EAF94: ;
    ebx = 0x10F;

loc_000EAF99: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000EAFAD; /* jle: less or equal (signed <=) */

loc_000EAFA8: ;
    ebx = 0xA00;

loc_000EAFAD: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000EAFBD: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_000EB027; /* jle: less or equal (signed <=) */

loc_000EB022: ;
    ebx = 0x300;

loc_000EB027: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFD00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFD00u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB034; /* jge: greater or equal (signed >=) */

loc_000EB02F: ;
    ebx = 0xFFFFFD00u;

loc_000EB034: ;
    ecx = 0x3C0;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB041; /* jle: less or equal (signed <=) */

loc_000EB03F: ;
    eax = ecx;

loc_000EB041: ;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB04D; /* jle: less or equal (signed <=) */

loc_000EB049: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000EB04D: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000EAC9E; /* jne: not equal / not zero */

loc_000EB06D: ;
    ebx = 0;
    MEM32(ebp + -32) = ebx;

loc_000EB075: ;
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
    ebx = MEM32(ebx * 4 + 0x33F998);
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
    edi = 0x33FCA8;
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
    mm3 = MMX_MEM(0x3443B8); /* movq */
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
    if ((_fa == 0)) goto loc_000EB2D3; /* je: equal / zero */

loc_000EB184: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x3443A8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x3443A8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x3443B0); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + -36);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x344398)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -56);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x33F9D8);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x344398)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x3443A0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB282; /* jge: greater or equal (signed >=) */

loc_000EB27D: ;
    ebx = 0x10F;

loc_000EB282: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB28F; /* jle: less or equal (signed <=) */

loc_000EB28A: ;
    ebx = 0xA00;

loc_000EB28F: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x344388); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
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
    goto loc_000EB396;

loc_000EB2D3: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x344390)); /* movd */
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
    ebx = MEM32(ebx * 4 + 0x33F9D8);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x344388); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB372; /* jge: greater or equal (signed >=) */

loc_000EB36D: ;
    ebx = 0x10F;

loc_000EB372: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB386; /* jle: less or equal (signed <=) */

loc_000EB381: ;
    ebx = 0xA00;

loc_000EB386: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000EB396: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_000EB400; /* jle: less or equal (signed <=) */

loc_000EB3FB: ;
    ebx = 0x300;

loc_000EB400: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFD00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFD00u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB40D; /* jge: greater or equal (signed >=) */

loc_000EB408: ;
    ebx = 0xFFFFFD00u;

loc_000EB40D: ;
    ecx = 0x3C0;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB41A; /* jle: less or equal (signed <=) */

loc_000EB418: ;
    eax = ecx;

loc_000EB41A: ;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB426; /* jle: less or equal (signed <=) */

loc_000EB422: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000EB426: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000EB075; /* jne: not equal / not zero */

loc_000EB446: ;
    edi = MEM32(ebp + -24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = edi;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EAC92; /* jne: not equal / not zero */

loc_000EB45A: ;
    (void)0; /* emms - empty MMX state */
    goto loc_000EBAB6;

loc_000EB461: ;
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

loc_000EB486: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBAB4; /* je: equal / zero */

loc_000EB48E: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB535; /* jge: greater or equal (signed >=) */

loc_000EB530: ;
    ebx = 0x10F;

loc_000EB535: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB542; /* jle: less or equal (signed <=) */

loc_000EB53D: ;
    ebx = 0xA00;

loc_000EB542: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB5F7; /* jge: greater or equal (signed >=) */

loc_000EB5F2: ;
    ebx = 0x10F;

loc_000EB5F7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB604; /* jle: less or equal (signed <=) */

loc_000EB5FF: ;
    ebx = 0xA00;

loc_000EB604: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB6BA; /* jge: greater or equal (signed >=) */

loc_000EB6B5: ;
    ebx = 0x10F;

loc_000EB6BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB6C7; /* jle: less or equal (signed <=) */

loc_000EB6C2: ;
    ebx = 0xA00;

loc_000EB6C7: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB77D; /* jge: greater or equal (signed >=) */

loc_000EB778: ;
    ebx = 0x10F;

loc_000EB77D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB78A; /* jle: less or equal (signed <=) */

loc_000EB785: ;
    ebx = 0xA00;

loc_000EB78A: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB840; /* jge: greater or equal (signed >=) */

loc_000EB83B: ;
    ebx = 0x10F;

loc_000EB840: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB84D; /* jle: less or equal (signed <=) */

loc_000EB848: ;
    ebx = 0xA00;

loc_000EB84D: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB903; /* jge: greater or equal (signed >=) */

loc_000EB8FE: ;
    ebx = 0x10F;

loc_000EB903: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB910; /* jle: less or equal (signed <=) */

loc_000EB90B: ;
    ebx = 0xA00;

loc_000EB910: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB9C6; /* jge: greater or equal (signed >=) */

loc_000EB9C1: ;
    ebx = 0x10F;

loc_000EB9C6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB9D3; /* jle: less or equal (signed <=) */

loc_000EB9CE: ;
    ebx = 0xA00;

loc_000EB9D3: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EBA89; /* jge: greater or equal (signed >=) */

loc_000EBA84: ;
    ebx = 0x10F;

loc_000EBA89: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EBA96; /* jle: less or equal (signed <=) */

loc_000EBA91: ;
    ebx = 0xA00;

loc_000EBA96: ;
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
    goto loc_000EB486;

loc_000EBAB4: ;
    (void)0; /* emms - empty MMX state */

loc_000EBAB6: ;
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -4);
    eax = MEM32(ebp + -16);
    esi = MEM32(ebp + 8);

loc_000EBAC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000EBAF6; /* jge: greater or equal (signed >=) */

loc_000EBAC9: ;
    /* nop */

loc_000EBAD0: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx + edx * 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EBAE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EBADEu); } /* indirect call */
    }

loc_000EBAE1: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_000EBAD0; /* jl: less (signed <) */

loc_000EBAF6: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x50);
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EBB51; /* jne: not equal / not zero */

loc_000EBB05: ;
    ecx = 0;
    ebx = MEM32(ebp + -4);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + -20);

loc_000EBB13: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_000EBB13; /* jl: less (signed <) */

loc_000EBB41: ;
    (void)0; /* emms - empty MMX state */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000EBB51: ;
    edx = ebx + -4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EBBEA; /* jl: less (signed <) */

loc_000EBB5E: ;
    edi = edi;

loc_000EBB60: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_000EBB60; /* jle: less or equal (signed <=) */

loc_000EBBE7: ;
    ebx = MEM32(ebp + -4);

loc_000EBBEA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000EBC27; /* je: equal / zero */

loc_000EBBEE: ;
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

loc_000EBC27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA83B
 * Original: 0x000EA83B - 0x000EBC35 (5114 bytes, 1497 insns)
 * Folder: sound (source: tadpcm.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA83B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EA83B: ;
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
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000EA810(); return; } /* jb: below (unsigned <) */

loc_000EA84D: ;
    goto loc_000EAA93;

    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000EAA96; /* jbe: below or equal (unsigned <=) */

loc_000EA861: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(ebp + -20) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000EA8D1; /* jle: less or equal (signed <=) */

loc_000EA868: ;
    MEM32(ebp + 8) = edx;
    ebx = eax * 4;

loc_000EA872: ;
    ecx = MEM32(esi + 0x54);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x78);
    eax = MEM32(ebx + edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EA883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EA880u); } /* indirect call */
    }

loc_000EA883: ;
    edx = MEM32(ebp + 8);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x54);
    eax = ecx + edx + 0x34;
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ebx + ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EA8A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EA89Du); } /* indirect call */
    }

loc_000EA8A0: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_000EA872; /* jl: less (signed <) */

loc_000EA8C9: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000EA8D1: ;
    ecx = MEM32(esi + 0x50);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000EA861; /* jb: below (unsigned <) */

loc_000EA8E0: ;
    goto loc_000EAA96;

    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = edi;
    edi = MEM32(ebp + -4);
    eax = 0;

loc_000EA8FC: ;
    ebx = MEM32(ebp + -24);
    esi = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EAA8B; /* jge: greater or equal (signed >=) */

loc_000EA90A: ;
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
    edi = 0x33FCA8;
    ebx = MEM32(ebx * 4 + 0x33FA18);
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EA9AF; /* jge: greater or equal (signed >=) */

loc_000EA9AA: ;
    ebx = 0x10F;

loc_000EA9AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EA9BC; /* jle: less or equal (signed <=) */

loc_000EA9B7: ;
    ebx = 0xA00;

loc_000EA9BC: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EAA6B; /* jge: greater or equal (signed >=) */

loc_000EAA66: ;
    ebx = 0x10F;

loc_000EAA6B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EAA78; /* jle: less or equal (signed <=) */

loc_000EAA73: ;
    ebx = 0xA00;

loc_000EAA78: ;
    MEM16(edi + eax * 2 + 2) = LO16(edx);
    MEM32(esi + 4) = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -4);
    goto loc_000EA8FC;

loc_000EAA8B: ;
    (void)0; /* emms - empty MMX state */
    edi = MEM32(ebp + -20);
    esi = MEM32(ebp + 8);

loc_000EAA93: ;
    ebx = MEM32(ebp + -4);

loc_000EAA96: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBC27; /* je: equal / zero */

loc_000EAAA2: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + ebx * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EAAB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EAAADu); } /* indirect call */
    }

loc_000EAAB0: ;
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
    if (CMP_BE(_fa, _fb)) goto loc_000EAB08; /* jbe: below or equal (unsigned <=) */

loc_000EAAF1: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x702;
    ecx = 0x32F464;
    PUSH32(esp, 0x000EAB05u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAB05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAB08: ;
    eax = ebx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EBAC2; /* je: equal / zero */

loc_000EAB1B: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EB461; /* jne: not equal / not zero */

loc_000EAB28: ;
    ecx = 0x3443B8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAB49; /* je: equal / zero */

loc_000EAB32: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x71B;
    ecx = 0x32F440;
    PUSH32(esp, 0x000EAB46u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAB46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAB49: ;
    edx = 0x3443B0;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAB6A; /* je: equal / zero */

loc_000EAB53: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x71C;
    ecx = 0x32F414;
    PUSH32(esp, 0x000EAB67u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAB67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAB6A: ;
    eax = 0x3443A8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAB8A; /* je: equal / zero */

loc_000EAB73: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x71D;
    ecx = 0x32F3F8;
    PUSH32(esp, 0x000EAB87u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAB87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAB8A: ;
    ecx = 0x3443A0;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EABAB; /* je: equal / zero */

loc_000EAB94: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x71E;
    ecx = 0x32F3D8;
    PUSH32(esp, 0x000EABA8u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EABA8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EABAB: ;
    edx = 0x344398;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EABCC; /* je: equal / zero */

loc_000EABB5: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x71F;
    ecx = 0x32F3B8;
    PUSH32(esp, 0x000EABC9u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EABC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EABCC: ;
    eax = 0x344390;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EABEC; /* je: equal / zero */

loc_000EABD5: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x720;
    ecx = 0x32F390;
    PUSH32(esp, 0x000EABE9u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EABE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EABEC: ;
    ecx = 0x344388;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAC0D; /* je: equal / zero */

loc_000EABF6: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x721;
    ecx = 0x32F370;
    PUSH32(esp, 0x000EAC0Au); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAC0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAC0D: ;
    edx = 0x344380;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAC2E; /* je: equal / zero */

loc_000EAC17: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x722;
    ecx = 0x32F350;
    PUSH32(esp, 0x000EAC2Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAC2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAC2E: ;
    eax = 0x344378;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAC4E; /* je: equal / zero */

loc_000EAC37: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x723;
    ecx = 0x32F330;
    PUSH32(esp, 0x000EAC4Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAC4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAC4E: ;
    ecx = 0x344370;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EAC6F; /* je: equal / zero */

loc_000EAC58: ;
    PUSH32(esp, 0x32F4A0);
    eax = 0x724;
    ecx = 0x32F310;
    PUSH32(esp, 0x000EAC6Cu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EAC6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EAC6F: ;
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

loc_000EAC92: ;
    ebx = 0;
    MEM32(ebp + -32) = 0;

loc_000EAC9E: ;
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
    ebx = MEM32(ebx * 4 + 0x33F998);
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
    edi = 0x33FCA8;
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
    mm3 = MMX_MEM(0x3443B8); /* movq */
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
    if ((_fa == 0)) goto loc_000EAEFA; /* je: equal / zero */

loc_000EADAB: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x3443A8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x3443A8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x3443B0); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + -44);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x344398)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -56);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x33F9D8);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x344398)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x3443A0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EAEA9; /* jge: greater or equal (signed >=) */

loc_000EAEA4: ;
    ebx = 0x10F;

loc_000EAEA9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EAEB6; /* jle: less or equal (signed <=) */

loc_000EAEB1: ;
    ebx = 0xA00;

loc_000EAEB6: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x344388); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
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
    goto loc_000EAFBD;

loc_000EAEFA: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x344390)); /* movd */
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
    ebx = MEM32(ebx * 4 + 0x33F9D8);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x344388); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EAF99; /* jge: greater or equal (signed >=) */

loc_000EAF94: ;
    ebx = 0x10F;

loc_000EAF99: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000EAFAD; /* jle: less or equal (signed <=) */

loc_000EAFA8: ;
    ebx = 0xA00;

loc_000EAFAD: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000EAFBD: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_000EB027; /* jle: less or equal (signed <=) */

loc_000EB022: ;
    ebx = 0x300;

loc_000EB027: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFD00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFD00u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB034; /* jge: greater or equal (signed >=) */

loc_000EB02F: ;
    ebx = 0xFFFFFD00u;

loc_000EB034: ;
    ecx = 0x3C0;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB041; /* jle: less or equal (signed <=) */

loc_000EB03F: ;
    eax = ecx;

loc_000EB041: ;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB04D; /* jle: less or equal (signed <=) */

loc_000EB049: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000EB04D: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000EAC9E; /* jne: not equal / not zero */

loc_000EB06D: ;
    ebx = 0;
    MEM32(ebp + -32) = ebx;

loc_000EB075: ;
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
    ebx = MEM32(ebx * 4 + 0x33F998);
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
    edi = 0x33FCA8;
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
    mm3 = MMX_MEM(0x3443B8); /* movq */
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
    if ((_fa == 0)) goto loc_000EB2D3; /* je: equal / zero */

loc_000EB184: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x3443A8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x3443A8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x3443B0); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + -36);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x344398)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -56);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x33F9D8);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x344398)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x3443A0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB282; /* jge: greater or equal (signed >=) */

loc_000EB27D: ;
    ebx = 0x10F;

loc_000EB282: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB28F; /* jle: less or equal (signed <=) */

loc_000EB28A: ;
    ebx = 0xA00;

loc_000EB28F: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x344388); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
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
    goto loc_000EB396;

loc_000EB2D3: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x344390)); /* movd */
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
    ebx = MEM32(ebx * 4 + 0x33F9D8);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x344388); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB372; /* jge: greater or equal (signed >=) */

loc_000EB36D: ;
    ebx = 0x10F;

loc_000EB372: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB386; /* jle: less or equal (signed <=) */

loc_000EB381: ;
    ebx = 0xA00;

loc_000EB386: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000EB396: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_000EB400; /* jle: less or equal (signed <=) */

loc_000EB3FB: ;
    ebx = 0x300;

loc_000EB400: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFD00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFD00u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB40D; /* jge: greater or equal (signed >=) */

loc_000EB408: ;
    ebx = 0xFFFFFD00u;

loc_000EB40D: ;
    ecx = 0x3C0;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB41A; /* jle: less or equal (signed <=) */

loc_000EB418: ;
    eax = ecx;

loc_000EB41A: ;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB426; /* jle: less or equal (signed <=) */

loc_000EB422: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000EB426: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000EB075; /* jne: not equal / not zero */

loc_000EB446: ;
    edi = MEM32(ebp + -24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = edi;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EAC92; /* jne: not equal / not zero */

loc_000EB45A: ;
    (void)0; /* emms - empty MMX state */
    goto loc_000EBAB6;

loc_000EB461: ;
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

loc_000EB486: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBAB4; /* je: equal / zero */

loc_000EB48E: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB535; /* jge: greater or equal (signed >=) */

loc_000EB530: ;
    ebx = 0x10F;

loc_000EB535: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB542; /* jle: less or equal (signed <=) */

loc_000EB53D: ;
    ebx = 0xA00;

loc_000EB542: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB5F7; /* jge: greater or equal (signed >=) */

loc_000EB5F2: ;
    ebx = 0x10F;

loc_000EB5F7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB604; /* jle: less or equal (signed <=) */

loc_000EB5FF: ;
    ebx = 0xA00;

loc_000EB604: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB6BA; /* jge: greater or equal (signed >=) */

loc_000EB6B5: ;
    ebx = 0x10F;

loc_000EB6BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB6C7; /* jle: less or equal (signed <=) */

loc_000EB6C2: ;
    ebx = 0xA00;

loc_000EB6C7: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB77D; /* jge: greater or equal (signed >=) */

loc_000EB778: ;
    ebx = 0x10F;

loc_000EB77D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB78A; /* jle: less or equal (signed <=) */

loc_000EB785: ;
    ebx = 0xA00;

loc_000EB78A: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB840; /* jge: greater or equal (signed >=) */

loc_000EB83B: ;
    ebx = 0x10F;

loc_000EB840: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB84D; /* jle: less or equal (signed <=) */

loc_000EB848: ;
    ebx = 0xA00;

loc_000EB84D: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB903; /* jge: greater or equal (signed >=) */

loc_000EB8FE: ;
    ebx = 0x10F;

loc_000EB903: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB910; /* jle: less or equal (signed <=) */

loc_000EB90B: ;
    ebx = 0xA00;

loc_000EB910: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB9C6; /* jge: greater or equal (signed >=) */

loc_000EB9C1: ;
    ebx = 0x10F;

loc_000EB9C6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB9D3; /* jle: less or equal (signed <=) */

loc_000EB9CE: ;
    ebx = 0xA00;

loc_000EB9D3: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EBA89; /* jge: greater or equal (signed >=) */

loc_000EBA84: ;
    ebx = 0x10F;

loc_000EBA89: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EBA96; /* jle: less or equal (signed <=) */

loc_000EBA91: ;
    ebx = 0xA00;

loc_000EBA96: ;
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
    goto loc_000EB486;

loc_000EBAB4: ;
    (void)0; /* emms - empty MMX state */

loc_000EBAB6: ;
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -4);
    eax = MEM32(ebp + -16);
    esi = MEM32(ebp + 8);

loc_000EBAC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000EBAF6; /* jge: greater or equal (signed >=) */

loc_000EBAC9: ;
    /* nop */

loc_000EBAD0: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx + edx * 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EBAE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EBADEu); } /* indirect call */
    }

loc_000EBAE1: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_000EBAD0; /* jl: less (signed <) */

loc_000EBAF6: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x50);
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EBB51; /* jne: not equal / not zero */

loc_000EBB05: ;
    ecx = 0;
    ebx = MEM32(ebp + -4);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + -20);

loc_000EBB13: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_000EBB13; /* jl: less (signed <) */

loc_000EBB41: ;
    (void)0; /* emms - empty MMX state */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000EBB51: ;
    edx = ebx + -4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EBBEA; /* jl: less (signed <) */

loc_000EBB5E: ;
    edi = edi;

loc_000EBB60: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_000EBB60; /* jle: less or equal (signed <=) */

loc_000EBBE7: ;
    ebx = MEM32(ebp + -4);

loc_000EBBEA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000EBC27; /* je: equal / zero */

loc_000EBBEE: ;
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

loc_000EBC27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EADCB
 * Original: 0x000EADCB - 0x000EBC35 (3690 bytes, 1074 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EADCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EADCB: ;
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x3443B0); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + -44);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x344398)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -56);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x33F9D8);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x344398)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x3443A0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EAEA9; /* jge: greater or equal (signed >=) */

loc_000EAEA4: ;
    ebx = 0x10F;

loc_000EAEA9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EAEB6; /* jle: less or equal (signed <=) */

loc_000EAEB1: ;
    ebx = 0xA00;

loc_000EAEB6: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x344388); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
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
    goto loc_000EAFBD;

    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x344390)); /* movd */
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
    ebx = MEM32(ebx * 4 + 0x33F9D8);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x344388); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EAF99; /* jge: greater or equal (signed >=) */

loc_000EAF94: ;
    ebx = 0x10F;

loc_000EAF99: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000EAFAD; /* jle: less or equal (signed <=) */

loc_000EAFA8: ;
    ebx = 0xA00;

loc_000EAFAD: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000EAFBD: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_000EB027; /* jle: less or equal (signed <=) */

loc_000EB022: ;
    ebx = 0x300;

loc_000EB027: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFD00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFD00u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB034; /* jge: greater or equal (signed >=) */

loc_000EB02F: ;
    ebx = 0xFFFFFD00u;

loc_000EB034: ;
    ecx = 0x3C0;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB041; /* jle: less or equal (signed <=) */

loc_000EB03F: ;
    eax = ecx;

loc_000EB041: ;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB04D; /* jle: less or equal (signed <=) */

loc_000EB049: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000EB04D: ;
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
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000EAC9E(); return; } /* jne: not equal / not zero */

loc_000EB06D: ;
    ebx = 0;
    MEM32(ebp + -32) = ebx;

loc_000EB075: ;
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
    ebx = MEM32(ebx * 4 + 0x33F998);
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
    edi = 0x33FCA8;
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
    mm3 = MMX_MEM(0x3443B8); /* movq */
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
    if ((_fa == 0)) goto loc_000EB2D3; /* je: equal / zero */

loc_000EB184: ;
    mm0 = MMX_MEM(eax + 0x10); /* movq */
    mm1 = MMX_PSRAD(mm1, 31u); /* psrad */
    mm1 = MMX_POR(mm1, MMX_MEM(0x3443A8)); /* por */
    mm4 = MMX_PADDSW(mm4, mm2); /* paddsw */
    mm4 = MMX_PSRAW(mm4, 15u); /* psraw */
    mm5 = mm3; /* movq */
    mm4 = MMX_POR(mm4, MMX_MEM(0x3443A8)); /* por */
    mm0 = MMX_PSLLD(mm0, 16u); /* pslld */
    mm7 = MMX_MEM(0x3443B0); /* movq */
    mm4 = MMX_PSRLQ(mm4, 16u); /* psrlq */
    mm4 = MMX_PMULLW(mm4, mm1); /* pmullw */
    esi = MEM32(ebp + -36);
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm5 = MMX_PSRLQ(mm5, 32u); /* psrlq */
    mm1 = MMX_PSLLQ(mm1, 32u); /* psllq */
    eax = 0x7CFF0000;
    mm2 = mm4; /* movq */
    mm1 = MMX_PSRLQ(mm1, 48u); /* psrlq */
    mm4 = MMX_PAND(mm4, MMX_MEM(0x344398)); /* pand */
    mm4 = MMX_POR(mm4, mm0); /* por */
    ebx = MEM32(ebp + -56);
    mm6 = MMX_FROM32(MEM32(esi + 4)); /* movd */
    mm3 = MMX_PMADDWD(mm3, mm4); /* pmaddwd */
    ecx = 0xF6;
    ebx = MEM32(ebx * 4 + 0x33F9D8);
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
    mm3 = MMX_PAND(mm3, MMX_MEM(0x344398)); /* pand */
    mm0 = MMX_PSRLQ(mm0, 32u); /* psrlq */
    mm3 = MMX_POR(mm3, MMX_MEM(0x3443A0)); /* por */
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    mm2 = mm3; /* movq */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm2 = MMX_PSUBW(mm2, mm3); /* psubw */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm2 = MMX_PSLLD(mm2, 16u); /* pslld */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    mm1 = MMX_PMADDWD(mm1, mm5); /* pmaddwd */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB282; /* jge: greater or equal (signed >=) */

loc_000EB27D: ;
    ebx = 0x10F;

loc_000EB282: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB28F; /* jle: less or equal (signed <=) */

loc_000EB28A: ;
    ebx = 0xA00;

loc_000EB28F: ;
    MEM32(esi + 4) = ebx;
    mm2 = MMX_MEM(0x344388); /* movq */
    mm1 = MMX_PSRAD(mm1, 8u); /* psrad */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
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
    goto loc_000EB396;

loc_000EB2D3: ;
    mm1 = MMX_MEM(eax + 0x10); /* movq */
    mm3 = MMX_FROM32(MEM32(0x344390)); /* movd */
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
    ebx = MEM32(ebx * 4 + 0x33F9D8);
    mm0 = MMX_POR(mm0, mm6); /* por */
    mm6 = MMX_MEM(esi + 0x2A); /* movq */
    mm0 = MMX_PSRAD(mm0, 32u); /* psrad */
    mm0 = MMX_PAND(mm0, MMX_MEM(0x344380)); /* pand */
    mm7 = MMX_PMADDWD(mm7, mm4); /* pmaddwd */
    mm2 = MMX_MEM(0x344388); /* movq */
    mm6 = MMX_PCMPGTW(mm6, MMX_MEM(0x344370)); /* pcmpgtw */
    mm6 = MMX_PANDN(mm6, MMX_MEM(0x344370)); /* pandn */
    mm2 = MMX_PMULLW(mm2, MMX_MEM(esi + 0x18)); /* pmullw */
    mm0 = MMX_POR(mm0, MMX_MEM(0x344378)); /* por */
    mm6 = MMX_PADDUSW(mm6, MMX_MEM(0x3443A8)); /* paddusw */
    edi = mm7.ud[0]; /* movd */
    mm0 = MMX_PMULLW(mm0, mm6); /* pmullw */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB372; /* jge: greater or equal (signed >=) */

loc_000EB36D: ;
    ebx = 0x10F;

loc_000EB372: ;
    mm2 = MMX_PADDSW(mm2, mm0); /* paddsw */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    mm2 = MMX_PSRAW(mm2, 8u); /* psraw */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB386; /* jle: less or equal (signed <=) */

loc_000EB381: ;
    ebx = 0xA00;

loc_000EB386: ;
    MEM32(esi + 4) = ebx;
    ebx = 0x83000000u;
    ecx = 0x3C0;
    mm6 = MMX_PXOR(mm6, mm6); /* pxor */

loc_000EB396: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_000EB400; /* jle: less or equal (signed <=) */

loc_000EB3FB: ;
    ebx = 0x300;

loc_000EB400: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFD00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFD00u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EB40D; /* jge: greater or equal (signed >=) */

loc_000EB408: ;
    ebx = 0xFFFFFD00u;

loc_000EB40D: ;
    ecx = 0x3C0;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB41A; /* jle: less or equal (signed <=) */

loc_000EB418: ;
    eax = ecx;

loc_000EB41A: ;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB426; /* jle: less or equal (signed <=) */

loc_000EB422: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000EB426: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000EB075; /* jne: not equal / not zero */

loc_000EB446: ;
    edi = MEM32(ebp + -24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = edi;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000EAC92(); return; } /* jne: not equal / not zero */

loc_000EB45A: ;
    (void)0; /* emms - empty MMX state */
    goto loc_000EBAB6;

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

loc_000EB486: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBAB4; /* je: equal / zero */

loc_000EB48E: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB535; /* jge: greater or equal (signed >=) */

loc_000EB530: ;
    ebx = 0x10F;

loc_000EB535: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB542; /* jle: less or equal (signed <=) */

loc_000EB53D: ;
    ebx = 0xA00;

loc_000EB542: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB5F7; /* jge: greater or equal (signed >=) */

loc_000EB5F2: ;
    ebx = 0x10F;

loc_000EB5F7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB604; /* jle: less or equal (signed <=) */

loc_000EB5FF: ;
    ebx = 0xA00;

loc_000EB604: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB6BA; /* jge: greater or equal (signed >=) */

loc_000EB6B5: ;
    ebx = 0x10F;

loc_000EB6BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB6C7; /* jle: less or equal (signed <=) */

loc_000EB6C2: ;
    ebx = 0xA00;

loc_000EB6C7: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB77D; /* jge: greater or equal (signed >=) */

loc_000EB778: ;
    ebx = 0x10F;

loc_000EB77D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB78A; /* jle: less or equal (signed <=) */

loc_000EB785: ;
    ebx = 0xA00;

loc_000EB78A: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB840; /* jge: greater or equal (signed >=) */

loc_000EB83B: ;
    ebx = 0x10F;

loc_000EB840: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB84D; /* jle: less or equal (signed <=) */

loc_000EB848: ;
    ebx = 0xA00;

loc_000EB84D: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB903; /* jge: greater or equal (signed >=) */

loc_000EB8FE: ;
    ebx = 0x10F;

loc_000EB903: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB910; /* jle: less or equal (signed <=) */

loc_000EB90B: ;
    ebx = 0xA00;

loc_000EB910: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB9C6; /* jge: greater or equal (signed >=) */

loc_000EB9C1: ;
    ebx = 0x10F;

loc_000EB9C6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB9D3; /* jle: less or equal (signed <=) */

loc_000EB9CE: ;
    ebx = 0xA00;

loc_000EB9D3: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EBA89; /* jge: greater or equal (signed >=) */

loc_000EBA84: ;
    ebx = 0x10F;

loc_000EBA89: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EBA96; /* jle: less or equal (signed <=) */

loc_000EBA91: ;
    ebx = 0xA00;

loc_000EBA96: ;
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
    goto loc_000EB486;

loc_000EBAB4: ;
    (void)0; /* emms - empty MMX state */

loc_000EBAB6: ;
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -4);
    eax = MEM32(ebp + -16);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000EBAF6; /* jge: greater or equal (signed >=) */

loc_000EBAC9: ;
    /* nop */

loc_000EBAD0: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx + edx * 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EBAE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EBADEu); } /* indirect call */
    }

loc_000EBAE1: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_000EBAD0; /* jl: less (signed <) */

loc_000EBAF6: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x50);
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EBB51; /* jne: not equal / not zero */

loc_000EBB05: ;
    ecx = 0;
    ebx = MEM32(ebp + -4);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + -20);

loc_000EBB13: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_000EBB13; /* jl: less (signed <) */

loc_000EBB41: ;
    (void)0; /* emms - empty MMX state */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000EBB51: ;
    edx = ebx + -4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EBBEA; /* jl: less (signed <) */

loc_000EBB5E: ;
    edi = edi;

loc_000EBB60: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_000EBB60; /* jle: less or equal (signed <=) */

loc_000EBBE7: ;
    ebx = MEM32(ebp + -4);

loc_000EBBEA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000EBC27; /* je: equal / zero */

loc_000EBBEE: ;
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

loc_000EBC27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB97E
 * Original: 0x000EB97E - 0x000EBC35 (695 bytes, 223 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB97E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EB97E: ;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EB9C6; /* jge: greater or equal (signed >=) */

loc_000EB9C1: ;
    ebx = 0x10F;

loc_000EB9C6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EB9D3; /* jle: less or equal (signed <=) */

loc_000EB9CE: ;
    ebx = 0xA00;

loc_000EB9D3: ;
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
    ebx = MEM32(ebx * 4 + 0x33FA18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x33FCA8;
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
    ebx = MEM32(edi * 4 + 0x33FA98);
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
    if (CMP_GE(_fas, _fbs)) goto loc_000EBA89; /* jge: greater or equal (signed >=) */

loc_000EBA84: ;
    ebx = 0x10F;

loc_000EBA89: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EBA96; /* jle: less or equal (signed <=) */

loc_000EBA91: ;
    ebx = 0xA00;

loc_000EBA96: ;
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
    g_seh_ebp = ebp; sub_000EB486(); return; /* tail jmp 0x000EB486 */

    (void)0; /* emms - empty MMX state */
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + -4);
    eax = MEM32(ebp + -16);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000EBAF6; /* jge: greater or equal (signed >=) */

loc_000EBAC9: ;
    /* nop */

loc_000EBAD0: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx + edx * 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x000EBAE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EBADEu); } /* indirect call */
    }

loc_000EBAE1: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_000EBAD0; /* jl: less (signed <) */

loc_000EBAF6: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x50);
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EBB51; /* jne: not equal / not zero */

loc_000EBB05: ;
    ecx = 0;
    ebx = MEM32(ebp + -4);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + -20);

loc_000EBB13: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_000EBB13; /* jl: less (signed <) */

loc_000EBB41: ;
    (void)0; /* emms - empty MMX state */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000EBB51: ;
    edx = ebx + -4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EBBEA; /* jl: less (signed <) */

loc_000EBB5E: ;
    edi = edi;

loc_000EBB60: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_000EBB60; /* jle: less or equal (signed <=) */

loc_000EBBE7: ;
    ebx = MEM32(ebp + -4);

loc_000EBBEA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000EBC27; /* je: equal / zero */

loc_000EBBEE: ;
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

loc_000EBC27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EBC50
 * Original: 0x000EBC50 - 0x000EBCB2 (98 bytes, 41 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBC50: ;
    PUSH32(esp, esi);
    eax = 0x74;
    PUSH32(esp, 0x000EBC5Bu); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000EBC5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBCA3; /* je: equal / zero */

loc_000EBC5F: ;
    esi = eax;
    PUSH32(esp, 0x000EBC66u); RECOMP_ABI_CALL(0x000EBCE0u, sub_000EBCE0); /* call 0x000EBCE0 */

loc_000EBC66: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBCA3; /* je: equal / zero */

loc_000EBC6C: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000EBC7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EBC7Cu); } /* indirect call */
    }

loc_000EBC7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EBC91; /* jne: not equal / not zero */

loc_000EBC83: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000EBC8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EBC89u); } /* indirect call */
    }

loc_000EBC8C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000EBC91: ;
    PUSH32(esp, 0x000EBC96u); RECOMP_ABI_CALL(0x000EBD50u, sub_000EBD50); /* call 0x000EBD50 */

loc_000EBC96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EBCA8; /* jne: not equal / not zero */

loc_000EBC9A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000EBCA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EBCA0u); } /* indirect call */
    }

loc_000EBCA3: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000EBCA8: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EBCC0
 * Original: 0x000EBCC0 - 0x000EBCDA (26 bytes, 11 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBCC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBCD8; /* je: equal / zero */

loc_000EBCCB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000EBCD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EBCCFu); } /* indirect call */
    }

loc_000EBCD2: ;
    MEM32(esi) = 0;

loc_000EBCD8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EBCE0
 * Original: 0x000EBCE0 - 0x000EBD26 (70 bytes, 23 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBCE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBCE0: ;
    eax = esi;
    PUSH32(esp, 0x000EBCE7u); RECOMP_ABI_CALL(0x000E7340u, sub_000E7340); /* call 0x000E7340 */

loc_000EBCE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    MEM32(esi) = 0x32F918;
    MEM32(esi + 0x1C) = 0xEBCC0;
    PUSH32(esp, 0x000EBD20u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000EBD20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000EBD30
 * Original: 0x000EBD30 - 0x000EBD4C (28 bytes, 10 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBD30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000EBD38u); RECOMP_ABI_CALL(0x000EBD90u, sub_000EBD90); /* call 0x000EBD90 */

loc_000EBD38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000EBD48; /* je: equal / zero */

loc_000EBD41: ;
    PUSH32(esp, 0x000EBD46u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000EBD46: ;
    eax = esi;

loc_000EBD48: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EBD50
 * Original: 0x000EBD50 - 0x000EBD8D (61 bytes, 24 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBD50: ;
    ecx = MEM32(esi + 0x28);
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
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x000EBD69u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000EBD69: ;
    ecx = MEM32(esi + 0x28);
    edi = eax;
    eax = 0x400;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x48) = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x44) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EBD90
 * Original: 0x000EBD90 - 0x000EBDB0 (32 bytes, 8 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EBD90: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x32F918;
    if (CMP_EQ(_fa, _fb)) goto loc_000EBDA2; /* je: equal / zero */

loc_000EBD9D: ;
    PUSH32(esp, 0x000EBDA2u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000EBDA2: ;
    MEM32(esi + 0x48) = 0;
    ecx = esi;
    g_seh_ebp = ebp; sub_000E7380(); return; /* tail jmp 0x000E7380 */

}

/**
 * sub_000EBDB0
 * Original: 0x000EBDB0 - 0x000EBDE0 (48 bytes, 23 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBDB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000EBDBEu); RECOMP_ABI_CALL(0x000DA290u, sub_000DA290); /* call 0x000DA290 */

loc_000EBDBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBDD7; /* je: equal / zero */

loc_000EBDC2: ;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0x10 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBDD0; /* je: equal / zero */

loc_000EBDC9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000EBDD0: ;
    ecx = ZX16(MEM16(edi + 6));
    MEM32(esi + 0x28) = ecx;

loc_000EBDD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EBDE0
 * Original: 0x000EBDE0 - 0x000EBE0A (42 bytes, 18 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBDE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EBDECu); RECOMP_ABI_CALL(0x000D83E0u, sub_000D83E0); /* call 0x000D83E0 */

loc_000EBDEC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EBDF2u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000EBDF2: ;
    ecx = ZX16(MEM16(esi + 0x16));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
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
 * sub_000EBE10
 * Original: 0x000EBE10 - 0x000EBE37 (39 bytes, 13 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EBE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBE10: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBE32; /* je: equal / zero */

loc_000EBE17: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EBE32; /* jne: not equal / not zero */

loc_000EBE1F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x20) = 0;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000EBE32: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EBE40
 * Original: 0x000EBE40 - 0x000EBE5A (26 bytes, 10 insns)
 * Folder: sound (between: 0x000EA83B and 0x000EBE60)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBE40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EBE4B; /* jne: not equal / not zero */

loc_000EBE48: ;
    esp += 8; return; /* ret 4 */

loc_000EBE4B: ;
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
 * sub_000EBE60
 * Original: 0x000EBE60 - 0x000EBEAA (74 bytes, 26 insns)
 * Folder: sound (source: timaadpcm.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBE60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000EBE8C; /* je: equal / zero */

loc_000EBE70: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x32FBBC);
    edx = 0x32FC18;
    ecx = 0x32FBC8;
    PUSH32(esp, 0x000EBE89u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EBE89: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EBE8C: ;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EBEB0
 * Original: 0x000EBEB0 - 0x000EBEDE (46 bytes, 13 insns)
 * Folder: sound (source: timaadpcm.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBEB0: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EBEBF; /* jne: not equal / not zero */

loc_000EBEB7: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EBEDB; /* je: equal / zero */

loc_000EBEBF: ;
    PUSH32(esp, 0xD8);
    PUSH32(esp, 0x32FB78);
    edx = 0x32FB98;
    ecx = 0x32FBC8;
    PUSH32(esp, 0x000EBED8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EBED8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EBEDB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EBEE0
 * Original: 0x000EBEE0 - 0x000EBEFE (30 bytes, 12 insns)
 * Folder: sound (between: 0x000EBEB0 and 0x000EBF00)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBEE0: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EBEEC; /* jne: not equal / not zero */

loc_000EBEE6: ;
    eax = 0xFFFE0000u;
    esp += 4; return; /* ret */

loc_000EBEEC: ;
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EBEF9u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000EBEF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EBF00
 * Original: 0x000EBF00 - 0x000EC189 (649 bytes, 221 insns)
 * Folder: sound (source: timaadpcm.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EBF00: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    MEM32(esi) = ebx;
    edx = MEM32(edi + 0x44);
    ecx = MEM32(edi + 0x28);
    eax = MEM32(ebp);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000EBF52; /* jbe: below or equal (unsigned <=) */

loc_000EBF2C: ;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edi + 0x48);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x000EBF39u); RECOMP_ABI_CALL(0x000ED260u, sub_000ED260); /* call 0x000ED260 */

loc_000EBF39: ;
    ecx = MEM32(edi + 0x28);
    MEM32(edi + 0x48) = eax;
    edx = MEM32(ebp);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x44) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EC0D1; /* je: equal / zero */

loc_000EBF52: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC063; /* je: equal / zero */

loc_000EBF5D: ;
    edx = MEM32(ebp + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ebp);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000EBF73; /* jb: below (unsigned <) */

loc_000EBF6B: ;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = eax;
    goto loc_000EBF79;

loc_000EBF73: ;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = edx;

loc_000EBF79: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000EBF8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EBF89u); } /* indirect call */
    }

loc_000EBF8C: ;
    ecx = MEM32(esp + 0x1C);
    ebx = eax;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC057; /* jne: not equal / not zero */

loc_000EBF9E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC057; /* je: equal / zero */

loc_000EBFA7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC057; /* je: equal / zero */

loc_000EBFB0: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(edi + 0x40);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x40) = edx;
    edx = MEM32(esi);
    ebp = MEM32(ebp);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    SET_LO8(eax, MEM8(edi + 0x6A));
    SET_LO16(edx, MEM16(edi + 0x68));
    MEM8(edi + 0x4E) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x6E));
    MEM8(edi + 0x52) = LO8(eax);
    eax = MEM32(edi + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(edi + 0x4C) = LO16(edx);
    SET_LO16(edx, MEM16(edi + 0x6C));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = ebp;
    MEM16(edi + 0x50) = LO16(edx);
    if (CMP_BE(_fa, _fb)) goto loc_000EC028; /* jbe: below or equal (unsigned <=) */

loc_000EBFFA: ;
    ecx = MEM32(esp + 0x20);
    edi = edi;

loc_000EC000: ;
    SET_LO16(eax, MEM16(ecx));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    MEM16(ecx) = LO16(edx);
    eax = MEM32(edi + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_000EC000; /* jb: below (unsigned <) */

loc_000EC024: ;
    ebp = MEM32(esp + 0xC);

loc_000EC028: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC037; /* jne: not equal / not zero */

loc_000EC02D: ;
    MEM32(esp + 0x14) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000EC037: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000EC072; /* ja: above (unsigned >) */

loc_000EC03B: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC04C; /* je: equal / zero */

loc_000EC043: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = 5;
    if (CMP_EQ(_fa, _fb)) goto loc_000EC04E; /* je: equal / zero */

loc_000EC04C: ;
    eax = ebx;

loc_000EC04E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000EC057: ;
    PUSH32(esp, 0x109);
    edx = 0x32FB3C;
    goto loc_000EC0BF;

loc_000EC063: ;
    ecx = MEM32(ebp);
    MEM32(esp + 0xC) = ecx;
    ebp = ecx;
    goto loc_000EC037;

loc_000EC06E: ;
    ebp = MEM32(esp + 0xC);

loc_000EC072: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC03B; /* jne: not equal / not zero */

loc_000EC076: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(edi + 0x48);
    eax = ebp;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edi + 0x44);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, edi);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) eax = ecx; /* cmovb */
    ecx = MEM32(edi + 0x20);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x24;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000EC0A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EC0A3u); } /* indirect call */
    }

loc_000EC0A6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC0DD; /* jne: not equal / not zero */

loc_000EC0AD: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC0EC; /* je: equal / zero */

loc_000EC0B5: ;
    PUSH32(esp, 0x139);
    edx = 0x32FB00;

loc_000EC0BF: ;
    PUSH32(esp, 0x324878);
    ecx = 0x32FBC8;
    PUSH32(esp, 0x000EC0CEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EC0CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EC0D1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000EC0DD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC0EC; /* jne: not equal / not zero */

loc_000EC0E2: ;
    MEM32(esp + 0x14) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000EC0EC: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi + 0x28);
    ebp = eax * 4;
    ebp = ebp >> LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC10F; /* jne: not equal / not zero */

loc_000EC101: ;
    _fa = (uint32_t)(MEM8(edi + 0x70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x70), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC10F; /* jne: not equal / not zero */

loc_000EC107: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000EC10F; /* jb: below (unsigned <) */

loc_000EC10C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000EC10F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0x28);
    esi = edi + 0x4C;
    if (CMP_NE(_fa, _fb)) goto loc_000EC127; /* jne: not equal / not zero */

loc_000EC11E: ;
    ecx = MEM32(edi + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    goto loc_000EC136;

loc_000EC127: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x10));
    eax = MEM32(edi + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    ecx = eax + ecx * 2;

loc_000EC136: ;
    edx = MEM32(edi + 0x48);
    eax = ebp;
    PUSH32(esp, 0x000EC140u); RECOMP_ABI_CALL(0x000ECFF0u, sub_000ECFF0); /* call 0x000ECFF0 */

loc_000EC140: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC168; /* jne: not equal / not zero */

loc_000EC148: ;
    _fa = (uint32_t)(MEM8(edi + 0x70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x70), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC168; /* jne: not equal / not zero */

loc_000EC14E: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edx + 4);
    PUSH32(esp, 2);
    ecx = edi + 0x72;
    PUSH32(esp, ecx);
    ecx = eax + ebp * 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EC164u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EC164: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000EC168: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    MEM32(ecx) = edx;
    if (CMP_A(_fa, _fb)) goto loc_000EC06E; /* ja: above (unsigned >) */

loc_000EC184: ;
    goto loc_000EC03B;

}

/**
 * sub_000EC190
 * Original: 0x000EC190 - 0x000EC451 (705 bytes, 228 insns)
 * Folder: sound (source: timaadpcm.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC190: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000EC1CB; /* jne: not equal / not zero */

loc_000EC1AF: ;
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x32EDC0);
    edx = 0x32FADC;
    ecx = 0x32FBC8;
    PUSH32(esp, 0x000EC1C8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EC1C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EC1CB: ;
    ebp = MEM32(esp + 0x24);
    MEM32(ebp) = 0;
    eax = MEM32(edi + 8);
    ebx = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC1ED; /* jne: not equal / not zero */

loc_000EC1E2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000EC1ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC1FB; /* jne: not equal / not zero */

loc_000EC1F2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000EC1FB: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000EC236; /* jne: not equal / not zero */

loc_000EC203: ;
    esi = edi;
    PUSH32(esp, 0x000EC20Au); RECOMP_ABI_CALL(0x000EC480u, sub_000EC480); /* call 0x000EC480 */

loc_000EC20A: ;
    MEM32(esp + 0x10) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000EC2A7; /* ja: above (unsigned >) */

loc_000EC218: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xEC454); /* switch: 8 entries, 4 targets */
    if (_jt == 0x000EC21Fu) goto loc_000EC21F;
    if (_jt == 0x000EC22Fu) goto loc_000EC22F;
    if (_jt == 0x000EC2A7u) goto loc_000EC2A7;
    if (_jt == 0x000EC329u) goto loc_000EC329;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000EC21F: ;
    POP32(esp, esi);
    MEM32(edi + 8) = ebx;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000EC22F: ;
    MEM32(edi + 0x30) = 1;

loc_000EC236: ;
    eax = MEM32(esp + 0x24);
    ebx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EC2D3; /* je: equal / zero */

loc_000EC252: ;
    PUSH32(esp, 2);
    ecx = edi + 0x36;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EC25Eu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EC25E: ;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x38) = 0;
    ecx = MEM32(ebp);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;
    eax = MEM32(edi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EC2D3; /* je: equal / zero */

loc_000EC286: ;
    eax = MEM32(edi + 0x2C);
    MEM32(edi + 8) = 2;
    edx = MEM32(ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi + 0x2C) = eax;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 4;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000EC2A7: ;
    PUSH32(esp, 0x192);
    PUSH32(esp, 0x324878);
    edx = 0x32FA9C;
    ecx = 0x32FBC8;
    PUSH32(esp, 0x000EC2C0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EC2C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi + 8) = ebx;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000EC2D3: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC2EC; /* jne: not equal / not zero */

loc_000EC2DA: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EC2EC; /* je: equal / zero */

loc_000EC2E1: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = 1;
    goto loc_000EC2F0;

loc_000EC2EC: ;
    esi = MEM32(esp + 0x14);

loc_000EC2F0: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EC2FFu); RECOMP_ABI_CALL(0x000EBF00u, sub_000EBF00); /* call 0x000EBF00 */

loc_000EC2FF: ;
    edx = MEM32(ebp);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(ebp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EC42D; /* je: equal / zero */

loc_000EC318: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC42D; /* je: equal / zero */

loc_000EC321: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC338; /* jne: not equal / not zero */

loc_000EC326: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) + edx;
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EC329: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 6;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000EC338: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC3EA; /* je: equal / zero */

loc_000EC340: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    esi = edi + 0x34;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x20) = 2;
    MEM32(esp + 0x2C) = 0;
    ebx = ebx + ecx * 2;
    PUSH32(esp, 0x000EC369u); RECOMP_ABI_CALL(0x000EBF00u, sub_000EBF00); /* call 0x000EBF00 */

loc_000EC369: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000EC396; /* jbe: below or equal (unsigned <=) */

loc_000EC375: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EC37Eu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EC37E: ;
    esi = 1;
    MEM32(edi + 0x38) = esi;
    eax = MEM32(ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x14);
    goto loc_000EC39B;

loc_000EC396: ;
    esi = 1;

loc_000EC39B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC3E2; /* je: equal / zero */

loc_000EC3A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC3E2; /* je: equal / zero */

loc_000EC3A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC3E6; /* jne: not equal / not zero */

loc_000EC3AA: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000EC3CD; /* jbe: below or equal (unsigned <=) */

loc_000EC3B1: ;
    PUSH32(esp, 0x1EA);
    PUSH32(esp, 0x32FA54);
    edx = 0x32FA64;
    ecx = 0x32FBC8;
    PUSH32(esp, 0x000EC3CAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EC3CA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EC3CD: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC3DD; /* jne: not equal / not zero */

loc_000EC3D3: ;
    MEM32(esp + 0x28) = 4;
    goto loc_000EC3E6;

loc_000EC3DD: ;
    MEM32(edi + 0x3C) = esi;
    goto loc_000EC3E6;

loc_000EC3E2: ;
    MEM32(esp + 0x28) = eax;

loc_000EC3E6: ;
    eax = MEM32(esp + 0x28);

loc_000EC3EA: ;
    ecx = MEM32(esp + 0x10);
    esi = 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC418; /* jne: not equal / not zero */

loc_000EC3F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC412; /* je: equal / zero */

loc_000EC3FB: ;
    PUSH32(esp, 0x32FBC8);
    eax = 0x1F5;
    ecx = 0x32D53C;
    PUSH32(esp, 0x000EC40Fu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EC40F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EC412: ;
    MEM32(esp + 0x28) = esi;
    eax = esi;

loc_000EC418: ;
    ecx = MEM32(ebp);
    edx = MEM32(edi + 0x2C);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x2C) = edx;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000EC42D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC435; /* jne: not equal / not zero */

loc_000EC432: ;
    MEM32(edi + 0x38) = esi;

loc_000EC435: ;
    edx = MEM32(ebp);
    ecx = MEM32(edi + 0x2C);
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x2C) = ecx;
    MEM32(edi + 8) = 2;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000EC480
 * Original: 0x000EC480 - 0x000EC5B8 (312 bytes, 100 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC480: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ebx = esi + 0x58;
    edx = esp + 0x10;
    MEM32(esp + 0x41C) = eax;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = 0x1C;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000EC4B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EC4B3u); } /* indirect call */
    }

loc_000EC4B6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC4D2; /* jne: not equal / not zero */

loc_000EC4BD: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40C);
    PUSH32(esp, 0x000EC4CBu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000EC4CB: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000EC4D2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC4E8; /* je: equal / zero */

loc_000EC4D6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC4E8; /* je: equal / zero */

loc_000EC4DB: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x32FA08);
    goto loc_000EC51E;

loc_000EC4E8: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC50E; /* je: equal / zero */

loc_000EC4F2: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x32F9B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EC507u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000EC507: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    goto loc_000EC52D;

loc_000EC50E: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC552; /* je: equal / zero */

loc_000EC513: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x32F960);

loc_000EC51E: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EC528u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000EC528: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);

loc_000EC52D: ;
    edx = 0xD;
    PUSH32(esp, 0x000EC537u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000EC537: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40C);
    PUSH32(esp, 0x000EC54Bu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000EC54B: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000EC552: ;
    SET_LO16(edx, MEM16(esi + 0x66));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, LO8(edx));
    SET_LO16(ecx, ZX8(HI8(edx)));
    SET_LO16(edx, MEM16(esi + 0x68));
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO16(eax, ZX8(HI8(edx)));
    SET_HI8(eax, LO8(edx));
    SET_LO16(edx, MEM16(esi + 0x6C));
    MEM16(esi + 0x66) = LO16(ecx);
    MEM16(esi + 0x68) = LO16(eax);
    SET_LO16(eax, ZX8(HI8(edx)));
    SET_HI8(eax, LO8(edx));
    SET_LO16(edx, MEM16(esi + 0x72));
    MEM16(esi + 0x6C) = LO16(eax);
    SET_LO16(eax, ZX8(HI8(edx)));
    SET_HI8(eax, LO8(edx));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x72) = LO16(eax);
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = SX16(LO16(ecx));
    ecx = MEM32(esp + 0x414);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x40) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 0x54) = edx;
    PUSH32(esp, 0x000EC5B1u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000EC5B1: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EC5C0
 * Original: 0x000EC5C0 - 0x000EC5C4 (4 bytes, 2 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC5C0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EC5D0
 * Original: 0x000EC5D0 - 0x000EC619 (73 bytes, 30 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC5D0: ;
    PUSH32(esp, esi);
    eax = 0x30;
    PUSH32(esp, 0x000EC5DBu); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000EC5DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC60A; /* je: equal / zero */

loc_000EC5DF: ;
    PUSH32(esp, 0x000EC5E4u); RECOMP_ABI_CALL(0x000EC620u, sub_000EC620); /* call 0x000EC620 */

loc_000EC5E4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC60A; /* je: equal / zero */

loc_000EC5EA: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000EC5FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EC5FAu); } /* indirect call */
    }

loc_000EC5FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC60F; /* jne: not equal / not zero */

loc_000EC601: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000EC60Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EC607u); } /* indirect call */
    }

loc_000EC60A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000EC60F: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EC620
 * Original: 0x000EC620 - 0x000EC641 (33 bytes, 9 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC620: ;
    PUSH32(esp, 0x000EC625u); RECOMP_ABI_CALL(0x000E7340u, sub_000E7340); /* call 0x000E7340 */

loc_000EC625: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x32FC40;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x1C) = 0xEBCC0;
    esp += 4; return; /* ret */

}

/**
 * sub_000EC650
 * Original: 0x000EC650 - 0x000EC66C (28 bytes, 10 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC650: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000EC658u); RECOMP_ABI_CALL(0x000EC670u, sub_000EC670); /* call 0x000EC670 */

loc_000EC658: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000EC668; /* je: equal / zero */

loc_000EC661: ;
    PUSH32(esp, 0x000EC666u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000EC666: ;
    eax = esi;

loc_000EC668: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EC670
 * Original: 0x000EC670 - 0x000EC67B (11 bytes, 2 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC670: ;
    MEM32(ecx) = 0x32FC40;
    g_seh_ebp = ebp; sub_000E7380(); return; /* tail jmp 0x000E7380 */

}

/**
 * sub_000EC680
 * Original: 0x000EC680 - 0x000EC6AC (44 bytes, 19 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC680: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000EC68Eu); RECOMP_ABI_CALL(0x000DA290u, sub_000DA290); /* call 0x000DA290 */

loc_000EC68E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC6A7; /* je: equal / zero */

loc_000EC692: ;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC6A5; /* jne: not equal / not zero */

loc_000EC699: ;
    ecx = ZX16(MEM16(edi + 6));
    POP32(esp, edi);
    MEM32(esi + 0x2C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000EC6A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000EC6A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EC6B0
 * Original: 0x000EC6B0 - 0x000EC6D0 (32 bytes, 13 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC6B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC6B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EC6BCu); RECOMP_ABI_CALL(0x000D83E0u, sub_000D83E0); /* call 0x000D83E0 */

loc_000EC6BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EC6C2u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000EC6C2: ;
    ecx = ZX16(MEM16(esi + 0x16));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EC6D0
 * Original: 0x000EC6D0 - 0x000EC6E7 (23 bytes, 10 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EC6D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000EC6E7(); return; } /* je: equal / zero */

loc_000EC6DD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EC6E7
 * Original: 0x000EC6E7 - 0x000EC726 (63 bytes, 26 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC6E7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC6E7: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = esp + 8;
    eax = edi;
    PUSH32(esp, 0x000EC6F7u); RECOMP_ABI_CALL(0x000DA300u, sub_000DA300); /* call 0x000DA300 */

loc_000EC6F7: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000EC703u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EC700u); } /* indirect call */
    }

loc_000EC703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC712; /* jne: not equal / not zero */

loc_000EC707: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000EC712: ;
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
 * sub_000EC730
 * Original: 0x000EC730 - 0x000EC76F (63 bytes, 30 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC730: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000EC743u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EC740u); } /* indirect call */
    }

loc_000EC743: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC75E; /* je: equal / zero */

loc_000EC747: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000EC752u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EC750u); } /* indirect call */
    }

loc_000EC752: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC765; /* jne: not equal / not zero */

loc_000EC757: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000EC75Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EC75Cu); } /* indirect call */
    }

loc_000EC75E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000EC765: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EC770
 * Original: 0x000EC770 - 0x000EC79C (44 bytes, 21 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC770: ;
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
    PUSH32(esp, 0x000EC788u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000EC788: ;
    ecx = MEM32(esi + 0x2C);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x1C); PUSH32(esp, 0x000EC796u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EC793u); } /* indirect call */
    }

loc_000EC796: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EC7A0
 * Original: 0x000EC7A0 - 0x000EC7CF (47 bytes, 20 insns)
 * Folder: sound (between: 0x000EC190 and 0x000EC7D0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC7A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC7B0; /* jne: not equal / not zero */

loc_000EC7A9: ;
    eax = 0xFFFE0000u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000EC7B0: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000EC7B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EC7B5u); } /* indirect call */
    }

loc_000EC7B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EC7CD; /* jl: less (signed <) */

loc_000EC7BC: ;
    ecx = MEM32(esi + 0x2C);
    esi = MEM32(esi + 0x18);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EC7CAu); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000EC7CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EC7CD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EC7D0
 * Original: 0x000EC7D0 - 0x000EC8B0 (224 bytes, 75 insns)
 * Folder: sound (source: TPCM.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC7D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000EC7F8; /* jne: not equal / not zero */

loc_000EC7E4: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    eax = 2;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000EC7F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC80C; /* jne: not equal / not zero */

loc_000EC7FD: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000EC80C: ;
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
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000EC833u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EC830u); } /* indirect call */
    }

loc_000EC833: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_000EC85D; /* je: equal / zero */

loc_000EC846: ;
    PUSH32(esp, 0x32FCD8);
    eax = 0xCA;
    ecx = 0x32FCB0;
    PUSH32(esp, 0x000EC85Au); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EC85A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EC85D: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(esp + 0xC);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000EC888; /* jne: not equal / not zero */

loc_000EC871: ;
    PUSH32(esp, 0x32FCD8);
    eax = 0xD6;
    ecx = 0x32F1F4;
    PUSH32(esp, 0x000EC885u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EC885: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EC888: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000EC8A7; /* jbe: below or equal (unsigned <=) */

loc_000EC890: ;
    PUSH32(esp, 0x32FCD8);
    eax = 0xD7;
    ecx = 0x32FC88;
    PUSH32(esp, 0x000EC8A4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000EC8A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EC8A7: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000EC8B0
 * Original: 0x000EC8B0 - 0x000EC8D4 (36 bytes, 13 insns)
 * Folder: sound (between: 0x000EC7D0 and 0x000ECB90)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EC8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC8B0: ;
    eax = 0x54;
    PUSH32(esp, 0x000EC8BAu); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000EC8BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8C7; /* je: equal / zero */

loc_000EC8BE: ;
    PUSH32(esp, 0x000EC8C3u); RECOMP_ABI_CALL(0x000ECB10u, sub_000ECB10); /* call 0x000ECB10 */

loc_000EC8C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC8CB; /* jne: not equal / not zero */

loc_000EC8C7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000EC8CB: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EC8E0
 * Original: 0x000EC8E0 - 0x000EC969 (137 bytes, 58 insns)
 * Folder: sound (between: 0x000EC7D0 and 0x000ECB90)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EC8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC8E0: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_000EC92F; /* je: equal / zero */

loc_000EC905: ;
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
    if ((_fa != 0)) goto loc_000EC905; /* jne: not equal / not zero */

loc_000EC92F: ;
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
    if ((_fa == 0)) goto loc_000EC960; /* je: equal / zero */

loc_000EC940: ;
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
    if ((_fa != 0)) goto loc_000EC940; /* jne: not equal / not zero */

loc_000EC960: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000EC970
 * Original: 0x000EC970 - 0x000ECA3C (204 bytes, 71 insns)
 * Folder: sound (between: 0x000EC7D0 and 0x000ECB90)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EC970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EC970: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_000EC9F6; /* je: equal / zero */

loc_000EC99B: ;
    MEM16(0x650A88) = LO16(eax);
    MEM16(0x650A8A) = LO16(ebx);
    MEM16(0x650A8C) = LO16(eax);
    MEM16(0x650A8E) = LO16(ebx);
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x650A88)); /* paddusw */

loc_000EC9BF: ;
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
    if ((_fa != 0)) goto loc_000EC9BF; /* jne: not equal / not zero */

loc_000EC9F6: ;
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
    if ((_fa == 0)) goto loc_000ECA33; /* je: equal / zero */

loc_000ECA07: ;
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
    if ((_fa != 0)) goto loc_000ECA07; /* jne: not equal / not zero */

loc_000ECA33: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000ECA40
 * Original: 0x000ECA40 - 0x000ECB0A (202 bytes, 68 insns)
 * Folder: sound (between: 0x000EC7D0 and 0x000ECB90)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000ECA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ECA40: ;
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
    MEM16(0x650A80) = LO16(edx);
    MEM32(ebp + -4) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ECAD9; /* je: equal / zero */

loc_000ECA6F: ;
    MEM16(0x650A84) = LO16(edx);
    edx = MEM32(ebp + 0x18);
    MEM16(0x650A82) = LO16(edx);
    MEM16(0x650A86) = LO16(edx);
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    mm0 = MMX_PADDUSW(mm0, MMX_MEM(0x650A80)); /* paddusw */

loc_000ECA91: ;
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
    if ((_fa != 0)) goto loc_000ECA91; /* jne: not equal / not zero */

loc_000ECAD9: ;
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
    if ((_fa == 0)) goto loc_000ECB02; /* je: equal / zero */

loc_000ECAEA: ;
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
    if ((_fa != 0)) goto loc_000ECAEA; /* jne: not equal / not zero */

loc_000ECB02: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000ECB10
 * Original: 0x000ECB10 - 0x000ECB20 (16 bytes, 3 insns)
 * Folder: sound (between: 0x000EC7D0 and 0x000ECB90)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ECB10: ;
    PUSH32(esp, 0x000ECB15u); RECOMP_ABI_CALL(0x000E73D0u, sub_000E73D0); /* call 0x000E73D0 */

loc_000ECB15: ;
    MEM32(eax) = 0x32FD20;
    g_seh_ebp = ebp; sub_000ECB60(); return; /* tail jmp 0x000ECB60 */

}

/**
 * sub_000ECB20
 * Original: 0x000ECB20 - 0x000ECB40 (32 bytes, 13 insns)
 * Folder: sound (between: 0x000EC7D0 and 0x000ECB90)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ECB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x000ECB2Au); RECOMP_ABI_CALL(0x000ECB40u, sub_000ECB40); /* call 0x000ECB40 */

loc_000ECB2A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000ECB3A; /* je: equal / zero */

loc_000ECB33: ;
    PUSH32(esp, 0x000ECB38u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000ECB38: ;
    eax = esi;

loc_000ECB3A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ECB40
 * Original: 0x000ECB40 - 0x000ECB56 (22 bytes, 7 insns)
 * Folder: sound (between: 0x000EC7D0 and 0x000ECB90)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ECB40: ;
    PUSH32(esp, esi);
    esi = eax;
    MEM32(esi) = 0x32FD20;
    PUSH32(esp, 0x000ECB4Eu); RECOMP_ABI_CALL(0x000ECB70u, sub_000ECB70); /* call 0x000ECB70 */

loc_000ECB4E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000E7430(); return; /* tail jmp 0x000E7430 */

}

/**
 * sub_000ECB60
 * Original: 0x000ECB60 - 0x000ECB6C (12 bytes, 5 insns)
 * Folder: sound (between: 0x000EC7D0 and 0x000ECB90)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ECB60: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000ECB70
 * Original: 0x000ECB70 - 0x000ECB8B (27 bytes, 7 insns)
 * Folder: sound (between: 0x000EC7D0 and 0x000ECB90)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ECB70: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ECB8A; /* je: equal / zero */

loc_000ECB77: ;
    PUSH32(esp, 0x000ECB7Cu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000ECB7C: ;
    MEM32(esi + 0x4C) = 0;
    MEM32(esi + 0x50) = 0;

loc_000ECB8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ECB90
 * Original: 0x000ECB90 - 0x000ECDAB (539 bytes, 199 insns)
 * Folder: sound (source: TVolPanMMX.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ECB90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ECBB1; /* je: equal / zero */

loc_000ECB9A: ;
    PUSH32(esp, 0x32FDB8);
    eax = 0x1B3;
    ecx = 0x32EDAC;
    PUSH32(esp, 0x000ECBAEu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000ECBAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ECBB1: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ECBCD; /* jne: not equal / not zero */

loc_000ECBB9: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    eax = 2;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000ECBCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ECBE1; /* jne: not equal / not zero */

loc_000ECBD2: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000ECBE1: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ECC0C; /* je: equal / zero */

loc_000ECBED: ;
    edx = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000ECBF7u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000ECBF7: ;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000ECC04u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000ECC04: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = eax;
    goto loc_000ECC18;

loc_000ECC0C: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esi + 0x44);
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = edx;

loc_000ECC18: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x34);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    MEM32(esi + 0x3C) = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx));
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000ECC53; /* jae: above or equal (unsigned >=) */

loc_000ECC3A: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x50) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000ECC4B; /* je: equal / zero */

loc_000ECC44: ;
    PUSH32(esp, 0x000ECC49u); RECOMP_ABI_CALL(0x000ED260u, sub_000ED260); /* call 0x000ED260 */

loc_000ECC49: ;
    goto loc_000ECC50;

loc_000ECC4B: ;
    PUSH32(esp, 0x000ECC50u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000ECC50: ;
    MEM32(esi + 0x4C) = eax;

loc_000ECC53: ;
    edx = MEM32(ebx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebp);
    edi = esi + 0x48;
    MEM32(edi) = edx;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000ECC6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000ECC67u); } /* indirect call */
    }

loc_000ECC6A: ;
    ecx = MEM32(esp + 0x10);
    ebp = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000ECC8F; /* jbe: below or equal (unsigned <=) */

loc_000ECC74: ;
    PUSH32(esp, 0x32FDB8);
    eax = 0x1DE;
    ecx = 0x32FD8C;
    PUSH32(esp, 0x000ECC88u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000ECC88: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ECC8F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ECCB1; /* jne: not equal / not zero */

loc_000ECC94: ;
    PUSH32(esp, 0x32FDB8);
    eax = 0x1DF;
    ecx = 0x32F1F4;
    PUSH32(esp, 0x000ECCA8u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000ECCA8: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000ECCC2;

loc_000ECCB1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ECCBB; /* je: equal / zero */

loc_000ECCB6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ECCC2; /* jne: not equal / not zero */

loc_000ECCBB: ;
    MEM32(esi + 8) = 2;

loc_000ECCC2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ECCD6; /* jne: not equal / not zero */

loc_000ECCC6: ;
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = ecx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000ECCD6: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edi = MEM32(ebx + 4);
    ebx = MEM32(esi + 0x4C);
    if (CMP_NE(_fa, _fb)) goto loc_000ECD2D; /* jne: not equal / not zero */

loc_000ECCE4: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ECD18; /* jne: not equal / not zero */

loc_000ECCEE: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ECD18; /* jne: not equal / not zero */

loc_000ECCF3: ;
    edx = MEM32(esi + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000ECD01u); RECOMP_ABI_CALL(0x000EC8E0u, sub_000EC8E0); /* call 0x000EC8E0 */

loc_000ECD01: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000ECD18: ;
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000ECD2Bu); RECOMP_ABI_CALL(0x000EC970u, sub_000EC970); /* call 0x000EC970 */

loc_000ECD2B: ;
    goto loc_000ECD94;

loc_000ECD2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ECD4D; /* je: equal / zero */

loc_000ECD32: ;
    PUSH32(esp, 0x32FDB8);
    eax = 0x241;
    ecx = 0x32FD70;
    PUSH32(esp, 0x000ECD46u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000ECD46: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ECD4D: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ECD81; /* jne: not equal / not zero */

loc_000ECD57: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ECD81; /* jne: not equal / not zero */

loc_000ECD5C: ;
    edx = MEM32(esi + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000ECD6Au); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000ECD6A: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000ECD81: ;
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000ECD94u); RECOMP_ABI_CALL(0x000ECA40u, sub_000ECA40); /* call 0x000ECA40 */

loc_000ECD94: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000ECDB0
 * Original: 0x000ECDB0 - 0x000ECE9E (238 bytes, 76 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ECDB0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000ECE9A; /* je: equal / zero */

loc_000ECDC2: ;
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
    edi = MEM32(edx * 4 + 0x33FDF0);
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000ECE90; /* jle: less or equal (signed <=) */

loc_000ECDEE: ;
    MEM32(esp + 0x1C) = eax;

loc_000ECDF2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ECDFC; /* je: equal / zero */

loc_000ECDF6: ;
    eax = MEM32(esp + 0x10);
    goto loc_000ECE0F;

loc_000ECDFC: ;
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000ECE0F: ;
    ecx = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(eax * 4 + 0x33FDB0);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ebx;
    if ((_fas >= 0)) goto loc_000ECE30; /* jns: not sign (positive) */

loc_000ECE2C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000ECE3A;

loc_000ECE30: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x58 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000ECE3A; /* jle: less or equal (signed <=) */

loc_000ECE35: ;
    edx = 0x58;

loc_000ECE3A: ;
    ecx = eax;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + ecx + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ECE51; /* je: equal / zero */

loc_000ECE4D: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000ECE53;

loc_000ECE51: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ECE53: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000ECE62; /* jle: less or equal (signed <=) */

loc_000ECE5B: ;
    esi = 0x7FFF;
    goto loc_000ECE6F;

loc_000ECE62: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000ECE6F; /* jge: greater or equal (signed >=) */

loc_000ECE6A: ;
    esi = 0xFFFF8000u;

loc_000ECE6F: ;
    edi = MEM32(edx * 4 + 0x33FDF0);
    eax = MEM32(esp + 0x1C);
    MEM16(ebp) = LO16(esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_000ECDF2; /* jne: not equal / not zero */

loc_000ECE8C: ;
    ecx = MEM32(esp + 0x28);

loc_000ECE90: ;
    POP32(esp, edi);
    MEM16(ecx) = LO16(esi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx + 2) = LO8(edx);
    POP32(esp, ebx);

loc_000ECE9A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ECEA0
 * Original: 0x000ECEA0 - 0x000ECFEF (335 bytes, 99 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ECEA0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000ECFEB; /* je: equal / zero */

loc_000ECEB3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    ebx = (uint32_t)(int32_t)SMEM8(esi + 2);
    MEM32(esp + 0x20) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ebx * 4 + 0x33FDF0);
    MEM32(esp + 0x10) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    MEM32(esp + 0x24) = edx;
    edx = (uint32_t)(int32_t)SMEM8(esi + 6);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(edx * 4 + 0x33FDF0);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x28) = ecx;
    ebp = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_000ECFD1; /* jle: less or equal (signed <=) */

loc_000ECEFE: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = eax;

loc_000ECF03: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ECF26; /* je: equal / zero */

loc_000ECF07: ;
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
    goto loc_000ECF32;

loc_000ECF26: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x20);

loc_000ECF32: ;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(eax * 4 + 0x33FDB0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(eax * 4 + 0x33FDB0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_000ECF42; /* jns: not sign (positive) */

loc_000ECF3E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000ECF4C;

loc_000ECF42: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x58 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000ECF4C; /* jle: less or equal (signed <=) */

loc_000ECF47: ;
    edx = 0x58;

loc_000ECF4C: ;
    esi = eax;
    esi = esi & 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi + esi + 1;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((3) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ECF63; /* je: equal / zero */

loc_000ECF5F: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000ECF65;

loc_000ECF63: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ECF65: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000ECF74; /* jle: less or equal (signed <=) */

loc_000ECF6D: ;
    ecx = 0x7FFF;
    goto loc_000ECF81;

loc_000ECF74: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000ECF81; /* jge: greater or equal (signed >=) */

loc_000ECF7C: ;
    ecx = 0xFFFF8000u;

loc_000ECF81: ;
    esi = MEM32(esp + 0x24);
    eax = MEM32(edx * 4 + 0x33FDF0);
    MEM16(esi) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x24) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000ECFA8; /* je: equal / zero */

loc_000ECF9A: ;
    MEM32(esp + 0x14) = ecx;
    ebx = edx;
    MEM32(esp + 0x28) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000ECFB9;

loc_000ECFA8: ;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x2C) = eax;
    ebp = 1;

loc_000ECFB9: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = eax;
    if ((_fa != 0)) goto loc_000ECF03; /* jne: not equal / not zero */

loc_000ECFCC: ;
    esi = MEM32(esp + 0x38);
    POP32(esp, edi);

loc_000ECFD1: ;
    SET_LO16(eax, MEM16(esp + 0x10));
    SET_LO16(ecx, MEM16(esp + 0x14));
    MEM8(esi + 2) = LO8(ebx);
    MEM16(esi) = LO16(eax);
    MEM16(esi + 4) = LO16(ecx);
    MEM8(esi + 6) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000ECFEB: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ECFF0
 * Original: 0x000ECFF0 - 0x000ED00F (31 bytes, 11 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ECFF0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED002; /* jne: not equal / not zero */

loc_000ECFF7: ;
    MEM32(esp + 4) = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000ECEA0(); return; /* tail jmp 0x000ECEA0 */

loc_000ED002: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x000ED00Bu); RECOMP_ABI_CALL(0x000ECDB0u, sub_000ECDB0); /* call 0x000ECDB0 */

loc_000ED00B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ED010
 * Original: 0x000ED010 - 0x000ED169 (345 bytes, 112 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED010: ;
    _fb = (uint32_t)(0x194) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x194;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    MEM32(esp + 0x190) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000ED050; /* jge: greater or equal (signed >=) */

loc_000ED029: ;
    eax = MEM32(0x32FE88);
    MEM32(esp) = eax;
    eax = MEM32(0x32FE8C);
    MEM32(esp + 4) = eax;
    SET_LO16(eax, MEM16(0x32FE90));
    MEM16(esp + 8) = LO16(eax);
    SET_LO8(eax, MEM8(0x32FE92));
    MEM8(esp + 0xA) = LO8(eax);
    goto loc_000ED07E;

loc_000ED050: ;
    eax = MEM32(0x32FE78);
    MEM32(esp) = eax;
    eax = MEM32(0x32FE7C);
    MEM32(esp + 4) = eax;
    eax = MEM32(0x32FE80);
    MEM32(esp + 8) = eax;
    SET_LO16(eax, MEM16(0x32FE84));
    MEM16(esp + 0xC) = LO16(eax);
    SET_LO8(eax, MEM8(0x32FE86));
    MEM8(esp + 0xE) = LO8(eax);

loc_000ED07E: ;
    eax = MEM32(0x33FF60);
    PUSH32(esp, esi);
    esi = ZX16(LO16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000ED0A6; /* je: equal / zero */

loc_000ED08C: ;
    /* nop */

loc_000ED090: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED0A6; /* je: equal / zero */

loc_000ED096: ;
    SET_LO16(eax, MEM16(ecx * 8 + 0x33FF68));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED090; /* jne: not equal / not zero */

loc_000ED0A6: ;
    eax = MEM32(ecx * 8 + 0x33FF64);
    edx = eax;
    /* nop */

loc_000ED0B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED0B0; /* jne: not equal / not zero */

loc_000ED0B7: ;
    edi = esp + 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000ED0C0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED0C0; /* jne: not equal / not zero */

loc_000ED0C8: ;
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
    edi = esp + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000ED0E0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED0E0; /* jne: not equal / not zero */

loc_000ED0E8: ;
    SET_LO16(ecx, MEM16(0x32FE74));
    SET_LO8(edx, MEM8(0x32FE76));
    eax = MEM32(esp + 0x1A0);
    MEM16(edi) = LO16(ecx);
    MEM8(edi + 2) = LO8(edx);
    edx = eax;

loc_000ED104: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED104; /* jne: not equal / not zero */

loc_000ED10B: ;
    edi = esp + 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000ED112: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED112; /* jne: not equal / not zero */

loc_000ED11A: ;
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
    edi = esp + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000ED130: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED130; /* jne: not equal / not zero */

loc_000ED138: ;
    SET_LO16(eax, MEM16(0x32FE70));
    SET_LO8(ecx, MEM8(0x32FE72));
    edx = esp + 8;
    MEM16(edi) = LO16(eax);
    PUSH32(esp, edx);
    MEM8(edi + 2) = LO8(ecx);
    PUSH32(esp, 0x000ED154u); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_000ED154: ;
    ecx = MEM32(esp + 0x198);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000ED162u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000ED162: ;
    _fb = (uint32_t)(0x194) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x194;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ED170
 * Original: 0x000ED170 - 0x000ED178 (8 bytes, 4 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED170(void)
{

loc_000ED170: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ED176u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000ED176: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED180
 * Original: 0x000ED180 - 0x000ED191 (17 bytes, 7 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED180: ;
    PUSH32(esp, edi);
    ecx = 0x2B;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x5F94F8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED1A0
 * Original: 0x000ED1A0 - 0x000ED1B4 (20 bytes, 7 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED1A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED1A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    edx = 0x32FE28;
    PUSH32(esp, 0x000ED1B0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000ED1B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ED1C0
 * Original: 0x000ED1C0 - 0x000ED217 (87 bytes, 22 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED1C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED1C0: ;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0xC8) = eax;
    eax = MEM32(esp + 0xD4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xD4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x32FE08);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ED1F3u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000ED1F3: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000ED1FFu); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_000ED1FF: ;
    PUSH32(esp, 0x000ED204u); RECOMP_ABI_CALL(0x002930BAu, sub_002930BA); /* call 0x002930BA */

loc_000ED204: ;
    ecx = MEM32(esp + 0xC8);
    PUSH32(esp, 0x000ED210u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000ED210: ;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ED220
 * Original: 0x000ED220 - 0x000ED249 (41 bytes, 11 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED220: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FF);
    PUSH32(esp, 0x5F8CF8);
    PUSH32(esp, 0x000ED239u); RECOMP_ABI_CALL(0x0028AFEDu, sub_0028AFED); /* call 0x0028AFED */

loc_000ED239: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x5F94F7) = 0;
    eax = 0x5F8CF8;
    esp += 4; return; /* ret */

}

/**
 * sub_000ED250
 * Original: 0x000ED250 - 0x000ED25A (10 bytes, 4 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED250: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ED256u); RECOMP_ABI_CALL(0x0028BA96u, sub_0028BA96); /* call 0x0028BA96 */

loc_000ED256: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ED260
 * Original: 0x000ED260 - 0x000ED26B (11 bytes, 5 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED260: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ED267u); RECOMP_ABI_CALL(0x0028C316u, sub_0028C316); /* call 0x0028C316 */

loc_000ED267: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ED270
 * Original: 0x000ED270 - 0x000ED278 (8 bytes, 4 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED270(void)
{

loc_000ED270: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ED276u); RECOMP_ABI_CALL(0x0028BAA8u, sub_0028BAA8); /* call 0x0028BAA8 */

loc_000ED276: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED280
 * Original: 0x000ED280 - 0x000ED2E1 (97 bytes, 39 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000ED280: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000ED2A0; /* jne: not equal / not zero */

loc_000ED284: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x330480);
    edx = 0x3304B0;
    ecx = 0x33048C;
    PUSH32(esp, 0x000ED29Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000ED29A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000ED2A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (2) _cf = (int)(((esi) >> ((2) - 1)) & 1);
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + esi * 4 + 8;
    PUSH32(esp, 0x000ED2B3u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000ED2B3: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000ED2BB; /* jne: not equal / not zero */

loc_000ED2B9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000ED2BB: ;
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
    POP32(esp, edi);
    MEM32(eax + -4) = edx;
    MEM32(eax + -8) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED2F0
 * Original: 0x000ED2F0 - 0x000ED35A (106 bytes, 43 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED2F0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED31F; /* jne: not equal / not zero */

loc_000ED2F7: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x330480);
    edx = 0x330450;
    ecx = 0x33048C;
    PUSH32(esp, 0x000ED30Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000ED30D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED31B; /* je: equal / zero */

loc_000ED314: ;
    eax = esi;
    PUSH32(esp, 0x000ED31Bu); RECOMP_ABI_CALL(0x000ED360u, sub_000ED360); /* call 0x000ED360 */

loc_000ED31B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000ED31F: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ED32Au); RECOMP_ABI_CALL(0x000ED280u, sub_000ED280); /* call 0x000ED280 */

loc_000ED32A: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED34A; /* je: equal / zero */

loc_000ED333: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED355; /* je: equal / zero */

loc_000ED337: ;
    eax = MEM32(esi + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) eax = ebx; /* cmovae */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000ED347u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000ED347: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ED34A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED355; /* je: equal / zero */

loc_000ED34E: ;
    eax = esi;
    PUSH32(esp, 0x000ED355u); RECOMP_ABI_CALL(0x000ED360u, sub_000ED360); /* call 0x000ED360 */

loc_000ED355: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED360
 * Original: 0x000ED360 - 0x000ED368 (8 bytes, 2 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ED360: ;
    eax = MEM32(eax + -4);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

}

/**
 * sub_000ED370
 * Original: 0x000ED370 - 0x000ED3C7 (87 bytes, 37 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000ED370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -4) = ecx;
    if ((_fa == 0)) goto loc_000ED3A5; /* je: equal / zero */

loc_000ED38E: ;
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + 8); /* movq */
    MMX_STORE(edi, mm0); /* movq */
    MMX_STORE(edi + 8, mm1); /* movq */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000ED38E; /* jne: not equal / not zero */

loc_000ED3A5: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + -4);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000ED3BF; /* je: equal / zero */

loc_000ED3B2: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000ED3B2; /* jne: not equal / not zero */

loc_000ED3BF: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED3D0
 * Original: 0x000ED3D0 - 0x000ED3DC (12 bytes, 6 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED3D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED3D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000ED3D8u); RECOMP_ABI_CALL(0x0028AA50u, sub_0028AA50); /* call 0x0028AA50 */

loc_000ED3D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ED3E0
 * Original: 0x000ED3E0 - 0x000ED454 (116 bytes, 43 insns)
 * Folder: sound (between: 0x000ECB90 and 0x000ED460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000ED3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED3E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, edi);
    MEM32(ebp + -16) = 0;
    ecx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(ebp + 0xC));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = MEM32(ebp + 8);
    MEM32(ebp + -16) = ecx;
    if ((_fa == 0)) goto loc_000ED430; /* je: equal / zero */

loc_000ED407: ;
    MEM8(ebp + -12) = LO8(eax);
    MEM8(ebp + -11) = LO8(eax);
    MEM8(ebp + -10) = LO8(eax);
    MEM8(ebp + -9) = LO8(eax);
    MEM8(ebp + -8) = LO8(eax);
    MEM8(ebp + -7) = LO8(eax);
    MEM8(ebp + -6) = LO8(eax);
    MEM8(ebp + -5) = LO8(eax);
    mm0 = MMX_MEM(ebp + -12); /* movq */

loc_000ED423: ;
    MMX_STORE(edi, mm0); /* movq */
    MMX_STORE(edi + 8, mm0); /* movq */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000ED423; /* jne: not equal / not zero */

loc_000ED430: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + -16);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000ED445; /* je: equal / zero */

loc_000ED43D: ;
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000ED43D; /* jne: not equal / not zero */

loc_000ED445: ;
    (void)0; /* emms - empty MMX state */
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED450u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000ED450: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED460
 * Original: 0x000ED460 - 0x000ED543 (227 bytes, 76 insns)
 * Folder: sound (source: sndfile.cpp)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED460: ;
    PUSH32(esp, esi);
    eax = 8;
    PUSH32(esp, 0x000ED46Bu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000ED46B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED488; /* jne: not equal / not zero */

loc_000ED471: ;
    PUSH32(esp, 0x330560);
    edx = 0xC;
    PUSH32(esp, 0x000ED480u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000ED480: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000ED488: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x33055C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000ED495u); RECOMP_ABI_CALL(0x0028B420u, sub_0028B420); /* call 0x0028B420 */

loc_000ED495: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED4FC; /* je: equal / zero */

loc_000ED49C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x330558);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000ED4A9u); RECOMP_ABI_CALL(0x0028B420u, sub_0028B420); /* call 0x0028B420 */

loc_000ED4A9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED4FC; /* je: equal / zero */

loc_000ED4B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x330554);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000ED4BDu); RECOMP_ABI_CALL(0x0028B420u, sub_0028B420); /* call 0x0028B420 */

loc_000ED4BD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED4F3; /* je: equal / zero */

loc_000ED4C4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x330550);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000ED4D1u); RECOMP_ABI_CALL(0x0028B420u, sub_0028B420); /* call 0x0028B420 */

loc_000ED4D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED4F3; /* je: equal / zero */

loc_000ED4D8: ;
    PUSH32(esp, 0x42);
    PUSH32(esp, 0x324878);
    edx = 0x330534;
    ecx = 0x3304FC;
    PUSH32(esp, 0x000ED4EEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000ED4EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000ED503;

loc_000ED4F3: ;
    MEM32(esi + 4) = 0x64D840;
    goto loc_000ED503;

loc_000ED4FC: ;
    MEM32(esi + 4) = 0x64D844;

loc_000ED503: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ED510u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000ED510: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000ED525u); RECOMP_ABI_CALL(0x002804EAu, sub_002804EA); /* call 0x002804EA */

loc_000ED525: ;
    edx = MEM32(esi + 4);
    MEM32(esi) = eax;
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ED532u); RECOMP_ABI_CALL(0x00281B5Fu, sub_00281B5F); /* call 0x00281B5F */

loc_000ED532: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000ED541; /* jne: not equal / not zero */

loc_000ED539: ;
    PUSH32(esp, 0x000ED53Eu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000ED53E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000ED541: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED550
 * Original: 0x000ED550 - 0x000ED5AB (91 bytes, 37 insns)
 * Folder: sound (between: 0x000ED460 and 0x000ED5B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED550: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    MEM32(esp + 4) = 0;
    ecx = MEM32(eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ED567u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000ED567: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ED572u); RECOMP_ABI_CALL(0x00281B5Fu, sub_00281B5F); /* call 0x00281B5F */

loc_000ED572: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ED58Bu); RECOMP_ABI_CALL(0x00281198u, sub_00281198); /* call 0x00281198 */

loc_000ED58B: ;
    edx = MEM32(esi + 4);
    edi = eax;
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ED598u); RECOMP_ABI_CALL(0x00281B5Fu, sub_00281B5F); /* call 0x00281B5F */

loc_000ED598: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000ED5A2; /* je: equal / zero */

loc_000ED59D: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000ED5A2: ;
    PUSH32(esp, 0x000ED5A7u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_000ED5A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED5B0
 * Original: 0x000ED5B0 - 0x000ED61B (107 bytes, 41 insns)
 * Folder: sound (source: sndfile.cpp)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED5B0: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_000ED5EB; /* je: equal / zero */

loc_000ED5B6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000ED5E4; /* je: equal / zero */

loc_000ED5B9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000ED5DD; /* je: equal / zero */

loc_000ED5BC: ;
    PUSH32(esp, 0x9F);
    PUSH32(esp, 0x324878);
    edx = 0x3304DC;
    ecx = 0x3304FC;
    PUSH32(esp, 0x000ED5D5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000ED5D5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000ED5DD: ;
    edi = 2;
    goto loc_000ED5ED;

loc_000ED5E4: ;
    edi = 1;
    goto loc_000ED5ED;

loc_000ED5EB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000ED5ED: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ED5FAu); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000ED5FA: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ED60Au); RECOMP_ABI_CALL(0x002813DFu, sub_002813DF); /* call 0x002813DF */

loc_000ED60A: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    edi = eax;
    PUSH32(esp, 0x000ED617u); RECOMP_ABI_CALL(0x00281B5Fu, sub_00281B5F); /* call 0x00281B5F */

loc_000ED617: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED620
 * Original: 0x000ED620 - 0x000ED651 (49 bytes, 19 insns)
 * Folder: sound (between: 0x000ED5B0 and 0x000ED800)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ED620: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED650; /* je: equal / zero */

loc_000ED624: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED649; /* je: equal / zero */

loc_000ED629: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ED636u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000ED636: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000ED63Eu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000ED63E: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ED649u); RECOMP_ABI_CALL(0x00281B5Fu, sub_00281B5F); /* call 0x00281B5F */

loc_000ED649: ;
    eax = esi;
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

loc_000ED650: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ED660
 * Original: 0x000ED660 - 0x000ED67C (28 bytes, 11 insns)
 * Folder: sound (between: 0x000ED5B0 and 0x000ED800)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED660: ;
    PUSH32(esp, 0x000ED665u); RECOMP_ABI_CALL(0x000ED460u, sub_000ED460); /* call 0x000ED460 */

loc_000ED665: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED66D; /* jne: not equal / not zero */

loc_000ED66A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000ED66D: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000ED675u); RECOMP_ABI_CALL(0x000ED620u, sub_000ED620); /* call 0x000ED620 */

loc_000ED675: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED680
 * Original: 0x000ED680 - 0x000ED683 (3 bytes, 2 insns)
 * Folder: sound (between: 0x000ED5B0 and 0x000ED800)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED680(void)
{

loc_000ED680: ;
    SET_LO8(eax, 0x5C);
    esp += 4; return; /* ret */

}

/**
 * sub_000ED690
 * Original: 0x000ED690 - 0x000ED6CF (63 bytes, 19 insns)
 * Folder: sound (between: 0x000ED5B0 and 0x000ED800)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED690(void)
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

loc_000ED690: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp) = esi;
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(0x3400B0) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000ED6A7; /* jge: greater or equal (signed >=) */

loc_000ED6A1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000ED6A7: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000ED6C5; /* jbe: below or equal (unsigned <=) */

loc_000ED6B3: ;
    PUSH32(esp, 0x330B88);
    edx = 8;
    PUSH32(esp, 0x000ED6C2u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000ED6C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ED6C5: ;
    eax = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EE240(); return; /* tail jmp 0x000EE240 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000ED6D0
 * Original: 0x000ED6D0 - 0x000ED6D5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000ED5B0 and 0x000ED800)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ED6D0: ;
    g_seh_ebp = ebp; sub_000EE440(); return; /* tail jmp 0x000EE440 */

}

/**
 * sub_000ED6E0
 * Original: 0x000ED6E0 - 0x000ED7FD (285 bytes, 98 insns)
 * Folder: sound (between: 0x000ED5B0 and 0x000ED800)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED6E0(void)
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

loc_000ED6E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x12C;
    PUSH32(esp, 0x000ED6F2u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000ED6F2: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED714; /* jne: not equal / not zero */

loc_000ED6FA: ;
    PUSH32(esp, 0x330B58);
    edx = 0xA;
    PUSH32(esp, 0x000ED709u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000ED709: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000ED714: ;
    PUSH32(esp, 0x100);
    eax = edi + 0x2C;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(edi) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x14) = esi;
    MEM32(edi + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000ED738u); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_000ED738: ;
    fp_push((double)SMEM32(0x3400B0)); /* fild */
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    MEM32(edi + 0x20) = esi;
    MEM32(edi + 0x24) = esi;
    MEM32(edi + 0x28) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000ED76B; /* jne: not equal / not zero */

loc_000ED753: ;
    ecx = MEM32(0x3400B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000ED763; /* jge: greater or equal (signed >=) */

loc_000ED75D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000ED763: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333A2C)); /* fmul dword ptr [0x333a2c] */
    goto loc_000ED77F;

loc_000ED76B: ;
    edx = MEM32(0x3400B0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000ED77B; /* jge: greater or equal (signed >=) */

loc_000ED775: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000ED77B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x18)); /* fimul dword ptr [esp + 0x18] */

loc_000ED77F: ;
    PUSH32(esp, 0x000ED784u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000ED784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E80 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000ED790; /* ja: above (unsigned >) */

loc_000ED78B: ;
    eax = 0x3E80;

loc_000ED790: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx & 0xFFFFFFE0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x20);
    MEM32(edi + 0x1C) = ebx;
    PUSH32(esp, 0x000ED7A0u); RECOMP_ABI_CALL(0x000ED280u, sub_000ED280); /* call 0x000ED280 */

loc_000ED7A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edi + 0x18) = eax;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000ED7BF; /* jne: not equal / not zero */

loc_000ED7AB: ;
    PUSH32(esp, 0x330B20);
    edx = 0xA;
    PUSH32(esp, 0x000ED7BAu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000ED7BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000ED7CE;

loc_000ED7BF: ;
    eax = ebp;
    PUSH32(esp, 0x000ED7C6u); RECOMP_ABI_CALL(0x000EE520u, sub_000EE520); /* call 0x000EE520 */

loc_000ED7C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000ED7F6; /* jne: not equal / not zero */

loc_000ED7CE: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED7DA; /* je: equal / zero */

loc_000ED7D5: ;
    PUSH32(esp, 0x000ED7DAu); RECOMP_ABI_CALL(0x000ED360u, sub_000ED360); /* call 0x000ED360 */

loc_000ED7DA: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED7E7; /* je: equal / zero */

loc_000ED7E2: ;
    PUSH32(esp, 0x000ED7E7u); RECOMP_ABI_CALL(0x000EE930u, sub_000EE930); /* call 0x000EE930 */

loc_000ED7E7: ;
    eax = edi;
    PUSH32(esp, 0x000ED7EEu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000ED7EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000ED7F6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000ED800
 * Original: 0x000ED800 - 0x000ED949 (329 bytes, 100 insns)
 * Folder: sound (source: sndstrmfile.c)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ED800: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED927; /* je: equal / zero */

loc_000ED813: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED927; /* je: equal / zero */

loc_000ED81C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000ED923; /* jbe: below or equal (unsigned <=) */

loc_000ED824: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED84B; /* je: equal / zero */

loc_000ED82A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED84B; /* je: equal / zero */

loc_000ED82F: ;
    PUSH32(esp, 0xCC);
    PUSH32(esp, 0x330A20);
    edx = 0x330A88;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000ED848u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000ED848: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ED84B: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED86D; /* jne: not equal / not zero */

loc_000ED851: ;
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x3309E4);
    edx = 0x330AFC;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000ED86Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000ED86A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ED86D: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED88E; /* jne: not equal / not zero */

loc_000ED872: ;
    PUSH32(esp, 0xCE);
    PUSH32(esp, 0x3309A0);
    edx = 0x3309C8;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000ED88Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000ED88B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ED88E: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000ED8AF; /* ja: above (unsigned >) */

loc_000ED893: ;
    PUSH32(esp, 0xCF);
    PUSH32(esp, 0x330958);
    edx = 0x330980;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000ED8ACu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000ED8AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ED8AF: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED8BA; /* je: equal / zero */

loc_000ED8B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED923; /* jne: not equal / not zero */

loc_000ED8BA: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) esi = ebp; /* cmovae */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebx + 0x14) = edi;
    MEM32(ebx + 8) = edi;
    MEM32(ebx + 0x10) = ecx;
    MEM32(ebx + 0xC) = ebp;
    MEM32(ebx + 0x20) = edi;
    MEM32(ebx + 0x24) = edi;
    MEM32(ebx + 0x28) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_000ED8FE; /* jbe: below or equal (unsigned <=) */

loc_000ED8E2: ;
    PUSH32(esp, 0xE3);
    PUSH32(esp, 0x3308E8);
    edx = 0x33091C;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000ED8FBu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000ED8FB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ED8FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000ED922; /* jbe: below or equal (unsigned <=) */

loc_000ED902: ;
    edx = MEM32(ebx + 0x24);
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000ED915u); RECOMP_ABI_CALL(0x000EDE40u, sub_000EDE40); /* call 0x000EDE40 */

loc_000ED915: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED922; /* je: equal / zero */

loc_000ED91C: ;
    MEM32(ebx) = 1;

loc_000ED922: ;
    POP32(esp, esi);

loc_000ED923: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000ED927: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 8) = 0xC5;
    MEM32(esp + 4) = 0x324878;
    edx = 0x330AFC;
    ecx = 0x330AC0;
    g_seh_ebp = ebp; sub_000ED1C0(); return; /* tail jmp 0x000ED1C0 */

}

/**
 * sub_000ED950
 * Original: 0x000ED950 - 0x000ED990 (64 bytes, 21 insns)
 * Folder: sound (source: sndstrmfile.c)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED950: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED973; /* je: equal / zero */

loc_000ED956: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED973; /* je: equal / zero */

loc_000ED95B: ;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

loc_000ED973: ;
    PUSH32(esp, 0x101);
    PUSH32(esp, 0x324878);
    edx = 0x330AFC;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000ED98Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000ED98C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ED990
 * Original: 0x000ED990 - 0x000EDD89 (1017 bytes, 316 insns)
 * Folder: sound (source: sndstrmfile.c)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ED990: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10C));
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x118);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x114) = eax;
    eax = MEM32(esp + 0x124);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = edi;
    MEM32(eax) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000EDD52; /* je: equal / zero */

loc_000ED9C5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EDD52; /* je: equal / zero */

loc_000ED9CE: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000ED9E9; /* jne: not equal / not zero */

loc_000ED9D2: ;
    PUSH32(esp, 0x330AC0);
    eax = 0x138;
    ecx = 0x3308B8;
    PUSH32(esp, 0x000ED9E6u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000ED9E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ED9E9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000EDA21; /* jne: not equal / not zero */

loc_000ED9ED: ;
    PUSH32(esp, 0x13C);
    PUSH32(esp, 0x324878);
    edx = 0x330878;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDA06u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDA06: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x000EDA1Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000EDA1A: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000EDA21: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_000EDB3D; /* jbe: below or equal (unsigned <=) */

loc_000EDA2B: ;
    esi = esp + 0x10;
    eax = ebx;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x000EDA3Au); RECOMP_ABI_CALL(0x000EDED0u, sub_000EDED0); /* call 0x000EDED0 */

loc_000EDA3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDB3D; /* je: equal / zero */

loc_000EDA42: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000EDA67; /* jbe: below or equal (unsigned <=) */

loc_000EDA4B: ;
    PUSH32(esp, 0x147);
    PUSH32(esp, 0x330820);
    edx = 0x330850;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDA64u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDA64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDA67: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EDA90; /* je: equal / zero */

loc_000EDA6C: ;
    ecx = ebx + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, 0x330808);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EDA7Fu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000EDA7F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x18;
    edx = 0xD;
    PUSH32(esp, 0x000EDA90u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000EDA90: ;
    eax = MEM32(ebx + 0x24);
    ecx = esi + eax;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000EDAA5; /* ja: above (unsigned >) */

loc_000EDA9D: ;
    MEM32(ebx + 0x24) = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x28)) + (uint64_t)(esi)) >> 32) & 1);
    MEM32(ebx + 0x28) = MEM32(ebx + 0x28) + esi;
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000EDAD0;

loc_000EDAA5: ;
    PUSH32(esp, 0x158);
    PUSH32(esp, 0x324878);
    edx = 0x3307DC;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDABEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDABE: ;
    eax = MEM32(ebx + 0x1C);
    edx = MEM32(ebx + 0x24);
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x24) = edx;

loc_000EDAD0: ;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x24), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000EDAF1; /* jbe: below or equal (unsigned <=) */

loc_000EDAD5: ;
    PUSH32(esp, 0x15C);
    PUSH32(esp, 0x330768);
    edx = 0x3307B4;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDAEEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDAEE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDAF1: ;
    edx = MEM32(ebx + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000EDAFC; /* jne: not equal / not zero */

loc_000EDAF9: ;
    MEM32(ebx + 0x24) = edi;

loc_000EDAFC: ;
    eax = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0x10) = edx;
    if (CMP_B(_fa, _fb)) goto loc_000EDB3A; /* jb: below (unsigned <) */

loc_000EDB13: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EDB34; /* je: equal / zero */

loc_000EDB18: ;
    PUSH32(esp, 0x166);
    PUSH32(esp, 0x330704);
    edx = 0x330734;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDB31u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDB31: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDB34: ;
    MEM32(ebx) = 2;

loc_000EDB3A: ;
    MEM32(ebx + 0x14) = edi;

loc_000EDB3D: ;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000EDBD8; /* jb: below (unsigned <) */

loc_000EDB48: ;
    eax = MEM32(ebx + 0x20);
    esi = MEM32(ebx + 0x1C);
    ecx = eax + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000EDB76; /* ja: above (unsigned >) */

loc_000EDB55: ;
    edx = MEM32(ebx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x124);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EDB69u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EDB69: ;
    eax = MEM32(ebx + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x20) = eax;
    goto loc_000EDBB3;

loc_000EDB76: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(esi));
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDB97; /* je: equal / zero */

loc_000EDB80: ;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(esp + 0x124);
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EDB94u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EDB94: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDB97: ;
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(esp + 0x124);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EDBABu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EDBAB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x20) = edi;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000EDBB3: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebp;
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000EDC79; /* jne: not equal / not zero */

loc_000EDBC2: ;
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000EDC79; /* jne: not equal / not zero */

loc_000EDBCB: ;
    MEM32(esp + 0x14) = 1;
    goto loc_000EDC79;

loc_000EDBD8: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000EDBE1; /* jne: not equal / not zero */

loc_000EDBDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000EDBEA; /* jne: not equal / not zero */

loc_000EDBE1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000EDC6B; /* jbe: below or equal (unsigned <=) */

loc_000EDBEA: ;
    ecx = MEM32(ebx + 0x20);
    esi = MEM32(ebx + 0x1C);
    edx = ecx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000EDC1B; /* jae: above or equal (unsigned >=) */

loc_000EDBF7: ;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EDC0Bu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EDC0B: ;
    eax = MEM32(ebx + 0x20);
    edx = MEM32(ebx + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x20) = eax;
    goto loc_000EDC58;

loc_000EDC1B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EDC3C; /* je: equal / zero */

loc_000EDC25: ;
    eax = MEM32(ebx + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x124);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EDC39u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EDC39: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDC3C: ;
    edx = MEM32(ebx + 0x18);
    eax = MEM32(esp + 0x124);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EDC50u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EDC50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x20) = edi;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000EDC58: ;
    edx = MEM32(ebx + 0x1C);
    esi = MEM32(ebx + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    goto loc_000EDC75;

loc_000EDC6B: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = 4;

loc_000EDC75: ;
    MEM32(esp + 0x10) = esi;

loc_000EDC79: ;
    ecx = MEM32(ebx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000EDC9D; /* jbe: below or equal (unsigned <=) */

loc_000EDC81: ;
    PUSH32(esp, 0x1B1);
    PUSH32(esp, 0x330688);
    edx = 0x3306D0;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDC9Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDC9A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDC9D: ;
    ecx = MEM32(ebx + 0x28);
    eax = MEM32(ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 0x28) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000EDD2A; /* jne: not equal / not zero */

loc_000EDCAC: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000EDD2A; /* jne: not equal / not zero */

loc_000EDCB1: ;
    eax = MEM32(ebx + 0x1C);
    esi = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + 0x24);
    edx = ecx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000EDCCB; /* jb: below (unsigned <) */

loc_000EDCC2: ;
    esi = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 1;

loc_000EDCCB: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 0xC);
    ebp = edx + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000EDCDE; /* jb: below (unsigned <) */

loc_000EDCD8: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    goto loc_000EDCF0;

loc_000EDCDE: ;
    ecx = eax;
    if (3) _cf = (int)(((ecx) >> ((3) - 1)) & 1);
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000EDCED; /* jae: above or equal (unsigned >=) */

loc_000EDCE7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000EDCED; /* jne: not equal / not zero */

loc_000EDCEB: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000EDCED: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFE0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000EDCF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000EDD10; /* jbe: below or equal (unsigned <=) */

loc_000EDCF4: ;
    PUSH32(esp, 0x1D1);
    PUSH32(esp, 0x3308E8);
    edx = 0x33091C;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDD0Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDD0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDD10: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000EDD2A; /* jbe: below or equal (unsigned <=) */

loc_000EDD14: ;
    edx = MEM32(ebx + 0x18);
    ebp = MEM32(ebx + 0x24);
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EDD27u); RECOMP_ABI_CALL(0x000EDE40u, sub_000EDE40); /* call 0x000EDE40 */

loc_000EDD27: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDD2A: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x128);
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x000EDD4Bu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000EDD4B: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000EDD52: ;
    PUSH32(esp, 0x134);
    PUSH32(esp, 0x324878);
    edx = 0x330AFC;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDD6Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDD6B: ;
    ecx = MEM32(esp + 0x11C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 5;
    POP32(esp, ebx);
    PUSH32(esp, 0x000EDD82u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000EDD82: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EDD90
 * Original: 0x000EDD90 - 0x000EDDC5 (53 bytes, 18 insns)
 * Folder: sound (source: sndstrmfile.c)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EDD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EDD90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDDA6; /* je: equal / zero */

loc_000EDD94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDDA6; /* je: equal / zero */

loc_000EDD99: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_000EDDA6: ;
    PUSH32(esp, 0x1F2);
    PUSH32(esp, 0x324878);
    edx = 0x330AFC;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDDBFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDDBF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EDDD0
 * Original: 0x000EDDD0 - 0x000EDE3C (108 bytes, 31 insns)
 * Folder: sound (source: sndstrmfile.c)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EDDD0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDE1F; /* je: equal / zero */

loc_000EDDD4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDE1F; /* je: equal / zero */

loc_000EDDD9: ;
    eax = edi;
    PUSH32(esp, 0x000EDDE0u); RECOMP_ABI_CALL(0x000ED950u, sub_000ED950); /* call 0x000ED950 */

loc_000EDDE0: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EDE02; /* jne: not equal / not zero */

loc_000EDDE6: ;
    PUSH32(esp, 0x213);
    PUSH32(esp, 0x3309E4);
    edx = 0x330668;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDDFFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDDFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDE02: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    PUSH32(esp, 0x000EDE0Bu); RECOMP_ABI_CALL(0x000EE930u, sub_000EE930); /* call 0x000EE930 */

loc_000EDE0B: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000EDE18; /* je: equal / zero */

loc_000EDE13: ;
    PUSH32(esp, 0x000EDE18u); RECOMP_ABI_CALL(0x000ED360u, sub_000ED360); /* call 0x000ED360 */

loc_000EDE18: ;
    eax = edi;
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

loc_000EDE1F: ;
    PUSH32(esp, 0x20C);
    PUSH32(esp, 0x324878);
    edx = 0x330AFC;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDE38u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDE38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EDE40
 * Original: 0x000EDE40 - 0x000EDECB (139 bytes, 46 insns)
 * Folder: sound (source: sndstrmfile.c)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EDE40: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000EDE66; /* jne: not equal / not zero */

loc_000EDE4A: ;
    PUSH32(esp, 0x239);
    PUSH32(esp, 0x330654);
    edx = 0x330AFC;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDE63u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDE63: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDE66: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000EDE86; /* ja: above (unsigned >) */

loc_000EDE6A: ;
    PUSH32(esp, 0x23A);
    PUSH32(esp, 0x330624);
    edx = 0x330634;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDE83u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDE83: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDE86: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000EDE9Au); RECOMP_ABI_CALL(0x000EE680u, sub_000EE680); /* call 0x000EE680 */

loc_000EDE9A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000EDEAA; /* je: equal / zero */

loc_000EDEA4: ;
    POP32(esp, esi);
    MEM32(ebx + 0x14) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000EDEAA: ;
    PUSH32(esp, 0x243);
    PUSH32(esp, 0x32C25C);
    edx = 0x330600;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDEC3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDEC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000EDED0
 * Original: 0x000EDED0 - 0x000EDF47 (119 bytes, 35 insns)
 * Folder: sound (source: sndstrmfile.c)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EDED0: ;
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EDEF7; /* jne: not equal / not zero */

loc_000EDED7: ;
    PUSH32(esp, 0x25B);
    PUSH32(esp, 0x324878);
    edx = 0x330AFC;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDEF0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDEF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000EDEF7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EDF17; /* jne: not equal / not zero */

loc_000EDEFB: ;
    PUSH32(esp, 0x25E);
    PUSH32(esp, 0x3305B8);
    edx = 0x3305C8;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDF14u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDF14: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDF17: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EDF39; /* jne: not equal / not zero */

loc_000EDF1D: ;
    PUSH32(esp, 0x25F);
    PUSH32(esp, 0x330580);
    edx = 0x330668;
    ecx = 0x330AC0;
    PUSH32(esp, 0x000EDF36u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EDF36: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EDF39: ;
    edi = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EDF42u); RECOMP_ABI_CALL(0x000EE800u, sub_000EE800); /* call 0x000EE800 */

loc_000EDF42: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EDF50
 * Original: 0x000EDF50 - 0x000EDF58 (8 bytes, 4 insns)
 * Folder: sound (between: 0x000EDED0 and 0x000EE240)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDF50(void)
{

loc_000EDF50: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EDF57u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000EDF57: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EDF60
 * Original: 0x000EDF60 - 0x000EDF67 (7 bytes, 3 insns)
 * Folder: sound (between: 0x000EDED0 and 0x000EE240)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDF60(void)
{

loc_000EDF60: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EDF66u); RECOMP_ABI_CALL(0x00281B5Fu, sub_00281B5F); /* call 0x00281B5F */

loc_000EDF66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EDF70
 * Original: 0x000EDF70 - 0x000EDFBC (76 bytes, 29 insns)
 * Folder: sound (between: 0x000EDED0 and 0x000EE240)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EDF70: ;
    PUSH32(esp, esi);
    eax = 0x12C;
    PUSH32(esp, 0x000EDF7Bu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000EDF7B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDFB4; /* je: equal / zero */

loc_000EDF81: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000EDF8Cu); RECOMP_ABI_CALL(0x00281B07u, sub_00281B07); /* call 0x00281B07 */

loc_000EDF8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EDFAD; /* je: equal / zero */

loc_000EDF92: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x000EDF9Bu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000EDF9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x118) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000EDFB8; /* jne: not equal / not zero */

loc_000EDFA5: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EDFADu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EDFAD: ;
    eax = esi;
    PUSH32(esp, 0x000EDFB4u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000EDFB4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000EDFB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EDFC0
 * Original: 0x000EDFC0 - 0x000EDFE4 (36 bytes, 8 insns)
 * Folder: sound (between: 0x000EDED0 and 0x000EE240)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EDFC0: ;
    eax = MEM32(esi + 0x118);
    PUSH32(esp, 0x000EDFCBu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000EDFCB: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    MEM32(esi + 0x118) = 0;
    PUSH32(esp, 0x000EDFDDu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EDFDD: ;
    eax = esi;
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

}

/**
 * sub_000EDFF0
 * Original: 0x000EDFF0 - 0x000EDFFF (15 bytes, 5 insns)
 * Folder: sound (between: 0x000EDED0 and 0x000EE240)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDFF0(void)
{

loc_000EDFF0: ;
    ecx = MEM32(eax + 0x128);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EDFFEu); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000EDFFE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EE000
 * Original: 0x000EE000 - 0x000EE00D (13 bytes, 4 insns)
 * Folder: sound (between: 0x000EDED0 and 0x000EE240)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE000(void)
{

loc_000EE000: ;
    ecx = MEM32(eax + 0x128);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EE00Cu); RECOMP_ABI_CALL(0x00281B5Fu, sub_00281B5F); /* call 0x00281B5F */

loc_000EE00C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EE010
 * Original: 0x000EE010 - 0x000EE231 (545 bytes, 168 insns)
 * Folder: sound (between: 0x000EDED0 and 0x000EE240)
 * Category: game_debug
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE010: ;
    _fb = (uint32_t)(0x804) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x804;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x810);
    MEM32(esp + 0x808) = eax;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE034u); RECOMP_ABI_CALL(0x00281A66u, sub_00281A66); /* call 0x00281A66 */

loc_000EE034: ;
    ecx = MEM32(edi + 0x18);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EE041u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000EE041: ;
    edx = MEM32(edi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE04Cu); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000EE04C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE218; /* je: equal / zero */

loc_000EE054: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_000EE056: ;
    eax = MEM32(edi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE061u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000EE061: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000EE0C7; /* jne: not equal / not zero */

loc_000EE06A: ;
    PUSH32(esp, 0x000EE06Fu); RECOMP_ABI_CALL(0x000EDF50u, sub_000EDF50); /* call 0x000EDF50 */

loc_000EE06F: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE1F1; /* je: equal / zero */

loc_000EE07A: ;
    /* nop */

loc_000EE080: ;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(ecx);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE0A3; /* je: equal / zero */

loc_000EE08C: ;
    eax = esi;
    PUSH32(esp, 0x000EE093u); RECOMP_ABI_CALL(0x000EDFF0u, sub_000EDFF0); /* call 0x000EDFF0 */

loc_000EE093: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE09Cu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE09C: ;
    eax = esi;
    PUSH32(esp, 0x000EE0A3u); RECOMP_ABI_CALL(0x000EE000u, sub_000EE000); /* call 0x000EE000 */

loc_000EE0A3: ;
    MEM32(esi + 0xC) = ebp;
    ebx = MEM32(edi + 0x10);
    eax = MEM32(ebx + 4);
    MEM32(edi + 0x10) = eax;
    PUSH32(esp, 0x000EE0B4u); RECOMP_ABI_CALL(0x000EDFC0u, sub_000EDFC0); /* call 0x000EDFC0 */

loc_000EE0B4: ;
    eax = ebx;
    PUSH32(esp, 0x000EE0BBu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000EE0BB: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE080; /* jne: not equal / not zero */

loc_000EE0C2: ;
    goto loc_000EE1F1;

loc_000EE0C7: ;
    PUSH32(esp, 0x000EE0CCu); RECOMP_ABI_CALL(0x000EDF50u, sub_000EDF50); /* call 0x000EDF50 */

loc_000EE0CC: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE1F1; /* je: equal / zero */

loc_000EE0D7: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(eax);
    ebx = MEM32(eax + 4);
    PUSH32(esp, 0x000EE0E4u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000EE0E4: ;
    MEM32(edi + 0xC) = ebx;
    ecx = MEM32(esi);
    eax = ebp;
    PUSH32(esp, 0x000EE0F0u); RECOMP_ABI_CALL(0x000EDF50u, sub_000EDF50); /* call 0x000EDF50 */

loc_000EE0F0: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0x000EE0F8u); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE0F8: ;
    eax = esi;
    PUSH32(esp, 0x000EE0FFu); RECOMP_ABI_CALL(0x000EDFF0u, sub_000EDFF0); /* call 0x000EDFF0 */

loc_000EE0FF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE155; /* jne: not equal / not zero */

loc_000EE106: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    ebx = esi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EE11Eu); RECOMP_ABI_CALL(0x002804EAu, sub_002804EA); /* call 0x002804EA */

loc_000EE11E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000EE14E; /* jne: not equal / not zero */

loc_000EE125: ;
    PUSH32(esp, 0x000EE12Au); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_000EE12A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x330D58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EE13Bu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000EE13B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    edx = 0xD;
    PUSH32(esp, 0x000EE14Cu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000EE14C: ;
    goto loc_000EE155;

loc_000EE14E: ;
    MEM32(esi + 8) = 1;

loc_000EE155: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ebx = esi + 0x124;
    MEM32(ebx) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000EE1C7; /* je: equal / zero */

loc_000EE168: ;
    edx = MEM32(esi + 0x120);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE179u); RECOMP_ABI_CALL(0x002813DFu, sub_002813DF); /* call 0x002813DF */

loc_000EE179: ;
    eax = MEM32(esi + 0x11C);
    ecx = MEM32(esi + 0x118);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE193u); RECOMP_ABI_CALL(0x00281198u, sub_00281198); /* call 0x00281198 */

loc_000EE193: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE1C7; /* jne: not equal / not zero */

loc_000EE197: ;
    PUSH32(esp, 0x000EE19Cu); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_000EE19C: ;
    PUSH32(esp, eax);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x418;
    PUSH32(esp, 0x330D38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EE1B3u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000EE1B3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x410;
    edx = 0xD;
    PUSH32(esp, 0x000EE1C7u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000EE1C7: ;
    eax = esi;
    PUSH32(esp, 0x000EE1CEu); RECOMP_ABI_CALL(0x000EE000u, sub_000EE000); /* call 0x000EE000 */

loc_000EE1CE: ;
    eax = MEM32(esi);
    MEM32(esi + 4) = 1;
    PUSH32(esp, 0x000EE1DCu); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE1DC: ;
    ecx = MEM32(edi + 8);
    eax = ebp;
    PUSH32(esp, 0x000EE1E6u); RECOMP_ABI_CALL(0x000EDF50u, sub_000EDF50); /* call 0x000EDF50 */

loc_000EE1E6: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE0D7; /* jne: not equal / not zero */

loc_000EE1F1: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0x000EE1F9u); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE1F9: ;
    edx = MEM32(edi + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE203u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000EE203: ;
    eax = MEM32(edi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE20Eu); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000EE20E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE056; /* jne: not equal / not zero */

loc_000EE216: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000EE218: ;
    ecx = MEM32(esp + 0x808);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    PUSH32(esp, 0x000EE228u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000EE228: ;
    _fb = (uint32_t)(0x804) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x804;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EE240
 * Original: 0x000EE240 - 0x000EE434 (500 bytes, 183 insns)
 * Folder: sound (source: sndfileasync.c)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE240: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x64D838);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE26B; /* je: equal / zero */

loc_000EE24F: ;
    PUSH32(esp, 0x17B);
    PUSH32(esp, 0x330CB0);
    edx = 0x330D0C;
    ecx = 0x330CD0;
    PUSH32(esp, 0x000EE268u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EE268: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EE26B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE2A3; /* je: equal / zero */

loc_000EE26F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EE278u); RECOMP_ABI_CALL(0x00281B07u, sub_00281B07); /* call 0x00281B07 */

loc_000EE278: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x64D83C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EE2A3; /* je: equal / zero */

loc_000EE281: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EE289u); RECOMP_ABI_CALL(0x00281B07u, sub_00281B07); /* call 0x00281B07 */

loc_000EE289: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x64D840) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EE2A3; /* je: equal / zero */

loc_000EE292: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EE29Au); RECOMP_ABI_CALL(0x00281B07u, sub_00281B07); /* call 0x00281B07 */

loc_000EE29A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x64D844) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000EE2A8; /* jne: not equal / not zero */

loc_000EE2A3: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000EE2A8: ;
    PUSH32(esp, ebp);
    eax = esi + esi * 4;
    PUSH32(esp, edi);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x64D830) = esi;
    PUSH32(esp, 0x000EE2BBu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000EE2BB: ;
    edi = MEM32(0x64D830);
    esi = eax;
    eax = edi + edi * 4;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(0x64D834) = esi;
    PUSH32(esp, 0x000EE2D7u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000EE2D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(0x5F95A4) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000EE399; /* jle: less or equal (signed <=) */

loc_000EE2EA: ;
    /* nop */

loc_000EE2F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EE2F9u); RECOMP_ABI_CALL(0x00281A05u, sub_00281A05); /* call 0x00281A05 */

loc_000EE2F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3B7; /* je: equal / zero */

loc_000EE304: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EE30Du); RECOMP_ABI_CALL(0x00281A05u, sub_00281A05); /* call 0x00281A05 */

loc_000EE30D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3B7; /* je: equal / zero */

loc_000EE318: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EE321u); RECOMP_ABI_CALL(0x00281A05u, sub_00281A05); /* call 0x00281A05 */

loc_000EE321: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3B7; /* je: equal / zero */

loc_000EE32C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EE335u); RECOMP_ABI_CALL(0x00281A05u, sub_00281A05); /* call 0x00281A05 */

loc_000EE335: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3B7; /* je: equal / zero */

loc_000EE33C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EE345u); RECOMP_ABI_CALL(0x00281A05u, sub_00281A05); /* call 0x00281A05 */

loc_000EE345: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3B7; /* je: equal / zero */

loc_000EE34C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000EE354u); RECOMP_ABI_CALL(0x00281B07u, sub_00281B07); /* call 0x00281B07 */

loc_000EE354: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3B7; /* je: equal / zero */

loc_000EE35B: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xEE010);
    PUSH32(esp, 0x7D00);
    PUSH32(esp, ebx);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x000EE377u); RECOMP_ABI_CALL(0x0027FB7Du, sub_0027FB7D); /* call 0x0027FB7D */

loc_000EE377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3B7; /* je: equal / zero */

loc_000EE37D: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE388u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000EE388: ;
    eax = MEM32(0x64D830);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EE2F0; /* jl: less (signed <) */

loc_000EE399: ;
    eax = MEM32(0x64D83C);
    MEM32(0x64D838) = 1;
    PUSH32(esp, 0x000EE3ADu); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE3AD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000EE3B7: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3C4; /* je: equal / zero */

loc_000EE3BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE3C4u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE3C4: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3D1; /* je: equal / zero */

loc_000EE3CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE3D1u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE3D1: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3DE; /* je: equal / zero */

loc_000EE3D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE3DEu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE3DE: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3EB; /* je: equal / zero */

loc_000EE3E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE3EBu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE3EB: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE3F8; /* je: equal / zero */

loc_000EE3F2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EE3F8u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE3F8: ;
    eax = MEM32(0x64D83C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE403u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE403: ;
    ecx = MEM32(0x64D840);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EE40Fu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE40F: ;
    edx = MEM32(0x64D844);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE41Bu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE41B: ;
    PUSH32(esp, 0x330C8C);
    edx = 8;
    PUSH32(esp, 0x000EE42Au); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000EE42A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EE440
 * Original: 0x000EE440 - 0x000EE51C (220 bytes, 66 insns)
 * Folder: sound (between: 0x000EE240 and 0x000EE520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EE440: ;
    eax = MEM32(0x64D838);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE51B; /* je: equal / zero */

loc_000EE44D: ;
    ecx = MEM32(0x64D83C);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000EE45Cu); RECOMP_ABI_CALL(0x000EDF50u, sub_000EDF50); /* call 0x000EDF50 */

loc_000EE45C: ;
    eax = MEM32(0x64D830);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EE4D9; /* jle: less or equal (signed <=) */

loc_000EE467: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64D834);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EE471: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE479u); RECOMP_ABI_CALL(0x00281A66u, sub_00281A66); /* call 0x00281A66 */

loc_000EE479: ;
    ecx = MEM32(esi + -12);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EE482u); RECOMP_ABI_CALL(0x00281A66u, sub_00281A66); /* call 0x00281A66 */

loc_000EE482: ;
    edx = MEM32(esi + -36);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE48Du); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000EE48D: ;
    eax = MEM32(esi + -36);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE496u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE496: ;
    ecx = MEM32(esi + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EE49Fu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE49F: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE4A7u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE4A7: ;
    eax = MEM32(esi + -12);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE4B0u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE4B0: ;
    ecx = MEM32(esi + -8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EE4B9u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE4B9: ;
    edx = MEM32(esi + -4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE4C2u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE4C2: ;
    eax = MEM32(esi + -28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE4CBu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE4CB: ;
    eax = MEM32(0x64D830);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EE471; /* jl: less (signed <) */

loc_000EE4D8: ;
    POP32(esp, esi);

loc_000EE4D9: ;
    eax = MEM32(0x64D834);
    PUSH32(esp, 0x000EE4E3u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000EE4E3: ;
    ecx = MEM32(0x64D840);
    PUSH32(esp, ecx);
    MEM32(0x64D834) = 0;
    PUSH32(esp, 0x000EE4F9u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE4F9: ;
    edx = MEM32(0x64D844);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE505u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE505: ;
    eax = MEM32(0x64D83C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE510u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000EE510: ;
    MEM32(0x64D838) = 0;
    POP32(esp, edi);

loc_000EE51B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EE520
 * Original: 0x000EE520 - 0x000EE67B (347 bytes, 95 insns)
 * Folder: sound (source: sndfileasync.c)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EE520: ;
    ecx = MEM32(0x64D83C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000EE533u); RECOMP_ABI_CALL(0x000EDF50u, sub_000EDF50); /* call 0x000EDF50 */

loc_000EE533: ;
    eax = 0x11C;
    PUSH32(esp, 0x000EE53Du); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000EE53D: ;
    esi = eax;
    PUSH32(esp, 0x103);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi + 0x104) = 0;
    MEM32(esi + 0x108) = 0xFFFFFFFFu;
    MEM32(esi + 0x10C) = 0;
    MEM32(esi + 0x118) = 0;
    PUSH32(esp, 0x000EE573u); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_000EE573: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x33055C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EE580u); RECOMP_ABI_CALL(0x0028B420u, sub_0028B420); /* call 0x0028B420 */

loc_000EE580: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE5FA; /* je: equal / zero */

loc_000EE587: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x330558);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EE594u); RECOMP_ABI_CALL(0x0028B420u, sub_0028B420); /* call 0x0028B420 */

loc_000EE594: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE5FA; /* je: equal / zero */

loc_000EE59B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x330554);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EE5A8u); RECOMP_ABI_CALL(0x0028B420u, sub_0028B420); /* call 0x0028B420 */

loc_000EE5A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE5EC; /* je: equal / zero */

loc_000EE5AF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x330550);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EE5BCu); RECOMP_ABI_CALL(0x0028B420u, sub_0028B420); /* call 0x0028B420 */

loc_000EE5BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE5EC; /* je: equal / zero */

loc_000EE5C3: ;
    PUSH32(esp, 0x219);
    PUSH32(esp, 0x324878);
    edx = 0x330534;
    ecx = 0x330CD0;
    PUSH32(esp, 0x000EE5DCu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EE5DC: ;
    eax = MEM32(0x64D840);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x114) = eax;
    goto loc_000EE606;

loc_000EE5EC: ;
    ecx = MEM32(0x64D844);
    MEM32(esi + 0x114) = ecx;
    goto loc_000EE606;

loc_000EE5FA: ;
    edx = MEM32(0x64D840);
    MEM32(esi + 0x114) = edx;

loc_000EE606: ;
    edi = MEM32(0x64D830);
    ebx = MEM32(0x5F95A4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EE654; /* jle: less or equal (signed <=) */

loc_000EE618: ;
    edx = MEM32(0x64D834);
    edi = edi;

loc_000EE620: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EE638; /* je: equal / zero */

loc_000EE626: ;
    _fa = (uint32_t)(MEM32(eax + 0x110)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x110), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE64C; /* je: equal / zero */

loc_000EE62E: ;
    eax = MEM32(eax + 0x118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE626; /* jne: not equal / not zero */

loc_000EE638: ;
    eax = ecx + ecx * 4;
    ecx = MEM32(0x64D834);
    edx = ecx + eax * 8;
    MEM32(esi + 0x110) = edx;
    goto loc_000EE65F;

loc_000EE64C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EE620; /* jl: less (signed <) */

loc_000EE654: ;
    eax = MEM32(0x64D834);
    MEM32(esi + 0x110) = eax;

loc_000EE65F: ;
    eax = MEM32(0x64D83C);
    MEM32(esi + 0x118) = ebx;
    MEM32(0x5F95A4) = esi;
    PUSH32(esp, 0x000EE675u); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE675: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EE680
 * Original: 0x000EE680 - 0x000EE7FF (383 bytes, 107 insns)
 * Folder: sound (source: sndfileasync.c)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EE680: ;
    eax = MEM32(0x64D838);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000EE6AE; /* jne: not equal / not zero */

loc_000EE68E: ;
    PUSH32(esp, 0x25E);
    PUSH32(esp, 0x324878);
    edx = 0x330C4C;
    ecx = 0x330CD0;
    PUSH32(esp, 0x000EE6A7u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EE6A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000EE6AE: ;
    ecx = MEM32(0x64D83C);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000EE6BCu); RECOMP_ABI_CALL(0x000EDF50u, sub_000EDF50); /* call 0x000EDF50 */

loc_000EE6BC: ;
    eax = MEM32(edi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE6F0; /* je: equal / zero */

loc_000EE6C6: ;
    PUSH32(esp, 0x267);
    PUSH32(esp, 0x324878);
    edx = 0x330C08;
    ecx = 0x330CD0;
    PUSH32(esp, 0x000EE6DFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EE6DF: ;
    eax = MEM32(0x64D83C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000EE6ECu); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE6EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000EE6F0: ;
    PUSH32(esp, ebx);
    eax = 8;
    PUSH32(esp, 0x000EE6FBu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000EE6FB: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE710; /* jne: not equal / not zero */

loc_000EE701: ;
    eax = MEM32(0x64D83C);
    PUSH32(esp, 0x000EE70Bu); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE70B: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000EE710: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000EE717u); RECOMP_ABI_CALL(0x000EDF70u, sub_000EDF70); /* call 0x000EDF70 */

loc_000EE717: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE737; /* jne: not equal / not zero */

loc_000EE720: ;
    eax = ebx;
    PUSH32(esp, 0x000EE727u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000EE727: ;
    eax = MEM32(0x64D83C);
    PUSH32(esp, 0x000EE731u); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE731: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000EE737: ;
    eax = MEM32(edi + 0x104);
    edx = MEM32(esp + 0x18);
    MEM32(esi + 8) = eax;
    ecx = MEM32(edi + 0x108);
    PUSH32(esp, 0x103);
    eax = esi + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0x114) = edx;
    PUSH32(esp, 0x000EE769u); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_000EE769: ;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x124) = 0;
    MEM32(esi + 0x11C) = ebp;
    MEM32(esi + 0x120) = ecx;
    edx = MEM32(edi + 0x114);
    MEM32(esi + 0x128) = edx;
    ecx = MEM32(edi + 0x110);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000EE7A3u); RECOMP_ABI_CALL(0x000EDF50u, sub_000EDF50); /* call 0x000EDF50 */

loc_000EE7A3: ;
    MEM32(ebx) = esi;
    edx = MEM32(edi + 0x110);
    eax = MEM32(edx + 0xC);
    MEM32(ebx + 4) = eax;
    ecx = MEM32(edi + 0x110);
    MEM32(ecx + 0xC) = ebx;
    edx = MEM32(edi + 0x110);
    MEM32(edi + 0x10C) = esi;
    eax = MEM32(edx + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE7CFu); RECOMP_ABI_CALL(0x00281A66u, sub_00281A66); /* call 0x00281A66 */

loc_000EE7CF: ;
    ecx = MEM32(edi + 0x110);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EE7DEu); RECOMP_ABI_CALL(0x00281A66u, sub_00281A66); /* call 0x00281A66 */

loc_000EE7DE: ;
    eax = MEM32(edi + 0x110);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x000EE7ECu); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE7EC: ;
    eax = MEM32(0x64D83C);
    PUSH32(esp, 0x000EE7F6u); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE7F6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000EE800
 * Original: 0x000EE800 - 0x000EE8EC (236 bytes, 60 insns)
 * Folder: sound (source: sndfileasync.c)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EE800: ;
    ecx = MEM32(0x64D83C);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000EE80Eu); RECOMP_ABI_CALL(0x000EDF50u, sub_000EDF50); /* call 0x000EDF50 */

loc_000EE80E: ;
    eax = MEM32(edi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE844; /* jne: not equal / not zero */

loc_000EE818: ;
    PUSH32(esp, 0x2BA);
    PUSH32(esp, 0x324878);
    edx = 0x330BCC;
    ecx = 0x330CD0;
    PUSH32(esp, 0x000EE831u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000EE831: ;
    eax = MEM32(0x64D83C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000EE83Eu); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE83E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000EE844: ;
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE84Eu); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000EE84E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE866; /* jne: not equal / not zero */

loc_000EE852: ;
    eax = MEM32(edi + 0x10C);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE873; /* jne: not equal / not zero */

loc_000EE85F: ;
    eax = MEM32(eax);
    PUSH32(esp, 0x000EE866u); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE866: ;
    eax = MEM32(0x64D83C);
    PUSH32(esp, 0x000EE870u); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE870: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000EE873: ;
    ecx = MEM32(eax + 0x11C);
    edx = MEM32(eax + 0x118);
    eax = MEM32(eax + 0x114);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EE88Du); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000EE88D: ;
    ecx = MEM32(edi + 0x10C);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x124);
    MEM32(eax) = edx;
    eax = MEM32(edi + 0x104);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE8BB; /* jne: not equal / not zero */

loc_000EE8AC: ;
    ecx = MEM32(edi + 0x10C);
    edx = MEM32(ecx + 0xC);
    MEM32(edi + 0x108) = edx;

loc_000EE8BB: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x10C);
    MEM32(edi + 0x104) = 1;
    PUSH32(esp, 0x000EE8D1u); RECOMP_ABI_CALL(0x000EDFC0u, sub_000EDFC0); /* call 0x000EDFC0 */

loc_000EE8D1: ;
    eax = MEM32(0x64D83C);
    MEM32(edi + 0x10C) = 0;
    PUSH32(esp, 0x000EE8E5u); RECOMP_ABI_CALL(0x000EDF60u, sub_000EDF60); /* call 0x000EDF60 */

loc_000EE8E5: ;
    POP32(esp, esi);
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001A2277
 * Original: 0x001A2277 - 0x001A3115 (3742 bytes, 944 insns)
 * Folder: sound (source: dareinterface.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2277(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A2277: ;
    ebx = esp + 0x20;
    PUSH32(esp, 0x001A2280u); RECOMP_ABI_CALL(0x00202670u, sub_00202670); /* call 0x00202670 */

loc_001A2280: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x48); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x4C); /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    edx = MEM32(esp + 0x68);
    ecx = MEM32(esp + 0x70);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x44); /* subss */
    eax = MEM32(esp + 0x6C);
    xmm6 = xmm0; /* movaps */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x5C) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    edx = esp + 0x50;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    PUSH32(esp, edx);
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    edx = esp + 0x68;
    ecx = esp + 0x5C;
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x64) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001A2339u); RECOMP_ABI_CALL(0x00202670u, sub_00202670); /* call 0x00202670 */

loc_001A2339: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x64D880);
    eax = esp + 0x68;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    eax = ebp + 0x8BC;
    PUSH32(esp, 0x001A236Du); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_001A236D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x68); /* subss */
    edi = MEM32(0x64FD10);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x6C); /* subss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x70); /* subss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001A23B9; /* jne: not equal / not zero */

loc_001A23B1: ;
    edi = MEM32(0x614FCC);
    goto loc_001A23C4;

loc_001A23B9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A23C4; /* jne: not equal / not zero */

loc_001A23BE: ;
    edi = MEM32(0x614FD0);

loc_001A23C4: ;
    esi = esp + 0x58;
    PUSH32(esp, 0x001A23CDu); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_001A23CD: ;
    ecx = MEM32(0x34AC38);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x2DC) (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(0x64D880);
    if (CMP_AE(_fa, _fb)) goto loc_001A2402; /* jae: above or equal (unsigned >=) */

loc_001A23E5: ;
    edx = eax + eax * 2;
    esi = ecx + edx * 4 + 0x2E8;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001A23F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001A23F3u); } /* indirect call */
    }

loc_001A23F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A2402; /* jne: not equal / not zero */

loc_001A23FB: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x30);
    goto loc_001A2404;

loc_001A2402: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001A2404: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A2410; /* jne: not equal / not zero */

loc_001A2409: ;
    eax = MEM32(0x614FCC);
    goto loc_001A241C;

loc_001A2410: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_001A241C; /* je: equal / zero */

loc_001A241A: ;
    eax = edi;

loc_001A241C: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2451; /* je: equal / zero */

loc_001A2423: ;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A242F; /* je: equal / zero */

loc_001A242A: ;
    MEM32(eax + 0x14) = ecx;
    goto loc_001A2451;

loc_001A242F: ;
    PUSH32(esp, 0x001A2434u); RECOMP_ABI_CALL(0x000F8010u, sub_000F8010); /* call 0x000F8010 */

loc_001A2434: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x485);
    PUSH32(esp, 0x3232EC);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x001A244Eu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_001A244E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001A2451: ;
    edi = MEM32(0x64D880);
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx);
    ecx = ZX8(MEM8(eax + 0x3A));
    edx = MEM32(eax + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    _fa = (uint32_t)(MEM8(ecx + edx + 0x33)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + edx + 0x33), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001A25ED; /* jne: not equal / not zero */

loc_001A2471: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    esi = esp + 0x64;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001A24B0u); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_001A24B0: ;
    _fa = (uint32_t)(MEM32(ebp + 0xDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x142) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xDC), 0x142 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(0x64D880);
    if (CMP_NE(_fa, _fb)) goto loc_001A24D2; /* jne: not equal / not zero */

loc_001A24C2: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    SET_LO8(eax, MEM8(ecx + 0x3A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_001A2673; /* jbe: below or equal (unsigned <=) */

loc_001A24D2: ;
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x001A24DEu); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_001A24DE: ;
    eax = MEM32(esp + 0x2C);
    esi = MEM32(0x64D880);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    xmm3 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80000000u)) >> 32) & 1);
    eax = eax + 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x80000000u)) >> 32) & 1);
    ecx = ecx + 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x80000000u)) >> 32) & 1);
    edx = edx + 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001A2526; /* je: equal / zero */

loc_001A251F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_001A2529;

loc_001A2526: ;
    xmm0 = xmm3; /* movaps */

loc_001A2529: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x49362C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337D4); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001A2550; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001A2547: ;
    xmm0 = xmm2; /* movaps */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_001A2550: ;
    fp_push(MEMD(0x3338B0)); /* fld double */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001A2563; /* jbe: below or equal (unsigned <=) */

loc_001A2560: ;
    xmm0 = xmm3; /* movaps */

loc_001A2563: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x5C) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x68) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x001A25E5u); RECOMP_ABI_CALL(0x00102F50u, sub_00102F50); /* call 0x00102F50 */

loc_001A25E5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001A266D;

loc_001A25ED: ;
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0x001A25F9u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_001A25F9: ;
    eax = esp + 0x5C;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x64D880);
    PUSH32(esp, 0x001A260Bu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_001A260B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    edi = MEM32(0x64D880);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    ecx = MEM32(esp + 0x50);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    edx = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x58;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x60) = eax;
    PUSH32(esp, 0x001A265Fu); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_001A265F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(ebp + 0x540) = xmm0.f[0]; /* movss */

loc_001A266D: ;
    esi = MEM32(0x64D880);

loc_001A2673: ;
    eax = MEM32(ebp + 0x688);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001A26DC; /* jne: not equal / not zero */

loc_001A267D: ;
    ecx = MEM32(ebp + 0xB30);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ebx = esp + 0x20;
    eax = esi;
    PUSH32(esp, 0x001A2696u); RECOMP_ABI_CALL(0x00202540u, sub_00202540); /* call 0x00202540 */

loc_001A2696: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A26DC; /* je: equal / zero */

loc_001A26A1: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    ecx = ZX8(MEM8(eax + 0x3A));
    edx = MEM32(eax + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    _fa = (uint32_t)(MEM8(ecx + edx + 0x33)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + edx + 0x33), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001A26D2; /* jne: not equal / not zero */

loc_001A26B7: ;
    ecx = ZX8(MEM8(eax + 0x3A));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    SET_LO8(eax, MEM8(ecx + edx + 0x33));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001A26DC; /* jns: not sign (positive) */

loc_001A26C6: ;
    MEM32(ebp + 0x688) = 4;
    goto loc_001A26DC;

loc_001A26D2: ;
    MEM32(ebp + 0x688) = 1;

loc_001A26DC: ;
    eax = MEM32(ebp + 0x700);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(0x33B4C8);
    if (CMP_NE(_fa, _fb)) goto loc_001A2790; /* jne: not equal / not zero */

loc_001A26EF: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 0x44);
    edx = MEM32(ecx + 0x860);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2790; /* je: equal / zero */

loc_001A2706: ;
    ecx = MEM32(ebp + 0xB30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001A2730; /* jne: not equal / not zero */

loc_001A2710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2730; /* je: equal / zero */

loc_001A2715: ;
    _fa = (uint32_t)(MEM8(eax * 4 + 0x64D384)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax * 4 + 0x64D384), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001A2730; /* je: equal / zero */

loc_001A271F: ;
    _fa = (uint32_t)(MEM8(eax * 4 + 0x64D374)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax * 4 + 0x64D374), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001A2730; /* jne: not equal / not zero */

loc_001A2729: ;
    eax = 1;
    goto loc_001A2732;

loc_001A2730: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001A2732: ;
    ebx = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2794; /* je: equal / zero */

loc_001A2743: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x142) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x142 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2794; /* je: equal / zero */

loc_001A274B: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0x001A2757u); RECOMP_ABI_CALL(0x00204290u, sub_00204290); /* call 0x00204290 */

loc_001A2757: ;
    esi = MEM32(ebp + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(ebp + 0x810) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001A30CB; /* je: equal / zero */

loc_001A277D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A30A0; /* jne: not equal / not zero */

loc_001A2786: ;
    eax = MEM32(0x614FCC);
    goto loc_001A30AC;

loc_001A2790: ;
    ebx = MEM32(esp + 0x10);

loc_001A2794: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0x688);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = ZX8(MEM8(ecx + 0x3A));
    if (CMP_EQ(_fa, _fb)) goto loc_001A27DB; /* je: equal / zero */

loc_001A27A7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x8B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x8B0) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A27DB; /* je: equal / zero */

loc_001A27AF: ;
    SET_LO16(edx, MEM16(ecx + 0x38));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x13B) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x13B (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A27C1; /* je: equal / zero */

loc_001A27BA: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x13E) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x13E (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A27DB; /* jne: not equal / not zero */

loc_001A27C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A27CE; /* jne: not equal / not zero */

loc_001A27C6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2DBC; /* je: equal / zero */

loc_001A27CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A27DB; /* jne: not equal / not zero */

loc_001A27D3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2D32; /* je: equal / zero */

loc_001A27DB: ;
    edx = ZX8(MEM8(ecx + 0x3A));
    eax = MEM32(ecx + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    _fa = (uint32_t)(MEM8(edx + eax + 0x33)) & 0xFFu; _fb = (uint32_t)(0x84) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + eax + 0x33), 0x84 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001A27F6; /* jne: not equal / not zero */

loc_001A27EC: ;
    MEM32(ebp + 0x688) = 0;

loc_001A27F6: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    edx = ZX8(MEM8(eax + 0x3A));
    eax = MEM32(eax + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    _fa = (uint32_t)(MEM8(edx + eax + 0x33)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + eax + 0x33), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x33382C)); /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_001A2834; /* je: equal / zero */

loc_001A281A: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + 0xB14)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001A2834; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_001A2827: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x333FF0); /* comiss */
    if ((_fca > _fcb)) goto loc_001A2CF2; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x333FF0)) */

loc_001A2834: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x44);
    ecx = MEM32(eax + 0x860);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A286A; /* je: equal / zero */

loc_001A2847: ;
    ecx = MEM32(ebp + 0xB30);
    PUSH32(esp, ecx);
    ecx = 5;
    PUSH32(esp, 0x001A2858u); RECOMP_ABI_CALL(0x000C0C10u, sub_000C0C10); /* call 0x000C0C10 */

loc_001A2858: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_001A2874; /* jne: not equal / not zero */

loc_001A286A: ;
    MEM32(ebp + 0x700) = 0;

loc_001A2874: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 0x44);
    eax = MEM32(ecx + 0x860);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A28CF; /* je: equal / zero */

loc_001A2887: ;
    eax = MEM32(ebp + 0xB30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001A28B6; /* jne: not equal / not zero */

loc_001A2891: ;
    eax = MEM32(0x33B4C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A28B6; /* je: equal / zero */

loc_001A289B: ;
    _fa = (uint32_t)(MEM8(eax * 4 + 0x64D384)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax * 4 + 0x64D384), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001A28B6; /* je: equal / zero */

loc_001A28A5: ;
    _fa = (uint32_t)(MEM8(eax * 4 + 0x64D374)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax * 4 + 0x64D374), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001A28B6; /* jne: not equal / not zero */

loc_001A28AF: ;
    eax = 1;
    goto loc_001A28B8;

loc_001A28B6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001A28B8: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A28CF; /* je: equal / zero */

loc_001A28C5: ;
    MEM32(ebp + 0x700) = 1;

loc_001A28CF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x13B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A2952; /* jne: not equal / not zero */

loc_001A28D7: ;
    eax = MEM32(ebp + 0x700);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001A2952; /* jne: not equal / not zero */

loc_001A28E1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x8B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x8B0), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2949; /* je: equal / zero */

loc_001A28E9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A2952; /* jne: not equal / not zero */

loc_001A28EE: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x147);
    PUSH32(esp, 0x13F);
    PUSH32(esp, 0x001A2902u); RECOMP_ABI_CALL(0x00268AE0u, sub_00268AE0); /* call 0x00268AE0 */

loc_001A2902: ;
    edx = MEM32(0x64FD18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x5F0) = 7;
    MEM32(ebp + 0x5EC) = 0x431;
    MEM32(ebp + 0x68C) = edi;
    MEM32(ebp + 0x59C) = edi;
    PUSH32(esp, 0x001A2930u); RECOMP_ABI_CALL(0x00256270u, sub_00256270); /* call 0x00256270 */

loc_001A2930: ;
    edx = MEM32(0x64D874);
    MEM32(edx) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A2949: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2CAA; /* je: equal / zero */

loc_001A2952: ;
    MEM32(ebp + 0x8B0) = edi;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_001A297A; /* js: sign (negative) */

loc_001A2965: ;
    edx = ZX8(MEM8(eax + 0x3A));
    ecx = MEM32(eax + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    _fa = (uint32_t)(MEM8(edx + ecx + 0x33)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + ecx + 0x33), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001A2B41; /* jne: not equal / not zero */

loc_001A297A: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + 0xB14)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001A29AB; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_001A2987: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x81 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2C09; /* je: equal / zero */

loc_001A2993: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x82 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2C09; /* je: equal / zero */

loc_001A299F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x140) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x140 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2C09; /* je: equal / zero */

loc_001A29AB: ;
    edx = ZX8(MEM8(eax + 0x3A));
    eax = MEM32(eax + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    _fa = (uint32_t)(MEM8(edx + eax + 0x33)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + eax + 0x33), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001A2D19; /* jne: not equal / not zero */

loc_001A29C0: ;
    eax = MEM32(ebp + 0x700);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001A2AB9; /* jne: not equal / not zero */

loc_001A29CE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x13C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2A72; /* je: equal / zero */

loc_001A29DA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x13B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2A2A; /* je: equal / zero */

loc_001A29E2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x142) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x142 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2A2A; /* je: equal / zero */

loc_001A29EA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x13D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A2B41; /* jne: not equal / not zero */

loc_001A29F6: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337D4)); /* movss */
    ecx = 1;
    eax = esi;
    PUSH32(esp, 0x001A2A0Au); RECOMP_ABI_CALL(0x001FAEE0u, sub_001FAEE0); /* call 0x001FAEE0 */

loc_001A2A0A: ;
    eax = MEM32(0x64FD18);
    PUSH32(esp, 0x431);
    PUSH32(esp, 7);
    PUSH32(esp, 0x13E);
    ecx = esi;
    PUSH32(esp, 0x001A2A22u); RECOMP_ABI_CALL(0x00205B40u, sub_00205B40); /* call 0x00205B40 */

loc_001A2A22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001A30FC;

loc_001A2A2A: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337D4)); /* movss */
    ecx = 1;
    eax = esi;
    PUSH32(esp, 0x001A2A3Eu); RECOMP_ABI_CALL(0x001FAEE0u, sub_001FAEE0); /* call 0x001FAEE0 */

loc_001A2A3E: ;
    eax = MEM32(0x64FD18);
    PUSH32(esp, 0x431);
    PUSH32(esp, 7);
    PUSH32(esp, 0x13E);
    ecx = esi;
    PUSH32(esp, 0x001A2A56u); RECOMP_ABI_CALL(0x00205B40u, sub_00205B40); /* call 0x00205B40 */

loc_001A2A56: ;
    edx = MEM32(0x64D874);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A2A72: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337D4)); /* movss */
    ecx = 1;
    eax = esi;
    PUSH32(esp, 0x001A2A86u); RECOMP_ABI_CALL(0x001FAEE0u, sub_001FAEE0); /* call 0x001FAEE0 */

loc_001A2A86: ;
    eax = MEM32(0x64FD18);
    PUSH32(esp, 0x431);
    PUSH32(esp, 7);
    PUSH32(esp, 0x13F);
    ecx = esi;
    PUSH32(esp, 0x001A2A9Eu); RECOMP_ABI_CALL(0x00205B40u, sub_00205B40); /* call 0x00205B40 */

loc_001A2A9E: ;
    eax = MEM32(0x64D874);
    MEM32(eax) = 0xFFFFFFFFu;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A2AB9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x81 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2AD9; /* je: equal / zero */

loc_001A2AC1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x82 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2AD9; /* je: equal / zero */

loc_001A2AC9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x13F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2AD9; /* je: equal / zero */

loc_001A2AD1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x140) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x140 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A2AFC; /* jne: not equal / not zero */

loc_001A2AD9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A2AE8u); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_001A2AE8: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    esi = MEM32(0x64D880);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + 0x3E) = 0;

loc_001A2AFC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x13C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2B31; /* je: equal / zero */

loc_001A2B04: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x13E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2B31; /* je: equal / zero */

loc_001A2B0C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x13D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2B2A; /* je: equal / zero */

loc_001A2B14: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x13B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2B24; /* je: equal / zero */

loc_001A2B1C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x142) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x142 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A2B41; /* jne: not equal / not zero */

loc_001A2B24: ;
    MEM32(ebp + 0x8C) = MEM32(ebp + 0x8C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A2B2A: ;
    eax = 0x13B;
    goto loc_001A2B36;

loc_001A2B31: ;
    eax = 0x13D;

loc_001A2B36: ;
    PUSH32(esp, 0x001A2B3Bu); RECOMP_ABI_CALL(0x00268A70u, sub_00268A70); /* call 0x00268A70 */

loc_001A2B3B: ;
    esi = MEM32(0x64D880);

loc_001A2B41: ;
    eax = MEM32(ebp + 0xB30);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ebx = esp + 0x24;
    eax = esi;
    PUSH32(esp, 0x001A2B5Au); RECOMP_ABI_CALL(0x00202540u, sub_00202540); /* call 0x00202540 */

loc_001A2B5A: ;
    eax = MEM32(esp + 0x24);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2BB5; /* je: equal / zero */

loc_001A2B67: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM16(edx + 0x38)) & 0xFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x38), 0x82 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A2BB5; /* jne: not equal / not zero */

loc_001A2B74: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337D4)); /* movss */
    ecx = 1;
    eax = esi;
    PUSH32(esp, 0x001A2B88u); RECOMP_ABI_CALL(0x001FAEE0u, sub_001FAEE0); /* call 0x001FAEE0 */

loc_001A2B88: ;
    eax = MEM32(0x64FD18);
    PUSH32(esp, 0x431);
    PUSH32(esp, 7);
    PUSH32(esp, 0x82);
    ecx = esi;
    PUSH32(esp, 0x001A2BA0u); RECOMP_ABI_CALL(0x00205B40u, sub_00205B40); /* call 0x00205B40 */

loc_001A2BA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x700) = edi;
    MEM32(ebp + 0x59C) = edi;
    MEM32(ebp + 0x68C) = edi;

loc_001A2BB5: ;
    eax = MEM32(ebp + 0xC18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A2BC7; /* jne: not equal / not zero */

loc_001A2BC0: ;
    eax = MEM32(0x614FCC);
    goto loc_001A2BD1;

loc_001A2BC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001A2BD1; /* jne: not equal / not zero */

loc_001A2BCC: ;
    eax = MEM32(0x614FD0);

loc_001A2BD1: ;
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A2BDBu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_001A2BDB: ;
    eax = MEM32(esp + 0x6C);
    edx = MEM32(esp + 0x68);
    ecx = MEM32(esp + 0x70);
    MEM32(ebp + 0x78C) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x788) = edx;
    MEM32(ebp + 0x790) = ecx;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A2C09: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x333BBC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001A2C1F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x333BBC)) */

loc_001A2C12: ;
    xmm1 = XMM_SCALAR(MEMF(0x333BB8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001A2C55; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001A2C1F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x141);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A2C2Eu); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_001A2C2E: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(0x64D874);
    MEM16(ecx + 0x3E) = 0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A2C55: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337D4)); /* movss */
    ecx = 1;
    eax = esi;
    PUSH32(esp, 0x001A2C69u); RECOMP_ABI_CALL(0x001FAEE0u, sub_001FAEE0); /* call 0x001FAEE0 */

loc_001A2C69: ;
    eax = MEM32(0x64FD18);
    PUSH32(esp, 0x431);
    PUSH32(esp, 7);
    PUSH32(esp, 0x82);
    ecx = esi;
    PUSH32(esp, 0x001A2C81u); RECOMP_ABI_CALL(0x00205B40u, sub_00205B40); /* call 0x00205B40 */

loc_001A2C81: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x68C) = eax;
    MEM32(ebp + 0x59C) = eax;
    eax = MEM32(0x64D874);
    MEM32(eax) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A2CAA: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x148);
    PUSH32(esp, 0x13F);
    PUSH32(esp, 0x001A2CBDu); RECOMP_ABI_CALL(0x00268AE0u, sub_00268AE0); /* call 0x00268AE0 */

loc_001A2CBD: ;
    edx = MEM32(0x64FD18);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x5F0) = 7;
    MEM32(ebp + 0x5EC) = 0x431;
    MEM32(ebp + 0x68C) = eax;
    MEM32(ebp + 0x59C) = eax;
    PUSH32(esp, 0x001A2CEDu); RECOMP_ABI_CALL(0x00256270u, sub_00256270); /* call 0x00256270 */

loc_001A2CED: ;
    goto loc_001A30FC;

loc_001A2CF2: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x142);
    PUSH32(esp, esi);
    MEM32(ebp + 0x730) = edi;
    MEM32(ebp + 0x8C) = edi;
    PUSH32(esp, 0x001A2D0Du); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_001A2D0D: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x3E) = LO16(edi);

loc_001A2D19: ;
    edx = MEM32(0x64D874);
    MEM32(edx) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A2D32: ;
    edi = MEM32(ebp + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2D66; /* je: equal / zero */

loc_001A2D39: ;
    eax = MEM32(0x64FD14);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x001A2D46u); RECOMP_ABI_CALL(0x0012D180u, sub_0012D180); /* call 0x0012D180 */

loc_001A2D46: ;
    PUSH32(esp, 0x001A2D4Bu); RECOMP_ABI_CALL(0x002564E0u, sub_002564E0); /* call 0x002564E0 */

loc_001A2D4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2D66; /* je: equal / zero */

loc_001A2D52: ;
    esi = edi;
    PUSH32(esp, 0x001A2D59u); RECOMP_ABI_CALL(0x001ED4C0u, sub_001ED4C0); /* call 0x001ED4C0 */

loc_001A2D59: ;
    esi = MEM32(0x64D880);
    MEM32(ebp + 0x4C) = 0;

loc_001A2D66: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x4C);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x54);
    MEM32(ebp + 0x328) = ecx;
    MEM32(ebp + 0x32C) = edx;
    MEM32(ebp + 0x330) = eax;
    PUSH32(esp, 0x001A2D9Eu); RECOMP_ABI_CALL(0x00204E30u, sub_00204E30); /* call 0x00204E30 */

loc_001A2D9E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x145);
    edi = esi;
    PUSH32(esp, 0x001A2DB4u); RECOMP_ABI_CALL(0x00207720u, sub_00207720); /* call 0x00207720 */

loc_001A2DB4: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001A30FC;

loc_001A2DBC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    PUSH32(esp, 0x40A00000);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0);
    ecx = esp + 0x70;
    edi = esi;
    ebx = 0x143;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001A2DFDu); RECOMP_ABI_CALL(0x0006AB70u, sub_0006AB70); /* call 0x0006AB70 */

loc_001A2DFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2F8E; /* je: equal / zero */

loc_001A2E08: ;
    eax = MEM32(0x64D880);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A2E17u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_001A2E17: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    ecx = MEM32(0x34AC38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFF40F);
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    PUSH32(esp, 1);
    eax = esp + 0x7C;
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333884); /* addss */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x298) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x298)) >> 32) & 1);
    ecx = ecx + 0x298;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001A2E6Au); RECOMP_ABI_CALL(0x00080200u, sub_00080200); /* call 0x00080200 */

loc_001A2E6A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001A2F8E; /* je: equal / zero */

loc_001A2E75: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001A2E7Cu); RECOMP_ABI_CALL(0x00265180u, sub_00265180); /* call 0x00265180 */

loc_001A2E7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC1400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xC1400 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001A2EDC; /* jne: not equal / not zero */

loc_001A2E83: ;
    PUSH32(esp, esi);
    edi = esp + 0x5C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001A2E8Fu); RECOMP_ABI_CALL(0x00264F50u, sub_00264F50); /* call 0x00264F50 */

loc_001A2E8F: ;
    eax = MEM32(0x64D880);
    edx = esp + 0x68;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A2EA1u); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_001A2EA1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x5C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001A2F8E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001A2EDC: ;
    eax = esp + 0x64;
    PUSH32(esp, eax);
    eax = MEM32(0x64D880);
    PUSH32(esp, 0x001A2EEBu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_001A2EEB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x58;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333884); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x54;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001A2F2Bu); RECOMP_ABI_CALL(0x002654A0u, sub_002654A0); /* call 0x002654A0 */

loc_001A2F2B: ;
    eax = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x54);
    ecx = esp + 0x60;
    MEM32(esp + 0x70) = eax;
    eax = MEM32(0x64D880);
    PUSH32(esp, ecx);
    MEM32(esp + 0x70) = edx;
    PUSH32(esp, 0x001A2F4Au); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_001A2F4A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    eax = MEM32(0x64D880);
    edx = esp + 0x64;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001A2F68u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_001A2F68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x64;
    ecx = esp + 0x58;
    PUSH32(esp, 0x001A2F78u); RECOMP_ABI_CALL(0x0001EFF0u, sub_0001EFF0); /* call 0x0001EFF0 */

loc_001A2F78: ;
    fp_push(MEMF(0x3337CC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    ebx = 0x143;
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001A2F8E; /* jbe: below or equal (unsigned <=) */

loc_001A2F89: ;
    ebx = 0x144;

loc_001A2F8E: ;
    esi = MEM32(ebp + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2FBA; /* je: equal / zero */

loc_001A2F95: ;
    eax = MEM32(0x64FD14);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x001A2FA2u); RECOMP_ABI_CALL(0x0012D180u, sub_0012D180); /* call 0x0012D180 */

loc_001A2FA2: ;
    PUSH32(esp, 0x001A2FA7u); RECOMP_ABI_CALL(0x002564E0u, sub_002564E0); /* call 0x002564E0 */

loc_001A2FA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A2FBA; /* je: equal / zero */

loc_001A2FAE: ;
    PUSH32(esp, 0x001A2FB3u); RECOMP_ABI_CALL(0x001ED4C0u, sub_001ED4C0); /* call 0x001ED4C0 */

loc_001A2FB3: ;
    MEM32(ebp + 0x4C) = 0;

loc_001A2FBA: ;
    eax = MEM32(0x64D880);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A2FC9u); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_001A2FC9: ;
    edx = MEM32(esp + 0x68);
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(esp + 0x70);
    MEM32(ebp + 0x3D8) = edx;
    edx = esp + 0x5C;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x3DC) = eax;
    eax = MEM32(0x64D880);
    PUSH32(esp, edx);
    MEM32(ebp + 0x3E0) = ecx;
    PUSH32(esp, 0x001A2FF9u); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_001A2FF9: ;
    edx = MEM32(0x64D880);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x270);
    PUSH32(esp, 0x3F0609FE);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x40400000);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A3026u); RECOMP_ABI_CALL(0x00199620u, sub_00199620); /* call 0x00199620 */

loc_001A3026: ;
    eax = MEM32(esp + 0x80);
    ecx = MEM32(esp + 0x84);
    edx = MEM32(esp + 0x88);
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    esi = MEM32(0x64D880);
    MEM32(ebp + 0x328) = eax;
    MEM32(ebp + 0x32C) = ecx;
    MEM32(ebp + 0x330) = edx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ebp + 0x3D0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001A3073u); RECOMP_ABI_CALL(0x00204E30u, sub_00204E30); /* call 0x00204E30 */

loc_001A3073: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    edi = esi;
    PUSH32(esp, 0x001A3085u); RECOMP_ABI_CALL(0x00207720u, sub_00207720); /* call 0x00207720 */

loc_001A3085: ;
    eax = MEM32(0x64D874);
    MEM32(eax) = 0xFFFFFFFFu;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A30A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_001A30AC; /* je: equal / zero */

loc_001A30AA: ;
    eax = esi;

loc_001A30AC: ;
    edx = MEM32(0x64FD14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A30B8u); RECOMP_ABI_CALL(0x002564E0u, sub_002564E0); /* call 0x002564E0 */

loc_001A30B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001A30CB; /* je: equal / zero */

loc_001A30BF: ;
    PUSH32(esp, 0x001A30C4u); RECOMP_ABI_CALL(0x001ED4C0u, sub_001ED4C0); /* call 0x001ED4C0 */

loc_001A30C4: ;
    MEM32(ebp + 0x4C) = 0;

loc_001A30CB: ;
    eax = MEM32(esp + 0x18);
    edi = MEM32(0x64D880);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A30E5u); RECOMP_ABI_CALL(0x00207720u, sub_00207720); /* call 0x00207720 */

loc_001A30E5: ;
    eax = MEM32(0x64D880);
    xmm1 = XMM_SCALAR(MEMF(0x3337D0)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001A30FCu); RECOMP_ABI_CALL(0x001FAEE0u, sub_001FAEE0); /* call 0x001FAEE0 */

loc_001A30FC: ;
    ecx = MEM32(0x64D874);
    POP32(esp, edi);
    MEM32(ecx) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0026FC10
 * Original: 0x0026FC10 - 0x0026FC7A (106 bytes, 29 insns)
 * Folder: sound (source: dareinterface.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FC10: ;
    PUSH32(esp, 0x0026FC15u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026FC15: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270D8);
    ecx = MEM32(ecx + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D858) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026FC72; /* je: equal / zero */

loc_0026FC3E: ;
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FC50; /* je: equal / zero */

loc_0026FC45: ;
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026FC50: ;
    PUSH32(esp, 0x0026FC55u); RECOMP_ABI_CALL(0x000F8010u, sub_000F8010); /* call 0x000F8010 */

loc_0026FC55: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x485);
    PUSH32(esp, 0x3232EC);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0026FC6Fu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0026FC6F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026FC72: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
