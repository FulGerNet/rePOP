/**
 * PoP SoT xbox-retail - ai, chunk 5
 * AI interpreter and the functions it exposes to scripts (Jade AIinterp)
 * Functions: 250 (0x002EBD80 - 0x002F3460)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_002EBD80
 * Original: 0x002EBD80 - 0x002EBE5D (221 bytes, 58 insns)
 * Folder: ai (match: xbox-demo 0x00263610, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EBD80: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EBD8Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBD8C: ;
    ebp = eax;
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x758D4C);
    esi = MEM32(eax * 8 + 0x68641C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ecx;
    SET_LO16(ecx, MEM16(eax * 8 + 0x686428));
    MEM32(esp + 0x14) = edx;
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, esi);
    MEM32(0x758D4C) = eax;
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x43D06C); PUSH32(esp, 0x002EBDE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EBDDEu); } /* indirect call */
    }

loc_002EBDE5: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    edi = MEM32(0x758D48);
    edx = MEM32(0x758D64);
    PUSH32(esp, ebp);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x44AA20);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    esi = esp + 0x28;
    MEM32(0x758D68) = edx;
    ebx = edi + 0x696528;
    PUSH32(esp, 0x002EBE24u); RECOMP_ABI_CALL(0x00072180u, sub_00072180); /* call 0x00072180 */

loc_002EBE24: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = ebx;
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x50);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EBE60
 * Original: 0x002EBE60 - 0x002EBF0C (172 bytes, 48 insns)
 * Folder: ai (match: xbox-demo 0x002636F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EBE60: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EBE6Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBE6C: ;
    ebp = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002EBE98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EBE91u); } /* indirect call */
    }

loc_002EBE98: ;
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    edi = MEM32(0x758D48);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebp);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x44AA20);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEM32(0x758D68) = ecx;
    ebx = edi + 0x696528;
    PUSH32(esp, 0x002EBED3u); RECOMP_ABI_CALL(0x00072250u, sub_00072250); /* call 0x00072250 */

loc_002EBED3: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = ebx;
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EBF10
 * Original: 0x002EBF10 - 0x002EBF7E (110 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x002637A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBF10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBF10: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EBF32u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBF32: ;
    ecx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EBF3Fu); RECOMP_ABI_CALL(0x00072580u, sub_00072580); /* call 0x00072580 */

loc_002EBF3F: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EBF80
 * Original: 0x002EBF80 - 0x002EC00D (141 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00263810, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBF80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBF80: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EBFA5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBFA5: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, 0x002EBFB7u); RECOMP_ABI_CALL(0x00072870u, sub_00072870); /* call 0x00072870 */

loc_002EBFB7: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 0x10);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EC010
 * Original: 0x002EC010 - 0x002EC0CD (189 bytes, 52 insns)
 * Folder: ai (match: xbox-demo 0x002638A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EC010: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EC01Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EC01C: ;
    ebp = eax;
    PUSH32(esp, 0x002EC023u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EC023: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002EC02Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EC02C: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002EC05Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC053u); } /* indirect call */
    }

loc_002EC05A: ;
    eax = MEM32(0x758D64);
    ecx = MEM32(esp + 0x18);
    edi = MEM32(0x758D48);
    edx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D70) = edx;
    ebx = edi + 0x696528;
    PUSH32(esp, 0x002EC094u); RECOMP_ABI_CALL(0x000401C0u, sub_000401C0); /* call 0x000401C0 */

loc_002EC094: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = ebx;
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x4C);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EC0D0
 * Original: 0x002EC0D0 - 0x002EC293 (451 bytes, 117 insns)
 * Folder: ai (match: xbox-demo 0x00263960, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC0D0(void)
{
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

loc_002EC0D0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm6 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 8) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0xC) = esi;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm7 = xmm4; /* movaps */
    MEM32(esp + 0x10) = edx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm7.f[0]; /* divss */
    xmm4 = xmm6; /* movaps */
    xmm6 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm7 = xmm2; /* movaps */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm6 = xmm3; /* movaps */
    MEMF(esp + 0xC) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm6 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    POP32(esp, esi);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EC2A0
 * Original: 0x002EC2A0 - 0x002EC8B0 (1552 bytes, 381 insns)
 * Folder: ai (between: 0x002EC0D0 and 0x002EC8B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EC2A0: ;
    _fb = (uint32_t)(0x35C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x35C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    fp_push(MEMF(esi + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    fp_push(MEMF(esi + 4)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    fp_push(MEMF(esi)); /* fld float */
    ebp = MEM32(esp + 0x370);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ebx = ecx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    PUSH32(esp, 0x3F490FDB);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x24); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    eax = MEM32(esi);
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 4); /* mulss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;
    edx = esi;
    eax = esp + 0x14;
    ecx = esp + 0x58;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EC35Bu); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC35B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xBF490FDBu);
    edx = esi;
    ecx = esp + 0x64;
    PUSH32(esp, 0x002EC36Eu); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC36E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3FC90FDB);
    edx = esi;
    ecx = esp + 0x70;
    PUSH32(esp, 0x002EC381u); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC381: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xBFC90FDBu);
    edx = esi;
    ecx = esp + 0x7C;
    PUSH32(esp, 0x002EC394u); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC394: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x4016CBE4);
    edx = esi;
    ecx = esp + 0x88;
    PUSH32(esp, 0x002EC3AAu); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC3AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC016CBE4u);
    edx = esi;
    ecx = esp + 0x94;
    PUSH32(esp, 0x002EC3C0u); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC3C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40490FDB);
    edx = esi;
    ecx = esp + 0xA0;
    PUSH32(esp, 0x002EC3D6u); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC3D6: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0xAC) = ecx;
    PUSH32(esp, 0x3F490FDB);
    edx = esp + 0xAC;
    eax = esp + 0x14;
    ecx = esp + 0xB8;
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EC414u); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC414: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xBF490FDBu);
    edx = esp + 0xAC;
    ecx = esp + 0xC4;
    PUSH32(esp, 0x002EC42Fu); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC42F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3FC90FDB);
    edx = esp + 0xAC;
    ecx = esp + 0xD0;
    PUSH32(esp, 0x002EC44Au); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC44A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xBFC90FDBu);
    edx = esp + 0xAC;
    ecx = esp + 0xDC;
    PUSH32(esp, 0x002EC465u); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC465: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x4016CBE4);
    edx = esp + 0xAC;
    ecx = esp + 0xE8;
    PUSH32(esp, 0x002EC480u); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC480: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC016CBE4u);
    edx = esp + 0xAC;
    ecx = esp + 0xF4;
    PUSH32(esp, 0x002EC49Bu); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC49B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40490FDB);
    edx = esp + 0xAC;
    ecx = esp + 0x100;
    PUSH32(esp, 0x002EC4B6u); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC4B6: ;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x108) = edx;
    MEM32(esp + 0x10C) = eax;
    PUSH32(esp, 0x3FBC430E);
    edx = esp + 0x28;
    eax = esp + 0x4C;
    ecx = esp + 0x10C;
    MEMF(esp + 0x114) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EC4F1u); RECOMP_ABI_CALL(0x002EC0D0u, sub_002EC0D0); /* call 0x002EC0D0 */

loc_002EC4F1: ;
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x42934C)); /* fmul dword ptr [0x42934c] */
    xmm3 = XMM_SCALAR(MEMF(0x429348)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    fp_push(MEMF(ebp + 4)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x42934C)); /* fmul dword ptr [0x42934c] */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x42934C)); /* fmul dword ptr [0x42934c] */
    MEMF(ebp + 4) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = 0;
    esi = esp + 0x50;
    goto loc_002EC580;

loc_002EC570: ;
    xmm3 = XMM_SCALAR(MEMF(0x429348)); /* movss */
    goto loc_002EC580;

    /* nop */

loc_002EC580: ;
    xmm2 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4 = xmm2; /* movaps */
    ecx = esi + -8;
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EC5D4; /* jnp: not parity */

loc_002EC5BE: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */

loc_002EC5D4: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + -4); /* mulss */
    MEMF(esi + -4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x42934C)); /* fmul dword ptr [0x42934c] */
    edx = MEM32(ecx);
    eax = MEM32(esi + -4);
    MEM32(edi) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    edx = MEM32(esi);
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 4) = eax;
    fp_push(MEMF(esi + -4)); /* fld float */
    eax = MEM32(esp + 0x380);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x42934C)); /* fmul dword ptr [0x42934c] */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x37C);
    MEM32(edi + 8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    edx = MEM32(esp + 0x380);
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    MEMD(esp + 0x14) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x42934C)); /* fmul dword ptr [0x42934c] */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x380);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    PUSH32(esp, edx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x24); /* cvtsi2ss */
    MEMD(esp + 0x24) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x388);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x2C); /* cvtsi2ss */
    PUSH32(esp, ebp);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, ecx);
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EC6CAu); RECOMP_ABI_CALL(0x000865E0u, sub_000865E0); /* call 0x000865E0 */

loc_002EC6CA: ;
    ecx = MEM32(esp + 0x5C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + ecx * 4 + 0x2A0) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002EC7FD; /* jne: not equal / not zero */

loc_002EC6E7: ;
    edx = MEM32(ebp);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 4);
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x36C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(edx + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 8); /* addss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x28); /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    xmm5 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EC7A2; /* jnp: not parity */

loc_002EC78C: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */

loc_002EC7A2: ;
    eax = MEM32(esp + 0x380);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x380);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x384);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x384);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x002EC7F6u); RECOMP_ABI_CALL(0x000865E0u, sub_000865E0); /* call 0x000865E0 */

loc_002EC7F6: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC839; /* je: equal / zero */

loc_002EC7FD: ;
    eax = MEM32(esp + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esp + 0x38) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002EC570; /* jle: less or equal (signed <=) */

loc_002EC812: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC814: ;
    ecx = MEM32(esp + eax * 4 + 0x2A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EC854; /* jne: not equal / not zero */

loc_002EC81F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002EC814; /* jle: less or equal (signed <=) */

loc_002EC825: ;
    eax = MEM32(esp + 0x384);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFCFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x35C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x35C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EC839: ;
    eax = MEM32(esp + 0x384);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x35C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x35C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EC854: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = eax + eax * 2;
    edx = MEM32(esp + eax * 4 + 0x48);
    ecx = MEM32(esp + eax * 4 + 0x4C);
    eax = esp + eax * 4 + 0x48;
    MEM32(edi) = edx;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    edx = MEM32(eax + 8);
    eax = MEM32(esp + 0x384);
    MEM32(edi + 4) = ecx;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    MEM32(edi + 8) = edx;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    POP32(esp, esi);
    ecx = ecx | 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x35C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x35C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EC8B0
 * Original: 0x002EC8B0 - 0x002ECA05 (341 bytes, 90 insns)
 * Folder: ai (match: xbox-demo 0x002640F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EC8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EC8B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    PUSH32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002EC8E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC8DFu); } /* indirect call */
    }

loc_002EC8E6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC8F2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EC8F2: ;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC8FBu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EC8FB: ;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC904u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EC904: ;
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC90Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EC90D: ;
    ebx = MEM32(0x758D48);
    esi = MEM32(ebx + 0x69650C);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x34) = esi;
    esi = MEM32(ebx + 0x696530);
    MEM32(0x758D68) = edx;
    edx = MEM32(ebx + 0x696528);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x2C) = esi;
    esi = MEM32(0x758D4C);
    MEM32(esp + 0x28) = edx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebx + 0x696528);
    MEM32(0x758D4C) = esi;
    esi = ebx + 0x696528;
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esi + 4);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x44AA20);
    eax = esp + 0x4C;
    edi = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC9BCu); RECOMP_ABI_CALL(0x002EC2A0u, sub_002EC2A0); /* call 0x002EC2A0 */

loc_002EC9BC: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    MEM32(esi + 8) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 3;
    MEM32(eax * 8 + 0x68642C) = esi;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    MEM32(0x758D48) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002ECA10
 * Original: 0x002ECA10 - 0x002ECA56 (70 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x00264250, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECA10: ;
    PUSH32(esp, 0x002ECA15u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ECA15: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002ECA4E; /* je: equal / zero */

loc_002ECA37: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECA4E; /* je: equal / zero */

loc_002ECA3E: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECA4E; /* je: equal / zero */

loc_002ECA44: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECA4E; /* je: equal / zero */

loc_002ECA4B: ;
    MEM8(ecx + 7) = LO8(eax);

loc_002ECA4E: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ECA60
 * Original: 0x002ECA60 - 0x002ECADA (122 bytes, 32 insns)
 * Folder: ai (match: xbox-demo 0x002642A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECA60: ;
    eax = MEM32(0x758D70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002ECA9B; /* je: equal / zero */

loc_002ECA81: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECA9B; /* je: equal / zero */

loc_002ECA88: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECA9B; /* je: equal / zero */

loc_002ECA8E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECA9B; /* je: equal / zero */

loc_002ECA95: ;
    edx = ZX8(MEM8(eax + 7));
    goto loc_002ECA9D;

loc_002ECA9B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002ECA9D: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ECAE0
 * Original: 0x002ECAE0 - 0x002ECB3F (95 bytes, 19 insns)
 * Folder: ai (match: xbox-demo 0x00264320, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECAE0: ;
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    edx = MEM32(0x44AA20);
    edx = MEM32(edx + 0x2B4);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ECB40
 * Original: 0x002ECB40 - 0x002ECB7B (59 bytes, 13 insns)
 * Folder: ai (match: xbox-demo 0x00264380, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECB40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECB40: ;
    PUSH32(esp, 0x002ECB45u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ECB45: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x44AA20);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx + eax * 4 + 0x274);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002ECB70u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002ECB70: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ECB80
 * Original: 0x002ECB80 - 0x002ECC34 (180 bytes, 47 insns)
 * Folder: ai (match: xbox-demo 0x002643C0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECB80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002ECB8Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ECB8A: ;
    esi = eax;
    PUSH32(esp, 0x002ECB91u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ECB91: ;
    edi = eax;
    PUSH32(esp, 0x002ECB98u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ECB98: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002ECBBD; /* jne: not equal / not zero */

loc_002ECBB3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002ECBC5;

loc_002ECBBD: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002ECBC5: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x758D6C);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    PUSH32(esp, eax);
    eax = MEM32(0x44AA20);
    edx = esp + 0x10;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x002ECC1Eu); RECOMP_ABI_CALL(0x000400F0u, sub_000400F0); /* call 0x000400F0 */

loc_002ECC1E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002ECC24u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002ECC24: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ECC40
 * Original: 0x002ECC40 - 0x002ECC73 (51 bytes, 17 insns)
 * Folder: ai (between: 0x002ECB80 and 0x002ECC80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECC40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECC40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ebx = esp + 8;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002ECC6Bu); RECOMP_ABI_CALL(0x000733F0u, sub_000733F0); /* call 0x000733F0 */

loc_002ECC6B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ECC80
 * Original: 0x002ECC80 - 0x002ECD64 (228 bytes, 54 insns)
 * Folder: ai (match: xbox-demo 0x00264480, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECC80: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002ECCA7; /* jne: not equal / not zero */

loc_002ECC9D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002ECCAF;

loc_002ECCA7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002ECCAF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x69652C);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x696528);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696530);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, 0x002ECCDEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ECCDE: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, eax);
    ebx = esp + 0x14;
    edi = ecx;
    MEM32(0x758D68) = edx;
    MEM32(esp + 0x14) = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002ECD20u); RECOMP_ABI_CALL(0x000733F0u, sub_000733F0); /* call 0x000733F0 */

loc_002ECD20: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x20);
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ECD70
 * Original: 0x002ECD70 - 0x002ECDA0 (48 bytes, 14 insns)
 * Folder: ai (match: xbox-demo 0x00264570, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECD70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECD70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x18);
    ecx = esp;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002ECD9Cu); RECOMP_ABI_CALL(0x000734A0u, sub_000734A0); /* call 0x000734A0 */

loc_002ECD9C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ECDA0
 * Original: 0x002ECDA0 - 0x002ECE80 (224 bytes, 53 insns)
 * Folder: ai (match: xbox-demo 0x002645A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECDA0: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002ECDC7; /* jne: not equal / not zero */

loc_002ECDBD: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002ECDCF;

loc_002ECDC7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002ECDCF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x696530);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x696528);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x69652C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, 0x002ECDFEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ECDFE: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D70);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D64);
    MEM32(0x758D68) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = ebx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002ECE3Du); RECOMP_ABI_CALL(0x000734A0u, sub_000734A0); /* call 0x000734A0 */

loc_002ECE3D: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x20);
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ECE80
 * Original: 0x002ECE80 - 0x002ECF54 (212 bytes, 50 insns)
 * Folder: ai (match: xbox-demo 0x00264680, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECE80: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 0x696530);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x696528);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0x696530);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = esi;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x002ECEE4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ECEE4: ;
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    esi = esp + 0x10;
    edi = esp + 0x1C;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002ECF11u); RECOMP_ABI_CALL(0x00073890u, sub_00073890); /* call 0x00073890 */

loc_002ECF11: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x24);
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ECF60
 * Original: 0x002ECF60 - 0x002ED04D (237 bytes, 51 insns)
 * Folder: ai (match: xbox-demo 0x00264760, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECF60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECF60: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x645090);
    xmm3 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 4); /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 8); /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x645094);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(0x645098);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x645084);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x645088);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(0x64508C);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x645078);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(0x64507C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 8); /* subss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(0x645080);
    eax = esp;
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x002ED049u); RECOMP_ABI_CALL(0x00073A20u, sub_00073A20); /* call 0x00073A20 */

loc_002ED049: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ED050
 * Original: 0x002ED050 - 0x002ED11D (205 bytes, 45 insns)
 * Folder: ai (match: xbox-demo 0x00264850, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED050: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 0x696530);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x696528);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(0x758D48) = eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x002ED0B2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED0B2: ;
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    PUSH32(esp, eax);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, ecx);
    eax = esp + 8;
    ecx = esp + 0x14;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002ED0DFu); RECOMP_ABI_CALL(0x002ECF60u, sub_002ECF60); /* call 0x002ECF60 */

loc_002ED0DF: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ED120
 * Original: 0x002ED120 - 0x002ED222 (258 bytes, 59 insns)
 * Folder: ai (match: xbox-demo 0x00264920, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED120: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002ED147; /* jne: not equal / not zero */

loc_002ED13D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002ED14F;

loc_002ED147: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002ED14F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_002ED16D; /* jne: not equal / not zero */

loc_002ED163: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002ED175;

loc_002ED16D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002ED175: ;
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002ED1AEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED1AE: ;
    ecx = MEM32(0x758D6C);
    edi = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    MEM32(0x758D68) = edx;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x002ED1E0u); RECOMP_ABI_CALL(0x00073DF0u, sub_00073DF0); /* call 0x00073DF0 */

loc_002ED1E0: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ED230
 * Original: 0x002ED230 - 0x002ED429 (505 bytes, 130 insns)
 * Folder: ai (match: xbox-demo 0x00264A30, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED230(void)
{
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

loc_002ED230: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(eax + 4);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 8);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 0x34) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(esp + 0x38) = edx;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = xmm5; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEM32(esp + 0x10) = esi;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    xmm5 = xmm7; /* movaps */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429388)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_002ED413; /* jbe: below or equal (unsigned <=) */

loc_002ED356: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    xmm4 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    xmm7 = xmm2; /* movaps */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */

loc_002ED413: ;
    edx = MEM32(esp + 0x3C);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0x002ED425u); RECOMP_ABI_CALL(0x00073EF0u, sub_00073EF0); /* call 0x00073EF0 */

loc_002ED425: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x3C)) >> 32) & 1);
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ED430
 * Original: 0x002ED430 - 0x002ED522 (242 bytes, 53 insns)
 * Folder: ai (match: xbox-demo 0x00264C30, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED430: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 0x696530);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x696528);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x696530);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x002ED4B3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED4B3: ;
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, eax);
    MEM32(0x758D68) = edx;
    PUSH32(esp, ecx);
    eax = esp + 8;
    ecx = esp + 0x14;
    edx = esp + 0x20;
    PUSH32(esp, 0x002ED4E4u); RECOMP_ABI_CALL(0x002ED230u, sub_002ED230); /* call 0x002ED230 */

loc_002ED4E4: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ED530
 * Original: 0x002ED530 - 0x002ED585 (85 bytes, 18 insns)
 * Folder: ai (match: xbox-demo 0x00264D30, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED530: ;
    PUSH32(esp, 0x002ED535u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED535: ;
    edx = MEM32(0x758D48);
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + ecx + 0x32C);
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ED590
 * Original: 0x002ED590 - 0x002ED601 (113 bytes, 30 insns)
 * Folder: ai (match: xbox-demo 0x00264D90, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED590: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002ED596u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED596: ;
    esi = eax;
    PUSH32(esp, 0x002ED59Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED59D: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x2E8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x44) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002ED5C3; /* jae: above or equal (unsigned >=) */

loc_002ED5B5: ;
    edx = esi + esi * 2;
    ecx = MEM32(eax + edx * 4 + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002ED5C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002ED5BEu); } /* indirect call */
    }

loc_002ED5C1: ;
    goto loc_002ED5C5;

loc_002ED5C3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002ED5C5: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002ED610
 * Original: 0x002ED610 - 0x002ED62D (29 bytes, 8 insns)
 * Folder: ai (between: 0x002ED590 and 0x002ED630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED610: ;
    edx = eax + eax * 2;
    eax = MEM32(0x44AA20);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = edx + eax + 0x2E8;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x002ED62Cu); RECOMP_ABI_CALL(0x0008B2D0u, sub_0008B2D0); /* call 0x0008B2D0 */

loc_002ED62C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002ED630
 * Original: 0x002ED630 - 0x002ED6B1 (129 bytes, 33 insns)
 * Folder: ai (match: xbox-demo 0x00264E30, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED630: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x002ED639u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED639: ;
    esi = eax;
    PUSH32(esp, 0x002ED640u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED640: ;
    edx = eax + eax * 2;
    eax = MEM32(0x44AA20);
    ecx = esp + 4;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = edx + eax + 0x2E8;
    eax = esi;
    PUSH32(esp, 0x002ED65Eu); RECOMP_ABI_CALL(0x0008B2D0u, sub_0008B2D0); /* call 0x0008B2D0 */

loc_002ED65E: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 4);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ED6C0
 * Original: 0x002ED6C0 - 0x002ED74E (142 bytes, 40 insns)
 * Folder: ai (match: xbox-demo 0x00264EC0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED6C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002ED6CBu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED6CB: ;
    esi = eax;
    PUSH32(esp, 0x002ED6D2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED6D2: ;
    edi = eax;
    PUSH32(esp, 0x002ED6D9u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED6D9: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + 0x2E8;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ebx = esp + 0x14;
    eax = edi;
    PUSH32(esp, 0x002ED6F9u); RECOMP_ABI_CALL(0x0008B4A0u, sub_0008B4A0); /* call 0x0008B4A0 */

loc_002ED6F9: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 0xC);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    POP32(esp, edi);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x18);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ED750
 * Original: 0x002ED750 - 0x002ED76C (28 bytes, 6 insns)
 * Folder: ai (between: 0x002ED6C0 and 0x002ED770)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002ED750: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0x2E8;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0008B770(); return; /* tail jmp 0x0008B770 */

}

/**
 * sub_002ED770
 * Original: 0x002ED770 - 0x002ED7F3 (131 bytes, 34 insns)
 * Folder: ai (match: xbox-demo 0x00264F70, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED770: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002ED77Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED77A: ;
    esi = eax;
    PUSH32(esp, 0x002ED781u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED781: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0x2E8;
    edi = esp + 8;
    eax = esi;
    PUSH32(esp, 0x002ED79Fu); RECOMP_ABI_CALL(0x0008B770u, sub_0008B770); /* call 0x0008B770 */

loc_002ED79F: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 8);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x18);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ED800
 * Original: 0x002ED800 - 0x002ED81C (28 bytes, 6 insns)
 * Folder: ai (between: 0x002ED770 and 0x002ED890)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002ED800: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0x2E8;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0008B7D0(); return; /* tail jmp 0x0008B7D0 */

}

/**
 * sub_002ED820
 * Original: 0x002ED820 - 0x002ED887 (103 bytes, 24 insns)
 * Folder: ai (between: 0x002ED770 and 0x002ED890)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED820: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002ED826u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED826: ;
    esi = eax;
    PUSH32(esp, 0x002ED82Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED82D: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0x2E8;
    eax = esi;
    PUSH32(esp, 0x002ED847u); RECOMP_ABI_CALL(0x0008B7D0u, sub_0008B7D0); /* call 0x0008B7D0 */

loc_002ED847: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002ED890
 * Original: 0x002ED890 - 0x002ED8B3 (35 bytes, 11 insns)
 * Folder: ai (match: xbox-demo 0x002650F0, library)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002ED890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED890: ;
    edx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edx + 0x2E8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x44) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002ED8B0; /* jae: above or equal (unsigned >=) */

loc_002ED8A8: ;
    ecx = ecx + ecx * 2;
    eax = MEM32(eax + ecx * 4 + 0x4C);
    esp += 4; return; /* ret */

loc_002ED8B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ED8C0
 * Original: 0x002ED8C0 - 0x002ED912 (82 bytes, 27 insns)
 * Folder: ai (match: xbox-demo 0x00265120, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED8C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002ED8C6u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED8C6: ;
    esi = eax;
    PUSH32(esp, 0x002ED8CDu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED8CD: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x2E8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x44) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002ED8FE; /* jae: above or equal (unsigned >=) */

loc_002ED8E5: ;
    edx = esi + esi * 2;
    eax = MEM32(eax + edx * 4 + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002ED8F2u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002ED8F2: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002ED8FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002ED906u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002ED906: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002ED920
 * Original: 0x002ED920 - 0x002ED947 (39 bytes, 12 insns)
 * Folder: ai (match: xbox-demo 0x00265180, library)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002ED920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002ED920: ;
    edx = MEM32(0x44AA20);
    ecx = ecx + ecx * 2;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + edx + 0x2E8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x44) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002ED944; /* jae: above or equal (unsigned >=) */

loc_002ED938: ;
    eax = eax + eax * 2;
    ecx = MEM32(ecx + eax * 4 + 0x50);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

loc_002ED944: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002ED950
 * Original: 0x002ED950 - 0x002ED9C1 (113 bytes, 30 insns)
 * Folder: ai (match: xbox-demo 0x002651B0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED950: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002ED956u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED956: ;
    esi = eax;
    PUSH32(esp, 0x002ED95Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED95D: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x2E8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x44) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002ED983; /* jae: above or equal (unsigned >=) */

loc_002ED975: ;
    edx = esi + esi * 2;
    ecx = MEM32(eax + edx * 4 + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002ED981u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002ED97Eu); } /* indirect call */
    }

loc_002ED981: ;
    goto loc_002ED985;

loc_002ED983: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002ED985: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002ED9D0
 * Original: 0x002ED9D0 - 0x002ED9F0 (32 bytes, 11 insns)
 * Folder: ai (match: xbox-demo 0x00265230, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED9D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = eax + eax * 2;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ecx);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax + 0x2E8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002ED9EFu); RECOMP_ABI_CALL(0x0008B3D0u, sub_0008B3D0); /* call 0x0008B3D0 */

loc_002ED9EF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002ED9F0
 * Original: 0x002ED9F0 - 0x002EDA9F (175 bytes, 46 insns)
 * Folder: ai (match: xbox-demo 0x00265250, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED9F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002ED9FAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002ED9FA: ;
    esi = eax;
    PUSH32(esp, 0x002EDA01u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDA01: ;
    edx = MEM32(0x758D4C);
    edi = eax;
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002EDA40u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDA40: ;
    PUSH32(esp, esi);
    edx = eax + eax * 2;
    eax = MEM32(0x44AA20);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax + 0x2E8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EDA5Fu); RECOMP_ABI_CALL(0x0008B3D0u, sub_0008B3D0); /* call 0x0008B3D0 */

loc_002EDA5F: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDAA0
 * Original: 0x002EDAA0 - 0x002EDAC6 (38 bytes, 13 insns)
 * Folder: ai (match: xbox-demo 0x00265300, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDAA0: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + ecx + 0x2E8;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EDAC4u); RECOMP_ABI_CALL(0x0008BBE0u, sub_0008BBE0); /* call 0x0008BBE0 */

loc_002EDAC4: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EDAD0
 * Original: 0x002EDAD0 - 0x002EDB51 (129 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x00265330, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EDAD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EDAD9u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDAD9: ;
    ebx = eax;
    PUSH32(esp, 0x002EDAE0u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDAE0: ;
    esi = eax;
    PUSH32(esp, 0x002EDAE7u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDAE7: ;
    ebp = eax;
    PUSH32(esp, 0x002EDAEEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDAEE: ;
    edi = eax;
    PUSH32(esp, 0x002EDAF5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDAF5: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebp);
    eax = eax + ecx + 0x2E8;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x002EDB12u); RECOMP_ABI_CALL(0x0008BBE0u, sub_0008BBE0); /* call 0x0008BBE0 */

loc_002EDB12: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EDB60
 * Original: 0x002EDB60 - 0x002EDB98 (56 bytes, 18 insns)
 * Folder: ai (match: xbox-demo 0x002653C0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDB60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EDB67u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDB67: ;
    edi = eax;
    PUSH32(esp, 0x002EDB6Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDB6E: ;
    esi = eax;
    PUSH32(esp, 0x002EDB75u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDB75: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    eax = eax + ecx + 0x2E8;
    PUSH32(esp, 0x002EDB8Eu); RECOMP_ABI_CALL(0x0008B840u, sub_0008B840); /* call 0x0008B840 */

loc_002EDB8E: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EDBA0
 * Original: 0x002EDBA0 - 0x002EDBBB (27 bytes, 9 insns)
 * Folder: ai (between: 0x002EDB60 and 0x002EDBC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDBA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDBA0: ;
    edx = eax + eax * 2;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebx);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ebx = edx + eax + 0x2E8;
    PUSH32(esp, 0x002EDBB9u); RECOMP_ABI_CALL(0x0008BAF0u, sub_0008BAF0); /* call 0x0008BAF0 */

loc_002EDBB9: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EDBC0
 * Original: 0x002EDBC0 - 0x002EDC32 (114 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x00265420, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDBC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDBC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = esi;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002EDC02u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDC02: ;
    esi = eax;
    PUSH32(esp, 0x002EDC09u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDC09: ;
    edx = eax + eax * 2;
    eax = MEM32(0x44AA20);
    ecx = esp + 8;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ebx = edx + eax + 0x2E8;
    PUSH32(esp, 0x002EDC25u); RECOMP_ABI_CALL(0x0008BAF0u, sub_0008BAF0); /* call 0x0008BAF0 */

loc_002EDC25: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDC40
 * Original: 0x002EDC40 - 0x002EDC61 (33 bytes, 9 insns)
 * Folder: ai (match: xbox-demo 0x002654A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDC40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDC40: ;
    edx = eax + eax * 2;
    eax = MEM32(0x44AA20);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = edx + eax + 0x2E8;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x002EDC60u); RECOMP_ABI_CALL(0x0008B360u, sub_0008B360); /* call 0x0008B360 */

loc_002EDC60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EDC70
 * Original: 0x002EDC70 - 0x002EDD2D (189 bytes, 46 insns)
 * Folder: ai (match: xbox-demo 0x002654D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDC70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = esi;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x002EDCB1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDCB1: ;
    esi = eax;
    PUSH32(esp, 0x002EDCB8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDCB8: ;
    edx = eax + eax * 2;
    eax = MEM32(0x44AA20);
    ecx = esp + 0x10;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = edx + eax + 0x2E8;
    edx = esp + 8;
    eax = esi;
    PUSH32(esp, 0x002EDCDAu); RECOMP_ABI_CALL(0x0008B360u, sub_0008B360); /* call 0x0008B360 */

loc_002EDCDA: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 0x10);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x20);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDD30
 * Original: 0x002EDD30 - 0x002EDEA0 (368 bytes, 94 insns)
 * Folder: ai (match: xbox-demo 0x00265590, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EDD30: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EDD3Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDD3F: ;
    ebx = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002EDD6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDD64u); } /* indirect call */
    }

loc_002EDD6B: ;
    edi = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    ebp = 0x20;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edi;
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = esp + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002EDDA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDDA1u); } /* indirect call */
    }

loc_002EDDA8: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = edx;
    PUSH32(esp, 0x002EDDBEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDDBE: ;
    ebp = eax;
    PUSH32(esp, 0x002EDDC5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDDC5: ;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDDED; /* jne: not equal / not zero */

loc_002EDDE3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002EDDF5;

loc_002EDDED: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002EDDF5: ;
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x002EDE2Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDE2D: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = eax + eax * 2;
    eax = MEM32(0x44AA20);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax + 0x2E8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EDE58u); RECOMP_ABI_CALL(0x0008BC60u, sub_0008BC60); /* call 0x0008BC60 */

loc_002EDE58: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x90);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDEA0
 * Original: 0x002EDEA0 - 0x002EE00F (367 bytes, 93 insns)
 * Folder: ai (match: xbox-demo 0x00265700, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EDEA0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EDEAFu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDEAF: ;
    ebx = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002EDEDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDED4u); } /* indirect call */
    }

loc_002EDEDB: ;
    edi = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    ebp = 0x20;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edi;
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = esp + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002EDF18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDF11u); } /* indirect call */
    }

loc_002EDF18: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = edx;
    PUSH32(esp, 0x002EDF2Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDF2E: ;
    ebp = eax;
    PUSH32(esp, 0x002EDF35u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDF35: ;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDF5D; /* jne: not equal / not zero */

loc_002EDF53: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002EDF65;

loc_002EDF5D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002EDF65: ;
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x002EDF9Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EDF9D: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = eax + eax * 2;
    eax = MEM32(0x44AA20);
    ecx = esp + 0x30;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    edi = edx + eax + 0x2E8;
    PUSH32(esp, 0x002EDFC7u); RECOMP_ABI_CALL(0x0008BE70u, sub_0008BE70); /* call 0x0008BE70 */

loc_002EDFC7: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x90);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EE010
 * Original: 0x002EE010 - 0x002EE0D2 (194 bytes, 54 insns)
 * Folder: ai (match: xbox-demo 0x00265870, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EE010: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EE01Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE01C: ;
    edi = MEM32(0x758D4C);
    esi = eax;
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edi;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002EE05Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE05B: ;
    edi = eax;
    PUSH32(esp, 0x002EE062u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE062: ;
    ebx = eax;
    PUSH32(esp, 0x002EE069u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE069: ;
    ebp = eax;
    PUSH32(esp, 0x002EE070u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE070: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax + eax * 2;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    eax = ecx + edx + 0x2E8;
    PUSH32(esp, ebp);
    edi = esp + 0x20;
    PUSH32(esp, 0x002EE090u); RECOMP_ABI_CALL(0x0008BF30u, sub_0008BF30); /* call 0x0008BF30 */

loc_002EE090: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EE0E0
 * Original: 0x002EE0E0 - 0x002EE12B (75 bytes, 24 insns)
 * Folder: ai (between: 0x002EE010 and 0x002EE130)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE0E0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EE122; /* je: equal / zero */

loc_002EE104: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE122; /* je: equal / zero */

loc_002EE10B: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE122; /* je: equal / zero */

loc_002EE112: ;
    PUSH32(esp, esi);
    esi = eax + 0xC0;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, 0x002EE121u); RECOMP_ABI_CALL(0x000743B0u, sub_000743B0); /* call 0x000743B0 */

loc_002EE121: ;
    POP32(esp, esi);

loc_002EE122: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE130
 * Original: 0x002EE130 - 0x002EE272 (322 bytes, 84 insns)
 * Folder: ai (match: xbox-demo 0x00265940, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EE130: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EE13Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE13C: ;
    ebp = eax;
    PUSH32(esp, 0x002EE143u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE143: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002EE14Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE14C: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002EE155u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE155: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x002EE15Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE15E: ;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE186; /* jne: not equal / not zero */

loc_002EE17C: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002EE18E;

loc_002EE186: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002EE18E: ;
    edx = MEM32(eax + 0x696508);
    esi = MEM32(ecx * 8 + 0x68641C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    SET_LO16(eax, MEM16(ecx * 8 + 0x686428));
    edx = esp + 0x30;
    MEM32(0x758D4C) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(eax));
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x43D06C); PUSH32(esp, 0x002EE1E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE1DBu); } /* indirect call */
    }

loc_002EE1E2: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    edi = MEM32(0x758D48);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    MEM32(0x758D68) = edx;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x44AA20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = edi + 0x696528;
    PUSH32(esp, 0x002EE239u); RECOMP_ABI_CALL(0x0008A0F0u, sub_0008A0F0); /* call 0x0008A0F0 */

loc_002EE239: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = ebx;
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x64);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EE280
 * Original: 0x002EE280 - 0x002EE2B7 (55 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x00265A90, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE280: ;
    edx = MEM32(0x44AA20);
    ecx = ecx + ecx * 2;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + edx + 0x2E8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x44) (32-bit) */
    PUSH32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_002EE2B3; /* jae: above or equal (unsigned >=) */

loc_002EE299: ;
    eax = eax + eax * 2;
    esi = ecx + eax * 4 + 0x50;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002EE2A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE2A4u); } /* indirect call */
    }

loc_002EE2A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE2B3; /* jne: not equal / not zero */

loc_002EE2AC: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x30);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002EE2B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE2C0
 * Original: 0x002EE2C0 - 0x002EE341 (129 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00265AD0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE2C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EE2C6u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE2C6: ;
    esi = eax;
    PUSH32(esp, 0x002EE2CDu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE2CD: ;
    ecx = MEM32(0x44AA20);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x2E8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x44) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EE301; /* jae: above or equal (unsigned >=) */

loc_002EE2E5: ;
    edx = esi + esi * 2;
    ecx = MEM32(eax + edx * 4 + 0x50);
    esi = eax + edx * 4 + 0x50;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002EE2F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE2F2u); } /* indirect call */
    }

loc_002EE2F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE301; /* jne: not equal / not zero */

loc_002EE2FA: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x30);
    goto loc_002EE303;

loc_002EE301: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EE303: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE350
 * Original: 0x002EE350 - 0x002EE3B1 (97 bytes, 23 insns)
 * Folder: ai (between: 0x002EE2C0 and 0x002EE3C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE350: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    esi = edi + 0x696528;
    PUSH32(esp, 0x002EE380u); RECOMP_ABI_CALL(0x00082140u, sub_00082140); /* call 0x00082140 */

loc_002EE380: ;
    MEM32(esi) = eax;
    eax = MEM32(0x758D4C);
    MEM32(eax * 8 + 0x68642C) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE3C0
 * Original: 0x002EE3C0 - 0x002EE490 (208 bytes, 46 insns)
 * Folder: ai (match: xbox-demo 0x00265BD0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE3C0: ;
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE3E7; /* jne: not equal / not zero */

loc_002EE3DD: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002EE3EF;

loc_002EE3E7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002EE3EF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002EE418; /* jne: not equal / not zero */

loc_002EE40E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002EE420;

loc_002EE418: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002EE420: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(0x758D68) = edx;
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EE452u); RECOMP_ABI_CALL(0x0006D530u, sub_0006D530); /* call 0x0006D530 */

loc_002EE452: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EE490
 * Original: 0x002EE490 - 0x002EE500 (112 bytes, 38 insns)
 * Folder: ai (match: xbox-demo 0x00265CA0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE490: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    esi = edi + 0x696528;
    PUSH32(esp, 0x002EE4C0u); RECOMP_ABI_CALL(0x0006DC90u, sub_0006DC90); /* call 0x0006DC90 */

loc_002EE4C0: ;
    MEM32(esi) = eax;
    eax = MEM32(0x758D4C);
    MEM32(eax * 8 + 0x68642C) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE500
 * Original: 0x002EE500 - 0x002EE574 (116 bytes, 28 insns)
 * Folder: ai (between: 0x002EE490 and 0x002EE6F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE500: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EE522u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE522: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EE528u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE528: ;
    ecx = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EE535u); RECOMP_ABI_CALL(0x00072B90u, sub_00072B90); /* call 0x00072B90 */

loc_002EE535: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE580
 * Original: 0x002EE580 - 0x002EE5F4 (116 bytes, 28 insns)
 * Folder: ai (between: 0x002EE490 and 0x002EE6F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE580: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EE5A2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE5A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EE5A8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE5A8: ;
    ecx = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EE5B5u); RECOMP_ABI_CALL(0x00072C10u, sub_00072C10); /* call 0x00072C10 */

loc_002EE5B5: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE600
 * Original: 0x002EE600 - 0x002EE6E2 (226 bytes, 53 insns)
 * Folder: ai (between: 0x002EE490 and 0x002EE6F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE600: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EE609u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE609: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = esi;
    esi = MEM32(ecx + 0x69652C);
    MEM32(esp + 8) = esi;
    esi = MEM32(ecx + 0x696530);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = esi;
    esi = MEM32(ecx + 0x696528);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = esi;
    esi = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(0x758D6C);
    edx = esp + 0xC;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x758D70);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEM32(0x758D70) = esi;
    esi = MEM32(0x758D64);
    PUSH32(esp, eax);
    eax = ecx;
    MEM32(0x758D68) = esi;
    PUSH32(esp, 0x002EE6A0u); RECOMP_ABI_CALL(0x00040210u, sub_00040210); /* call 0x00040210 */

loc_002EE6A0: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EE6F0
 * Original: 0x002EE6F0 - 0x002EE83E (334 bytes, 89 insns)
 * Folder: ai (match: xbox-demo 0x00265F00, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE6F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE701u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE701: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE708u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE708: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE70Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE70F: ;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE718u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE718: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0x696530);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x696528);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(0x758D48) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE77Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE77C: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002EE7AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE7A3u); } /* indirect call */
    }

loc_002EE7AA: ;
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    eax = MEM32(0x758D48);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE7FBu); RECOMP_ABI_CALL(0x000404E0u, sub_000404E0); /* call 0x000404E0 */

loc_002EE7FB: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE840
 * Original: 0x002EE840 - 0x002EE8F9 (185 bytes, 51 insns)
 * Folder: ai (between: 0x002EE6F0 and 0x002EE900)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EE840: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EE84Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE84C: ;
    ebp = eax;
    PUSH32(esp, 0x002EE853u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE853: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002EE881u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE87Au); } /* indirect call */
    }

loc_002EE881: ;
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    edi = MEM32(0x758D48);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(0x44AA20);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEM32(0x758D68) = ecx;
    ebx = edi + 0x696528;
    PUSH32(esp, 0x002EE8C0u); RECOMP_ABI_CALL(0x00072CF0u, sub_00072CF0); /* call 0x00072CF0 */

loc_002EE8C0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = ebx;
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EE900
 * Original: 0x002EE900 - 0x002EE942 (66 bytes, 14 insns)
 * Folder: ai (match: xbox-demo 0x00266050, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE900: ;
    ecx = MEM32(0x758D48);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EE950
 * Original: 0x002EE950 - 0x002EE9C6 (118 bytes, 24 insns)
 * Folder: ai (match: xbox-demo 0x00266110, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE950: ;
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    PUSH32(esp, 0x002EE96Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE96F: ;
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EE9D0
 * Original: 0x002EE9D0 - 0x002EEA31 (97 bytes, 19 insns)
 * Folder: ai (match: xbox-demo 0x002660A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE9D0: ;
    PUSH32(esp, 0x002EE9D5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE9D5: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EE9F0u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EE9F0: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEA40
 * Original: 0x002EEA40 - 0x002EEA6B (43 bytes, 12 insns)
 * Folder: ai (match: xbox-demo 0x00266190, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEA40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEA40: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, 0x002EEA63u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEA63: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEA70
 * Original: 0x002EEA70 - 0x002EEA97 (39 bytes, 10 insns)
 * Folder: ai (match: xbox-demo 0x002661C0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEA70: ;
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    PUSH32(esp, 0x002EEA8Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEA8F: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEAA0
 * Original: 0x002EEAA0 - 0x002EEAE4 (68 bytes, 16 insns)
 * Folder: ai (match: xbox-demo 0x002661F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEAA0: ;
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ecx + 0x696528;
    MEM16(eax * 8 + 0x686428) = 2;
    MEM32(eax * 8 + 0x68642C) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 4);
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM32(0x758D48) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEAF0
 * Original: 0x002EEAF0 - 0x002EEB13 (35 bytes, 8 insns)
 * Folder: ai (match: xbox-demo 0x00266240, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEAF0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EEB0Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEB0B: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEB20
 * Original: 0x002EEB20 - 0x002EEB6C (76 bytes, 16 insns)
 * Folder: ai (match: xbox-demo 0x00266270, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEB20: ;
    PUSH32(esp, 0x002EEB25u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEB25: ;
    PUSH32(esp, 0x002EEB2Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEB2A: ;
    ecx = MEM32(0x758D48);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEB70
 * Original: 0x002EEB70 - 0x002EEBB7 (71 bytes, 15 insns)
 * Folder: ai (match: xbox-demo 0x002662D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEB70: ;
    PUSH32(esp, 0x002EEB75u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEB75: ;
    ecx = MEM32(0x758D48);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEBC0
 * Original: 0x002EEBC0 - 0x002EEC0B (75 bytes, 15 insns)
 * Folder: ai (between: 0x002EEB70 and 0x002EEC10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEBC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEBC0: ;
    PUSH32(esp, 0x002EEBC5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEBC5: ;
    PUSH32(esp, 0x002EEBCAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEBCA: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEC10
 * Original: 0x002EEC10 - 0x002EEC78 (104 bytes, 24 insns)
 * Folder: ai (match: xbox-demo 0x00266320, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEC10: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, 0x002EEC37u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEC37: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 0;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEC80
 * Original: 0x002EEC80 - 0x002EECED (109 bytes, 25 insns)
 * Folder: ai (match: xbox-demo 0x00266390, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEC80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEC80: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, 0x002EECA7u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EECA7: ;
    PUSH32(esp, 0x002EECACu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EECAC: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 0;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EECF0
 * Original: 0x002EECF0 - 0x002EED50 (96 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x002664A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EECF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EECF0: ;
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    PUSH32(esp, 0x002EED0Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EED0F: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EED50
 * Original: 0x002EED50 - 0x002EEDA0 (80 bytes, 24 insns)
 * Folder: ai (between: 0x002EECF0 and 0x002EEDA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EED50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EED50: ;
    PUSH32(esp, 0x002EED55u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EED55: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEDA0
 * Original: 0x002EEDA0 - 0x002EEDC8 (40 bytes, 9 insns)
 * Folder: ai (match: xbox-demo 0x00266560, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEDA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEDA0: ;
    PUSH32(esp, 0x002EEDA5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEDA5: ;
    PUSH32(esp, 0x002EEDAAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEDAA: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x758D68) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEDD0
 * Original: 0x002EEDD0 - 0x002EEDF3 (35 bytes, 8 insns)
 * Folder: ai (match: xbox-demo 0x00266590, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEDD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEDD0: ;
    PUSH32(esp, 0x002EEDD5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEDD5: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x758D68) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEE00
 * Original: 0x002EEE00 - 0x002EEE5C (92 bytes, 18 insns)
 * Folder: ai (between: 0x002EEDD0 and 0x002EEE80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEE00: ;
    PUSH32(esp, 0x002EEE05u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEE05: ;
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEE60
 * Original: 0x002EEE60 - 0x002EEE72 (18 bytes, 5 insns)
 * Folder: ai (between: 0x002EEDD0 and 0x002EEE80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEE60: ;
    PUSH32(esp, 0x002EEE65u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEE65: ;
    PUSH32(esp, 0x002EEE6Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEE6A: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEE80
 * Original: 0x002EEE80 - 0x002EEEB1 (49 bytes, 12 insns)
 * Folder: ai (match: xbox-demo 0x002665E0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEE80: ;
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    PUSH32(esp, 0x002EEE9Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEE9F: ;
    PUSH32(esp, 0x002EEEA4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEEA4: ;
    PUSH32(esp, 0x002EEEA9u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEEA9: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEEC0
 * Original: 0x002EEEC0 - 0x002EEED7 (23 bytes, 6 insns)
 * Folder: ai (between: 0x002EEE80 and 0x002EEEF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEEC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEEC0: ;
    PUSH32(esp, 0x002EEEC5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEEC5: ;
    PUSH32(esp, 0x002EEECAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEECA: ;
    PUSH32(esp, 0x002EEECFu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEECF: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEEE0
 * Original: 0x002EEEE0 - 0x002EEEE8 (8 bytes, 3 insns)
 * Folder: ai (between: 0x002EEE80 and 0x002EEEF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEEE0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EEEF0
 * Original: 0x002EEEF0 - 0x002EEF54 (100 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x00266640, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEEF0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EEF12u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEF12: ;
    ecx = MEM32(0x44AA20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEF2E; /* jne: not equal / not zero */

loc_002EEF1C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EEF22u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EEF22: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002EEF2E: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    eax = eax + ecx + 0xA0;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    MEM32(eax) = esi;
    PUSH32(esp, 0x002EEF48u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EEF48: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EEF60
 * Original: 0x002EEF60 - 0x002EEFF7 (151 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x002666B0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEF60: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EEF7Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEF7C: ;
    PUSH32(esp, 0x002EEF81u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEF81: ;
    PUSH32(esp, 0x002EEF86u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEF86: ;
    PUSH32(esp, 0x002EEF8Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEF8B: ;
    PUSH32(esp, 0x002EEF90u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EEF90: ;
    esi = MEM32(0x44AA20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEFEE; /* je: equal / zero */

loc_002EEF9A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EEFA0u); RECOMP_ABI_CALL(0x00016AA0u, sub_00016AA0); /* call 0x00016AA0 */

loc_002EEFA0: ;
    ecx = MEM32(esi + 0x30);
    esi = MEM32(ecx + 0xA8);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD0);
    MEM32(edx + ecx + 0xA8) = esi;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;

loc_002EEFEE: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EF000
 * Original: 0x002EF000 - 0x002EF049 (73 bytes, 16 insns)
 * Folder: ai (match: xbox-demo 0x00266750, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF000: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EF01Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EF01B: ;
    ecx = MEM32(0x44AA20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF041; /* je: equal / zero */

loc_002EF025: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0xA4) = MEM8(eax + 0xA4) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0xA4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(eax + 0xC0) = 0;

loc_002EF041: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF050
 * Original: 0x002EF050 - 0x002EF07F (47 bytes, 9 insns)
 * Folder: ai (match: xbox-demo 0x002667A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF050(void)
{

loc_002EF050: ;
    ecx = MEM32(0x758D6C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x44AA20);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edx + eax + 0xA0);
    esp += 4; return; /* ret */

}

/**
 * sub_002EF080
 * Original: 0x002EF080 - 0x002EF0C4 (68 bytes, 15 insns)
 * Folder: ai (match: xbox-demo 0x002667D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF080: ;
    PUSH32(esp, 0x002EF085u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EF085: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x44AA20);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edx + eax + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EF0B9u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EF0B9: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF0D0
 * Original: 0x002EF0D0 - 0x002EF181 (177 bytes, 47 insns)
 * Folder: ai (match: xbox-demo 0x00266820, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002EF0D0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, edi);
    edi = MEM32(0x44AA20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EF17F; /* je: equal / zero */

loc_002EF0F5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = edx;
    edx = MEM32(edi + 0x30);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD0);
    xmm1 = XMM_SCALAR(MEMF(edx + esi + 0xAC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EF17E; /* jnp: not parity */

loc_002EF119: ;
    eax = edx;
    MEMF(eax + esi + 0xAC) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x30);
    eax = ecx + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x002EF131u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EF12Bu); } /* indirect call */
    }

loc_002EF131: ;
    edx = MEM32(edi + 0x30);
    esi = MEM32(edx + esi + 0xA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF17E; /* je: equal / zero */

loc_002EF142: ;
    eax = MEM32(esi + 0xA4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xA8);
    PUSH32(esp, eax);
    edx = esi + 0xAC;
    ecx = esi + 0xD0;
    PUSH32(esp, edx);
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EF170u); RECOMP_ABI_CALL(0x002FDB30u, sub_002FDB30); /* call 0x002FDB30 */

loc_002EF170: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(0x758E34) = esi;
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x002EF17Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002EF177u); } /* indirect call */
    }

loc_002EF17A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_002EF17E: ;
    POP32(esp, esi);

loc_002EF17F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EF190
 * Original: 0x002EF190 - 0x002EF1E8 (88 bytes, 22 insns)
 * Folder: ai (match: xbox-demo 0x002668E0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF190: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002EF1C0; /* jne: not equal / not zero */

loc_002EF1B6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002EF1C8;

loc_002EF1C0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002EF1C8: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EF1D6u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EF1D6: ;
    edx = eax;
    PUSH32(esp, 0x002EF1DDu); RECOMP_ABI_CALL(0x002EF0D0u, sub_002EF0D0); /* call 0x002EF0D0 */

loc_002EF1DD: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF1F0
 * Original: 0x002EF1F0 - 0x002EF2E7 (247 bytes, 65 insns)
 * Folder: ai (between: 0x002EF190 and 0x002EF2F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002EF1F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, edi);
    edi = MEM32(0x44AA20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EF2E4; /* je: equal / zero */

loc_002EF216: ;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF25E; /* je: equal / zero */

loc_002EF225: ;
    edx = MEM32(0x758DBC);
    SET_LO16(eax, MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF25E; /* je: equal / zero */

loc_002EF233: ;
    ecx = MEM32(0x758DB8);
    eax = ZX16(LO16(eax));
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42936C); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_002EF25E: ;
    edx = MEM32(edi + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD0);
    xmm1 = XMM_SCALAR(MEMF(edx + esi + 0xAC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EF2E3; /* jnp: not parity */

loc_002EF27E: ;
    eax = edx;
    MEMF(eax + esi + 0xAC) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x30);
    eax = ecx + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x002EF296u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EF290u); } /* indirect call */
    }

loc_002EF296: ;
    edx = MEM32(edi + 0x30);
    esi = MEM32(edx + esi + 0xA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF2E3; /* je: equal / zero */

loc_002EF2A7: ;
    eax = MEM32(esi + 0xA4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xA8);
    PUSH32(esp, eax);
    edx = esi + 0xAC;
    ecx = esi + 0xD0;
    PUSH32(esp, edx);
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EF2D5u); RECOMP_ABI_CALL(0x002FDB30u, sub_002FDB30); /* call 0x002FDB30 */

loc_002EF2D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(0x758E34) = esi;
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x002EF2DFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002EF2DCu); } /* indirect call */
    }

loc_002EF2DF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_002EF2E3: ;
    POP32(esp, esi);

loc_002EF2E4: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EF2F0
 * Original: 0x002EF2F0 - 0x002EF37A (138 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x00266A30, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF2F0: ;
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF31B; /* jne: not equal / not zero */

loc_002EF311: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002EF323;

loc_002EF31B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002EF323: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), LO16(edx) (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002EF34B; /* jne: not equal / not zero */

loc_002EF341: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002EF353;

loc_002EF34B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002EF353: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EF35Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EF35E: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EF36Fu); RECOMP_ABI_CALL(0x002EF1F0u, sub_002EF1F0); /* call 0x002EF1F0 */

loc_002EF36F: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF380
 * Original: 0x002EF380 - 0x002EF3B9 (57 bytes, 13 insns)
 * Folder: ai (match: xbox-demo 0x00266AC0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF380: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x44AA20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002EF3A6; /* jne: not equal / not zero */

loc_002EF3A2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp += 4; return; /* ret */

loc_002EF3A6: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xAC)); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF3C0
 * Original: 0x002EF3C0 - 0x002EF43D (125 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x00266B00, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF3C0: ;
    PUSH32(esp, 0x002EF3C5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EF3C5: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x44AA20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002EF3EC; /* jne: not equal / not zero */

loc_002EF3E7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_002EF3FE;

loc_002EF3EC: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xAC)); /* movss */

loc_002EF3FE: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF440
 * Original: 0x002EF440 - 0x002EF4A5 (101 bytes, 19 insns)
 * Folder: ai (match: xbox-demo 0x00266B80, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF440: ;
    ecx = MEM32(0x758D6C);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D64);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x44AA20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF4A4; /* je: equal / zero */

loc_002EF462: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    edx = MEM32(edx);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xB8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + ecx + 0xBC)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xB0) = edx;
    MEMF(eax + 0xB4) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm1.f[0]; /* movss */

loc_002EF4A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EF4B0
 * Original: 0x002EF4B0 - 0x002EF4E6 (54 bytes, 15 insns)
 * Folder: ai (between: 0x002EF440 and 0x002EF5A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF4B0: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    esi = eax + 0x696528;
    PUSH32(esp, 0x002EF4D6u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EF4D6: ;
    edx = esi;
    PUSH32(esp, 0x002EF4DDu); RECOMP_ABI_CALL(0x002EF440u, sub_002EF440); /* call 0x002EF440 */

loc_002EF4DD: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EF4F0
 * Original: 0x002EF4F0 - 0x002EF592 (162 bytes, 35 insns)
 * Folder: ai (between: 0x002EF440 and 0x002EF5A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF4F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002EF4F8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EF4F8: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x44AA20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EF541; /* je: equal / zero */

loc_002EF51A: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xB0)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_002EF541: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x10);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF5A0
 * Original: 0x002EF5A0 - 0x002EF605 (101 bytes, 19 insns)
 * Folder: ai (match: xbox-demo 0x00266CE0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF5A0: ;
    ecx = MEM32(0x758D6C);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D64);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x44AA20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF604; /* je: equal / zero */

loc_002EF5C2: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = MEM32(eax + ecx + 0xB0);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xB4)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xB0) = edx;
    MEMF(eax + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm1.f[0]; /* movss */

loc_002EF604: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EF610
 * Original: 0x002EF610 - 0x002EF646 (54 bytes, 15 insns)
 * Folder: ai (between: 0x002EF5A0 and 0x002EF8A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF610: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    esi = eax + 0x696528;
    PUSH32(esp, 0x002EF636u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EF636: ;
    edx = esi;
    PUSH32(esp, 0x002EF63Du); RECOMP_ABI_CALL(0x002EF5A0u, sub_002EF5A0); /* call 0x002EF5A0 */

loc_002EF63D: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EF650
 * Original: 0x002EF650 - 0x002EF6F2 (162 bytes, 35 insns)
 * Folder: ai (between: 0x002EF5A0 and 0x002EF8A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF650: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002EF658u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EF658: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x44AA20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EF6A1; /* je: equal / zero */

loc_002EF67A: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xB8)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xBC)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_002EF6A1: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x10);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF700
 * Original: 0x002EF700 - 0x002EF7DB (219 bytes, 55 insns)
 * Folder: ai (between: 0x002EF5A0 and 0x002EF8A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002EF700: ;
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x44AA20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EF7DA; /* je: equal / zero */

loc_002EF723: ;
    eax = MEM32(eax + 0x30);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD0);
    eax = MEM32(ecx + eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF7DA; /* je: equal / zero */

loc_002EF73B: ;
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    PUSH32(esp, edi);
    edi = eax + 0x260;
    if (TEST_NZ(_fa, _fb)) goto loc_002EF750; /* jne: not equal / not zero */

loc_002EF74A: ;
    edi = eax + 0xD0;

loc_002EF750: ;
    edx = MEM32(esp + 8);
    ecx = edi + 0xE0;
    MEM32(edi + 0x180) = ecx;
    PUSH32(esp, edx);
    eax = 1;
    ecx = esi;
    PUSH32(esp, 0x002EF76Du); RECOMP_ABI_CALL(0x00312170u, sub_00312170); /* call 0x00312170 */

loc_002EF76D: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x42968C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EF7CB; /* jnp: not parity */

loc_002EF785: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EF7CB; /* jnp: not parity */

loc_002EF793: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x1C); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(edi + 0x24); /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(edi + 0x28); /* divss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002EF7CB: ;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    POP32(esp, edi);

loc_002EF7DA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EF7E0
 * Original: 0x002EF7E0 - 0x002EF89C (188 bytes, 45 insns)
 * Folder: ai (between: 0x002EF5A0 and 0x002EF8A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF7E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF7E0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x69650C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(esp + 0xC) = ecx;
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    ecx = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x002EF83Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EF83B: ;
    esi = esp + 8;
    ecx = eax;
    PUSH32(esp, 0x002EF846u); RECOMP_ABI_CALL(0x002EF700u, sub_002EF700); /* call 0x002EF700 */

loc_002EF846: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 8);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x20);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF8A0
 * Original: 0x002EF8A0 - 0x002EF9F0 (336 bytes, 78 insns)
 * Folder: ai (match: xbox-demo 0x00266FA0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF8A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x758D6C);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(eax);
    MEM32(esp) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x44AA20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EF9EC; /* je: equal / zero */

loc_002EF8DB: ;
    edx = MEM32(eax + 0x30);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD0);
    eax = MEM32(ecx + edx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF9EC; /* je: equal / zero */

loc_002EF8F3: ;
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EF902; /* je: equal / zero */

loc_002EF8FB: ;
    _fb = (uint32_t)(0x260) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x260;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002EF907;

loc_002EF902: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002EF907: ;
    xmm1 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x1C); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x1C); /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    if (TEST_Z(_fa, _fb)) goto loc_002EF97F; /* je: equal / zero */

loc_002EF944: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(eax + 0x14); /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x18); /* divss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    goto loc_002EF9AA;

loc_002EF97F: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x14); /* divss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x18); /* divss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_002EF9AA: ;
    PUSH32(esp, esi);
    esi = eax + 0x90;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0x002EF9BDu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_002EF9BD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);

loc_002EF9EC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF9F0
 * Original: 0x002EF9F0 - 0x002EFA93 (163 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x002670F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF9F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x758D4C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edi;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x002EFA31u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EFA31: ;
    ecx = eax;
    edi = esp + 0x10;
    eax = esp + 4;
    PUSH32(esp, 0x002EFA40u); RECOMP_ABI_CALL(0x002EF8A0u, sub_002EF8A0); /* call 0x002EF8A0 */

loc_002EFA40: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 0x10);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x20);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EFAA0
 * Original: 0x002EFAA0 - 0x002EFB22 (130 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x002671A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFAA0: ;
    PUSH32(esp, 0x002EFAA5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EFAA5: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x44AA20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EFAE3; /* je: equal / zero */

loc_002EFAC7: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    eax = MEM32(eax + ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EFAE3; /* je: equal / zero */

loc_002EFADB: ;
    ecx = MEM32(eax + 0xA4);
    goto loc_002EFAE5;

loc_002EFAE3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EFAE5: ;
    edx = MEM32(0x758D48);
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EFB30
 * Original: 0x002EFB30 - 0x002EFB9B (107 bytes, 40 insns)
 * Folder: ai (match: xbox-demo 0x00267230, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EFB30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x44AA20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002EFB45; /* jne: not equal / not zero */

loc_002EFB3E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002EFB45: ;
    eax = MEM32(ebx + 0x30);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xD0);
    esi = eax + edi;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 0xC0); PUSH32(esp, 0x002EFB5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EFB54u); } /* indirect call */
    }

loc_002EFB5A: ;
    esi = MEM32(esi + 0xA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EFB3E; /* je: equal / zero */

loc_002EFB67: ;
    eax = MEM32(ebx + 0x30);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xD0)) >> 32) & 1);
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x90;
    PUSH32(esp, 0x002EFB7Du); RECOMP_ABI_CALL(0x002FDDD0u, sub_002FDDD0); /* call 0x002FDDD0 */

loc_002EFB7D: ;
    PUSH32(esp, 0x002EFB82u); RECOMP_ABI_CALL(0x002FD810u, sub_002FD810); /* call 0x002FD810 */

loc_002EFB82: ;
    PUSH32(esp, 0x002EFB87u); RECOMP_ABI_CALL(0x0007A460u, sub_0007A460); /* call 0x0007A460 */

loc_002EFB87: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x002EFB90u); RECOMP_ABI_CALL(0x0007B9C0u, sub_0007B9C0); /* call 0x0007B9C0 */

loc_002EFB90: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EFBA0
 * Original: 0x002EFBA0 - 0x002EFC09 (105 bytes, 25 insns)
 * Folder: ai (match: xbox-demo 0x002672A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFBA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFBA0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EFBC2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EFBC2: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x002EFBCAu); RECOMP_ABI_CALL(0x002EFB30u, sub_002EFB30); /* call 0x002EFB30 */

loc_002EFBCA: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EFC10
 * Original: 0x002EFC10 - 0x002EFC51 (65 bytes, 13 insns)
 * Folder: ai (between: 0x002EFBA0 and 0x002EFC60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFC10: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 0;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EFC60
 * Original: 0x002EFC60 - 0x002EFCD0 (112 bytes, 25 insns)
 * Folder: ai (match: xbox-demo 0x00267310, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFC60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFC60: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EFC82u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EFC82: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    ecx = MEM32(0x758D48);
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EFCD0
 * Original: 0x002EFCD0 - 0x002EFCFB (43 bytes, 15 insns)
 * Folder: ai (match: xbox-demo 0x00267380, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002EFCD0: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(edx + eax * 4 + 0x18);
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EFCF9; /* jnp: not parity */

loc_002EFCEF: ;
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EFCF9u); RECOMP_ABI_CALL(0x00075EF0u, sub_00075EF0); /* call 0x00075EF0 */

loc_002EFCF9: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EFD00
 * Original: 0x002EFD00 - 0x002EFD96 (150 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x002673B0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002EFD00: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    PUSH32(esp, edi);
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002EFD4E; /* jne: not equal / not zero */

loc_002EFD44: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002EFD56;

loc_002EFD4E: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002EFD56: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EFD61u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EFD61: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edi = MEM32(ecx + eax * 4 + 0x18);
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EFD8B; /* jnp: not parity */

loc_002EFD81: ;
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EFD8Bu); RECOMP_ABI_CALL(0x00075EF0u, sub_00075EF0); /* call 0x00075EF0 */

loc_002EFD8B: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EFDA0
 * Original: 0x002EFDA0 - 0x002EFDD6 (54 bytes, 18 insns)
 * Folder: ai (match: xbox-demo 0x00267450, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFDA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFDA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(edx + eax * 4 + 0x18);
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    esi = esp + 8;
    ecx = esp + 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002EFDC2u); RECOMP_ABI_CALL(0x000E9600u, sub_000E9600); /* call 0x000E9600 */

loc_002EFDC2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429370); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EFDE0
 * Original: 0x002EFDE0 - 0x002EFE75 (149 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00267490, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFDE0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EFE05u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EFE05: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    esi = esp + 0xC;
    ecx = esp + 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002EFE21u); RECOMP_ABI_CALL(0x000E9600u, sub_000E9600); /* call 0x000E9600 */

loc_002EFE21: ;
    ecx = MEM32(0x758D48);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429370); /* mulss */
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EFE80
 * Original: 0x002EFE80 - 0x002EFF2A (170 bytes, 42 insns)
 * Folder: ai (match: xbox-demo 0x00267530, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFE80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EFEA5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EFEA5: ;
    ecx = MEM32(0x758D48);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002EFED8; /* jne: not equal / not zero */

loc_002EFECE: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002EFEE0;

loc_002EFED8: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002EFEE0: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x42936C); /* mulss */
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EFEF4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EFEF4: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ebx = MEM32(ecx + eax * 4 + 0x18);
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002EFF0Bu); RECOMP_ABI_CALL(0x00027C80u, sub_00027C80); /* call 0x00027C80 */

loc_002EFF0B: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 3 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002EFF1E; /* je: equal / zero */

loc_002EFF13: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EFF1Bu); RECOMP_ABI_CALL(0x0003C220u, sub_0003C220); /* call 0x0003C220 */

loc_002EFF1B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002EFF1E: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EFF30
 * Original: 0x002EFF30 - 0x002EFFD7 (167 bytes, 54 insns)
 * Folder: ai (between: 0x002EFE80 and 0x002F0080)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFF30(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EFF30: ;
    eax = MEM32(0x75852C);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002EFF78; /* jge: greater or equal (signed >=) */

loc_002EFF44: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EFF78; /* je: equal / zero */

loc_002EFF4C: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EFF78; /* je: equal / zero */

loc_002EFF56: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EFF78; /* je: equal / zero */

loc_002EFF5F: ;
    esi = eax;
    PUSH32(esp, 0x002EFF66u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_002EFF66: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_002EFF78; /* je: equal / zero */

loc_002EFF6E: ;
    esi = MEM32(ebx + 0x38);
    PUSH32(esp, 0x002EFF76u); RECOMP_ABI_CALL(0x000A1C90u, sub_000A1C90); /* call 0x000A1C90 */

loc_002EFF76: ;
    goto loc_002EFF80;

loc_002EFF78: ;
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */

loc_002EFF80: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002EFFD3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x429350)) */

loc_002EFF95: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_002EFFD3; /* jle: less or equal (signed <=) */

loc_002EFF9B: ;
    goto loc_002EFFA0;

    /* nop */

loc_002EFFA0: ;
    eax = MEM32(edi + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EFFCE; /* je: equal / zero */

loc_002EFFA7: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x18);
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x42936C); /* mulss */
    ebx = eax + 4;
    PUSH32(esp, 0x002EFFC8u); RECOMP_ABI_CALL(0x00027C80u, sub_00027C80); /* call 0x00027C80 */

loc_002EFFC8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_002EFFCE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002EFFA0; /* jl: less (signed <) */

loc_002EFFD3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EFFE0
 * Original: 0x002EFFE0 - 0x002F007D (157 bytes, 41 insns)
 * Folder: ai (between: 0x002EFE80 and 0x002F0080)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFFE0: ;
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002F0012; /* jne: not equal / not zero */

loc_002F0008: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002F001A;

loc_002F0012: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002F001A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002F0027u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0027: ;
    esi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002F0053u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F004Cu); } /* indirect call */
    }

loc_002F0053: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(0x758D48) = ecx;
    PUSH32(esp, 0x002F006Du); RECOMP_ABI_CALL(0x002EFF30u, sub_002EFF30); /* call 0x002EFF30 */

loc_002F006D: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F002E
 * Original: 0x002F002E - 0x002F007D (79 bytes, 23 insns)
 * Folder: ai (between: 0x002EFE80 and 0x002F0080)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F002E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F002E: ;
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002F0053u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F004Cu); } /* indirect call */
    }

loc_002F0053: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(0x758D48) = ecx;
    PUSH32(esp, 0x002F006Du); RECOMP_ABI_CALL(0x002EFF30u, sub_002EFF30); /* call 0x002EFF30 */

loc_002F006D: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0080
 * Original: 0x002F0080 - 0x002F00ED (109 bytes, 41 insns)
 * Folder: ai (match: xbox-demo 0x002675E0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0080: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F00EB; /* jbe: below or equal (unsigned <=) */

loc_002F0096: ;
    xmm0 = XMM_SCALAR(MEMF(0x42936C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F00A4: ;
    eax = MEM32(eax);
    SET_LO16(eax, MEM16(edx + eax + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F00D8; /* je: equal / zero */

loc_002F00B0: ;
    ebx = MEM32(ecx + 4);
    eax = ZX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ebx + esi + 8) = LO16(eax);
    ebx = MEM32(ecx);
    ebx = MEM32(ebx);
    ebx = MEM32(ebx + edx + 4);
    eax = ZX16(MEM16(ebx + eax * 8));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + eax) = xmm1.f[0]; /* movss */

loc_002F00D8: ;
    eax = MEM32(ecx);
    ebx = ZX16(MEM16(eax + 4));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F00A4; /* jl: less (signed <) */

loc_002F00E9: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002F00EB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F00F0
 * Original: 0x002F00F0 - 0x002F011A (42 bytes, 9 insns)
 * Folder: ai (between: 0x002F0080 and 0x002F0140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F00F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F00F0: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F0112u); RECOMP_ABI_CALL(0x002F0080u, sub_002F0080); /* call 0x002F0080 */

loc_002F0112: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0120
 * Original: 0x002F0120 - 0x002F013D (29 bytes, 10 insns)
 * Folder: ai (between: 0x002F0080 and 0x002F0140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0120: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(esp + 4);
    ecx = MEM32(edx + eax * 4 + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002F0139u); RECOMP_ABI_CALL(0x000E95B0u, sub_000E95B0); /* call 0x000E95B0 */

loc_002F0139: ;
    eax = ZX16(LO16(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_002F0140
 * Original: 0x002F0140 - 0x002F01B8 (120 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x002676A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0140: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0163u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0163: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    eax = MEM32(edx + 4);
    edi = MEM32(0x758D48);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi + 0x696528;
    PUSH32(esp, 0x002F0184u); RECOMP_ABI_CALL(0x000E95B0u, sub_000E95B0); /* call 0x000E95B0 */

loc_002F0184: ;
    eax = ZX16(LO16(eax));
    MEM32(esi) = eax;
    eax = MEM32(0x758D4C);
    MEM32(eax * 8 + 0x68642C) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F01C0
 * Original: 0x002F01C0 - 0x002F021C (92 bytes, 18 insns)
 * Folder: ai (match: xbox-demo 0x00267720, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F01C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F01C0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F01DBu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F01DB: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0220
 * Original: 0x002F0220 - 0x002F028C (108 bytes, 25 insns)
 * Folder: ai (match: xbox-demo 0x00267780, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0220: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0242u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0242: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    ecx = ZX16(MEM16(edx));
    edx = MEM32(0x758D48);
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0290
 * Original: 0x002F0290 - 0x002F02E5 (85 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x002677F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0290: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F02B4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F02B4: ;
    esi = eax;
    PUSH32(esp, 0x002F02BBu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F02BB: ;
    ebx = eax;
    PUSH32(esp, 0x002F02C2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F02C2: ;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(edx);
    eax = MEM32(ecx + eax * 4 + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax));
    SET_LO16(edx, LO16(edx) | LO16(ebx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    esi = ~esi;
    POP32(esp, edi);
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(eax) = LO16(edx);
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F02F0
 * Original: 0x002F02F0 - 0x002F0365 (117 bytes, 30 insns)
 * Folder: ai (match: xbox-demo 0x00267850, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F02F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F02F0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0313u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0313: ;
    edi = eax;
    PUSH32(esp, 0x002F031Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F031A: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    eax = ZX16(MEM16(edx));
    edx = MEM32(0x758D48);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0370
 * Original: 0x002F0370 - 0x002F03D7 (103 bytes, 23 insns)
 * Folder: ai (match: xbox-demo 0x002678D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0370: ;
    ecx = MEM32(0x758D70);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    ecx = ZX8(MEM8(ecx + 1));
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x758D70) = eax;
    eax = edx + 0x696528;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F03E0
 * Original: 0x002F03E0 - 0x002F0469 (137 bytes, 38 insns)
 * Folder: ai (match: xbox-demo 0x00267940, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F03E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F03E0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F0422; /* je: equal / zero */

loc_002F0407: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0422; /* je: equal / zero */

loc_002F040D: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0422; /* je: equal / zero */

loc_002F0414: ;
    SET_LO8(ecx, MEM8(eax + 0x63));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_002F0422; /* jns: not sign (positive) */

loc_002F041B: ;
    esi = 1;
    goto loc_002F0424;

loc_002F0422: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F0424: ;
    ecx = MEM32(0x758D48);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ecx + 0x696528;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0470
 * Original: 0x002F0470 - 0x002F04E2 (114 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x002679D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0470: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0492u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0492: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx));
    edx = MEM32(0x758D48);
    eax = edx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = edx;
    POP32(esp, esi);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F04F0
 * Original: 0x002F04F0 - 0x002F0540 (80 bytes, 24 insns)
 * Folder: ai (match: xbox-demo 0x00267A50, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F04F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F04F0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0513u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0513: ;
    edi = eax;
    PUSH32(esp, 0x002F051Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F051A: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    eax = MEM32(ecx + eax * 4 + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    edx = edi + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx & 0xFFF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax) = LO16(edx);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0540
 * Original: 0x002F0540 - 0x002F0598 (88 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x00267AA0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F0540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F056Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F056B: ;
    MEM8(esp + 8) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0574u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0574: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 1);
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F058Au); RECOMP_ABI_CALL(0x0003B960u, sub_0003B960); /* call 0x0003B960 */

loc_002F058A: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F05A0
 * Original: 0x002F05A0 - 0x002F0622 (130 bytes, 60 insns)
 * Folder: ai (match: xbox-demo 0x00267B00, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F05A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F05A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002F061D; /* je: equal / zero */

loc_002F05A8: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F061D; /* je: equal / zero */

loc_002F05AD: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F061D; /* je: equal / zero */

loc_002F05B4: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F061D; /* je: equal / zero */

loc_002F05BA: ;
    ebp = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F061D; /* je: equal / zero */

loc_002F05C1: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x002F05CEu); RECOMP_ABI_CALL(0x0003B870u, sub_0003B870); /* call 0x0003B870 */

loc_002F05CE: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F05DD; /* jne: not equal / not zero */

loc_002F05D7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002F05DD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F05F9; /* jne: not equal / not zero */

loc_002F05E2: ;
    SET_LO8(ebx, MEM8(esp + 0x10));
    eax = esi;
    PUSH32(esp, 0x002F05EDu); RECOMP_ABI_CALL(0x0003B8F0u, sub_0003B8F0); /* call 0x0003B8F0 */

loc_002F05ED: ;
    ecx = ZX8(LO8(eax));
    SET_LO8(ebx, MEM8(ecx + ebp + 0x44));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xF0 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002F05D7; /* ja: above (unsigned >) */

loc_002F05F9: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F05D7; /* je: equal / zero */

loc_002F0600: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F05D7; /* je: equal / zero */

loc_002F0607: ;
    eax = MEM32(eax);
    edx = MEM32(eax + 0xC);
    ecx = ZX8(LO8(ebx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F05D7; /* jbe: below or equal (unsigned <=) */

loc_002F0613: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 8);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002F061D: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0630
 * Original: 0x002F0630 - 0x002F067F (79 bytes, 25 insns)
 * Folder: ai (match: xbox-demo 0x00267B90, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0630: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0654u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0654: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x002F065Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F065B: ;
    MEM8(esp + 8) = LO8(eax);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0x002F066Bu); RECOMP_ABI_CALL(0x002F05A0u, sub_002F05A0); /* call 0x002F05A0 */

loc_002F066B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F0671u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002F0671: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0680
 * Original: 0x002F0680 - 0x002F0717 (151 bytes, 45 insns)
 * Folder: ai (match: xbox-demo 0x00267BE0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0680: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F06A3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F06A3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F06D5; /* je: equal / zero */

loc_002F06A7: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F06D5; /* je: equal / zero */

loc_002F06AC: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F06D5; /* je: equal / zero */

loc_002F06B3: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F06D5; /* je: equal / zero */

loc_002F06B9: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F06D5; /* je: equal / zero */

loc_002F06C0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    eax = esi;
    PUSH32(esp, 0x002F06CAu); RECOMP_ABI_CALL(0x0003B8F0u, sub_0003B8F0); /* call 0x0003B8F0 */

loc_002F06CA: ;
    edx = ZX8(LO8(eax));
    edx = ZX8(MEM8(edx + edi + 0x44));
    POP32(esp, ebx);
    goto loc_002F06D8;

loc_002F06D5: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002F06D8: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0xC);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0720
 * Original: 0x002F0720 - 0x002F0766 (70 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x00267C80, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0720: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0743u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0743: ;
    MEM8(esp + 4) = LO8(eax);
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x002F0753u); RECOMP_ABI_CALL(0x0003B870u, sub_0003B870); /* call 0x0003B870 */

loc_002F0753: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F0759u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002F0759: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0770
 * Original: 0x002F0770 - 0x002F07BF (79 bytes, 20 insns)
 * Folder: ai (between: 0x002F0720 and 0x002F07C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0770: ;
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D4C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(eax + 0x696528);
    PUSH32(esp, edx);
    MEM32(0x758D68) = ecx;
    MEM32(0x758D48) = eax;
    PUSH32(esp, 0x002F07B3u); RECOMP_ABI_CALL(0x00026C90u, sub_00026C90); /* call 0x00026C90 */

loc_002F07B3: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F07C0
 * Original: 0x002F07C0 - 0x002F0818 (88 bytes, 23 insns)
 * Folder: ai (match: xbox-demo 0x00267D20, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F07C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F07C0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F07E2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F07E2: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(0x758D48) = ecx;
    PUSH32(esp, 0x002F080Cu); RECOMP_ABI_CALL(0x00026E50u, sub_00026E50); /* call 0x00026E50 */

loc_002F080C: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0820
 * Original: 0x002F0820 - 0x002F0871 (81 bytes, 19 insns)
 * Folder: ai (match: xbox-demo 0x00267D80, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0820: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696528);
    PUSH32(esp, ecx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x002F0866u); RECOMP_ABI_CALL(0x00026D80u, sub_00026D80); /* call 0x00026D80 */

loc_002F0866: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0880
 * Original: 0x002F0880 - 0x002F089A (26 bytes, 11 insns)
 * Folder: ai (between: 0x002F0820 and 0x002F08A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0880: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F0892; /* jne: not equal / not zero */

loc_002F0891: ;
    esp += 4; return; /* ret */

loc_002F0892: ;
    eax = ZX8(MEM8(eax + 0xC));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F08A0
 * Original: 0x002F08A0 - 0x002F0913 (115 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x00267E00, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F08A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F08A0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    MEM32(0x758D68) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F08D6; /* je: equal / zero */

loc_002F08D0: ;
    SET_LO8(edx, MEM8(eax + 0xC));
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F08D6: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0920
 * Original: 0x002F0920 - 0x002F096C (76 bytes, 30 insns)
 * Folder: ai (match: xbox-demo 0x00267E80, library)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002F0920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0920: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(esp + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0969; /* je: equal / zero */

loc_002F0936: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0xC));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 4) = eax;
    SET_LO8(eax, ((_fa == 0)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F0969; /* jae: above or equal (unsigned >=) */

loc_002F094F: ;
    eax = ZX8(LO8(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0969; /* je: equal / zero */

loc_002F095C: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0969; /* je: equal / zero */

loc_002F0963: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_002F0969: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0970
 * Original: 0x002F0970 - 0x002F09D9 (105 bytes, 25 insns)
 * Folder: ai (match: xbox-demo 0x00267ED0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0970: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0992u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0992: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x002F099Au); RECOMP_ABI_CALL(0x002F0920u, sub_002F0920); /* call 0x002F0920 */

loc_002F099A: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F09E0
 * Original: 0x002F09E0 - 0x002F09F0 (16 bytes, 5 insns)
 * Folder: ai (between: 0x002F0970 and 0x002F0A30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F09E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F09E0: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00075FC0(); return; /* tail jmp 0x00075FC0 */

}

/**
 * sub_002F09F0
 * Original: 0x002F09F0 - 0x002F0A30 (64 bytes, 24 insns)
 * Folder: ai (between: 0x002F0970 and 0x002F0A30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F09F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F09F0: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x14);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F0A1Du); RECOMP_ABI_CALL(0x00075FC0u, sub_00075FC0); /* call 0x00075FC0 */

loc_002F0A1D: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0A30
 * Original: 0x002F0A30 - 0x002F0A6B (59 bytes, 17 insns)
 * Folder: ai (match: xbox-demo 0x00267F80, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002F0A30: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_002F0A4B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_002F0A3E: ;
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002F0A51; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002F0A4B: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_002F0A51: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    eax = MEM32(eax + 0x18);
    SET_LO8(edx, MEM8(esp + 8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002F0A6Au); RECOMP_ABI_CALL(0x00076160u, sub_00076160); /* call 0x00076160 */

loc_002F0A6A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F0A70
 * Original: 0x002F0A70 - 0x002F0B1C (172 bytes, 42 insns)
 * Folder: ai (match: xbox-demo 0x00267FC0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002F0A70: ;
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002F0ABF; /* jne: not equal / not zero */

loc_002F0AB5: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002F0AC7;

loc_002F0ABF: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002F0AC7: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002F0AD8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0AD8: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edx = eax;
    if ((_fca > _fcb)) goto loc_002F0AF5; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_002F0AE8: ;
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002F0AFB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002F0AF5: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_002F0AFB: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002F0B10u); RECOMP_ABI_CALL(0x00076160u, sub_00076160); /* call 0x00076160 */

loc_002F0B10: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0B20
 * Original: 0x002F0B20 - 0x002F0B99 (121 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x00268070, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0B20: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0B42u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0B42: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esi + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(edx + ecx + 0x14)); /* movss */
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0BA0
 * Original: 0x002F0BA0 - 0x002F0C12 (114 bytes, 38 insns)
 * Folder: ai (match: xbox-demo 0x002680F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0BA0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0BC4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0BC4: ;
    ebx = eax;
    PUSH32(esp, 0x002F0BCBu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0BCB: ;
    edi = eax;
    PUSH32(esp, 0x002F0BD2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0BD2: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x18);
    esi = MEM32(edx + 4);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0BEF; /* je: equal / zero */

loc_002F0BE9: ;
    MEM8(eax + 0xC) = MEM8(eax + 0xC) | 4;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_002F0BF3;

loc_002F0BEF: ;
    MEM8(eax + 0xC) = MEM8(eax + 0xC) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_002F0BF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002F0C06; /* jne: not equal / not zero */

loc_002F0BFA: ;
    MEM8(eax + 0xC) = MEM8(eax + 0xC) | 8;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002F0C06: ;
    MEM8(eax + 0xC) = MEM8(eax + 0xC) & 0xF7;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0C20
 * Original: 0x002F0C20 - 0x002F0C99 (121 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x00268170, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0C20: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0C42u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0C42: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esi + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax + 4);
    ecx = ZX8(MEM8(edx + ecx + 0xC));
    edx = MEM32(0x758D48);
    eax = edx + 0x696528;
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0CA0
 * Original: 0x002F0CA0 - 0x002F0D1E (126 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x002681F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0CA0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0CC2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0CC2: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esi + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax + 4);
    ecx = ZX8(MEM8(edx + ecx + 0xC));
    edx = MEM32(0x758D48);
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    eax = edx + 0x696528;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0D20
 * Original: 0x002F0D20 - 0x002F0D4B (43 bytes, 11 insns)
 * Folder: ai (between: 0x002F0CA0 and 0x002F0D50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0D20: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0D42u); RECOMP_ABI_CALL(0x0003BFD0u, sub_0003BFD0); /* call 0x0003BFD0 */

loc_002F0D42: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0D50
 * Original: 0x002F0D50 - 0x002F0D96 (70 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x002682A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0D50: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0D72u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0D72: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002F0D8E; /* je: equal / zero */

loc_002F0D86: ;
    MEM8(ecx + 0xC) = MEM8(ecx + 0xC) | 2;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002F0D8E: ;
    MEM8(ecx + 0xC) = MEM8(ecx + 0xC) & 0xFD;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0DA0
 * Original: 0x002F0DA0 - 0x002F0E0B (107 bytes, 24 insns)
 * Folder: ai (match: xbox-demo 0x002682F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0DA0: ;
    ecx = MEM32(0x758D70);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 4);
    ecx = ZX8(MEM8(ecx + 0xC));
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = edx + 0x696528;
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0E10
 * Original: 0x002F0E10 - 0x002F0E31 (33 bytes, 14 insns)
 * Folder: ai (between: 0x002F0DA0 and 0x002F0E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0E10: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0E2D; /* je: equal / zero */

loc_002F0E19: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0E2D; /* je: equal / zero */

loc_002F0E1F: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0E2D; /* je: equal / zero */

loc_002F0E26: ;
    edx = ecx;
    eax = ZX16(MEM16(edx + 0x60));
    esp += 4; return; /* ret */

loc_002F0E2D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0E40
 * Original: 0x002F0E40 - 0x002F0EB9 (121 bytes, 30 insns)
 * Folder: ai (match: xbox-demo 0x00268360, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0E40: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F0E79; /* je: equal / zero */

loc_002F0E66: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0E79; /* je: equal / zero */

loc_002F0E6C: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0E79; /* je: equal / zero */

loc_002F0E73: ;
    edx = ZX16(MEM16(ecx + 0x60));
    goto loc_002F0E7C;

loc_002F0E79: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002F0E7C: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0EC0
 * Original: 0x002F0EC0 - 0x002F0F39 (121 bytes, 30 insns)
 * Folder: ai (match: xbox-demo 0x00268410, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0EC0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F0EF9; /* je: equal / zero */

loc_002F0EE6: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0EF9; /* je: equal / zero */

loc_002F0EEC: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0EF9; /* je: equal / zero */

loc_002F0EF3: ;
    edx = ZX8(MEM8(ecx + 0x62));
    goto loc_002F0EFC;

loc_002F0EF9: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002F0EFC: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0F40
 * Original: 0x002F0F40 - 0x002F0F7C (60 bytes, 18 insns)
 * Folder: ai (match: xbox-demo 0x002684B0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0F40: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F0F62u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F0F62: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    PUSH32(esp, 0x002F0F73u); RECOMP_ABI_CALL(0x0006F360u, sub_0006F360); /* call 0x0006F360 */

loc_002F0F73: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0F80
 * Original: 0x002F0F80 - 0x002F0FB1 (49 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x002684F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0F80: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0FA5; /* je: equal / zero */

loc_002F0F89: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0FA5; /* je: equal / zero */

loc_002F0F8F: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0FA5; /* je: equal / zero */

loc_002F0F96: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;
    esp += 4; return; /* ret */

loc_002F0FA5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002F0FC0
 * Original: 0x002F0FC0 - 0x002F1042 (130 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00268530, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0FC0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F0FFB; /* je: equal / zero */

loc_002F0FE7: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0FFB; /* je: equal / zero */

loc_002F0FED: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0FFB; /* je: equal / zero */

loc_002F0FF4: ;
    esi = 1;
    goto loc_002F0FFD;

loc_002F0FFB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F0FFD: ;
    ecx = MEM32(0x758D48);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ecx + 0x696528;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1050
 * Original: 0x002F1050 - 0x002F1098 (72 bytes, 26 insns)
 * Folder: ai (between: 0x002F0FC0 and 0x002F10E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F1050: ;
    eax = MEM32(edx + 0x14);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1097; /* je: equal / zero */

loc_002F1059: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F1097; /* je: equal / zero */

loc_002F105F: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1097; /* je: equal / zero */

loc_002F1066: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx);
    MEM8(eax + 1) = MEM8(eax + 1) & 0xEF;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1097; /* je: equal / zero */

loc_002F1076: ;
    eax = ZX8(MEM8(eax + 0x2E));
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1097; /* je: equal / zero */

loc_002F1082: ;
    ecx = MEM32(0x7584F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1097; /* je: equal / zero */

loc_002F108C: ;
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x50), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F1097; /* jne: not equal / not zero */

loc_002F1092: ;
    g_seh_ebp = ebp; sub_0001E3C0(); return; /* tail jmp 0x0001E3C0 */

loc_002F1097: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F10A0
 * Original: 0x002F10A0 - 0x002F10D2 (50 bytes, 13 insns)
 * Folder: ai (between: 0x002F0FC0 and 0x002F10E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F10A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F10A0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F10C2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F10C2: ;
    edx = esi;
    PUSH32(esp, 0x002F10C9u); RECOMP_ABI_CALL(0x002F1050u, sub_002F1050); /* call 0x002F1050 */

loc_002F10C9: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F10E0
 * Original: 0x002F10E0 - 0x002F1171 (145 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x00268690, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F10E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F10E0: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F1130; /* je: equal / zero */

loc_002F1108: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F1130; /* je: equal / zero */

loc_002F110E: ;
    edx = MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1130; /* je: equal / zero */

loc_002F1115: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F112E; /* je: equal / zero */

loc_002F111C: ;
    SET_LO16(ecx, MEM16(edx + 0x60));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F112E; /* jae: above or equal (unsigned >=) */

loc_002F1125: ;
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(eax + ecx * 4 + 8);
    goto loc_002F1130;

loc_002F112E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1130: ;
    ecx = ZX8(MEM8(ecx + 0x33));
    edx = MEM32(0x758D48);
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F1180
 * Original: 0x002F1180 - 0x002F1211 (145 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x00268730, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1180: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F11D0; /* je: equal / zero */

loc_002F11A8: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F11D0; /* je: equal / zero */

loc_002F11AE: ;
    edx = MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F11D0; /* je: equal / zero */

loc_002F11B5: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F11CE; /* je: equal / zero */

loc_002F11BC: ;
    SET_LO16(ecx, MEM16(edx + 0x60));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F11CE; /* jae: above or equal (unsigned >=) */

loc_002F11C5: ;
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(eax + ecx * 4 + 8);
    goto loc_002F11D0;

loc_002F11CE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F11D0: ;
    ecx = ZX16(MEM16(ecx + 0x34));
    edx = MEM32(0x758D48);
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F1220
 * Original: 0x002F1220 - 0x002F12B7 (151 bytes, 43 insns)
 * Folder: ai (match: xbox-demo 0x002687D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1220: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F1242u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F1242: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1275; /* je: equal / zero */

loc_002F124D: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F1275; /* je: equal / zero */

loc_002F1253: ;
    esi = MEM32(ecx + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1275; /* je: equal / zero */

loc_002F125A: ;
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1273; /* je: equal / zero */

loc_002F1261: ;
    SET_LO16(edx, MEM16(esi + 0x60));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F1273; /* jae: above or equal (unsigned >=) */

loc_002F126A: ;
    edx = ZX16(LO16(edx));
    edx = MEM32(ecx + edx * 4 + 8);
    goto loc_002F1275;

loc_002F1273: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1275: ;
    edx = ZX8(MEM8(edx + 0x33));
    esi = MEM32(0x758D48);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x758D4C);
    ecx = esi + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F12C0
 * Original: 0x002F12C0 - 0x002F1357 (151 bytes, 43 insns)
 * Folder: ai (match: xbox-demo 0x00268870, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F12C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F12C0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F12E2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F12E2: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1315; /* je: equal / zero */

loc_002F12ED: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F1315; /* je: equal / zero */

loc_002F12F3: ;
    esi = MEM32(ecx + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1315; /* je: equal / zero */

loc_002F12FA: ;
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1313; /* je: equal / zero */

loc_002F1301: ;
    SET_LO16(edx, MEM16(esi + 0x60));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F1313; /* jae: above or equal (unsigned >=) */

loc_002F130A: ;
    edx = ZX16(LO16(edx));
    edx = MEM32(ecx + edx * 4 + 8);
    goto loc_002F1315;

loc_002F1313: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1315: ;
    edx = ZX16(MEM16(edx + 0x34));
    esi = MEM32(0x758D48);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x758D4C);
    ecx = esi + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1360
 * Original: 0x002F1360 - 0x002F13E0 (128 bytes, 34 insns)
 * Folder: ai (match: xbox-demo 0x00268910, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1360: ;
    eax = MEM32(0x758D70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F13A1; /* je: equal / zero */

loc_002F1381: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F13A1; /* je: equal / zero */

loc_002F1386: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F13A1; /* je: equal / zero */

loc_002F138D: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F13A1; /* je: equal / zero */

loc_002F1393: ;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F13A1; /* je: equal / zero */

loc_002F139A: ;
    edx = 1;
    goto loc_002F13A3;

loc_002F13A1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F13A3: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F13E0
 * Original: 0x002F13E0 - 0x002F1450 (112 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00268990, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F13E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F13E0: ;
    ecx = MEM32(0x758D70);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(0x758D64);
    ecx = ZX16(MEM16(ecx + 0x38));
    eax = MEM32(0x758D6C);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F1450
 * Original: 0x002F1450 - 0x002F14B2 (98 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x00268A00, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1450: ;
    ecx = MEM32(0x758D70);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(0x758D64);
    ecx = ZX8(MEM8(ecx + 0x3A));
    eax = MEM32(0x758D6C);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F14C0
 * Original: 0x002F14C0 - 0x002F14DC (28 bytes, 12 insns)
 * Folder: ai (between: 0x002F1450 and 0x002F14E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F14C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F14C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F14CCu); RECOMP_ABI_CALL(0x000276B0u, sub_000276B0); /* call 0x000276B0 */

loc_002F14CC: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + 0x3E) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F14E0
 * Original: 0x002F14E0 - 0x002F1524 (68 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00268A90, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F14E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F14E0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F1502u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F1502: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F150Du); RECOMP_ABI_CALL(0x000276B0u, sub_000276B0); /* call 0x000276B0 */

loc_002F150D: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    MEM16(eax + 0x3E) = 0;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1530
 * Original: 0x002F1530 - 0x002F156D (61 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00268AE0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1530: ;
    PUSH32(esp, ecx);
    SET_LO16(eax, MEM16(esp + 0xC));
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM16(esp + 0xC) = LO16(eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM8(esp + 0x12) = LO8(ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM8(esp + 0x1F) = LO8(edx);
    PUSH32(esp, 0x002F155Du); RECOMP_ABI_CALL(0x000276B0u, sub_000276B0); /* call 0x000276B0 */

loc_002F155D: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x3E) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1570
 * Original: 0x002F1570 - 0x002F15EE (126 bytes, 41 insns)
 * Folder: ai (match: xbox-demo 0x00268B20, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F1570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F159Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F159D: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F15A4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F15A4: ;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F15ADu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F15AD: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F15B4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F15B4: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM16(esp + 0x20) = LO16(edi);
    MEM8(esp + 0x22) = LO8(edx);
    MEM8(esp + 0x23) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F15D3u); RECOMP_ABI_CALL(0x000276B0u, sub_000276B0); /* call 0x000276B0 */

loc_002F15D3: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM16(eax + 0x3E) = 0;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F15F0
 * Original: 0x002F15F0 - 0x002F16B9 (201 bytes, 58 insns)
 * Folder: ai (match: xbox-demo 0x00268BA0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F15F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002F15F0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002F1620; /* jne: not equal / not zero */

loc_002F1616: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002F1628;

loc_002F1620: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002F1628: ;
    PUSH32(esp, esi);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002F1634u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F1634: ;
    esi = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F165Du); RECOMP_ABI_CALL(0x000276B0u, sub_000276B0); /* call 0x000276B0 */

loc_002F165D: ;
    eax = MEM32(0x7584B4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1684; /* je: equal / zero */

loc_002F1669: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x002F1672u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_002F1672: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    MEM8(edx + 3) = LO8(eax);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002F1684: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002F16AE; /* jnp: not parity */

loc_002F16A4: ;
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002F16AEu); RECOMP_ABI_CALL(0x00075EF0u, sub_00075EF0); /* call 0x00075EF0 */

loc_002F16AE: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F16C0
 * Original: 0x002F16C0 - 0x002F171E (94 bytes, 32 insns)
 * Folder: ai (match: xbox-demo 0x00268C70, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F16C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F16C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F16CDu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F16CD: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F16D4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F16D4: ;
    esi = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, 0);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM16(edx + 0x3E) = LO16(edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1706u); RECOMP_ABI_CALL(0x000276B0u, sub_000276B0); /* call 0x000276B0 */

loc_002F1706: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x3E) = LO16(edi);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1720
 * Original: 0x002F1720 - 0x002F178E (110 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x00268CD0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1720: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0x3A));
    eax = MEM32(eax + 0x2C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    eax = ZX8(MEM8(esi + eax + 0x33));
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = ecx;
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1790
 * Original: 0x002F1790 - 0x002F17FE (110 bytes, 27 insns)
 * Folder: ai (match: xbox-demo 0x00268D40, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1790: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0x3A));
    eax = MEM32(eax + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    eax = ZX16(MEM16(esi + eax));
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = ecx;
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1800
 * Original: 0x002F1800 - 0x002F1819 (25 bytes, 8 insns)
 * Folder: ai (between: 0x002F1790 and 0x002F1820)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1800: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    edx = ZX8(MEM8(eax + 0x3A));
    eax = MEM32(eax + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    eax = ZX8(MEM8(edx + eax + 0x33));
    eax = eax & MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F1820
 * Original: 0x002F1820 - 0x002F1895 (117 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x00268DB0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1820: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F1848u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F1848: ;
    ecx = ZX8(MEM8(esi + 0x3A));
    edx = MEM32(esi + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    ecx = ZX8(MEM8(ecx + edx + 0x33));
    edx = MEM32(0x758D48);
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F18A0
 * Original: 0x002F18A0 - 0x002F1915 (117 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x00268E30, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F18A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F18A0: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F18C8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F18C8: ;
    ecx = ZX8(MEM8(esi + 0x3A));
    edx = MEM32(esi + 0x2C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    ecx = ZX16(MEM16(ecx + edx));
    edx = MEM32(0x758D48);
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1920
 * Original: 0x002F1920 - 0x002F198A (106 bytes, 24 insns)
 * Folder: ai (match: xbox-demo 0x00268EB0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1920: ;
    ecx = MEM32(0x758D70);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 0x18);
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x758D70) = eax;
    eax = edx + 0x696528;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F1990
 * Original: 0x002F1990 - 0x002F19FB (107 bytes, 25 insns)
 * Folder: ai (match: xbox-demo 0x00268F20, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1990: ;
    ecx = MEM32(0x758D70);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0x34)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x34), 0xFFFF (16-bit) */
    ecx = MEM32(0x758D4C);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = edx + 0x696528;
    MEM32(ecx * 8 + 0x68642C) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1A00
 * Original: 0x002F1A00 - 0x002F1A62 (98 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x00268F90, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1A00: ;
    ecx = MEM32(0x758D70);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(0x758D64);
    ecx = ZX16(MEM16(ecx + 0x3C));
    eax = MEM32(0x758D6C);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F1A70
 * Original: 0x002F1A70 - 0x002F1AF8 (136 bytes, 55 insns)
 * Folder: ai (between: 0x002F1A00 and 0x002F1CD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F1A70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x14);
    ebp = MEM32(ecx);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(eax);
    ebx = MEM32(ebp + 0x30);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x002F1A8Cu); RECOMP_ABI_CALL(0x00074E10u, sub_00074E10); /* call 0x00074E10 */

loc_002F1A8C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002F1AF3; /* jg: greater (signed >) */

loc_002F1A94: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = eax * 4 + 8;
    ebx = esi;

loc_002F1AA1: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x30);
    _fa = (uint32_t)(MEM32(edi + edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F1AB6; /* jne: not equal / not zero */

loc_002F1AAE: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1AEC; /* je: equal / zero */

loc_002F1AB6: ;
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(eax + edi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1ACD; /* je: equal / zero */

loc_002F1AC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F1ACAu); RECOMP_ABI_CALL(0x00026230u, sub_00026230); /* call 0x00026230 */

loc_002F1ACA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002F1ACD: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(edi + ecx);
    edx = MEM32(ebp + 0x30);
    MEM32(edi + edx) = eax;
    ecx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(MEM32(edi + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1AEC; /* je: equal / zero */

loc_002F1AE2: ;
    edx = ecx;
    esi = MEM32(edx + edi);
    PUSH32(esp, 0x002F1AECu); RECOMP_ABI_CALL(0x0006DF50u, sub_0006DF50); /* call 0x0006DF50 */

loc_002F1AEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F1AA1; /* jne: not equal / not zero */

loc_002F1AF2: ;
    POP32(esp, edi);

loc_002F1AF3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1B00
 * Original: 0x002F1B00 - 0x002F1BDD (221 bytes, 75 insns)
 * Folder: ai (between: 0x002F1A00 and 0x002F1CD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F1B00: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    eax = MEM32(ebp + 0x30);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_002F1BD9; /* jbe: below or equal (unsigned <=) */

loc_002F1B22: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 8;
    /* nop */

loc_002F1B30: ;
    _fa = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1BBD; /* je: equal / zero */

loc_002F1B3A: ;
    ecx = MEM32(ebx + 0x30);
    eax = ecx + edi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1B50; /* je: equal / zero */

loc_002F1B45: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F1B4Du); RECOMP_ABI_CALL(0x00026230u, sub_00026230); /* call 0x00026230 */

loc_002F1B4D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002F1B50: ;
    edx = MEM32(ebp + 0x30);
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(edi + edx);
    MEM32(edi + eax) = ecx;
    edx = MEM32(ebx + 0x30);
    _fa = (uint32_t)(MEM32(edi + edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1B6F; /* je: equal / zero */

loc_002F1B65: ;
    eax = edx;
    esi = MEM32(eax + edi);
    PUSH32(esp, 0x002F1B6Fu); RECOMP_ABI_CALL(0x0006DF50u, sub_0006DF50); /* call 0x0006DF50 */

loc_002F1B6F: ;
    ecx = MEM32(ebx + 0x30);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1BBD; /* je: equal / zero */

loc_002F1B79: ;
    ecx = MEM32(edi + eax + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi + eax + -8;
    if (CMP_EQ(_fa, _fb)) goto loc_002F1B90; /* je: equal / zero */

loc_002F1B85: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F1B8Du); RECOMP_ABI_CALL(0x00026230u, sub_00026230); /* call 0x00026230 */

loc_002F1B8D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002F1B90: ;
    eax = MEM32(ebx + 0x30);
    edx = MEM32(ebp + 0x30);
    ecx = MEM32(eax + 4);
    edx = MEM32(edi + edx);
    MEM32(edi + ecx + -8) = edx;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(eax + 4);
    eax = MEM32(edi + ecx + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1BBD; /* je: equal / zero */

loc_002F1BAE: ;
    edx = MEM32(ebx + 0x30);
    eax = MEM32(edx + 4);
    esi = MEM32(eax + edi + -8);
    PUSH32(esp, 0x002F1BBDu); RECOMP_ABI_CALL(0x0006DF50u, sub_0006DF50); /* call 0x0006DF50 */

loc_002F1BBD: ;
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(esp + 0x10);
    edx = ZX16(MEM16(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_002F1B30; /* jl: less (signed <) */

loc_002F1BD7: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002F1BD9: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1BE0
 * Original: 0x002F1BE0 - 0x002F1C60 (128 bytes, 49 insns)
 * Folder: ai (between: 0x002F1A00 and 0x002F1CD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F1BE0: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    eax = MEM32(ebp + 0x30);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    if (CMP_BE(_fa, _fb)) goto loc_002F1C5C; /* jbe: below or equal (unsigned <=) */

loc_002F1BF7: ;
    PUSH32(esp, esi);
    esi = 8;
    /* nop */

loc_002F1C00: ;
    _fa = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1C4D; /* je: equal / zero */

loc_002F1C06: ;
    ecx = MEM32(edi + 0x30);
    eax = ecx + esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1C26; /* je: equal / zero */

loc_002F1C11: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F1C19u); RECOMP_ABI_CALL(0x00026230u, sub_00026230); /* call 0x00026230 */

loc_002F1C19: ;
    edx = MEM32(edi + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + edx) = 0;

loc_002F1C26: ;
    eax = MEM32(edi + 0x30);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1C4D; /* je: equal / zero */

loc_002F1C30: ;
    ecx = esi + eax + -8;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002F1C3Cu); RECOMP_ABI_CALL(0x00026230u, sub_00026230); /* call 0x00026230 */

loc_002F1C3C: ;
    edx = MEM32(edi + 0x30);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + eax + -8) = 0;

loc_002F1C4D: ;
    eax = MEM32(ebp + 0x30);
    ecx = ZX16(MEM16(eax));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1C00; /* jl: less (signed <) */

loc_002F1C5B: ;
    POP32(esp, esi);

loc_002F1C5C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1C60
 * Original: 0x002F1C60 - 0x002F1CD0 (112 bytes, 39 insns)
 * Folder: ai (between: 0x002F1A00 and 0x002F1CD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1C60: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F1C83u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F1C83: ;
    edi = eax;
    PUSH32(esp, 0x002F1C8Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F1C8A: ;
    edx = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    MEM32(0x758D48) = edx;
    edx = MEM32(edx + 0x696528);
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0x002F1CB8u); RECOMP_ABI_CALL(0x002F1A70u, sub_002F1A70); /* call 0x002F1A70 */

loc_002F1CB8: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1CD0
 * Original: 0x002F1CD0 - 0x002F1D35 (101 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x00269260, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1CD0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F1CF3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F1CF3: ;
    edi = eax;
    PUSH32(esp, 0x002F1CFAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F1CFA: ;
    edx = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    MEM32(0x758D48) = edx;
    edx = MEM32(edx + 0x696528);
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0x002F1D28u); RECOMP_ABI_CALL(0x002F1A70u, sub_002F1A70); /* call 0x002F1A70 */

loc_002F1D28: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1D40
 * Original: 0x002F1D40 - 0x002F1D8C (76 bytes, 16 insns)
 * Folder: ai (between: 0x002F1CD0 and 0x002F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1D40: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(0x758D48) = ecx;
    PUSH32(esp, 0x002F1D84u); RECOMP_ABI_CALL(0x002F1BE0u, sub_002F1BE0); /* call 0x002F1BE0 */

loc_002F1D84: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F1D90
 * Original: 0x002F1D90 - 0x002F1DDC (76 bytes, 16 insns)
 * Folder: ai (between: 0x002F1CD0 and 0x002F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1D90: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(0x758D48) = ecx;
    PUSH32(esp, 0x002F1DD4u); RECOMP_ABI_CALL(0x002F1B00u, sub_002F1B00); /* call 0x002F1B00 */

loc_002F1DD4: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F1DE0
 * Original: 0x002F1DE0 - 0x002F1E19 (57 bytes, 16 insns)
 * Folder: ai (between: 0x002F1CD0 and 0x002F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1DE0: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x14);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x30);
    PUSH32(esp, 0);
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F1E0Du); RECOMP_ABI_CALL(0x00074E80u, sub_00074E80); /* call 0x00074E80 */

loc_002F1E0D: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1E20
 * Original: 0x002F1E20 - 0x002F1EB2 (146 bytes, 54 insns)
 * Folder: ai (match: xbox-demo 0x002693B0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1E20: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = MEM32(edx + 0x30);
    eax = MEM32(eax + ecx * 4 + 8);
    ecx = ZX8(MEM8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_LE(_fas, _fbs)) goto loc_002F1EB1; /* jle: less or equal (signed <=) */

loc_002F1E3A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 4;
    ebx = ecx;

loc_002F1E42: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_002F1E88; /* je: equal / zero */

loc_002F1E55: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1E88; /* je: equal / zero */

loc_002F1E5B: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1E88; /* je: equal / zero */

loc_002F1E62: ;
    edx = ZX16(MEM16(ecx + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002F1E82; /* jle: less or equal (signed <=) */

loc_002F1E6C: ;
    esi = MEM32(ecx + 4);
    SET_LO16(ecx, MEM16(esp + 0x10));

loc_002F1E74: ;
    _fb = (uint32_t)(MEM16(esi + eax * 8)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + MEM16(esi + eax * 8));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1E74; /* jl: less (signed <) */

loc_002F1E7D: ;
    MEM16(esp + 0x10) = LO16(ecx);

loc_002F1E82: ;
    eax = MEM32(esp + 0x10);
    goto loc_002F1E8A;

loc_002F1E88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1E8A: ;
    edx = ZX8(MEM8(edi + 0x2C));
    eax = ZX16(LO16(eax));
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_002F1E42; /* jne: not equal / not zero */

loc_002F1EAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002F1EB1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F1EC0
 * Original: 0x002F1EC0 - 0x002F1F2D (109 bytes, 25 insns)
 * Folder: ai (between: 0x002F1E20 and 0x002F1F30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1EC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1EC0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F1EE2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F1EE2: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x002F1EEAu); RECOMP_ABI_CALL(0x002F1E20u, sub_002F1E20); /* call 0x002F1E20 */

loc_002F1EEA: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1F30
 * Original: 0x002F1F30 - 0x002F1F5F (47 bytes, 16 insns)
 * Folder: ai (match: xbox-demo 0x002694C0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1F30: ;
    edx = MEM32(ecx + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x30);
    ecx = MEM32(esp + 4);
    edx = MEM32(edx + ecx * 4 + 8);
    PUSH32(esp, esi);
    esi = edx + eax + 4;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002F1F51u); RECOMP_ABI_CALL(0x000E95B0u, sub_000E95B0); /* call 0x000E95B0 */

loc_002F1F51: ;
    eax = ZX16(LO16(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x20); /* divss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1F60
 * Original: 0x002F1F60 - 0x002F1FF3 (147 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x002694F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1F60: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F1F84u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F1F84: ;
    esi = eax;
    PUSH32(esp, 0x002F1F8Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F1F8B: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    edx = MEM32(edi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edx + eax * 4 + 8);
    ebx = MEM32(0x758D48);
    esi = eax + esi + 4;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x696528;
    PUSH32(esp, 0x002F1FB3u); RECOMP_ABI_CALL(0x000E95B0u, sub_000E95B0); /* call 0x000E95B0 */

loc_002F1FB3: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(0x758D4C);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x20); /* divss */
    MEM32(eax * 8 + 0x68642C) = edi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(edi) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2000
 * Original: 0x002F2000 - 0x002F206D (109 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x00269590, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2000: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F2022u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2022: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edx + eax * 4 + 8);
    eax = ZX8(MEM8(eax));
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2070
 * Original: 0x002F2070 - 0x002F20EB (123 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00269600, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002F2078u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2078: ;
    edi = eax;
    PUSH32(esp, 0x002F207Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F207F: ;
    esi = eax;
    PUSH32(esp, 0x002F2086u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2086: ;
    ebx = eax;
    PUSH32(esp, 0x002F208Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F208D: ;
    edx = MEM32(0x758D48);
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F20F0
 * Original: 0x002F20F0 - 0x002F2135 (69 bytes, 15 insns)
 * Folder: ai (match: xbox-demo 0x00269680, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F20F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F20F0: ;
    PUSH32(esp, 0x002F20F5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F20F5: ;
    edx = MEM32(0x758D48);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2140
 * Original: 0x002F2140 - 0x002F2185 (69 bytes, 15 insns)
 * Folder: ai (match: xbox-demo 0x002696D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2140: ;
    PUSH32(esp, 0x002F2145u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2145: ;
    edx = MEM32(0x758D48);
    ecx = ZX8(HI8(eax));
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2190
 * Original: 0x002F2190 - 0x002F21D8 (72 bytes, 16 insns)
 * Folder: ai (match: xbox-demo 0x00269720, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2190: ;
    PUSH32(esp, 0x002F2195u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2195: ;
    edx = MEM32(0x758D48);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F21E0
 * Original: 0x002F21E0 - 0x002F2293 (179 bytes, 47 insns)
 * Folder: ai (match: xbox-demo 0x00269840, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F21E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002F21E0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002F2210; /* jne: not equal / not zero */

loc_002F2206: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002F2218;

loc_002F2210: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002F2218: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002F2226u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2226: ;
    ebx = eax;
    PUSH32(esp, 0x002F222Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F222D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    ecx = eax;
    if ((_fca > _fcb)) goto loc_002F224A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_002F223D: ;
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002F224D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002F224A: ;
    xmm0 = xmm1; /* movaps */

loc_002F224D: ;
    edi = MEM32(0x758D48);
    eax = ebx;
    esi = edi + 0x696528;
    PUSH32(esp, 0x002F2260u); RECOMP_ABI_CALL(0x0030A5D0u, sub_0030A5D0); /* call 0x0030A5D0 */

loc_002F2260: ;
    MEM32(esi) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = esi;
    MEM16(eax * 8 + 0x686428) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F22A0
 * Original: 0x002F22A0 - 0x002F22E1 (65 bytes, 13 insns)
 * Folder: ai (between: 0x002F21E0 and 0x002F2330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F22A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F22A0: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 0xFF000000u;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F22F0
 * Original: 0x002F22F0 - 0x002F2329 (57 bytes, 16 insns)
 * Folder: ai (between: 0x002F21E0 and 0x002F2330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F22F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F22F0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    edi = 1;
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F231Fu); RECOMP_ABI_CALL(0x000E9500u, sub_000E9500); /* call 0x000E9500 */

loc_002F231F: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2330
 * Original: 0x002F2330 - 0x002F2361 (49 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00269990, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2330: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2360; /* je: equal / zero */

loc_002F233A: ;
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 4), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F2360; /* jbe: below or equal (unsigned <=) */

loc_002F2344: ;
    PUSH32(esp, edi);

loc_002F2345: ;
    edi = MEM32(edx + 4);
    ecx = ZX16(LO16(eax));
    ecx = ecx + ecx * 2;
    MEM8(edi + ecx * 4 + 0xA) = MEM8(edi + ecx * 4 + 0xA) & 0xFE;
    _fa = (uint32_t)(MEM8(edi + ecx * 4 + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = edi + ecx * 4;
    ecx = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 4) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F2345; /* jb: below (unsigned <) */

loc_002F235F: ;
    POP32(esp, edi);

loc_002F2360: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F2370
 * Original: 0x002F2370 - 0x002F239A (42 bytes, 9 insns)
 * Folder: ai (between: 0x002F2330 and 0x002F23E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2370: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F2392u); RECOMP_ABI_CALL(0x002F2330u, sub_002F2330); /* call 0x002F2330 */

loc_002F2392: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F23A0
 * Original: 0x002F23A0 - 0x002F23D9 (57 bytes, 16 insns)
 * Folder: ai (between: 0x002F2330 and 0x002F23E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F23A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F23A0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    edi = 1;
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F23CFu); RECOMP_ABI_CALL(0x000E9560u, sub_000E9560); /* call 0x000E9560 */

loc_002F23CF: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F23E0
 * Original: 0x002F23E0 - 0x002F240D (45 bytes, 18 insns)
 * Folder: ai (match: xbox-demo 0x00269A40, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F23E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F23E0: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 0x20);
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 4), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F240C; /* jbe: below or equal (unsigned <=) */

loc_002F23F0: ;
    PUSH32(esp, edi);

loc_002F23F1: ;
    edi = MEM32(edx + 4);
    ecx = ZX16(LO16(eax));
    ecx = ecx + ecx * 2;
    MEM8(edi + ecx * 4 + 0xA) = MEM8(edi + ecx * 4 + 0xA) & 0xFD;
    _fa = (uint32_t)(MEM8(edi + ecx * 4 + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = edi + ecx * 4;
    ecx = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 4) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F23F1; /* jb: below (unsigned <) */

loc_002F240B: ;
    POP32(esp, edi);

loc_002F240C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F2410
 * Original: 0x002F2410 - 0x002F243A (42 bytes, 9 insns)
 * Folder: ai (between: 0x002F23E0 and 0x002F24B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2410: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F2432u); RECOMP_ABI_CALL(0x002F23E0u, sub_002F23E0); /* call 0x002F23E0 */

loc_002F2432: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2440
 * Original: 0x002F2440 - 0x002F2476 (54 bytes, 23 insns)
 * Folder: ai (between: 0x002F23E0 and 0x002F24B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2440: ;
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2474; /* je: equal / zero */

loc_002F244B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2474; /* je: equal / zero */

loc_002F2451: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F2473; /* jbe: below or equal (unsigned <=) */

loc_002F245A: ;
    /* nop */

loc_002F2460: ;
    eax = ZX16(LO16(edi));
    ecx = esi;
    PUSH32(esp, 0x002F246Au); RECOMP_ABI_CALL(0x000E9480u, sub_000E9480); /* call 0x000E9480 */

loc_002F246A: ;
    edx = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(edx + 4) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F2460; /* jb: below (unsigned <) */

loc_002F2473: ;
    POP32(esp, edi);

loc_002F2474: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2480
 * Original: 0x002F2480 - 0x002F24AA (42 bytes, 9 insns)
 * Folder: ai (between: 0x002F23E0 and 0x002F24B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2480: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F24A2u); RECOMP_ABI_CALL(0x002F2440u, sub_002F2440); /* call 0x002F2440 */

loc_002F24A2: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F24B0
 * Original: 0x002F24B0 - 0x002F24E3 (51 bytes, 16 insns)
 * Folder: ai (match: xbox-demo 0x00269AE0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F24B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F24B0: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x20);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 4);
    ecx = eax + edx * 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F24E2; /* jne: not equal / not zero */

loc_002F24C9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax & 0xFFF9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEM16(ecx + 0xA) = LO16(eax);
    MEM16(ecx + 8) = 0;

loc_002F24E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F24F0
 * Original: 0x002F24F0 - 0x002F254D (93 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x00269B20, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F24F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F24F0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F2512u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2512: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0x20);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 4);
    ecx = eax + edx * 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_002F2545; /* jne: not equal / not zero */

loc_002F252C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax & 0xFFF9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEM16(ecx + 0xA) = LO16(eax);
    MEM16(ecx + 8) = 0;

loc_002F2545: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2550
 * Original: 0x002F2550 - 0x002F258F (63 bytes, 17 insns)
 * Folder: ai (match: xbox-demo 0x00269B80, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2550: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F2572u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2572: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0x20);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 4);
    MEM8(eax + edx * 4 + 0xA) = MEM8(eax + edx * 4 + 0xA) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + edx * 4 + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = eax + edx * 4;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2590
 * Original: 0x002F2590 - 0x002F25DB (75 bytes, 22 insns)
 * Folder: ai (match: xbox-demo 0x00269BC0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2590: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F25B2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F25B2: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0x20);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 4);
    ecx = eax + edx * 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_002F25D3; /* jne: not equal / not zero */

loc_002F25CC: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0xA) = LO16(eax);

loc_002F25D3: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F25E0
 * Original: 0x002F25E0 - 0x002F261F (63 bytes, 17 insns)
 * Folder: ai (match: xbox-demo 0x00269C10, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F25E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F25E0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F2602u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2602: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0x20);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 4);
    MEM8(eax + edx * 4 + 0xA) = MEM8(eax + edx * 4 + 0xA) & 0xFD;
    _fa = (uint32_t)(MEM8(eax + edx * 4 + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = eax + edx * 4;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2620
 * Original: 0x002F2620 - 0x002F2656 (54 bytes, 14 insns)
 * Folder: ai (match: xbox-demo 0x00269C50, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2620: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F2642u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2642: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x002F264Du); RECOMP_ABI_CALL(0x000E9480u, sub_000E9480); /* call 0x000E9480 */

loc_002F264D: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2660
 * Original: 0x002F2660 - 0x002F26D4 (116 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x00269C90, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2660: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F2682u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2682: ;
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx + 4);
    eax = ZX16(MEM16(eax + edx * 4 + 0xA));
    edx = MEM32(0x758D48);
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F26E0
 * Original: 0x002F26E0 - 0x002F2727 (71 bytes, 36 insns)
 * Folder: ai (match: xbox-demo 0x00269D10, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F26E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F26E0: ;
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x20);
    ecx = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ecx + 4));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_002F2722; /* jle: less or equal (signed <=) */

loc_002F26FB: ;
    ecx = MEM32(ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002F2702: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2710; /* je: equal / zero */

loc_002F2707: ;
    ebp = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM8(esi + ebp + 0xA)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + ebp + 0xA), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F2720; /* jne: not equal / not zero */

loc_002F2710: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F2702; /* jl: less (signed <) */

loc_002F271B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002F2720: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F2722: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2730
 * Original: 0x002F2730 - 0x002F2791 (97 bytes, 23 insns)
 * Folder: ai (between: 0x002F26E0 and 0x002F2840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2730: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    esi = edi + 0x696528;
    PUSH32(esp, 0x002F2760u); RECOMP_ABI_CALL(0x002F26E0u, sub_002F26E0); /* call 0x002F26E0 */

loc_002F2760: ;
    MEM32(esi) = eax;
    eax = MEM32(0x758D4C);
    MEM32(eax * 8 + 0x68642C) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F27A0
 * Original: 0x002F27A0 - 0x002F27F1 (81 bytes, 28 insns)
 * Folder: ai (between: 0x002F26E0 and 0x002F2840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F27A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F27A0: ;
    edx = MEM32(eax + 0x18);
    edx = MEM32(edx + 0x20);
    eax = MEM32(edx);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx + ecx * 4;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, MEM16(eax + esi + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F27EF; /* je: equal / zero */

loc_002F27BB: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx + ecx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(edi + ecx + 8) = LO16(eax);
    edi = MEM32(edx);
    edi = MEM32(edi);
    esi = MEM32(edi + esi + 4);
    eax = ZX16(MEM16(esi + eax * 8));
    edx = MEM32(edx + 4);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x42936C); /* mulss */
    MEMF(ecx + edx) = xmm0.f[0]; /* movss */
    POP32(esp, edi);

loc_002F27EF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2800
 * Original: 0x002F2800 - 0x002F2834 (52 bytes, 14 insns)
 * Folder: ai (between: 0x002F26E0 and 0x002F2840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2800: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F2822u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2822: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x002F282Bu); RECOMP_ABI_CALL(0x002F27A0u, sub_002F27A0); /* call 0x002F27A0 */

loc_002F282B: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2840
 * Original: 0x002F2840 - 0x002F28B7 (119 bytes, 27 insns)
 * Folder: ai (match: xbox-demo 0x00269E50, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2840: ;
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D70);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002F289C; /* jne: not equal / not zero */

loc_002F2881: ;
    edx = MEM32(edx + 0x18);
    xmm4.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x002F2894u); RECOMP_ABI_CALL(0x000E9820u, sub_000E9820); /* call 0x000E9820 */

loc_002F2894: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002F289C: ;
    edx = MEM32(edx + 0x18);
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x002F28AFu); RECOMP_ABI_CALL(0x000E9820u, sub_000E9820); /* call 0x000E9820 */

loc_002F28AF: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F28C0
 * Original: 0x002F28C0 - 0x002F292F (111 bytes, 35 insns)
 * Folder: ai (between: 0x002F2840 and 0x002F29A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F28C0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F28C0: ;
    eax = MEM32(0x75852C);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002F2903; /* jge: greater or equal (signed >=) */

loc_002F28CF: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002F2903; /* je: equal / zero */

loc_002F28D7: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2903; /* je: equal / zero */

loc_002F28E1: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002F2903; /* je: equal / zero */

loc_002F28EA: ;
    esi = eax;
    PUSH32(esp, 0x002F28F1u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_002F28F1: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_002F2903; /* je: equal / zero */

loc_002F28F9: ;
    esi = MEM32(edi + 0x38);
    PUSH32(esp, 0x002F2901u); RECOMP_ABI_CALL(0x000A1C90u, sub_000A1C90); /* call 0x000A1C90 */

loc_002F2901: ;
    goto loc_002F290B;

loc_002F2903: ;
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */

loc_002F290B: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002F292E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x429350)) */

loc_002F291C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 0x20);
    xmm4 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_000E9820(); return; /* tail jmp 0x000E9820 */

loc_002F292E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F2930
 * Original: 0x002F2930 - 0x002F299E (110 bytes, 26 insns)
 * Folder: ai (between: 0x002F2840 and 0x002F29A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2930: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D70);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002F297C; /* jne: not equal / not zero */

loc_002F2972: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002F2984;

loc_002F297C: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002F2984: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002F2993u); RECOMP_ABI_CALL(0x002F28C0u, sub_002F28C0); /* call 0x002F28C0 */

loc_002F2993: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F29A0
 * Original: 0x002F29A0 - 0x002F2A1D (125 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x00269F00, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F29A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F29A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x18);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    esi = esp + 8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F29D3u); RECOMP_ABI_CALL(0x000E9600u, sub_000E9600); /* call 0x000E9600 */

loc_002F29D3: ;
    ecx = MEM32(0x758D48);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2A20
 * Original: 0x002F2A20 - 0x002F2A9D (125 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x00269F80, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2A20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x18);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F2A53u); RECOMP_ABI_CALL(0x000E9600u, sub_000E9600); /* call 0x000E9600 */

loc_002F2A53: ;
    ecx = MEM32(0x758D48);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2AA0
 * Original: 0x002F2AA0 - 0x002F2B0E (110 bytes, 46 insns)
 * Folder: ai (match: xbox-demo 0x0026BB00, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2AA0: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002F2ACC; /* je: equal / zero */

loc_002F2AA8: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2ACC; /* je: equal / zero */

loc_002F2AAF: ;
    /* nop */

loc_002F2AB0: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2AC5; /* jne: not equal / not zero */

loc_002F2AB7: ;
    esi = MEM32(eax + 4);
    esi = esi & 0xFDFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;

loc_002F2AC5: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2AB0; /* jne: not equal / not zero */

loc_002F2ACC: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2B0C; /* je: equal / zero */

loc_002F2AD3: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2B0C; /* je: equal / zero */

loc_002F2ADA: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2B0C; /* je: equal / zero */

loc_002F2AE1: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2B0C; /* je: equal / zero */

loc_002F2AE8: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2B0C; /* je: equal / zero */

loc_002F2AEF: ;
    /* nop */

loc_002F2AF0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2B05; /* jne: not equal / not zero */

loc_002F2AF7: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFDFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;

loc_002F2B05: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2AF0; /* jne: not equal / not zero */

loc_002F2B0C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2B10
 * Original: 0x002F2B10 - 0x002F2B53 (67 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x0026BB70, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2B10: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002F2B34u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2B34: ;
    edi = eax;
    PUSH32(esp, 0x002F2B3Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F2B3B: ;
    edx = edi;
    ecx = esi;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x002F2B48u); RECOMP_ABI_CALL(0x002F2AA0u, sub_002F2AA0); /* call 0x002F2AA0 */

loc_002F2B48: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2B60
 * Original: 0x002F2B60 - 0x002F2BB4 (84 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x0026BBC0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F2B60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2BB1; /* je: equal / zero */

loc_002F2B6D: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2BB1; /* je: equal / zero */

loc_002F2B74: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2BB1; /* je: equal / zero */

loc_002F2B7B: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2BB1; /* je: equal / zero */

loc_002F2B82: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2BB1; /* je: equal / zero */

loc_002F2B89: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = eax;
    /* nop */

loc_002F2B90: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2BA8; /* jne: not equal / not zero */

loc_002F2B98: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002F2BA5u); RECOMP_ABI_CALL(0x0004E200u, sub_0004E200); /* call 0x0004E200 */

loc_002F2BA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002F2BA8: ;
    ebp = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2B90; /* jne: not equal / not zero */

loc_002F2BAF: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002F2BB1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2BC0
 * Original: 0x002F2BC0 - 0x002F2C44 (132 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x0026BC20, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2BC0: ;
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2BE7; /* jne: not equal / not zero */

loc_002F2BDD: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002F2BEF;

loc_002F2BE7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002F2BEF: ;
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 0x69652C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696528);
    PUSH32(esp, eax);
    eax = esp + 8;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x002F2C39u); RECOMP_ABI_CALL(0x002F2B60u, sub_002F2B60); /* call 0x002F2B60 */

loc_002F2C39: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2C50
 * Original: 0x002F2C50 - 0x002F2C9C (76 bytes, 36 insns)
 * Folder: ai (match: xbox-demo 0x0026BCB0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F2C50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2C99; /* je: equal / zero */

loc_002F2C5D: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2C99; /* je: equal / zero */

loc_002F2C64: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2C99; /* je: equal / zero */

loc_002F2C6B: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2C99; /* je: equal / zero */

loc_002F2C72: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2C99; /* je: equal / zero */

loc_002F2C79: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = eax;
    /* nop */

loc_002F2C80: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2C90; /* jne: not equal / not zero */

loc_002F2C88: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x002F2C90u); RECOMP_ABI_CALL(0x0004E180u, sub_0004E180); /* call 0x0004E180 */

loc_002F2C90: ;
    ebp = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2C80; /* jne: not equal / not zero */

loc_002F2C97: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002F2C99: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2CA0
 * Original: 0x002F2CA0 - 0x002F2CF8 (88 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x0026BD00, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2CA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x758D48);
    eax = MEM32(ecx + 0x696508);
    edx = MEM32(ecx + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = eax;
    eax = MEM32(ecx + 0x696530);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696528);
    MEM32(0x758D4C) = eax;
    eax = esp;
    MEM32(esp + 4) = edx;
    PUSH32(esp, 0x002F2CEDu); RECOMP_ABI_CALL(0x002F2C50u, sub_002F2C50); /* call 0x002F2C50 */

loc_002F2CED: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2D00
 * Original: 0x002F2D00 - 0x002F2D4F (79 bytes, 38 insns)
 * Folder: ai (match: xbox-demo 0x0026BD60, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F2D00: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2D4D; /* je: equal / zero */

loc_002F2D0A: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2D4D; /* je: equal / zero */

loc_002F2D11: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2D4D; /* je: equal / zero */

loc_002F2D18: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2D4D; /* je: equal / zero */

loc_002F2D1F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2D4D; /* je: equal / zero */

loc_002F2D26: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebx = eax;
    /* nop */

loc_002F2D30: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2D43; /* jne: not equal / not zero */

loc_002F2D37: ;
    esi = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002F2D40u); RECOMP_ABI_CALL(0x0004E140u, sub_0004E140); /* call 0x0004E140 */

loc_002F2D40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002F2D43: ;
    ebx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2D30; /* jne: not equal / not zero */

loc_002F2D4A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002F2D4D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2D50
 * Original: 0x002F2D50 - 0x002F2DAB (91 bytes, 23 insns)
 * Folder: ai (between: 0x002F2D00 and 0x002F2DB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2D50: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2D75; /* jne: not equal / not zero */

loc_002F2D6B: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002F2D7D;

loc_002F2D75: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002F2D7D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(esp);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002F2DA0u); RECOMP_ABI_CALL(0x002F2D00u, sub_002F2D00); /* call 0x002F2D00 */

loc_002F2DA0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2DB0
 * Original: 0x002F2DB0 - 0x002F2DEE (62 bytes, 27 insns)
 * Folder: ai (match: xbox-demo 0x0026BE10, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2DB0: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2DED; /* je: equal / zero */

loc_002F2DB7: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2DED; /* je: equal / zero */

loc_002F2DBE: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2DED; /* je: equal / zero */

loc_002F2DC5: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2DED; /* je: equal / zero */

loc_002F2DCC: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2DED; /* je: equal / zero */

loc_002F2DD3: ;
    PUSH32(esp, esi);
    esi = eax;

loc_002F2DD6: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2DE5; /* jne: not equal / not zero */

loc_002F2DDD: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0x002F2DE5u); RECOMP_ABI_CALL(0x0004E2A0u, sub_0004E2A0); /* call 0x0004E2A0 */

loc_002F2DE5: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2DD6; /* jne: not equal / not zero */

loc_002F2DEC: ;
    POP32(esp, esi);

loc_002F2DED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F2DF0
 * Original: 0x002F2DF0 - 0x002F2E1D (45 bytes, 11 insns)
 * Folder: ai (between: 0x002F2DB0 and 0x002F30C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2DF0: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, 0x002F2E15u); RECOMP_ABI_CALL(0x002F2DB0u, sub_002F2DB0); /* call 0x002F2DB0 */

loc_002F2E15: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2E20
 * Original: 0x002F2E20 - 0x002F2E8E (110 bytes, 37 insns)
 * Folder: ai (between: 0x002F2DB0 and 0x002F30C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2E20: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002F2E60; /* je: equal / zero */

loc_002F2E44: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2E60; /* je: equal / zero */

loc_002F2E4B: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2E60; /* je: equal / zero */

loc_002F2E52: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2E73; /* je: equal / zero */

loc_002F2E59: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2E52; /* jne: not equal / not zero */

loc_002F2E60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F2E68u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002F2E68: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002F2E73: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2E60; /* je: equal / zero */

loc_002F2E7A: ;
    eax = MEM32(eax + 0x74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F2E83u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002F2E83: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2E90
 * Original: 0x002F2E90 - 0x002F2EF1 (97 bytes, 23 insns)
 * Folder: ai (between: 0x002F2DB0 and 0x002F30C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2E90(void)
{
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

loc_002F2E90: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    esi = edi + 0x696528;
    PUSH32(esp, 0x002F2EC0u); RECOMP_ABI_CALL(0x00059630u, sub_00059630); /* call 0x00059630 */

loc_002F2EC0: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x758D4C);
    MEM32(eax * 8 + 0x68642C) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F2F00
 * Original: 0x002F2F00 - 0x002F2F72 (114 bytes, 25 insns)
 * Folder: ai (between: 0x002F2DB0 and 0x002F30C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2F00: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    _fb = (uint32_t)(0xFFFFFFC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    ecx = esp + 0xC;
    edx = esp;
    PUSH32(esp, 0x002F2F67u); RECOMP_ABI_CALL(0x000596F0u, sub_000596F0); /* call 0x000596F0 */

loc_002F2F67: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2F80
 * Original: 0x002F2F80 - 0x002F2FAF (47 bytes, 21 insns)
 * Folder: ai (between: 0x002F2DB0 and 0x002F30C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2F80: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F2FAE; /* je: equal / zero */

loc_002F2F87: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2FAE; /* je: equal / zero */

loc_002F2F8E: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2FAD; /* je: equal / zero */

loc_002F2F96: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x12 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2FA6; /* jne: not equal / not zero */

loc_002F2F9D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F2FA3u); RECOMP_ABI_CALL(0x000573C0u, sub_000573C0); /* call 0x000573C0 */

loc_002F2FA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002F2FA6: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2F96; /* jne: not equal / not zero */

loc_002F2FAD: ;
    POP32(esp, esi);

loc_002F2FAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F2FB0
 * Original: 0x002F2FB0 - 0x002F2FDA (42 bytes, 9 insns)
 * Folder: ai (between: 0x002F2DB0 and 0x002F30C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2FB0: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002F2FD2u); RECOMP_ABI_CALL(0x002F2F80u, sub_002F2F80); /* call 0x002F2F80 */

loc_002F2FD2: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2FE0
 * Original: 0x002F2FE0 - 0x002F305E (126 bytes, 46 insns)
 * Folder: ai (between: 0x002F2DB0 and 0x002F30C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2FE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3014; /* je: equal / zero */

loc_002F2FE4: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3014; /* je: equal / zero */

loc_002F2FEB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3014; /* je: equal / zero */

loc_002F2FF2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3014; /* je: equal / zero */

loc_002F2FF8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3014; /* je: equal / zero */

loc_002F2FFF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3014; /* je: equal / zero */

loc_002F3006: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3018; /* je: equal / zero */

loc_002F300D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F3006; /* jne: not equal / not zero */

loc_002F3014: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp += 4; return; /* ret */

loc_002F3018: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3014; /* je: equal / zero */

loc_002F301F: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x470D74)); /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_002F304A; /* je: equal / zero */

loc_002F302F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F304F; /* jne: not equal / not zero */

loc_002F3034: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x64); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    esp += 4; return; /* ret */

loc_002F304A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F3034; /* jne: not equal / not zero */

loc_002F304F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x64); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    esp += 4; return; /* ret */

}

/**
 * sub_002F3060
 * Original: 0x002F3060 - 0x002F30B2 (82 bytes, 21 insns)
 * Folder: ai (between: 0x002F2DB0 and 0x002F30C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3060: ;
    edx = MEM32(0x758D4C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x696528);
    esi = edi + 0x696528;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x002F3083u); RECOMP_ABI_CALL(0x002F2FE0u, sub_002F2FE0); /* call 0x002F2FE0 */

loc_002F3083: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx * 8 + 0x68642C) = esi;
    MEM32(0x758D48) = edi;
    MEM16(edx * 8 + 0x686428) = 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEM32(0x758D4C) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F30C0
 * Original: 0x002F30C0 - 0x002F3101 (65 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x0026C0C0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F30C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F30C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F30F4; /* je: equal / zero */

loc_002F30C4: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F30F4; /* je: equal / zero */

loc_002F30CB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F30F4; /* je: equal / zero */

loc_002F30D2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F30F4; /* je: equal / zero */

loc_002F30D8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F30F4; /* je: equal / zero */

loc_002F30DF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F30F4; /* je: equal / zero */

loc_002F30E6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F30F5; /* je: equal / zero */

loc_002F30ED: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F30E6; /* jne: not equal / not zero */

loc_002F30F4: ;
    esp += 4; return; /* ret */

loc_002F30F5: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F30F4; /* je: equal / zero */

loc_002F30FC: ;
    g_seh_ebp = ebp; sub_0005CB30(); return; /* tail jmp 0x0005CB30 */

}

/**
 * sub_002F3110
 * Original: 0x002F3110 - 0x002F316B (91 bytes, 23 insns)
 * Folder: ai (between: 0x002F30C0 and 0x002F3210)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3110: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F3135; /* jne: not equal / not zero */

loc_002F312B: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002F313D;

loc_002F3135: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002F313D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(esp);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002F3160u); RECOMP_ABI_CALL(0x002F30C0u, sub_002F30C0); /* call 0x002F30C0 */

loc_002F3160: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F3170
 * Original: 0x002F3170 - 0x002F31B2 (66 bytes, 30 insns)
 * Folder: ai (between: 0x002F30C0 and 0x002F3210)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3170: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F31A4; /* je: equal / zero */

loc_002F3174: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F31A4; /* je: equal / zero */

loc_002F317B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F31A4; /* je: equal / zero */

loc_002F3182: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F31A4; /* je: equal / zero */

loc_002F3188: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F31A4; /* je: equal / zero */

loc_002F318F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F31A4; /* je: equal / zero */

loc_002F3196: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F31A7; /* je: equal / zero */

loc_002F319D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F3196; /* jne: not equal / not zero */

loc_002F31A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002F31A7: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F31A4; /* je: equal / zero */

loc_002F31AE: ;
    eax = MEM32(eax + 0x68);
    esp += 4; return; /* ret */

}

/**
 * sub_002F31C0
 * Original: 0x002F31C0 - 0x002F3210 (80 bytes, 21 insns)
 * Folder: ai (between: 0x002F30C0 and 0x002F3210)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F31C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F31C0: ;
    edx = MEM32(0x758D4C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x696528);
    esi = edi + 0x696528;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x002F31E3u); RECOMP_ABI_CALL(0x002F3170u, sub_002F3170); /* call 0x002F3170 */

loc_002F31E3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(edx * 8 + 0x68642C) = esi;
    MEM32(0x758D48) = edi;
    MEM16(edx * 8 + 0x686428) = 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F3210
 * Original: 0x002F3210 - 0x002F3265 (85 bytes, 36 insns)
 * Folder: ai (match: xbox-demo 0x0026C210, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3210: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3264; /* je: equal / zero */

loc_002F3214: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3264; /* je: equal / zero */

loc_002F321B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3264; /* je: equal / zero */

loc_002F3222: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3264; /* je: equal / zero */

loc_002F3228: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3264; /* je: equal / zero */

loc_002F322F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3264; /* je: equal / zero */

loc_002F3236: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3245; /* je: equal / zero */

loc_002F323D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F3236; /* jne: not equal / not zero */

loc_002F3244: ;
    esp += 4; return; /* ret */

loc_002F3245: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3264; /* je: equal / zero */

loc_002F324C: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002F3261u); RECOMP_ABI_CALL(0x0005C610u, sub_0005C610); /* call 0x0005C610 */

loc_002F3261: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002F3264: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F3270
 * Original: 0x002F3270 - 0x002F3324 (180 bytes, 43 insns)
 * Folder: ai (match: xbox-demo 0x0026C270, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3270: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F329B; /* jne: not equal / not zero */

loc_002F3291: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002F32A3;

loc_002F329B: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002F32A3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), LO16(edx) (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_002F32C0; /* jne: not equal / not zero */

loc_002F32B6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002F32C8;

loc_002F32C0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002F32C8: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x69652C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002F3319u); RECOMP_ABI_CALL(0x002F3210u, sub_002F3210); /* call 0x002F3210 */

loc_002F3319: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F3330
 * Original: 0x002F3330 - 0x002F337F (79 bytes, 36 insns)
 * Folder: ai (between: 0x002F3270 and 0x002F3380)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3330: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F337E; /* je: equal / zero */

loc_002F3334: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F337E; /* je: equal / zero */

loc_002F333B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F337E; /* je: equal / zero */

loc_002F3342: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F337E; /* je: equal / zero */

loc_002F3348: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F337E; /* je: equal / zero */

loc_002F334F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F337E; /* je: equal / zero */

loc_002F3356: ;
    PUSH32(esp, ebx);

loc_002F3357: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3367; /* je: equal / zero */

loc_002F335E: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F3357; /* jne: not equal / not zero */

loc_002F3365: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002F3367: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F337D; /* je: equal / zero */

loc_002F336E: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ebx = eax;
    PUSH32(esp, 0x002F337Au); RECOMP_ABI_CALL(0x0005BE50u, sub_0005BE50); /* call 0x0005BE50 */

loc_002F337A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002F337D: ;
    POP32(esp, ebx);

loc_002F337E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F3380
 * Original: 0x002F3380 - 0x002F33D9 (89 bytes, 22 insns)
 * Folder: ai (match: xbox-demo 0x0026C380, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3380: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    edx = MEM32(eax + 0x69650C);
    ecx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 0x696530);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = edx;
    edx = esp;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0x696528);
    PUSH32(esp, edx);
    MEM32(0x758D48) = eax;
    PUSH32(esp, 0x002F33CEu); RECOMP_ABI_CALL(0x002F3330u, sub_002F3330); /* call 0x002F3330 */

loc_002F33CE: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F33E0
 * Original: 0x002F33E0 - 0x002F3423 (67 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x0026C3E0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F33E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F33E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3414; /* je: equal / zero */

loc_002F33E4: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3414; /* je: equal / zero */

loc_002F33EB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3414; /* je: equal / zero */

loc_002F33F2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3414; /* je: equal / zero */

loc_002F33F8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3414; /* je: equal / zero */

loc_002F33FF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3414; /* je: equal / zero */

loc_002F3406: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3415; /* je: equal / zero */

loc_002F340D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F3406; /* jne: not equal / not zero */

loc_002F3414: ;
    esp += 4; return; /* ret */

loc_002F3415: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3414; /* je: equal / zero */

loc_002F341C: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0005C5D0(); return; /* tail jmp 0x0005C5D0 */

}

/**
 * sub_002F3430
 * Original: 0x002F3430 - 0x002F345D (45 bytes, 11 insns)
 * Folder: ai (between: 0x002F33E0 and 0x002F3460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3430: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, 0x002F3455u); RECOMP_ABI_CALL(0x002F33E0u, sub_002F33E0); /* call 0x002F33E0 */

loc_002F3455: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F3460
 * Original: 0x002F3460 - 0x002F34A5 (69 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x0026C460, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3460: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3494; /* je: equal / zero */

loc_002F3464: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3494; /* je: equal / zero */

loc_002F346B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3494; /* je: equal / zero */

loc_002F3472: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3494; /* je: equal / zero */

loc_002F3478: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3494; /* je: equal / zero */

loc_002F347F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3494; /* je: equal / zero */

loc_002F3486: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3497; /* je: equal / zero */

loc_002F348D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F3486; /* jne: not equal / not zero */

loc_002F3494: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002F3497: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3494; /* je: equal / zero */

loc_002F349E: ;
    eax = MEM32(eax + 4);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}
