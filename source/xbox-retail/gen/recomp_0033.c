/**
 * PoP SoT xbox-retail - Recompiled code chunk 33
 * Functions: 250 (0x002E7465 - 0x002F01C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002E7465
 * Original: 0x002E7465 - 0x002E74A8 (67 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7465(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7465: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002E7460(); return; } /* jl: less (signed <) */

loc_002E746A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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
    eax = MEM32(esp + 0x44);
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
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
 * sub_002E74B0
 * Original: 0x002E74B0 - 0x002E7548 (152 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E74B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E74B0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E74BBu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E74BB: ;
    ebx = eax;
    PUSH32(esp, 0x002E74C2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E74C2: ;
    edi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E74EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E74E7u); } /* indirect call */
    }

loc_002E74EE: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E750A; /* jle: less or equal (signed <=) */

loc_002E7500: ;
    _fa = (uint32_t)(MEM32(esi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E750D; /* je: equal / zero */

loc_002E7505: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7500; /* jl: less (signed <) */

loc_002E750A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002E750D: ;
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
    eax = MEM32(esp + 0x44);
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
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
 * sub_002E7550
 * Original: 0x002E7550 - 0x002E75F5 (165 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7550: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E755Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E755C: ;
    ebx = eax;
    PUSH32(esp, 0x002E7563u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7563: ;
    ebp = eax;
    PUSH32(esp, 0x002E756Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E756A: ;
    edi = eax;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7596u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E758Fu); } /* indirect call */
    }

loc_002E7596: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E75B6; /* jle: less or equal (signed <=) */

loc_002E75A8: ;
    ecx = MEM32(esi + eax * 4);
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E75B9; /* je: equal / zero */

loc_002E75B1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E75A8; /* jl: less (signed <) */

loc_002E75B6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002E75B9: ;
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
    eax = MEM32(esp + 0x44);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_002E7600
 * Original: 0x002E7600 - 0x002E7663 (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7600: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7608u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7608: ;
    edi = eax;
    PUSH32(esp, 0x002E760Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E760F: ;
    esi = eax;
    PUSH32(esp, 0x002E7616u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7616: ;
    ebx = MEM32(0x758D48);
    ecx = esi + edi;
    edi = eax;
    edi = edi >> LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ebx;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi;
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(0x758D4C);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = edi;
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E7670
 * Original: 0x002E7670 - 0x002E7771 (257 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7670: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E767Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E767B: ;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x002E7684u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7684: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002E768Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E768D: ;
    edi = eax;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E76B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E76B2u); } /* indirect call */
    }

loc_002E76B9: ;
    edx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    ebx = 0x20;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    edx = SX16(LO16(ecx));
    ecx = esp + 0x54;
    MEM32(0x758D4C) = eax;
    eax = MEM32(eax * 8 + 0x68642C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002E76F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E76EFu); } /* indirect call */
    }

loc_002E76F6: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - ebx;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E772B; /* jle: less or equal (signed <=) */

loc_002E7707: ;
    PUSH32(esp, ebp);

loc_002E7708: ;
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7725; /* je: equal / zero */

loc_002E770F: ;
    ebx = MEM32(eax);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E7725; /* je: equal / zero */

loc_002E7719: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002E7725; /* jne: not equal / not zero */

loc_002E7721: ;
    MEM32(esi + edx * 4) = eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002E7725: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7708; /* jl: less (signed <) */

loc_002E772A: ;
    POP32(esp, ebp);

loc_002E772B: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    POP32(esp, edi);
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x84);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7780
 * Original: 0x002E7780 - 0x002E7891 (273 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7780: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E778Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E778B: ;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x002E7794u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7794: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002E779Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E779D: ;
    ebx = eax;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E77C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E77C2u); } /* indirect call */
    }

loc_002E77C9: ;
    edx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = 0x20;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    edx = SX16(LO16(ecx));
    ecx = esp + 0x54;
    MEM32(0x758D4C) = eax;
    eax = MEM32(eax * 8 + 0x68642C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002E7806u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E77FFu); } /* indirect call */
    }

loc_002E7806: ;
    ecx = MEM32(0x758D48);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(0x758D48) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002E784B; /* jle: less or equal (signed <=) */

loc_002E781F: ;
    PUSH32(esp, ebp);

loc_002E7820: ;
    ecx = MEM32(esi + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7845; /* je: equal / zero */

loc_002E7827: ;
    eax = MEM32(ecx + 4);
    ebp = eax;
    ebp = ebp & MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, 0xFF00 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E7845; /* je: equal / zero */

loc_002E7838: ;
    eax = eax & MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002E7845; /* jne: not equal / not zero */

loc_002E7841: ;
    MEM32(esi + edi * 4) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002E7845: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7820; /* jl: less (signed <) */

loc_002E784A: ;
    POP32(esp, ebp);

loc_002E784B: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7825
 * Original: 0x002E7825 - 0x002E7891 (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7825(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7825: ;
    if (_flags /* je: equal / zero */) goto loc_002E7845;

loc_002E7827: ;
    eax = MEM32(ecx + 4);
    ebp = eax;
    ebp = ebp & MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, 0xFF00 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E7845; /* je: equal / zero */

loc_002E7838: ;
    eax = eax & MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002E7845; /* jne: not equal / not zero */

loc_002E7841: ;
    MEM32(esi + edi * 4) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002E7845: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002E7820(); return; } /* jl: less (signed <) */

loc_002E784A: ;
    POP32(esp, ebp);
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E78A0
 * Original: 0x002E78A0 - 0x002E791D (125 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E78A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E78A0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E78AAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E78AA: ;
    esi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E78D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E78CFu); } /* indirect call */
    }

loc_002E78D6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    edx = esi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edi + edx * 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002E790E; /* je: equal / zero */

loc_002E78FD: ;
    eax = ~eax;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E790E: ;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x3C);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7920
 * Original: 0x002E7920 - 0x002E7987 (103 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7920: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E792Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E792A: ;
    esi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7956u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E794Fu); } /* indirect call */
    }

loc_002E7956: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edi + edx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E798A
 * Original: 0x002E798A - 0x002E7990 (6 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E798A(void)
{

loc_002E798A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_002E7990
 * Original: 0x002E7990 - 0x002E79F9 (105 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7990: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E799Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E799A: ;
    esi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E79C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E79BFu); } /* indirect call */
    }

loc_002E79C6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edi + edx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7A00
 * Original: 0x002E7A00 - 0x002E7A2D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7A00: ;
    PUSH32(esp, 0x002E7A05u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7A05: ;
    edx = MEM32(0x758E1C);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx + ecx * 4;
    ecx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 4);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7A30
 * Original: 0x002E7A30 - 0x002E7A5F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7A30: ;
    PUSH32(esp, 0x002E7A35u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7A35: ;
    edx = MEM32(0x758E1C);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx + ecx * 4;
    ecx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx);
    eax = ~eax;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7A60
 * Original: 0x002E7A60 - 0x002E7AF6 (150 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7A60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002E7A60: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7A6Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7A6A: ;
    esi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7A96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7A8Fu); } /* indirect call */
    }

loc_002E7A96: ;
    edx = MEM32(0x758D48);
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((5) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edi + esi * 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x20));
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7B00
 * Original: 0x002E7B00 - 0x002E7B64 (100 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7B00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002E7B00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002E7B06u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7B06: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((5) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x758E1C);
    esi = MEM32(ecx + eax * 4);
    ecx = MEM32(0x758D48);
    _cf = 0; /* logical op clears CF */
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx + 0x696528;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E7B70
 * Original: 0x002E7B70 - 0x002E7C4B (219 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7B70: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7B7Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7B7B: ;
    edi = eax;
    PUSH32(esp, 0x002E7B82u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7B82: ;
    ebx = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7BAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7BA7u); } /* indirect call */
    }

loc_002E7BAE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi + edx * 4;
    edx = esi + ecx * 4;
    ecx = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7BFC; /* jne: not equal / not zero */

loc_002E7BD1: ;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 2;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax);
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ~esi;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x44);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E7BFC: ;
    ebx = MEM32(eax);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ~esi;
    ebx = ebx & esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 2;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + -4) = ebx;
    edi = MEM32(edx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ~esi;
    edi = edi & esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(edx) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002E7C3D; /* je: equal / zero */

loc_002E7C26: ;
    goto loc_002E7C30;

    /* nop */
    /* nop */

loc_002E7C30: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7C30; /* jne: not equal / not zero */

loc_002E7C3D: ;
    eax = MEM32(esp + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_002E7C50
 * Original: 0x002E7C50 - 0x002E7D1B (203 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7C50: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7C5Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7C5B: ;
    edi = eax;
    PUSH32(esp, 0x002E7C62u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7C62: ;
    ebx = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7C8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7C87u); } /* indirect call */
    }

loc_002E7C8E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi + edx * 4;
    edx = esi + ecx * 4;
    ecx = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7CDA; /* jne: not equal / not zero */

loc_002E7CB1: ;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 2;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax);
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x44);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E7CDA: ;
    ebx = MEM32(eax);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx | esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 2;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + -4) = ebx;
    edi = MEM32(edx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(edx) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002E7D0D; /* je: equal / zero */

loc_002E7D00: ;
    MEM32(eax) = 0xFFFFFFFFu;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7D00; /* jne: not equal / not zero */

loc_002E7D0D: ;
    eax = MEM32(esp + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_002E7D20
 * Original: 0x002E7D20 - 0x002E7D84 (100 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7D20: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E7D73; /* jle: less or equal (signed <=) */

loc_002E7D30: ;
    ebx = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002E7D34: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7D63; /* je: equal / zero */

loc_002E7D3C: ;
    ecx = eax;
    edi = 1;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = edi;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4), ebp (32-bit) */
    eax = MEM32(ebx + edx);
    if (TEST_Z(_fa, _fb)) goto loc_002E7D5F; /* je: equal / zero */

loc_002E7D59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7D73; /* je: equal / zero */

loc_002E7D5D: ;
    goto loc_002E7D63;

loc_002E7D5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7D73; /* jne: not equal / not zero */

loc_002E7D63: ;
    eax = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7D34; /* jl: less (signed <) */

loc_002E7D6F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7D7A; /* jne: not equal / not zero */

loc_002E7D73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002E7D7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E7D90
 * Original: 0x002E7D90 - 0x002E7EB8 (296 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7D90: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7D9Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7D9F: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002E7DA8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7DA8: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7DD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7DCFu); } /* indirect call */
    }

loc_002E7DD6: ;
    edi = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    ebx = 0x20;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edi;
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002E7E13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7E0Cu); } /* indirect call */
    }

loc_002E7E13: ;
    edx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    edx = esp + 0x9C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, ebx);
    MEM32(0x758D4C) = eax;
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x43D06C); PUSH32(esp, 0x002E7E4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7E47u); } /* indirect call */
    }

loc_002E7E4E: ;
    ecx = MEM32(esp + 0x30);
    ebp = MEM32(0x758D48);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + 0x696528;
    PUSH32(esp, ebx);
    ecx = esi;
    edx = edi;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x002E7E75u); RECOMP_ABI_CALL(0x002E7D20u, sub_002E7D20); /* call 0x002E7D20 */

loc_002E7E75: ;
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC0);
    MEM32(0x758D48) = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7EC0
 * Original: 0x002E7EC0 - 0x002E7F12 (82 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002E7EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7EC0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E7F0C; /* jle: less or equal (signed <=) */

loc_002E7EC9: ;
    esi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_002E7ED0: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7F04; /* je: equal / zero */

loc_002E7ED8: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = 1;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4), ebp (32-bit) */
    eax = MEM32(esi + edx);
    if (TEST_Z(_fa, _fb)) goto loc_002E7F00; /* je: equal / zero */

loc_002E7EF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7F04; /* je: equal / zero */

loc_002E7EF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002E7F00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7EF7; /* je: equal / zero */

loc_002E7F04: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7ED0; /* jl: less (signed <) */

loc_002E7F0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002E7F20
 * Original: 0x002E7F20 - 0x002E8047 (295 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7F20: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7F2Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7F2F: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002E7F38u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7F38: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7F66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7F5Fu); } /* indirect call */
    }

loc_002E7F66: ;
    edi = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    ebx = 0x20;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edi;
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002E7FA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7F9Cu); } /* indirect call */
    }

loc_002E7FA3: ;
    edx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    edx = esp + 0x9C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, ebx);
    MEM32(0x758D4C) = eax;
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x43D06C); PUSH32(esp, 0x002E7FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7FD7u); } /* indirect call */
    }

loc_002E7FDE: ;
    ebp = MEM32(0x758D48);
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + 0x696528;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    eax = esi;
    edx = edi;
    PUSH32(esp, 0x002E8004u); RECOMP_ABI_CALL(0x002E7EC0u, sub_002E7EC0); /* call 0x002E7EC0 */

loc_002E8004: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC0);
    MEM32(0x758D48) = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8050
 * Original: 0x002E8050 - 0x002E80C7 (119 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8050: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002E8070;

    /* nop */

loc_002E8070: ;
    edx = MEM32(esp + esi * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E80B6; /* je: equal / zero */

loc_002E8078: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2710 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E8086; /* jle: less or equal (signed <=) */

loc_002E8081: ;
    _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x2710;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002E8086: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 1;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx & MEM32(edi + eax * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = ebx;
    if ((_fa == 0)) goto loc_002E80AE; /* je: equal / zero */

loc_002E809E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2710 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E80B6; /* jle: less or equal (signed <=) */

loc_002E80A6: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E80AE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2710 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E80A6; /* jl: less (signed <) */

loc_002E80B6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E8070; /* jl: less (signed <) */

loc_002E80BC: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E80D0
 * Original: 0x002E80D0 - 0x002E817D (173 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E80D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E80D0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E80DCu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E80DC: ;
    ebp = eax;
    PUSH32(esp, 0x002E80E3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E80E3: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002E80ECu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E80EC: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002E80F5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E80F5: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E8123u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E811Cu); } /* indirect call */
    }

loc_002E8123: ;
    esi = MEM32(0x758D48);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebx = esi + 0x696528;
    PUSH32(esp, 0x002E8144u); RECOMP_ABI_CALL(0x002E8050u, sub_002E8050); /* call 0x002E8050 */

loc_002E8144: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = ebx;
    MEM16(eax * 8 + 0x686428) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = esi;
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x54);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8180
 * Original: 0x002E8180 - 0x002E81CA (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8180: ;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E81AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E81A7u); } /* indirect call */
    }

loc_002E81AE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758E1C) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E81D0
 * Original: 0x002E81D0 - 0x002E8278 (168 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E81D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002E81D0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx + 0x14);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E8234; /* je: equal / zero */

loc_002E81FB: ;
    eax = ecx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E8222; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_002E821F: ;
    xmm0 = xmm1; /* movaps */

loc_002E8222: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E822A; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_002E8227: ;
    xmm0 = xmm2; /* movaps */

loc_002E822A: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429354); /* mulss */
    goto loc_002E8239;

loc_002E8234: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */

loc_002E8239: ;
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
 * sub_002E8280
 * Original: 0x002E8280 - 0x002E8328 (168 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002E8280: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx + 0x14);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E82E4; /* je: equal / zero */

loc_002E82AB: ;
    eax = ecx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E82D2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002E82CF: ;
    xmm0 = xmm1; /* movaps */

loc_002E82D2: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E82DA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_002E82D7: ;
    xmm0 = xmm2; /* movaps */

loc_002E82DA: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429354); /* mulss */
    goto loc_002E82E9;

loc_002E82E4: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */

loc_002E82E9: ;
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
 * sub_002E8330
 * Original: 0x002E8330 - 0x002E852D (509 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E8330: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_002E8464; /* je: equal / zero */

loc_002E834A: ;
    ecx = MEM32(ebx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x30); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x34); /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x38); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002E83B1u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E83B1: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x002E83DEu); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E83DE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_002E8431; /* je: equal / zero */

loc_002E840B: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429354); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E8431: ;
    PUSH32(esp, 0x002E8436u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E8436: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x42943C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E8464: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0xC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x002E8474u); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_002E8474: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    eax = MEM32(ebx + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x002E84C8u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E84C8: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x002E84F5u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E84F5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002E8528; /* jne: not equal / not zero */

loc_002E8523: ;
    PUSH32(esp, 0x002E8528u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E8528: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8530
 * Original: 0x002E8530 - 0x002E85B9 (137 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8530: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002E853Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E853A: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    ebx = MEM32(0x758D70);
    PUSH32(esp, eax);
    esi = esp + 0xC;
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002E8562u); RECOMP_ABI_CALL(0x002E8330u, sub_002E8330); /* call 0x002E8330 */

loc_002E8562: ;
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
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
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
 * sub_002E85C0
 * Original: 0x002E85C0 - 0x002E85FB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E85C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E85C0: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E85E0; /* je: equal / zero */

loc_002E85CE: ;
    edx = MEM32(eax + 0x18);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

loc_002E85E0: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8600
 * Original: 0x002E8600 - 0x002E86AD (173 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8600: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x10);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E863B; /* je: equal / zero */

loc_002E8630: ;
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    edi = MEM32(eax + 0x20);
    goto loc_002E8665;

loc_002E863B: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x10);

loc_002E8665: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(eax) = esi;
    MEM32(eax + 8) = edi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
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
 * sub_002E86B0
 * Original: 0x002E86B0 - 0x002E8726 (118 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E86B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E86B0: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69652C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696530);
    eax = MEM32(0x758D6C);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D64);
    MEM32(0x758D68) = eax;
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(eax + 0x14);
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E871B; /* je: equal / zero */

loc_002E8707: ;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x20) = edi;
    eax = MEM32(ecx + 0x10);
    MEM32(eax) = edx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;

loc_002E871B: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E8730
 * Original: 0x002E8730 - 0x002E8764 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8730: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E8750; /* je: equal / zero */

loc_002E873E: ;
    edx = MEM32(eax + 0x24);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x2C);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

loc_002E8750: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8770
 * Original: 0x002E8770 - 0x002E8816 (166 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8770: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x10);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E87AB; /* je: equal / zero */

loc_002E87A0: ;
    esi = MEM32(eax + 0x24);
    edx = MEM32(eax + 0x28);
    edi = MEM32(eax + 0x2C);
    goto loc_002E87CE;

loc_002E87AB: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x10);

loc_002E87CE: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(eax) = esi;
    MEM32(eax + 8) = edi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
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
 * sub_002E8820
 * Original: 0x002E8820 - 0x002E8899 (121 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8820: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69652C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696530);
    eax = MEM32(0x758D6C);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D64);
    MEM32(0x758D68) = eax;
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(eax + 0x14);
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E888E; /* je: equal / zero */

loc_002E8877: ;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0x2C) = edi;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;

loc_002E888E: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E88A0
 * Original: 0x002E88A0 - 0x002E893A (154 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E88A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E88A0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x758D68) = ecx;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_002E88F2; /* js: sign (negative) */

loc_002E88C4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x44AA20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E88F1; /* je: equal / zero */

loc_002E88CF: ;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x2C);
    eax = esi;
    PUSH32(esp, 0x002E88E2u); RECOMP_ABI_CALL(0x0002C900u, sub_0002C900); /* call 0x0002C900 */

loc_002E88E2: ;
    edx = MEM32(ebx + 0x2C);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002E88EDu); RECOMP_ABI_CALL(0x0002C710u, sub_0002C710); /* call 0x0002C710 */

loc_002E88ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_002E88F1: ;
    POP32(esp, ebx);

loc_002E88F2: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(0x758D48);
    edx = MEM32(edx);
    edx = MEM32(edx);
    edx = MEM32(edx + 4);
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
 * sub_002E8940
 * Original: 0x002E8940 - 0x002E89BE (126 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E8940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = eax;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_002E897B; /* js: sign (negative) */

loc_002E8951: ;
    esi = MEM32(0x44AA20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E897B; /* je: equal / zero */

loc_002E895B: ;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 4) = eax;
    edi = MEM32(esi + 0x2C);
    eax = ebx;
    PUSH32(esp, 0x002E896Du); RECOMP_ABI_CALL(0x0002C900u, sub_0002C900); /* call 0x0002C900 */

loc_002E896D: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002E8978u); RECOMP_ABI_CALL(0x0002C710u, sub_0002C710); /* call 0x0002C710 */

loc_002E8978: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E897B: ;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(ecx);
    eax = MEM32(edx);
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    ebx = edi + eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002E89B0; /* jae: above or equal (unsigned >=) */

loc_002E898E: ;
    edi = edi;

loc_002E8990: ;
    ecx = MEM32(edi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    edx = ebp;
    PUSH32(esp, 0x002E89A2u); RECOMP_ABI_CALL(0x00040590u, sub_00040590); /* call 0x00040590 */

loc_002E89A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E89B7; /* jne: not equal / not zero */

loc_002E89A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E8990; /* jb: below (unsigned <) */

loc_002E89B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002E89B7: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E89C0
 * Original: 0x002E89C0 - 0x002E8A10 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E89C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E89C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E89C7u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E89C7: ;
    esi = eax;
    PUSH32(esp, 0x002E89CEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E89CE: ;
    edi = eax;
    PUSH32(esp, 0x002E89D5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E89D5: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002E89FDu); RECOMP_ABI_CALL(0x002E8940u, sub_002E8940); /* call 0x002E8940 */

loc_002E89FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E8A03u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E8A03: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E8A10
 * Original: 0x002E8A10 - 0x002E8AB3 (163 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E8A10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = eax;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_002E8A4A; /* js: sign (negative) */

loc_002E8A20: ;
    ebp = MEM32(0x44AA20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E8A4A; /* je: equal / zero */

loc_002E8A2A: ;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 4) = eax;
    edi = MEM32(ebp + 0x2C);
    eax = ebx;
    PUSH32(esp, 0x002E8A3Cu); RECOMP_ABI_CALL(0x0002C900u, sub_0002C900); /* call 0x0002C900 */

loc_002E8A3C: ;
    eax = MEM32(ebp + 0x2C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002E8A47u); RECOMP_ABI_CALL(0x0002C710u, sub_0002C710); /* call 0x0002C710 */

loc_002E8A47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E8A4A: ;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(ecx);
    eax = MEM32(edx);
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    eax = edi + eax * 4;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_002E8AA0; /* jae: above or equal (unsigned >=) */

loc_002E8A63: ;
    ebx = MEM32(edi);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002E8A73u); RECOMP_ABI_CALL(0x00040590u, sub_00040590); /* call 0x00040590 */

loc_002E8A73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E8A82; /* je: equal / zero */

loc_002E8A7A: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx + ebp * 4) = ebx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002E8A82: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E8A63; /* jb: below (unsigned <) */

loc_002E8A8D: ;
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + ebp * 4) = 0;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002E8AA0: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(eax + ebp * 4) = 0;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E8AC0
 * Original: 0x002E8AC0 - 0x002E8B7E (190 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E8AC0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E8ACCu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8ACC: ;
    edi = eax;
    PUSH32(esp, 0x002E8AD3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8AD3: ;
    ebx = eax;
    PUSH32(esp, 0x002E8ADAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8ADA: ;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E8B06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E8AFFu); } /* indirect call */
    }

loc_002E8B06: ;
    eax = MEM32(0x758D48);
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, edi);
    MEM32(0x758D68) = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ebx;
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002E8B39u); RECOMP_ABI_CALL(0x002E8A10u, sub_002E8A10); /* call 0x002E8A10 */

loc_002E8B39: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(esp + 0x44);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_002E8B80
 * Original: 0x002E8B80 - 0x002E8B9B (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8B80: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E8B87; /* jne: not equal / not zero */

loc_002E8B85: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002E8B87: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0x002E8B96u); RECOMP_ABI_CALL(0x0003CB70u, sub_0003CB70); /* call 0x0003CB70 */

loc_002E8B96: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E8BA0
 * Original: 0x002E8BA0 - 0x002E8C2F (143 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8BA0: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(0x758D6C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E8BF4; /* je: equal / zero */

loc_002E8BE2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0x002E8BF1u); RECOMP_ABI_CALL(0x0003CB70u, sub_0003CB70); /* call 0x0003CB70 */

loc_002E8BF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E8BF4: ;
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
    eax = MEM32(esp + 4);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8C30
 * Original: 0x002E8C30 - 0x002E8D12 (226 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8C30: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E8C3Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8C3B: ;
    esi = eax;
    PUSH32(esp, 0x002E8C42u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8C42: ;
    edi = eax;
    PUSH32(esp, 0x002E8C49u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8C49: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002E8C6E; /* jne: not equal / not zero */

loc_002E8C64: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002E8C76;

loc_002E8C6E: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002E8C76: ;
    ebx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = ebx;
    ebx = MEM32(ecx + 0x69652C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(ecx + 0x696550);
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 0x69652C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(0x758D6C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(0x758D70) = edx;
    edx = esp + 0x1C;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(0x44AA20);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = ebx;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E8CFBu); RECOMP_ABI_CALL(0x000864C0u, sub_000864C0); /* call 0x000864C0 */

loc_002E8CFB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E8D01u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E8D01: ;
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8D20
 * Original: 0x002E8D20 - 0x002E8DA4 (132 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8D20(void)
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

loc_002E8D20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(eax + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 1);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(0x44AA20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x002E8DA0u); RECOMP_ABI_CALL(0x000864C0u, sub_000864C0); /* call 0x000864C0 */

loc_002E8DA0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002E8DB0
 * Original: 0x002E8DB0 - 0x002E8E70 (192 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8DB0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E8DBAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8DBA: ;
    esi = eax;
    PUSH32(esp, 0x002E8DC1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8DC1: ;
    edi = eax;
    PUSH32(esp, 0x002E8DC8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8DC8: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(0x758D70);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 8) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = esp + 0xC;
    MEM32(0x758D68) = edx;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = eax;
    ecx = edi;
    eax = esp + 0x20;
    PUSH32(esp, 0x002E8E5Au); RECOMP_ABI_CALL(0x002E8D20u, sub_002E8D20); /* call 0x002E8D20 */

loc_002E8E5A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E8E60u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E8E60: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8E70
 * Original: 0x002E8E70 - 0x002E8E84 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8E70: ;
    ecx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x002E8E80u); RECOMP_ABI_CALL(0x00071530u, sub_00071530); /* call 0x00071530 */

loc_002E8E80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8E90
 * Original: 0x002E8E90 - 0x002E8EFD (109 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8E90: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E8EB2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8EB2: ;
    ecx = MEM32(0x44AA20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002E8EBEu); RECOMP_ABI_CALL(0x00071530u, sub_00071530); /* call 0x00071530 */

loc_002E8EBE: ;
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
 * sub_002E8F00
 * Original: 0x002E8F00 - 0x002E8FAC (172 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8F00: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E8F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E8F27u); } /* indirect call */
    }

loc_002E8F2E: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x6964E8);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D70);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E8F97u); RECOMP_ABI_CALL(0x000715C0u, sub_000715C0); /* call 0x000715C0 */

loc_002E8F97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E8F9Du); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E8F9D: ;
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8FB0
 * Original: 0x002E8FB0 - 0x002E905C (172 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8FB0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E8FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E8FD7u); } /* indirect call */
    }

loc_002E8FDE: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x6964E8);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D70);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E9047u); RECOMP_ABI_CALL(0x00071810u, sub_00071810); /* call 0x00071810 */

loc_002E9047: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E904Du); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E904D: ;
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9060
 * Original: 0x002E9060 - 0x002E912D (205 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9060: ;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E908Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9087u); } /* indirect call */
    }

loc_002E908E: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E90B5; /* jne: not equal / not zero */

loc_002E90AB: ;
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002E90BD;

loc_002E90B5: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002E90BD: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D70);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E9118u); RECOMP_ABI_CALL(0x000715C0u, sub_000715C0); /* call 0x000715C0 */

loc_002E9118: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E911Eu); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E911E: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9130
 * Original: 0x002E9130 - 0x002E91BD (141 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9130: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E9155u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9155: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, esi);
    ecx = eax;
    esi = esp + 8;
    PUSH32(esp, 0x002E9167u); RECOMP_ABI_CALL(0x00071AC0u, sub_00071AC0); /* call 0x00071AC0 */

loc_002E9167: ;
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
 * sub_002E91C0
 * Original: 0x002E91C0 - 0x002E91DA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E91C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E91C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x44AA20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x002E91D6u); RECOMP_ABI_CALL(0x00072A80u, sub_00072A80); /* call 0x00072A80 */

loc_002E91D6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E91E0
 * Original: 0x002E91E0 - 0x002E92F1 (273 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E91E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E91E0: ;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9209u); } /* indirect call */
    }

loc_002E9210: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E9237; /* jne: not equal / not zero */

loc_002E922D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002E923F;

loc_002E9237: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002E923F: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0x696530);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(0x758D48) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x002E9277u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9277: ;
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    ebx = MEM32(0x758D48);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x44AA20);
    edx = eax;
    edi = ebx + 0x696528;
    PUSH32(esp, 0x002E92B9u); RECOMP_ABI_CALL(0x00072A80u, sub_00072A80); /* call 0x00072A80 */

loc_002E92B9: ;
    MEM32(edi) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = edi;
    MEM16(eax * 8 + 0x686428) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x54);
    POP32(esp, esi);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9300
 * Original: 0x002E9300 - 0x002E9312 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9300: ;
    eax = MEM32(esp + 4);
    MEM32(0x431048) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9320
 * Original: 0x002E9320 - 0x002E935D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9320: ;
    PUSH32(esp, eax);
    eax = MEM32(0x44AA20);
    PUSH32(esp, 0x002E932Bu); RECOMP_ABI_CALL(0x00071B90u, sub_00071B90); /* call 0x00071B90 */

loc_002E932B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9343; /* je: equal / zero */

loc_002E9332: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    esp += 4; return; /* ret */

loc_002E9343: ;
    ecx = MEM32(0x64506C);
    MEM32(esi) = ecx;
    edx = MEM32(0x645070);
    MEM32(esi + 4) = edx;
    eax = MEM32(0x645074);
    MEM32(esi + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002E9360
 * Original: 0x002E9360 - 0x002E93F8 (152 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9360: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E9383u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9383: ;
    ecx = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002E9390u); RECOMP_ABI_CALL(0x00071B90u, sub_00071B90); /* call 0x00071B90 */

loc_002E9390: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E93A1; /* je: equal / zero */

loc_002E9397: ;
    edx = MEM32(eax);
    esi = MEM32(eax + 4);
    edi = MEM32(eax + 8);
    goto loc_002E93B3;

loc_002E93A1: ;
    edx = MEM32(0x64506C);
    esi = MEM32(0x645070);
    edi = MEM32(0x645074);

loc_002E93B3: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0xC);
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
    esp += 4; return; /* ret */

}

/**
 * sub_002E9400
 * Original: 0x002E9400 - 0x002E9417 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9400: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x44AA20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E9413u); RECOMP_ABI_CALL(0x00072D90u, sub_00072D90); /* call 0x00072D90 */

loc_002E9413: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9420
 * Original: 0x002E9420 - 0x002E94D9 (185 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9420: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E942Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E942C: ;
    ebp = eax;
    PUSH32(esp, 0x002E9433u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9433: ;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9461u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E945Au); } /* indirect call */
    }

loc_002E9461: ;
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    edi = MEM32(0x758D48);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x44AA20);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ebx = edi + 0x696528;
    PUSH32(esp, 0x002E94A0u); RECOMP_ABI_CALL(0x00072D90u, sub_00072D90); /* call 0x00072D90 */

loc_002E94A0: ;
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
 * sub_002E94E0
 * Original: 0x002E94E0 - 0x002E95B2 (210 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E94E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E94E0: ;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9509u); } /* indirect call */
    }

loc_002E9510: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002E951Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E951C: ;
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D6C);
    ebx = MEM32(0x758D70);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002E9546u); RECOMP_ABI_CALL(0x00071A60u, sub_00071A60); /* call 0x00071A60 */

loc_002E9546: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9557; /* je: equal / zero */

loc_002E954D: ;
    edx = MEM32(eax);
    esi = MEM32(eax + 4);
    edi = MEM32(eax + 8);
    goto loc_002E9569;

loc_002E9557: ;
    edx = MEM32(0x64506C);
    esi = MEM32(0x645070);
    edi = MEM32(0x645074);

loc_002E9569: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edi;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(eax + 4) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    POP32(esp, edi);
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x44);
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
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E95C0
 * Original: 0x002E95C0 - 0x002E9629 (105 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E95C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E95C0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E95E2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E95E2: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E95EDu); RECOMP_ABI_CALL(0x00071D90u, sub_00071D90); /* call 0x00071D90 */

loc_002E95ED: ;
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
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E9630
 * Original: 0x002E9630 - 0x002E969D (109 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9630: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E9652u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9652: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E965Du); RECOMP_ABI_CALL(0x00071E30u, sub_00071E30); /* call 0x00071E30 */

loc_002E965D: ;
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
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E96A0
 * Original: 0x002E96A0 - 0x002E970D (109 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E96A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E96A0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E96C2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E96C2: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E96CDu); RECOMP_ABI_CALL(0x00071EE0u, sub_00071EE0); /* call 0x00071EE0 */

loc_002E96CD: ;
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
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E9710
 * Original: 0x002E9710 - 0x002E977E (110 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9710: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E9732u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9732: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E973Du); RECOMP_ABI_CALL(0x00071F90u, sub_00071F90); /* call 0x00071F90 */

loc_002E973D: ;
    edx = MEM32(0x758D48);
    ecx = ZX8(LO8(eax));
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
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E9780
 * Original: 0x002E9780 - 0x002E9799 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9780: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E978Bu); RECOMP_ABI_CALL(0x00072030u, sub_00072030); /* call 0x00072030 */

loc_002E978B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E9795; /* jne: not equal / not zero */

loc_002E9791: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002E9795: ;
    eax = ZX16(LO16(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_002E97A0
 * Original: 0x002E97A0 - 0x002E9819 (121 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E97A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E97A0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E97C2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E97C2: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E97CDu); RECOMP_ABI_CALL(0x00072030u, sub_00072030); /* call 0x00072030 */

loc_002E97CD: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002E97D9; /* jne: not equal / not zero */

loc_002E97D4: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002E97DC;

loc_002E97D9: ;
    edx = ZX16(LO16(eax));

loc_002E97DC: ;
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
 * sub_002E9820
 * Original: 0x002E9820 - 0x002E988E (110 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9820: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E9842u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9842: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E984Du); RECOMP_ABI_CALL(0x000720E0u, sub_000720E0); /* call 0x000720E0 */

loc_002E984D: ;
    edx = MEM32(0x758D48);
    ecx = ZX8(LO8(eax));
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
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E9890
 * Original: 0x002E9890 - 0x002E98D3 (67 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9890: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002E9896u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9896: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    edx = MEM32(0x44AA20);
    ecx = eax;
    PUSH32(esp, 0x002E98C1u); RECOMP_ABI_CALL(0x00071C30u, sub_00071C30); /* call 0x00071C30 */

loc_002E98C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E98C7u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E98C7: ;
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
 * sub_002E98E0
 * Original: 0x002E98E0 - 0x002E990F (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002E98E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002E98E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E990C; /* je: equal / zero */

loc_002E98E4: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E990C; /* je: equal / zero */

loc_002E98EB: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E990C; /* je: equal / zero */

loc_002E98F1: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E990C; /* je: equal / zero */

loc_002E98F8: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E990C; /* je: equal / zero */

loc_002E98FE: ;
    ecx = MEM32(ecx + 8);
    SET_LO8(ecx, MEM8(edx + ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 4) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

loc_002E990C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9910
 * Original: 0x002E9910 - 0x002E999E (142 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002E9910: ;
    PUSH32(esp, 0x002E9915u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9915: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E9961; /* je: equal / zero */

loc_002E9937: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9961; /* je: equal / zero */

loc_002E993E: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9961; /* je: equal / zero */

loc_002E9944: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9961; /* je: equal / zero */

loc_002E994B: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9961; /* je: equal / zero */

loc_002E9951: ;
    edx = MEM32(edx + 8);
    eax = ZX8(MEM8(eax + edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 4) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_002E9963;

loc_002E9961: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E9963: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E99A0
 * Original: 0x002E99A0 - 0x002E9A7E (222 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E99A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E99A0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E99ACu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E99AC: ;
    edi = eax;
    PUSH32(esp, 0x002E99B3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E99B3: ;
    ebp = eax;
    PUSH32(esp, 0x002E99BAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E99BA: ;
    ebx = eax;
    PUSH32(esp, 0x002E99C1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E99C1: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002E99CAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E99CA: ;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E99F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E99F1u); } /* indirect call */
    }

loc_002E99F8: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x30));
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002E9A39u); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9A39: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(esp + 0x4C);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_002E9A80
 * Original: 0x002E9A80 - 0x002E9B54 (212 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9A80: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9A8Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9A8C: ;
    edi = eax;
    PUSH32(esp, 0x002E9A93u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9A93: ;
    ebx = eax;
    PUSH32(esp, 0x002E9A9Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9A9A: ;
    ebp = eax;
    PUSH32(esp, 0x002E9AA1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9AA1: ;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9ACFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9AC8u); } /* indirect call */
    }

loc_002E9ACF: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x002E9B0Fu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9B0F: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_002E9B60
 * Original: 0x002E9B60 - 0x002E9C33 (211 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9B60: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9B6Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9B6C: ;
    edi = eax;
    PUSH32(esp, 0x002E9B73u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9B73: ;
    ebx = eax;
    PUSH32(esp, 0x002E9B7Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9B7A: ;
    ebp = eax;
    PUSH32(esp, 0x002E9B81u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9B81: ;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9BAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9BA8u); } /* indirect call */
    }

loc_002E9BAF: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xFE);
    PUSH32(esp, 0x002E9BEEu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9BEE: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_002E9C40
 * Original: 0x002E9C40 - 0x002E9D07 (199 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9C40: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9C4Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9C4C: ;
    edi = eax;
    PUSH32(esp, 0x002E9C53u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9C53: ;
    ebx = eax;
    PUSH32(esp, 0x002E9C5Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9C5A: ;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9C86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9C7Fu); } /* indirect call */
    }

loc_002E9C86: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xFD);
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002E9CC2u); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9CC2: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(esp + 0x44);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_002E9D10
 * Original: 0x002E9D10 - 0x002E9DD7 (199 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9D10: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9D1Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9D1C: ;
    edi = eax;
    PUSH32(esp, 0x002E9D23u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9D23: ;
    ebx = eax;
    PUSH32(esp, 0x002E9D2Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9D2A: ;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9D56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9D4Fu); } /* indirect call */
    }

loc_002E9D56: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xFC);
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002E9D92u); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9D92: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(esp + 0x44);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_002E9DE0
 * Original: 0x002E9DE0 - 0x002E9EB3 (211 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9DE0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9DECu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9DEC: ;
    edi = eax;
    PUSH32(esp, 0x002E9DF3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9DF3: ;
    ebx = eax;
    PUSH32(esp, 0x002E9DFAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9DFA: ;
    ebp = eax;
    PUSH32(esp, 0x002E9E01u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9E01: ;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9E2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9E28u); } /* indirect call */
    }

loc_002E9E2F: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xFB);
    PUSH32(esp, 0x002E9E6Eu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9E6E: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_002E9EC0
 * Original: 0x002E9EC0 - 0x002E9F93 (211 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9EC0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9ECCu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9ECC: ;
    edi = eax;
    PUSH32(esp, 0x002E9ED3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9ED3: ;
    ebx = eax;
    PUSH32(esp, 0x002E9EDAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9EDA: ;
    ebp = eax;
    PUSH32(esp, 0x002E9EE1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9EE1: ;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9F0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9F08u); } /* indirect call */
    }

loc_002E9F0F: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xFA);
    PUSH32(esp, 0x002E9F4Eu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9F4E: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_002E9FA0
 * Original: 0x002E9FA0 - 0x002EA073 (211 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9FA0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9FACu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9FAC: ;
    edi = eax;
    PUSH32(esp, 0x002E9FB3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9FB3: ;
    ebx = eax;
    PUSH32(esp, 0x002E9FBAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9FBA: ;
    ebp = eax;
    PUSH32(esp, 0x002E9FC1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9FC1: ;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9FEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9FE8u); } /* indirect call */
    }

loc_002E9FEF: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xEF);
    PUSH32(esp, 0x002EA02Eu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002EA02E: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_002EA080
 * Original: 0x002EA080 - 0x002EA153 (211 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA080: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA08Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA08C: ;
    edi = eax;
    PUSH32(esp, 0x002EA093u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA093: ;
    ebx = eax;
    PUSH32(esp, 0x002EA09Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA09A: ;
    ebp = eax;
    PUSH32(esp, 0x002EA0A1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA0A1: ;
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
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002EA0CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA0C8u); } /* indirect call */
    }

loc_002EA0CF: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xEE);
    PUSH32(esp, 0x002EA10Eu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002EA10E: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_002EA160
 * Original: 0x002EA160 - 0x002EA1F7 (151 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA160: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA167u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA167: ;
    esi = eax;
    PUSH32(esp, 0x002EA16Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA16E: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    edi = MEM32(0x758D6C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696528);
    PUSH32(esp, ecx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(0x758D70);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edi;
    edi = MEM32(0x758D64);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(0x758D68) = edi;
    PUSH32(esp, 0x002EA1B7u); RECOMP_ABI_CALL(0x0003F5F0u, sub_0003F5F0); /* call 0x0003F5F0 */

loc_002EA1B7: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_002EA200
 * Original: 0x002EA200 - 0x002EA280 (128 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA209u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA209: ;
    ebx = MEM32(0x758D48);
    edx = MEM32(0x758D70);
    ebp = MEM32(0x758D6C);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + 0x696528);
    edi = ebx + 0x696528;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(0x758D70) = ebp;
    ebp = MEM32(0x758D64);
    PUSH32(esp, eax);
    eax = edx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D68) = ebp;
    PUSH32(esp, 0x002EA24Eu); RECOMP_ABI_CALL(0x0003F150u, sub_0003F150); /* call 0x0003F150 */

loc_002EA24E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x14);
    MEM16(esi * 8 + 0x686428) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA280
 * Original: 0x002EA280 - 0x002EA2FF (127 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA289u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA289: ;
    ebx = MEM32(0x758D48);
    edx = MEM32(0x758D70);
    ebp = MEM32(0x758D6C);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + 0x696528);
    PUSH32(esp, 0);
    edi = ebx + 0x696528;
    MEM32(0x758D70) = ebp;
    ebp = MEM32(0x758D64);
    PUSH32(esp, eax);
    eax = edx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D68) = ebp;
    PUSH32(esp, 0x002EA2CDu); RECOMP_ABI_CALL(0x0003E8D0u, sub_0003E8D0); /* call 0x0003E8D0 */

loc_002EA2CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x14);
    MEM16(esi * 8 + 0x686428) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA300
 * Original: 0x002EA300 - 0x002EA371 (113 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA300: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D48);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebx + 0x696528);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D64);
    edi = ebx + 0x696528;
    PUSH32(esp, 0);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D68) = eax;
    PUSH32(esp, 0x002EA340u); RECOMP_ABI_CALL(0x0003EC10u, sub_0003EC10); /* call 0x0003EC10 */

loc_002EA340: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x10);
    MEM16(esi * 8 + 0x686428) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA380
 * Original: 0x002EA380 - 0x002EA413 (147 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA380: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D4C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x69652C);
    edx = MEM32(ebp + 0x696530);
    eax = MEM32(ebp + 0x696528);
    PUSH32(esp, esi);
    esi = ebp + 0x696528;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D70);
    edi = esp + 0x10;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002EA3E1u); RECOMP_ABI_CALL(0x0003EE80u, sub_0003EE80); /* call 0x0003EE80 */

loc_002EA3E1: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(ebx * 8 + 0x68642C) = esi;
    MEM16(ebx * 8 + 0x686428) = 1;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D48) = ebp;
    POP32(esp, ebp);
    MEM32(0x758D4C) = ebx;
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
 * sub_002EA420
 * Original: 0x002EA420 - 0x002EA491 (113 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA420: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D48);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebx + 0x696528);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D64);
    edi = ebx + 0x696528;
    PUSH32(esp, 1);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D68) = eax;
    PUSH32(esp, 0x002EA460u); RECOMP_ABI_CALL(0x0003EC10u, sub_0003EC10); /* call 0x0003EC10 */

loc_002EA460: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x10);
    MEM16(esi * 8 + 0x686428) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA4A0
 * Original: 0x002EA4A0 - 0x002EA51F (127 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA4A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA4A9u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA4A9: ;
    ebx = MEM32(0x758D48);
    edx = MEM32(0x758D70);
    ebp = MEM32(0x758D6C);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + 0x696528);
    PUSH32(esp, 0);
    edi = ebx + 0x696528;
    MEM32(0x758D70) = ebp;
    ebp = MEM32(0x758D64);
    PUSH32(esp, eax);
    eax = edx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D68) = ebp;
    PUSH32(esp, 0x002EA4EDu); RECOMP_ABI_CALL(0x0003E5A0u, sub_0003E5A0); /* call 0x0003E5A0 */

loc_002EA4ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x14);
    MEM16(esi * 8 + 0x686428) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA520
 * Original: 0x002EA520 - 0x002EA61F (255 bytes, 131 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA520: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_A(_fa, _fb)) goto loc_002EA619; /* ja: above (unsigned >) */

loc_002EA53A: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x2EA620); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002EA541u) goto loc_002EA541;
    if (_jt == 0x002EA566u) goto loc_002EA566;
    if (_jt == 0x002EA58Bu) goto loc_002EA58B;
    if (_jt == 0x002EA5B0u) goto loc_002EA5B0;
    if (_jt == 0x002EA5D5u) goto loc_002EA5D5;
    if (_jt == 0x002EA5FAu) goto loc_002EA5FA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002EA541: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EA55Fu); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EA55F: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA566: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA584u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EA584: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA58B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002EA5A9u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EA5A9: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA5B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EA5CEu); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EA5CE: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA5D5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA5F3u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EA5F3: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA5FA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002EA612u); RECOMP_ABI_CALL(0x000865E0u, sub_000865E0); /* call 0x000865E0 */

loc_002EA612: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA619: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA640
 * Original: 0x002EA640 - 0x002EA750 (272 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA640: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA64Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA64B: ;
    esi = eax;
    PUSH32(esp, 0x002EA652u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA652: ;
    edi = eax;
    PUSH32(esp, 0x002EA659u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA659: ;
    ebx = eax;
    PUSH32(esp, 0x002EA660u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA660: ;
    ecx = MEM32(0x758D4C);
    edx = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EA686; /* jne: not equal / not zero */

loc_002EA67C: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002EA68E;

loc_002EA686: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002EA68E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x696528);
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(eax + 0x69652C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = ebp;
    ebp = MEM32(eax + 0x696550);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D64);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758E24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x28) = ebp;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_002EA717; /* jne: not equal / not zero */

loc_002EA70D: ;
    MEM32(0x758E24) = 1;

loc_002EA717: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebx;
    esi = esp + 0x2C;
    PUSH32(esp, 0x002EA730u); RECOMP_ABI_CALL(0x002EA520u, sub_002EA520); /* call 0x002EA520 */

loc_002EA730: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA736u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EA736: ;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EA750
 * Original: 0x002EA750 - 0x002EA856 (262 bytes, 129 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA750: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_A(_fa, _fb)) goto loc_002EA850; /* ja: above (unsigned >) */

loc_002EA76A: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x2EA858); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002EA771u) goto loc_002EA771;
    if (_jt == 0x002EA7A0u) goto loc_002EA7A0;
    if (_jt == 0x002EA7A4u) goto loc_002EA7A4;
    if (_jt == 0x002EA7D3u) goto loc_002EA7D3;
    if (_jt == 0x002EA802u) goto loc_002EA802;
    if (_jt == 0x002EA831u) goto loc_002EA831;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002EA771: ;
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EA799u); RECOMP_ABI_CALL(0x00088D80u, sub_00088D80); /* call 0x00088D80 */

loc_002EA799: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA7A0: ;
    PUSH32(esp, 0);
    goto loc_002EA804;

loc_002EA7A4: ;
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002EA7CCu); RECOMP_ABI_CALL(0x00088D80u, sub_00088D80); /* call 0x00088D80 */

loc_002EA7CC: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA7D3: ;
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EA7FBu); RECOMP_ABI_CALL(0x00088D80u, sub_00088D80); /* call 0x00088D80 */

loc_002EA7FB: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA802: ;
    PUSH32(esp, 1);

loc_002EA804: ;
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA82Au); RECOMP_ABI_CALL(0x00088D80u, sub_00088D80); /* call 0x00088D80 */

loc_002EA82A: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA831: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002EA849u); RECOMP_ABI_CALL(0x000865E0u, sub_000865E0); /* call 0x000865E0 */

loc_002EA849: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA850: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA856
 * Original: 0x002EA856 - 0x002EA9AA (340 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA856(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA856: ;
    edi = edi;
    MEM32(eax + -1485766610) = MEM32(eax + -1485766610) ^ ebp;
    _fa = (uint32_t)(MEM32(eax + -1485766610)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -1543491929) = MEM8(eax + -1543491929) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + -1543491929)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    ecx = _rc; }
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    ecx = _rc; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x2E (8-bit) */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + 0x48A124EC) = MEM8(ebx + 0x48A124EC) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + 0x48A124EC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi = ebp;
    edx = MEM32(0x758D4C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x696528);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x002EA89Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA89C: ;
    edi = eax;
    PUSH32(esp, 0x002EA8A3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8A3: ;
    ebx = eax;
    PUSH32(esp, 0x002EA8AAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8AA: ;
    ebp = eax;
    PUSH32(esp, 0x002EA8B1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8B1: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002EA8BAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8BA: ;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EA8E2; /* jne: not equal / not zero */

loc_002EA8D8: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002EA8EA;

loc_002EA8E2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002EA8EA: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x69652C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x696550);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758E24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x758D64);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(0x758D68) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002EA971; /* jne: not equal / not zero */

loc_002EA967: ;
    MEM32(0x758E24) = 1;

loc_002EA971: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = ebp;
    esi = esp + 0x40;
    PUSH32(esp, 0x002EA992u); RECOMP_ABI_CALL(0x002EA750u, sub_002EA750); /* call 0x002EA750 */

loc_002EA992: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA998u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EA998: ;
    eax = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EA870
 * Original: 0x002EA870 - 0x002EA9AA (314 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA870: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x696528);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x002EA89Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA89C: ;
    edi = eax;
    PUSH32(esp, 0x002EA8A3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8A3: ;
    ebx = eax;
    PUSH32(esp, 0x002EA8AAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8AA: ;
    ebp = eax;
    PUSH32(esp, 0x002EA8B1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8B1: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002EA8BAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8BA: ;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EA8E2; /* jne: not equal / not zero */

loc_002EA8D8: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002EA8EA;

loc_002EA8E2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002EA8EA: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x69652C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x696550);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758E24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x758D64);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(0x758D68) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002EA971; /* jne: not equal / not zero */

loc_002EA967: ;
    MEM32(0x758E24) = 1;

loc_002EA971: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = ebp;
    esi = esp + 0x40;
    PUSH32(esp, 0x002EA992u); RECOMP_ABI_CALL(0x002EA750u, sub_002EA750); /* call 0x002EA750 */

loc_002EA992: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA998u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EA998: ;
    eax = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EA9B0
 * Original: 0x002EA9B0 - 0x002EAB38 (392 bytes, 166 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA9B0(void)
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

loc_002EA9B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(eax + 8)); /* fld float */
    PUSH32(esp, ebx);
    fp_push(MEMF(eax + 4)); /* fld float */
    ebx = MEM32(0x44AA20);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, ebp);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ebp = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EAB30; /* jnp: not parity */

loc_002EA9FF: ;
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 8); /* divss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_002EAB30; /* ja: above (unsigned >) */

loc_002EAA45: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2EAB38); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002EAA4Cu) goto loc_002EAA4C;
    if (_jt == 0x002EAA73u) goto loc_002EAA73;
    if (_jt == 0x002EAA9Au) goto loc_002EAA9A;
    if (_jt == 0x002EAAC1u) goto loc_002EAAC1;
    if (_jt == 0x002EAAE8u) goto loc_002EAAE8;
    if (_jt == 0x002EAB0Fu) goto loc_002EAB0F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002EAA4C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAA6Au); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EAA6A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAA73: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAA91u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EAA91: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAA9A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAAB8u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EAAB8: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAAC1: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAADFu); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EAADF: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAAE8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAB06u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EAB06: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAB0F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAB27u); RECOMP_ABI_CALL(0x000865E0u, sub_000865E0); /* call 0x000865E0 */

loc_002EAB27: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAB30: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EAB50
 * Original: 0x002EAB50 - 0x002EAC30 (224 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EAB50: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EAB5Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAB5C: ;
    edi = eax;
    PUSH32(esp, 0x002EAB63u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAB63: ;
    ebx = eax;
    PUSH32(esp, 0x002EAB6Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAB6A: ;
    ebp = eax;
    PUSH32(esp, 0x002EAB71u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAB71: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x696530);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x758D6C);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758E20);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x758D4C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_002EAC00; /* jne: not equal / not zero */

loc_002EABF6: ;
    MEM32(0x758E20) = 1;

loc_002EAC00: ;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    edx = ebp;
    esi = eax;
    edi = esp + 0x28;
    PUSH32(esp, 0x002EAC16u); RECOMP_ABI_CALL(0x002EA9B0u, sub_002EA9B0); /* call 0x002EA9B0 */

loc_002EAC16: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EAC1Cu); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EAC1C: ;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EAC30
 * Original: 0x002EAC30 - 0x002EAD26 (246 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAC30(void)
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

loc_002EAC30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(eax + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, ebx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ebx = MEM32(0x44AA20);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, ebp);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    ebp = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_002EAD1D; /* ja: above (unsigned >) */

loc_002EACA6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2EAD28); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002EACADu) goto loc_002EACAD;
    if (_jt == 0x002EACB5u) goto loc_002EACB5;
    if (_jt == 0x002EACB9u) goto loc_002EACB9;
    if (_jt == 0x002EACC1u) goto loc_002EACC1;
    if (_jt == 0x002EACC9u) goto loc_002EACC9;
    if (_jt == 0x002EACFBu) goto loc_002EACFB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002EACAD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    goto loc_002EACCF;

loc_002EACB5: ;
    PUSH32(esp, 0);
    goto loc_002EACCB;

loc_002EACB9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    goto loc_002EACCF;

loc_002EACC1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    goto loc_002EACCF;

loc_002EACC9: ;
    PUSH32(esp, 1);

loc_002EACCB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);

loc_002EACCF: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EACF1u); RECOMP_ABI_CALL(0x00088D80u, sub_00088D80); /* call 0x00088D80 */

loc_002EACF1: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EACFB: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAD13u); RECOMP_ABI_CALL(0x000865E0u, sub_000865E0); /* call 0x000865E0 */

loc_002EAD13: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAD1D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EAD26
 * Original: 0x002EAD26 - 0x002EAE4B (293 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAD26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EAD26: ;
    edi = edi;
    RECOMP_UNIMPL("sti", 0x002EAD28u); /* TODO: sti */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + -1258279252) = MEM8(ebp + -1258279252) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -1258279252)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -1056952660) = MEM8(ecx + -1056952660) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ecx + -1056952660)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + 0x48A11CEC) = MEM8(ebx + 0x48A11CEC) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + 0x48A11CEC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696528);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = esi;
    PUSH32(esp, 0x002EAD6Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD6C: ;
    ebx = eax;
    PUSH32(esp, 0x002EAD73u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD73: ;
    ebp = eax;
    PUSH32(esp, 0x002EAD7Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD7A: ;
    esi = eax;
    PUSH32(esp, 0x002EAD81u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD81: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002EAD8Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD8A: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x758D6C);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758E20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EAE19; /* jne: not equal / not zero */

loc_002EAE0F: ;
    MEM32(0x758E20) = 1;

loc_002EAE19: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = esi;
    esi = eax;
    eax = esp + 0x34;
    PUSH32(esp, 0x002EAE33u); RECOMP_ABI_CALL(0x002EAC30u, sub_002EAC30); /* call 0x002EAC30 */

loc_002EAE33: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EAE39u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EAE39: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EAD40
 * Original: 0x002EAD40 - 0x002EAE4B (267 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EAD40: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696528);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = esi;
    PUSH32(esp, 0x002EAD6Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD6C: ;
    ebx = eax;
    PUSH32(esp, 0x002EAD73u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD73: ;
    ebp = eax;
    PUSH32(esp, 0x002EAD7Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD7A: ;
    esi = eax;
    PUSH32(esp, 0x002EAD81u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD81: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002EAD8Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD8A: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x758D6C);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758E20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EAE19; /* jne: not equal / not zero */

loc_002EAE0F: ;
    MEM32(0x758E20) = 1;

loc_002EAE19: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = esi;
    esi = eax;
    eax = esp + 0x34;
    PUSH32(esp, 0x002EAE33u); RECOMP_ABI_CALL(0x002EAC30u, sub_002EAC30); /* call 0x002EAC30 */

loc_002EAE33: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EAE39u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EAE39: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EAE50
 * Original: 0x002EAE50 - 0x002EAE71 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAE50(void)
{

loc_002EAE50: ;
    ecx = MEM32(0x44AA20);
    edx = MEM32(ecx + 0x2C0);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x2C4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x2C8);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002EAE80
 * Original: 0x002EAE80 - 0x002EAEF4 (116 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAE80: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x44AA20);
    esi = MEM32(eax + 0x2C8);
    edx = MEM32(eax + 0x2C4);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax + 0x2C0);
    eax = edi + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
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
    esp += 4; return; /* ret */

}

/**
 * sub_002EAF00
 * Original: 0x002EAF00 - 0x002EAF21 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAF00(void)
{

loc_002EAF00: ;
    ecx = MEM32(0x44AA20);
    edx = MEM32(ecx + 0x2CC);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x2D0);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x2D4);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002EAF30
 * Original: 0x002EAF30 - 0x002EAFA4 (116 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAF30: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x44AA20);
    esi = MEM32(eax + 0x2D4);
    edx = MEM32(eax + 0x2D0);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax + 0x2CC);
    eax = edi + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
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
    esp += 4; return; /* ret */

}

/**
 * sub_002EAFB0
 * Original: 0x002EAFB0 - 0x002EB021 (113 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAFB0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 6 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002EAFE2; /* je: equal / zero */

loc_002EAFD4: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    edx = ZX16(MEM16(edx + 0x10));
    goto loc_002EAFE4;

loc_002EAFE2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EAFE4: ;
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
 * sub_002EB030
 * Original: 0x002EB030 - 0x002EB081 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002EB036u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB036: ;
    ebx = eax;
    PUSH32(esp, 0x002EB03Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB03D: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB078; /* je: equal / zero */

loc_002EB062: ;
    edx = MEM32(ecx + 0x18);
    edx = MEM32(edx);
    edx = MEM32(edx + 4);
    MEM8(edx + 0x18) = LO8(ebx);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    MEM8(ecx + 0x19) = LO8(eax);

loc_002EB078: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EB090
 * Original: 0x002EB090 - 0x002EB0D4 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB090: ;
    PUSH32(esp, 0x002EB095u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB095: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB0CC; /* je: equal / zero */

loc_002EB0BA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + 0x1C) = edx;

loc_002EB0CC: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB0E0
 * Original: 0x002EB0E0 - 0x002EB105 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB0E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB104; /* je: equal / zero */

loc_002EB0E4: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB104; /* je: equal / zero */

loc_002EB0EB: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB104; /* je: equal / zero */

loc_002EB0F1: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB104; /* je: equal / zero */

loc_002EB0F8: ;
    eax = ~eax;
    SET_LO16(eax, LO16(eax) & MEM16(ecx + 0x14));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0x14) = LO16(eax);

loc_002EB104: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EB110
 * Original: 0x002EB110 - 0x002EB168 (88 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB110: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB116u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB116: ;
    esi = eax;
    PUSH32(esp, 0x002EB11Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB11D: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB15F; /* je: equal / zero */

loc_002EB13F: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB15F; /* je: equal / zero */

loc_002EB146: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB15F; /* je: equal / zero */

loc_002EB14C: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB15F; /* je: equal / zero */

loc_002EB153: ;
    esi = ~esi;
    SET_LO16(esi, LO16(esi) & MEM16(ecx + 0x14));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0x14) = LO16(esi);

loc_002EB15F: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EB170
 * Original: 0x002EB170 - 0x002EB1B7 (71 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB170: ;
    PUSH32(esp, 0x002EB175u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB175: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1AF; /* je: equal / zero */

loc_002EB197: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1AF; /* je: equal / zero */

loc_002EB19E: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1AF; /* je: equal / zero */

loc_002EB1A4: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1AF; /* je: equal / zero */

loc_002EB1AB: ;
    MEM16(ecx + 0x14) = LO16(eax);

loc_002EB1AF: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB1C0
 * Original: 0x002EB1C0 - 0x002EB1E0 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002EB1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB1C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1DD; /* je: equal / zero */

loc_002EB1C4: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1DD; /* je: equal / zero */

loc_002EB1CB: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1DD; /* je: equal / zero */

loc_002EB1D1: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1DD; /* je: equal / zero */

loc_002EB1D8: ;
    eax = ZX16(MEM16(eax + 0x14));
    esp += 4; return; /* ret */

loc_002EB1DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB1E0
 * Original: 0x002EB1E0 - 0x002EB260 (128 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB1E0: ;
    eax = MEM32(0x758D70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB21B; /* je: equal / zero */

loc_002EB201: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB21B; /* je: equal / zero */

loc_002EB208: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB21B; /* je: equal / zero */

loc_002EB20E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB21B; /* je: equal / zero */

loc_002EB215: ;
    edx = ZX16(MEM16(eax + 0x14));
    goto loc_002EB21D;

loc_002EB21B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EB21D: ;
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
 * sub_002EB260
 * Original: 0x002EB260 - 0x002EB285 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB260: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB284; /* je: equal / zero */

loc_002EB264: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB284; /* je: equal / zero */

loc_002EB26B: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB284; /* je: equal / zero */

loc_002EB271: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB284; /* je: equal / zero */

loc_002EB278: ;
    eax = ~eax;
    SET_LO16(eax, LO16(eax) & MEM16(ecx + 0x10));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0x10) = LO16(eax);

loc_002EB284: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EB290
 * Original: 0x002EB290 - 0x002EB2E8 (88 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB290: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB296u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB296: ;
    esi = eax;
    PUSH32(esp, 0x002EB29Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB29D: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB2DF; /* je: equal / zero */

loc_002EB2BF: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB2DF; /* je: equal / zero */

loc_002EB2C6: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB2DF; /* je: equal / zero */

loc_002EB2CC: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB2DF; /* je: equal / zero */

loc_002EB2D3: ;
    esi = ~esi;
    SET_LO16(esi, LO16(esi) & MEM16(ecx + 0x10));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0x10) = LO16(esi);

loc_002EB2DF: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EB2F0
 * Original: 0x002EB2F0 - 0x002EB329 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB2F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB328; /* je: equal / zero */

loc_002EB2F4: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB328; /* je: equal / zero */

loc_002EB2FB: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB328; /* je: equal / zero */

loc_002EB301: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB328; /* je: equal / zero */

loc_002EB308: ;
    eax = MEM32(eax + 0x20);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    MEM32(0x431048) = 0;

loc_002EB328: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EB330
 * Original: 0x002EB330 - 0x002EB3B5 (133 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB330: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x696530);
    PUSH32(esp, edi);
    edi = MEM32(0x758D6C);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D70) = edi;
    edi = MEM32(0x758D64);
    MEM32(0x758D68) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB3AB; /* je: equal / zero */

loc_002EB37F: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB3AB; /* je: equal / zero */

loc_002EB386: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB3AB; /* je: equal / zero */

loc_002EB38C: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB3AB; /* je: equal / zero */

loc_002EB393: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = esi;
    MEM32(0x431048) = 0;

loc_002EB3AB: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EB3C0
 * Original: 0x002EB3C0 - 0x002EB431 (113 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB3C0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002EB3F2; /* je: equal / zero */

loc_002EB3E4: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 8);
    edx = ZX8(MEM8(edx + 1));
    goto loc_002EB3F4;

loc_002EB3F2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EB3F4: ;
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
 * sub_002EB440
 * Original: 0x002EB440 - 0x002EB473 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB440: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, MEM8(esp + 8));
    if (CMP_EQ(_fa, _fb)) goto loc_002EB472; /* je: equal / zero */

loc_002EB448: ;
    ecx = MEM32(edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB472; /* je: equal / zero */

loc_002EB44F: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB472; /* je: equal / zero */

loc_002EB455: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB472; /* je: equal / zero */

loc_002EB45C: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x100 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB472; /* je: equal / zero */

loc_002EB464: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 1) = LO8(eax);

loc_002EB472: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EB480
 * Original: 0x002EB480 - 0x002EB4E0 (96 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002EB486u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB486: ;
    ebx = eax;
    PUSH32(esp, 0x002EB48Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB48D: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D70);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D64);
    MEM32(0x758D68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB4D7; /* je: equal / zero */

loc_002EB4AF: ;
    ecx = MEM32(edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB4D7; /* je: equal / zero */

loc_002EB4B6: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB4D7; /* je: equal / zero */

loc_002EB4BC: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB4D7; /* je: equal / zero */

loc_002EB4C3: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x100 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB4D7; /* je: equal / zero */

loc_002EB4CB: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(ebx, ~LO8(ebx));
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 1) = LO8(ebx);

loc_002EB4D7: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EB4E0
 * Original: 0x002EB4E0 - 0x002EB559 (121 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB4E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
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
    MEM32(esp) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 4) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(esp + 0xC) = eax;
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002EB53Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB53E: ;
    PUSH32(esp, eax);
    edx = esp + 8;
    eax = esi;
    PUSH32(esp, 0x002EB54Au); RECOMP_ABI_CALL(0x000927E0u, sub_000927E0); /* call 0x000927E0 */

loc_002EB54A: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_002EB560
 * Original: 0x002EB560 - 0x002EB5D9 (121 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB560: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
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
    MEM32(esp) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 4) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(esp + 0xC) = eax;
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002EB5BEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB5BE: ;
    PUSH32(esp, eax);
    edx = esp + 8;
    eax = esi;
    PUSH32(esp, 0x002EB5CAu); RECOMP_ABI_CALL(0x00092A60u, sub_00092A60); /* call 0x00092A60 */

loc_002EB5CA: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_002EB5E0
 * Original: 0x002EB5E0 - 0x002EB62F (79 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB5E0: ;
    PUSH32(esp, 0x002EB5E5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB5E5: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB627; /* je: equal / zero */

loc_002EB60A: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    ecx = MEM32(ecx + 8);
    eax = ZX8(LO8(eax));
    eax = ZX8(MEM8(edx + eax));
    eax = MEM32(ecx + eax * 4);
    MEM8(eax) = MEM8(eax) | 0x10;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_002EB627: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB630
 * Original: 0x002EB630 - 0x002EB658 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002EB630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB630: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB655; /* je: equal / zero */

loc_002EB637: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB655; /* je: equal / zero */

loc_002EB640: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB655; /* je: equal / zero */

loc_002EB647: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB655; /* je: equal / zero */

loc_002EB64E: ;
    ecx = MEM32(eax);
    eax = ZX8(MEM8(ecx + 1));
    esp += 4; return; /* ret */

loc_002EB655: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB660
 * Original: 0x002EB660 - 0x002EB6E2 (130 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB660: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002EB6A3; /* je: equal / zero */

loc_002EB684: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB6A3; /* je: equal / zero */

loc_002EB68D: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB6A3; /* je: equal / zero */

loc_002EB694: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB6A3; /* je: equal / zero */

loc_002EB69B: ;
    ecx = MEM32(eax);
    edx = ZX8(MEM8(ecx + 1));
    goto loc_002EB6A5;

loc_002EB6A3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EB6A5: ;
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
 * sub_002EB6F0
 * Original: 0x002EB6F0 - 0x002EB73F (79 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB6F0: ;
    PUSH32(esp, 0x002EB6F5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB6F5: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB737; /* je: equal / zero */

loc_002EB71A: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    ecx = MEM32(ecx + 8);
    eax = ZX8(LO8(eax));
    eax = ZX8(MEM8(edx + eax));
    eax = MEM32(ecx + eax * 4);
    MEM8(eax) = MEM8(eax) & 0xEF;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_002EB737: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB740
 * Original: 0x002EB740 - 0x002EB7AD (109 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB740: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EB762u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB762: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x002EB76Au); RECOMP_ABI_CALL(0x00092900u, sub_00092900); /* call 0x00092900 */

loc_002EB76A: ;
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
 * sub_002EB7B0
 * Original: 0x002EB7B0 - 0x002EB84E (158 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB7B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB7B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EB7EBu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB7EB: ;
    PUSH32(esp, eax);
    esi = esp + 0xC;
    ecx = edi;
    PUSH32(esp, 0x002EB7F7u); RECOMP_ABI_CALL(0x00092970u, sub_00092970); /* call 0x00092970 */

loc_002EB7F7: ;
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
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_002EB850
 * Original: 0x002EB850 - 0x002EB8E4 (148 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB850: ;
    PUSH32(esp, 0x002EB855u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB855: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB8A5; /* je: equal / zero */

loc_002EB87A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002EB8A5; /* jg: greater (signed >) */

loc_002EB87F: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    eax = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(eax + edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002EB8A5; /* ja: above (unsigned >) */

loc_002EB896: ;
    ecx = MEM32(ecx + 8);
    eax = ZX8(LO8(eax));
    edx = MEM32(ecx + eax * 4);
    edx = ZX8(MEM8(edx + 1));
    goto loc_002EB8A7;

loc_002EB8A5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EB8A7: ;
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
 * sub_002EB8F0
 * Original: 0x002EB8F0 - 0x002EB98C (156 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB8F0: ;
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x600) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x600 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB8FE; /* je: equal / zero */

loc_002EB8F9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002EB918; /* jle: less or equal (signed <=) */

loc_002EB8FE: ;
    esi = MEM32(0x64506C);
    MEM32(ecx) = esi;
    esi = MEM32(0x645070);
    MEM32(ecx + 4) = esi;
    esi = MEM32(0x645074);
    MEM32(ecx + 8) = esi;

loc_002EB918: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax);
    eax = MEM32(eax + 4);
    esi = MEM32(eax);
    esi = MEM32(esi + 8);
    edx = ZX8(LO8(edx));
    SET_LO8(edx, MEM8(edx + esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xF (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EB94A; /* jbe: below or equal (unsigned <=) */

loc_002EB930: ;
    esi = MEM32(0x64506C);
    MEM32(ecx) = esi;
    esi = MEM32(0x645070);
    MEM32(ecx + 4) = esi;
    esi = MEM32(0x645074);
    MEM32(ecx + 8) = esi;

loc_002EB94A: ;
    eax = MEM32(eax + 8);
    edx = ZX8(LO8(edx));
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 1 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002EB974; /* je: equal / zero */

loc_002EB95A: ;
    edx = MEM32(0x64506C);
    MEM32(ecx) = edx;
    eax = MEM32(0x645070);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x645074);
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

loc_002EB974: ;
    eax = MEM32(eax + 4);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002EB990
 * Original: 0x002EB990 - 0x002EBA15 (133 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB990: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EB9B5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB9B5: ;
    edx = eax;
    ecx = esp + 4;
    eax = esi;
    PUSH32(esp, 0x002EB9C2u); RECOMP_ABI_CALL(0x002EB8F0u, sub_002EB8F0); /* call 0x002EB8F0 */

loc_002EB9C2: ;
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
 * sub_002EBA20
 * Original: 0x002EBA20 - 0x002EBAB9 (153 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBA20: ;
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x600) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0x600 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EBA2E; /* je: equal / zero */

loc_002EBA29: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002EBA48; /* jle: less or equal (signed <=) */

loc_002EBA2E: ;
    esi = MEM32(0x64506C);
    MEM32(eax) = esi;
    esi = MEM32(0x645070);
    MEM32(eax + 4) = esi;
    esi = MEM32(0x645074);
    MEM32(eax + 8) = esi;

loc_002EBA48: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    esi = MEM32(ecx);
    esi = MEM32(esi + 8);
    edx = ZX8(LO8(edx));
    SET_LO8(edx, MEM8(edx + esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xF (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EBA7A; /* jbe: below or equal (unsigned <=) */

loc_002EBA60: ;
    esi = MEM32(0x64506C);
    MEM32(eax) = esi;
    esi = MEM32(0x645070);
    MEM32(eax + 4) = esi;
    esi = MEM32(0x645074);
    MEM32(eax + 8) = esi;

loc_002EBA7A: ;
    ecx = MEM32(ecx + 8);
    edx = ZX8(LO8(edx));
    ecx = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 1 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002EBAA5; /* je: equal / zero */

loc_002EBA8A: ;
    edx = MEM32(0x64506C);
    MEM32(eax) = edx;
    ecx = MEM32(0x645070);
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x645074);
    MEM32(eax + 8) = edx;
    esp += 4; return; /* ret */

loc_002EBAA5: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002EBAC0
 * Original: 0x002EBAC0 - 0x002EBB45 (133 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBAC0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EBAE5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBAE5: ;
    edx = eax;
    eax = esp + 4;
    ecx = esi;
    PUSH32(esp, 0x002EBAF2u); RECOMP_ABI_CALL(0x002EBA20u, sub_002EBA20); /* call 0x002EBA20 */

loc_002EBAF2: ;
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
 * sub_002EBB50
 * Original: 0x002EBB50 - 0x002EBBE9 (153 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBB50: ;
    PUSH32(esp, 0x002EBB55u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBB55: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EBBAA; /* je: equal / zero */

loc_002EBB7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002EBBAA; /* jg: greater (signed >) */

loc_002EBB7F: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    eax = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(eax + edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EBB9B; /* jne: not equal / not zero */

loc_002EBB96: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002EBBAC;

loc_002EBB9B: ;
    ecx = MEM32(ecx + 8);
    eax = ZX8(LO8(eax));
    edx = MEM32(ecx + eax * 4);
    edx = ZX8(MEM8(edx + 3));
    goto loc_002EBBAC;

loc_002EBBAA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EBBAC: ;
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
 * sub_002EBBF0
 * Original: 0x002EBBF0 - 0x002EBC53 (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBBF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002EBBF6u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBBF6: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x002EBBFDu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBBFD: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EBC4A; /* je: equal / zero */

loc_002EBC22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002EBC4A; /* jg: greater (signed >) */

loc_002EBC27: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    eax = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(eax + edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBC4A; /* je: equal / zero */

loc_002EBC3E: ;
    ecx = MEM32(ecx + 8);
    eax = ZX8(LO8(eax));
    edx = MEM32(ecx + eax * 4);
    MEM8(edx + 3) = LO8(ebx);

loc_002EBC4A: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EBC60
 * Original: 0x002EBC60 - 0x002EBCB5 (85 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBC60: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002EBC9D; /* jne: not equal / not zero */

loc_002EBC85: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    eax = MEM32(esp + 4);
    MEMF(0x451C68) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EBC9D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */
    eax = MEM32(esp + 4);
    MEMF(0x451C68) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EBCC0
 * Original: 0x002EBCC0 - 0x002EBD79 (185 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBCC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EBCC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EBCCCu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBCCC: ;
    ebp = eax;
    PUSH32(esp, 0x002EBCD3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBCD3: ;
    ebx = MEM32(0x758D48);
    edi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 8 + 0x686428), 1 (16-bit) */
    esi = ebx + 0x696528;
    if (CMP_NE(_fa, _fb)) goto loc_002EBCFA; /* jne: not equal / not zero */

loc_002EBCF4: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi); /* cvtsi2ss */
    goto loc_002EBCFE;

loc_002EBCFA: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */

loc_002EBCFE: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D70);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D64);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EBD32u); RECOMP_ABI_CALL(0x00082CF0u, sub_00082CF0); /* call 0x00082CF0 */

loc_002EBD32: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x68642C) = esi;
    MEM16(edi * 8 + 0x686428) = 3;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(0x758D4C) = edi;
    POP32(esp, edi);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EBD80
 * Original: 0x002EBD80 - 0x002EBE5D (221 bytes, 58 insns)
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
