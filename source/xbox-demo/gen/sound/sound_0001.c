/**
 * PoP SoT xbox-demo - sound, chunk 1
 * Ubisoft Dare sound engine and Jade's glue to it
 * Functions: 250 (0x000CDBE0 - 0x000D6740)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000CDBE0
 * Original: 0x000CDBE0 - 0x000CDC9C (188 bytes, 76 insns)
 * Folder: sound (string: lpDSBufferEx->GetDSBuffer()->GetStatus(&dwStatus ))
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDBE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000CDBF7; /* jne: not equal / not zero */

loc_000CDBF1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CDBF7: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDC0E; /* je: equal / zero */

loc_000CDBFF: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDC0E; /* je: equal / zero */

loc_000CDC04: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CDC0E: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0x3261D4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDC21u); RECOMP_ABI_CALL(0x002EB0BAu, sub_002EB0BA); /* call 0x002EB0BA */

loc_000CDC21: ;
    edx = eax;
    PUSH32(esp, 0x000CDC28u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CDC28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDC42; /* je: equal / zero */

loc_000CDC2F: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 5 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CDC42; /* je: equal / zero */

loc_000CDC36: ;
    POP32(esp, esi);
    ebx = 1;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CDC42: ;
    PUSH32(esp, 0x3261B4);
    eax = esi;
    PUSH32(esp, 0x000CDC4Eu); RECOMP_ABI_CALL(0x000D7330u, sub_000D7330); /* call 0x000D7330 */

loc_000CDC4E: ;
    edx = eax;
    PUSH32(esp, 0x000CDC55u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CDC55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x000CDC5Fu); RECOMP_ABI_CALL(0x000D74F0u, sub_000D74F0); /* call 0x000D74F0 */

loc_000CDC5F: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDC6A; /* je: equal / zero */

loc_000CDC64: ;
    MEM32(0x64D438) = MEM32(0x64D438) - 1;
    _fa = (uint32_t)(MEM32(0x64D438)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CDC6A: ;
    eax = MEM32(0x64D434);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = ebx;
    ecx = MEM32(edi);
    MEM32(0x64D434) = eax;
    eax = ecx;
    PUSH32(esp, 0x000CDC81u); RECOMP_ABI_CALL(0x000CE000u, sub_000CE000); /* call 0x000CE000 */

loc_000CDC81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDC8E; /* je: equal / zero */

loc_000CDC85: ;
    eax = ecx;
    PUSH32(esp, 0x000CDC8Cu); RECOMP_ABI_CALL(0x000CE010u, sub_000CE010); /* call 0x000CE010 */

loc_000CDC8C: ;
    MEM32(edi) = ebx;

loc_000CDC8E: ;
    eax = edi;
    PUSH32(esp, 0x000CDC95u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CDC95: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CDCA0
 * Original: 0x000CDCA0 - 0x000CDCD1 (49 bytes, 13 insns)
 * Folder: sound (string: m_lpDSObject->SetDopplerFactor(fDopplerFact, DS3D_IMMEDIATE))
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDCA0(void)
{

loc_000CDCA0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333830); /* mulss */
    eax = MEM32(0x64D45C);
    PUSH32(esp, 0x326174);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDCC6u); RECOMP_ABI_CALL(0x002EC70Fu, sub_002EC70F); /* call 0x002EC70F */

loc_000CDCC6: ;
    edx = eax;
    PUSH32(esp, 0x000CDCCDu); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CDCCD: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CDCE0
 * Original: 0x000CDCE0 - 0x000CDD29 (73 bytes, 14 insns)
 * Folder: sound (between: 0x000CDCA0 and 0x000CDD30)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDCE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0xFFFFFFFFu (32-bit) */
    xmm1.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(0x333830)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x64D44C) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDD16; /* je: equal / zero */

loc_000CDD02: ;
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0xC); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x64D448) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_000CDD16: ;
    xmm0 = XMM_SCALAR(MEMF(0x333840)); /* movss */
    MEMF(0x64D448) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CDD30
 * Original: 0x000CDD30 - 0x000CDD71 (65 bytes, 21 insns)
 * Folder: sound (source: RXBox.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDD30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDD5A; /* je: equal / zero */

loc_000CDD3A: ;
    PUSH32(esp, 0x767);
    PUSH32(esp, 0x324878);
    edx = 0x32613C;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CDD53u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CDD53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000CDD5A: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000CDD66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CDD63u); } /* indirect call */
    }

loc_000CDD66: ;
    MEM32(esi + 0x68) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CDD80
 * Original: 0x000CDD80 - 0x000CDFD3 (595 bytes, 161 insns)
 * Folder: sound (source: RXBox.cpp)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CDD80: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDEE4; /* je: equal / zero */

loc_000CDD90: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x1C);
    MEM32(0x64D460) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebp);
    MEM32(0x64D464) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    MEM32(0x64D468) = eax;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDDBAu); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDDBA: ;
    ebp = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDDC6u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDDC6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x18);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x34) = ebp;
    ebp = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 0x2C);
    ebp = (uint32_t)(-(int32_t)ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x000CDDE8u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDDE8: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEM32(esp + 0x60) = eax;
    PUSH32(esp, 0x000CDDF3u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDDF3: ;
    ebp = eax;
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDE06u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDE06: ;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDE18u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000CDE18: ;
    xmm0 = XMM_SCALAR(MEMF(0x333830)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x18); /* cvtsi2ss */
    ecx = MEM32(esp + 0x70);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x54); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 4); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 8); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x64D43C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x10); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    POP32(esp, edi);
    MEMF(0x64D440) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x14); /* cvtsi2ss */
    POP32(esp, ebp);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x64D444) = xmm1.f[0]; /* movss */
    POP32(esp, ebx);
    goto loc_000CDF3D;

loc_000CDEE4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(0x64D43C) = xmm0.f[0]; /* movss */
    MEMF(0x64D440) = xmm0.f[0]; /* movss */
    MEMF(0x64D444) = xmm0.f[0]; /* movss */

loc_000CDF3D: ;
    eax = MEM32(0x64D45C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CDFB1; /* je: equal / zero */

loc_000CDF47: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDF5Eu); RECOMP_ABI_CALL(0x002EC77Du, sub_002EC77D); /* call 0x002EC77D */

loc_000CDF5E: ;
    eax = MEM32(0x64D444);
    ecx = MEM32(0x64D440);
    edx = MEM32(0x64D43C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(0x64D45C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDF7Fu); RECOMP_ABI_CALL(0x002EC7D6u, sub_002EC7D6); /* call 0x002EC7D6 */

loc_000CDF7F: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D45C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CDFABu); RECOMP_ABI_CALL(0x002EC733u, sub_002EC733); /* call 0x002EC733 */

loc_000CDFAB: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000CDFB1: ;
    PUSH32(esp, 0x7CD);
    PUSH32(esp, 0x324878);
    edx = 0x326100;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CDFCAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CDFCA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CDFE0
 * Original: 0x000CDFE0 - 0x000CDFF3 (19 bytes, 8 insns)
 * Folder: sound (between: 0x000CDD80 and 0x000CE010)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDFE0(void)
{

loc_000CDFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000CDFEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CDFE7u); } /* indirect call */
    }

loc_000CDFEA: ;
    MEM32(esi + 0x68) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE000
 * Original: 0x000CE000 - 0x000CE004 (4 bytes, 2 insns)
 * Folder: sound (between: 0x000CDD80 and 0x000CE010)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE000(void)
{

loc_000CE000: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE010
 * Original: 0x000CE010 - 0x000CE0CF (191 bytes, 56 insns)
 * Folder: sound (string: lpDSBufferEx->GetDSBuffer()->GetStatus(&dwStatus ))
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE0CC; /* je: equal / zero */

loc_000CE01C: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0x3261D4);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE02Fu); RECOMP_ABI_CALL(0x002EB0BAu, sub_002EB0BA); /* call 0x002EB0BA */

loc_000CE02F: ;
    edx = eax;
    PUSH32(esp, 0x000CE036u); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CE036: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE0CC; /* je: equal / zero */

loc_000CE041: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 5 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE057; /* jne: not equal / not zero */

loc_000CE048: ;
    PUSH32(esp, 0x000CE04Du); RECOMP_ABI_CALL(0x000D72D0u, sub_000D72D0); /* call 0x000D72D0 */

loc_000CE04D: ;
    eax = esi;
    PUSH32(esp, 0x000CE054u); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000CE054: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CE057: ;
    PUSH32(esp, edi);
    eax = 0x10;
    PUSH32(esp, 0x000CE062u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CE062: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE07A; /* jne: not equal / not zero */

loc_000CE068: ;
    PUSH32(esp, 0x3260F0);
    edx = 0xA;
    PUSH32(esp, 0x000CE077u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CE077: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE07A: ;
    MEM32(edi + 8) = 0;
    MEM32(edi + 0xC) = 0;
    MEM32(edi + 4) = 0;
    edx = MEM32(0x64D454);
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = 0x64D450;
    eax = MEM32(0x64D450);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE0B0; /* jne: not equal / not zero */

loc_000CE0A8: ;
    MEM32(0x64D450) = edi;
    goto loc_000CE0B8;

loc_000CE0B0: ;
    eax = MEM32(0x64D454);
    MEM32(eax + 4) = edi;

loc_000CE0B8: ;
    eax = MEM32(0x64D458);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D454) = edi;
    MEM32(0x64D458) = eax;
    MEM32(edi) = esi;
    POP32(esp, edi);

loc_000CE0CC: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE0D0
 * Original: 0x000CE0D0 - 0x000CE190 (192 bytes, 73 insns)
 * Folder: sound (string: pOldDuplicated->pvDSOldDuplicated->GetDSBuffer()->GetStatus(&dwStatus ))
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE0D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x64D450);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE18C; /* je: equal / zero */

loc_000CE0E3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);

loc_000CE0E8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE17C; /* je: equal / zero */

loc_000CE0F0: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, 0x3260A8);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE105u); RECOMP_ABI_CALL(0x002EB0BAu, sub_002EB0BA); /* call 0x002EB0BA */

loc_000CE105: ;
    edx = eax;
    PUSH32(esp, 0x000CE10Cu); RECOMP_ABI_CALL(0x000CBF20u, sub_000CBF20); /* call 0x000CBF20 */

loc_000CE10C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE17C; /* je: equal / zero */

loc_000CE113: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 5 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE17C; /* jne: not equal / not zero */

loc_000CE11A: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE12C; /* je: equal / zero */

loc_000CE120: ;
    PUSH32(esp, 0x000CE125u); RECOMP_ABI_CALL(0x000D72D0u, sub_000D72D0); /* call 0x000D72D0 */

loc_000CE125: ;
    eax = esi;
    PUSH32(esp, 0x000CE12Cu); RECOMP_ABI_CALL(0x000D4800u, sub_000D4800); /* call 0x000D4800 */

loc_000CE12C: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(edi) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE13B; /* je: equal / zero */

loc_000CE135: ;
    edx = MEM32(edi + 8);
    MEM32(eax + 8) = edx;

loc_000CE13B: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE148; /* je: equal / zero */

loc_000CE142: ;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;

loc_000CE148: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE16C; /* je: equal / zero */

loc_000CE14F: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE15E; /* jne: not equal / not zero */

loc_000CE159: ;
    edx = MEM32(edi + 4);
    MEM32(eax) = edx;

loc_000CE15E: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE16C; /* jne: not equal / not zero */

loc_000CE166: ;
    ecx = MEM32(edi + 8);
    MEM32(eax + 4) = ecx;

loc_000CE16C: ;
    eax = edi;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0xC) = ebp;
    PUSH32(esp, 0x000CE17Cu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CE17C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    edi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE18A; /* je: equal / zero */

loc_000CE182: ;
    ebx = MEM32(ebx + 4);
    goto loc_000CE0E8;

loc_000CE18A: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000CE18C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE190
 * Original: 0x000CE190 - 0x000CE1AA (26 bytes, 10 insns)
 * Folder: sound (between: 0x000CE0D0 and 0x000CE200)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CE190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE190: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE1A7; /* je: equal / zero */

loc_000CE197: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x24));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CE1A9; /* jne: not equal / not zero */

loc_000CE1A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CE1A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CE1B0
 * Original: 0x000CE1B0 - 0x000CE1B8 (8 bytes, 2 insns)
 * Folder: sound (between: 0x000CE0D0 and 0x000CE200)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE1B0(void)
{

loc_000CE1B0: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CE1C0
 * Original: 0x000CE1C0 - 0x000CE1FA (58 bytes, 22 insns)
 * Folder: sound (between: 0x000CE0D0 and 0x000CE200)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE1C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000CE1DA; /* jne: not equal / not zero */

loc_000CE1CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CE1CE: ;
    ecx = edi;
    PUSH32(esp, 0x000CE1D5u); RECOMP_ABI_CALL(0x000CE200u, sub_000CE200); /* call 0x000CE200 */

loc_000CE1D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000CE1DA: ;
    PUSH32(esp, 0x000CE1DFu); RECOMP_ABI_CALL(0x000D60C0u, sub_000D60C0); /* call 0x000D60C0 */

loc_000CE1DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE1CE; /* jne: not equal / not zero */

loc_000CE1E3: ;
    PUSH32(esp, 0x32608C);
    edx = 8;
    PUSH32(esp, 0x000CE1F2u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CE1F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CE200
 * Original: 0x000CE200 - 0x000CE56B (875 bytes, 201 insns)
 * Folder: sound (source: RXBox.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CE200: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000CE22E; /* jne: not equal / not zero */

loc_000CE208: ;
    edi = esi + 0xA8;
    PUSH32(esp, 0x30);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE21Au); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CE21A: ;
    eax = MEM32(0x64D45C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE22Bu); RECOMP_ABI_CALL(0x002EC80Bu, sub_002EC80B); /* call 0x002EC80B */

loc_000CE22B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CE22E: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0xD8) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0xDC) = edx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    ebx = esi + 0xD8;
    MEM32(esi + 0xE0) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0xE4) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0xE8) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0xEC) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0xF0) = ecx;
    edx = MEM32(eax + 0x20);
    MEM32(esi + 0xF4) = edx;
    ecx = MEM32(eax + 0x24);
    MEM32(esi + 0xF8) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(esi + 0xFC) = edx;
    ecx = MEM32(eax + 0x2C);
    MEM32(esi + 0x100) = ecx;
    edx = MEM32(eax + 0x30);
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    MEM32(esi + 0x104) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000CE2AE; /* jl: less (signed <) */

loc_000CE2AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CE2CA; /* jle: less or equal (signed <=) */

loc_000CE2AE: ;
    PUSH32(esp, 0x8B6);
    PUSH32(esp, 0x326008);
    edx = 0x326070;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE2C7u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE2C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE2CA: ;
    eax = MEM32(esi + 0xDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CE2DB; /* jl: less (signed <) */

loc_000CE2D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CE2F7; /* jle: less or equal (signed <=) */

loc_000CE2DB: ;
    PUSH32(esp, 0x8B7);
    PUSH32(esp, 0x325F78);
    edx = 0x325FE8;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE2F4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE2F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE2F7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE319; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000CE308: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xE0); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE335; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xE0)) */

loc_000CE319: ;
    PUSH32(esp, 0x8B8);
    PUSH32(esp, 0x325EB0);
    edx = 0x325F50;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE332u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE332: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE335: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x333854); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE357; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x333854)) */

loc_000CE346: ;
    xmm0 = XMM_SCALAR(MEMF(0x333930)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xE4); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE373; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xE4)) */

loc_000CE357: ;
    PUSH32(esp, 0x8B9);
    PUSH32(esp, 0x325E10);
    edx = 0x325E90;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE370u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE370: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE373: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x333854); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE395; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x333854)) */

loc_000CE384: ;
    xmm0 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xE8); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE3B1; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xE8)) */

loc_000CE395: ;
    PUSH32(esp, 0x8BA);
    PUSH32(esp, 0x325D60);
    edx = 0x325DEC;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE3AEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE3AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE3B1: ;
    eax = MEM32(esi + 0xEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CE3C5; /* jl: less (signed <) */

loc_000CE3BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CE3E1; /* jle: less or equal (signed <=) */

loc_000CE3C5: ;
    PUSH32(esp, 0x8BB);
    PUSH32(esp, 0x325CB8);
    edx = 0x325D3C;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE3DEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE3DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE3E1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE403; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000CE3F2: ;
    xmm0 = XMM_SCALAR(MEMF(0x333920)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xF0); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE41F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xF0)) */

loc_000CE403: ;
    PUSH32(esp, 0x8BC);
    PUSH32(esp, 0x325BF0);
    edx = 0x325C8C;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE41Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE41C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE41F: ;
    eax = MEM32(esi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CE433; /* jl: less (signed <) */

loc_000CE42C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CE44F; /* jle: less or equal (signed <=) */

loc_000CE433: ;
    PUSH32(esp, 0x8BD);
    PUSH32(esp, 0x325B60);
    edx = 0x325BD0;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE44Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE44C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE44F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE471; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000CE460: ;
    xmm0 = XMM_SCALAR(MEMF(0x333854)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xF8); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE48D; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xF8)) */

loc_000CE471: ;
    PUSH32(esp, 0x8BE);
    PUSH32(esp, 0x325AB0);
    edx = 0x325B38;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE48Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE48A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE48D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xFC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE4AF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000CE49E: ;
    xmm0 = XMM_SCALAR(MEMF(0x333834)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xFC); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE4CB; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0xFC)) */

loc_000CE4AF: ;
    PUSH32(esp, 0x8BF);
    PUSH32(esp, 0x325A10);
    edx = 0x325A90;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE4C8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE4C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE4CB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x100)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE4ED; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000CE4DC: ;
    xmm0 = XMM_SCALAR(MEMF(0x333834)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x100); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE509; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0x100)) */

loc_000CE4ED: ;
    PUSH32(esp, 0x8C0);
    PUSH32(esp, 0x325978);
    edx = 0x3259F0;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE506u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE506: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE509: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x104)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x333930); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE52B; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x333930)) */

loc_000CE51A: ;
    xmm0 = XMM_SCALAR(MEMF(0x333944)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x104); /* comiss */
    if ((_fca >= _fcb)) goto loc_000CE547; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0x104)) */

loc_000CE52B: ;
    PUSH32(esp, 0x8C1);
    PUSH32(esp, 0x3258C8);
    edx = 0x325950;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE544u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE544: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE547: ;
    PUSH32(esp, 0x30);
    edi = esi + 0xA8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE556u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CE556: ;
    eax = MEM32(0x64D45C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE568u); RECOMP_ABI_CALL(0x002EC80Bu, sub_002EC80B); /* call 0x002EC80B */

loc_000CE568: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE570
 * Original: 0x000CE570 - 0x000CE5DB (107 bytes, 17 insns)
 * Folder: sound (between: 0x000CE200 and 0x000CE6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE570(void)
{

loc_000CE570: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x33383C)); /* movss */
    ecx = 0xFFFFD8F0u;
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333838)); /* movss */
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEMF(eax + 0x84) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEMF(eax + 0xA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000CE5E0
 * Original: 0x000CE5E0 - 0x000CE612 (50 bytes, 15 insns)
 * Folder: sound (between: 0x000CE200 and 0x000CE6B0)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE5E0: ;
    eax = MEM32(0x64D45C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE5F2; /* je: equal / zero */

loc_000CE5EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE5F2u); RECOMP_ABI_CALL(0x002EC2E3u, sub_002EC2E3); /* call 0x002EC2E3 */

loc_000CE5F2: ;
    ecx = MEM32(esi + 0x148);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + 0x148;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CE608; /* je: equal / zero */

loc_000CE603: ;
    PUSH32(esp, 0x000CE608u); RECOMP_ABI_CALL(0x000D81B0u, sub_000D81B0); /* call 0x000D81B0 */

loc_000CE608: ;
    PUSH32(esp, 0x000CE60Du); RECOMP_ABI_CALL(0x002EB15Au, sub_002EB15A); /* call 0x002EB15A */

loc_000CE60D: ;
    g_seh_ebp = ebp; sub_000CE0D0(); return; /* tail jmp 0x000CE0D0 */

}

/**
 * sub_000CE620
 * Original: 0x000CE620 - 0x000CE655 (53 bytes, 19 insns)
 * Folder: sound (between: 0x000CE200 and 0x000CE6B0)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE620: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x000CE639u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CE636u); } /* indirect call */
    }

loc_000CE639: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE643; /* jne: not equal / not zero */

loc_000CE63D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 20; return; /* ret 16 */

loc_000CE643: ;
    ecx = MEM32(0x64D46C);
    eax = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D46C) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000CE660
 * Original: 0x000CE660 - 0x000CE668 (8 bytes, 2 insns)
 * Folder: sound (between: 0x000CE200 and 0x000CE6B0)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE660(void)
{

loc_000CE660: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CE670
 * Original: 0x000CE670 - 0x000CE6A9 (57 bytes, 23 insns)
 * Folder: sound (between: 0x000CE200 and 0x000CE6B0)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE670: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CE692; /* je: equal / zero */

loc_000CE67E: ;
    esi = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000CE689u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CE686u); } /* indirect call */
    }

loc_000CE689: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000CE692: ;
    esi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000CE6A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CE69Du); } /* indirect call */
    }

loc_000CE6A0: ;
    eax = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000CE6B0
 * Original: 0x000CE6B0 - 0x000CE885 (469 bytes, 152 insns)
 * Folder: sound (source: RXBox.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE6B0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    MEM32(esp + 0x10C) = eax;
    eax = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE6F0; /* je: equal / zero */

loc_000CE6D9: ;
    PUSH32(esp, 0x326C10);
    eax = 0x9F6;
    ecx = 0x3258A8;
    PUSH32(esp, 0x000CE6EDu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CE6ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE6F0: ;
    eax = MEM32(esi);
    ebx = MEM32(esp + 0x11C);
    MEM32(ebx) = eax;
    ecx = MEM32(esi + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(ebx + 8) = edx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE716; /* je: equal / zero */

loc_000CE70E: ;
    eax = MEM32(esi + 0x4C);
    MEM32(ebx + 0x70) = eax;
    goto loc_000CE71D;

loc_000CE716: ;
    MEM32(ebx + 0x70) = 0;

loc_000CE71D: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ebx + 0x10) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM32(ebx + 0x14) = edx;
    eax = MEM32(esi + 0x20);
    MEM32(ebx + 0x18) = eax;
    ecx = MEM32(esi + 0x28);
    MEM32(ebx + 0x20) = ecx;
    edx = MEM32(esi + 0x44);
    MEM32(ebx + 0x2C) = edx;
    SET_LO16(eax, MEM16(esi + 0x48));
    MEM16(ebx + 0x30) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x4A));
    MEM16(ebx + 0x32) = LO16(eax);
    SET_LO16(ecx, MEM16(edi + 0x12));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CE77F; /* jbe: below or equal (unsigned <=) */

loc_000CE754: ;
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    edx = ZX16(LO16(eax));
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x325800);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CE76Eu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CE76E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    edx = 0x1D;
    PUSH32(esp, 0x000CE77Fu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000CE77F: ;
    _fa = (uint32_t)(MEM16(ebx + 0x30)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x30), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE78C; /* jne: not equal / not zero */

loc_000CE786: ;
    ebp = ZX16(MEM16(ebx + 0x32));
    goto loc_000CE7A3;

loc_000CE78C: ;
    PUSH32(esp, 0x326C10);
    eax = 0xA18;
    ecx = 0x324878;
    PUSH32(esp, 0x000CE7A0u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CE7A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE7A3: ;
    edx = MEM32(esi + 0x2C);
    MEM32(ebx + 0x1C) = edx;
    eax = MEM32(esi + 0x34);
    MEM32(ebx + 0x24) = eax;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE7C0; /* je: equal / zero */

loc_000CE7B5: ;
    ecx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x68) = ecx;
    goto loc_000CE7C6;

loc_000CE7C0: ;
    edx = MEM32(esi + 0x34);
    MEM32(ebx + 0x68) = edx;

loc_000CE7C6: ;
    edi = MEM32(ebx + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE7FB; /* jne: not equal / not zero */

loc_000CE7CD: ;
    ecx = MEM32(ebx + 0x24);
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x38E38E39;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebp;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x38E38E39;
    MEM32(ebx + 0x28) = edx;
    edx = MEM32(ebx + 0x68);
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0x6C) = edx;
    goto loc_000CE816;

loc_000CE7FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x30);
    MEM32(ebx + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE810; /* je: equal / zero */

loc_000CE805: ;
    edx = MEM32(esi + 0x38);
    _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x6C) = edx;
    goto loc_000CE816;

loc_000CE810: ;
    eax = MEM32(esi + 0x30);
    MEM32(ebx + 0x6C) = eax;

loc_000CE816: ;
    ecx = MEM32(esi + 0x24);
    MEM32(ebx + 0x34) = ecx;
    edx = MEM32(esi + 0x40);
    MEM32(ebx + 0x64) = edx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE843; /* je: equal / zero */

loc_000CE829: ;
    PUSH32(esp, 0x25);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    ecx = ebx + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CE838u); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_000CE838: ;
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x60) = edx;
    goto loc_000CE86C;

loc_000CE843: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE85F; /* jne: not equal / not zero */

loc_000CE847: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(MEM32(esp + 0x120)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CE85Au); RECOMP_ABI_CALL(0x000CD0A0u, sub_000CD0A0); /* call 0x000CD0A0 */

loc_000CE85A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CE86C;

loc_000CE85F: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(MEM32(esp + 0x120)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 0x120);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x38) = ecx;

loc_000CE86C: ;
    ecx = MEM32(esp + 0x110);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000CE87Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CE87C: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000CE890
 * Original: 0x000CE890 - 0x000CE8C5 (53 bytes, 22 insns)
 * Folder: sound (between: 0x000CE6B0 and 0x000CE8D0)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE890: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE8BC; /* je: equal / zero */

loc_000CE8A4: ;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x34), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE8BC; /* jne: not equal / not zero */

loc_000CE8A9: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE8B3; /* jne: not equal / not zero */

loc_000CE8AE: ;
    PUSH32(esp, 0x000CE8B3u); RECOMP_ABI_CALL(0x000CD410u, sub_000CD410); /* call 0x000CD410 */

loc_000CE8B3: ;
    MEM32(edi + 0x38) = esi;
    MEM32(edi + 0x78) = esi;
    MEM32(edi + 0x7C) = esi;

loc_000CE8BC: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CE8D0
 * Original: 0x000CE8D0 - 0x000CE8F1 (33 bytes, 8 insns)
 * Folder: sound (source: RXBox.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CE8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE8D0: ;
    PUSH32(esp, 0xA8F);
    PUSH32(esp, 0x324878);
    edx = 0x3257D8;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE8E9u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE8E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CE900
 * Original: 0x000CE900 - 0x000CE906 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000CE8D0 and 0x000CE910)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE900(void)
{

loc_000CE900: ;
    eax = MEM32(0x33B53C);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE910
 * Original: 0x000CE910 - 0x000CE96B (91 bytes, 28 insns)
 * Folder: sound (source: RXBox.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE910: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE925; /* je: equal / zero */

loc_000CE921: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE941; /* jne: not equal / not zero */

loc_000CE925: ;
    PUSH32(esp, 0xAE3);
    PUSH32(esp, 0x325798);
    edx = 0x3257C4;
    ecx = 0x326C10;
    PUSH32(esp, 0x000CE93Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CE93E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE941: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(0x33B540) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000CE952u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CE94Fu); } /* indirect call */
    }

loc_000CE952: ;
    ecx = MEM32(0x33B540);
    MEM32(0x5F6194) = eax;
    MEM32(edi) = 0x5F6194;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CE970
 * Original: 0x000CE970 - 0x000CE994 (36 bytes, 11 insns)
 * Folder: sound (between: 0x000CE910 and 0x000CE9A0)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CE970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE970: ;
    eax = MEM32(0x64D430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE97F; /* je: equal / zero */

loc_000CE979: ;
    eax = MEM32(0x64D45C);
    esp += 4; return; /* ret */

loc_000CE97F: ;
    PUSH32(esp, 0x325730);
    edx = 8;
    PUSH32(esp, 0x000CE98Eu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CE98E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CE9A0
 * Original: 0x000CE9A0 - 0x000CEA7E (222 bytes, 83 insns)
 * Folder: sound (source: snddata.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE9A0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE9BB; /* jne: not equal / not zero */

loc_000CE9A7: ;
    PUSH32(esp, 0x327430);
    edx = 0x2E;
    PUSH32(esp, 0x000CE9B6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CE9B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CE9BB: ;
    eax = esi;
    edx = eax + 1;

loc_000CE9C0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE9C0; /* jne: not equal / not zero */

loc_000CE9C7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + 1;
    PUSH32(esp, 0x000CE9D5u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CE9D5: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE9F1; /* jne: not equal / not zero */

loc_000CE9DB: ;
    PUSH32(esp, 0x3273F0);
    edx = 0x2E;
    PUSH32(esp, 0x000CE9EAu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CE9EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CE9F1: ;
    edx = ebx;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000CE9F7: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE9F7; /* jne: not equal / not zero */

loc_000CEA01: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEA4A; /* jle: less or equal (signed <=) */

loc_000CEA07: ;
    SET_LO8(eax, MEM8(ecx + ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEA12; /* je: equal / zero */

loc_000CEA0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEA1A; /* jne: not equal / not zero */

loc_000CEA12: ;
    PUSH32(esp, 0x000CEA17u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CEA17: ;
    MEM8(ecx + ebx) = LO8(eax);

loc_000CEA1A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEA07; /* jl: less (signed <) */

loc_000CEA1F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEA4A; /* jle: less or equal (signed <=) */

loc_000CEA23: ;
    PUSH32(esp, 0x000CEA28u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CEA28: ;
    _fa = (uint32_t)(MEM8(edi + ebx + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + ebx + -1), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEA4A; /* je: equal / zero */

loc_000CEA2E: ;
    PUSH32(esp, 0x3273A0);
    edx = 0x2E;
    PUSH32(esp, 0x000CEA3Du); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CEA3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

loc_000CEA4A: ;
    PUSH32(esp, 0x000CEA4Fu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CEA4F: ;
    PUSH32(esp, 0x72);
    eax = 0x32736C;
    PUSH32(esp, 0x000CEA5Bu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CEA5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x100;
    eax = ebx;
    edi = 0x5F69A0;
    PUSH32(esp, 0x000CEA6Fu); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CEA6F: ;
    PUSH32(esp, 0x000CEA74u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CEA74: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

}

/**
 * sub_000CEA80
 * Original: 0x000CEA80 - 0x000CEC05 (389 bytes, 122 insns)
 * Folder: sound (source: snddata.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000CEA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CEA80: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEA9C; /* jne: not equal / not zero */

loc_000CEA89: ;
    POP32(esp, ebp);
    MEM32(esp + 4) = 0x327318;
    edx = 0x2E;
    g_seh_ebp = ebp; sub_000ED010(); return; /* tail jmp 0x000ED010 */

loc_000CEA9C: ;
    eax = 0x5F69A0;
    edx = eax + 1;

loc_000CEAA4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEAA4; /* jne: not equal / not zero */

loc_000CEAAB: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = eax;
    if ((_fa != 0)) goto loc_000CEAC6; /* jne: not equal / not zero */

loc_000CEAB3: ;
    POP32(esp, ebp);
    MEM32(esp + 4) = 0x3272C0;
    edx = 0x2E;
    g_seh_ebp = ebp; sub_000ED010(); return; /* tail jmp 0x000ED010 */

loc_000CEAC6: ;
    eax = ebp;
    edx = eax + 1;
    goto loc_000CEAD0;

    /* nop */

loc_000CEAD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEAD0; /* jne: not equal / not zero */

loc_000CEAD7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + 1;
    PUSH32(esp, 0x000CEAE5u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CEAE5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB00; /* jne: not equal / not zero */

loc_000CEAEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(esp + 4) = 0x327280;
    edx = 0x2E;
    g_seh_ebp = ebp; sub_000ED010(); return; /* tail jmp 0x000ED010 */

loc_000CEB00: ;
    edx = esi;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000CEB06: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB06; /* jne: not equal / not zero */

loc_000CEB10: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEB59; /* jle: less or equal (signed <=) */

loc_000CEB16: ;
    SET_LO8(eax, MEM8(ecx + esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEB21; /* je: equal / zero */

loc_000CEB1D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB29; /* jne: not equal / not zero */

loc_000CEB21: ;
    PUSH32(esp, 0x000CEB26u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CEB26: ;
    MEM8(ecx + esi) = LO8(eax);

loc_000CEB29: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEB16; /* jl: less (signed <) */

loc_000CEB2E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEB59; /* jle: less or equal (signed <=) */

loc_000CEB32: ;
    PUSH32(esp, 0x000CEB37u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CEB37: ;
    _fa = (uint32_t)(MEM8(edi + esi + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + esi + -1), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEB59; /* je: equal / zero */

loc_000CEB3D: ;
    PUSH32(esp, 0x327230);
    edx = 0x2E;
    PUSH32(esp, 0x000CEB4Cu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CEB4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

loc_000CEB59: ;
    PUSH32(esp, 0x000CEB5Eu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CEB5E: ;
    PUSH32(esp, 0xCF);
    eax = 0x32736C;
    PUSH32(esp, 0x000CEB6Du); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CEB6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CEB73u); RECOMP_ABI_CALL(0x000CEC10u, sub_000CEC10); /* call 0x000CEC10 */

loc_000CEB73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEBF6; /* jne: not equal / not zero */

loc_000CEB7A: ;
    eax = 0x10C;
    PUSH32(esp, 0x000CEB84u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CEB84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEBF6; /* je: equal / zero */

loc_000CEB88: ;
    edi = eax;
    ecx = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_000CEB90: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(edi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB90; /* jne: not equal / not zero */

loc_000CEB9A: ;
    MEM32(eax + 0x104) = 0;
    MEM32(eax + 0x108) = 0;
    MEM32(eax + 0x100) = 0;
    ecx = MEM32(0x64D474);
    MEM32(eax + 0x104) = ecx;
    MEM32(eax + 0x108) = 0x64D470;
    ecx = MEM32(0x64D470);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEBDF; /* jne: not equal / not zero */

loc_000CEBD8: ;
    MEM32(0x64D470) = eax;
    goto loc_000CEBEB;

loc_000CEBDF: ;
    edx = MEM32(0x64D474);
    MEM32(edx + 0x100) = eax;

loc_000CEBEB: ;
    MEM32(0x64D474) = eax;
    MEM32(0x64D478) = MEM32(0x64D478) + 1;
    _fa = (uint32_t)(MEM32(0x64D478)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000CEBF6: ;
    PUSH32(esp, 0x000CEBFBu); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CEBFB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

}

/**
 * sub_000CEC10
 * Original: 0x000CEC10 - 0x000CEE6B (603 bytes, 189 insns)
 * Folder: sound (source: snddata.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEC10: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x104) = eax;
    PUSH32(esp, 0x000CEC27u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CEC27: ;
    PUSH32(esp, 0x174);
    eax = 0x32736C;
    PUSH32(esp, 0x000CEC36u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CEC36: ;
    eax = MEM32(esp + 0x110);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x5F69A0;
    PUSH32(esp, 0x000CEC4Au); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEC4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEC6B; /* jne: not equal / not zero */

loc_000CEC4E: ;
    PUSH32(esp, 0x000CEC53u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CEC53: ;
    eax = 1;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000CEC64u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CEC64: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CEC6B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CEC73u); RECOMP_ABI_CALL(0x000CF540u, sub_000CF540); /* call 0x000CF540 */

loc_000CEC73: ;
    ebp = eax;
    eax = 0x325305;
    edx = ebp;
    MEM32(esp + 0xC) = ebp;
    PUSH32(esp, 0x000CEC85u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEC85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CED3D; /* je: equal / zero */

loc_000CEC8D: ;
    esi = 0x100;
    eax = 0x5F69A0;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CECA0u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CECA0: ;
    eax = edi;
    edx = eax + 1;

loc_000CECA5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CECA5; /* jne: not equal / not zero */

loc_000CECAC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000CEE3C; /* jae: above or equal (unsigned >=) */

loc_000CECBC: ;
    eax = ebp;
    edx = ebp;

loc_000CECC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CECC0; /* jne: not equal / not zero */

loc_000CECC7: ;
    edi = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000CECD0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CECD0; /* jne: not equal / not zero */

loc_000CECD8: ;
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
    eax = esp + 0x10;
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
    edx = eax + 1;
    /* nop */

loc_000CECF0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CECF0; /* jne: not equal / not zero */

loc_000CECF7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    PUSH32(esp, 0x000CED00u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CED00: ;
    MEM8(esp + ecx + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x118);
    edx = esp + 0x10;
    MEM8(esp + ecx + 0x11) = 0;
    PUSH32(esp, 0x000CED19u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CED19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CED3D; /* jne: not equal / not zero */

loc_000CED1D: ;
    PUSH32(esp, 0x000CED22u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CED22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000CED36u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CED36: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CED3D: ;
    eax = MEM32(0x64D470);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CEE1F; /* je: equal / zero */

loc_000CED4C: ;
    /* nop */

loc_000CED50: ;
    eax = MEM32(esp + 0x118);
    edx = ebp;
    PUSH32(esp, 0x000CED5Eu); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CED5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CED1D; /* je: equal / zero */

loc_000CED62: ;
    esi = MEM32(esp + 0xC);
    eax = 0x325305;
    edx = esi;
    PUSH32(esp, 0x000CED72u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CED72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEE11; /* je: equal / zero */

loc_000CED7A: ;
    edx = esp + 0x10;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000CED82: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CED82; /* jne: not equal / not zero */

loc_000CED8C: ;
    eax = esp + 0x10;
    edx = eax + 1;

loc_000CED93: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CED93; /* jne: not equal / not zero */

loc_000CED9A: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000CEE3C; /* jae: above or equal (unsigned >=) */

loc_000CEDAA: ;
    eax = esi;
    edx = esi;
    edi = edi;

loc_000CEDB0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEDB0; /* jne: not equal / not zero */

loc_000CEDB7: ;
    edi = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000CEDC0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEDC0; /* jne: not equal / not zero */

loc_000CEDC8: ;
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
    eax = esp + 0x10;
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
    edx = eax + 1;
    /* nop */

loc_000CEDE0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEDE0; /* jne: not equal / not zero */

loc_000CEDE7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    PUSH32(esp, 0x000CEDF0u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CEDF0: ;
    MEM8(esp + ecx + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x118);
    edx = esp + 0x10;
    MEM8(esp + ecx + 0x11) = 0;
    PUSH32(esp, 0x000CEE09u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEE09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CED1D; /* je: equal / zero */

loc_000CEE11: ;
    ebp = MEM32(ebp + 0x100);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CED50; /* jne: not equal / not zero */

loc_000CEE1F: ;
    PUSH32(esp, 0x000CEE24u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CEE24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000CEE35u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CEE35: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CEE3C: ;
    PUSH32(esp, 0x000CEE41u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CEE41: ;
    PUSH32(esp, 0x327218);
    edx = 0xA;
    PUSH32(esp, 0x000CEE50u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CEE50: ;
    ecx = MEM32(esp + 0x114);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    PUSH32(esp, 0x000CEE64u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CEE64: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CEE70
 * Original: 0x000CEE70 - 0x000CEE76 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000CEC10 and 0x000CEE80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEE70(void)
{

loc_000CEE70: ;
    eax = 0x64D480;
    esp += 4; return; /* ret */

}

/**
 * sub_000CEE80
 * Original: 0x000CEE80 - 0x000CEEAF (47 bytes, 14 insns)
 * Folder: sound (source: snddata.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEE80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEE80: ;
    PUSH32(esp, 0x000CEE85u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CEE85: ;
    PUSH32(esp, 0x1D9);
    eax = 0x32736C;
    PUSH32(esp, 0x000CEE94u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CEE94: ;
    edx = 0x64D480;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000CEEA0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEEA0; /* jne: not equal / not zero */

loc_000CEEAA: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CEEB0
 * Original: 0x000CEEB0 - 0x000CEF11 (97 bytes, 30 insns)
 * Folder: sound (source: snddata.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEEB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CEEB6u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CEEB6: ;
    PUSH32(esp, 0x1EC);
    eax = 0x32736C;
    PUSH32(esp, 0x000CEEC5u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CEEC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000CEECDu); RECOMP_ABI_CALL(0x000CF540u, sub_000CF540); /* call 0x000CF540 */

loc_000CEECD: ;
    esi = eax;
    eax = ebx;
    edx = esi;
    PUSH32(esp, 0x000CEED8u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEED8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEEE2; /* jne: not equal / not zero */

loc_000CEEDC: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CEEE2: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x325305;
    ecx = 1;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    eax = ebx;
    if ((_flags == 0)) goto loc_000CEF01; /* jne: not equal / not zero */

loc_000CEEF6: ;
    PUSH32(esp, 0x000CEEFBu); RECOMP_ABI_CALL(0x000CF4F0u, sub_000CF4F0); /* call 0x000CF4F0 */

loc_000CEEFB: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000CEF01: ;
    PUSH32(esp, 0x000CEF06u); RECOMP_ABI_CALL(0x000CF4F0u, sub_000CF4F0); /* call 0x000CF4F0 */

loc_000CEF06: ;
    PUSH32(esp, 0x000CEF0Bu); RECOMP_ABI_CALL(0x000D0210u, sub_000D0210); /* call 0x000D0210 */

loc_000CEF0B: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000CEF20
 * Original: 0x000CEF20 - 0x000CEF98 (120 bytes, 51 insns)
 * Folder: sound (between: 0x000CEEB0 and 0x000CEFA0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CEF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEF20: ;
    eax = MEM32(0x5F6AA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEF95; /* je: equal / zero */

loc_000CEF29: ;
    eax = MEM32(0x5F6998);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEF95; /* je: equal / zero */

loc_000CEF32: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CEF3Cu); RECOMP_ABI_CALL(0x000CF550u, sub_000CF550); /* call 0x000CF550 */

loc_000CEF3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEF95; /* je: equal / zero */

loc_000CEF44: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax * 8 + 0x5F6198);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000CEF77; /* jle: less or equal (signed <=) */

loc_000CEF55: ;
    ebp = MEM32(eax * 8 + 0x5F619C);
    edi = ebp;
    edi = edi;

loc_000CEF60: ;
    eax = MEM32(esp + 0x14);
    edx = edi;
    PUSH32(esp, 0x000CEF6Bu); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEF6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEF81; /* je: equal / zero */

loc_000CEF6F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEF60; /* jl: less (signed <) */

loc_000CEF77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000CEF81: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    edx = MEM32(esi + ebp + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000CEF95: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CEF44
 * Original: 0x000CEF44 - 0x000CEF98 (84 bytes, 39 insns)
 * Folder: sound (between: 0x000CEEB0 and 0x000CEFA0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000CEF44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEF44: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax * 8 + 0x5F6198);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000CEF77; /* jle: less or equal (signed <=) */

loc_000CEF55: ;
    ebp = MEM32(eax * 8 + 0x5F619C);
    edi = ebp;
    edi = edi;

loc_000CEF60: ;
    eax = MEM32(esp + 0x14);
    edx = edi;
    PUSH32(esp, 0x000CEF6Bu); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CEF6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEF81; /* je: equal / zero */

loc_000CEF6F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEF60; /* jl: less (signed <) */

loc_000CEF77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000CEF81: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    edx = MEM32(esi + ebp + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000CEFA0
 * Original: 0x000CEFA0 - 0x000CF14B (427 bytes, 161 insns)
 * Folder: sound (source: snddata.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEFA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CF11E; /* je: equal / zero */

loc_000CEFC0: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF11E; /* je: equal / zero */

loc_000CEFCC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF11E; /* je: equal / zero */

loc_000CEFD4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x100;
    edi = ebx;
    PUSH32(esp, 0x000CEFE2u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CEFE2: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF0AA; /* je: equal / zero */

loc_000CEFEE: ;
    PUSH32(esp, 0x000CEFF3u); RECOMP_ABI_CALL(0x000CF540u, sub_000CF540); /* call 0x000CF540 */

loc_000CEFF3: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_000CF000: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF000; /* jne: not equal / not zero */

loc_000CF00A: ;
    eax = esp + 0x10;
    edx = eax + 1;

loc_000CF011: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF011; /* jne: not equal / not zero */

loc_000CF018: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    MEM8(esp + ecx + 0x11) = 0;
    PUSH32(esp, 0x000CF026u); RECOMP_ABI_CALL(0x000ED680u, sub_000ED680); /* call 0x000ED680 */

loc_000CF026: ;
    MEM8(esp + ecx + 0x10) = LO8(eax);
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_000CF030: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF030; /* jne: not equal / not zero */

loc_000CF037: ;
    ecx = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + 1;

loc_000CF040: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF040; /* jne: not equal / not zero */

loc_000CF047: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CF080; /* jbe: below or equal (unsigned <=) */

loc_000CF051: ;
    PUSH32(esp, 0x2B0);

loc_000CF056: ;
    PUSH32(esp, 0x324878);
    edx = 0x3271C8;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF06Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF06A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000CF07Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF07C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CF080: ;
    eax = esp + 0x10;
    edx = eax;

loc_000CF086: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF086; /* jne: not equal / not zero */

loc_000CF08D: ;
    edi = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CF092: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF092; /* jne: not equal / not zero */

loc_000CF09A: ;
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

loc_000CF0AA: ;
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_000CF0B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF0B0; /* jne: not equal / not zero */

loc_000CF0B7: ;
    edi = MEM32(esp + 0x28);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = edi;
    esi = eax + 1;

loc_000CF0C4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF0C4; /* jne: not equal / not zero */

loc_000CF0CB: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CF0DF; /* jbe: below or equal (unsigned <=) */

loc_000CF0D5: ;
    PUSH32(esp, 0x2B8);
    goto loc_000CF056;

loc_000CF0DF: ;
    eax = edi;
    edx = edi;

loc_000CF0E3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF0E3; /* jne: not equal / not zero */

loc_000CF0EA: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ebx;
    /* nop */

loc_000CF0F0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF0F0; /* jne: not equal / not zero */

loc_000CF0F8: ;
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
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000CF11Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF11A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CF11E: ;
    PUSH32(esp, 0x2A1);
    PUSH32(esp, 0x324878);
    edx = 0x3271EC;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF137u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF137: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    PUSH32(esp, 0x000CF147u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF147: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF150
 * Original: 0x000CF150 - 0x000CF3C7 (631 bytes, 181 insns)
 * Folder: sound (source: snddata.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF150: ;
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x508;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x514);
    MEM32(esp + 0x50C) = eax;
    eax = MEM32(esp + 0x518);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CF17Cu); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000CF17C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF187; /* je: equal / zero */

loc_000CF183: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF19E; /* jne: not equal / not zero */

loc_000CF187: ;
    PUSH32(esp, 0x32736C);
    eax = 0x2DC;
    ecx = 0x327198;
    PUSH32(esp, 0x000CF19Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CF19B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF19E: ;
    eax = ebx;
    edx = eax + 1;

loc_000CF1A3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF1A3; /* jne: not equal / not zero */

loc_000CF1AA: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_000CF1C9; /* jne: not equal / not zero */

loc_000CF1B2: ;
    PUSH32(esp, 0x32736C);
    eax = 0x2DD;
    ecx = 0x3271FC;
    PUSH32(esp, 0x000CF1C6u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CF1C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF1C9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF1CFu); RECOMP_ABI_CALL(0x000CEF20u, sub_000CEF20); /* call 0x000CEF20 */

loc_000CF1CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000CF358; /* ja: above (unsigned >) */

loc_000CF1DB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xCF3C8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000CF1E2u) goto loc_000CF1E2;
    if (_jt == 0x000CF1E9u) goto loc_000CF1E9;
    if (_jt == 0x000CF255u) goto loc_000CF255;
    if (_jt == 0x000CF374u) goto loc_000CF374;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000CF1E2: ;
    ebp = 1;
    goto loc_000CF1EB;

loc_000CF1E9: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CF1EB: ;
    esi = MEM32(0x64D470);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF22C; /* je: equal / zero */

loc_000CF1F5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CF206u); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF206: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF211: ;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF21Au); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF21A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF352; /* jne: not equal / not zero */

loc_000CF222: ;
    esi = MEM32(esi + 0x100);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF1F5; /* jne: not equal / not zero */

loc_000CF22C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F69A0);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CF241u); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF241: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF24C: ;
    eax = esp + 0x10;
    goto loc_000CF39D;

loc_000CF255: ;
    esi = MEM32(0x64D470);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF29E; /* je: equal / zero */

loc_000CF25F: ;
    /* nop */

loc_000CF260: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CF272u); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF272: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF27D: ;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF286u); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF286: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF352; /* jne: not equal / not zero */

loc_000CF28E: ;
    esi = MEM32(esi + 0x100);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF260; /* jne: not equal / not zero */

loc_000CF298: ;
    esi = MEM32(0x64D470);

loc_000CF29E: ;
    PUSH32(esp, 0x000CF2A3u); RECOMP_ABI_CALL(0x000CF540u, sub_000CF540); /* call 0x000CF540 */

loc_000CF2A3: ;
    ebp = eax;
    eax = 0x325305;
    edx = ebp;
    PUSH32(esp, 0x000CF2B1u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CF2B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF2F4; /* je: equal / zero */

loc_000CF2B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF2F4; /* je: equal / zero */

loc_000CF2B9: ;
    /* nop */

loc_000CF2C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CF2D2u); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF2D2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF2DD: ;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF2E6u); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF2E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF352; /* jne: not equal / not zero */

loc_000CF2EA: ;
    esi = MEM32(esi + 0x100);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF2C0; /* jne: not equal / not zero */

loc_000CF2F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F69A0);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CF30Au); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF30A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF311: ;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF31Au); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF31A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF352; /* jne: not equal / not zero */

loc_000CF31E: ;
    eax = 0x325305;
    edx = ebp;
    PUSH32(esp, 0x000CF32Au); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CF32A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF32E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F69A0);
    ecx = edi;
    PUSH32(esp, 0x000CF342u); RECOMP_ABI_CALL(0x000CEFA0u, sub_000CEFA0); /* call 0x000CEFA0 */

loc_000CF342: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF349: ;
    PUSH32(esp, 0x000CF34Eu); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF34E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF374; /* je: equal / zero */

loc_000CF352: ;
    eax = esp + 0x10;
    goto loc_000CF39D;

loc_000CF358: ;
    PUSH32(esp, 0x2FC);
    PUSH32(esp, 0x324878);
    edx = 0x327174;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF371u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF371: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF374: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x114;
    PUSH32(esp, 0x327144);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CF387u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CF387: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x110;
    edx = 0xC;
    PUSH32(esp, 0x000CF39Bu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000CF39B: ;
    eax = ebx;

loc_000CF39D: ;
    esi = MEM32(esp + 0x51C);
    edi = MEM32(esp + 0x518);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000CF3B1u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CF3B1: ;
    ecx = MEM32(esp + 0x510);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000CF3C0u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF3C0: ;
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x508;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF3E0
 * Original: 0x000CF3E0 - 0x000CF4EF (271 bytes, 82 insns)
 * Folder: sound (source: snddata.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF3E0: ;
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x508;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x510);
    PUSH32(esp, esi);
    MEM32(esp + 0x50C) = eax;
    eax = MEM32(esp + 0x518);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000CF40Cu); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000CF40C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF417; /* je: equal / zero */

loc_000CF413: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF42E; /* jne: not equal / not zero */

loc_000CF417: ;
    PUSH32(esp, 0x32736C);
    eax = 0x378;
    ecx = 0x327198;
    PUSH32(esp, 0x000CF42Bu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CF42B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF42E: ;
    eax = ebx;
    edx = eax + 1;

loc_000CF433: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF433; /* jne: not equal / not zero */

loc_000CF43A: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_000CF459; /* jne: not equal / not zero */

loc_000CF442: ;
    PUSH32(esp, 0x32736C);
    eax = 0x379;
    ecx = 0x3271FC;
    PUSH32(esp, 0x000CF456u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000CF456: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF459: ;
    esi = 0xFF;
    eax = 0x5F69A0;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF46Cu); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CF46C: ;
    eax = edi;
    edx = eax + 1;

loc_000CF471: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF471; /* jne: not equal / not zero */

loc_000CF478: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0xFF;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CF48Du); RECOMP_ABI_CALL(0x0028C0D0u, sub_0028C0D0); /* call 0x0028C0D0 */

loc_000CF48D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF499u); RECOMP_ABI_CALL(0x000ED660u, sub_000ED660); /* call 0x000ED660 */

loc_000CF499: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF4A1; /* je: equal / zero */

loc_000CF49D: ;
    eax = edi;
    goto loc_000CF4CA;

loc_000CF4A1: ;
    PUSH32(esp, ebx);
    eax = esp + 0x114;
    PUSH32(esp, 0x327144);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF4B4u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CF4B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x110;
    edx = 0xC;
    PUSH32(esp, 0x000CF4C8u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000CF4C8: ;
    eax = ebx;

loc_000CF4CA: ;
    esi = MEM32(esp + 0x51C);
    edi = ebp;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000CF4D9u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CF4D9: ;
    ecx = MEM32(esp + 0x510);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000CF4E8u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF4E8: ;
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x508;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF4F0
 * Original: 0x000CF4F0 - 0x000CF535 (69 bytes, 24 insns)
 * Folder: sound (source: snddata.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF4F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edx = eax + 1;

loc_000CF4F7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF4F7; /* jne: not equal / not zero */

loc_000CF4FE: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000CF521; /* jb: below (unsigned <) */

loc_000CF505: ;
    PUSH32(esp, 0x39A);
    PUSH32(esp, 0x3270F8);
    edx = 0x327128;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF51Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF51E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF521: ;
    eax = edi;
    esi = 9;
    edi = 0x64D580;
    PUSH32(esp, 0x000CF532u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CF532: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF540
 * Original: 0x000CF540 - 0x000CF546 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000CF4F0 and 0x000CF550)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF540(void)
{

loc_000CF540: ;
    eax = 0x64D580;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF550
 * Original: 0x000CF550 - 0x000CF6A1 (337 bytes, 102 insns)
 * Folder: sound (source: snddata.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF550: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x42C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x438);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x430) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000CF5A5; /* jne: not equal / not zero */

loc_000CF571: ;
    PUSH32(esp, 0x3CD);
    PUSH32(esp, 0x324878);
    edx = 0x3270BC;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF58Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF58A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x428);
    PUSH32(esp, 0x000CF59Eu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF59E: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x42C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CF5A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x25;
    eax = ebp;
    edi = esp + 0x10;
    PUSH32(esp, 0x000CF5B7u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000CF5B7: ;
    eax = edi;
    PUSH32(esp, 0x000CF5BEu); RECOMP_ABI_CALL(0x000D4C20u, sub_000D4C20); /* call 0x000D4C20 */

loc_000CF5BE: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = eax + 1;
    esi = esp + 0x11;
    if (CMP_L(_fas, _fbs)) goto loc_000CF666; /* jl: less (signed <) */

loc_000CF5D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000CF666; /* jg: greater (signed >) */

loc_000CF5DB: ;
    SET_LO8(ecx, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF611; /* je: equal / zero */

loc_000CF5E3: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CF659; /* jl: less (signed <) */

loc_000CF5E9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7F (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000CF659; /* jg: greater (signed >) */

loc_000CF5EE: ;
    ecx = SX8(LO8(ecx));
    edi = ecx;
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(edi * 4 + 0x33B750);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ecx * 4 + 0x33B750);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x24 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF63B; /* je: equal / zero */

loc_000CF60C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF5E3; /* jne: not equal / not zero */

loc_000CF611: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0x800000FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000CF68A; /* jns: not sign (positive) */

loc_000CF61D: ;
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x428);
    PUSH32(esp, 0x000CF634u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF634: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x42C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CF63B: ;
    PUSH32(esp, 0x3F4);
    PUSH32(esp, 0x324878);
    edx = 0x3270BC;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF654u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF654: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CF687;

loc_000CF659: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x327084);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    goto loc_000CF671;

loc_000CF666: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x327084);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);

loc_000CF671: ;
    PUSH32(esp, 0x000CF676u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000CF676: ;
    edx = 0xC;
    eax = esp + 0x44;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000CF687u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000CF687: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000CF68A: ;
    ecx = MEM32(esp + 0x438);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000CF69Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF69A: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x42C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF687
 * Original: 0x000CF687 - 0x000CF6A1 (26 bytes, 9 insns)
 * Folder: sound (between: 0x000CF550 and 0x000CF730)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF687(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF687: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x438);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000CF69Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF69A: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x42C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF6B0
 * Original: 0x000CF6B0 - 0x000CF6E6 (54 bytes, 16 insns)
 * Folder: sound (between: 0x000CF550 and 0x000CF730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF6B0: ;
    eax = MEM32(0x5F6998);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF6E0; /* jne: not equal / not zero */

loc_000CF6BB: ;
    eax = 0x5F619C;

loc_000CF6C0: ;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F699C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F699C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CF6C0; /* jl: less (signed <) */

loc_000CF6CF: ;
    eax = 1;
    MEM32(0x5F6998) = eax;
    MEM32(0x5F6AA0) = ecx;
    esp += 4; return; /* ret */

loc_000CF6E0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF6F0
 * Original: 0x000CF6F0 - 0x000CF72A (58 bytes, 19 insns)
 * Folder: sound (between: 0x000CF550 and 0x000CF730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF6F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x5F619C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000CF700: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000CF710; /* je: equal / zero */

loc_000CF709: ;
    PUSH32(esp, 0x000CF70Eu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CF70E: ;
    MEM32(esi) = edi;

loc_000CF710: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F699C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5F699C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CF700; /* jl: less (signed <) */

loc_000CF71B: ;
    MEM32(0x5F6998) = edi;
    MEM32(0x5F6AA0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF730
 * Original: 0x000CF730 - 0x000CF82D (253 bytes, 82 insns)
 * Folder: sound (source: snddata.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF730: ;
    eax = MEM32(0x5F6998);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF75A; /* jne: not equal / not zero */

loc_000CF73C: ;
    PUSH32(esp, 0x44B);
    PUSH32(esp, 0x324878);
    edx = 0x327054;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF755u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF755: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000CF75A: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF78D; /* jne: not equal / not zero */

loc_000CF763: ;
    eax = MEM32(4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF78D; /* jne: not equal / not zero */

loc_000CF76C: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF78D; /* je: equal / zero */

loc_000CF771: ;
    PUSH32(esp, 0x44F);
    PUSH32(esp, 0x326FC8);
    edx = 0x327010;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF78Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF78A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF78D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = 0x5F6198;

loc_000CF797: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CF7CB; /* je: equal / zero */

loc_000CF7A5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    edi = eax;
    PUSH32(esp, 0x000CF7AFu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CF7AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CF80C; /* je: equal / zero */

loc_000CF7B6: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF7BEu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CF7BE: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x14);
    goto loc_000CF7D2;

loc_000CF7CB: ;
    MEM32(esi + 4) = 0;

loc_000CF7D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F6998) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5F6998 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CF797; /* jl: less (signed <) */

loc_000CF7DD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF7FD; /* je: equal / zero */

loc_000CF7E1: ;
    PUSH32(esp, 0x468);
    PUSH32(esp, 0x326F4C);
    edx = 0x326F70;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF7FAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF7FA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF7FD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(0x5F6AA0) = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000CF80C: ;
    PUSH32(esp, 0x45E);
    PUSH32(esp, 0x324878);
    edx = 0x326F98;
    ecx = 0x32736C;
    PUSH32(esp, 0x000CF825u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF825: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF830
 * Original: 0x000CF830 - 0x000CF839 (9 bytes, 3 insns)
 * Folder: sound (between: 0x000CF730 and 0x000CF8E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF830(void)
{

loc_000CF830: ;
    MEM8(eax) = 0x32;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF840
 * Original: 0x000CF840 - 0x000CF88B (75 bytes, 25 insns)
 * Folder: sound (between: 0x000CF730 and 0x000CF8E0)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF840: ;
    ecx = MEM32(0x64D58C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF85C; /* jne: not equal / not zero */

loc_000CF84A: ;
    PUSH32(esp, 0x327B68);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CF856u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CF856: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000CF85C: ;
    ecx = MEM32(0x33BB50);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000CF881; /* je: equal / zero */

loc_000CF867: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000CF87C; /* je: equal / zero */

loc_000CF86A: ;
    PUSH32(esp, 0x327B28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CF876u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CF876: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000CF87C: ;
    g_seh_ebp = ebp; sub_000D22E0(); return; /* tail jmp 0x000D22E0 */

loc_000CF881: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF887u); RECOMP_ABI_CALL(0x000C76A0u, sub_000C76A0); /* call 0x000C76A0 */

loc_000CF887: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF890
 * Original: 0x000CF890 - 0x000CF8DB (75 bytes, 25 insns)
 * Folder: sound (between: 0x000CF730 and 0x000CF8E0)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF890: ;
    ecx = MEM32(0x64D58C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF8AC; /* jne: not equal / not zero */

loc_000CF89A: ;
    PUSH32(esp, 0x327AE0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CF8A6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CF8A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000CF8AC: ;
    ecx = MEM32(0x33BB50);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000CF8D1; /* je: equal / zero */

loc_000CF8B7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000CF8CC; /* je: equal / zero */

loc_000CF8BA: ;
    PUSH32(esp, 0x327AA4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CF8C6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CF8C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000CF8CC: ;
    g_seh_ebp = ebp; sub_000D2350(); return; /* tail jmp 0x000D2350 */

loc_000CF8D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF8D7u); RECOMP_ABI_CALL(0x000C76D0u, sub_000C76D0); /* call 0x000C76D0 */

loc_000CF8D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF8E0
 * Original: 0x000CF8E0 - 0x000CF9BD (221 bytes, 77 insns)
 * Folder: sound (source: sndldbin.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF8E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x327A9C);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(0x327AA0));
    MEM32(esp + 4) = eax;
    eax = edi;
    MEM8(esp + 8) = LO8(ecx);
    edx = eax + 1;

loc_000CF907: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF907; /* jne: not equal / not zero */

loc_000CF90E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CF937; /* jbe: below or equal (unsigned <=) */

loc_000CF915: ;
    PUSH32(esp, 0x327A7C);
    edx = 8;
    PUSH32(esp, 0x000CF924u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CF924: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF927: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000CF933u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF933: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CF937: ;
    eax = esp + 4;
    edx = eax + 1;
    edi = edi;

loc_000CF940: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF940; /* jne: not equal / not zero */

loc_000CF947: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF96A; /* je: equal / zero */

loc_000CF94E: ;
    PUSH32(esp, 0xC1);
    PUSH32(esp, 0x3279EC);
    edx = 0x327A58;
    ecx = 0x327A24;
    PUSH32(esp, 0x000CF967u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CF967: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF96A: ;
    eax = esp + 7;
    PUSH32(esp, 0x000CF973u); RECOMP_ABI_CALL(0x000CF830u, sub_000CF830); /* call 0x000CF830 */

loc_000CF973: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF927; /* je: equal / zero */

loc_000CF977: ;
    eax = esp + 4;
    edx = eax;
    /* nop */

loc_000CF980: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF980; /* jne: not equal / not zero */

loc_000CF987: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000CF990: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF990; /* jne: not equal / not zero */

loc_000CF998: ;
    PUSH32(esp, esi);
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
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    PUSH32(esp, 0x000CF9B9u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CF9B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CF9C0
 * Original: 0x000CF9C0 - 0x000CFF60 (1440 bytes, 378 insns)
 * Folder: sound (source: sndldbin.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF9C0: ;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x15C) = eax;
    esi = ecx;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0x000CF9EBu); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000CF9EB: ;
    PUSH32(esp, 0x16D);
    eax = 0x327A24;
    PUSH32(esp, 0x000CF9FAu); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000CF9FA: ;
    eax = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_000CFA02: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFA02; /* jne: not equal / not zero */

loc_000CFA09: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000CFA1F; /* jbe: below or equal (unsigned <=) */

loc_000CFA10: ;
    PUSH32(esp, 0x3279C4);
    edx = 0xC;
    goto loc_000CFED6;

loc_000CFA1F: ;
    eax = esi;
    edx = eax + 1;

loc_000CFA24: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFA24; /* jne: not equal / not zero */

loc_000CFA2B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = esp + 0x38;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CFA3Au); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_000CFA3A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x34;
    PUSH32(esp, 0x000CFA46u); RECOMP_ABI_CALL(0x000CF8E0u, sub_000CF8E0); /* call 0x000CF8E0 */

loc_000CFA46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFEDE; /* je: equal / zero */

loc_000CFA4E: ;
    ecx = esp + 0x5C;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    ebx = esp + 0x3C;
    PUSH32(esp, 0x000CFA61u); RECOMP_ABI_CALL(0x000CF3E0u, sub_000CF3E0); /* call 0x000CF3E0 */

loc_000CFA61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x5C;
    PUSH32(esp, 0x000CFA6Du); RECOMP_ABI_CALL(0x000ED460u, sub_000ED460); /* call 0x000ED460 */

loc_000CFA6D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000CFA87; /* jne: not equal / not zero */

loc_000CFA78: ;
    PUSH32(esp, 0x3279A0);
    edx = 0xC;
    goto loc_000CFED6;

loc_000CFA87: ;
    eax = 0xA0;
    PUSH32(esp, 0x000CFA91u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CFA91: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000CFAAA; /* jne: not equal / not zero */

loc_000CFA9B: ;
    PUSH32(esp, 0x327960);
    edx = 0xA;
    goto loc_000CFED6;

loc_000CFAAA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA0);
    esi = edi;
    PUSH32(esp, 0x000CFAB7u); RECOMP_ABI_CALL(0x000ED550u, sub_000ED550); /* call 0x000ED550 */

loc_000CFAB7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFACB; /* je: equal / zero */

loc_000CFAC1: ;
    PUSH32(esp, 0x32792C);
    goto loc_000CFED1;

loc_000CFACB: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F6AA8);
    PUSH32(esp, 0x000CFADBu); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000CFADB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    PUSH32(esp, 0x000CFAE5u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CFAE5: ;
    eax = esp + 0x30;
    ecx = esp + 0x18;
    ebx = esp + 0x2C;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000CFAFEu); RECOMP_ABI_CALL(0x000CBCB0u, sub_000CBCB0); /* call 0x000CBCB0 */

loc_000CFAFE: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(0x5F6AA8);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFB1E; /* je: equal / zero */

loc_000CFB14: ;
    PUSH32(esp, 0x3278D8);
    goto loc_000CFED1;

loc_000CFB1E: ;
    eax = MEM32(0x5F6AC8);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi;
    PUSH32(esp, 0x000CFB2Du); RECOMP_ABI_CALL(0x000ED5B0u, sub_000ED5B0); /* call 0x000ED5B0 */

loc_000CFB2D: ;
    ecx = MEM32(0x5F6AC8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFB44; /* je: equal / zero */

loc_000CFB3A: ;
    PUSH32(esp, 0x3278A4);
    goto loc_000CFED1;

loc_000CFB44: ;
    eax = MEM32(0x5F6AB4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFB74; /* je: equal / zero */

loc_000CFB4F: ;
    edi = 0x325305;
    PUSH32(esp, 0x000CFB59u); RECOMP_ABI_CALL(0x000CF540u, sub_000CF540); /* call 0x000CF540 */

loc_000CFB59: ;
    esi = eax;
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_000CFB70; /* jne: not equal / not zero */

loc_000CFB66: ;
    PUSH32(esp, 0x327860);
    goto loc_000CFED1;

loc_000CFB70: ;
    edi = MEM32(esp + 0x14);

loc_000CFB74: ;
    eax = MEM32(0x5F6ACC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBBC; /* je: equal / zero */

loc_000CFB7D: ;
    PUSH32(esp, 0x000CFB82u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000CFB82: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFB97; /* jne: not equal / not zero */

loc_000CFB88: ;
    PUSH32(esp, 0x327960);
    edx = 0xA;
    goto loc_000CFED6;

loc_000CFB97: ;
    eax = MEM32(0x5F6ACC);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    esi = edi;
    PUSH32(esp, 0x000CFBA5u); RECOMP_ABI_CALL(0x000ED550u, sub_000ED550); /* call 0x000ED550 */

loc_000CFBA5: ;
    ecx = MEM32(0x5F6ACC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBBC; /* je: equal / zero */

loc_000CFBB2: ;
    PUSH32(esp, 0x32792C);
    goto loc_000CFED1;

loc_000CFBBC: ;
    _fa = (uint32_t)(MEM32(0x5F6AD8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F6AD8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBD0; /* je: equal / zero */

loc_000CFBC4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBD0; /* je: equal / zero */

loc_000CFBC8: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x5F6AD4) = MEM32(0x5F6AD4) + ebp;
    _fa = (uint32_t)(MEM32(0x5F6AD4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CFBD6;

loc_000CFBD0: ;
    MEM32(0x5F6AD4) = ebx;

loc_000CFBD6: ;
    _fa = (uint32_t)(MEM32(0x5F6AE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F6AE0), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBEA; /* je: equal / zero */

loc_000CFBDE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBEA; /* je: equal / zero */

loc_000CFBE2: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x5F6ADC) = MEM32(0x5F6ADC) + ebp;
    _fa = (uint32_t)(MEM32(0x5F6ADC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CFBF0;

loc_000CFBEA: ;
    MEM32(0x5F6ADC) = ebx;

loc_000CFBF0: ;
    eax = MEM32(0x5F6AE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC31; /* je: equal / zero */

loc_000CFBF9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC31; /* je: equal / zero */

loc_000CFBFD: ;
    esi = MEM32(0x5F6AE4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x5F6AE4) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_000CFC37; /* jle: less or equal (signed <=) */

loc_000CFC11: ;
    eax = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CFC16: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFC1F; /* jne: not equal / not zero */

loc_000CFC1B: ;
    MEM32(eax) = ebx;
    goto loc_000CFC21;

loc_000CFC1F: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ebp;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CFC21: ;
    edx = MEM32(0x5F6AE8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CFC16; /* jl: less (signed <) */

loc_000CFC2F: ;
    goto loc_000CFC37;

loc_000CFC31: ;
    MEM32(0x5F6AE4) = ebx;

loc_000CFC37: ;
    _fa = (uint32_t)(MEM32(0x5F6AEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F6AEC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFEC6; /* je: equal / zero */

loc_000CFC43: ;
    ecx = MEM32(0x5F6AF0);
    eax = MEM32(0x5F6AF4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(0x5F6AF0) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000CFC79; /* jne: not equal / not zero */

loc_000CFC5B: ;
    eax = 0x5F6AF8;

loc_000CFC60: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC6D; /* je: equal / zero */

loc_000CFC65: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC6D; /* je: equal / zero */

loc_000CFC69: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ebp;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CFC6F;

loc_000CFC6D: ;
    MEM32(eax) = ebx;

loc_000CFC6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F6B08) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F6B08 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CFC60; /* jl: less (signed <) */

loc_000CFC79: ;
    ecx = MEM32(0x5F6AD0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CFC85u); RECOMP_ABI_CALL(0x000D5EE0u, sub_000D5EE0); /* call 0x000D5EE0 */

loc_000CFC85: ;
    eax = 0x5F6AD4;
    PUSH32(esp, 0x000CFC8Fu); RECOMP_ABI_CALL(0x000D60E0u, sub_000D60E0); /* call 0x000D60E0 */

loc_000CFC8F: ;
    eax = 0x5F6ADC;
    PUSH32(esp, 0x000CFC99u); RECOMP_ABI_CALL(0x000D6060u, sub_000D6060); /* call 0x000D6060 */

loc_000CFC99: ;
    eax = 0x5F6AE4;
    PUSH32(esp, 0x000CFCA3u); RECOMP_ABI_CALL(0x000C77F0u, sub_000C77F0); /* call 0x000C77F0 */

loc_000CFCA3: ;
    PUSH32(esp, 0x5F6AEC);
    PUSH32(esp, 0x000CFCADu); RECOMP_ABI_CALL(0x000CF730u, sub_000CF730); /* call 0x000CF730 */

loc_000CFCAD: ;
    edx = MEM32(0x5F6AC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CFCB9u); RECOMP_ABI_CALL(0x000D62E0u, sub_000D62E0); /* call 0x000D62E0 */

loc_000CFCB9: ;
    eax = MEM32(0x5F6AC4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CFCC4u); RECOMP_ABI_CALL(0x000D6300u, sub_000D6300); /* call 0x000D6300 */

loc_000CFCC4: ;
    ecx = MEM32(0x5F6ABC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CFCD0u); RECOMP_ABI_CALL(0x000D5E80u, sub_000D5E80); /* call 0x000D5E80 */

loc_000CFCD0: ;
    edx = MEM32(0x5F6AB8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CFCDCu); RECOMP_ABI_CALL(0x000D5F40u, sub_000D5F40); /* call 0x000D5F40 */

loc_000CFCDC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x5F6AF4;
    PUSH32(esp, 0x000CFCE9u); RECOMP_ABI_CALL(0x000D6170u, sub_000D6170); /* call 0x000D6170 */

loc_000CFCE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFEDE; /* je: equal / zero */

loc_000CFCF1: ;
    eax = MEM32(0x5F6B08);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5F6AD4) = esi;
    MEM32(0x5F6AD8) = esi;
    MEM32(0x5F6ADC) = esi;
    MEM32(0x5F6AE0) = esi;
    MEM32(0x5F6AE4) = esi;
    MEM32(0x5F6AE8) = esi;
    MEM32(0x5F6AF0) = esi;
    MEM32(0x5F6AEC) = esi;
    PUSH32(esp, 0x000CFD2Du); RECOMP_ABI_CALL(0x000D6180u, sub_000D6180); /* call 0x000D6180 */

loc_000CFD2D: ;
    eax = MEM32(0x5F6B0C);
    PUSH32(esp, 0x000CFD37u); RECOMP_ABI_CALL(0x000D61C0u, sub_000D61C0); /* call 0x000D61C0 */

loc_000CFD37: ;
    eax = MEM32(0x5F6B10);
    PUSH32(esp, 0x000CFD41u); RECOMP_ABI_CALL(0x000D6200u, sub_000D6200); /* call 0x000D6200 */

loc_000CFD41: ;
    eax = MEM32(0x5F6B14);
    PUSH32(esp, 0x000CFD4Bu); RECOMP_ABI_CALL(0x000D6220u, sub_000D6220); /* call 0x000D6220 */

loc_000CFD4B: ;
    eax = MEM32(0x5F6B18);
    PUSH32(esp, 0x000CFD55u); RECOMP_ABI_CALL(0x000D6260u, sub_000D6260); /* call 0x000D6260 */

loc_000CFD55: ;
    eax = MEM32(0x5F6B1C);
    PUSH32(esp, 0x000CFD5Fu); RECOMP_ABI_CALL(0x000D62A0u, sub_000D62A0); /* call 0x000D62A0 */

loc_000CFD5F: ;
    eax = MEM32(0x5F6B20);
    PUSH32(esp, 0x000CFD69u); RECOMP_ABI_CALL(0x000D6190u, sub_000D6190); /* call 0x000D6190 */

loc_000CFD69: ;
    eax = MEM32(0x5F6B24);
    PUSH32(esp, 0x000CFD73u); RECOMP_ABI_CALL(0x000D61D0u, sub_000D61D0); /* call 0x000D61D0 */

loc_000CFD73: ;
    eax = MEM32(0x5F6B28);
    PUSH32(esp, 0x000CFD7Du); RECOMP_ABI_CALL(0x000D6210u, sub_000D6210); /* call 0x000D6210 */

loc_000CFD7D: ;
    eax = MEM32(0x5F6B2C);
    PUSH32(esp, 0x000CFD87u); RECOMP_ABI_CALL(0x000D6230u, sub_000D6230); /* call 0x000D6230 */

loc_000CFD87: ;
    eax = MEM32(0x5F6B30);
    PUSH32(esp, 0x000CFD91u); RECOMP_ABI_CALL(0x000D6270u, sub_000D6270); /* call 0x000D6270 */

loc_000CFD91: ;
    eax = MEM32(0x5F6B34);
    PUSH32(esp, 0x000CFD9Bu); RECOMP_ABI_CALL(0x000D62B0u, sub_000D62B0); /* call 0x000D62B0 */

loc_000CFD9B: ;
    xmm1.f[0] = (float)(int32_t)MEM32(0x5F6B38); /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(0x333830)); /* movss */
    eax = MEM32(0x5F6B3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000CFDCF; /* jne: not equal / not zero */

loc_000CFDC7: ;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    goto loc_000CFDDD;

loc_000CFDCF: ;
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */

loc_000CFDDD: ;
    eax = MEM32(0x5F6B40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFDEF; /* jne: not equal / not zero */

loc_000CFDE7: ;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    goto loc_000CFDFD;

loc_000CFDEF: ;
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */

loc_000CFDFD: ;
    eax = MEM32(0x5F6B44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFE0F; /* je: equal / zero */

loc_000CFE07: ;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */

loc_000CFE0F: ;
    ecx = esp + 0x1C;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000CFE1Eu); RECOMP_ABI_CALL(0x000CAE40u, sub_000CAE40); /* call 0x000CAE40 */

loc_000CFE1E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFE2B; /* je: equal / zero */

loc_000CFE22: ;
    eax = ebp;
    PUSH32(esp, 0x000CFE29u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CFE29: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CFE2B: ;
    eax = 0x32782C;
    edx = 0x5F6AAC;
    PUSH32(esp, 0x000CFE3Au); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CFE3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFE4F; /* jne: not equal / not zero */

loc_000CFE3E: ;
    MEM32(0x33BB50) = 1;
    PUSH32(esp, 0x000CFE4Du); RECOMP_ABI_CALL(0x000D1F00u, sub_000D1F00); /* call 0x000D1F00 */

loc_000CFE4D: ;
    goto loc_000CFE6D;

loc_000CFE4F: ;
    eax = 0x327824;
    edx = 0x5F6AAC;
    PUSH32(esp, 0x000CFE5Eu); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000CFE5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFEA8; /* jne: not equal / not zero */

loc_000CFE62: ;
    MEM32(0x33BB50) = esi;
    PUSH32(esp, 0x000CFE6Du); RECOMP_ABI_CALL(0x000C7520u, sub_000C7520); /* call 0x000C7520 */

loc_000CFE6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFEDE; /* je: equal / zero */

loc_000CFE71: ;
    esi = edi;
    PUSH32(esp, 0x000CFE78u); RECOMP_ABI_CALL(0x000ED620u, sub_000ED620); /* call 0x000ED620 */

loc_000CFE78: ;
    PUSH32(esp, 0x000CFE7Du); RECOMP_ABI_CALL(0x000DB1D0u, sub_000DB1D0); /* call 0x000DB1D0 */

loc_000CFE7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFEDE; /* jne: not equal / not zero */

loc_000CFE82: ;
    MEM32(0x64D58C) = eax;
    PUSH32(esp, 0x000CFE8Cu); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CFE8C: ;
    eax = MEM32(0x64D58C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x14C);
    PUSH32(esp, 0x000CFEA1u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CFEA1: ;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CFEA8: ;
    PUSH32(esp, 0x279);
    PUSH32(esp, 0x324878);
    edx = 0x327810;
    ecx = 0x327A24;
    PUSH32(esp, 0x000CFEC1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CFEC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000CFEDE;

loc_000CFEC6: ;
    MEM32(0x5F6AF0) = ebx;
    PUSH32(esp, 0x327834);

loc_000CFED1: ;
    edx = 0xD;

loc_000CFED6: ;
    PUSH32(esp, 0x000CFEDBu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CFEDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CFEDE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3277EC);
    edx = 8;
    MEM32(0x64D58C) = esi;
    PUSH32(esp, 0x000CFEF5u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000CFEF5: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFF05; /* je: equal / zero */

loc_000CFF00: ;
    PUSH32(esp, 0x000CFF05u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CFF05: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFF10; /* je: equal / zero */

loc_000CFF09: ;
    eax = ebp;
    PUSH32(esp, 0x000CFF10u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000CFF10: ;
    MEM32(0x5F6AD4) = esi;
    MEM32(0x5F6AD8) = esi;
    MEM32(0x5F6ADC) = esi;
    MEM32(0x5F6AE0) = esi;
    MEM32(0x5F6AF0) = esi;
    MEM32(0x5F6AEC) = esi;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFF42; /* je: equal / zero */

loc_000CFF3D: ;
    PUSH32(esp, 0x000CFF42u); RECOMP_ABI_CALL(0x000ED620u, sub_000ED620); /* call 0x000ED620 */

loc_000CFF42: ;
    PUSH32(esp, 0x000CFF47u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000CFF47: ;
    ecx = MEM32(esp + 0x15C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    PUSH32(esp, 0x000CFF59u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000CFF59: ;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CFF60
 * Original: 0x000CFF60 - 0x000D0016 (182 bytes, 46 insns)
 * Folder: sound (source: sndldbin.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFF60: ;
    eax = MEM32(0x64D58C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0010; /* je: equal / zero */

loc_000CFF6D: ;
    eax = MEM32(0x5F6AD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFF7F; /* jne: not equal / not zero */

loc_000CFF76: ;
    eax = MEM32(0x5F6AD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFF9B; /* je: equal / zero */

loc_000CFF7F: ;
    PUSH32(esp, 0x2CD);
    PUSH32(esp, 0x327720);
    edx = 0x3277C4;
    ecx = 0x327A24;
    PUSH32(esp, 0x000CFF98u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CFF98: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CFF9B: ;
    eax = 0x5F6AD4;
    PUSH32(esp, 0x000CFFA5u); RECOMP_ABI_CALL(0x000D60E0u, sub_000D60E0); /* call 0x000D60E0 */

loc_000CFFA5: ;
    eax = MEM32(0x5F6AE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFFB7; /* jne: not equal / not zero */

loc_000CFFAE: ;
    eax = MEM32(0x5F6ADC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFFD3; /* je: equal / zero */

loc_000CFFB7: ;
    PUSH32(esp, 0x2D1);
    PUSH32(esp, 0x327650);
    edx = 0x3276F0;
    ecx = 0x327A24;
    PUSH32(esp, 0x000CFFD0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000CFFD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CFFD3: ;
    eax = 0x5F6ADC;
    PUSH32(esp, 0x000CFFDDu); RECOMP_ABI_CALL(0x000D6060u, sub_000D6060); /* call 0x000D6060 */

loc_000CFFDD: ;
    eax = MEM32(0x5F6AE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CFFEF; /* jne: not equal / not zero */

loc_000CFFE6: ;
    eax = MEM32(0x5F6AE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D000B; /* je: equal / zero */

loc_000CFFEF: ;
    PUSH32(esp, 0x2D5);
    PUSH32(esp, 0x327598);
    edx = 0x327630;
    ecx = 0x327A24;
    PUSH32(esp, 0x000D0008u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D0008: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D000B: ;
    PUSH32(esp, 0x000D0010u); RECOMP_ABI_CALL(0x000C77C0u, sub_000C77C0); /* call 0x000C77C0 */

loc_000D0010: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0003
 * Original: 0x000D0003 - 0x000D0016 (19 bytes, 5 insns)
 * Folder: sound (between: 0x000CFF60 and 0x000D0020)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0003(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0003: ;
    PUSH32(esp, 0x000D0008u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D0008: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D0010u); RECOMP_ABI_CALL(0x000C77C0u, sub_000C77C0); /* call 0x000C77C0 */

loc_000D0010: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D000B
 * Original: 0x000D000B - 0x000D0016 (11 bytes, 3 insns)
 * Folder: sound (between: 0x000CFF60 and 0x000D0020)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D000B(void)
{

loc_000D000B: ;
    PUSH32(esp, 0x000D0010u); RECOMP_ABI_CALL(0x000C77C0u, sub_000C77C0); /* call 0x000C77C0 */

loc_000D0010: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0020
 * Original: 0x000D0020 - 0x000D009F (127 bytes, 38 insns)
 * Folder: sound (source: sndldbin.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0020: ;
    PUSH32(esp, 0x000D0025u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000D0025: ;
    PUSH32(esp, 0x2EE);
    eax = 0x327A24;
    PUSH32(esp, 0x000D0034u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000D0034: ;
    eax = MEM32(0x64D58C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0048; /* jne: not equal / not zero */

loc_000D0040: ;
    PUSH32(esp, 0x000D0045u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000D0045: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D0048: ;
    eax = MEM32(0x33BB50);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_000D0086; /* je: equal / zero */

loc_000D0053: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D007F; /* je: equal / zero */

loc_000D0056: ;
    PUSH32(esp, 0x327AA4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D0062u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0062: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D0065: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D0067: ;
    MEM32(0x64D58C) = 0;
    PUSH32(esp, 0x000D0076u); RECOMP_ABI_CALL(0x000DB210u, sub_000DB210); /* call 0x000DB210 */

loc_000D0076: ;
    PUSH32(esp, 0x000D007Bu); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000D007B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D007F: ;
    PUSH32(esp, 0x000D0084u); RECOMP_ABI_CALL(0x000D1F50u, sub_000D1F50); /* call 0x000D1F50 */

loc_000D0084: ;
    goto loc_000D008B;

loc_000D0086: ;
    PUSH32(esp, 0x000D008Bu); RECOMP_ABI_CALL(0x000C75C0u, sub_000C75C0); /* call 0x000C75C0 */

loc_000D008B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0065; /* je: equal / zero */

loc_000D008F: ;
    PUSH32(esp, 0x000D0094u); RECOMP_ABI_CALL(0x000CFF60u, sub_000CFF60); /* call 0x000CFF60 */

loc_000D0094: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0065; /* je: equal / zero */

loc_000D0098: ;
    esi = 1;
    goto loc_000D0067;

}

/**
 * sub_000D00A0
 * Original: 0x000D00A0 - 0x000D00EB (75 bytes, 26 insns)
 * Folder: sound (between: 0x000D0020 and 0x000D0210)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D00A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D00A0: ;
    ecx = MEM32(0x64D58C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D00BC; /* jne: not equal / not zero */

loc_000D00AA: ;
    PUSH32(esp, 0x327538);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D00B6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D00B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D00BC: ;
    ecx = MEM32(0x33BB50);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D00E1; /* je: equal / zero */

loc_000D00C7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D00DC; /* je: equal / zero */

loc_000D00CA: ;
    PUSH32(esp, 0x3274E8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D00D6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D00D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D00DC: ;
    g_seh_ebp = ebp; sub_000D2090(); return; /* tail jmp 0x000D2090 */

loc_000D00E1: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0x000D00E9u); RECOMP_ABI_CALL(0x000C7700u, sub_000C7700); /* call 0x000C7700 */

loc_000D00E9: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D00F0
 * Original: 0x000D00F0 - 0x000D01E4 (244 bytes, 71 insns)
 * Folder: sound (between: 0x000D0020 and 0x000D0210)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D00F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D00F0: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D01C8; /* ja: above (unsigned >) */

loc_000D00FD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD01E4); /* switch: 11 entries, 5 targets */
    if (_jt == 0x000D0104u) goto loc_000D0104;
    if (_jt == 0x000D011Du) goto loc_000D011D;
    if (_jt == 0x000D015Fu) goto loc_000D015F;
    if (_jt == 0x000D0188u) goto loc_000D0188;
    if (_jt == 0x000D01BFu) goto loc_000D01BF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D0104: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0178; /* je: equal / zero */

loc_000D010C: ;
    PUSH32(esp, 0x000D0111u); RECOMP_ABI_CALL(0x000CF890u, sub_000CF890); /* call 0x000CF890 */

loc_000D0111: ;
    MEM32(esi + 8) = eax;
    eax = 1;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D011D: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D012F; /* je: equal / zero */

loc_000D0125: ;
    PUSH32(esp, 0x000D012Au); RECOMP_ABI_CALL(0x000CF890u, sub_000CF890); /* call 0x000CF890 */

loc_000D012A: ;
    MEM32(esi + 8) = eax;
    goto loc_000D0136;

loc_000D012F: ;
    MEM32(esi + 8) = 0;

loc_000D0136: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D014F; /* je: equal / zero */

loc_000D013E: ;
    PUSH32(esp, 0x000D0143u); RECOMP_ABI_CALL(0x000CF890u, sub_000CF890); /* call 0x000CF890 */

loc_000D0143: ;
    MEM32(esi + 0xC) = eax;
    eax = 1;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D014F: ;
    eax = 1;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D015F: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0178; /* je: equal / zero */

loc_000D0167: ;
    PUSH32(esp, 0x000D016Cu); RECOMP_ABI_CALL(0x000CF840u, sub_000CF840); /* call 0x000CF840 */

loc_000D016C: ;
    MEM32(esi + 8) = eax;
    eax = 1;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D0178: ;
    eax = 1;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D0188: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0198; /* je: equal / zero */

loc_000D018F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0198; /* je: equal / zero */

loc_000D0193: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D019F;

loc_000D0198: ;
    MEM32(esi + 0x14) = 0;

loc_000D019F: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D01B8; /* je: equal / zero */

loc_000D01A7: ;
    PUSH32(esp, 0x000D01ACu); RECOMP_ABI_CALL(0x000CF890u, sub_000CF890); /* call 0x000CF890 */

loc_000D01AC: ;
    MEM32(esi + 0x10) = eax;
    eax = 1;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D01B8: ;
    MEM32(esi + 0x10) = 0;

loc_000D01BF: ;
    eax = 1;
    MEM32(esi + 0x48) = eax;
    esp += 4; return; /* ret */

loc_000D01C8: ;
    PUSH32(esp, 0x3274AC);
    edx = 0x15;
    PUSH32(esp, 0x000D01D7u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D01D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0210
 * Original: 0x000D0210 - 0x000D026E (94 bytes, 25 insns)
 * Folder: sound (source: sndldbin.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D0210: ;
    PUSH32(esp, 0x000D0215u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000D0215: ;
    PUSH32(esp, 0x3FE);
    eax = 0x327A24;
    PUSH32(esp, 0x000D0224u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000D0224: ;
    eax = MEM32(0x64D58C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0269; /* je: equal / zero */

loc_000D0230: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0269; /* je: equal / zero */

loc_000D0239: ;
    eax = MEM32(0x33BB50);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D0264; /* je: equal / zero */

loc_000D0243: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D025A; /* je: equal / zero */

loc_000D0246: ;
    PUSH32(esp, 0x3274E8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D0252u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0252: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000D025A: ;
    PUSH32(esp, 0x000D025Fu); RECOMP_ABI_CALL(0x000D20E0u, sub_000D20E0); /* call 0x000D20E0 */

loc_000D025F: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

loc_000D0264: ;
    PUSH32(esp, 0x000D0269u); RECOMP_ABI_CALL(0x000C7750u, sub_000C7750); /* call 0x000C7750 */

loc_000D0269: ;
    g_seh_ebp = ebp; sub_000D4690(); return; /* tail jmp 0x000D4690 */

}

/**
 * sub_000D0270
 * Original: 0x000D0270 - 0x000D0292 (34 bytes, 11 insns)
 * Folder: sound (source: sndldbin.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0270: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D028F; /* jne: not equal / not zero */

loc_000D0274: ;
    PUSH32(esp, 0x327A24);
    eax = 0x478;
    ecx = 0x324878;
    PUSH32(esp, 0x000D0288u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D0288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000D028F: ;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000D02A0
 * Original: 0x000D02A0 - 0x000D0326 (134 bytes, 47 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D02A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D02A0: ;
    edx = MEM32(0x328B5C);
    eax = ecx;
    MEM32(eax) = edx;
    SET_LO8(edx, MEM8(0x328B60));
    PUSH32(esp, esi);
    MEM8(eax + 4) = LO8(edx);
    esi = eax + 1;

loc_000D02B7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D02B7; /* jne: not equal / not zero */

loc_000D02BE: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(eax + ecx) = 0x2E;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D02D4; /* je: equal / zero */

loc_000D02CE: ;
    MEM8(eax + ecx) = 0x4C;
    goto loc_000D02D8;

loc_000D02D4: ;
    MEM8(eax + ecx) = 0x53;

loc_000D02D8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax + ecx + 1;
    MEM8(eax + ecx) = 0x4D;
    eax = edx;
    PUSH32(esp, 0x000D02E8u); RECOMP_ABI_CALL(0x000CF830u, sub_000CF830); /* call 0x000CF830 */

loc_000D02E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D02ED; /* jne: not equal / not zero */

loc_000D02EC: ;
    esp += 4; return; /* ret */

loc_000D02ED: ;
    eax = ecx;
    MEM8(edx + 1) = 0;
    edx = eax + 1;

loc_000D02F6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D02F6; /* jne: not equal / not zero */

loc_000D02FD: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D0320; /* jbe: below or equal (unsigned <=) */

loc_000D0304: ;
    PUSH32(esp, 0x86);
    PUSH32(esp, 0x328ADC);
    edx = 0x328B40;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D031Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D031D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D0320: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0330
 * Original: 0x000D0330 - 0x000D03CB (155 bytes, 47 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0330: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D0342; /* je: equal / zero */

loc_000D0336: ;
    esi = 0x5F6C48;
    edi = 0x5F6B48;
    goto loc_000D034C;

loc_000D0342: ;
    esi = 0x5F6C54;
    edi = 0x5F6BC8;

loc_000D034C: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0379; /* je: equal / zero */

loc_000D0351: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D035D; /* je: equal / zero */

loc_000D0358: ;
    PUSH32(esp, 0x000D035Du); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D035D: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(edi) = 0;

loc_000D0371: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D0379: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D039C; /* je: equal / zero */

loc_000D0380: ;
    PUSH32(esp, 0xAC);
    PUSH32(esp, 0x328A68);
    edx = 0x328AB4;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D0399u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D0399: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D039C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0371; /* je: equal / zero */

loc_000D03A3: ;
    PUSH32(esp, 0xAD);
    PUSH32(esp, 0x3289F0);
    edx = 0x328A3C;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D03BCu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D03BC: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0371; /* je: equal / zero */

loc_000D03C6: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D03D0
 * Original: 0x000D03D0 - 0x000D0621 (593 bytes, 170 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D03D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D03D0: ;
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x53C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x548) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D03FE; /* je: equal / zero */

loc_000D03EF: ;
    ebp = 0x5F6C48;
    MEM32(esp + 0x10) = 0x5F6B48;
    goto loc_000D040B;

loc_000D03FE: ;
    ebp = 0x5F6C54;
    MEM32(esp + 0x10) = 0x5F6BC8;

loc_000D040B: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0607; /* jne: not equal / not zero */

loc_000D0418: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D043B; /* je: equal / zero */

loc_000D041F: ;
    PUSH32(esp, 0xD4);
    PUSH32(esp, 0x328A68);
    edx = 0x328AB4;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D0438u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D0438: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D043B: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D045E; /* je: equal / zero */

loc_000D0442: ;
    PUSH32(esp, 0xD5);
    PUSH32(esp, 0x3289F0);
    edx = 0x328A3C;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D045Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D045B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D045E: ;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000D0468u); RECOMP_ABI_CALL(0x000D02A0u, sub_000D02A0); /* call 0x000D02A0 */

loc_000D0468: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0486; /* jne: not equal / not zero */

loc_000D046F: ;
    PUSH32(esp, 0x3289B4);
    edx = 0xC;
    PUSH32(esp, 0x000D047Eu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D047E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D05C0;

loc_000D0486: ;
    ecx = esp + 0x48;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    ebx = esp + 0x28;
    PUSH32(esp, 0x000D0499u); RECOMP_ABI_CALL(0x000CF150u, sub_000CF150); /* call 0x000CF150 */

loc_000D0499: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x48;
    PUSH32(esp, 0x000D04A5u); RECOMP_ABI_CALL(0x000ED460u, sub_000ED460); /* call 0x000ED460 */

loc_000D04A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D04DB; /* jne: not equal / not zero */

loc_000D04AC: ;
    edx = edi;
    PUSH32(esp, edx);
    eax = esp + 0x14C;
    PUSH32(esp, 0x328990);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D04C1u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D04C1: ;
    ecx = esp + 0x154;
    PUSH32(esp, ecx);
    edx = 0xC;
    PUSH32(esp, 0x000D04D3u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D04D3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D05C0;

loc_000D04DB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000D04E3u); RECOMP_ABI_CALL(0x000ED550u, sub_000ED550); /* call 0x000ED550 */

loc_000D04E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D051C; /* je: equal / zero */

loc_000D04EB: ;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x14C;
    PUSH32(esp, 0x32895C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0502u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D0502: ;
    ecx = esp + 0x154;
    PUSH32(esp, ecx);
    edx = 0xD;
    PUSH32(esp, 0x000D0514u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0514: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D05C0;

loc_000D051C: ;
    eax = esp + 0x1C;
    ecx = esp + 0x14;
    ebx = esp + 0x18;
    PUSH32(esp, 0x000D052Du); RECOMP_ABI_CALL(0x000CBCB0u, sub_000CBCB0); /* call 0x000CBCB0 */

loc_000D052D: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0555; /* je: equal / zero */

loc_000D0541: ;
    PUSH32(esp, 0x328930);
    edx = 0xD;
    PUSH32(esp, 0x000D0550u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0550: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D05C0;

loc_000D0555: ;
    edi = MEM32(ebp + 8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x34);
    eax = edi;
    PUSH32(esp, 0x000D0562u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D0562: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0574; /* jne: not equal / not zero */

loc_000D0568: ;
    PUSH32(esp, 0x3288F0);
    edx = 0xA;
    goto loc_000D05AD;

loc_000D0574: ;
    eax = MEM32(ebp + 4);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D0583u); RECOMP_ABI_CALL(0x000ED5B0u, sub_000ED5B0); /* call 0x000ED5B0 */

loc_000D0583: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0595; /* je: equal / zero */

loc_000D058E: ;
    PUSH32(esp, 0x3288D0);
    goto loc_000D05A8;

loc_000D0595: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D059Cu); RECOMP_ABI_CALL(0x000ED550u, sub_000ED550); /* call 0x000ED550 */

loc_000D059C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D05F5; /* je: equal / zero */

loc_000D05A3: ;
    PUSH32(esp, 0x32792C);

loc_000D05A8: ;
    edx = 0xD;

loc_000D05AD: ;
    PUSH32(esp, 0x000D05B2u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D05B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D05C0; /* je: equal / zero */

loc_000D05B9: ;
    eax = ebx;
    PUSH32(esp, 0x000D05C0u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D05C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D05D2; /* je: equal / zero */

loc_000D05CD: ;
    PUSH32(esp, 0x000D05D2u); RECOMP_ABI_CALL(0x000ED620u, sub_000ED620); /* call 0x000ED620 */

loc_000D05D2: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x538);
    PUSH32(esp, 0x000D05EEu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D05EE: ;
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x53C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D05F5: ;
    PUSH32(esp, 0x000D05FAu); RECOMP_ABI_CALL(0x000ED620u, sub_000ED620); /* call 0x000ED620 */

loc_000D05FA: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebp + 4) = ebx;
    MEM32(ecx) = 1;

loc_000D0607: ;
    ecx = MEM32(esp + 0x548);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp + 4;
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000D061Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D061A: ;
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x53C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0630
 * Original: 0x000D0630 - 0x000D068E (94 bytes, 43 insns)
 * Folder: sound (between: 0x000D03D0 and 0x000D06E0)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D0630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0630: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D0638u); RECOMP_ABI_CALL(0x000D03D0u, sub_000D03D0); /* call 0x000D03D0 */

loc_000D0638: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0678; /* je: equal / zero */

loc_000D063C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_000D0671; /* jle: less or equal (signed <=) */

loc_000D064A: ;
    /* nop */

loc_000D0650: ;
    eax = MEM32(esp + 0x14);
    edx = edi + 0x10;
    PUSH32(esp, 0x000D065Cu); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000D065C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D066F; /* je: equal / zero */

loc_000D0660: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D0650; /* jl: less (signed <) */

loc_000D0668: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D066F: ;
    ebp = edi;

loc_000D0671: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D0678: ;
    PUSH32(esp, 0x328888);
    edx = 8;
    PUSH32(esp, 0x000D0687u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0687: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D0690
 * Original: 0x000D0690 - 0x000D06DD (77 bytes, 27 insns)
 * Folder: sound (between: 0x000D03D0 and 0x000D06E0)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0690: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = 0x5F6B50;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000D069E; /* js: sign (negative) */

loc_000D0699: ;
    edx = 0x5F6BD0;

loc_000D069E: ;
    ecx = eax;
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D06B4; /* je: equal / zero */

loc_000D06AF: ;
    ecx = MEM32(edx + 0x34);
    goto loc_000D06B7;

loc_000D06B4: ;
    ecx = MEM32(edx + 0xC);

loc_000D06B7: ;
    edx = MEM32(ecx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = eax;
    if ((_fa != 0)) goto loc_000D06D9; /* jne: not equal / not zero */

loc_000D06C7: ;
    PUSH32(esp, 0x32885C);
    edx = 8;
    PUSH32(esp, 0x000D06D6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D06D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D06D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D06E0
 * Original: 0x000D06E0 - 0x000D0BBF (1247 bytes, 374 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D06E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D06E0: ;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x1CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x1C4) = eax;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    MEM32(esp + 0xC) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000D0734; /* jne: not equal / not zero */

loc_000D070D: ;
    PUSH32(esp, 0x328838);
    edx = 8;
    PUSH32(esp, 0x000D071Cu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D071C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x1C4);
    PUSH32(esp, 0x000D072Du); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D072D: ;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D0734: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0745; /* je: equal / zero */

loc_000D073A: ;
    eax = 0x5F6B50;
    MEM32(esp + 8) = eax;
    goto loc_000D0751;

loc_000D0745: ;
    MEM32(esp + 8) = 0x5F6BD0;
    eax = MEM32(esp + 8);

loc_000D0751: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1D4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D078C; /* je: equal / zero */

loc_000D076E: ;
    ecx = MEM32(eax + 0x28);
    ebp = MEM32(0x5F6B78);
    esi = eax + 0x38;
    MEM32(esp + 0x24) = esi;
    esi = eax + 0x34;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    goto loc_000D07AB;

loc_000D078C: ;
    ecx = MEM32(eax);
    esi = eax + 0x10;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = esi;
    esi = MEM32(0x5F6B50);
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    esi = MEM32(esp + 0x14);

loc_000D07AB: ;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D07E1; /* je: equal / zero */

loc_000D07B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D07E1; /* je: equal / zero */

loc_000D07B6: ;
    PUSH32(esp, 0x328814);
    edx = 8;
    PUSH32(esp, 0x000D07C5u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D07C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x1C4);
    PUSH32(esp, 0x000D07DAu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D07DA: ;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D07E1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0811; /* je: equal / zero */

loc_000D07E6: ;
    PUSH32(esp, 0x3287C8);
    edx = 8;
    PUSH32(esp, 0x000D07F5u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D07F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x1C4);
    PUSH32(esp, 0x000D080Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D080A: ;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D0811: ;
    eax = MEM32(esp + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0848; /* jne: not equal / not zero */

loc_000D081C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D083D; /* je: equal / zero */

loc_000D0821: ;
    PUSH32(esp, 0x1EB);
    PUSH32(esp, 0x328794);
    edx = 0x3287A8;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D083Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D083A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D083D: ;
    eax = edi;
    PUSH32(esp, 0x000D0844u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D0844: ;
    MEM32(esi) = eax;
    goto loc_000D0873;

loc_000D0848: ;
    _fa = (uint32_t)(MEM32(esp + 0x1E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1E8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0844; /* je: equal / zero */

loc_000D0851: ;
    PUSH32(esp, 0x1F1);
    PUSH32(esp, 0x328714);
    edx = 0x328738;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D086Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D086A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_000D0873: ;
    ebp = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0890; /* jne: not equal / not zero */

loc_000D0879: ;
    PUSH32(esp, 0x3286D0);
    edx = 0xA;
    PUSH32(esp, 0x000D0888u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0888: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D0B51;

loc_000D0890: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x000D089Au); RECOMP_ABI_CALL(0x000D02A0u, sub_000D02A0); /* call 0x000D02A0 */

loc_000D089A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D08B8; /* jne: not equal / not zero */

loc_000D08A1: ;
    PUSH32(esp, 0x3289B4);
    edx = 0xC;
    PUSH32(esp, 0x000D08B0u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D08B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D0B51;

loc_000D08B8: ;
    edx = esp + 0xD4;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    ebx = esp + 0x34;
    PUSH32(esp, 0x000D08CEu); RECOMP_ABI_CALL(0x000CF150u, sub_000CF150); /* call 0x000CF150 */

loc_000D08CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0xD4;
    PUSH32(esp, 0x000D08DDu); RECOMP_ABI_CALL(0x000ED460u, sub_000ED460); /* call 0x000ED460 */

loc_000D08DD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x28) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000D08FF; /* jne: not equal / not zero */

loc_000D08E8: ;
    PUSH32(esp, 0x3286AC);
    edx = 0xC;
    PUSH32(esp, 0x000D08F7u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D08F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D0B51;

loc_000D08FF: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi;
    PUSH32(esp, 0x000D090Du); RECOMP_ABI_CALL(0x000ED5B0u, sub_000ED5B0); /* call 0x000ED5B0 */

loc_000D090D: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D092A; /* jne: not equal / not zero */

loc_000D0918: ;
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D0923u); RECOMP_ABI_CALL(0x000ED550u, sub_000ED550); /* call 0x000ED550 */

loc_000D0923: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0941; /* je: equal / zero */

loc_000D092A: ;
    PUSH32(esp, 0x3288D0);
    edx = 0xD;
    PUSH32(esp, 0x000D0939u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0939: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D0B4D;

loc_000D0941: ;
    eax = MEM32(ebp + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D094F; /* jle: less or equal (signed <=) */

loc_000D094A: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 4) = MEM32(ebp + 4) + ebp;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D0952;

loc_000D094F: ;
    MEM32(ebp + 4) = esi;

loc_000D0952: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D095C; /* jle: less or equal (signed <=) */

loc_000D0957: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D095F;

loc_000D095C: ;
    MEM32(ebp + 0xC) = esi;

loc_000D095F: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D096B; /* jle: less or equal (signed <=) */

loc_000D0966: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D096E;

loc_000D096B: ;
    MEM32(ebp + 0x14) = esi;

loc_000D096E: ;
    edx = MEM32(ebp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D09A3; /* jle: less or equal (signed <=) */

loc_000D0977: ;
    eax = edx + 0xC;
    /* nop */

loc_000D0980: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D0989; /* jle: less or equal (signed <=) */

loc_000D0985: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D098B;

loc_000D0989: ;
    MEM32(eax) = esi;

loc_000D098B: ;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D0995; /* jle: less or equal (signed <=) */

loc_000D0990: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + -8) = MEM32(eax + -8) + edx;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D0998;

loc_000D0995: ;
    MEM32(eax + -8) = esi;

loc_000D0998: ;
    edi = MEM32(ebp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D0980; /* jl: less (signed <) */

loc_000D09A3: ;
    ebx = MEM32(esp + 0x24);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D09C7; /* je: equal / zero */

loc_000D09AB: ;
    PUSH32(esp, 0x25B);
    PUSH32(esp, 0x328678);
    edx = 0x32868C;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D09C4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D09C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D09C7: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D09F7; /* je: equal / zero */

loc_000D09CE: ;
    eax = edi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x000D09D8u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D09D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D09FD; /* jne: not equal / not zero */

loc_000D09E0: ;
    PUSH32(esp, 0x328638);
    edx = 0xA;
    PUSH32(esp, 0x000D09EFu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D09EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D0B4D;

loc_000D09F7: ;
    MEM32(esp + 0x1C) = esi;
    eax = esi;

loc_000D09FD: ;
    esi = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edx (32-bit) */
    ecx = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000D0A30; /* jle: less or equal (signed <=) */

loc_000D0A09: ;
    /* nop */

loc_000D0A10: ;
    MEM32(ecx + 0xC) = 0;
    ebx = MEM32(esi);
    MEM32(ecx) = ebx;
    ebx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D0A10; /* jl: less (signed <) */

loc_000D0A2C: ;
    ebx = MEM32(esp + 0x24);

loc_000D0A30: ;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = edi;
    eax = MEM32(ebp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0A49; /* je: equal / zero */

loc_000D0A3E: ;
    edi = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    goto loc_000D0A4F;

loc_000D0A49: ;
    MEM32(esp + 0x10) = ebx;
    edi = ebx;

loc_000D0A4F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebp + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_000D0A72; /* jle: less or equal (signed <=) */

loc_000D0A59: ;
    /* nop */

loc_000D0A60: ;
    ecx = edi;
    PUSH32(esp, 0x000D0A67u); RECOMP_ABI_CALL(0x000D00F0u, sub_000D00F0); /* call 0x000D00F0 */

loc_000D0A67: ;
    eax = MEM32(ebp + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D0A60; /* jl: less (signed <) */

loc_000D0A72: ;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x20) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_000D0AEF; /* jle: less or equal (signed <=) */

loc_000D0A82: ;
    eax = MEM32(ebx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D0A8D; /* je: equal / zero */

loc_000D0A88: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000D0A98; /* jne: not equal / not zero */

loc_000D0A8D: ;
    ecx = ebx;
    PUSH32(esp, 0x000D0A94u); RECOMP_ABI_CALL(0x000D5DC0u, sub_000D5DC0); /* call 0x000D5DC0 */

loc_000D0A94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0AD6; /* je: equal / zero */

loc_000D0A98: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(ecx);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D0AABu); RECOMP_ABI_CALL(0x000D4F70u, sub_000D4F70); /* call 0x000D4F70 */

loc_000D0AAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0B1D; /* je: equal / zero */

loc_000D0AAF: ;
    eax = edi;
    PUSH32(esp, 0x000D0AB6u); RECOMP_ABI_CALL(0x000D5D40u, sub_000D5D40); /* call 0x000D5D40 */

loc_000D0AB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0AD6; /* jne: not equal / not zero */

loc_000D0ABA: ;
    PUSH32(esp, 0x29D);
    PUSH32(esp, 0x3285F0);
    edx = 0x32861C;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D0AD3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D0AD3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D0AD6: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(ebp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x78;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000D0A82; /* jl: less (signed <) */

loc_000D0AEF: ;
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0x000D0AF8u); RECOMP_ABI_CALL(0x000ED620u, sub_000ED620); /* call 0x000ED620 */

loc_000D0AF8: ;
    eax = MEM32(esp + 0x1E0);
    edx = MEM32(esp + 0x1DC);
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(edx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D0BA1; /* je: equal / zero */

loc_000D0B15: ;
    MEM32(ecx + 0x28) = eax;
    goto loc_000D0BA3;

loc_000D0B1D: ;
    ebx = MEM32(ebx);
    edx = ebx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    eax = esp + 0x5C;
    PUSH32(esp, 0x3285B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0B3Bu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D0B3B: ;
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = 8;
    PUSH32(esp, 0x000D0B4Au); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0B4A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D0B4D: ;
    esi = MEM32(esp + 0x14);

loc_000D0B51: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0B6D; /* je: equal / zero */

loc_000D0B57: ;
    ecx = MEM32(esp + 0x1E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0B6D; /* jne: not equal / not zero */

loc_000D0B62: ;
    PUSH32(esp, 0x000D0B67u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D0B67: ;
    MEM32(esi) = 0;

loc_000D0B6D: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0B7A; /* je: equal / zero */

loc_000D0B75: ;
    PUSH32(esp, 0x000D0B7Au); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D0B7A: ;
    esi = MEM32(esp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0B88; /* je: equal / zero */

loc_000D0B83: ;
    PUSH32(esp, 0x000D0B88u); RECOMP_ABI_CALL(0x000ED620u, sub_000ED620); /* call 0x000ED620 */

loc_000D0B88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x1C4);
    PUSH32(esp, 0x000D0B9Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D0B9A: ;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D0BA1: ;
    MEM32(ecx) = eax;

loc_000D0BA3: ;
    ecx = MEM32(esp + 0x1D4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    PUSH32(esp, 0x000D0BB8u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D0BB8: ;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0BC0
 * Original: 0x000D0BC0 - 0x000D0E09 (585 bytes, 194 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D0BC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0BDF; /* jne: not equal / not zero */

loc_000D0BC7: ;
    PUSH32(esp, 0x328838);
    edx = 8;
    PUSH32(esp, 0x000D0BD6u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0BD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D0BDF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D0BF0; /* je: equal / zero */

loc_000D0BE5: ;
    edi = 0x5F6B50;
    MEM32(esp + 4) = edi;
    goto loc_000D0BFC;

loc_000D0BF0: ;
    MEM32(esp + 4) = 0x5F6BD0;
    edi = MEM32(esp + 4);

loc_000D0BFC: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0C19; /* je: equal / zero */

loc_000D0C04: ;
    eax = MEM32(edi + 0x28);
    ecx = edi + 0x38;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x5F6B78);
    edx = edi + 0x34;
    goto loc_000D0C2B;

loc_000D0C19: ;
    eax = MEM32(edi);
    ecx = edi + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x5F6B50);
    edx = edi + 0xC;

loc_000D0C2B: ;
    MEM32(esp + 8) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0C61; /* jne: not equal / not zero */

loc_000D0C3B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0CB5; /* je: equal / zero */

loc_000D0C3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0CB5; /* je: equal / zero */

loc_000D0C44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0CB5; /* je: equal / zero */

loc_000D0C48: ;
    PUSH32(esp, 0x32857C);
    edx = 8;
    PUSH32(esp, 0x000D0C57u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0C57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D0C61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0C7F; /* jne: not equal / not zero */

loc_000D0C66: ;
    PUSH32(esp, 0x328544);
    edx = 8;
    PUSH32(esp, 0x000D0C75u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0C75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D0C7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0CB5; /* je: equal / zero */

loc_000D0C83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    edx = 8;
    if (CMP_EQ(_fa, _fb)) goto loc_000D0CA1; /* je: equal / zero */

loc_000D0C8D: ;
    PUSH32(esp, 0x328514);
    PUSH32(esp, 0x000D0C97u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0C97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D0CA1: ;
    PUSH32(esp, 0x3284D8);
    PUSH32(esp, 0x000D0CABu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0CAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D0CB5: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0CDE; /* jne: not equal / not zero */

loc_000D0CC2: ;
    PUSH32(esp, 0x346);
    PUSH32(esp, 0x3284AC);
    edx = 0x3284BC;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D0CDBu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D0CDB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D0CDE: ;
    eax = MEM32(esi + 0x10);
    ebx = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D0D43; /* jle: less or equal (signed <=) */

loc_000D0CEC: ;
    MEM32(esp + 0x18) = edx;

loc_000D0CF0: ;
    eax = MEM32(ebx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D0CFB; /* je: equal / zero */

loc_000D0CF6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000D0D06; /* jne: not equal / not zero */

loc_000D0CFB: ;
    ecx = ebx;
    PUSH32(esp, 0x000D0D02u); RECOMP_ABI_CALL(0x000D5DC0u, sub_000D5DC0); /* call 0x000D5DC0 */

loc_000D0D02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0D28; /* je: equal / zero */

loc_000D0D06: ;
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(ecx);
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    PUSH32(esp, 0x000D0D17u); RECOMP_ABI_CALL(0x000D5D40u, sub_000D5D40); /* call 0x000D5D40 */

loc_000D0D17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0D24; /* je: equal / zero */

loc_000D0D1B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0D21u); RECOMP_ABI_CALL(0x000D50E0u, sub_000D50E0); /* call 0x000D50E0 */

loc_000D0D21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D0D24: ;
    edi = MEM32(esp + 0x10);

loc_000D0D28: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x78;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000D0CF0; /* jl: less (signed <) */

loc_000D0D41: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D0D43: ;
    ebx = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D0D5F; /* jle: less or equal (signed <=) */

loc_000D0D4F: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D0D52: ;
    MEM32(ecx) = edx;
    ebx = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D0D52; /* jl: less (signed <) */

loc_000D0D5F: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), edx (32-bit) */
    ebp = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_000D0D7E; /* jne: not equal / not zero */

loc_000D0D69: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0D7E; /* je: equal / zero */

loc_000D0D70: ;
    PUSH32(esp, 0x000D0D75u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D0D75: ;
    MEM32(ebp) = 0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D0D7E: ;
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0D9C; /* je: equal / zero */

loc_000D0D88: ;
    PUSH32(esp, 0x000D0D8Du); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D0D8D: ;
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D0D9C: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0DBC; /* je: equal / zero */

loc_000D0DA2: ;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = edx;
    goto loc_000D0DDF;

loc_000D0DBC: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0DDF; /* je: equal / zero */

loc_000D0DC1: ;
    PUSH32(esp, 0x389);
    PUSH32(esp, 0x328794);
    edx = 0x3287A8;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D0DDAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D0DDA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D0DDF: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), edx (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000D0DF9; /* je: equal / zero */

loc_000D0DE8: ;
    MEM32(edi + 0x28) = 0xFFFFFFFEu;
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D0DF9: ;
    MEM32(edi) = 0xFFFFFFFEu;
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0E10
 * Original: 0x000D0E10 - 0x000D0E20 (16 bytes, 6 insns)
 * Folder: sound (between: 0x000D0BC0 and 0x000D0E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0E10: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x000D0E1Cu); RECOMP_ABI_CALL(0x000D0BC0u, sub_000D0BC0); /* call 0x000D0BC0 */

loc_000D0E1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0E20
 * Original: 0x000D0E20 - 0x000D1352 (1330 bytes, 387 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D0E20: ;
    _fb = (uint32_t)(0x1D8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1D8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x1D4) = eax;
    eax = MEM32(esp + 0x1E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    eax = 0x5F6B50;
    if (CMP_NE(_fa, _fb)) goto loc_000D0E4F; /* jne: not equal / not zero */

loc_000D0E4A: ;
    eax = 0x5F6BD0;

loc_000D0E4F: ;
    ecx = MEM32(esp + 0x1E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0E63; /* je: equal / zero */

loc_000D0E5A: ;
    edx = eax + 0x28;
    MEM32(esp + 0x10) = edx;
    goto loc_000D0E69;

loc_000D0E63: ;
    MEM32(esp + 0x10) = eax;
    edx = eax;

loc_000D0E69: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1EC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0E9E; /* jne: not equal / not zero */

loc_000D0E79: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edx + 0x18;
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D0EA7; /* je: equal / zero */

loc_000D0E87: ;
    PUSH32(esp, 0x328480);
    edx = 8;
    PUSH32(esp, 0x000D0E96u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0E96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D12AA;

loc_000D0E9E: ;
    eax = edx + 0x20;
    MEM32(esp + 0x14) = eax;
    esi = eax;

loc_000D0EA7: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0EC4; /* je: equal / zero */

loc_000D0EAD: ;
    PUSH32(esp, 0x32845C);
    edx = 8;
    PUSH32(esp, 0x000D0EBCu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0EBC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D12AA;

loc_000D0EC4: ;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0EE2; /* jne: not equal / not zero */

loc_000D0ECB: ;
    PUSH32(esp, 0x328440);
    edx = 8;
    PUSH32(esp, 0x000D0EDAu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0EDA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D12AA;

loc_000D0EE2: ;
    ebp = MEM32(ecx + 0x18);
    ebx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000D0F08; /* jle: less or equal (signed <=) */

loc_000D0EF2: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0F1F; /* je: equal / zero */

loc_000D0EF6: ;
    ecx = MEM32(edx + 0xC);
    ebp = MEM32(ecx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D0EF2; /* jl: less (signed <) */

loc_000D0F04: ;
    MEM32(esp + 0x10) = ebx;

loc_000D0F08: ;
    PUSH32(esp, 0x328424);
    edx = 8;
    PUSH32(esp, 0x000D0F17u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0F17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D12AA;

loc_000D0F1F: ;
    edi = MEM32(ebx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x30) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D0F59; /* je: equal / zero */

loc_000D0F2E: ;
    eax = edi * 8;
    PUSH32(esp, 0x000D0F3Au); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D0F3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D0F65; /* jne: not equal / not zero */

loc_000D0F42: ;
    PUSH32(esp, 0x328408);
    edx = 0xA;
    PUSH32(esp, 0x000D0F51u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D0F51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D12AA;

loc_000D0F59: ;
    MEM32(esp + 0x24) = 0;
    eax = MEM32(esp + 0x24);

loc_000D0F65: ;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = MEM32(ebx + 0xC);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000D1076; /* jle: less or equal (signed <=) */

loc_000D0F7F: ;
    /* nop */

loc_000D0F80: ;
    eax = MEM32(ebp);
    edx = 0xFFFFFFFEu;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D0F9Fu); RECOMP_ABI_CALL(0x000DB2D0u, sub_000DB2D0); /* call 0x000DB2D0 */

loc_000D0F9F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D1096; /* je: equal / zero */

loc_000D0FAE: ;
    eax = MEM32(esp + 0x1F4);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x000D0FBFu); RECOMP_ABI_CALL(0x000D02A0u, sub_000D02A0); /* call 0x000D02A0 */

loc_000D0FBF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D10AD; /* je: equal / zero */

loc_000D0FCA: ;
    ecx = esp + 0xE4;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    ebx = esp + 0x44;
    PUSH32(esp, 0x000D0FE0u); RECOMP_ABI_CALL(0x000CF150u, sub_000CF150); /* call 0x000CF150 */

loc_000D0FE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0xE4;
    PUSH32(esp, 0x000D0FEFu); RECOMP_ABI_CALL(0x000ED460u, sub_000ED460); /* call 0x000ED460 */

loc_000D0FEF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x28) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D10C4; /* je: equal / zero */

loc_000D0FFE: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx;
    PUSH32(esp, 0x000D100Bu); RECOMP_ABI_CALL(0x000ED5B0u, sub_000ED5B0); /* call 0x000ED5B0 */

loc_000D100B: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D10DB; /* jne: not equal / not zero */

loc_000D1019: ;
    eax = MEM32(ebp);
    edi = MEM32(esp + 0x2C);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D102Cu); RECOMP_ABI_CALL(0x000DB4E0u, sub_000DB4E0); /* call 0x000DB4E0 */

loc_000D102C: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D10DB; /* jne: not equal / not zero */

loc_000D103A: ;
    edx = MEM32(ebp);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edi;
    edx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000D0F80; /* jl: less (signed <) */

loc_000D106C: ;
    eax = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x30);
    ebx = ecx;

loc_000D1076: ;
    edx = MEM32(esp + 0x20);
    MEM32(esi) = eax;
    MEM32(esi + 4) = edi;
    eax = MEM32(edx + 0xC);
    ecx = MEM32(eax + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D10F6; /* je: equal / zero */

loc_000D108B: ;
    ecx = MEM32(eax + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    goto loc_000D10FA;

loc_000D1096: ;
    PUSH32(esp, 0x3283D0);
    edx = 0xA;
    PUSH32(esp, 0x000D10A5u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D10A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D12AA;

loc_000D10AD: ;
    PUSH32(esp, 0x32839C);
    edx = 0xC;
    PUSH32(esp, 0x000D10BCu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D10BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D12AA;

loc_000D10C4: ;
    PUSH32(esp, 0x3286AC);
    edx = 0xC;
    PUSH32(esp, 0x000D10D3u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D10D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D12AA;

loc_000D10DB: ;
    PUSH32(esp, 0x3288D0);
    edx = 0xD;
    PUSH32(esp, 0x000D10EAu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D10EA: ;
    esi = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D12AA;

loc_000D10F6: ;
    MEM32(esp + 0x18) = edx;

loc_000D10FA: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), edx (32-bit) */
    ebp = MEM32(ebx + 4);
    MEM32(esp + 0x1C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000D120F; /* jle: less or equal (signed <=) */

loc_000D110A: ;
    /* nop */

loc_000D1110: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D11F8; /* je: equal / zero */

loc_000D111C: ;
    PUSH32(esp, 0x000D1121u); RECOMP_ABI_CALL(0x000D22E0u, sub_000D22E0); /* call 0x000D22E0 */

loc_000D1121: ;
    edi = eax;
    eax = MEM32(ebp);
    PUSH32(esp, 0x000D112Bu); RECOMP_ABI_CALL(0x000D0690u, sub_000D0690); /* call 0x000D0690 */

loc_000D112B: ;
    ebx = eax;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1153; /* je: equal / zero */

loc_000D1135: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1153; /* je: equal / zero */

loc_000D113A: ;
    eax = edi;
    PUSH32(esp, 0x000D1141u); RECOMP_ABI_CALL(0x000D5D40u, sub_000D5D40); /* call 0x000D5D40 */

loc_000D1141: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D11F4; /* jne: not equal / not zero */

loc_000D1149: ;
    PUSH32(esp, 0x495);
    goto loc_000D11DD;

loc_000D1153: ;
    eax = edi;
    PUSH32(esp, 0x000D115Au); RECOMP_ABI_CALL(0x000D5D40u, sub_000D5D40); /* call 0x000D5D40 */

loc_000D115A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D117A; /* je: equal / zero */

loc_000D115E: ;
    PUSH32(esp, 0x46F);
    PUSH32(esp, 0x32834C);
    edx = 0x32837C;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D1177u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D1177: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D117A: ;
    eax = ebx;
    PUSH32(esp, 0x000D1181u); RECOMP_ABI_CALL(0x000DB560u, sub_000DB560); /* call 0x000DB560 */

loc_000D1181: ;
    ecx = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D119D; /* jle: less or equal (signed <=) */

loc_000D118A: ;
    /* nop */

loc_000D1190: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D11B4; /* je: equal / zero */

loc_000D1194: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D1190; /* jl: less (signed <) */

loc_000D119D: ;
    PUSH32(esp, 0x328320);
    edx = 8;
    PUSH32(esp, 0x000D11ACu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D11AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D12AA;

loc_000D11B4: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ebp + 4);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D11C5u); RECOMP_ABI_CALL(0x000D4F70u, sub_000D4F70); /* call 0x000D4F70 */

loc_000D11C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D127A; /* je: equal / zero */

loc_000D11CD: ;
    eax = edi;
    PUSH32(esp, 0x000D11D4u); RECOMP_ABI_CALL(0x000D5D40u, sub_000D5D40); /* call 0x000D5D40 */

loc_000D11D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D11F4; /* jne: not equal / not zero */

loc_000D11D8: ;
    PUSH32(esp, 0x489);

loc_000D11DD: ;
    ecx = 0x328B0C;
    edx = 0x32861C;
    PUSH32(esp, 0x3285F0);
    PUSH32(esp, 0x000D11F1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D11F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D11F4: ;
    ebx = MEM32(esp + 0x10);

loc_000D11F8: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000D1110; /* jl: less (signed <) */

loc_000D120F: ;
    eax = MEM32(esi + 4);
    edi = MEM32(esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D124C; /* jle: less or equal (signed <=) */

loc_000D121C: ;
    /* nop */

loc_000D1220: ;
    eax = MEM32(edi);
    PUSH32(esp, 0x000D1227u); RECOMP_ABI_CALL(0x000DB5C0u, sub_000DB5C0); /* call 0x000DB5C0 */

loc_000D1227: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1241; /* je: equal / zero */

loc_000D122B: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1241; /* je: equal / zero */

loc_000D1232: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D123Bu); RECOMP_ABI_CALL(0x000DB330u, sub_000DB330); /* call 0x000DB330 */

loc_000D123B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = ebp;

loc_000D1241: ;
    eax = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D1220; /* jl: less (signed <) */

loc_000D124C: ;
    esi = MEM32(esp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D125A; /* je: equal / zero */

loc_000D1255: ;
    PUSH32(esp, 0x000D125Au); RECOMP_ABI_CALL(0x000ED620u, sub_000ED620); /* call 0x000ED620 */

loc_000D125A: ;
    eax = MEM32(esp + 0x1EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D132F; /* jne: not equal / not zero */

loc_000D126A: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax + 8) = 1;
    goto loc_000D1336;

loc_000D127A: ;
    ebx = MEM32(ebx);
    eax = ebx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ecx = esp + 0x6C;
    PUSH32(esp, 0x3285B8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D1298u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D1298: ;
    edx = esp + 0x74;
    PUSH32(esp, edx);
    edx = 8;
    PUSH32(esp, 0x000D12A7u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D12A7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D12AA: ;
    eax = MEM32(esi + 4);
    edi = MEM32(esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D12F8; /* jle: less or equal (signed <=) */

loc_000D12B7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D12D7; /* jne: not equal / not zero */

loc_000D12BB: ;
    PUSH32(esp, 0x4B6);
    PUSH32(esp, 0x3282F4);
    edx = 0x328304;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D12D4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D12D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D12D7: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D12ED; /* je: equal / zero */

loc_000D12DE: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D12E7u); RECOMP_ABI_CALL(0x000DB330u, sub_000DB330); /* call 0x000DB330 */

loc_000D12E7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = ebp;

loc_000D12ED: ;
    eax = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D12B7; /* jl: less (signed <) */

loc_000D12F8: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1303; /* je: equal / zero */

loc_000D12FE: ;
    PUSH32(esp, 0x000D1303u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D1303: ;
    MEM32(esi) = ebp;
    MEM32(esi + 4) = ebp;
    esi = MEM32(esp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1316; /* je: equal / zero */

loc_000D1311: ;
    PUSH32(esp, 0x000D1316u); RECOMP_ABI_CALL(0x000ED620u, sub_000ED620); /* call 0x000ED620 */

loc_000D1316: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x1D4);
    PUSH32(esp, 0x000D1328u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D1328: ;
    _fb = (uint32_t)(0x1D8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1D8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D132F: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ecx + 4) = eax;

loc_000D1336: ;
    ecx = MEM32(esp + 0x1E4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    PUSH32(esp, 0x000D134Bu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D134B: ;
    _fb = (uint32_t)(0x1D8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1D8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1360
 * Original: 0x000D1360 - 0x000D1695 (821 bytes, 240 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D1360: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x88) = eax;
    eax = MEM32(esp + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = 1;
    eax = 0x5F6B50;
    if (CMP_NE(_fa, _fb)) goto loc_000D138F; /* jne: not equal / not zero */

loc_000D138A: ;
    eax = 0x5F6BD0;

loc_000D138F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1396; /* je: equal / zero */

loc_000D1393: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1396: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x94);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 4) = eax;
    PUSH32(esp, edi);
    edx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D13EB; /* jne: not equal / not zero */

loc_000D13AA: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = edx + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_000D1475; /* je: equal / zero */

loc_000D13B8: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1475; /* je: equal / zero */

loc_000D13C2: ;
    PUSH32(esp, 0x328278);
    edx = 8;
    PUSH32(esp, 0x000D13D1u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D13D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x000D13E4u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D13E4: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D13EB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    edi = edx + 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_000D141C; /* jne: not equal / not zero */

loc_000D13F3: ;
    PUSH32(esp, 0x3282B8);
    edx = 8;
    PUSH32(esp, 0x000D1402u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1402: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x000D1415u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D1415: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D141C: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1475; /* je: equal / zero */

loc_000D1423: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    edx = 8;
    if (CMP_EQ(_fa, _fb)) goto loc_000D1451; /* je: equal / zero */

loc_000D142D: ;
    PUSH32(esp, 0x328240);
    PUSH32(esp, 0x000D1437u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1437: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x000D144Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D144A: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D1451: ;
    PUSH32(esp, 0x328200);
    PUSH32(esp, 0x000D145Bu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D145B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x000D146Eu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D146E: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D1475: ;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D14A5; /* jne: not equal / not zero */

loc_000D147C: ;
    PUSH32(esp, 0x328440);
    edx = 8;
    PUSH32(esp, 0x000D148Bu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D148B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x000D149Eu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D149E: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D14A5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x14);
    if (CMP_LE(_fas, _fbs)) goto loc_000D14C6; /* jle: less or equal (signed <=) */

loc_000D14B3: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D14F1; /* je: equal / zero */

loc_000D14B8: ;
    ecx = MEM32(edx + 0xC);
    ebx = MEM32(ecx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D14B3; /* jl: less (signed <) */

loc_000D14C6: ;
    PUSH32(esp, 0x328424);
    edx = 8;
    PUSH32(esp, 0x000D14D5u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D14D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x000D14EAu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D14EA: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D14F1: ;
    eax = MEM32(edi + 4);
    esi = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D1545; /* jle: less or equal (signed <=) */

loc_000D14FC: ;
    /* nop */

loc_000D1500: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1520; /* jne: not equal / not zero */

loc_000D1504: ;
    PUSH32(esp, 0x534);
    PUSH32(esp, 0x3282F4);
    edx = 0x3281DC;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D151Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D151D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1520: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D153A; /* je: equal / zero */

loc_000D1527: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1530u); RECOMP_ABI_CALL(0x000DB330u, sub_000DB330); /* call 0x000DB330 */

loc_000D1530: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_000D153A: ;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D1500; /* jl: less (signed <) */

loc_000D1545: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1550; /* je: equal / zero */

loc_000D154B: ;
    PUSH32(esp, 0x000D1550u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D1550: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    edi = MEM32(ebp + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_000D1658; /* jle: less or equal (signed <=) */

loc_000D1563: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1649; /* je: equal / zero */

loc_000D156E: ;
    PUSH32(esp, 0x000D1573u); RECOMP_ABI_CALL(0x000D22E0u, sub_000D22E0); /* call 0x000D22E0 */

loc_000D1573: ;
    esi = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D15B2; /* je: equal / zero */

loc_000D157D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D15B2; /* je: equal / zero */

loc_000D1582: ;
    eax = esi;
    PUSH32(esp, 0x000D1589u); RECOMP_ABI_CALL(0x000D5D40u, sub_000D5D40); /* call 0x000D5D40 */

loc_000D1589: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1649; /* jne: not equal / not zero */

loc_000D1591: ;
    PUSH32(esp, 0x562);
    PUSH32(esp, 0x3285F0);
    edx = 0x32861C;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D15AAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D15AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D1649;

loc_000D15B2: ;
    eax = esi;
    PUSH32(esp, 0x000D15B9u); RECOMP_ABI_CALL(0x000D5D40u, sub_000D5D40); /* call 0x000D5D40 */

loc_000D15B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D15D9; /* jne: not equal / not zero */

loc_000D15BD: ;
    PUSH32(esp, 0x550);
    PUSH32(esp, 0x3285F0);
    edx = 0x32861C;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D15D6u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D15D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D15D9: ;
    eax = esi;
    PUSH32(esp, 0x000D15E0u); RECOMP_ABI_CALL(0x000D5D40u, sub_000D5D40); /* call 0x000D5D40 */

loc_000D15E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1612; /* je: equal / zero */

loc_000D15E4: ;
    PUSH32(esp, 0x000D15E9u); RECOMP_ABI_CALL(0x000D50C0u, sub_000D50C0); /* call 0x000D50C0 */

loc_000D15E9: ;
    eax = esi;
    PUSH32(esp, 0x000D15F0u); RECOMP_ABI_CALL(0x000D5D40u, sub_000D5D40); /* call 0x000D5D40 */

loc_000D15F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1649; /* je: equal / zero */

loc_000D15F4: ;
    PUSH32(esp, 0x556);
    PUSH32(esp, 0x32834C);
    edx = 0x3281BC;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D160Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D160D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D1649;

loc_000D1612: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, 0x328178);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D162Fu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D162F: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = 8;
    PUSH32(esp, 0x000D163Eu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D163E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = 0;

loc_000D1649: ;
    eax = MEM32(ebp + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D1563; /* jl: less (signed <) */

loc_000D1658: ;
    _fa = (uint32_t)(MEM32(esp + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xA0), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D166F; /* jne: not equal / not zero */

loc_000D1662: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + 8) = 0;
    goto loc_000D167A;

loc_000D166F: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx + 4) = 0xFFFFFFFEu;

loc_000D167A: ;
    ecx = MEM32(esp + 0x98);
    eax = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000D168Eu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D168E: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D16A0
 * Original: 0x000D16A0 - 0x000D16DF (63 bytes, 27 insns)
 * Folder: sound (between: 0x000D1360 and 0x000D1780)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D16A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D16A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x5F6B50;
    if (CMP_NE(_fa, _fb)) goto loc_000D16AE; /* jne: not equal / not zero */

loc_000D16A9: ;
    eax = 0x5F6BD0;

loc_000D16AE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D16B7; /* je: equal / zero */

loc_000D16B2: ;
    eax = MEM32(eax + 0x34);
    goto loc_000D16BA;

loc_000D16B7: ;
    eax = MEM32(eax + 0xC);

loc_000D16BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D16DC; /* je: equal / zero */

loc_000D16BE: ;
    edx = eax + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D16DC; /* je: equal / zero */

loc_000D16C5: ;
    eax = MEM32(edx);
    edx = MEM32(edx + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D16DC; /* jle: less or equal (signed <=) */

loc_000D16D0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D16DE; /* je: equal / zero */

loc_000D16D4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D16D0; /* jl: less (signed <) */

loc_000D16DC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D16DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D16E0
 * Original: 0x000D16E0 - 0x000D1780 (160 bytes, 65 insns)
 * Folder: sound (between: 0x000D1360 and 0x000D1780)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D16E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D16E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x5F6B50;
    if (CMP_NE(_fa, _fb)) goto loc_000D16EE; /* jne: not equal / not zero */

loc_000D16E9: ;
    eax = 0x5F6BD0;

loc_000D16EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D16F5; /* je: equal / zero */

loc_000D16F2: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D16F5: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D170F; /* jne: not equal / not zero */

loc_000D16FC: ;
    PUSH32(esp, 0x328138);
    edx = 8;
    PUSH32(esp, 0x000D170Bu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D170B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D170F: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000D172C; /* jle: less or equal (signed <=) */

loc_000D171D: ;
    /* nop */

loc_000D1720: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1741; /* je: equal / zero */

loc_000D1724: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D1720; /* jl: less (signed <) */

loc_000D172C: ;
    PUSH32(esp, 0x328100);
    edx = 8;
    PUSH32(esp, 0x000D173Bu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D173B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D1741: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D177C; /* jle: less or equal (signed <=) */

loc_000D174E: ;
    PUSH32(esp, ebp);
    /* nop */

loc_000D1750: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1770; /* je: equal / zero */

loc_000D1757: ;
    PUSH32(esp, 0x000D175Cu); RECOMP_ABI_CALL(0x000D22E0u, sub_000D22E0); /* call 0x000D22E0 */

loc_000D175C: ;
    ebp = eax;
    PUSH32(esp, 0x000D1763u); RECOMP_ABI_CALL(0x000D5D40u, sub_000D5D40); /* call 0x000D5D40 */

loc_000D1763: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1770; /* je: equal / zero */

loc_000D1767: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D176Du); RECOMP_ABI_CALL(0x000D50E0u, sub_000D50E0); /* call 0x000D50E0 */

loc_000D176D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1770: ;
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D1750; /* jl: less (signed <) */

loc_000D177B: ;
    POP32(esp, ebp);

loc_000D177C: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1780
 * Original: 0x000D1780 - 0x000D1889 (265 bytes, 93 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D1780: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    eax = 0x5F6B50;
    if (CMP_NE(_fa, _fb)) goto loc_000D1799; /* jne: not equal / not zero */

loc_000D1794: ;
    eax = 0x5F6BD0;

loc_000D1799: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D17A6; /* je: equal / zero */

loc_000D179D: ;
    esi = eax + 0x28;
    MEM32(esp + 0x10) = esi;
    goto loc_000D17AC;

loc_000D17A6: ;
    MEM32(esp + 0x10) = eax;
    esi = eax;

loc_000D17AC: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D17E1; /* je: equal / zero */

loc_000D17B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D17D5; /* jne: not equal / not zero */

loc_000D17B9: ;
    PUSH32(esp, 0x615);
    PUSH32(esp, 0x328094);
    edx = 0x3280CC;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D17D2u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D17D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D17D5: ;
    edx = MEM32(esi + 4);
    ecx = edi;
    eax = ebx;
    PUSH32(esp, 0x000D17E1u); RECOMP_ABI_CALL(0x000D16E0u, sub_000D16E0); /* call 0x000D16E0 */

loc_000D17E1: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D17F4; /* je: equal / zero */

loc_000D17E8: ;
    ecx = edi;
    eax = ebx;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000D17F4u); RECOMP_ABI_CALL(0x000D16E0u, sub_000D16E0); /* call 0x000D16E0 */

loc_000D17F4: ;
    ebp = MEM32(esi + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1863; /* je: equal / zero */

loc_000D17FB: ;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D1863; /* jle: less or equal (signed <=) */

loc_000D1807: ;
    MEM32(esp + 0x14) = edi;
    goto loc_000D1810;

    /* nop */

loc_000D1810: ;
    eax = MEM32(ebx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D181B; /* je: equal / zero */

loc_000D1816: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000D1826; /* jne: not equal / not zero */

loc_000D181B: ;
    ecx = ebx;
    PUSH32(esp, 0x000D1822u); RECOMP_ABI_CALL(0x000D5DC0u, sub_000D5DC0); /* call 0x000D5DC0 */

loc_000D1822: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D184A; /* je: equal / zero */

loc_000D1826: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D186B; /* jle: less or equal (signed <=) */

loc_000D182B: ;
    esi = MEM32(esi + 0x10);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x000D1839u); RECOMP_ABI_CALL(0x000D5D40u, sub_000D5D40); /* call 0x000D5D40 */

loc_000D1839: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1846; /* je: equal / zero */

loc_000D183D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D1843u); RECOMP_ABI_CALL(0x000D50E0u, sub_000D50E0); /* call 0x000D50E0 */

loc_000D1843: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1846: ;
    esi = MEM32(esp + 0x10);

loc_000D184A: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x78;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000D1810; /* jl: less (signed <) */

loc_000D1863: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D186B: ;
    PUSH32(esp, 0x641);
    PUSH32(esp, 0x324878);
    edx = 0x328068;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D1884u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D1884: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D184A;

}

/**
 * sub_000D1890
 * Original: 0x000D1890 - 0x000D18B3 (35 bytes, 10 insns)
 * Folder: sound (between: 0x000D1780 and 0x000D1960)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D1890: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    PUSH32(esp, 0x000D1899u); RECOMP_ABI_CALL(0x000D1780u, sub_000D1780); /* call 0x000D1780 */

loc_000D1899: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D18AE; /* je: equal / zero */

loc_000D18A2: ;
    eax = 1;
    ecx = esi;
    PUSH32(esp, 0x000D18AEu); RECOMP_ABI_CALL(0x000D1780u, sub_000D1780); /* call 0x000D1780 */

loc_000D18AE: ;
    g_seh_ebp = ebp; sub_000CAF40(); return; /* tail jmp 0x000CAF40 */

}

/**
 * sub_000D18C0
 * Original: 0x000D18C0 - 0x000D18D4 (20 bytes, 7 insns)
 * Folder: sound (between: 0x000D1780 and 0x000D1960)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D18C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D18C0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D18C8u); RECOMP_ABI_CALL(0x000D1890u, sub_000D1890); /* call 0x000D1890 */

loc_000D18C8: ;
    esi = 1;
    PUSH32(esp, 0x000D18D2u); RECOMP_ABI_CALL(0x000D1890u, sub_000D1890); /* call 0x000D1890 */

loc_000D18D2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D18E0
 * Original: 0x000D18E0 - 0x000D1957 (119 bytes, 40 insns)
 * Folder: sound (between: 0x000D1780 and 0x000D1960)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D18E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D18E0: ;
    eax = MEM32(0x64D590);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D18FE; /* jne: not equal / not zero */

loc_000D18E9: ;
    PUSH32(esp, 0x32747C);
    edx = 8;
    PUSH32(esp, 0x000D18F8u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D18F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D18FB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D18FE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    edx = edi;
    PUSH32(esp, 0x000D1909u); RECOMP_ABI_CALL(0x000D16E0u, sub_000D16E0); /* call 0x000D16E0 */

loc_000D1909: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1920; /* je: equal / zero */

loc_000D1912: ;
    ecx = 1;
    eax = esi;
    edx = edi;
    PUSH32(esp, 0x000D1920u); RECOMP_ABI_CALL(0x000D16E0u, sub_000D16E0); /* call 0x000D16E0 */

loc_000D1920: ;
    PUSH32(esp, 0x000D1925u); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_000D1925: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1941; /* je: equal / zero */

loc_000D192E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 1;
    PUSH32(esp, 0x000D193Au); RECOMP_ABI_CALL(0x000D1360u, sub_000D1360); /* call 0x000D1360 */

loc_000D193A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D18FB; /* je: equal / zero */

loc_000D1941: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D194Au); RECOMP_ABI_CALL(0x000D1360u, sub_000D1360); /* call 0x000D1360 */

loc_000D194A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D18FB; /* je: equal / zero */

loc_000D1951: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1960
 * Original: 0x000D1960 - 0x000D1B2A (458 bytes, 140 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D1960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1960: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x64D590);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1986; /* jne: not equal / not zero */

loc_000D196F: ;
    PUSH32(esp, 0x32747C);
    edx = 8;
    PUSH32(esp, 0x000D197Eu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D197E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D1986: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D198Fu); RECOMP_ABI_CALL(0x000D0630u, sub_000D0630); /* call 0x000D0630 */

loc_000D198F: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D19B5; /* je: equal / zero */

loc_000D1998: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D19EC; /* je: equal / zero */

loc_000D19A1: ;
    PUSH32(esp, esi);
    ecx = 1;
    PUSH32(esp, 0x000D19ACu); RECOMP_ABI_CALL(0x000D0630u, sub_000D0630); /* call 0x000D0630 */

loc_000D19AC: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D19E7; /* jne: not equal / not zero */

loc_000D19B5: ;
    edx = 8;
    PUSH32(esp, 0x328030);
    PUSH32(esp, 0x000D19C4u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D19C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D19CEu); RECOMP_ABI_CALL(0x000D0330u, sub_000D0330); /* call 0x000D0330 */

loc_000D19CE: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D19E1; /* je: equal / zero */

loc_000D19D7: ;
    eax = 1;
    PUSH32(esp, 0x000D19E1u); RECOMP_ABI_CALL(0x000D0330u, sub_000D0330); /* call 0x000D0330 */

loc_000D19E1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D19E3: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D19E7: ;
    eax = MEM32(0x5F6AB4);

loc_000D19EC: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D1A58; /* jne: not equal / not zero */

loc_000D19F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1A1F; /* je: equal / zero */

loc_000D19F6: ;
    eax = MEM32(0x5F6BFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5F6BD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5F6BD4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1A1F; /* je: equal / zero */

loc_000D1A03: ;
    PUSH32(esp, 0x6D7);
    PUSH32(esp, 0x327FA8);
    edx = 0x327FF8;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D1A1Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D1A1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1A1F: ;
    eax = MEM32(0x5F6BD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1AC5; /* je: equal / zero */

loc_000D1A2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1A4E; /* jne: not equal / not zero */

loc_000D1A32: ;
    PUSH32(esp, 0x6DD);
    PUSH32(esp, 0x327F68);
    edx = 0x3280CC;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D1A4Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D1A4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1A4E: ;
    edi = MEM32(0x5F6BD4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000D1ABC;

loc_000D1A58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1A86; /* je: equal / zero */

loc_000D1A5C: ;
    ecx = MEM32(0x5F6B7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5F6B54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x5F6B54) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1A86; /* je: equal / zero */

loc_000D1A6A: ;
    PUSH32(esp, 0x6E6);
    PUSH32(esp, 0x327F20);
    edx = 0x327FF8;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D1A83u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D1A83: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1A86: ;
    eax = MEM32(0x5F6B54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1AC5; /* je: equal / zero */

loc_000D1A90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1AB1; /* jne: not equal / not zero */

loc_000D1A95: ;
    PUSH32(esp, 0x6EC);
    PUSH32(esp, 0x327EE0);
    edx = 0x3280CC;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D1AAEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D1AAE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1AB1: ;
    edi = MEM32(0x5F6B54);
    esi = 1;

loc_000D1ABC: ;
    PUSH32(esp, 0x000D1AC1u); RECOMP_ABI_CALL(0x000D18E0u, sub_000D18E0); /* call 0x000D18E0 */

loc_000D1AC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1AEF; /* je: equal / zero */

loc_000D1AC5: ;
    esi = MEM32(ebx);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000D1ACFu); RECOMP_ABI_CALL(0x000D18E0u, sub_000D18E0); /* call 0x000D18E0 */

loc_000D1ACF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1AEF; /* je: equal / zero */

loc_000D1AD3: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0x000D1AE1u); RECOMP_ABI_CALL(0x000D0BC0u, sub_000D0BC0); /* call 0x000D0BC0 */

loc_000D1AE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1AEF; /* je: equal / zero */

loc_000D1AE8: ;
    eax = 1;
    goto loc_000D1AF1;

loc_000D1AEF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D1AF1: ;
    ecx = MEM32(0x5F6AB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D19E3; /* je: equal / zero */

loc_000D1B00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D19E1; /* je: equal / zero */

loc_000D1B08: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp;
    PUSH32(esp, 0x000D1B16u); RECOMP_ABI_CALL(0x000D0BC0u, sub_000D0BC0); /* call 0x000D0BC0 */

loc_000D1B16: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D19E1; /* je: equal / zero */

loc_000D1B21: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1B30
 * Original: 0x000D1B30 - 0x000D1B8C (92 bytes, 35 insns)
 * Folder: sound (between: 0x000D1960 and 0x000D1FB0)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1B30: ;
    eax = MEM32(0x64D590);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1B4E; /* jne: not equal / not zero */

loc_000D1B39: ;
    PUSH32(esp, 0x32747C);
    edx = 8;
    PUSH32(esp, 0x000D1B48u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1B48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D1B4E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D1B57u); RECOMP_ABI_CALL(0x000D0E20u, sub_000D0E20); /* call 0x000D0E20 */

loc_000D1B57: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1B83; /* je: equal / zero */

loc_000D1B5E: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1B86; /* je: equal / zero */

loc_000D1B67: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D1B70u); RECOMP_ABI_CALL(0x000D0E20u, sub_000D0E20); /* call 0x000D0E20 */

loc_000D1B70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1B86; /* jne: not equal / not zero */

loc_000D1B77: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D1B80u); RECOMP_ABI_CALL(0x000D1360u, sub_000D1360); /* call 0x000D1360 */

loc_000D1B80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1B83: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D1B86: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1B90
 * Original: 0x000D1B90 - 0x000D1BD4 (68 bytes, 19 insns)
 * Folder: sound (between: 0x000D1960 and 0x000D1FB0)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1B90: ;
    eax = MEM32(0x5F6C20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1BCE; /* je: equal / zero */

loc_000D1B99: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = 0x5F6C24;
    PUSH32(esp, 0x000D1BA8u); RECOMP_ABI_CALL(0x000D1960u, sub_000D1960); /* call 0x000D1960 */

loc_000D1BA8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x5F6C20) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000D1BCE; /* jne: not equal / not zero */

loc_000D1BB9: ;
    PUSH32(esp, 0x327EB4);
    edx = 8;
    PUSH32(esp, 0x000D1BC8u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1BC8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D1BCE: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1BE0
 * Original: 0x000D1BE0 - 0x000D1BEB (11 bytes, 4 insns)
 * Folder: sound (between: 0x000D1960 and 0x000D1FB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1BE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D1BE7u); RECOMP_ABI_CALL(0x000D1B90u, sub_000D1B90); /* call 0x000D1B90 */

loc_000D1BE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1BF0
 * Original: 0x000D1BF0 - 0x000D1C52 (98 bytes, 28 insns)
 * Folder: sound (between: 0x000D1960 and 0x000D1FB0)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1BF0: ;
    eax = MEM32(0x5F6C20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1C0E; /* je: equal / zero */

loc_000D1BF9: ;
    PUSH32(esp, 0x327E70);
    edx = 8;
    PUSH32(esp, 0x000D1C08u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1C08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D1C0E: ;
    eax = MEM32(0x5F6BA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1C4C; /* je: equal / zero */

loc_000D1C17: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = 0x5F6BA4;
    PUSH32(esp, 0x000D1C26u); RECOMP_ABI_CALL(0x000D1960u, sub_000D1960); /* call 0x000D1960 */

loc_000D1C26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x5F6BA0) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000D1C4C; /* jne: not equal / not zero */

loc_000D1C37: ;
    PUSH32(esp, 0x327E48);
    edx = 8;
    PUSH32(esp, 0x000D1C46u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1C46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D1C4C: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1C60
 * Original: 0x000D1C60 - 0x000D1C6B (11 bytes, 4 insns)
 * Folder: sound (between: 0x000D1960 and 0x000D1FB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1C60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D1C67u); RECOMP_ABI_CALL(0x000D1BF0u, sub_000D1BF0); /* call 0x000D1BF0 */

loc_000D1C67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1C70
 * Original: 0x000D1C70 - 0x000D1CB9 (73 bytes, 25 insns)
 * Folder: sound (between: 0x000D1960 and 0x000D1FB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1C70: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0xFFFFFFFEu;
    MEM32(eax + 0x50) = ecx;
    MEM8(eax + 0x54) = LO8(ecx);
    MEM32(eax) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1CC0
 * Original: 0x000D1CC0 - 0x000D1D10 (80 bytes, 22 insns)
 * Folder: sound (between: 0x000D1960 and 0x000D1FB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1CC0: ;
    eax = MEM32(0x64D590);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1D0F; /* je: equal / zero */

loc_000D1CC9: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D1CDE; /* je: equal / zero */

loc_000D1CD2: ;
    esi = 0x5F6C48;
    eax = 0x5F6B48;
    goto loc_000D1CE8;

loc_000D1CDE: ;
    esi = 0x5F6C54;
    eax = 0x5F6BC8;

loc_000D1CE8: ;
    MEM32(eax) = 0;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0xFFFFFFFEu;
    if (CMP_EQ(_fa, _fb)) goto loc_000D1D0E; /* je: equal / zero */

loc_000D1CFB: ;
    PUSH32(esp, 0x000D1D00u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D1D00: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_000D1D0E: ;
    POP32(esp, esi);

loc_000D1D0F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1D10
 * Original: 0x000D1D10 - 0x000D1EF9 (489 bytes, 169 insns)
 * Folder: sound (between: 0x000D1960 and 0x000D1FB0)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D1D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1D10: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x64D590);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1D36; /* jne: not equal / not zero */

loc_000D1D1F: ;
    PUSH32(esp, 0x32747C);
    edx = 8;
    PUSH32(esp, 0x000D1D2Eu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1D2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D1D36: ;
    PUSH32(esp, esi);
    eax = 0x327E44;
    edx = edi;
    PUSH32(esp, 0x000D1D43u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000D1D43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1D57; /* je: equal / zero */

loc_000D1D47: ;
    eax = MEM32(0x5F6C20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1D57; /* je: equal / zero */

loc_000D1D50: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D1D57u); RECOMP_ABI_CALL(0x000D1890u, sub_000D1890); /* call 0x000D1890 */

loc_000D1D57: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D1D60u); RECOMP_ABI_CALL(0x000D0630u, sub_000D0630); /* call 0x000D0630 */

loc_000D1D60: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1D7D; /* jne: not equal / not zero */

loc_000D1D69: ;
    PUSH32(esp, 0x328030);
    edx = 8;
    PUSH32(esp, 0x000D1D78u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1D78: ;
    goto loc_000D1E83;

loc_000D1D7D: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1DAE; /* je: equal / zero */

loc_000D1D86: ;
    PUSH32(esp, edi);
    ecx = 1;
    PUSH32(esp, 0x000D1D91u); RECOMP_ABI_CALL(0x000D0630u, sub_000D0630); /* call 0x000D0630 */

loc_000D1D91: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1DAE; /* jne: not equal / not zero */

loc_000D1D9A: ;
    PUSH32(esp, 0x327E00);
    edx = 8;
    PUSH32(esp, 0x000D1DA9u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1DA9: ;
    goto loc_000D1E83;

loc_000D1DAE: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1DE2; /* je: equal / zero */

loc_000D1DB3: ;
    eax = MEM32(0x5F6BA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1EEF; /* jne: not equal / not zero */

loc_000D1DC0: ;
    eax = MEM32(0x5F6C20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1E1A; /* je: equal / zero */

loc_000D1DC9: ;
    PUSH32(esp, 0x327DC0);
    edx = 8;
    PUSH32(esp, 0x000D1DD8u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1DD8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D1DE2: ;
    eax = MEM32(0x5F6C20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1E1A; /* je: equal / zero */

loc_000D1DEB: ;
    eax = ebx + 0x10;
    edx = 0x5F6C24;
    PUSH32(esp, 0x000D1DF8u); RECOMP_ABI_CALL(0x000D4BE0u, sub_000D4BE0); /* call 0x000D4BE0 */

loc_000D1DF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1EEF; /* je: equal / zero */

loc_000D1E00: ;
    PUSH32(esp, 0x000D1E05u); RECOMP_ABI_CALL(0x000D1BE0u, sub_000D1BE0); /* call 0x000D1BE0 */

loc_000D1E05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1E1A; /* jne: not equal / not zero */

loc_000D1E09: ;
    PUSH32(esp, 0x327D9C);
    edx = 8;
    PUSH32(esp, 0x000D1E18u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1E18: ;
    goto loc_000D1E83;

loc_000D1E1A: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D1E2Cu); RECOMP_ABI_CALL(0x000D06E0u, sub_000D06E0); /* call 0x000D06E0 */

loc_000D1E2C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1E86; /* je: equal / zero */

loc_000D1E33: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1E58; /* je: equal / zero */

loc_000D1E3C: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D1E4Eu); RECOMP_ABI_CALL(0x000D06E0u, sub_000D06E0); /* call 0x000D06E0 */

loc_000D1E4E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1E58; /* jne: not equal / not zero */

loc_000D1E55: ;
    PUSH32(esp, ebx);
    goto loc_000D1E7E;

loc_000D1E58: ;
    esi = MEM32(ebx);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000D1E62u); RECOMP_ABI_CALL(0x000D1B30u, sub_000D1B30); /* call 0x000D1B30 */

loc_000D1E62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1EA7; /* jne: not equal / not zero */

loc_000D1E66: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D1E6Cu); RECOMP_ABI_CALL(0x000D0E10u, sub_000D0E10); /* call 0x000D0E10 */

loc_000D1E6C: ;
    eax = MEM32(0x5F6AB4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1E86; /* je: equal / zero */

loc_000D1E78: ;
    PUSH32(esp, ebp);
    eax = 1;

loc_000D1E7E: ;
    PUSH32(esp, 0x000D1E83u); RECOMP_ABI_CALL(0x000D0E10u, sub_000D0E10); /* call 0x000D0E10 */

loc_000D1E83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1E86: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D1E8Du); RECOMP_ABI_CALL(0x000D0330u, sub_000D0330); /* call 0x000D0330 */

loc_000D1E8D: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1EA0; /* je: equal / zero */

loc_000D1E96: ;
    eax = 1;
    PUSH32(esp, 0x000D1EA0u); RECOMP_ABI_CALL(0x000D0330u, sub_000D0330); /* call 0x000D0330 */

loc_000D1EA0: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D1EA7: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    eax = ebx + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_000D1ED4; /* je: equal / zero */

loc_000D1EAF: ;
    edx = 0x5F6BA4;
    MEM32(0x5F6BA0) = 1;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000D1EC0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1EC0; /* jne: not equal / not zero */

loc_000D1ECA: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D1ED4: ;
    edx = 0x5F6C24;
    MEM32(0x5F6C20) = 1;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000D1EE5: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1EE5; /* jne: not equal / not zero */

loc_000D1EEF: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1F00
 * Original: 0x000D1F00 - 0x000D1F50 (80 bytes, 17 insns)
 * Folder: sound (between: 0x000D1960 and 0x000D1FB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1F00: ;
    eax = 0x5F6B50;
    PUSH32(esp, 0x000D1F0Au); RECOMP_ABI_CALL(0x000D1C70u, sub_000D1C70); /* call 0x000D1C70 */

loc_000D1F0A: ;
    eax = 0x5F6BD0;
    PUSH32(esp, 0x000D1F14u); RECOMP_ABI_CALL(0x000D1C70u, sub_000D1C70); /* call 0x000D1C70 */

loc_000D1F14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5F6BC8) = eax;
    ecx = 0xFFFFFFFEu;
    MEM32(0x5F6C58) = eax;
    MEM32(0x5F6C5C) = eax;
    MEM32(0x5F6B48) = eax;
    MEM32(0x5F6C4C) = eax;
    MEM32(0x5F6C50) = eax;
    eax = 1;
    MEM32(0x5F6C54) = ecx;
    MEM32(0x5F6C48) = ecx;
    MEM32(0x64D590) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1F50
 * Original: 0x000D1F50 - 0x000D1FA9 (89 bytes, 28 insns)
 * Folder: sound (between: 0x000D1960 and 0x000D1FB0)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1F50: ;
    eax = MEM32(0x64D590);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1F6E; /* jne: not equal / not zero */

loc_000D1F59: ;
    PUSH32(esp, 0x3244F0);
    edx = 8;
    PUSH32(esp, 0x000D1F68u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D1F68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D1F6E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D1F74u); RECOMP_ABI_CALL(0x000D1BE0u, sub_000D1BE0); /* call 0x000D1BE0 */

loc_000D1F74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1F88; /* je: equal / zero */

loc_000D1F78: ;
    PUSH32(esp, 0x000D1F7Du); RECOMP_ABI_CALL(0x000D1C60u, sub_000D1C60); /* call 0x000D1C60 */

loc_000D1F7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1F88; /* je: equal / zero */

loc_000D1F81: ;
    esi = 1;
    goto loc_000D1F8A;

loc_000D1F88: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D1F8A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D1F91u); RECOMP_ABI_CALL(0x000D1CC0u, sub_000D1CC0); /* call 0x000D1CC0 */

loc_000D1F91: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000D1F98u); RECOMP_ABI_CALL(0x000D1CC0u, sub_000D1CC0); /* call 0x000D1CC0 */

loc_000D1F98: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    MEM32(0x64D590) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1FB0
 * Original: 0x000D1FB0 - 0x000D208D (221 bytes, 68 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D1FB7u); RECOMP_ABI_CALL(0x000D43D0u, sub_000D43D0); /* call 0x000D43D0 */

loc_000D1FB7: ;
    PUSH32(esp, 0x915);
    eax = 0x328B0C;
    PUSH32(esp, 0x000D1FC6u); RECOMP_ABI_CALL(0x000D43A0u, sub_000D43A0); /* call 0x000D43A0 */

loc_000D1FC6: ;
    eax = MEM32(0x5F6C20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1FF7; /* je: equal / zero */

loc_000D1FD2: ;
    eax = MEM32(0x5F6AB4);
    edi = MEM32(0x5F6BD4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2038; /* je: equal / zero */

loc_000D1FE3: ;
    _fa = (uint32_t)(MEM32(0x5F6BFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F6BFC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2038; /* je: equal / zero */

loc_000D1FEB: ;
    PUSH32(esp, 0x934);
    PUSH32(esp, 0x327CF0);
    goto loc_000D2026;

loc_000D1FF7: ;
    eax = MEM32(0x5F6BA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2071; /* je: equal / zero */

loc_000D2000: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(0x5F6B54);
    esi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000D2038; /* je: equal / zero */

loc_000D2014: ;
    _fa = (uint32_t)(MEM32(0x5F6B7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F6B7C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2038; /* je: equal / zero */

loc_000D201C: ;
    PUSH32(esp, 0x93D);
    PUSH32(esp, 0x327CB8);

loc_000D2026: ;
    ecx = 0x328B0C;
    edx = 0x327D2C;
    PUSH32(esp, 0x000D2035u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2035: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2038: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D204E; /* jne: not equal / not zero */

loc_000D203C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D204E; /* je: equal / zero */

loc_000D2041: ;
    PUSH32(esp, 0x000D2046u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000D2046: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D204E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D205E; /* je: equal / zero */

loc_000D2053: ;
    PUSH32(esp, 0x000D2058u); RECOMP_ABI_CALL(0x000D18E0u, sub_000D18E0); /* call 0x000D18E0 */

loc_000D2058: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2067; /* je: equal / zero */

loc_000D205E: ;
    edi = ebx;
    PUSH32(esp, 0x000D2065u); RECOMP_ABI_CALL(0x000D1B30u, sub_000D1B30); /* call 0x000D1B30 */

loc_000D2065: ;
    edi = eax;

loc_000D2067: ;
    PUSH32(esp, 0x000D206Cu); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000D206C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D2071: ;
    PUSH32(esp, 0x327D68);
    edx = 8;
    PUSH32(esp, 0x000D2080u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D2080: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D2088u); RECOMP_ABI_CALL(0x000D4690u, sub_000D4690); /* call 0x000D4690 */

loc_000D2088: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2090
 * Original: 0x000D2090 - 0x000D20DD (77 bytes, 28 insns)
 * Folder: sound (between: 0x000D1FB0 and 0x000D20E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2090: ;
    PUSH32(esp, esi);
    esi = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D209Cu); RECOMP_ABI_CALL(0x000D16A0u, sub_000D16A0); /* call 0x000D16A0 */

loc_000D209C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D20DB; /* jne: not equal / not zero */

loc_000D20A0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    PUSH32(esp, 0x000D20ACu); RECOMP_ABI_CALL(0x000D16A0u, sub_000D16A0); /* call 0x000D16A0 */

loc_000D20AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D20DB; /* jne: not equal / not zero */

loc_000D20B0: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D20D9; /* je: equal / zero */

loc_000D20B9: ;
    ecx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D20C5u); RECOMP_ABI_CALL(0x000D16A0u, sub_000D16A0); /* call 0x000D16A0 */

loc_000D20C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D20DB; /* jne: not equal / not zero */

loc_000D20C9: ;
    ecx = 1;
    eax = ecx;
    PUSH32(esp, 0x000D20D5u); RECOMP_ABI_CALL(0x000D16A0u, sub_000D16A0); /* call 0x000D16A0 */

loc_000D20D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D20DB; /* jne: not equal / not zero */

loc_000D20D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D20DB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D20E0
 * Original: 0x000D20E0 - 0x000D22DF (511 bytes, 153 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D20E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D20E0: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x70) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x29) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2D) = eax;
    MEM32(esp + 0x4D) = ecx;
    MEM32(esp + 0x31) = eax;
    MEM32(esp + 0x51) = ecx;
    MEM32(esp + 0x35) = eax;
    MEM32(esp + 0x55) = ecx;
    MEM32(esp + 0x39) = eax;
    MEM32(esp + 0x59) = ecx;
    MEM32(esp + 0x3D) = eax;
    MEM32(esp + 0x41) = eax;
    MEM32(esp + 0x5D) = ecx;
    MEM32(esp + 0x45) = eax;
    MEM8(esp + 0x4C) = LO8(eax);
    eax = MEM32(0x64D590);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x61) = ecx;
    MEM32(esp + 0x65) = ecx;
    MEM8(esp + 0x28) = 0;
    MEM32(esp + 0x69) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D22D2; /* je: equal / zero */

loc_000D2146: ;
    PUSH32(esp, 0x000D214Bu); RECOMP_ABI_CALL(0x000D18C0u, sub_000D18C0); /* call 0x000D18C0 */

loc_000D214B: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2170; /* jne: not equal / not zero */

loc_000D2154: ;
    PUSH32(esp, 0xA46);
    PUSH32(esp, 0x327C5C);
    edx = 0x327C78;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D216Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D216D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2170: ;
    eax = MEM32(0x5F6B84);
    edx = MEM32(0x5F6B5C);
    ecx = MEM32(0x5F6BDC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5F6C20);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x5F6BA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x5F6C04);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D21EF; /* je: equal / zero */

loc_000D21B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D21B4: ;
    SET_LO8(ecx, MEM8(eax + 0x5F6BA4));
    MEM8(esp + eax + 0x38) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D21B4; /* jne: not equal / not zero */

loc_000D21C3: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D21CFu); RECOMP_ABI_CALL(0x000D0630u, sub_000D0630); /* call 0x000D0630 */

loc_000D21CF: ;
    ecx = MEM32(eax + 0xC);
    edx = esp + 0x3C;
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, edx);
    ecx = 1;
    PUSH32(esp, 0x000D21E5u); RECOMP_ABI_CALL(0x000D0630u, sub_000D0630); /* call 0x000D0630 */

loc_000D21E5: ;
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;

loc_000D21EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D222A; /* je: equal / zero */

loc_000D21F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D21F5: ;
    SET_LO8(ecx, MEM8(eax + 0x5F6C24));
    MEM8(esp + eax + 0x5C) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D21F5; /* jne: not equal / not zero */

loc_000D2204: ;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D2210u); RECOMP_ABI_CALL(0x000D0630u, sub_000D0630); /* call 0x000D0630 */

loc_000D2210: ;
    edi = MEM32(eax + 0xC);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ecx = 1;
    PUSH32(esp, 0x000D2222u); RECOMP_ABI_CALL(0x000D0630u, sub_000D0630); /* call 0x000D0630 */

loc_000D2222: ;
    esi = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D2232;

loc_000D222A: ;
    esi = MEM32(esp + 0x34);
    edi = MEM32(esp + 0x30);

loc_000D2232: ;
    ebp = MEM32(0x5F6BD4);
    ebx = MEM32(0x5F6B54);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000D2245u); RECOMP_ABI_CALL(0x000D1B90u, sub_000D1B90); /* call 0x000D1B90 */

loc_000D2245: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2256; /* je: equal / zero */

loc_000D224C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000D2253u); RECOMP_ABI_CALL(0x000D1BF0u, sub_000D1BF0); /* call 0x000D1BF0 */

loc_000D2253: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2256: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D225Du); RECOMP_ABI_CALL(0x000D0330u, sub_000D0330); /* call 0x000D0330 */

loc_000D225D: ;
    eax = MEM32(0x5F6AB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2270; /* je: equal / zero */

loc_000D2266: ;
    eax = 1;
    PUSH32(esp, 0x000D2270u); RECOMP_ABI_CALL(0x000D0330u, sub_000D0330); /* call 0x000D0330 */

loc_000D2270: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2298; /* je: equal / zero */

loc_000D2278: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x48;
    PUSH32(esp, 0x000D2295u); RECOMP_ABI_CALL(0x000D1D10u, sub_000D1D10); /* call 0x000D1D10 */

loc_000D2295: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2298: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D22A2; /* je: equal / zero */

loc_000D229D: ;
    PUSH32(esp, 0x000D22A2u); RECOMP_ABI_CALL(0x000D1FB0u, sub_000D1FB0); /* call 0x000D1FB0 */

loc_000D22A2: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D22C2; /* je: equal / zero */

loc_000D22AA: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, 0x000D22BFu); RECOMP_ABI_CALL(0x000D1D10u, sub_000D1D10); /* call 0x000D1D10 */

loc_000D22BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D22C2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D22CE; /* je: equal / zero */

loc_000D22C7: ;
    ebx = ebp;
    PUSH32(esp, 0x000D22CEu); RECOMP_ABI_CALL(0x000D1FB0u, sub_000D1FB0); /* call 0x000D1FB0 */

loc_000D22CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000D22D2: ;
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, 0x000D22DBu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D22DB: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D22E0
 * Original: 0x000D22E0 - 0x000D234B (107 bytes, 35 insns)
 * Folder: sound (source: sndldmap.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D22E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D22E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2304; /* jne: not equal / not zero */

loc_000D22E5: ;
    PUSH32(esp, 0xAB2);
    PUSH32(esp, 0x327C00);
    edx = 0x327C20;
    ecx = 0x328B0C;
    PUSH32(esp, 0x000D22FEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D22FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D2304: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = 0x5F6B50;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000D2312; /* js: sign (negative) */

loc_000D230D: ;
    edx = 0x5F6BD0;

loc_000D2312: ;
    ecx = eax;
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = edx + 0x38;
    if (CMP_NE(_fa, _fb)) goto loc_000D2329; /* jne: not equal / not zero */

loc_000D2326: ;
    ecx = edx + 0x10;

loc_000D2329: ;
    edx = MEM32(ecx);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = eax;
    if ((_fa != 0)) goto loc_000D2347; /* jne: not equal / not zero */

loc_000D2335: ;
    PUSH32(esp, 0x327BD4);
    edx = 8;
    PUSH32(esp, 0x000D2344u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D2344: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2347: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2350
 * Original: 0x000D2350 - 0x000D239D (77 bytes, 27 insns)
 * Folder: sound (between: 0x000D22E0 and 0x000D24A0)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2350: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = 0x5F6B50;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000D235E; /* js: sign (negative) */

loc_000D2359: ;
    edx = 0x5F6BD0;

loc_000D235E: ;
    ecx = eax;
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2374; /* je: equal / zero */

loc_000D236F: ;
    ecx = MEM32(edx + 0x34);
    goto loc_000D2377;

loc_000D2374: ;
    ecx = MEM32(edx + 0xC);

loc_000D2377: ;
    edx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = eax;
    if ((_fa != 0)) goto loc_000D2399; /* jne: not equal / not zero */

loc_000D2387: ;
    PUSH32(esp, 0x327BB4);
    edx = 8;
    PUSH32(esp, 0x000D2396u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D2396: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2399: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D23A0
 * Original: 0x000D23A0 - 0x000D23AE (14 bytes, 7 insns)
 * Folder: sound (between: 0x000D22E0 and 0x000D24A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D23A0(void)
{

loc_000D23A0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000D23AAu); RECOMP_ABI_CALL(0x000D23E0u, sub_000D23E0); /* call 0x000D23E0 */

loc_000D23AA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D23B0
 * Original: 0x000D23B0 - 0x000D23D7 (39 bytes, 11 insns)
 * Folder: sound (between: 0x000D22E0 and 0x000D24A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D23B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D23B0: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D23C3; /* je: equal / zero */

loc_000D23B7: ;
    PUSH32(esp, 0x000D23BCu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D23BC: ;
    MEM32(esi + 0x44) = 0;

loc_000D23C3: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D23D6; /* je: equal / zero */

loc_000D23CA: ;
    PUSH32(esp, 0x000D23CFu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D23CF: ;
    MEM32(esi + 0x4C) = 0;

loc_000D23D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D23E0
 * Original: 0x000D23E0 - 0x000D249B (187 bytes, 59 insns)
 * Folder: sound (between: 0x000D22E0 and 0x000D24A0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D23E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D23E0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x18) = eax;
    eax = 0xFFFFFFFEu;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 1;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), edi (32-bit) */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = edi;
    MEM32(esi + 0x6C) = edi;
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x5C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x50) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D2453; /* je: equal / zero */

loc_000D2449: ;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x4C) = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000D2453: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2465; /* jne: not equal / not zero */

loc_000D2458: ;
    eax = 0x8000;
    PUSH32(esp, 0x000D2462u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D2462: ;
    MEM32(esi + 0x44) = eax;

loc_000D2465: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2477; /* jne: not equal / not zero */

loc_000D246A: ;
    eax = 0x8000;
    PUSH32(esp, 0x000D2474u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D2474: ;
    MEM32(esi + 0x4C) = eax;

loc_000D2477: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2481; /* je: equal / zero */

loc_000D247C: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2497; /* jne: not equal / not zero */

loc_000D2481: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000D2490u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D2490: ;
    MEM32(esi + 4) = 0x13;

loc_000D2497: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D24A0
 * Original: 0x000D24A0 - 0x000D2531 (145 bytes, 41 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D24A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D24A0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D24C0; /* jne: not equal / not zero */

loc_000D24A7: ;
    PUSH32(esp, 0x73);
    PUSH32(esp, 0x3296B4);
    edx = 0x3296F8;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D24BDu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D24BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D24C0: ;
    PUSH32(esp, 0x000D24C5u); RECOMP_ABI_CALL(0x000D2540u, sub_000D2540); /* call 0x000D2540 */

loc_000D24C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D24E2; /* jne: not equal / not zero */

loc_000D24C9: ;
    PUSH32(esp, 0x74);
    PUSH32(esp, 0x329688);
    edx = 0x329694;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D24DFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D24DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D24E2: ;
    _fa = (uint32_t)(MEM32(edi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x44), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2501; /* je: equal / zero */

loc_000D24E8: ;
    PUSH32(esp, 0x75);
    PUSH32(esp, 0x329658);
    edx = 0x324880;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D24FEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D24FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2501: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D251F; /* je: equal / zero */

loc_000D2506: ;
    PUSH32(esp, 0x76);
    PUSH32(esp, 0x329648);
    edx = 0x324880;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D251Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D251C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D251F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D2526u); RECOMP_ABI_CALL(0x000D23E0u, sub_000D23E0); /* call 0x000D23E0 */

loc_000D2526: ;
    MEM32(esi) = 0;
    MEM32(esi + 0xC) = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2540
 * Original: 0x000D2540 - 0x000D256B (43 bytes, 13 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2540: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2568; /* je: equal / zero */

loc_000D2545: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2568; /* je: equal / zero */

loc_000D254C: ;
    PUSH32(esp, 0x85);
    PUSH32(esp, 0x3295E0);
    edx = 0x3295F0;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2565u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2565: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2568: ;
    eax = MEM32(esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2570
 * Original: 0x000D2570 - 0x000D25AC (60 bytes, 24 insns)
 * Folder: sound (between: 0x000D2540 and 0x000D25B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2570: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000D2578u); RECOMP_ABI_CALL(0x000D2540u, sub_000D2540); /* call 0x000D2540 */

loc_000D2578: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2580; /* je: equal / zero */

loc_000D257C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D2580: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D259F; /* je: equal / zero */

loc_000D2588: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D2592; /* je: equal / zero */

loc_000D258B: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D2592: ;
    MEM32(esi) = 1;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D259F: ;
    MEM32(esi) = 1;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D25B0
 * Original: 0x000D25B0 - 0x000D26BC (268 bytes, 76 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D25B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D25B0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000D25B8u); RECOMP_ABI_CALL(0x000D2540u, sub_000D2540); /* call 0x000D2540 */

loc_000D25B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D26BA; /* jne: not equal / not zero */

loc_000D25C0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D2693; /* ja: above (unsigned >) */

loc_000D25CC: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD26BC); /* switch: 22 entries, 21 targets */
    if (_jt == 0x000D25D3u) goto loc_000D25D3;
    if (_jt == 0x000D25DDu) goto loc_000D25DD;
    if (_jt == 0x000D25E8u) goto loc_000D25E8;
    if (_jt == 0x000D25F2u) goto loc_000D25F2;
    if (_jt == 0x000D25FEu) goto loc_000D25FE;
    if (_jt == 0x000D260Au) goto loc_000D260A;
    if (_jt == 0x000D2614u) goto loc_000D2614;
    if (_jt == 0x000D2620u) goto loc_000D2620;
    if (_jt == 0x000D262Cu) goto loc_000D262C;
    if (_jt == 0x000D2635u) goto loc_000D2635;
    if (_jt == 0x000D263Cu) goto loc_000D263C;
    if (_jt == 0x000D2645u) goto loc_000D2645;
    if (_jt == 0x000D264Eu) goto loc_000D264E;
    if (_jt == 0x000D2657u) goto loc_000D2657;
    if (_jt == 0x000D265Eu) goto loc_000D265E;
    if (_jt == 0x000D2667u) goto loc_000D2667;
    if (_jt == 0x000D2670u) goto loc_000D2670;
    if (_jt == 0x000D2678u) goto loc_000D2678;
    if (_jt == 0x000D2683u) goto loc_000D2683;
    if (_jt == 0x000D268Au) goto loc_000D268A;
    if (_jt == 0x000D26AFu) goto loc_000D26AF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D25D3: ;
    PUSH32(esp, 0x000D25D8u); RECOMP_ABI_CALL(0x000D2730u, sub_000D2730); /* call 0x000D2730 */

loc_000D25D8: ;
    goto loc_000D26AF;

loc_000D25DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D25E3u); RECOMP_ABI_CALL(0x000D2790u, sub_000D2790); /* call 0x000D2790 */

loc_000D25E3: ;
    goto loc_000D26AF;

loc_000D25E8: ;
    PUSH32(esp, 0x000D25EDu); RECOMP_ABI_CALL(0x000D28D0u, sub_000D28D0); /* call 0x000D28D0 */

loc_000D25ED: ;
    goto loc_000D26AF;

loc_000D25F2: ;
    eax = esi;
    PUSH32(esp, 0x000D25F9u); RECOMP_ABI_CALL(0x000D2C50u, sub_000D2C50); /* call 0x000D2C50 */

loc_000D25F9: ;
    goto loc_000D26AF;

loc_000D25FE: ;
    ecx = esi;
    PUSH32(esp, 0x000D2605u); RECOMP_ABI_CALL(0x000D2C80u, sub_000D2C80); /* call 0x000D2C80 */

loc_000D2605: ;
    goto loc_000D26AF;

loc_000D260A: ;
    PUSH32(esp, 0x000D260Fu); RECOMP_ABI_CALL(0x000D2DB0u, sub_000D2DB0); /* call 0x000D2DB0 */

loc_000D260F: ;
    goto loc_000D26AF;

loc_000D2614: ;
    eax = esi;
    PUSH32(esp, 0x000D261Bu); RECOMP_ABI_CALL(0x000D2F50u, sub_000D2F50); /* call 0x000D2F50 */

loc_000D261B: ;
    goto loc_000D26AF;

loc_000D2620: ;
    eax = esi;
    PUSH32(esp, 0x000D2627u); RECOMP_ABI_CALL(0x000D2F80u, sub_000D2F80); /* call 0x000D2F80 */

loc_000D2627: ;
    goto loc_000D26AF;

loc_000D262C: ;
    eax = esi;
    PUSH32(esp, 0x000D2633u); RECOMP_ABI_CALL(0x000D3190u, sub_000D3190); /* call 0x000D3190 */

loc_000D2633: ;
    goto loc_000D26AF;

loc_000D2635: ;
    PUSH32(esp, 0x000D263Au); RECOMP_ABI_CALL(0x000D31C0u, sub_000D31C0); /* call 0x000D31C0 */

loc_000D263A: ;
    goto loc_000D26AF;

loc_000D263C: ;
    eax = esi;
    PUSH32(esp, 0x000D2643u); RECOMP_ABI_CALL(0x000D3330u, sub_000D3330); /* call 0x000D3330 */

loc_000D2643: ;
    goto loc_000D26AF;

loc_000D2645: ;
    eax = esi;
    PUSH32(esp, 0x000D264Cu); RECOMP_ABI_CALL(0x000D3360u, sub_000D3360); /* call 0x000D3360 */

loc_000D264C: ;
    goto loc_000D26AF;

loc_000D264E: ;
    eax = esi;
    PUSH32(esp, 0x000D2655u); RECOMP_ABI_CALL(0x000D34E0u, sub_000D34E0); /* call 0x000D34E0 */

loc_000D2655: ;
    goto loc_000D26AF;

loc_000D2657: ;
    PUSH32(esp, 0x000D265Cu); RECOMP_ABI_CALL(0x000D3510u, sub_000D3510); /* call 0x000D3510 */

loc_000D265C: ;
    goto loc_000D26AF;

loc_000D265E: ;
    eax = esi;
    PUSH32(esp, 0x000D2665u); RECOMP_ABI_CALL(0x000D36B0u, sub_000D36B0); /* call 0x000D36B0 */

loc_000D2665: ;
    goto loc_000D26AF;

loc_000D2667: ;
    eax = esi;
    PUSH32(esp, 0x000D266Eu); RECOMP_ABI_CALL(0x000D3970u, sub_000D3970); /* call 0x000D3970 */

loc_000D266E: ;
    goto loc_000D26AF;

loc_000D2670: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2676u); RECOMP_ABI_CALL(0x000D3B60u, sub_000D3B60); /* call 0x000D3B60 */

loc_000D2676: ;
    goto loc_000D26AF;

loc_000D2678: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000D2680u); RECOMP_ABI_CALL(0x000D3D30u, sub_000D3D30); /* call 0x000D3D30 */

loc_000D2680: ;
    POP32(esp, edi);
    goto loc_000D26AF;

loc_000D2683: ;
    PUSH32(esp, 0x000D2688u); RECOMP_ABI_CALL(0x000D3DF0u, sub_000D3DF0); /* call 0x000D3DF0 */

loc_000D2688: ;
    goto loc_000D26AF;

loc_000D268A: ;
    eax = esi;
    PUSH32(esp, 0x000D2691u); RECOMP_ABI_CALL(0x000D3F20u, sub_000D3F20); /* call 0x000D3F20 */

loc_000D2691: ;
    goto loc_000D26AF;

loc_000D2693: ;
    PUSH32(esp, 0xE5);
    PUSH32(esp, 0x324878);
    edx = 0x3295C4;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D26ACu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D26AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D26AF: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D26BA; /* jne: not equal / not zero */

loc_000D26B5: ;
    PUSH32(esp, 0x000D26BAu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D26BA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2720
 * Original: 0x000D2720 - 0x000D272E (14 bytes, 4 insns)
 * Folder: sound (between: 0x000D25B0 and 0x000D2730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2720: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D272D; /* je: equal / zero */

loc_000D2726: ;
    MEM32(eax + 4) = 0x13;

loc_000D272D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D2730
 * Original: 0x000D2730 - 0x000D2787 (87 bytes, 26 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000D2730: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2753; /* je: equal / zero */

loc_000D2737: ;
    PUSH32(esp, 0x10D);
    PUSH32(esp, 0x329570);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2750u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2750: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2753: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D2776; /* jne: not equal / not zero */

loc_000D275A: ;
    PUSH32(esp, 0x110);
    PUSH32(esp, 0x329558);
    edx = 0x329560;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2773u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2773: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2776: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000D2790
 * Original: 0x000D2790 - 0x000D28CC (316 bytes, 87 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2790: ;
    _fb = (uint32_t)(0x4AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4AC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x4B4);
    MEM32(esp + 0x4AC) = eax;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D27CD; /* jne: not equal / not zero */

loc_000D27B1: ;
    PUSH32(esp, 0x122);
    PUSH32(esp, 0x329558);
    edx = 0x329560;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D27CAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D27CA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D27CD: ;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D27EF; /* je: equal / zero */

loc_000D27D3: ;
    PUSH32(esp, 0x123);
    PUSH32(esp, 0x329538);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D27ECu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D27EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D27EF: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x25;
    edi = esp + 0xC;
    PUSH32(esp, 0x000D2805u); RECOMP_ABI_CALL(0x000D4C50u, sub_000D4C50); /* call 0x000D4C50 */

loc_000D2805: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000D2806: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2806; /* jne: not equal / not zero */

loc_000D280E: ;
    eax = MEM32(0x329530);
    SET_LO8(ecx, MEM8(0x329534));
    MEM32(edi) = eax;
    MEM8(edi + 4) = LO8(ecx);
    eax = esp + 0xC;
    POP32(esp, edi);
    edx = eax + 1;
    POP32(esp, esi);

loc_000D2827: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2827; /* jne: not equal / not zero */

loc_000D282E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = esp + eax + 7;
    PUSH32(esp, 0x000D283Au); RECOMP_ABI_CALL(0x000CF830u, sub_000CF830); /* call 0x000CF830 */

loc_000D283A: ;
    edx = esp + 0x30;
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    ebx = esp + 0x10;
    PUSH32(esp, 0x000D284Du); RECOMP_ABI_CALL(0x000CF150u, sub_000CF150); /* call 0x000CF150 */

loc_000D284D: ;
    eax = esp + 0x38;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D2859u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_000D2859: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 0x18) = eax;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000D28AF; /* jne: not equal / not zero */

loc_000D2865: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0xB0;
    PUSH32(esp, 0x329508);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D287Eu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D287E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xAC;
    edx = 0xC;
    PUSH32(esp, 0x000D2892u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D2892: ;
    MEM32(ebp + 4) = 0x13;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x4A8);
    PUSH32(esp, 0x000D28A6u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D28A6: ;
    _fb = (uint32_t)(0x4AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4AC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D28AF: ;
    ecx = MEM32(esp + 0x4AC);
    MEM32(ebp + 4) = 2;
    POP32(esp, ebp);
    PUSH32(esp, 0x000D28C3u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D28C3: ;
    _fb = (uint32_t)(0x4AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4AC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D28D0
 * Original: 0x000D28D0 - 0x000D2A21 (337 bytes, 85 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D28D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D28D0: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D28F2; /* je: equal / zero */

loc_000D28D6: ;
    PUSH32(esp, 0x145);
    PUSH32(esp, 0x3294E0);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D28EFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D28EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D28F2: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2914; /* jne: not equal / not zero */

loc_000D28F8: ;
    PUSH32(esp, 0x146);
    PUSH32(esp, 0x3294AC);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2911u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2911: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2914: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2937; /* je: equal / zero */

loc_000D291B: ;
    PUSH32(esp, 0x147);
    PUSH32(esp, 0x329490);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2934u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2934: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2937: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D295A; /* je: equal / zero */

loc_000D293E: ;
    PUSH32(esp, 0x148);
    PUSH32(esp, 0x329470);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2957u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2957: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D295A: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D297D; /* je: equal / zero */

loc_000D2961: ;
    PUSH32(esp, 0x149);
    PUSH32(esp, 0x329450);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D297Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D297A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D297D: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D29A0; /* je: equal / zero */

loc_000D2984: ;
    PUSH32(esp, 0x14A);
    PUSH32(esp, 0x329438);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D299Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D299D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D29A0: ;
    eax = 0x1C;
    PUSH32(esp, 0x000D29AAu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D29AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D29C8; /* jne: not equal / not zero */

loc_000D29B1: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000D29C0u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D29C0: ;
    MEM32(esi + 4) = 0x13;
    esp += 4; return; /* ret */

loc_000D29C8: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D29EB; /* je: equal / zero */

loc_000D29CF: ;
    PUSH32(esp, 0x156);
    PUSH32(esp, 0x329490);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D29E8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D29E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D29EB: ;
    eax = MEM32(esi + 0x14);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x24) = 0x1C;
    MEM32(esi + 0x1C) = 0;
    PUSH32(esp, 0x000D2A10u); RECOMP_ABI_CALL(0x000ED800u, sub_000ED800); /* call 0x000ED800 */

loc_000D2A10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 3;
    eax = esi;
    g_seh_ebp = ebp; sub_000D2C50(); return; /* tail jmp 0x000D2C50 */

}

/**
 * sub_000D2A30
 * Original: 0x000D2A30 - 0x000D2C34 (516 bytes, 146 insns)
 * Folder: sound (between: 0x000D28D0 and 0x000D2A50)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2A30: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x104) = eax;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D2C20; /* jbe: below or equal (unsigned <=) */

loc_000D2A50: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2A72; /* jne: not equal / not zero */

loc_000D2A56: ;
    PUSH32(esp, 0x16B);
    PUSH32(esp, 0x3294AC);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2A6Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2A6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2A72: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2A93; /* jne: not equal / not zero */

loc_000D2A77: ;
    PUSH32(esp, 0x16C);
    PUSH32(esp, 0x329418);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2A90u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2A90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2A93: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2AAFu); RECOMP_ABI_CALL(0x000ED990u, sub_000ED990); /* call 0x000ED990 */

loc_000D2AAF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D2BEF; /* ja: above (unsigned >) */

loc_000D2ABB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD2C34); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000D2AC2u) goto loc_000D2AC2;
    if (_jt == 0x000D2B1Cu) goto loc_000D2B1C;
    if (_jt == 0x000D2B85u) goto loc_000D2B85;
    if (_jt == 0x000D2BB7u) goto loc_000D2BB7;
    if (_jt == 0x000D2BEFu) goto loc_000D2BEF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D2AC2: ;
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2AE6; /* je: equal / zero */

loc_000D2ACA: ;
    PUSH32(esp, 0x175);
    PUSH32(esp, 0x3293F4);
    edx = 0x325305;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2AE3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2AE3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2AE6: ;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    MEM32(esi + 0x28) = edx;
    edx = MEM32(esi + 0x2C);
    MEM32(esi + 0x20) = ecx;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x2C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000D2C1E; /* jne: not equal / not zero */

loc_000D2B0B: ;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x30) = ebp;
    MEM32(esi + 0x2C) = ebp;
    goto loc_000D2C17;

loc_000D2B1C: ;
    eax = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D2B50; /* je: equal / zero */

loc_000D2B34: ;
    PUSH32(esp, 0x185);
    PUSH32(esp, 0x3293F4);
    edx = 0x325305;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2B4Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2B4D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2B50: ;
    edx = MEM32(esi + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2B74; /* je: equal / zero */

loc_000D2B58: ;
    PUSH32(esp, 0x186);
    PUSH32(esp, 0x3293C4);
    edx = 0x325305;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2B71u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2B71: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2B74: ;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x30) = ebp;
    MEM32(esi + 0x2C) = ebp;
    goto loc_000D2C17;

loc_000D2B85: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x2C) = ecx;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000D2BB0u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D2BB0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D2BB7: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2C1E; /* je: equal / zero */

loc_000D2BBD: ;
    PUSH32(esp, 0x193);
    PUSH32(esp, 0x3293AC);
    edx = 0x325305;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2BD6u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2BD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000D2BE8u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D2BE8: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D2BEF: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, 0x329370);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D2BFFu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D2BFF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    edx = 0xD;
    PUSH32(esp, 0x000D2C10u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D2C10: ;
    MEM32(esi + 4) = 0x13;

loc_000D2C17: ;
    MEM32(esi + 0x1C) = 1;

loc_000D2C1E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000D2C20: ;
    ecx = MEM32(esp + 0x108);
    POP32(esp, ebp);
    PUSH32(esp, 0x000D2C2Du); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D2C2D: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2A50
 * Original: 0x000D2A50 - 0x000D2C34 (484 bytes, 138 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2A50: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2A72; /* jne: not equal / not zero */

loc_000D2A56: ;
    PUSH32(esp, 0x16B);
    PUSH32(esp, 0x3294AC);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2A6Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2A6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2A72: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2A93; /* jne: not equal / not zero */

loc_000D2A77: ;
    PUSH32(esp, 0x16C);
    PUSH32(esp, 0x329418);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2A90u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2A90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2A93: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D2AAFu); RECOMP_ABI_CALL(0x000ED990u, sub_000ED990); /* call 0x000ED990 */

loc_000D2AAF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D2BEF; /* ja: above (unsigned >) */

loc_000D2ABB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD2C34); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000D2AC2u) goto loc_000D2AC2;
    if (_jt == 0x000D2B1Cu) goto loc_000D2B1C;
    if (_jt == 0x000D2B85u) goto loc_000D2B85;
    if (_jt == 0x000D2BB7u) goto loc_000D2BB7;
    if (_jt == 0x000D2BEFu) goto loc_000D2BEF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D2AC2: ;
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2AE6; /* je: equal / zero */

loc_000D2ACA: ;
    PUSH32(esp, 0x175);
    PUSH32(esp, 0x3293F4);
    edx = 0x325305;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2AE3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2AE3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2AE6: ;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    MEM32(esi + 0x28) = edx;
    edx = MEM32(esi + 0x2C);
    MEM32(esi + 0x20) = ecx;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x2C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000D2C1E; /* jne: not equal / not zero */

loc_000D2B0B: ;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x30) = ebp;
    MEM32(esi + 0x2C) = ebp;
    goto loc_000D2C17;

loc_000D2B1C: ;
    eax = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D2B50; /* je: equal / zero */

loc_000D2B34: ;
    PUSH32(esp, 0x185);
    PUSH32(esp, 0x3293F4);
    edx = 0x325305;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2B4Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2B4D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2B50: ;
    edx = MEM32(esi + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2B74; /* je: equal / zero */

loc_000D2B58: ;
    PUSH32(esp, 0x186);
    PUSH32(esp, 0x3293C4);
    edx = 0x325305;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2B71u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2B71: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2B74: ;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x30) = ebp;
    MEM32(esi + 0x2C) = ebp;
    goto loc_000D2C17;

loc_000D2B85: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x2C) = ecx;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000D2BB0u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D2BB0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D2BB7: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2C1E; /* je: equal / zero */

loc_000D2BBD: ;
    PUSH32(esp, 0x193);
    PUSH32(esp, 0x3293AC);
    edx = 0x325305;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2BD6u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2BD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000D2BE8u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D2BE8: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D2BEF: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, 0x329370);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D2BFFu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D2BFF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    edx = 0xD;
    PUSH32(esp, 0x000D2C10u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D2C10: ;
    MEM32(esi + 4) = 0x13;

loc_000D2C17: ;
    MEM32(esi + 0x1C) = 1;

loc_000D2C1E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x108);
    POP32(esp, ebp);
    PUSH32(esp, 0x000D2C2Du); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D2C2D: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2C50
 * Original: 0x000D2C50 - 0x000D2C76 (38 bytes, 14 insns)
 * Folder: sound (between: 0x000D2A50 and 0x000D2C80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2C50: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000D2C58u); RECOMP_ABI_CALL(0x000D2A30u, sub_000D2A30); /* call 0x000D2A30 */

loc_000D2C58: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2C74; /* je: equal / zero */

loc_000D2C5E: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2C74; /* je: equal / zero */

loc_000D2C65: ;
    MEM32(esi + 4) = 4;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D2C80(); return; /* tail jmp 0x000D2C80 */

loc_000D2C74: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2C80
 * Original: 0x000D2C80 - 0x000D2DAA (298 bytes, 79 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2C80: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x410) = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2CB7; /* je: equal / zero */

loc_000D2C9B: ;
    PUSH32(esp, 0x1D1);
    PUSH32(esp, 0x329348);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2CB4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2CB4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2CB7: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2CDA; /* jne: not equal / not zero */

loc_000D2CBE: ;
    PUSH32(esp, 0x1D2);
    PUSH32(esp, 0x329330);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2CD7u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2CD7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2CDA: ;
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    ecx = esp + 8;
    ebx = esp + 0xC;
    PUSH32(esp, 0x000D2CECu); RECOMP_ABI_CALL(0x000CBCB0u, sub_000CBCB0); /* call 0x000CBCB0 */

loc_000D2CEC: ;
    eax = MEM32(esp + 0xC);
    ebx = MEM32(esp + 8);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000D2D45; /* je: equal / zero */

loc_000D2D03: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x329304);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D2D19u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D2D19: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    edx = 9;
    PUSH32(esp, 0x000D2D2Au); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D2D2A: ;
    MEM32(esi + 4) = 0x13;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x40C);
    PUSH32(esp, 0x000D2D3Eu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D2D3E: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D2D45: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2D68; /* jne: not equal / not zero */

loc_000D2D4C: ;
    PUSH32(esp, 0x1E1);
    PUSH32(esp, 0x329558);
    edx = 0x3292E0;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2D65u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2D65: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2D68: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2D81; /* je: equal / zero */

loc_000D2D72: ;
    PUSH32(esp, 0x000D2D77u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D2D77: ;
    edx = MEM32(esi + 0xC);
    MEM32(edx + 0x30) = 0;

loc_000D2D81: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 0x30) = ecx;
    MEM32(esi + 4) = 5;
    PUSH32(esp, 0x000D2D96u); RECOMP_ABI_CALL(0x000D2DB0u, sub_000D2DB0); /* call 0x000D2DB0 */

loc_000D2D96: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, esi);
    PUSH32(esp, 0x000D2DA3u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D2DA3: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2D48
 * Original: 0x000D2D48 - 0x000D2DAA (98 bytes, 25 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2D48(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2D48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2D68; /* jne: not equal / not zero */

loc_000D2D4C: ;
    PUSH32(esp, 0x1E1);
    PUSH32(esp, 0x329558);
    edx = 0x3292E0;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2D65u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2D65: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2D68: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2D81; /* je: equal / zero */

loc_000D2D72: ;
    PUSH32(esp, 0x000D2D77u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D2D77: ;
    edx = MEM32(esi + 0xC);
    MEM32(edx + 0x30) = 0;

loc_000D2D81: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 0x30) = ecx;
    MEM32(esi + 4) = 5;
    PUSH32(esp, 0x000D2D96u); RECOMP_ABI_CALL(0x000D2DB0u, sub_000D2DB0); /* call 0x000D2DB0 */

loc_000D2D96: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, esi);
    PUSH32(esp, 0x000D2DA3u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D2DA3: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D2DB0
 * Original: 0x000D2DB0 - 0x000D2F43 (403 bytes, 118 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2DB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2DD4; /* jne: not equal / not zero */

loc_000D2DB8: ;
    PUSH32(esp, 0x1F5);
    PUSH32(esp, 0x329558);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2DD1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2DD1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2DD4: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2DF6; /* je: equal / zero */

loc_000D2DDA: ;
    PUSH32(esp, 0x1F6);
    PUSH32(esp, 0x3292B8);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2DF3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2DF3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2DF6: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2E18; /* jne: not equal / not zero */

loc_000D2DFC: ;
    PUSH32(esp, 0x1F7);
    PUSH32(esp, 0x3294AC);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2E15u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2E15: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2E18: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2E3B; /* je: equal / zero */

loc_000D2E1F: ;
    PUSH32(esp, 0x1F8);
    PUSH32(esp, 0x329490);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2E38u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2E38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2E3B: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2E5E; /* je: equal / zero */

loc_000D2E42: ;
    PUSH32(esp, 0x1F9);
    PUSH32(esp, 0x329298);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2E5Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2E5B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2E5E: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2E81; /* je: equal / zero */

loc_000D2E65: ;
    PUSH32(esp, 0x1FA);
    PUSH32(esp, 0x329470);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2E7Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2E7E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2E81: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x30);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x78);
    ebp = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(ecx + 0x34);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x64);
    ebp = ebp << 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000D2EDC; /* jne: not equal / not zero */

loc_000D2EAA: ;
    eax = edi;
    PUSH32(esp, 0x000D2EB1u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D2EB1: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2EDC; /* jne: not equal / not zero */

loc_000D2EC1: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000D2ED0u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D2ED0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 4) = 0x13;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D2EDC: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2EFF; /* je: equal / zero */

loc_000D2EE3: ;
    PUSH32(esp, 0x20C);
    PUSH32(esp, 0x329490);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2EFCu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2EFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2EFF: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x34);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x1C) = 0;
    PUSH32(esp, 0x000D2F2Cu); RECOMP_ABI_CALL(0x000ED800u, sub_000ED800); /* call 0x000ED800 */

loc_000D2F2C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 4) = 6;
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000D2F50(); return; /* tail jmp 0x000D2F50 */

}

/**
 * sub_000D2F50
 * Original: 0x000D2F50 - 0x000D2F76 (38 bytes, 14 insns)
 * Folder: sound (between: 0x000D2DB0 and 0x000D2F80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2F50: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000D2F58u); RECOMP_ABI_CALL(0x000D2A30u, sub_000D2A30); /* call 0x000D2A30 */

loc_000D2F58: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2F74; /* je: equal / zero */

loc_000D2F5E: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2F74; /* je: equal / zero */

loc_000D2F65: ;
    MEM32(esi + 4) = 7;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D2F80(); return; /* tail jmp 0x000D2F80 */

loc_000D2F74: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2F80
 * Original: 0x000D2F80 - 0x000D3186 (518 bytes, 147 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2F80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2FA9; /* jne: not equal / not zero */

loc_000D2F8D: ;
    PUSH32(esp, 0x245);
    PUSH32(esp, 0x329558);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2FA6u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2FA6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2FA9: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2FCB; /* je: equal / zero */

loc_000D2FAF: ;
    PUSH32(esp, 0x246);
    PUSH32(esp, 0x32926C);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2FC8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2FC8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2FCB: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2FED; /* jne: not equal / not zero */

loc_000D2FD1: ;
    PUSH32(esp, 0x247);
    PUSH32(esp, 0x3294AC);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D2FEAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D2FEA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2FED: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D300E; /* je: equal / zero */

loc_000D2FF2: ;
    PUSH32(esp, 0x248);
    PUSH32(esp, 0x329490);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D300Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D300B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D300E: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D302F; /* je: equal / zero */

loc_000D3013: ;
    PUSH32(esp, 0x249);
    PUSH32(esp, 0x329298);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D302Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D302C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D302F: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3050; /* je: equal / zero */

loc_000D3034: ;
    PUSH32(esp, 0x24A);
    PUSH32(esp, 0x329470);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D304Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D304D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3050: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x38), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3074; /* je: equal / zero */

loc_000D3058: ;
    PUSH32(esp, 0x24B);
    PUSH32(esp, 0x32924C);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3071u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3071: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3074: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3095; /* je: equal / zero */

loc_000D3079: ;
    PUSH32(esp, 0x24C);
    PUSH32(esp, 0x329238);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3092u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3092: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3095: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D3156; /* jle: less or equal (signed <=) */

loc_000D30A6: ;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x000D30AEu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D30AE: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 0x38) = eax;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x38), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D30D5; /* jne: not equal / not zero */

loc_000D30BC: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000D30CBu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D30CB: ;
    MEM32(esi + 4) = 0x13;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D30D5: ;
    edx = MEM32(ecx + 0x30);
    ecx = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000D3102; /* jle: less or equal (signed <=) */

loc_000D30E2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D30E4: ;
    edx = MEM32(esi + 0xC);
    edx = MEM32(edx + 0x38);
    MEM32(edx + ecx + 0xC) = ebx;
    edx = MEM32(esi + 0xC);
    edx = MEM32(edx + 0x30);
    edi = MEM32(edx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D30E4; /* jl: less (signed <) */

loc_000D3102: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x30);
    edi = MEM32(ecx + 8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x78);
    eax = edi;
    PUSH32(esp, 0x000D3115u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D3115: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D3139; /* jne: not equal / not zero */

loc_000D311C: ;
    eax = 0x324918;
    edx = 0xA;
    MEM32(esi + 0x24) = ebx;
    PUSH32(esp, 0x000D312Eu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D312E: ;
    POP32(esp, edi);
    MEM32(esi + 4) = 0x13;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D3139: ;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 4) = 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000D3190(); return; /* tail jmp 0x000D3190 */

loc_000D3156: ;
    _fa = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x38), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3177; /* je: equal / zero */

loc_000D315B: ;
    PUSH32(esp, 0x273);
    PUSH32(esp, 0x32924C);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3174u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3174: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3177: ;
    MEM32(esi + 4) = 9;
    PUSH32(esp, 0x000D3183u); RECOMP_ABI_CALL(0x000D31C0u, sub_000D31C0); /* call 0x000D31C0 */

loc_000D3183: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3190
 * Original: 0x000D3190 - 0x000D31B3 (35 bytes, 12 insns)
 * Folder: sound (between: 0x000D2F80 and 0x000D31C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3190: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000D3198u); RECOMP_ABI_CALL(0x000D2A30u, sub_000D2A30); /* call 0x000D2A30 */

loc_000D3198: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D31B1; /* je: equal / zero */

loc_000D319E: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D31B1; /* je: equal / zero */

loc_000D31A5: ;
    MEM32(esi + 4) = 9;
    PUSH32(esp, 0x000D31B1u); RECOMP_ABI_CALL(0x000D31C0u, sub_000D31C0); /* call 0x000D31C0 */

loc_000D31B1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D31C0
 * Original: 0x000D31C0 - 0x000D3321 (353 bytes, 94 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D31C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D31C0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D31E3; /* jne: not equal / not zero */

loc_000D31C7: ;
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x329558);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D31E0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D31E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D31E3: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3205; /* je: equal / zero */

loc_000D31E9: ;
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x32920C);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3202u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3202: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3205: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3227; /* jne: not equal / not zero */

loc_000D320B: ;
    PUSH32(esp, 0x2A9);
    PUSH32(esp, 0x3294AC);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3224u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3224: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3227: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D324A; /* je: equal / zero */

loc_000D322E: ;
    PUSH32(esp, 0x2AA);
    PUSH32(esp, 0x329490);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3247u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3247: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D324A: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D326D; /* je: equal / zero */

loc_000D3251: ;
    PUSH32(esp, 0x2AB);
    PUSH32(esp, 0x329298);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D326Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D326A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D326D: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3290; /* je: equal / zero */

loc_000D3274: ;
    PUSH32(esp, 0x2AC);
    PUSH32(esp, 0x329470);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D328Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D328D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3290: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D32B6; /* je: equal / zero */

loc_000D329A: ;
    PUSH32(esp, 0x2AD);
    PUSH32(esp, 0x3291F0);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D32B3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D32B3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D32B6: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D3312; /* jle: less or equal (signed <=) */

loc_000D32C4: ;
    eax = edi;
    PUSH32(esp, 0x000D32CBu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D32CB: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 0x40) = eax;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D32F3; /* jne: not equal / not zero */

loc_000D32DB: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000D32EAu); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D32EA: ;
    MEM32(esi + 4) = 0x13;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000D32F3: ;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 4) = 0xA;
    eax = esi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000D3330(); return; /* tail jmp 0x000D3330 */

loc_000D3312: ;
    MEM32(esi + 4) = 0xB;
    eax = esi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_000D3360(); return; /* tail jmp 0x000D3360 */

}

/**
 * sub_000D3330
 * Original: 0x000D3330 - 0x000D3356 (38 bytes, 14 insns)
 * Folder: sound (between: 0x000D31C0 and 0x000D3360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3330: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000D3338u); RECOMP_ABI_CALL(0x000D2A30u, sub_000D2A30); /* call 0x000D2A30 */

loc_000D3338: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3354; /* je: equal / zero */

loc_000D333E: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3354; /* je: equal / zero */

loc_000D3345: ;
    MEM32(esi + 4) = 0xB;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D3360(); return; /* tail jmp 0x000D3360 */

loc_000D3354: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3360
 * Original: 0x000D3360 - 0x000D34DE (382 bytes, 106 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3360: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3386; /* jne: not equal / not zero */

loc_000D336A: ;
    PUSH32(esp, 0x2F9);
    PUSH32(esp, 0x329558);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3383u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3383: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3386: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D33A8; /* je: equal / zero */

loc_000D338C: ;
    PUSH32(esp, 0x2FA);
    PUSH32(esp, 0x3291C4);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D33A5u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D33A5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D33A8: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D33CA; /* jne: not equal / not zero */

loc_000D33AE: ;
    PUSH32(esp, 0x2FB);
    PUSH32(esp, 0x3294AC);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D33C7u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D33C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D33CA: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D33ED; /* je: equal / zero */

loc_000D33D1: ;
    PUSH32(esp, 0x2FC);
    PUSH32(esp, 0x329490);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D33EAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D33EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D33ED: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3410; /* je: equal / zero */

loc_000D33F4: ;
    PUSH32(esp, 0x2FD);
    PUSH32(esp, 0x329298);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D340Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D340D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3410: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3433; /* je: equal / zero */

loc_000D3417: ;
    PUSH32(esp, 0x2FE);
    PUSH32(esp, 0x329470);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3430u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3430: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3433: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3459; /* je: equal / zero */

loc_000D343D: ;
    PUSH32(esp, 0x2FF);
    PUSH32(esp, 0x3291A4);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3456u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3456: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3459: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D34D0; /* jle: less or equal (signed <=) */

loc_000D3466: ;
    PUSH32(esp, edi);
    edi = eax * 8;
    eax = edi;
    PUSH32(esp, 0x000D3475u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D3475: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 0x3C) = eax;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D349E; /* jne: not equal / not zero */

loc_000D3485: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000D3494u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D3494: ;
    POP32(esp, edi);
    MEM32(esi + 4) = 0x13;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D349E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D34A7u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000D34A7: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 4) = 0xC;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D34E0(); return; /* tail jmp 0x000D34E0 */

loc_000D34D0: ;
    MEM32(esi + 4) = 0xD;
    PUSH32(esp, 0x000D34DCu); RECOMP_ABI_CALL(0x000D3510u, sub_000D3510); /* call 0x000D3510 */

loc_000D34DC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3464
 * Original: 0x000D3464 - 0x000D34DE (122 bytes, 38 insns)
 * Folder: sound (between: 0x000D3360 and 0x000D3510)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3464(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3464: ;
    if (_flags /* jle: less or equal (signed <=) */) goto loc_000D34D0;

loc_000D3466: ;
    PUSH32(esp, edi);
    edi = eax * 8;
    eax = edi;
    PUSH32(esp, 0x000D3475u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D3475: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 0x3C) = eax;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D349E; /* jne: not equal / not zero */

loc_000D3485: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000D3494u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D3494: ;
    POP32(esp, edi);
    MEM32(esi + 4) = 0x13;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D349E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D34A7u); RECOMP_ABI_CALL(0x000ED3E0u, sub_000ED3E0); /* call 0x000ED3E0 */

loc_000D34A7: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 4) = 0xC;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D34E0(); return; /* tail jmp 0x000D34E0 */

loc_000D34D0: ;
    MEM32(esi + 4) = 0xD;
    PUSH32(esp, 0x000D34DCu); RECOMP_ABI_CALL(0x000D3510u, sub_000D3510); /* call 0x000D3510 */

loc_000D34DC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D34E0
 * Original: 0x000D34E0 - 0x000D3503 (35 bytes, 12 insns)
 * Folder: sound (between: 0x000D3360 and 0x000D3510)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D34E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D34E0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000D34E8u); RECOMP_ABI_CALL(0x000D2A30u, sub_000D2A30); /* call 0x000D2A30 */

loc_000D34E8: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3501; /* je: equal / zero */

loc_000D34EE: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3501; /* je: equal / zero */

loc_000D34F5: ;
    MEM32(esi + 4) = 0xD;
    PUSH32(esp, 0x000D3501u); RECOMP_ABI_CALL(0x000D3510u, sub_000D3510); /* call 0x000D3510 */

loc_000D3501: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3510
 * Original: 0x000D3510 - 0x000D36A1 (401 bytes, 119 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3510: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D3549; /* jne: not equal / not zero */

loc_000D352D: ;
    PUSH32(esp, 0x34F);
    PUSH32(esp, 0x329558);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3546u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3546: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3549: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D356B; /* je: equal / zero */

loc_000D354F: ;
    PUSH32(esp, 0x350);
    PUSH32(esp, 0x329164);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3568u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3568: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D356B: ;
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D35A8; /* jne: not equal / not zero */

loc_000D3570: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(eax + 0x30);
    edi = MEM32(edx + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D3598; /* jle: less or equal (signed <=) */

loc_000D357F: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x3C);
    edx = MEM32(edx + 0x30);
    edx = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_000D3590: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D3590; /* jne: not equal / not zero */

loc_000D3598: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0x000D35A5u); RECOMP_ABI_CALL(0x000ED800u, sub_000ED800); /* call 0x000ED800 */

loc_000D35A5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D35A8: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(esi + 0x60);
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = 0xFFFFFFFEu;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D367F; /* jge: greater or equal (signed >=) */

loc_000D35D0: ;
    edx = MEM32(eax + 0x3C);
    ecx = MEM32(edx + edi * 8 + 4);
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x58) = ebx;
    edx = MEM32(eax + 0x3C);
    ecx = MEM32(edx + edi * 8);
    edx = MEM32(eax + 0x30);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D35F4u); RECOMP_ABI_CALL(0x000DB2D0u, sub_000DB2D0); /* call 0x000DB2D0 */

loc_000D35F4: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x3C);
    MEM32(edx + edi * 8 + 4) = eax;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx + edi * 8 + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_000D364F; /* jne: not equal / not zero */

loc_000D3613: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x329134);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D3622u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D3622: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 8;
    edx = 0xA;
    PUSH32(esp, 0x000D3633u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D3633: ;
    POP32(esp, edi);
    MEM32(esi + 4) = 0x13;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D3648u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D3648: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D364F: ;
    PUSH32(esp, 0x329120);
    PUSH32(esp, 0x000D3659u); RECOMP_ABI_CALL(0x000ED220u, sub_000ED220); /* call 0x000ED220 */

loc_000D3659: ;
    eax = MEM32(esi + 0x60);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 4) = 0xE;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000D3678u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D3678: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D367F: ;
    PUSH32(esp, esi);
    MEM32(esi + 4) = 0x10;
    PUSH32(esp, 0x000D368Cu); RECOMP_ABI_CALL(0x000D3B60u, sub_000D3B60); /* call 0x000D3B60 */

loc_000D368C: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000D369Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D369A: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D36B0
 * Original: 0x000D36B0 - 0x000D3708 (88 bytes, 26 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D36B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D36B0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D36D5; /* je: equal / zero */

loc_000D36B9: ;
    PUSH32(esp, 0x38C);
    PUSH32(esp, 0x3290D8);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D36D2u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D36D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D36D5: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D36E6; /* je: equal / zero */

loc_000D36DB: ;
    PUSH32(esp, 0x000D36E0u); RECOMP_ABI_CALL(0x000D3710u, sub_000D3710); /* call 0x000D3710 */

loc_000D36E0: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3706; /* je: equal / zero */

loc_000D36E6: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D36F7; /* je: equal / zero */

loc_000D36EC: ;
    PUSH32(esp, 0x000D36F1u); RECOMP_ABI_CALL(0x000D3820u, sub_000D3820); /* call 0x000D3820 */

loc_000D36F1: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3706; /* je: equal / zero */

loc_000D36F7: ;
    MEM32(esi + 4) = 0xF;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D3970(); return; /* tail jmp 0x000D3970 */

loc_000D3706: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3710
 * Original: 0x000D3710 - 0x000D3814 (260 bytes, 68 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3710: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3732; /* jne: not equal / not zero */

loc_000D3716: ;
    PUSH32(esp, 0x3AB);
    PUSH32(esp, 0x3290A0);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D372Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D372F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3732: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x38);
    if (CMP_A(_fa, _fb)) goto loc_000D3759; /* ja: above (unsigned >) */

loc_000D373D: ;
    PUSH32(esp, 0x3AD);
    PUSH32(esp, 0x32907C);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3756u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3756: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3759: ;
    eax = MEM32(esi + edi * 8 + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D377D; /* jne: not equal / not zero */

loc_000D3761: ;
    PUSH32(esp, 0x3AE);
    PUSH32(esp, 0x329040);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D377Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D377A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D377D: ;
    eax = MEM32(esi + edi * 8 + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D37A1; /* je: equal / zero */

loc_000D3785: ;
    PUSH32(esp, 0x3AF);
    PUSH32(esp, 0x329010);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D379Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D379E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D37A1: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x40) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D37C5; /* jb: below (unsigned <) */

loc_000D37A9: ;
    PUSH32(esp, 0x3B0);
    PUSH32(esp, 0x328FD0);
    edx = 0x325305;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D37C2u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D37C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D37C5: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    MEM32(esi + edi * 8 + 0x48) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000D37DE; /* jbe: below or equal (unsigned <=) */

loc_000D37D6: ;
    MEM32(esi + edi * 8 + 0x48) = 0x8000;

loc_000D37DE: ;
    eax = MEM32(esi + edi * 8 + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D37FE; /* jne: not equal / not zero */

loc_000D37E6: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000D37F5u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D37F5: ;
    MEM32(esi + 4) = 0x13;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000D37FE: ;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(esi + edi * 8 + 0x48);
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x1C) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3820
 * Original: 0x000D3820 - 0x000D3970 (336 bytes, 90 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3820: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3843; /* jne: not equal / not zero */

loc_000D3827: ;
    PUSH32(esp, 0x3C8);
    PUSH32(esp, 0x329558);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3840u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3840: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3843: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3865; /* jne: not equal / not zero */

loc_000D3849: ;
    PUSH32(esp, 0x3C9);
    PUSH32(esp, 0x328F90);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3862u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3862: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3865: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x3C);
    if (CMP_A(_fa, _fb)) goto loc_000D388D; /* ja: above (unsigned >) */

loc_000D3871: ;
    PUSH32(esp, 0x3CB);
    PUSH32(esp, 0x32907C);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D388Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D388A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D388D: ;
    eax = MEM32(esi + edi * 8 + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D38B1; /* jne: not equal / not zero */

loc_000D3895: ;
    PUSH32(esp, 0x3CC);
    PUSH32(esp, 0x329040);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D38AEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D38AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D38B1: ;
    _fa = (uint32_t)(MEM32(esi + edi * 8 + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edi * 8 + 0x48), 0x8000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D38D7; /* jbe: below or equal (unsigned <=) */

loc_000D38BB: ;
    PUSH32(esp, 0x3CD);
    PUSH32(esp, 0x328F40);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D38D4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D38D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D38D7: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x40) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D38FB; /* jb: below (unsigned <) */

loc_000D38DF: ;
    PUSH32(esp, 0x3CE);
    PUSH32(esp, 0x328EF8);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D38F8u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D38F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D38FB: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D391E; /* jg: greater (signed >) */

loc_000D3902: ;
    PUSH32(esp, 0x3CF);
    PUSH32(esp, 0x328ED8);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D391Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D391B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D391E: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x3C);
    edx = MEM32(esi + 0x60);
    ecx = MEM32(esi + 0x58);
    ebx = MEM32(eax + edx * 8 + -4);
    eax = eax + edx * 8;
    edx = MEM32(esi + edi * 8 + 0x44);
    edi = MEM32(esi + edi * 8 + 0x48);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + -8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D3945u); RECOMP_ABI_CALL(0x000DB390u, sub_000DB390); /* call 0x000DB390 */

loc_000D3945: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 0x5C) = eax;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000D3968; /* jne: not equal / not zero */

loc_000D3951: ;
    eax = 0x328EAC;
    edx = 8;
    PUSH32(esp, 0x000D3960u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D3960: ;
    MEM32(esi + 4) = 0x13;
    esp += 4; return; /* ret */

loc_000D3968: ;
    MEM32(esi + 0x34) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D3970
 * Original: 0x000D3970 - 0x000D39F0 (128 bytes, 43 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3996; /* je: equal / zero */

loc_000D397A: ;
    PUSH32(esp, 0x3E4);
    PUSH32(esp, 0x328E68);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3993u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3993: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3996: ;
    eax = MEM32(esi + 0x38);
    ebx = 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D39AF; /* je: equal / zero */

loc_000D39A2: ;
    eax = esi;
    PUSH32(esp, 0x000D39A9u); RECOMP_ABI_CALL(0x000D39F0u, sub_000D39F0); /* call 0x000D39F0 */

loc_000D39A9: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D39ED; /* je: equal / zero */

loc_000D39AF: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D39BF; /* je: equal / zero */

loc_000D39B4: ;
    PUSH32(esp, 0x000D39B9u); RECOMP_ABI_CALL(0x000D3A70u, sub_000D3A70); /* call 0x000D3A70 */

loc_000D39B9: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D39ED; /* je: equal / zero */

loc_000D39BF: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D39ED; /* je: equal / zero */

loc_000D39C6: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D39ED; /* je: equal / zero */

loc_000D39CD: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D39E6; /* jne: not equal / not zero */

loc_000D39D2: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D39E6; /* jne: not equal / not zero */

loc_000D39D7: ;
    MEM32(esi + 4) = 0xD;
    PUSH32(esp, 0x000D39E3u); RECOMP_ABI_CALL(0x000D3510u, sub_000D3510); /* call 0x000D3510 */

loc_000D39E3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D39E6: ;
    MEM32(esi + 4) = 0xE;

loc_000D39ED: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D39F0
 * Original: 0x000D39F0 - 0x000D3A66 (118 bytes, 38 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D39F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D39F0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3A64; /* jne: not equal / not zero */

loc_000D39FA: ;
    PUSH32(esp, 0x000D39FFu); RECOMP_ABI_CALL(0x000D2A30u, sub_000D2A30); /* call 0x000D2A30 */

loc_000D39FF: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3A64; /* je: equal / zero */

loc_000D3A05: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3A64; /* je: equal / zero */

loc_000D3A0C: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3A2E; /* jne: not equal / not zero */

loc_000D3A12: ;
    PUSH32(esp, 0x413);
    PUSH32(esp, 0x3290A0);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3A2Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3A2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3A2E: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + eax * 8 + 0x48);
    edx = MEM32(esi + 0x54);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    MEM32(esi + 0x54) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x40) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D3A4D; /* jb: below (unsigned <) */

loc_000D3A44: ;
    MEM32(esi + 0x38) = 0xFFFFFFFEu;
    goto loc_000D3A57;

loc_000D3A4D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x38) = edx;

loc_000D3A57: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3A64; /* jne: not equal / not zero */

loc_000D3A5D: ;
    MEM32(esi + 0x3C) = 0;

loc_000D3A64: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3A70
 * Original: 0x000D3A70 - 0x000D3B48 (216 bytes, 56 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3A70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3B46; /* je: equal / zero */

loc_000D3A7C: ;
    PUSH32(esp, 0x000D3A81u); RECOMP_ABI_CALL(0x000DB430u, sub_000DB430); /* call 0x000DB430 */

loc_000D3A81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3B23; /* ja: above (unsigned >) */

loc_000D3A8A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD3B48); /* switch: 4 entries, 3 targets */
    if (_jt == 0x000D3A91u) goto loc_000D3A91;
    if (_jt == 0x000D3AC4u) goto loc_000D3AC4;
    if (_jt == 0x000D3B46u) goto loc_000D3B46;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D3A91: ;
    PUSH32(esp, 0x432);
    PUSH32(esp, 0x324878);
    edx = 0x328E50;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3AAAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3AAA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = 1;
    MEM32(esi + 0x5C) = 0;
    MEM32(esi + 4) = 0x13;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D3AC4: ;
    eax = MEM32(esi + 0x3C);
    ebx = 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3AE7; /* jne: not equal / not zero */

loc_000D3AD0: ;
    PUSH32(esp, 0x3296BC);
    eax = 0x43D;
    ecx = 0x328F90;
    PUSH32(esp, 0x000D3AE4u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D3AE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3AE7: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + eax * 8 + 0x48);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x58) = MEM32(esi + 0x58) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5C) = 0;
    MEM32(esi + eax * 8 + 0x48) = 0;
    edx = MEM32(esi + 0x58);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x40) (32-bit) */
    MEM32(esi + 0x34) = 1;
    if (CMP_B(_fa, _fb)) goto loc_000D3B14; /* jb: below (unsigned <) */

loc_000D3B0F: ;
    MEM32(esi + 0x3C) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D3B14: ;
    ecx = MEM32(esi + 0x3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    MEM32(esi + 0x3C) = eax;
    esp += 4; return; /* ret */

loc_000D3B23: ;
    PUSH32(esp, 0x44B);
    PUSH32(esp, 0x324878);
    edx = 0x328E34;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3B3Cu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3B3C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0x13;

loc_000D3B46: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3B60
 * Original: 0x000D3B60 - 0x000D3D2B (459 bytes, 147 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3B60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D3B8B; /* jne: not equal / not zero */

loc_000D3B6F: ;
    PUSH32(esp, 0x45A);
    PUSH32(esp, 0x329558);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3B88u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3B88: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3B8B: ;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3BAD; /* je: equal / zero */

loc_000D3B91: ;
    PUSH32(esp, 0x45B);
    PUSH32(esp, 0x328E08);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3BAAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3BAA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3BAD: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3BC8; /* jne: not equal / not zero */

loc_000D3BBA: ;
    edi = ebp;
    MEM32(ebp + 4) = 0x11;
    PUSH32(esp, 0x000D3BC8u); RECOMP_ABI_CALL(0x000D3D30u, sub_000D3D30); /* call 0x000D3D30 */

loc_000D3BC8: ;
    esi = MEM32(ebp + 0x74);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3BEC; /* je: equal / zero */

loc_000D3BD0: ;
    PUSH32(esp, 0x000D3BD5u); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_000D3BD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3D24; /* je: equal / zero */

loc_000D3BDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x74) = 0xFFFFFFFFu;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000D3BEC: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0x30);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x64);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_000D3D1C; /* jge: greater or equal (signed >=) */

loc_000D3C05: ;
    eax = MEM32(ebp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000D3C2E; /* jne: not equal / not zero */

loc_000D3C12: ;
    PUSH32(esp, 0x471);
    PUSH32(esp, 0x328DF4);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3C2Bu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3C2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3C2E: ;
    ecx = MEM32(ebp + 0x10);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x78);
    eax = MEM32(ecx + esi + 4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3C46; /* je: equal / zero */

loc_000D3C41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3CAB; /* jne: not equal / not zero */

loc_000D3C46: ;
    PUSH32(esp, 0x000D3C4Bu); RECOMP_ABI_CALL(0x000D5DC0u, sub_000D5DC0); /* call 0x000D5DC0 */

loc_000D3C4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3CAB; /* jne: not equal / not zero */

loc_000D3C4F: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D3C59u); RECOMP_ABI_CALL(0x000DB560u, sub_000DB560); /* call 0x000DB560 */

loc_000D3C59: ;
    edx = MEM32(ebp + 0xC);
    ebx = MEM32(edx + 0x30);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D3C8B; /* jle: less or equal (signed <=) */

loc_000D3C66: ;
    edx = MEM32(edx + 0x3C);
    ebx = edx;
    goto loc_000D3C70;

    /* nop */

loc_000D3C70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3D16; /* je: equal / zero */

loc_000D3C78: ;
    edi = MEM32(ebp + 0xC);
    edi = MEM32(edi + 0x30);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D3C70; /* jl: less (signed <) */

loc_000D3C87: ;
    edi = MEM32(esp + 0x10);

loc_000D3C8B: ;
    PUSH32(esp, 0x47F);
    PUSH32(esp, 0x328DC4);
    edx = 0x328DD0;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3CA4u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3CA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3CA7: ;
    ebx = MEM32(esp + 0x18);

loc_000D3CAB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3CCD; /* je: equal / zero */

loc_000D3CB1: ;
    PUSH32(esp, 0x482);
    PUSH32(esp, 0x328D8C);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3CCAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3CCA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3CCD: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 0x40);
    ecx = MEM32(eax + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    edi = ebx;
    ebx = MEM32(ebp + 0x10);
    edi = edi << 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D3CE9u); RECOMP_ABI_CALL(0x000D4FA0u, sub_000D4FA0); /* call 0x000D4FA0 */

loc_000D3CE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 0x74) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D3D07; /* je: equal / zero */

loc_000D3CF4: ;
    esi = eax;
    PUSH32(esp, 0x000D3CFBu); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_000D3CFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3D07; /* je: equal / zero */

loc_000D3D00: ;
    MEM32(ebp + 0x74) = 0xFFFFFFFFu;

loc_000D3D07: ;
    eax = MEM32(ebp + 0x64);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebp + 0x64) = eax;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000D3D16: ;
    edi = MEM32(edx + ecx * 8 + 4);
    goto loc_000D3CA7;

loc_000D3D1C: ;
    MEM32(ebp + 4) = 0x11;
    POP32(esp, ebx);

loc_000D3D24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3D30
 * Original: 0x000D3D30 - 0x000D3DE9 (185 bytes, 57 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3D30: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3D53; /* jne: not equal / not zero */

loc_000D3D37: ;
    PUSH32(esp, 0x49A);
    PUSH32(esp, 0x329558);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3D50u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3D50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3D53: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3D75; /* je: equal / zero */

loc_000D3D59: ;
    PUSH32(esp, 0x49B);
    PUSH32(esp, 0x328D64);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3D72u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3D72: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3D75: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D3DE0; /* jle: less or equal (signed <=) */

loc_000D3D82: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D3D86: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x40);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D3D96u); RECOMP_ABI_CALL(0x000D00F0u, sub_000D00F0); /* call 0x000D00F0 */

loc_000D3D96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3DC2; /* jne: not equal / not zero */

loc_000D3D9A: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx + 0x34);
    MEM32(edx + ebx + 0x48) = eax;
    PUSH32(esp, 0x4A2);
    PUSH32(esp, 0x324878);
    edx = 0x328D38;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3DBDu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3DBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D3DD0;

loc_000D3DC2: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax + 0x34);
    MEM32(ecx + ebx + 0x48) = 1;

loc_000D3DD0: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x64;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D3D86; /* jl: less (signed <) */

loc_000D3DDE: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000D3DE0: ;
    MEM32(edi + 4) = 0x12;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3DF0
 * Original: 0x000D3DF0 - 0x000D3E95 (165 bytes, 51 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3DF0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3E13; /* jne: not equal / not zero */

loc_000D3DF7: ;
    PUSH32(esp, 0x4B5);
    PUSH32(esp, 0x329558);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3E10u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3E10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3E13: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3E35; /* je: equal / zero */

loc_000D3E19: ;
    PUSH32(esp, 0x4B6);
    PUSH32(esp, 0x328D0C);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3E32u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3E32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3E35: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D3E8C; /* jle: less or equal (signed <=) */

loc_000D3E45: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x3C);
    eax = MEM32(eax + edi * 8);
    PUSH32(esp, 0x000D3E53u); RECOMP_ABI_CALL(0x000DB5C0u, sub_000DB5C0); /* call 0x000DB5C0 */

loc_000D3E53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3E7E; /* je: equal / zero */

loc_000D3E57: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x3C);
    ecx = MEM32(edx + edi * 8);
    eax = edx + edi * 8;
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D3E6Du); RECOMP_ABI_CALL(0x000DB330u, sub_000DB330); /* call 0x000DB330 */

loc_000D3E6D: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x3C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edi * 8 + 4) = 0;

loc_000D3E7E: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x30);
    ecx = MEM32(eax + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D3E45; /* jl: less (signed <) */

loc_000D3E8C: ;
    MEM32(esi + 4) = 0x15;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3EA0
 * Original: 0x000D3EA0 - 0x000D3F12 (114 bytes, 37 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3EA0: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x15 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3EC2; /* je: equal / zero */

loc_000D3EA6: ;
    PUSH32(esp, 0x4CC);
    PUSH32(esp, 0x328CE8);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3EBFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3EBF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3EC2: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3ED4; /* je: equal / zero */

loc_000D3ECC: ;
    PUSH32(esp, 0x000D3ED1u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D3ED1: ;
    MEM32(esi + 0x44) = ebx;

loc_000D3ED4: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3EE3; /* je: equal / zero */

loc_000D3EDB: ;
    PUSH32(esp, 0x000D3EE0u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D3EE0: ;
    MEM32(esi + 0x4C) = ebx;

loc_000D3EE3: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3EF2; /* je: equal / zero */

loc_000D3EEA: ;
    PUSH32(esp, 0x000D3EEFu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D3EEF: ;
    MEM32(esi + 0x10) = ebx;

loc_000D3EF2: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3F07; /* je: equal / zero */

loc_000D3EFB: ;
    PUSH32(esp, 0x000D3F00u); RECOMP_ABI_CALL(0x000EDDD0u, sub_000EDDD0); /* call 0x000EDDD0 */

loc_000D3F00: ;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;

loc_000D3F07: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D3F10; /* je: equal / zero */

loc_000D3F0D: ;
    MEM32(esi + 0xC) = ebx;

loc_000D3F10: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3F20
 * Original: 0x000D3F20 - 0x000D3FBD (157 bytes, 50 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3F20: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3F45; /* je: equal / zero */

loc_000D3F29: ;
    PUSH32(esp, 0x4F7);
    PUSH32(esp, 0x328CC0);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3F42u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3F42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3F45: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3F53; /* jne: not equal / not zero */

loc_000D3F4C: ;
    MEM32(esi + 8) = 1;

loc_000D3F53: ;
    eax = MEM32(esi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3F91; /* ja: above (unsigned >) */

loc_000D3F5C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD3FC0); /* switch: 6 entries, 6 targets */
    if (_jt == 0x000D3F63u) goto loc_000D3F63;
    if (_jt == 0x000D3F6Au) goto loc_000D3F6A;
    if (_jt == 0x000D3F71u) goto loc_000D3F71;
    if (_jt == 0x000D3F78u) goto loc_000D3F78;
    if (_jt == 0x000D3F83u) goto loc_000D3F83;
    if (_jt == 0x000D3F8Au) goto loc_000D3F8A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D3F63: ;
    PUSH32(esp, 0x000D3F68u); RECOMP_ABI_CALL(0x000D3FE0u, sub_000D3FE0); /* call 0x000D3FE0 */

loc_000D3F68: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D3F6A: ;
    PUSH32(esp, 0x000D3F6Fu); RECOMP_ABI_CALL(0x000D4030u, sub_000D4030); /* call 0x000D4030 */

loc_000D3F6F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D3F71: ;
    PUSH32(esp, 0x000D3F76u); RECOMP_ABI_CALL(0x000D40B0u, sub_000D40B0); /* call 0x000D40B0 */

loc_000D3F76: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D3F78: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000D3F80u); RECOMP_ABI_CALL(0x000D4130u, sub_000D4130); /* call 0x000D4130 */

loc_000D3F80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D3F83: ;
    PUSH32(esp, 0x000D3F88u); RECOMP_ABI_CALL(0x000D41C0u, sub_000D41C0); /* call 0x000D41C0 */

loc_000D3F88: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D3F8A: ;
    PUSH32(esp, 0x000D3F8Fu); RECOMP_ABI_CALL(0x000D4270u, sub_000D4270); /* call 0x000D4270 */

loc_000D3F8F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D3F91: ;
    PUSH32(esp, 0x506);
    PUSH32(esp, 0x324878);
    edx = 0x328CA4;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3FAAu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3FAA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0x14;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3FE0
 * Original: 0x000D3FE0 - 0x000D402F (79 bytes, 22 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3FE0: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4002; /* je: equal / zero */

loc_000D3FE6: ;
    PUSH32(esp, 0x514);
    PUSH32(esp, 0x328C80);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D3FFFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D3FFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4002: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4027; /* je: equal / zero */

loc_000D400A: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4016; /* jne: not equal / not zero */

loc_000D4011: ;
    PUSH32(esp, 0x000D4016u); RECOMP_ABI_CALL(0x000ED950u, sub_000ED950); /* call 0x000ED950 */

loc_000D4016: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    PUSH32(esp, 0x000D401Fu); RECOMP_ABI_CALL(0x000EDDD0u, sub_000EDDD0); /* call 0x000EDDD0 */

loc_000D401F: ;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    POP32(esp, edi);

loc_000D4027: ;
    MEM32(esi + 8) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4030
 * Original: 0x000D4030 - 0x000D40AA (122 bytes, 37 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000D4030: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000D4052; /* je: equal / zero */

loc_000D4036: ;
    PUSH32(esp, 0x52A);
    PUSH32(esp, 0x328C54);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D404Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D404F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4052: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D4099; /* jne: not equal / not zero */

loc_000D4059: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D407C; /* jne: not equal / not zero */

loc_000D4060: ;
    PUSH32(esp, 0x52F);
    PUSH32(esp, 0x328C10);
    edx = 0x325305;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D4079u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D4079: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D407C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x5C);
    PUSH32(esp, 0x000D4085u); RECOMP_ABI_CALL(0x000DB430u, sub_000DB430); /* call 0x000DB430 */

loc_000D4085: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000D4092; /* je: equal / zero */

loc_000D408B: ;
    MEM32(esi + 0x34) = 1;

loc_000D4092: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D40A9; /* je: equal / zero */

loc_000D4099: ;
    eax = MEM32(esi + 0xC);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(6)) >> 32) & 1);
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;

loc_000D40A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D40B0
 * Original: 0x000D40B0 - 0x000D412A (122 bytes, 43 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D40B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D40B0: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D40D2; /* je: equal / zero */

loc_000D40B6: ;
    PUSH32(esp, 0x547);
    PUSH32(esp, 0x328BEC);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D40CFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D40CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D40D2: ;
    eax = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4122; /* je: equal / zero */

loc_000D40DB: ;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4122; /* je: equal / zero */

loc_000D40E2: ;
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4119; /* je: equal / zero */

loc_000D40E8: ;
    edi = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D4119; /* jle: less or equal (signed <=) */

loc_000D40F1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);

loc_000D40F4: ;
    edi = MEM32(esi + 0xC);
    edi = MEM32(edi + 0x34);
    MEM32(edi + ecx + 0x48) = edx;
    edi = MEM32(esi + 0xC);
    edi = MEM32(edi + 0x30);
    ebx = MEM32(edi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D40F4; /* jl: less (signed <) */

loc_000D410F: ;
    POP32(esp, ebx);
    MEM32(esi + 8) = 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000D4119: ;
    MEM32(esi + 8) = 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000D4122: ;
    MEM32(esi + 8) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4130
 * Original: 0x000D4130 - 0x000D41B2 (130 bytes, 39 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4130: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4153; /* jne: not equal / not zero */

loc_000D4137: ;
    PUSH32(esp, 0x55B);
    PUSH32(esp, 0x329558);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D4150u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D4150: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4153: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4175; /* je: equal / zero */

loc_000D4159: ;
    PUSH32(esp, 0x55C);
    PUSH32(esp, 0x328BC4);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D4172u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D4172: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4175: ;
    eax = MEM32(edi + 0xC);
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D41AA; /* je: equal / zero */

loc_000D417F: ;
    ecx = MEM32(edi + 0x64);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x6C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D4199; /* jge: greater or equal (signed >=) */

loc_000D418A: ;
    esi = esi << 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D4194u); RECOMP_ABI_CALL(0x000D50C0u, sub_000D50C0); /* call 0x000D50C0 */

loc_000D4194: ;
    MEM32(edi + 0x6C) = MEM32(edi + 0x6C) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4199: ;
    PUSH32(esp, 0x000D419Eu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D419E: ;
    ecx = MEM32(edi + 0xC);
    MEM32(ecx + 0x38) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D41AA: ;
    MEM32(edi + 8) = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_000D41C0
 * Original: 0x000D41C0 - 0x000D4262 (162 bytes, 49 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D41C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D41C0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D41E3; /* jne: not equal / not zero */

loc_000D41C7: ;
    PUSH32(esp, 0x579);
    PUSH32(esp, 0x329558);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D41E0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D41E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D41E3: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4205; /* je: equal / zero */

loc_000D41E9: ;
    PUSH32(esp, 0x57A);
    PUSH32(esp, 0x328B98);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D4202u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D4202: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4205: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D425A; /* je: equal / zero */

loc_000D420F: ;
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x60) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D4249; /* jge: greater or equal (signed >=) */

loc_000D4218: ;
    ebx = MEM32(eax + ecx * 8 + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4244; /* je: equal / zero */

loc_000D4220: ;
    edx = MEM32(eax + ecx * 8 + 4);
    eax = eax + ecx * 8;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D4230u); RECOMP_ABI_CALL(0x000DB330u, sub_000DB330); /* call 0x000DB330 */

loc_000D4230: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x70);
    edx = MEM32(eax + 0x3C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + ecx * 8 + 4) = 0;

loc_000D4244: ;
    MEM32(esi + 0x70) = MEM32(esi + 0x70) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D4249: ;
    PUSH32(esp, 0x000D424Eu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D424E: ;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 0x3C) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D425A: ;
    MEM32(esi + 8) = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4270
 * Original: 0x000D4270 - 0x000D4306 (150 bytes, 47 insns)
 * Folder: sound (source: CASyncBankLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4270: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4292; /* je: equal / zero */

loc_000D4276: ;
    PUSH32(esp, 0x59B);
    PUSH32(esp, 0x328B64);
    edx = 0x329598;
    ecx = 0x3296BC;
    PUSH32(esp, 0x000D428Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D428F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4292: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D42B1; /* je: equal / zero */

loc_000D429C: ;
    eax = MEM32(eax + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D42AE; /* je: equal / zero */

loc_000D42A3: ;
    PUSH32(esp, 0x000D42A8u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D42A8: ;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 0x40) = edi;

loc_000D42AE: ;
    MEM32(esi + 0xC) = edi;

loc_000D42B1: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D42C0; /* je: equal / zero */

loc_000D42B8: ;
    PUSH32(esp, 0x000D42BDu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D42BD: ;
    MEM32(esi + 0x44) = edi;

loc_000D42C0: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D42CF; /* je: equal / zero */

loc_000D42C7: ;
    PUSH32(esp, 0x000D42CCu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D42CC: ;
    MEM32(esi + 0x4C) = edi;

loc_000D42CF: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D42DE; /* je: equal / zero */

loc_000D42D6: ;
    PUSH32(esp, 0x000D42DBu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D42DB: ;
    MEM32(esi + 0x10) = edi;

loc_000D42DE: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D42ED; /* je: equal / zero */

loc_000D42E5: ;
    PUSH32(esp, 0x000D42EAu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D42EA: ;
    MEM32(esi + 0x14) = edi;

loc_000D42ED: ;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = edi;
    MEM32(esi + 8) = 7;
    MEM32(esi + 4) = 0x14;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4310
 * Original: 0x000D4310 - 0x000D4359 (73 bytes, 15 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4310(void)
{

loc_000D4310: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D431Bu); RECOMP_ABI_CALL(0x00281B07u, sub_00281B07); /* call 0x00281B07 */

loc_000D431B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM32(0x64D594) = eax;
    PUSH32(esp, 0x000D432Bu); RECOMP_ABI_CALL(0x00281B07u, sub_00281B07); /* call 0x00281B07 */

loc_000D432B: ;
    MEM32(0x64D72C) = eax;
    MEM32(0x64D598) = 0;
    MEM32(0x64D730) = 0;
    MEM32(0x64D738) = 1;
    MEM32(0x64D59C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4360
 * Original: 0x000D4360 - 0x000D4395 (53 bytes, 18 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4360: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64D594);
    PUSH32(esp, edi);
    edi = MEM32(0x64D72C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(0x64D72C) = eax;
    MEM32(0x64D594) = eax;
    PUSH32(esp, 0x000D4380u); RECOMP_ABI_CALL(0x00281B5Fu, sub_00281B5F); /* call 0x00281B5F */

loc_000D4380: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D4386u); RECOMP_ABI_CALL(0x00281B5Fu, sub_00281B5F); /* call 0x00281B5F */

loc_000D4386: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D438Cu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000D438C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D4392u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_000D4392: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D43A0
 * Original: 0x000D43A0 - 0x000D43C8 (40 bytes, 10 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D43A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D43A0: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64D5A0);
    PUSH32(esp, 0x000D43B0u); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_000D43B0: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D620) = ecx;
    PUSH32(esp, 0x000D43C2u); RECOMP_ABI_CALL(0x0027FBEBu, sub_0027FBEB); /* call 0x0027FBEB */

loc_000D43C2: ;
    MEM32(0x64D624) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D43D0
 * Original: 0x000D43D0 - 0x000D44A6 (214 bytes, 50 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D43D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D43D0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x100) = eax;
    eax = MEM32(0x64D738);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D43FA; /* jne: not equal / not zero */

loc_000D43EB: ;
    PUSH32(esp, 0x325305);
    edx = 4;
    goto loc_000D448B;

loc_000D43FA: ;
    eax = MEM32(0x64D594);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4481; /* je: equal / zero */

loc_000D4403: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D440Bu); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000D440B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D59C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000D4436; /* jne: not equal / not zero */

loc_000D4419: ;
    MEM32(0x64D598) = 1;
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x000D442Fu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D442F: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D4436: ;
    PUSH32(esp, 0x000D443Bu); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_000D443B: ;
    eax = MEM32(0x64D620);
    ecx = MEM32(0x64D624);
    PUSH32(esp, 0x64D5A0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x329794);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D445Cu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D445C: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edx = 2;
    PUSH32(esp, 0x000D446Bu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D446B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x000D447Au); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D447A: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D4481: ;
    PUSH32(esp, 0x329754);
    edx = 0x1E;

loc_000D448B: ;
    PUSH32(esp, 0x000D4490u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D4490: ;
    ecx = MEM32(esp + 0x104);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D449Fu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D449F: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D44B0
 * Original: 0x000D44B0 - 0x000D459C (236 bytes, 57 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D44B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D44B0: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x108) = eax;
    eax = MEM32(0x64D738);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D44DA; /* jne: not equal / not zero */

loc_000D44CB: ;
    PUSH32(esp, 0x325305);
    edx = 4;
    goto loc_000D4581;

loc_000D44DA: ;
    eax = MEM32(0x64D72C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4577; /* je: equal / zero */

loc_000D44E7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 8;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x118);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000D4506u); RECOMP_ABI_CALL(0x00281CA7u, sub_00281CA7); /* call 0x00281CA7 */

loc_000D4506: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4527; /* jne: not equal / not zero */

loc_000D450A: ;
    MEM32(0x64D730) = 1;
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x000D4520u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D4520: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D4527: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4589; /* je: equal / zero */

loc_000D452C: ;
    PUSH32(esp, 0x000D4531u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_000D4531: ;
    edx = MEM32(0x64D728);
    eax = MEM32(0x64D734);
    PUSH32(esp, 0x64D628);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x329794);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D4552u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D4552: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = 2;
    PUSH32(esp, 0x000D4561u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D4561: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x000D4570u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D4570: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D4577: ;
    PUSH32(esp, 0x329754);
    edx = 0x1E;

loc_000D4581: ;
    PUSH32(esp, 0x000D4586u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D4586: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4589: ;
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x000D4595u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D4595: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D45A0
 * Original: 0x000D45A0 - 0x000D468C (236 bytes, 57 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D45A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D45A0: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x108) = eax;
    eax = MEM32(0x64D738);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D45CA; /* jne: not equal / not zero */

loc_000D45BB: ;
    PUSH32(esp, 0x325305);
    edx = 4;
    goto loc_000D4671;

loc_000D45CA: ;
    eax = MEM32(0x64D594);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4667; /* je: equal / zero */

loc_000D45D7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 8;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x118);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000D45F6u); RECOMP_ABI_CALL(0x00281CA7u, sub_00281CA7); /* call 0x00281CA7 */

loc_000D45F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4617; /* jne: not equal / not zero */

loc_000D45FA: ;
    MEM32(0x64D730) = 1;
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x000D4610u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D4610: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D4617: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4679; /* je: equal / zero */

loc_000D461C: ;
    PUSH32(esp, 0x000D4621u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_000D4621: ;
    edx = MEM32(0x64D728);
    eax = MEM32(0x64D734);
    PUSH32(esp, 0x64D628);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x329794);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D4642u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D4642: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = 2;
    PUSH32(esp, 0x000D4651u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D4651: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x000D4660u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D4660: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D4667: ;
    PUSH32(esp, 0x329754);
    edx = 0x1E;

loc_000D4671: ;
    PUSH32(esp, 0x000D4676u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D4676: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4679: ;
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x000D4685u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D4685: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D4690
 * Original: 0x000D4690 - 0x000D46C2 (50 bytes, 13 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4690: ;
    eax = MEM32(0x64D738);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D46AC; /* jne: not equal / not zero */

loc_000D4699: ;
    PUSH32(esp, 0x325305);
    edx = 4;
    PUSH32(esp, 0x000D46A8u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D46A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D46AC: ;
    eax = MEM32(0x64D594);
    PUSH32(esp, eax);
    MEM32(0x64D598) = 0;
    PUSH32(esp, 0x000D46C1u); RECOMP_ABI_CALL(0x00281B5Fu, sub_00281B5F); /* call 0x00281B5F */

loc_000D46C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D46D0
 * Original: 0x000D46D0 - 0x000D47B1 (225 bytes, 54 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D46D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D46D0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x100) = eax;
    eax = MEM32(0x64D738);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D46FD; /* jne: not equal / not zero */

loc_000D46EB: ;
    PUSH32(esp, 0x325305);
    edx = 4;
    PUSH32(esp, 0x000D46FAu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D46FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D46FD: ;
    eax = MEM32(0x64D72C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D478C; /* je: equal / zero */

loc_000D470A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D4712u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000D4712: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4733; /* jne: not equal / not zero */

loc_000D4716: ;
    MEM32(0x64D730) = 1;
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x000D472Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D472C: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D4733: ;
    PUSH32(esp, 0x000D4738u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_000D4738: ;
    eax = MEM32(0x64D728);
    ecx = MEM32(0x64D734);
    PUSH32(esp, 0x64D628);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x329794);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D4759u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D4759: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edx = 2;
    PUSH32(esp, 0x000D4768u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D4768: ;
    ecx = MEM32(0x64D72C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D4779u); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_000D4779: ;
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x000D4785u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D4785: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D478C: ;
    PUSH32(esp, 0x329714);
    edx = 0x1E;
    PUSH32(esp, 0x000D479Bu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D479B: ;
    ecx = MEM32(esp + 0x104);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D47AAu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D47AA: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D47C0
 * Original: 0x000D47C0 - 0x000D47D6 (22 bytes, 5 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D47C0(void)
{

loc_000D47C0: ;
    eax = MEM32(0x64D72C);
    PUSH32(esp, eax);
    MEM32(0x64D730) = 0;
    PUSH32(esp, 0x000D47D5u); RECOMP_ABI_CALL(0x00281B5Fu, sub_00281B5F); /* call 0x00281B5F */

loc_000D47D5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D47E0
 * Original: 0x000D47E0 - 0x000D47FE (30 bytes, 8 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D47E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D47E0: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64D628);
    PUSH32(esp, 0x000D47F0u); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_000D47F0: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D728) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4800
 * Original: 0x000D4800 - 0x000D4805 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4800: ;
    g_seh_ebp = ebp; sub_000ED270(); return; /* tail jmp 0x000ED270 */

}

/**
 * sub_000D4810
 * Original: 0x000D4810 - 0x000D4815 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4810: ;
    g_seh_ebp = ebp; sub_000D4820(); return; /* tail jmp 0x000D4820 */

}

/**
 * sub_000D4820
 * Original: 0x000D4820 - 0x000D4835 (21 bytes, 7 insns)
 * Folder: sound (between: 0x000D4270 and 0x000D4840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4820: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 1;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4840
 * Original: 0x000D4840 - 0x000D48D1 (145 bytes, 41 insns)
 * Folder: sound (source: CASyncBankUnloader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4840: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D4860; /* jne: not equal / not zero */

loc_000D4847: ;
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x3296B4);
    edx = 0x3296F8;
    ecx = 0x32993C;
    PUSH32(esp, 0x000D485Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D485D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4860: ;
    PUSH32(esp, 0x000D4865u); RECOMP_ABI_CALL(0x000D48E0u, sub_000D48E0); /* call 0x000D48E0 */

loc_000D4865: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4882; /* jne: not equal / not zero */

loc_000D4869: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x329688);
    edx = 0x329694;
    ecx = 0x32993C;
    PUSH32(esp, 0x000D487Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D487F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4882: ;
    _fa = (uint32_t)(MEM32(edi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x44), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D48A1; /* je: equal / zero */

loc_000D4888: ;
    PUSH32(esp, 0x45);
    PUSH32(esp, 0x32990C);
    edx = 0x324880;
    ecx = 0x32993C;
    PUSH32(esp, 0x000D489Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D489E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D48A1: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D48BF; /* jne: not equal / not zero */

loc_000D48A6: ;
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x3298FC);
    edx = 0x324880;
    ecx = 0x32993C;
    PUSH32(esp, 0x000D48BCu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D48BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D48BF: ;
    eax = esi;
    PUSH32(esp, 0x000D48C6u); RECOMP_ABI_CALL(0x000D4820u, sub_000D4820); /* call 0x000D4820 */

loc_000D48C6: ;
    MEM32(esi) = 0;
    MEM32(esi + 8) = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D48E0
 * Original: 0x000D48E0 - 0x000D4908 (40 bytes, 13 insns)
 * Folder: sound (source: CASyncBankUnloader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D48E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D48E0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4905; /* je: equal / zero */

loc_000D48E5: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4905; /* je: equal / zero */

loc_000D48EC: ;
    PUSH32(esp, 0x55);
    PUSH32(esp, 0x3295E0);
    edx = 0x3298A0;
    ecx = 0x32993C;
    PUSH32(esp, 0x000D4902u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D4902: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4905: ;
    eax = MEM32(esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4910
 * Original: 0x000D4910 - 0x000D493A (42 bytes, 17 insns)
 * Folder: sound (between: 0x000D48E0 and 0x000D4940)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4910: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000D4918u); RECOMP_ABI_CALL(0x000D48E0u, sub_000D48E0); /* call 0x000D48E0 */

loc_000D4918: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4920; /* je: equal / zero */

loc_000D491C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4920: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D492D; /* je: equal / zero */

loc_000D4926: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D492D: ;
    MEM32(esi) = 1;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4940
 * Original: 0x000D4940 - 0x000D49C0 (128 bytes, 43 insns)
 * Folder: sound (source: CASyncBankUnloader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4940: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000D4948u); RECOMP_ABI_CALL(0x000D48E0u, sub_000D48E0); /* call 0x000D48E0 */

loc_000D4948: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D49A5; /* jne: not equal / not zero */

loc_000D494C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D497B; /* ja: above (unsigned >) */

loc_000D4954: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD49A8); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000D495Bu) goto loc_000D495B;
    if (_jt == 0x000D4962u) goto loc_000D4962;
    if (_jt == 0x000D4969u) goto loc_000D4969;
    if (_jt == 0x000D4974u) goto loc_000D4974;
    if (_jt == 0x000D4997u) goto loc_000D4997;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D495B: ;
    PUSH32(esp, 0x000D4960u); RECOMP_ABI_CALL(0x000D49C0u, sub_000D49C0); /* call 0x000D49C0 */

loc_000D4960: ;
    goto loc_000D4997;

loc_000D4962: ;
    PUSH32(esp, 0x000D4967u); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_000D4967: ;
    goto loc_000D4997;

loc_000D4969: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000D4971u); RECOMP_ABI_CALL(0x000D4AD0u, sub_000D4AD0); /* call 0x000D4AD0 */

loc_000D4971: ;
    POP32(esp, edi);
    goto loc_000D4997;

loc_000D4974: ;
    PUSH32(esp, 0x000D4979u); RECOMP_ABI_CALL(0x000D4B50u, sub_000D4B50); /* call 0x000D4B50 */

loc_000D4979: ;
    goto loc_000D4997;

loc_000D497B: ;
    PUSH32(esp, 0x81);
    PUSH32(esp, 0x324878);
    edx = 0x3295C4;
    ecx = 0x32993C;
    PUSH32(esp, 0x000D4994u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D4994: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4997: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D49A5; /* jne: not equal / not zero */

loc_000D499D: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D4BD0(); return; /* tail jmp 0x000D4BD0 */

loc_000D49A5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D49C0
 * Original: 0x000D49C0 - 0x000D4A18 (88 bytes, 22 insns)
 * Folder: sound (source: CASyncBankUnloader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D49C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D49C0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D49E3; /* je: equal / zero */

loc_000D49C7: ;
    PUSH32(esp, 0x8C);
    PUSH32(esp, 0x329880);
    edx = 0x329598;
    ecx = 0x32993C;
    PUSH32(esp, 0x000D49E0u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D49E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D49E3: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4A07; /* jne: not equal / not zero */

loc_000D49EB: ;
    PUSH32(esp, 0x8D);
    PUSH32(esp, 0x329848);
    edx = 0x32985C;
    ecx = 0x32993C;
    PUSH32(esp, 0x000D4A04u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D4A04: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4A07: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx) = 0;
    MEM32(esi + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4A20
 * Original: 0x000D4A20 - 0x000D4ACA (170 bytes, 58 insns)
 * Folder: sound (source: CASyncBankUnloader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4A20: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4A42; /* je: equal / zero */

loc_000D4A26: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x329800);
    edx = 0x32981C;
    ecx = 0x32993C;
    PUSH32(esp, 0x000D4A3Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D4A3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4A42: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000D4A85; /* jle: less or equal (signed <=) */

loc_000D4A53: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D4A55: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x34);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D4A63u); RECOMP_ABI_CALL(0x000CBCC0u, sub_000CBCC0); /* call 0x000CBCC0 */

loc_000D4A63: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x34);
    MEM32(edx + edi + 0x48) = 0;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x64;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4A55; /* jl: less (signed <) */

loc_000D4A85: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x30);
    ecx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D4ABB; /* jle: less or equal (signed <=) */

loc_000D4A94: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D4A96: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x38);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D4AA4u); RECOMP_ABI_CALL(0x000D50E0u, sub_000D50E0); /* call 0x000D50E0 */

loc_000D4AA4: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4A96; /* jl: less (signed <) */

loc_000D4ABB: ;
    PUSH32(esp, 0x000D4AC0u); RECOMP_ABI_CALL(0x000CAF40u, sub_000CAF40); /* call 0x000CAF40 */

loc_000D4AC0: ;
    POP32(esp, edi);
    MEM32(esi + 4) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4AD0
 * Original: 0x000D4AD0 - 0x000D4B47 (119 bytes, 39 insns)
 * Folder: sound (source: CASyncBankUnloader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4AD0: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4AF2; /* je: equal / zero */

loc_000D4AD6: ;
    PUSH32(esp, 0xB2);
    PUSH32(esp, 0x3297E0);
    edx = 0x32981C;
    ecx = 0x32993C;
    PUSH32(esp, 0x000D4AEFu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D4AEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4AF2: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D4B15; /* jge: greater or equal (signed >=) */

loc_000D4B03: ;
    ecx = MEM32(eax + 0x38);
    esi = esi << 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D4B10u); RECOMP_ABI_CALL(0x000D50C0u, sub_000D50C0); /* call 0x000D50C0 */

loc_000D4B10: ;
    MEM32(edi + 0x10) = MEM32(edi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4B15: ;
    eax = MEM32(eax + 0x38);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4B29; /* je: equal / zero */

loc_000D4B1E: ;
    PUSH32(esp, 0x000D4B23u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D4B23: ;
    edx = MEM32(edi + 8);
    MEM32(edx + 0x38) = esi;

loc_000D4B29: ;
    eax = MEM32(edi + 8);
    eax = MEM32(eax + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4B3E; /* je: equal / zero */

loc_000D4B33: ;
    PUSH32(esp, 0x000D4B38u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D4B38: ;
    ecx = MEM32(edi + 8);
    MEM32(ecx + 0x40) = esi;

loc_000D4B3E: ;
    MEM32(edi + 4) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4B50
 * Original: 0x000D4B50 - 0x000D4BCA (122 bytes, 37 insns)
 * Folder: sound (source: CASyncBankUnloader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4B50: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4B72; /* je: equal / zero */

loc_000D4B56: ;
    PUSH32(esp, 0xCE);
    PUSH32(esp, 0x3297BC);
    edx = 0x32981C;
    ecx = 0x32993C;
    PUSH32(esp, 0x000D4B6Fu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D4B6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4B72: ;
    eax = MEM32(esi + 8);
    edx = MEM32(eax + 0x30);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D4BAF; /* jge: greater or equal (signed >=) */

loc_000D4B83: ;
    eax = MEM32(eax + ecx * 8);
    PUSH32(esp, 0x000D4B8Bu); RECOMP_ABI_CALL(0x000DB5C0u, sub_000DB5C0); /* call 0x000DB5C0 */

loc_000D4B8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4BAB; /* jne: not equal / not zero */

loc_000D4B8F: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x3C);
    edx = MEM32(eax + ecx * 8 + 4);
    eax = eax + ecx * 8;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D4BA8u); RECOMP_ABI_CALL(0x000DB330u, sub_000DB330); /* call 0x000DB330 */

loc_000D4BA8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4BAB: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000D4BAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4BC2; /* je: equal / zero */

loc_000D4BB3: ;
    PUSH32(esp, 0x000D4BB8u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D4BB8: ;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x3C) = 0;

loc_000D4BC2: ;
    MEM32(esi + 4) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4BD0
 * Original: 0x000D4BD0 - 0x000D4BD8 (8 bytes, 2 insns)
 * Folder: sound (between: 0x000D4B50 and 0x000D4CE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4BD0(void)
{

loc_000D4BD0: ;
    MEM32(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4BE0
 * Original: 0x000D4BE0 - 0x000D4C14 (52 bytes, 26 insns)
 * Folder: sound (between: 0x000D4B50 and 0x000D4CE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4BE0: ;
    PUSH32(esp, esi);
    esi = eax;

loc_000D4BE3: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    SET_LO8(eax, MEM8(esi));
    if (CMP_L(_fas, _fbs)) goto loc_000D4BF4; /* jl: less (signed <) */

loc_000D4BEC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D4BF4; /* jg: greater (signed >) */

loc_000D4BF1: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_000D4BF4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4BFE; /* jl: less (signed <) */

loc_000D4BF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D4BFE; /* jg: greater (signed >) */

loc_000D4BFC: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_000D4BFE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4C0A; /* jne: not equal / not zero */

loc_000D4C02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4C0A; /* je: equal / zero */

loc_000D4C06: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000D4BE3;

loc_000D4C0A: ;
    edx = SX8(LO8(eax));
    eax = SX8(LO8(ecx));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4C20
 * Original: 0x000D4C20 - 0x000D4C41 (33 bytes, 15 insns)
 * Folder: sound (between: 0x000D4B50 and 0x000D4CE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4C20: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    edx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D4C40; /* je: equal / zero */

loc_000D4C27: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4C38; /* jl: less (signed <) */

loc_000D4C2E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D4C38; /* jg: greater (signed >) */

loc_000D4C33: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edx) = LO8(ecx);

loc_000D4C38: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4C27; /* jne: not equal / not zero */

loc_000D4C40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4C50
 * Original: 0x000D4C50 - 0x000D4C7D (45 bytes, 14 insns)
 * Folder: sound (between: 0x000D4B50 and 0x000D4CE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4C50: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM8(edi + esi + -1) = 0;
    PUSH32(esp, 0x000D4C5Du); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_000D4C5D: ;
    SET_LO8(eax, MEM8(edi + esi + -1));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4C7C; /* je: equal / zero */

loc_000D4C68: ;
    eax = 0x32997C;
    edx = 8;
    PUSH32(esp, 0x000D4C77u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D4C77: ;
    MEM8(edi + esi + -1) = 0;

loc_000D4C7C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4C80
 * Original: 0x000D4C80 - 0x000D4CC3 (67 bytes, 30 insns)
 * Folder: sound (between: 0x000D4B50 and 0x000D4CE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4C80: ;
    SET_LO8(ecx, MEM8(esi));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000D4C8B; /* jne: not equal / not zero */

loc_000D4C8A: ;
    esp += 4; return; /* ret */

loc_000D4C8B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2D (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D4C9B; /* jne: not equal / not zero */

loc_000D4C91: ;
    edi = 1;
    edx = esi + 1;
    goto loc_000D4C9D;

loc_000D4C9B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D4C9D: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4CBB; /* jl: less (signed <) */

loc_000D4CA4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D4CBB; /* jg: greater (signed >) */

loc_000D4CA9: ;
    ecx = SX8(LO8(ecx));
    eax = eax + eax * 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx + eax * 2 + -48;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D4CA4; /* jge: greater or equal (signed >=) */

loc_000D4CBB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D4CC2; /* je: equal / zero */

loc_000D4CC0: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000D4CC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4CD0
 * Original: 0x000D4CD0 - 0x000D4CDD (13 bytes, 6 insns)
 * Folder: sound (between: 0x000D4B50 and 0x000D4CE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4CD0: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D4CD9u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D4CD9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D4CE0
 * Original: 0x000D4CE0 - 0x000D4D93 (179 bytes, 49 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4CE0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x5F6C80;

loc_000D4CE8: ;
    ecx = MEM32(eax + -32);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4D1E; /* jne: not equal / not zero */

loc_000D4CEF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4D13; /* jne: not equal / not zero */

loc_000D4CF4: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4D16; /* jne: not equal / not zero */

loc_000D4CFB: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4D1B; /* jne: not equal / not zero */

loc_000D4D02: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F8C80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F8C80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4CE8; /* jl: less (signed <) */

loc_000D4D11: ;
    goto loc_000D4D1E;

loc_000D4D13: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000D4D1E;

loc_000D4D16: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D4D1E;

loc_000D4D1B: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4D1E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4D3A; /* jne: not equal / not zero */

loc_000D4D26: ;
    eax = 0x325305;
    edx = 0x16;
    PUSH32(esp, 0x000D4D35u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D4D35: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4D3A: ;
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + 0x5F6C70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4902385) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5F6C70), 0x4902385 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4D60; /* jne: not equal / not zero */

loc_000D4D49: ;
    PUSH32(esp, 0x329E7C);
    eax = 0xC5;
    ecx = 0x329E50;
    PUSH32(esp, 0x000D4D5Du); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D4D5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4D60: ;
    ecx = 1;
    eax = esi + 0x5F6C60;
    MEM32(esi + 0x5F6C70) = 0x4902385;
    MEM32(esi + 0x5F6C64) = ecx;
    MEM32(esi + 0x5F6C68) = ecx;
    MEM32(esi + 0x5F6C74) = 0xFFFFFFFFu;
    MEM32(eax) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4DA0
 * Original: 0x000D4DA0 - 0x000D4DCE (46 bytes, 10 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4DA0: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4902385) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0x4902385 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4DC0; /* je: equal / zero */

loc_000D4DA9: ;
    PUSH32(esp, 0x329E7C);
    eax = 0xD9;
    ecx = 0x329E14;
    PUSH32(esp, 0x000D4DBDu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D4DBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4DC0: ;
    MEM32(esi + 0x10) = 0;
    MEM32(esi) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4DD0
 * Original: 0x000D4DD0 - 0x000D4E67 (151 bytes, 51 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D4DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4DD0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0x5F6C74;
    ebp = 0x100;
    /* nop */

loc_000D4DE0: ;
    eax = MEM32(edi + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4E24; /* jne: not equal / not zero */

loc_000D4DE7: ;
    eax = MEM32(edi + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4E24; /* jne: not equal / not zero */

loc_000D4DEE: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4E0D; /* je: equal / zero */

loc_000D4DF5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4E24; /* je: equal / zero */

loc_000D4DFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4E24; /* jne: not equal / not zero */

loc_000D4DFE: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4E24; /* jne: not equal / not zero */

loc_000D4E0D: ;
    PUSH32(esp, 0x329E7C);
    eax = 0xFB;
    ecx = 0x324878;
    PUSH32(esp, 0x000D4E21u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D4E21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4E24: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D4DE0; /* jne: not equal / not zero */

loc_000D4E2A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000D4E56; /* je: equal / zero */

loc_000D4E31: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x18) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 4) = 1;
    MEM32(esi + 0xC) = ecx;
    eax = esi;
    esp += 4; return; /* ret */

loc_000D4E56: ;
    MEM32(esi + 0x10) = 0;
    MEM32(esi) = 1;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D4E70
 * Original: 0x000D4E70 - 0x000D4F36 (198 bytes, 85 insns)
 * Folder: sound (between: 0x000D4DD0 and 0x000D5040)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 4);
    MEM32(edi + 4) = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D4F1A; /* ja: above (unsigned >) */

loc_000D4E8B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD4F38); /* switch: 12 entries, 8 targets */
    if (_jt == 0x000D4E92u) goto loc_000D4E92;
    if (_jt == 0x000D4EA3u) goto loc_000D4EA3;
    if (_jt == 0x000D4EB8u) goto loc_000D4EB8;
    if (_jt == 0x000D4EC9u) goto loc_000D4EC9;
    if (_jt == 0x000D4EDCu) goto loc_000D4EDC;
    if (_jt == 0x000D4EF0u) goto loc_000D4EF0;
    if (_jt == 0x000D4F01u) goto loc_000D4F01;
    if (_jt == 0x000D4F1Au) goto loc_000D4F1A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D4E92: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D4E98u); RECOMP_ABI_CALL(0x000DC950u, sub_000DC950); /* call 0x000DC950 */

loc_000D4E98: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4EA3: ;
    PUSH32(esp, esi);
    ecx = edx;
    eax = edi;
    PUSH32(esp, 0x000D4EADu); RECOMP_ABI_CALL(0x000DC4D0u, sub_000DC4D0); /* call 0x000DC4D0 */

loc_000D4EAD: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4EB8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D4EBEu); RECOMP_ABI_CALL(0x000DC0B0u, sub_000DC0B0); /* call 0x000DC0B0 */

loc_000D4EBE: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4EC9: ;
    eax = edx;
    ecx = edi;
    edx = esi;
    PUSH32(esp, 0x000D4ED4u); RECOMP_ABI_CALL(0x000DA6D0u, sub_000DA6D0); /* call 0x000DA6D0 */

loc_000D4ED4: ;
    esi = eax;
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4EDC: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x000D4EE5u); RECOMP_ABI_CALL(0x000DCF00u, sub_000DCF00); /* call 0x000DCF00 */

loc_000D4EE5: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D4EF6u); RECOMP_ABI_CALL(0x000DBD70u, sub_000DBD70); /* call 0x000DBD70 */

loc_000D4EF6: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4F01: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0x000D4F0Fu); RECOMP_ABI_CALL(0x000DA6E0u, sub_000DA6E0); /* call 0x000DA6E0 */

loc_000D4F0F: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4F1A: ;
    PUSH32(esp, 0x325305);
    edx = 0x17;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D4F2Bu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D4F2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4F36
 * Original: 0x000D4F36 - 0x000D4F70 (58 bytes, 1 insns)
 * Folder: sound (between: 0x000D4DD0 and 0x000D5040)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4F36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4F36: ;
    edi = edi;

    g_seh_ebp = ebp; sub_000D4F70(); return; /* fallthrough 0x000D4F70 */

}

/**
 * sub_000D4F70
 * Original: 0x000D4F70 - 0x000D4F9C (44 bytes, 19 insns)
 * Folder: sound (between: 0x000D4DD0 and 0x000D5040)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4F70: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D4F78u); RECOMP_ABI_CALL(0x000D4FA0u, sub_000D4FA0); /* call 0x000D4FA0 */

loc_000D4F78: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4F98; /* je: equal / zero */

loc_000D4F82: ;
    PUSH32(esp, 0x000D4F87u); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_000D4F87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4F82; /* je: equal / zero */

loc_000D4F8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4F98; /* jne: not equal / not zero */

loc_000D4F91: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D4F98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4FA0
 * Original: 0x000D4FA0 - 0x000D5033 (147 bytes, 52 insns)
 * Folder: sound (between: 0x000D4DD0 and 0x000D5040)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D4FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4FA0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = 0xC;
    PUSH32(esp, 0x000D4FB0u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D4FB0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4FCB; /* jne: not equal / not zero */

loc_000D4FB6: ;
    eax = 0x324918;
    edx = 0xA;
    PUSH32(esp, 0x000D4FC5u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D4FC5: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D4FCB: ;
    MEM32(esi) = edi;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    ecx = MEM32(ebx + 4);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5010; /* jne: not equal / not zero */

loc_000D4FE7: ;
    ecx = MEM32(esp + 0xC);
    MEM32(edi + 4) = eax;
    PUSH32(esp, ebx);
    eax = ebp;
    edx = edi;
    PUSH32(esp, 0x000D4FF8u); RECOMP_ABI_CALL(0x000DA6A0u, sub_000DA6A0); /* call 0x000DA6A0 */

loc_000D4FF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D502E; /* jne: not equal / not zero */

loc_000D5003: ;
    eax = esi;
    PUSH32(esp, 0x000D500Au); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D500A: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D5010: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    edx = ebp;
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x000D5020u); RECOMP_ABI_CALL(0x000D4E70u, sub_000D4E70); /* call 0x000D4E70 */

loc_000D5020: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5003; /* je: equal / zero */

loc_000D5027: ;
    MEM32(esi + 8) = 1;

loc_000D502E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5040
 * Original: 0x000D5040 - 0x000D50B9 (121 bytes, 41 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D5040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5040: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D509A; /* je: equal / zero */

loc_000D5044: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D509A; /* je: equal / zero */

loc_000D5049: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D508D; /* jne: not equal / not zero */

loc_000D5050: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D5059u); RECOMP_ABI_CALL(0x000DA6C0u, sub_000DA6C0); /* call 0x000DA6C0 */

loc_000D5059: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5089; /* je: equal / zero */

loc_000D5060: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5079; /* jne: not equal / not zero */

loc_000D5065: ;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = 1;
    eax = esi;
    PUSH32(esp, 0x000D5075u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D5075: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000D5079: ;
    ecx = MEM32(esi);
    eax = esi;
    MEM32(ecx + 0xC) = 0;
    PUSH32(esp, 0x000D5089u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D5089: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000D508D: ;
    eax = esi;
    PUSH32(esp, 0x000D5094u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D5094: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_000D509A: ;
    PUSH32(esp, 0x1DA);
    PUSH32(esp, 0x324878);
    edx = 0x329DE4;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D50B3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D50B3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D50C0
 * Original: 0x000D50C0 - 0x000D50DB (27 bytes, 11 insns)
 * Folder: sound (between: 0x000D5040 and 0x000D5420)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D50C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D50C0: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D50CB; /* je: equal / zero */

loc_000D50C6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000D50D2; /* jne: not equal / not zero */

loc_000D50CB: ;
    eax = esi;
    PUSH32(esp, 0x000D50D2u); RECOMP_ABI_CALL(0x000DA6F0u, sub_000DA6F0); /* call 0x000DA6F0 */

loc_000D50D2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D50E0
 * Original: 0x000D50E0 - 0x000D5192 (178 bytes, 61 insns)
 * Folder: sound (between: 0x000D5040 and 0x000D5420)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D50E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D50E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x40C) = eax;
    eax = MEM32(0x64D7CC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D517F; /* je: equal / zero */

loc_000D5106: ;
    esi = 0x5F6C78;
    goto loc_000D5110;

    /* nop */

loc_000D5110: ;
    _fa = (uint32_t)(MEM32(esi + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -24), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5174; /* jne: not equal / not zero */

loc_000D5115: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5174; /* jne: not equal / not zero */

loc_000D511C: ;
    _fa = (uint32_t)(MEM32(esi + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5174; /* je: equal / zero */

loc_000D5121: ;
    _fa = (uint32_t)(MEM32(esi + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -12), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5174; /* jne: not equal / not zero */

loc_000D5126: ;
    MEM8(esp + 0x10) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xFF;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x329D58);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D514Cu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D514C: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D515Bu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D515B: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 4);
    edx = MEM32(esi + -4);
    ecx = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x33BB6C); PUSH32(esp, 0x000D516Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000D5167u); } /* indirect call */
    }

loc_000D516E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + -20) = ebx;

loc_000D5174: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F8C78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5F8C78 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D5110; /* jl: less (signed <) */

loc_000D517F: ;
    ecx = MEM32(esp + 0x414);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D518Bu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D518B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D51A0
 * Original: 0x000D51A0 - 0x000D51C4 (36 bytes, 9 insns)
 * Folder: sound (between: 0x000D5040 and 0x000D5420)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D51A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D51A0: ;
    eax = 0x5F6C70;
    ecx = 1;
    /* nop */

loc_000D51B0: ;
    MEM32(eax + -16) = ecx;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F8C70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F8C70 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D51B0; /* jl: less (signed <) */

loc_000D51C3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D51D0
 * Original: 0x000D51D0 - 0x000D520D (61 bytes, 14 insns)
 * Folder: sound (between: 0x000D5040 and 0x000D5420)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D51D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D51D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000D51D8u); RECOMP_ABI_CALL(0x000D51A0u, sub_000D51A0); /* call 0x000D51A0 */

loc_000D51D8: ;
    PUSH32(esp, 0x000D51DDu); RECOMP_ABI_CALL(0x000DA3E0u, sub_000DA3E0); /* call 0x000DA3E0 */

loc_000D51DD: ;
    MEM32(0x64D7C8) = eax;
    eax = esp;
    PUSH32(esp, 0x000D51EAu); RECOMP_ABI_CALL(0x000D6430u, sub_000D6430); /* call 0x000D6430 */

loc_000D51EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D51F0u); RECOMP_ABI_CALL(0x000DA700u, sub_000DA700); /* call 0x000DA700 */

loc_000D51F0: ;
    PUSH32(esp, 0x000D51F5u); RECOMP_ABI_CALL(0x000DC270u, sub_000DC270); /* call 0x000DC270 */

loc_000D51F5: ;
    PUSH32(esp, 0x000D51FAu); RECOMP_ABI_CALL(0x000DB7D0u, sub_000DB7D0); /* call 0x000DB7D0 */

loc_000D51FA: ;
    eax = MEM32(0x64D7C8);
    MEM32(0x64D7CC) = 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D5210
 * Original: 0x000D5210 - 0x000D521D (13 bytes, 5 insns)
 * Folder: sound (between: 0x000D5040 and 0x000D5420)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5210(void)
{

loc_000D5210: ;
    PUSH32(esp, 0x000D5215u); RECOMP_ABI_CALL(0x000D63C0u, sub_000D63C0); /* call 0x000D63C0 */

loc_000D5215: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D521Bu); RECOMP_ABI_CALL(0x000DA700u, sub_000DA700); /* call 0x000DA700 */

loc_000D521B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5220
 * Original: 0x000D5220 - 0x000D522F (15 bytes, 6 insns)
 * Folder: sound (between: 0x000D5040 and 0x000D5420)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5220(void)
{

loc_000D5220: ;
    eax = esi;
    PUSH32(esp, 0x000D5227u); RECOMP_ABI_CALL(0x000D6740u, sub_000D6740); /* call 0x000D6740 */

loc_000D5227: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D522Du); RECOMP_ABI_CALL(0x000DA730u, sub_000DA730); /* call 0x000DA730 */

loc_000D522D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5230
 * Original: 0x000D5230 - 0x000D53E2 (434 bytes, 164 insns)
 * Folder: sound (between: 0x000D5040 and 0x000D5420)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D5230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D52A3; /* jne: not equal / not zero */

loc_000D5255: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = 0;
    ecx = 0x1F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x329D2C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D527Cu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D527C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    edx = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D528Du); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D528D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x94);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D529Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D529C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D52A3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D52A8u); RECOMP_ABI_CALL(0x000D4CE0u, sub_000D4CE0); /* call 0x000D4CE0 */

loc_000D52A8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D528D; /* je: equal / zero */

loc_000D52AF: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D53AB; /* ja: above (unsigned >) */

loc_000D52BC: ;
    edx = ZX8(MEM8(eax + 0xD5408));
    { uint32_t _jt = MEM32(edx * 4 + 0xD53E4); /* switch: 9 entries, 9 targets */
    if (_jt == 0x000D52CAu) goto loc_000D52CA;
    if (_jt == 0x000D52E8u) goto loc_000D52E8;
    if (_jt == 0x000D5302u) goto loc_000D5302;
    if (_jt == 0x000D5324u) goto loc_000D5324;
    if (_jt == 0x000D5343u) goto loc_000D5343;
    if (_jt == 0x000D5356u) goto loc_000D5356;
    if (_jt == 0x000D5375u) goto loc_000D5375;
    if (_jt == 0x000D5390u) goto loc_000D5390;
    if (_jt == 0x000D53ABu) goto loc_000D53AB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D52CA: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D52E0u); RECOMP_ABI_CALL(0x000DA500u, sub_000DA500); /* call 0x000DA500 */

loc_000D52E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D53C0;

loc_000D52E8: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D52FAu); RECOMP_ABI_CALL(0x000DC300u, sub_000DC300); /* call 0x000DC300 */

loc_000D52FA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D53C0;

loc_000D5302: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D531Cu); RECOMP_ABI_CALL(0x000DBE90u, sub_000DBE90); /* call 0x000DBE90 */

loc_000D531C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D53C0;

loc_000D5324: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D533Eu); RECOMP_ABI_CALL(0x000DC650u, sub_000DC650); /* call 0x000DC650 */

loc_000D533E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D53C0;

loc_000D5343: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5351u); RECOMP_ABI_CALL(0x000DAC30u, sub_000DAC30); /* call 0x000DAC30 */

loc_000D5351: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D53C0;

loc_000D5356: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5370u); RECOMP_ABI_CALL(0x000DC9A0u, sub_000DC9A0); /* call 0x000DC9A0 */

loc_000D5370: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D53C0;

loc_000D5375: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D538Bu); RECOMP_ABI_CALL(0x000DB810u, sub_000DB810); /* call 0x000DB810 */

loc_000D538B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D53C0;

loc_000D5390: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D53A6u); RECOMP_ABI_CALL(0x000DAE40u, sub_000DAE40); /* call 0x000DAE40 */

loc_000D53A6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D53C0;

loc_000D53AB: ;
    PUSH32(esp, 0x325305);
    edx = 0x17;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D53BAu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D53BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000D53C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ebx = eax;
    esi = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D53CCu); RECOMP_ABI_CALL(0x000D4DD0u, sub_000D4DD0); /* call 0x000D4DD0 */

loc_000D53CC: ;
    ecx = MEM32(esp + 0x9C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D53DBu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D53DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D53E2
 * Original: 0x000D53E2 - 0x000D5420 (62 bytes, 28 insns)
 * Folder: sound (between: 0x000D5040 and 0x000D5420)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D53E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D53E2: ;
    edi = edi;
    esp += 3414; return; /* ret 3410 */

}

/**
 * sub_000D5420
 * Original: 0x000D5420 - 0x000D548D (109 bytes, 42 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5420: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5448; /* je: equal / zero */

loc_000D5428: ;
    PUSH32(esp, 0x2AF);
    PUSH32(esp, 0x324878);
    edx = 0x329D1C;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5441u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5441: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D5448: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D545C; /* jne: not equal / not zero */

loc_000D5450: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D5457u); RECOMP_ABI_CALL(0x000D4DA0u, sub_000D4DA0); /* call 0x000D4DA0 */

loc_000D5457: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D545C: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    ecx = eax + eax * 2;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x33BB68); PUSH32(esp, 0x000D547Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5473u); } /* indirect call */
    }

loc_000D547A: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5488; /* jne: not equal / not zero */

loc_000D5483: ;
    PUSH32(esp, 0x000D5488u); RECOMP_ABI_CALL(0x000D4DA0u, sub_000D4DA0); /* call 0x000D4DA0 */

loc_000D5488: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5490
 * Original: 0x000D5490 - 0x000D54F3 (99 bytes, 38 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5490: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D54B8; /* je: equal / zero */

loc_000D5498: ;
    PUSH32(esp, 0x2CA);
    PUSH32(esp, 0x324878);
    edx = 0x329D1C;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D54B1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D54B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D54B8: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D54CC; /* jne: not equal / not zero */

loc_000D54C0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D54C7u); RECOMP_ABI_CALL(0x000D4DA0u, sub_000D4DA0); /* call 0x000D4DA0 */

loc_000D54C7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D54CC: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    edx = MEM32(esi + 0x14);
    ecx = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x33BB74); PUSH32(esp, 0x000D54E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D54D9u); } /* indirect call */
    }

loc_000D54E0: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D54EE; /* jne: not equal / not zero */

loc_000D54E9: ;
    PUSH32(esp, 0x000D54EEu); RECOMP_ABI_CALL(0x000D4DA0u, sub_000D4DA0); /* call 0x000D4DA0 */

loc_000D54EE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5500
 * Original: 0x000D5500 - 0x000D554B (75 bytes, 25 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5500: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5526; /* je: equal / zero */

loc_000D5508: ;
    PUSH32(esp, 0x2E3);
    PUSH32(esp, 0x324878);
    edx = 0x329D1C;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5521u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5521: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D5526: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5544; /* je: equal / zero */

loc_000D552D: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    edx = MEM32(esi + 0x14);
    ecx = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x33BB6C); PUSH32(esp, 0x000D5541u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000D553Au); } /* indirect call */
    }

loc_000D5541: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5544: ;
    PUSH32(esp, 0x000D5549u); RECOMP_ABI_CALL(0x000D4DA0u, sub_000D4DA0); /* call 0x000D4DA0 */

loc_000D5549: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5550
 * Original: 0x000D5550 - 0x000D55B9 (105 bytes, 30 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5550: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5572; /* je: equal / zero */

loc_000D5555: ;
    PUSH32(esp, 0x2F8);
    PUSH32(esp, 0x324878);
    edx = 0x329D1C;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D556Eu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D556E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D5572: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D55B8; /* je: equal / zero */

loc_000D5579: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D559C; /* je: equal / zero */

loc_000D5580: ;
    PUSH32(esp, 0x2FE);
    PUSH32(esp, 0x329CC4);
    edx = 0x329CF0;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5599u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5599: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D559C: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x14);
    MEM32(esi + 0x1C) = 1;
    eax = MEM32(eax + 4);
    ecx = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x33BB60); PUSH32(esp, 0x000D55B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D55B0u); } /* indirect call */
    }

loc_000D55B7: ;
    POP32(esp, ecx);

loc_000D55B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D55C0
 * Original: 0x000D55C0 - 0x000D5606 (70 bytes, 21 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D55C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D55C0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D55E2; /* je: equal / zero */

loc_000D55C5: ;
    PUSH32(esp, 0x30E);
    PUSH32(esp, 0x324878);
    edx = 0x329D1C;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D55DEu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D55DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D55E2: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5605; /* je: equal / zero */

loc_000D55E9: ;
    ecx = MEM32(eax + 0x18);
    MEM32(eax + 0x1C) = 0;
    ecx = MEM32(ecx + 4);
    eax = MEM32(eax + 0x14);
    edx = ecx + ecx * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x33BB64); PUSH32(esp, 0x000D5604u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D55FDu); } /* indirect call */
    }

loc_000D5604: ;
    POP32(esp, ecx);

loc_000D5605: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5610
 * Original: 0x000D5610 - 0x000D561A (10 bytes, 4 insns)
 * Folder: sound (between: 0x000D55C0 and 0x000D57C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5610: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D5616u); RECOMP_ABI_CALL(0x000DA480u, sub_000DA480); /* call 0x000DA480 */

loc_000D5616: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D5620
 * Original: 0x000D5620 - 0x000D5625 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D55C0 and 0x000D57C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D5620: ;
    g_seh_ebp = ebp; sub_000DA4C0(); return; /* tail jmp 0x000DA4C0 */

}

/**
 * sub_000D5630
 * Original: 0x000D5630 - 0x000D5649 (25 bytes, 6 insns)
 * Folder: sound (between: 0x000D55C0 and 0x000D57C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D5630: ;
    PUSH32(esp, 0x000D5635u); RECOMP_ABI_CALL(0x000DB7F0u, sub_000DB7F0); /* call 0x000DB7F0 */

loc_000D5635: ;
    PUSH32(esp, 0x000D563Au); RECOMP_ABI_CALL(0x000DC2D0u, sub_000DC2D0); /* call 0x000DC2D0 */

loc_000D563A: ;
    _fa = (uint32_t)(MEM32(0x64D7C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D7C8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5648; /* jne: not equal / not zero */

loc_000D5643: ;
    g_seh_ebp = ebp; sub_000DA450(); return; /* tail jmp 0x000DA450 */

loc_000D5648: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5650
 * Original: 0x000D5650 - 0x000D5658 (8 bytes, 4 insns)
 * Folder: sound (between: 0x000D55C0 and 0x000D57C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5650(void)
{

loc_000D5650: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D5656u); RECOMP_ABI_CALL(0x000DA7A0u, sub_000DA7A0); /* call 0x000DA7A0 */

loc_000D5656: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5660
 * Original: 0x000D5660 - 0x000D5665 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D55C0 and 0x000D57C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D5660: ;
    g_seh_ebp = ebp; sub_000DA7F0(); return; /* tail jmp 0x000DA7F0 */

}

/**
 * sub_000D5670
 * Original: 0x000D5670 - 0x000D5678 (8 bytes, 4 insns)
 * Folder: sound (between: 0x000D55C0 and 0x000D57C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5670(void)
{

loc_000D5670: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D5676u); RECOMP_ABI_CALL(0x000DA870u, sub_000DA870); /* call 0x000DA870 */

loc_000D5676: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5680
 * Original: 0x000D5680 - 0x000D5688 (8 bytes, 4 insns)
 * Folder: sound (between: 0x000D55C0 and 0x000D57C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5680(void)
{

loc_000D5680: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D5686u); RECOMP_ABI_CALL(0x000DA830u, sub_000DA830); /* call 0x000DA830 */

loc_000D5686: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5690
 * Original: 0x000D5690 - 0x000D5698 (8 bytes, 4 insns)
 * Folder: sound (between: 0x000D55C0 and 0x000D57C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5690(void)
{

loc_000D5690: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D5696u); RECOMP_ABI_CALL(0x000DA960u, sub_000DA960); /* call 0x000DA960 */

loc_000D5696: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D56A0
 * Original: 0x000D56A0 - 0x000D56A8 (8 bytes, 4 insns)
 * Folder: sound (between: 0x000D55C0 and 0x000D57C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D56A0(void)
{

loc_000D56A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D56A6u); RECOMP_ABI_CALL(0x000DA990u, sub_000DA990); /* call 0x000DA990 */

loc_000D56A6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D56B0
 * Original: 0x000D56B0 - 0x000D57BA (266 bytes, 97 insns)
 * Folder: sound (between: 0x000D55C0 and 0x000D57C0)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D56B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D56B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x90) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D56F3; /* jne: not equal / not zero */

loc_000D56D7: ;
    MEM8(esp + 0x10) = LO8(eax);
    ecx = 0x1F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x329C80);
    goto loc_000D571B;

loc_000D56F3: ;
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D574D; /* je: equal / zero */

loc_000D56FA: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D574D; /* jne: not equal / not zero */

loc_000D56FF: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x329C38);

loc_000D571B: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5725u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D5725: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5734u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D5734: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5737: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x94);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5746u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D5746: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D574D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5752u); RECOMP_ABI_CALL(0x000D4CE0u, sub_000D4CE0); /* call 0x000D4CE0 */

loc_000D5752: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5737; /* je: equal / zero */

loc_000D5759: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5782; /* je: equal / zero */

loc_000D5761: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5782; /* je: equal / zero */

loc_000D5766: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5782; /* je: equal / zero */

loc_000D576B: ;
    PUSH32(esp, 0x325305);
    edx = 0x17;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D577Au); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D577A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000D5798;

loc_000D5782: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5795u); RECOMP_ABI_CALL(0x000DA9C0u, sub_000DA9C0); /* call 0x000DA9C0 */

loc_000D5795: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5798: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ebx = eax;
    esi = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D57A4u); RECOMP_ABI_CALL(0x000D4DD0u, sub_000D4DD0); /* call 0x000D4DD0 */

loc_000D57A4: ;
    ecx = MEM32(esp + 0x9C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D57B3u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D57B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D57C0
 * Original: 0x000D57C0 - 0x000D584E (142 bytes, 51 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D57C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D57C0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D57F4; /* je: equal / zero */

loc_000D57CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D57F4; /* je: equal / zero */

loc_000D57D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D57F4; /* je: equal / zero */

loc_000D57D8: ;
    PUSH32(esp, 0x3F9);
    PUSH32(esp, 0x329B58);
    edx = 0x329C20;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D57F1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D57F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D57F4: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5819; /* je: equal / zero */

loc_000D57F9: ;
    PUSH32(esp, 0x3FF);
    PUSH32(esp, 0x324878);
    edx = 0x329D1C;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5812u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5812: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D5819: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D582D; /* jne: not equal / not zero */

loc_000D5821: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D5828u); RECOMP_ABI_CALL(0x000D4DA0u, sub_000D4DA0); /* call 0x000D4DA0 */

loc_000D5828: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D582D: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D583Bu); RECOMP_ABI_CALL(0x000DAA20u, sub_000DAA20); /* call 0x000DAA20 */

loc_000D583B: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5849; /* jne: not equal / not zero */

loc_000D5844: ;
    PUSH32(esp, 0x000D5849u); RECOMP_ABI_CALL(0x000D4DA0u, sub_000D4DA0); /* call 0x000D4DA0 */

loc_000D5849: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5850
 * Original: 0x000D5850 - 0x000D5973 (291 bytes, 99 insns)
 * Folder: sound (between: 0x000D57C0 and 0x000D59A0)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D5850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    ecx = MEM32(ebx + 0x18);
    MEM32(esp + 0x404) = eax;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D58AB; /* je: equal / zero */

loc_000D5875: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D58AE; /* je: equal / zero */

loc_000D587A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D58AB; /* je: equal / zero */

loc_000D587F: ;
    PUSH32(esp, 0x325305);
    edx = 0x17;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D588Eu); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D588E: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x18) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x40C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D58A5u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D58A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D58AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */

loc_000D58AE: ;
    esi = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000D58FA; /* jne: not equal / not zero */

loc_000D58B3: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D58FA; /* jne: not equal / not zero */

loc_000D58B9: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D58FA; /* je: equal / zero */

loc_000D58C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 8) = 0;
    ecx = 0xFF;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x329AE8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D58E8u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D58E8: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D58F7u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D58F7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D58FA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5923; /* je: equal / zero */

loc_000D5901: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D590Bu); RECOMP_ABI_CALL(0x000DAAB0u, sub_000DAAB0); /* call 0x000DAAB0 */

loc_000D590B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x18) = esi;
    ecx = MEM32(esp + 0x40C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D591Du); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D591D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D5923: ;
    MEM8(esp + 8) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xFF;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edx = esp + 0xC;
    PUSH32(esp, 0x329AAC);
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D594Au); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000D594A: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edx = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D5959u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D5959: ;
    ecx = MEM32(esp + 0x41C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x18) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D596Du); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000D596D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5980
 * Original: 0x000D5980 - 0x000D5992 (18 bytes, 9 insns)
 * Folder: sound (between: 0x000D57C0 and 0x000D59A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5980: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D598Du); RECOMP_ABI_CALL(0x000DAAF0u, sub_000DAAF0); /* call 0x000DAAF0 */

loc_000D598D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D59A0
 * Original: 0x000D59A0 - 0x000D5A0C (108 bytes, 35 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D59A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D59A0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D59C6; /* je: equal / zero */

loc_000D59A8: ;
    PUSH32(esp, 0x4B3);
    PUSH32(esp, 0x324878);
    edx = 0x329D1C;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D59C1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D59C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D59C6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5A05; /* je: equal / zero */

loc_000D59CD: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D59F9; /* je: equal / zero */

loc_000D59D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D59F9; /* je: equal / zero */

loc_000D59DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D59F9; /* je: equal / zero */

loc_000D59E2: ;
    PUSH32(esp, 0x329E7C);
    eax = 0x4BC;
    ecx = 0x329B58;
    PUSH32(esp, 0x000D59F6u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D59F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D59F9: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D5A02u); RECOMP_ABI_CALL(0x000DAB30u, sub_000DAB30); /* call 0x000DAB30 */

loc_000D5A02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5A05: ;
    PUSH32(esp, 0x000D5A0Au); RECOMP_ABI_CALL(0x000D4DA0u, sub_000D4DA0); /* call 0x000D4DA0 */

loc_000D5A0A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5A10
 * Original: 0x000D5A10 - 0x000D5A9D (141 bytes, 42 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5A10: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5A36; /* je: equal / zero */

loc_000D5A18: ;
    PUSH32(esp, 0x4D9);
    PUSH32(esp, 0x324878);
    edx = 0x329D1C;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5A31u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5A31: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D5A36: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5A9B; /* je: equal / zero */

loc_000D5A3D: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5A69; /* je: equal / zero */

loc_000D5A48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5A69; /* je: equal / zero */

loc_000D5A4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5A69; /* je: equal / zero */

loc_000D5A52: ;
    PUSH32(esp, 0x329E7C);
    eax = 0x4E2;
    ecx = 0x329B58;
    PUSH32(esp, 0x000D5A66u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D5A66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5A69: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5A8C; /* jne: not equal / not zero */

loc_000D5A70: ;
    PUSH32(esp, 0x4E4);
    PUSH32(esp, 0x329A4C);
    edx = 0x329A78;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5A89u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5A89: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5A8C: ;
    MEM32(esi + 0x1C) = 0;
    esi = MEM32(esi + 0x14);
    PUSH32(esp, 0x000D5A9Bu); RECOMP_ABI_CALL(0x000DABA0u, sub_000DABA0); /* call 0x000DABA0 */

loc_000D5A9B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5AA0
 * Original: 0x000D5AA0 - 0x000D5B2D (141 bytes, 42 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5AA0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5AC6; /* je: equal / zero */

loc_000D5AA8: ;
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x324878);
    edx = 0x329D1C;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5AC1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5AC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D5AC6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5B2B; /* je: equal / zero */

loc_000D5ACD: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5AF9; /* je: equal / zero */

loc_000D5AD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5AF9; /* je: equal / zero */

loc_000D5ADD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5AF9; /* je: equal / zero */

loc_000D5AE2: ;
    PUSH32(esp, 0x329E7C);
    eax = 0x509;
    ecx = 0x329B58;
    PUSH32(esp, 0x000D5AF6u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D5AF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5AF9: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5B1C; /* je: equal / zero */

loc_000D5B00: ;
    PUSH32(esp, 0x50B);
    PUSH32(esp, 0x329CC4);
    edx = 0x329A14;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5B19u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5B19: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5B1C: ;
    MEM32(esi + 0x1C) = 1;
    esi = MEM32(esi + 0x14);
    PUSH32(esp, 0x000D5B2Bu); RECOMP_ABI_CALL(0x000DAB70u, sub_000DAB70); /* call 0x000DAB70 */

loc_000D5B2B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5B30
 * Original: 0x000D5B30 - 0x000D5B9C (108 bytes, 32 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5B30: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    eax = 0xFFFF0000u;
    if (CMP_EQ(_fa, _fb)) goto loc_000D5B5C; /* je: equal / zero */

loc_000D5B3A: ;
    PUSH32(esp, 0x52A);
    PUSH32(esp, 0x324878);
    edx = 0x329D1C;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5B53u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5B53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

loc_000D5B5C: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5B9B; /* je: equal / zero */

loc_000D5B63: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5B8F; /* je: equal / zero */

loc_000D5B6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5B8F; /* je: equal / zero */

loc_000D5B73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5B8F; /* je: equal / zero */

loc_000D5B78: ;
    PUSH32(esp, 0x329E7C);
    eax = 0x533;
    ecx = 0x329B58;
    PUSH32(esp, 0x000D5B8Cu); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D5B8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5B8F: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D5B98u); RECOMP_ABI_CALL(0x000DAA70u, sub_000DAA70); /* call 0x000DAA70 */

loc_000D5B98: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5B9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5BA0
 * Original: 0x000D5BA0 - 0x000D5BEB (75 bytes, 22 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5BA0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    eax = 0xFFFF0000u;
    if (CMP_EQ(_fa, _fb)) goto loc_000D5BCC; /* je: equal / zero */

loc_000D5BAA: ;
    PUSH32(esp, 0x546);
    PUSH32(esp, 0x324878);
    edx = 0x329D1C;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5BC3u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5BC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

loc_000D5BCC: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5BEA; /* je: equal / zero */

loc_000D5BD3: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 4);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x33BB70); PUSH32(esp, 0x000D5BE7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000D5BE0u); } /* indirect call */
    }

loc_000D5BE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5BEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5BF0
 * Original: 0x000D5BF0 - 0x000D5C6B (123 bytes, 29 insns)
 * Folder: sound (between: 0x000D5BA0 and 0x000D5CD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D5BF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D5C53; /* ja: above (unsigned >) */

loc_000D5BFD: ;
    ecx = ZX8(MEM8(ecx + 0xD5C90));
    { uint32_t _jt = MEM32(ecx * 4 + 0xD5C6C); /* switch: 9 entries, 9 targets */
    if (_jt == 0x000D5C0Bu) goto loc_000D5C0B;
    if (_jt == 0x000D5C14u) goto loc_000D5C14;
    if (_jt == 0x000D5C1Du) goto loc_000D5C1D;
    if (_jt == 0x000D5C26u) goto loc_000D5C26;
    if (_jt == 0x000D5C2Fu) goto loc_000D5C2F;
    if (_jt == 0x000D5C38u) goto loc_000D5C38;
    if (_jt == 0x000D5C41u) goto loc_000D5C41;
    if (_jt == 0x000D5C4Au) goto loc_000D5C4A;
    if (_jt == 0x000D5C53u) goto loc_000D5C53;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D5C0B: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DA900(); return; /* tail jmp 0x000DA900 */

loc_000D5C14: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DC430(); return; /* tail jmp 0x000DC430 */

loc_000D5C1D: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DC910(); return; /* tail jmp 0x000DC910 */

loc_000D5C26: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DC910(); return; /* tail jmp 0x000DC910 */

loc_000D5C2F: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DAC90(); return; /* tail jmp 0x000DAC90 */

loc_000D5C38: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DCEA0(); return; /* tail jmp 0x000DCEA0 */

loc_000D5C41: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000989F0(); return; /* tail jmp 0x000989F0 */

loc_000D5C4A: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DAEA0(); return; /* tail jmp 0x000DAEA0 */

loc_000D5C53: ;
    PUSH32(esp, 0x325305);
    edx = 0x17;
    PUSH32(esp, 0x000D5C62u); RECOMP_ABI_CALL(0x000ED010u, sub_000ED010); /* call 0x000ED010 */

loc_000D5C62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5CA0
 * Original: 0x000D5CA0 - 0x000D5CA5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000D5BA0 and 0x000D5CD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D5CA0: ;
    g_seh_ebp = ebp; sub_000DA930(); return; /* tail jmp 0x000DA930 */

}

/**
 * sub_000D5CB0
 * Original: 0x000D5CB0 - 0x000D5CC1 (17 bytes, 8 insns)
 * Folder: sound (between: 0x000D5BA0 and 0x000D5CD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5CB0: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D5CBDu); RECOMP_ABI_CALL(0x000DB040u, sub_000DB040); /* call 0x000DB040 */

loc_000D5CBD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D5CD0
 * Original: 0x000D5CD0 - 0x000D5D31 (97 bytes, 32 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5CD0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5CF3; /* jne: not equal / not zero */

loc_000D5CD4: ;
    PUSH32(esp, 0x6BA);
    PUSH32(esp, 0x324878);
    edx = 0x329A00;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5CEDu); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5CED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5CF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D5CF3: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D5D27; /* je: equal / zero */

loc_000D5CF9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D5D1D; /* je: equal / zero */

loc_000D5CFE: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D5CF0; /* je: equal / zero */

loc_000D5D03: ;
    PUSH32(esp, 0x329E7C);
    eax = 0x6CA;
    ecx = 0x324878;
    PUSH32(esp, 0x000D5D17u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D5D17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D5D1D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D5D23u); RECOMP_ABI_CALL(0x000DB140u, sub_000DB140); /* call 0x000DB140 */

loc_000D5D23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D5D27: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D5D2Du); RECOMP_ABI_CALL(0x000DB080u, sub_000DB080); /* call 0x000DB080 */

loc_000D5D2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D5D40
 * Original: 0x000D5D40 - 0x000D5D67 (39 bytes, 12 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5D40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5D63; /* jne: not equal / not zero */

loc_000D5D44: ;
    PUSH32(esp, 0x6D4);
    PUSH32(esp, 0x324878);
    edx = 0x326938;
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5D5Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5D5D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D5D63: ;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5D70
 * Original: 0x000D5D70 - 0x000D5DBF (79 bytes, 26 insns)
 * Folder: sound (source: sndplay.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5D70: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5D94; /* jne: not equal / not zero */

loc_000D5D74: ;
    PUSH32(esp, 0x6DF);
    edx = 0x329A00;

loc_000D5D7E: ;
    PUSH32(esp, 0x324878);
    ecx = 0x329E7C;
    PUSH32(esp, 0x000D5D8Du); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5D8D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D5D94: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D5DB5; /* je: equal / zero */

loc_000D5D9A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D5DAB; /* je: equal / zero */

loc_000D5D9F: ;
    PUSH32(esp, 0x6EC);
    edx = 0x3299B8;
    goto loc_000D5D7E;

loc_000D5DAB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D5DB1u); RECOMP_ABI_CALL(0x000DB1A0u, sub_000DB1A0); /* call 0x000DB1A0 */

loc_000D5DB1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D5DB5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D5DBBu); RECOMP_ABI_CALL(0x000DB0B0u, sub_000DB0B0); /* call 0x000DB0B0 */

loc_000D5DBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D5DC0
 * Original: 0x000D5DC0 - 0x000D5DE2 (34 bytes, 15 insns)
 * Folder: sound (between: 0x000D5D70 and 0x000D5EA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5DC0: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D5DD8; /* je: equal / zero */

loc_000D5DC6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D5DCE; /* je: equal / zero */

loc_000D5DCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D5DCE: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D5DD4u); RECOMP_ABI_CALL(0x000DB170u, sub_000DB170); /* call 0x000DB170 */

loc_000D5DD4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D5DD8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D5DDEu); RECOMP_ABI_CALL(0x000DB110u, sub_000DB110); /* call 0x000DB110 */

loc_000D5DDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D5DF0
 * Original: 0x000D5DF0 - 0x000D5E3F (79 bytes, 19 insns)
 * Folder: sound (between: 0x000D5D70 and 0x000D5EA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5DF0: ;
    ecx = MEM32(0x64D7D4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5E39; /* jne: not equal / not zero */

loc_000D5DFC: ;
    MEM32(0x5F8C78) = eax;
    MEM32(0x5F8C74) = eax;
    MEM32(0x5F8C7C) = eax;
    MEM32(0x5F8C70) = eax;
    MEM32(0x5F8C80) = eax;
    MEM32(0x5F8C88) = eax;
    MEM32(0x5F8C8C) = eax;
    MEM32(0x5F8C90) = eax;
    MEM32(0x5F8C94) = eax;
    MEM32(0x5F8C98) = eax;
    eax = 1;
    MEM32(0x64D7D4) = eax;
    esp += 4; return; /* ret */

loc_000D5E39: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5E40
 * Original: 0x000D5E40 - 0x000D5E75 (53 bytes, 14 insns)
 * Folder: sound (between: 0x000D5D70 and 0x000D5EA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5E40: ;
    eax = MEM32(0x64D7D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5E4E; /* je: equal / zero */

loc_000D5E49: ;
    PUSH32(esp, 0x000D5E4Eu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D5E4E: ;
    eax = MEM32(0x5F8C60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5E5C; /* je: equal / zero */

loc_000D5E57: ;
    PUSH32(esp, 0x000D5E5Cu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D5E5C: ;
    eax = MEM32(0x5F8C68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5E6A; /* je: equal / zero */

loc_000D5E65: ;
    PUSH32(esp, 0x000D5E6Au); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D5E6A: ;
    MEM32(0x64D7D4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5E80
 * Original: 0x000D5E80 - 0x000D5E9D (29 bytes, 7 insns)
 * Folder: sound (between: 0x000D5D70 and 0x000D5EA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5E80: ;
    eax = MEM32(0x64D7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5E9C; /* je: equal / zero */

loc_000D5E89: ;
    eax = MEM32(esp + 4);
    MEM32(0x5F8C74) = eax;
    MEM32(0x5F8C90) = 1;

loc_000D5E9C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5EA0
 * Original: 0x000D5EA0 - 0x000D5ED7 (55 bytes, 16 insns)
 * Folder: sound (source: sndconf.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D5EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5EA0: ;
    eax = MEM32(0x64D7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5EB8; /* je: equal / zero */

loc_000D5EA9: ;
    eax = MEM32(0x5F8C90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5EB8; /* je: equal / zero */

loc_000D5EB2: ;
    eax = MEM32(0x5F8C74);
    esp += 4; return; /* ret */

loc_000D5EB8: ;
    PUSH32(esp, 0xE3);
    PUSH32(esp, 0x324878);
    edx = 0x329EF4;
    ecx = 0x329F30;
    PUSH32(esp, 0x000D5ED1u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5ED1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D5EE0
 * Original: 0x000D5EE0 - 0x000D5EF3 (19 bytes, 6 insns)
 * Folder: sound (between: 0x000D5EA0 and 0x000D5F00)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5EE0: ;
    eax = MEM32(0x64D7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5EF2; /* je: equal / zero */

loc_000D5EE9: ;
    eax = MEM32(esp + 4);
    MEM32(0x5F8C70) = eax;

loc_000D5EF2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5F00
 * Original: 0x000D5F00 - 0x000D5F37 (55 bytes, 16 insns)
 * Folder: sound (source: sndconf.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D5F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5F00: ;
    eax = MEM32(0x64D7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5F18; /* je: equal / zero */

loc_000D5F09: ;
    eax = MEM32(0x5F8C90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5F18; /* je: equal / zero */

loc_000D5F12: ;
    eax = MEM32(0x5F8C70);
    esp += 4; return; /* ret */

loc_000D5F18: ;
    PUSH32(esp, 0x10D);
    PUSH32(esp, 0x324878);
    edx = 0x329EF4;
    ecx = 0x329F30;
    PUSH32(esp, 0x000D5F31u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D5F31: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D5F40
 * Original: 0x000D5F40 - 0x000D5F5D (29 bytes, 7 insns)
 * Folder: sound (between: 0x000D5F00 and 0x000D60E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5F40: ;
    eax = MEM32(0x64D7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5F5C; /* je: equal / zero */

loc_000D5F49: ;
    eax = MEM32(esp + 4);
    MEM32(0x5F8C78) = eax;
    MEM32(0x5F8C88) = 1;

loc_000D5F5C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D5F60
 * Original: 0x000D5F60 - 0x000D605A (250 bytes, 82 insns)
 * Folder: sound (between: 0x000D5F00 and 0x000D60E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D5F60: ;
    eax = MEM32(0x64D7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6059; /* je: equal / zero */

loc_000D5F6D: ;
    eax = MEM32(0x64D7D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D5FBD; /* je: equal / zero */

loc_000D5F79: ;
    ecx = MEM32(0x64D7DC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D5FB1; /* jle: less or equal (signed <=) */

loc_000D5F85: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000D5F90;

    /* nop */

loc_000D5F90: ;
    esi = edi + eax + 0x104;
    PUSH32(esp, 0x000D5F9Cu); RECOMP_ABI_CALL(0x000DAC00u, sub_000DAC00); /* call 0x000DAC00 */

loc_000D5F9C: ;
    eax = MEM32(0x64D7DC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    eax = MEM32(0x64D7D8);
    if (CMP_L(_fas, _fbs)) goto loc_000D5F90; /* jl: less (signed <) */

loc_000D5FB1: ;
    PUSH32(esp, 0x000D5FB6u); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D5FB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D7D8) = eax;

loc_000D5FBD: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D7DC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000D5FF9; /* jle: less or equal (signed <=) */

loc_000D5FCE: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    PUSH32(esp, 0x000D5FDBu); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D5FDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D7D8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D5FF9; /* jne: not equal / not zero */

loc_000D5FE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0x329EC4;
    edx = 0xA;
    g_seh_ebp = ebp; sub_000ED010(); return; /* tail jmp 0x000ED010 */

loc_000D5FF9: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(edi);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D6055; /* jle: less or equal (signed <=) */

loc_000D6005: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000D6010;

loc_000D6009: ;
    eax = MEM32(0x64D7D8);
    edi = edi;

loc_000D6010: ;
    edx = ebx + eax;
    eax = MEM32(esi + 0x100);
    ecx = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = eax;
    eax = esi;
    edi = ecx + 4;

loc_000D6024: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6024; /* jne: not equal / not zero */

loc_000D602E: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x104;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D603Au); RECOMP_ABI_CALL(0x000DABD0u, sub_000DABD0); /* call 0x000DABD0 */

loc_000D603A: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x104;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6009; /* jl: less (signed <) */

loc_000D6055: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000D6059: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6060
 * Original: 0x000D6060 - 0x000D6068 (8 bytes, 4 insns)
 * Folder: sound (between: 0x000D5F00 and 0x000D60E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6060(void)
{

loc_000D6060: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6066u); RECOMP_ABI_CALL(0x000D5F60u, sub_000D5F60); /* call 0x000D5F60 */

loc_000D6066: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6070
 * Original: 0x000D6070 - 0x000D60B2 (66 bytes, 23 insns)
 * Folder: sound (between: 0x000D5F00 and 0x000D60E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6070: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64D7D8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D60A1; /* je: equal / zero */

loc_000D607D: ;
    edx = MEM32(0x64D7DC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D609F; /* jle: less or equal (signed <=) */

loc_000D6087: ;
    ecx = esi;
    /* nop */

loc_000D6090: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D60A3; /* je: equal / zero */

loc_000D6094: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6090; /* jl: less (signed <) */

loc_000D609F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D60A1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D60A3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + esi + 0x104;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D60C0
 * Original: 0x000D60C0 - 0x000D60E0 (32 bytes, 13 insns)
 * Folder: sound (between: 0x000D5F00 and 0x000D60E0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D60C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D60C0: ;
    edx = MEM32(0x5F8C64);
    eax = MEM32(0x5F8C60);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D60DD; /* jle: less or equal (signed <=) */

loc_000D60D1: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D60DF; /* je: equal / zero */

loc_000D60D5: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D60D1; /* jl: less (signed <) */

loc_000D60DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D60DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D60E0
 * Original: 0x000D60E0 - 0x000D6168 (136 bytes, 54 insns)
 * Folder: sound (source: sndconf.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D60E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D60E0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x64D7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6166; /* je: equal / zero */

loc_000D60EC: ;
    eax = MEM32(0x5F8C60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D60FA; /* je: equal / zero */

loc_000D60F5: ;
    PUSH32(esp, 0x000D60FAu); RECOMP_ABI_CALL(0x000ED270u, sub_000ED270); /* call 0x000ED270 */

loc_000D60FA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D6157; /* je: equal / zero */

loc_000D6101: ;
    ebp = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6157; /* je: equal / zero */

loc_000D6107: ;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D6129; /* ja: above (unsigned >) */

loc_000D610E: ;
    PUSH32(esp, 0x329F30);
    eax = 0x346;
    ecx = 0x329EAC;
    PUSH32(esp, 0x000D6122u); RECOMP_ABI_CALL(0x000ED1A0u, sub_000ED1A0); /* call 0x000ED1A0 */

loc_000D6122: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6157; /* je: equal / zero */

loc_000D6129: ;
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    eax = esi;
    PUSH32(esp, 0x000D6135u); RECOMP_ABI_CALL(0x000ED250u, sub_000ED250); /* call 0x000ED250 */

loc_000D6135: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6157; /* je: equal / zero */

loc_000D613B: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D6143u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D6143: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x5F8C60) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x5F8C64) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D6157: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    MEM32(0x5F8C60) = eax;
    MEM32(0x5F8C64) = eax;
    POP32(esp, ebx);

loc_000D6166: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6170
 * Original: 0x000D6170 - 0x000D617A (10 bytes, 4 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6170: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6176u); RECOMP_ABI_CALL(0x000DA760u, sub_000DA760); /* call 0x000DA760 */

loc_000D6176: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6180
 * Original: 0x000D6180 - 0x000D6186 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6180(void)
{

loc_000D6180: ;
    MEM32(0x64D7E0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6190
 * Original: 0x000D6190 - 0x000D6196 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6190(void)
{

loc_000D6190: ;
    MEM32(0x64D7F8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D61A0
 * Original: 0x000D61A0 - 0x000D61A6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D61A0(void)
{

loc_000D61A0: ;
    eax = MEM32(0x64D7E0);
    esp += 4; return; /* ret */

}

/**
 * sub_000D61B0
 * Original: 0x000D61B0 - 0x000D61B6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D61B0(void)
{

loc_000D61B0: ;
    eax = MEM32(0x64D7F8);
    esp += 4; return; /* ret */

}

/**
 * sub_000D61C0
 * Original: 0x000D61C0 - 0x000D61C6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D61C0(void)
{

loc_000D61C0: ;
    MEM32(0x64D7E4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D61D0
 * Original: 0x000D61D0 - 0x000D61D6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D61D0(void)
{

loc_000D61D0: ;
    MEM32(0x64D7FC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D61E0
 * Original: 0x000D61E0 - 0x000D61E6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D61E0(void)
{

loc_000D61E0: ;
    eax = MEM32(0x64D7E4);
    esp += 4; return; /* ret */

}

/**
 * sub_000D61E9
 * Original: 0x000D61E9 - 0x000D61F0 (7 bytes, 7 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D61E9(void)
{

loc_000D61E9: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000D61F0
 * Original: 0x000D61F0 - 0x000D61F6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D61F0(void)
{

loc_000D61F0: ;
    eax = MEM32(0x64D7FC);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6200
 * Original: 0x000D6200 - 0x000D6206 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6200(void)
{

loc_000D6200: ;
    MEM32(0x64D7E8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6210
 * Original: 0x000D6210 - 0x000D6216 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6210(void)
{

loc_000D6210: ;
    MEM32(0x64D800) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6220
 * Original: 0x000D6220 - 0x000D6226 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6220(void)
{

loc_000D6220: ;
    MEM32(0x64D7EC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6230
 * Original: 0x000D6230 - 0x000D6236 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6230(void)
{

loc_000D6230: ;
    MEM32(0x64D804) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6240
 * Original: 0x000D6240 - 0x000D6246 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6240(void)
{

loc_000D6240: ;
    eax = MEM32(0x64D7EC);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6250
 * Original: 0x000D6250 - 0x000D6256 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6250(void)
{

loc_000D6250: ;
    eax = MEM32(0x64D804);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6260
 * Original: 0x000D6260 - 0x000D6266 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6260(void)
{

loc_000D6260: ;
    MEM32(0x64D7F0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6270
 * Original: 0x000D6270 - 0x000D6276 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6270(void)
{

loc_000D6270: ;
    MEM32(0x64D808) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6280
 * Original: 0x000D6280 - 0x000D6286 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6280(void)
{

loc_000D6280: ;
    eax = MEM32(0x64D7F0);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6290
 * Original: 0x000D6290 - 0x000D6296 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6290(void)
{

loc_000D6290: ;
    eax = MEM32(0x64D808);
    esp += 4; return; /* ret */

}

/**
 * sub_000D62A0
 * Original: 0x000D62A0 - 0x000D62A6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D62A0(void)
{

loc_000D62A0: ;
    MEM32(0x64D7F4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D62B0
 * Original: 0x000D62B0 - 0x000D62B6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D62B0(void)
{

loc_000D62B0: ;
    MEM32(0x64D80C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000D62C0
 * Original: 0x000D62C0 - 0x000D62C6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D62C0(void)
{

loc_000D62C0: ;
    eax = MEM32(0x64D7F4);
    esp += 4; return; /* ret */

}

/**
 * sub_000D62D0
 * Original: 0x000D62D0 - 0x000D62D6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D62D0(void)
{

loc_000D62D0: ;
    eax = MEM32(0x64D80C);
    esp += 4; return; /* ret */

}

/**
 * sub_000D62E0
 * Original: 0x000D62E0 - 0x000D62FD (29 bytes, 7 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D62E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D62E0: ;
    eax = MEM32(0x64D7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D62FC; /* je: equal / zero */

loc_000D62E9: ;
    eax = MEM32(esp + 4);
    MEM32(0x5F8C80) = eax;
    MEM32(0x5F8C94) = 1;

loc_000D62FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6300
 * Original: 0x000D6300 - 0x000D631D (29 bytes, 7 insns)
 * Folder: sound (between: 0x000D60E0 and 0x000D6320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6300: ;
    eax = MEM32(0x64D7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D631C; /* je: equal / zero */

loc_000D6309: ;
    eax = MEM32(esp + 4);
    MEM32(0x5F8C84) = eax;
    MEM32(0x5F8C98) = 1;

loc_000D631C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6320
 * Original: 0x000D6320 - 0x000D6367 (71 bytes, 17 insns)
 * Folder: sound (source: sndspace.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6320: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D632C; /* jl: less (signed <) */

loc_000D6324: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2D0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6348; /* jl: less (signed <) */

loc_000D632C: ;
    PUSH32(esp, 0x91);
    PUSH32(esp, 0x32A264);
    edx = 0x32A2B8;
    ecx = 0x32A284;
    PUSH32(esp, 0x000D6345u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6345: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6348: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x168) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x168 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D635A; /* jge: greater or equal (signed >=) */

loc_000D6350: ;
    xmm0 = XMM_SCALAR(MEMF(esi * 4 + 0x33C540)); /* movss */
    esp += 4; return; /* ret */

loc_000D635A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi * 4 + 0x33BFA0); /* subss */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6370
 * Original: 0x000D6370 - 0x000D63B7 (71 bytes, 17 insns)
 * Folder: sound (source: sndspace.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6370: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D637C; /* jl: less (signed <) */

loc_000D6374: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2D0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6398; /* jl: less (signed <) */

loc_000D637C: ;
    PUSH32(esp, 0xA8);
    PUSH32(esp, 0x32A264);
    edx = 0x32A2B8;
    ecx = 0x32A284;
    PUSH32(esp, 0x000D6395u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6395: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D6398: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x168) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x168 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D63AA; /* jge: greater or equal (signed >=) */

loc_000D63A0: ;
    xmm0 = XMM_SCALAR(MEMF(esi * 4 + 0x33CAE0)); /* movss */
    esp += 4; return; /* ret */

loc_000D63AA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi * 4 + 0x33C540); /* subss */
    esp += 4; return; /* ret */

}

/**
 * sub_000D63C0
 * Original: 0x000D63C0 - 0x000D6421 (97 bytes, 25 insns)
 * Folder: sound (between: 0x000D6370 and 0x000D6480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D63C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D63C0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    edx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D63CE; /* jne: not equal / not zero */

loc_000D63C9: ;
    edx = 0x8000;

loc_000D63CE: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    MEM32(0x33BCF4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000D63DF; /* jne: not equal / not zero */

loc_000D63DC: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000D63DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(0x33BCF8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000D63F2; /* jge: greater or equal (signed >=) */

loc_000D63E8: ;
    MEM32(0x33BCF8) = 0xFFFFFFFFu;

loc_000D63F2: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    MEM32(0x33BCFC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D6409; /* jne: not equal / not zero */

loc_000D63FF: ;
    MEM32(0x33BCFC) = 0xFFFFFFFFu;

loc_000D6409: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    MEM32(0x33BD00) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D6420; /* jne: not equal / not zero */

loc_000D6416: ;
    MEM32(0x33BD00) = 0xFFFFFFFFu;

loc_000D6420: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6430
 * Original: 0x000D6430 - 0x000D6454 (36 bytes, 9 insns)
 * Folder: sound (between: 0x000D6370 and 0x000D6480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6430(void)
{

loc_000D6430: ;
    ecx = MEM32(0x33BCF4);
    edx = MEM32(0x33BCF8);
    MEM32(eax) = ecx;
    ecx = MEM32(0x33BCFC);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x33BD00);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6460
 * Original: 0x000D6460 - 0x000D6478 (24 bytes, 7 insns)
 * Folder: sound (between: 0x000D6370 and 0x000D6480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6460: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, 0x000D646Bu); RECOMP_ABI_CALL(0x000D6430u, sub_000D6430); /* call 0x000D6430 */

loc_000D646B: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x000D6474u); RECOMP_ABI_CALL(0x000D6560u, sub_000D6560); /* call 0x000D6560 */

loc_000D6474: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6480
 * Original: 0x000D6480 - 0x000D655E (222 bytes, 73 insns)
 * Folder: sound (source: sndspace.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6480: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D649D; /* jg: greater (signed >) */

loc_000D6487: ;
    eax = 0x32A23C;
    edx = 0x1D;
    PUSH32(esp, 0x000D6496u); RECOMP_ABI_CALL(0x000ED170u, sub_000ED170); /* call 0x000ED170 */

loc_000D6496: ;
    eax = 0xFFA00000u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D649D: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D64A8u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000D64A8: ;
    edi = eax;
    eax = MEM32(0x33C534);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D651C; /* jg: greater (signed >) */

loc_000D64B6: ;
    eax = MEM32(0x33C528);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D64CD; /* jle: less or equal (signed <=) */

loc_000D64C1: ;
    eax = MEM32(esi * 4 + 0x33C52C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D64C1; /* jg: greater (signed >) */

loc_000D64CD: ;
    ecx = MEM32(esi * 4 + 0x33C508);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D64DBu); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000D64DB: ;
    edx = MEM32(esi * 4 + 0x33C518);
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D650D; /* jle: less or equal (signed <=) */

loc_000D64F1: ;
    PUSH32(esp, 0x18C);
    PUSH32(esp, 0x32A21C);
    edx = 0x32A224;
    ecx = 0x32A284;
    PUSH32(esp, 0x000D650Au); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D650A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D650D: ;
    esi = esi << 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi * 4 + 0x33BD08);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D651C: ;
    edx = MEM32(0x33C514);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D6529u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000D6529: ;
    _fb = (uint32_t)(MEM32(0x33C524)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x33C524);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D6544; /* jg: greater (signed >) */

loc_000D653A: ;
    eax = MEM32(eax * 4 + 0x33C308);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D6544: ;
    eax = MEM32(0x33C538);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6550u); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000D6550: ;
    ecx = MEM32(0x33C53C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6560
 * Original: 0x000D6560 - 0x000D6665 (261 bytes, 97 insns)
 * Folder: sound (between: 0x000D6480 and 0x000D6670)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6560: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000D6578; /* jne: not equal / not zero */

loc_000D656A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D6570u); RECOMP_ABI_CALL(0x000D6460u, sub_000D6460); /* call 0x000D6460 */

loc_000D6570: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6578: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6585u); RECOMP_ABI_CALL(0x000ED370u, sub_000ED370); /* call 0x000ED370 */

loc_000D6585: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D659A; /* jne: not equal / not zero */

loc_000D6591: ;
    eax = MEM32(0x33BCF4);
    MEM32(esp + 4) = eax;

loc_000D659A: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D65AD; /* jne: not equal / not zero */

loc_000D65A3: ;
    edx = MEM32(0x33BCF8);
    MEM32(esp + 8) = edx;

loc_000D65AD: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D65C0; /* jne: not equal / not zero */

loc_000D65B6: ;
    ecx = MEM32(0x33BCFC);
    MEM32(esp + 0xC) = ecx;

loc_000D65C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D65D4; /* jne: not equal / not zero */

loc_000D65CA: ;
    esi = MEM32(0x33BD00);
    MEM32(esp + 0x14) = esi;

loc_000D65D4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D65DF; /* je: equal / zero */

loc_000D65D9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D65DF; /* jle: less or equal (signed <=) */

loc_000D65DD: ;
    edi = edx;

loc_000D65DF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D65EB; /* jge: greater or equal (signed >=) */

loc_000D65E3: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D65EB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6656; /* je: equal / zero */

loc_000D65F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6656; /* je: equal / zero */

loc_000D65F5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6656; /* jl: less (signed <) */

loc_000D65F9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D664B; /* jge: greater or equal (signed >=) */

loc_000D65FD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D6603u); RECOMP_ABI_CALL(0x000D6480u, sub_000D6480); /* call 0x000D6480 */

loc_000D6603: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x000D660Au); RECOMP_ABI_CALL(0x000D6F30u, sub_000D6F30); /* call 0x000D6F30 */

loc_000D660A: ;
    PUSH32(esp, eax);
    esi = 0x80;
    PUSH32(esp, 0x000D6615u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000D6615: ;
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D662Bu); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000D662B: ;
    ecx = 0x10000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D663Bu); RECOMP_ABI_CALL(0x000D6AD0u, sub_000D6AD0); /* call 0x000D6AD0 */

loc_000D663B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D6645u); RECOMP_ABI_CALL(0x000D7160u, sub_000D7160); /* call 0x000D7160 */

loc_000D6645: ;
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D664B: ;
    POP32(esp, esi);
    eax = 0xFFA00000u;
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6656: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D665Cu); RECOMP_ABI_CALL(0x000D6480u, sub_000D6480); /* call 0x000D6480 */

loc_000D665C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6670
 * Original: 0x000D6670 - 0x000D6733 (195 bytes, 72 insns)
 * Folder: sound (source: sndspace.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6670: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x33BCF0);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6688; /* jne: not equal / not zero */

loc_000D667E: ;
    eax = 0x10000;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6688: ;
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000D66BDu); RECOMP_ABI_CALL(0x000DA340u, sub_000DA340); /* call 0x000DA340 */

loc_000D66BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6726; /* je: equal / zero */

loc_000D66C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D6726; /* jg: greater (signed >) */

loc_000D66C8: ;
    edi = MEM32(esp + 0x20);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    esi = esp + 0x10;
    PUSH32(esp, 0x000D66D8u); RECOMP_ABI_CALL(0x000DA370u, sub_000DA370); /* call 0x000DA370 */

loc_000D66D8: ;
    edi = MEM32(esp + 0x24);
    ebp = eax;
    PUSH32(esp, 0x000D66E3u); RECOMP_ABI_CALL(0x000DA370u, sub_000DA370); /* call 0x000DA370 */

loc_000D66E3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6726; /* jge: greater or equal (signed >=) */

loc_000D66E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6726; /* jge: greater or equal (signed >=) */

loc_000D66EB: ;
    esi = ebx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D66F7u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000D66F7: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D671C; /* jg: greater (signed >) */

loc_000D6700: ;
    PUSH32(esp, 0x20D);
    PUSH32(esp, 0x32A1C0);
    edx = 0x32A1D0;
    ecx = 0x32A284;
    PUSH32(esp, 0x000D6719u); RECOMP_ABI_CALL(0x000ED1C0u, sub_000ED1C0); /* call 0x000ED1C0 */

loc_000D6719: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D671C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6726: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x10000;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6740
 * Original: 0x000D6740 - 0x000D676A (42 bytes, 14 insns)
 * Folder: sound (between: 0x000D6670 and 0x000D6770)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6740: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D675E; /* je: equal / zero */

loc_000D6747: ;
    PUSH32(esp, 0x12C0000);
    PUSH32(esp, 0x000D6751u); RECOMP_ABI_CALL(0x000D6C30u, sub_000D6C30); /* call 0x000D6C30 */

loc_000D6751: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(0x33BCF0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D675E: ;
    MEM32(0x33BCF0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
