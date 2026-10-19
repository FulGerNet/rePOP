/**
 * PoP SoT xbox-demo - base, chunk 0
 * Ubisoft Base library code no evidence assigns to one part
 * Functions: 183 (0x00272E20 - 0x0027EA10)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00272E20
 * Original: 0x00272E20 - 0x00272E23 (3 bytes, 1 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272E20(void)
{

loc_00272E20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00272E30
 * Original: 0x00272E30 - 0x00272ECF (159 bytes, 42 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272E30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296CF6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00272E59; /* jne: not equal / not zero */

loc_00272E52: ;
    PUSH32(esp, 0x00272E57u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00272E57: ;
    esi = eax;

loc_00272E59: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00272E64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272E5Eu); } /* indirect call */
    }

loc_00272E64: ;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(0x64CF78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272EAF; /* jne: not equal / not zero */

loc_00272E75: ;
    SET_LO8(ecx, MEM8(0x654300));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00272EAF; /* jne: not equal / not zero */

loc_00272E84: ;
    MEM32(0x654300) = MEM32(0x654300) | eax;
    _fa = (uint32_t)(MEM32(0x654300)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x00272E93u); RECOMP_ABI_CALL(0x002730F0u, sub_002730F0); /* call 0x002730F0 */

loc_00272E93: ;
    PUSH32(esp, 0x297890);
    MEM32(0x64CF78) = eax;
    MEM32(0x6542FC) = 0x64CF78;
    PUSH32(esp, 0x00272EACu); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00272EAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00272EAF: ;
    edi = MEM32(0x64CF78);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00272EBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272EB6u); } /* indirect call */
    }

loc_00272EBC: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272ED0
 * Original: 0x00272ED0 - 0x00272F79 (169 bytes, 44 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272ED0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296CD6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00272EF9; /* jne: not equal / not zero */

loc_00272EF2: ;
    PUSH32(esp, 0x00272EF7u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00272EF7: ;
    esi = eax;

loc_00272EF9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00272F04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272EFEu); } /* indirect call */
    }

loc_00272F04: ;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(0x64CF7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272F59; /* jne: not equal / not zero */

loc_00272F15: ;
    SET_LO8(ecx, MEM8(0x6542F8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00272F59; /* jne: not equal / not zero */

loc_00272F24: ;
    MEM32(0x6542F8) = MEM32(0x6542F8) | eax;
    _fa = (uint32_t)(MEM32(0x6542F8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x332A24);
    MEM8(esp + 0x1C) = LO8(eax);
    PUSH32(esp, 0x00272F3Du); RECOMP_ABI_CALL(0x00273160u, sub_00273160); /* call 0x00273160 */

loc_00272F3D: ;
    PUSH32(esp, 0x2978A0);
    MEM32(0x64CF7C) = eax;
    MEM32(0x6542F4) = 0x64CF7C;
    PUSH32(esp, 0x00272F56u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00272F56: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00272F59: ;
    edi = MEM32(0x64CF7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00272F66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272F60u); } /* indirect call */
    }

loc_00272F66: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272F80
 * Original: 0x00272F80 - 0x00273041 (193 bytes, 54 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272F80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296CB6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00272FA9; /* jne: not equal / not zero */

loc_00272FA2: ;
    PUSH32(esp, 0x00272FA7u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00272FA7: ;
    esi = eax;

loc_00272FA9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00272FB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272FAEu); } /* indirect call */
    }

loc_00272FB4: ;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273021; /* jne: not equal / not zero */

loc_00272FC5: ;
    _fa = (uint32_t)(MEM8(0x6542F0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x6542F0), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00273021; /* jne: not equal / not zero */

loc_00272FCE: ;
    ecx = MEM32(0x6542F0);
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(0x6542F0) = ecx;
    PUSH32(esp, 0);
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x00272FEAu); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_00272FEA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ebx = eax;
    PUSH32(esp, 0x00272FF8u); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_00272FF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edi = eax;
    PUSH32(esp, 0x00273004u); RECOMP_ABI_CALL(0x002731D0u, sub_002731D0); /* call 0x002731D0 */

loc_00273004: ;
    PUSH32(esp, 0x2978B0);
    MEM32(0x64CF80) = eax;
    MEM32(0x6542EC) = 0x64CF80;
    PUSH32(esp, 0x0027301Du); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_0027301D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_00273021: ;
    edi = MEM32(0x64CF80);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027302Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273028u); } /* indirect call */
    }

loc_0027302E: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273050
 * Original: 0x00273050 - 0x002730EA (154 bytes, 42 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273050: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296BF6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00273079; /* jne: not equal / not zero */

loc_00273072: ;
    PUSH32(esp, 0x00273077u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00273077: ;
    esi = eax;

loc_00273079: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00273084u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027307Eu); } /* indirect call */
    }

loc_00273084: ;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(0x64CF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002730CA; /* jne: not equal / not zero */

loc_00273095: ;
    SET_LO8(ecx, MEM8(0x654288));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002730CA; /* jne: not equal / not zero */

loc_002730A4: ;
    MEM32(0x654288) = MEM32(0x654288) | eax;
    _fa = (uint32_t)(MEM32(0x654288)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esp + 0x14) = LO8(eax);
    eax = 0x64CF88;
    edi = 0x654264;
    PUSH32(esp, 0x002730BDu); RECOMP_ABI_CALL(0x00273300u, sub_00273300); /* call 0x00273300 */

loc_002730BD: ;
    PUSH32(esp, 0x2978C0);
    PUSH32(esp, 0x002730C7u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_002730C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002730CA: ;
    edi = MEM32(0x64CF88);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002730D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002730D1u); } /* indirect call */
    }

loc_002730D7: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002730F0
 * Original: 0x002730F0 - 0x00273151 (97 bytes, 27 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002730F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002730F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296C8B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0027310Du); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_0027310D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x40C;
    ecx = eax;
    PUSH32(esp, 0x0027311Cu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027311C: ;
    MEM32(esp) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00273140; /* je: equal / zero */

loc_0027312B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273131u); RECOMP_ABI_CALL(0x002772C0u, sub_002772C0); /* call 0x002772C0 */

loc_00273131: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00273140: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273160
 * Original: 0x00273160 - 0x002731CB (107 bytes, 31 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273160: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296C8B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0027317Du); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_0027317D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x98;
    ecx = eax;
    PUSH32(esp, 0x0027318Cu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027318C: ;
    MEM32(esp) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_002731BA; /* je: equal / zero */

loc_0027319B: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002731ABu); RECOMP_ABI_CALL(0x00278170u, sub_00278170); /* call 0x00278170 */

loc_002731AB: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002731BA: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002731D0
 * Original: 0x002731D0 - 0x0027323B (107 bytes, 31 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002731D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002731D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296C8B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x002731EDu); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_002731ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x1C;
    ecx = eax;
    PUSH32(esp, 0x002731FCu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_002731FC: ;
    MEM32(esp) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0027322A; /* je: equal / zero */

loc_0027320B: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027321Bu); RECOMP_ABI_CALL(0x002790A0u, sub_002790A0); /* call 0x002790A0 */

loc_0027321B: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027322A: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273240
 * Original: 0x00273240 - 0x00273290 (80 bytes, 42 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00273240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00273240: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = MEM32(ebx);
    edi = ecx;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0027324Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027324Cu); } /* indirect call */
    }

loc_0027324F: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00273280; /* je: equal / zero */

loc_00273255: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi;
    if (CMP_AE(_fa, _fb)) ecx = edi; /* cmovae */
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
    edi = ebp;
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
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027327Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273277u); } /* indirect call */
    }

loc_0027327A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00273280: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    eax = ~eax;
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00273290
 * Original: 0x00273290 - 0x00273300 (112 bytes, 34 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273290: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002732B8; /* jne: not equal / not zero */

loc_002732B1: ;
    PUSH32(esp, 0x002732B6u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_002732B6: ;
    esi = eax;

loc_002732B8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 8) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002732C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002732BDu); } /* indirect call */
    }

loc_002732C3: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002732E7; /* je: equal / zero */

loc_002732D7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_002732E7; /* je: equal / zero */

loc_002732E1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002732E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002732E5u); } /* indirect call */
    }

loc_002732E7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002732EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002732E8u); } /* indirect call */
    }

loc_002732EE: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273300
 * Original: 0x00273300 - 0x0027334F (79 bytes, 24 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273300: ;
    PUSH32(esp, esi);
    MEM32(edi) = eax;
    esi = edi + 4;
    MEM32(esi) = 0x3329D0;
    eax = MEM32(0x64CF94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027331A; /* jne: not equal / not zero */

loc_00273315: ;
    PUSH32(esp, 0x0027331Au); RECOMP_ABI_CALL(0x00276660u, sub_00276660); /* call 0x00276660 */

loc_0027331A: ;
    _fa = (uint32_t)(MEM32(0x343DF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x343DF4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273337; /* jne: not equal / not zero */

loc_00273323: ;
    PUSH32(esp, 0x332AF0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0027332Fu); RECOMP_ABI_CALL(0x00272C60u, sub_00272C60); /* call 0x00272C60 */

loc_0027332F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x343DF4) = eax;

loc_00273337: ;
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi) = 0x332C80;
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x00273347u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273341u); } /* indirect call */
    }

loc_00273347: ;
    edx = MEM32(edi);
    MEM32(edx) = esi;
    eax = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00273350
 * Original: 0x00273350 - 0x00273386 (54 bytes, 17 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273350: ;
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273362; /* jne: not equal / not zero */

loc_0027335B: ;
    PUSH32(esp, 0x00273360u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00273360: ;
    esi = eax;

loc_00273362: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00273369u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273363u); } /* indirect call */
    }

loc_00273369: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273376; /* je: equal / zero */

loc_00273370: ;
    MEM32(eax) = 0;

loc_00273376: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027337Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273377u); } /* indirect call */
    }

loc_0027337D: ;
    MEM32(edi + 4) = 0x3329D0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00273390
 * Original: 0x00273390 - 0x002733AF (31 bytes, 11 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273390: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3329D0;
    if (TEST_Z(_fa, _fb)) goto loc_002733A9; /* je: equal / zero */

loc_002733A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002733A6u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_002733A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002733A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002733B0
 * Original: 0x002733B0 - 0x00273427 (119 bytes, 35 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002733B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002733B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x2E00);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x98);
    esi = edx + eax;
    edx = MEM32(esp + 0x14);
    ecx = edi + 1;
    MEM32(eax + 0x2E00) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x808) = ecx;
    ecx = MEM32(esi + 0x80C);
    MEM32(esi + 0x814) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esi + 0x804) = edx;
    MEM32(esi + 0x800) = edx;
    ebx = eax + 0x2E24;
    if (CMP_EQ(_fa, _fb)) goto loc_0027340F; /* je: equal / zero */

loc_002733FF: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0027340F; /* jne: not equal / not zero */

loc_00273404: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 8), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027340F; /* je: equal / zero */

loc_00273409: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0027340Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027340Du); } /* indirect call */
    }

loc_0027340F: ;
    MEM32(esi + 0x80C) = ebx;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x804) = MEM32(esi + 0x804) | 9;
    _fa = (uint32_t)(MEM32(esi + 0x804)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00273430
 * Original: 0x00273430 - 0x0027343F (15 bytes, 5 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273430: ;
    eax = MEM32(0x64CF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027343E; /* jne: not equal / not zero */

loc_00273439: ;
    g_seh_ebp = ebp; sub_00273050(); return; /* tail jmp 0x00273050 */

loc_0027343E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00273440
 * Original: 0x00273440 - 0x00273447 (7 bytes, 2 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273440(void)
{

loc_00273440: ;
    MEM32(ecx) = 0x332AFC;
    esp += 4; return; /* ret */

}

/**
 * sub_00273450
 * Original: 0x00273450 - 0x00273473 (35 bytes, 13 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273450: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x332AFC;
    if (TEST_Z(_fa, _fb)) goto loc_0027346D; /* je: equal / zero */

loc_00273460: ;
    PUSH32(esp, 0x00273465u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00273465: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027346Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027346Au); } /* indirect call */
    }

loc_0027346D: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273480
 * Original: 0x00273480 - 0x002734EE (110 bytes, 37 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273480: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2971E8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esp + 0x14) = eax;
    ecx = esi + 8;
    MEM32(esi) = 0x332B04;
    edx = edi;
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = eax;
    MEM8(ecx + 4) = LO8(eax);
    ebp = edx + 1;

loc_002734C0: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002734C0; /* jne: not equal / not zero */

loc_002734C7: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0x002734D1u); RECOMP_ABI_CALL(0x00275730u, sub_00275730); /* call 0x00275730 */

loc_002734D1: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x24) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002734F0
 * Original: 0x002734F0 - 0x0027355F (111 bytes, 32 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002734F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002734F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296E48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x332B04;
    MEM32(esp + 0x10) = 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00273537; /* jb: below (unsigned <) */

loc_00273521: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273536; /* je: equal / zero */

loc_00273529: ;
    PUSH32(esp, 0x0027352Eu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027352E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00273536u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273533u); } /* indirect call */
    }

loc_00273536: ;
    POP32(esp, edi);

loc_00273537: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x20) = 0xF;
    MEM32(esi + 0x1C) = 0;
    MEM8(esi + 0xC) = 0;
    MEM32(esi) = 0x332AFC;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273560
 * Original: 0x00273560 - 0x002735CC (108 bytes, 30 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273560: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2972B8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00273585u); RECOMP_ABI_CALL(0x00273480u, sub_00273480); /* call 0x00273480 */

loc_00273585: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x332B00;
    MEM32(esi + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273599; /* je: equal / zero */

loc_00273596: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00273599: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x24) = 1;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_002735BA; /* je: equal / zero */

loc_002735AC: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002735BA; /* jne: not equal / not zero */

loc_002735B4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002735BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002735B8u); } /* indirect call */
    }

loc_002735BA: ;
    ecx = MEM32(esp);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002735D0
 * Original: 0x002735D0 - 0x002735E6 (22 bytes, 9 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002735D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002735D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp) = 0;
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002735E4; /* je: equal / zero */

loc_002735E1: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002735E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002735F0
 * Original: 0x002735F0 - 0x002736BD (205 bytes, 72 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002735F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002735F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x29729B);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = ecx;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x00273620u); RECOMP_ABI_CALL(0x00273480u, sub_00273480); /* call 0x00273480 */

loc_00273620: ;
    MEM8(esp + 0x18) = 1;
    ecx = esi + 0x28;
    MEM32(esi) = 0x332AF8;
    eax = ebp;
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = ebx;
    MEM8(ecx + 4) = LO8(ebx);
    edi = eax + 1;

loc_00273640: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273640; /* jne: not equal / not zero */

loc_00273647: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x00273651u); RECOMP_ABI_CALL(0x00275730u, sub_00275730); /* call 0x00275730 */

loc_00273651: ;
    ebp = MEM32(esp + 0x2C);
    ecx = esi + 0x44;
    MEM8(esp + 0x18) = 2;
    eax = ebp;
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = ebx;
    MEM8(ecx + 4) = LO8(ebx);
    edi = eax + 1;
    /* nop */

loc_00273670: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273670; /* jne: not equal / not zero */

loc_00273677: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x00273681u); RECOMP_ABI_CALL(0x00275730u, sub_00275730); /* call 0x00275730 */

loc_00273681: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x60) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027368F; /* je: equal / zero */

loc_0027368C: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027368F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_002736A6; /* je: equal / zero */

loc_0027369B: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002736A6; /* jne: not equal / not zero */

loc_002736A0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002736A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002736A4u); } /* indirect call */
    }

loc_002736A6: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002736C0
 * Original: 0x002736C0 - 0x002736D6 (22 bytes, 9 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002736C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002736C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp) = 0;
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002736D4; /* je: equal / zero */

loc_002736D1: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002736D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002736E0
 * Original: 0x002736E0 - 0x00273745 (101 bytes, 37 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002736E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002736E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_002736FA; /* je: equal / zero */

loc_002736E7: ;
    PUSH32(esp, esi);
    eax = 0x100;
    edx = 0xFF;
    PUSH32(esp, 0x002736F7u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_002736F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002736FA: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00273709; /* je: equal / zero */

loc_00273701: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273701; /* jne: not equal / not zero */

loc_00273709: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0x100;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = 0xFF;
    PUSH32(esp, 0x00273725u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00273725: ;
    SET_LO8(ecx, MEM8(esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00273738; /* je: equal / zero */

loc_00273730: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273730; /* jne: not equal / not zero */

loc_00273738: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x100) = eax;
    eax = esi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273750
 * Original: 0x00273750 - 0x00273776 (38 bytes, 15 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273750: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00273758u); RECOMP_ABI_CALL(0x002734F0u, sub_002734F0); /* call 0x002734F0 */

loc_00273758: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273770; /* je: equal / zero */

loc_0027375F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273770; /* je: equal / zero */

loc_00273763: ;
    PUSH32(esp, 0x00273768u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00273768: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00273770u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027376Du); } /* indirect call */
    }

loc_00273770: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273780
 * Original: 0x00273780 - 0x002737A7 (39 bytes, 16 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273780: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00273789u); RECOMP_ABI_CALL(0x002737E0u, sub_002737E0); /* call 0x002737E0 */

loc_00273789: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002737A1; /* je: equal / zero */

loc_00273790: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002737A1; /* je: equal / zero */

loc_00273794: ;
    PUSH32(esp, 0x00273799u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00273799: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002737A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027379Eu); } /* indirect call */
    }

loc_002737A1: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002737B0
 * Original: 0x002737B0 - 0x002737D7 (39 bytes, 16 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002737B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002737B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002737B9u); RECOMP_ABI_CALL(0x00273840u, sub_00273840); /* call 0x00273840 */

loc_002737B9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002737D1; /* je: equal / zero */

loc_002737C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002737D1; /* je: equal / zero */

loc_002737C4: ;
    PUSH32(esp, 0x002737C9u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_002737C9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002737D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002737CEu); } /* indirect call */
    }

loc_002737D1: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002737E0
 * Original: 0x002737E0 - 0x00273838 (88 bytes, 25 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002737E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002737E0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297078);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = 0;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273817; /* je: equal / zero */

loc_00273809: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00273817; /* jne: not equal / not zero */

loc_00273811: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00273817u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273815u); } /* indirect call */
    }

loc_00273817: ;
    ecx = esi;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00273826u); RECOMP_ABI_CALL(0x002734F0u, sub_002734F0); /* call 0x002734F0 */

loc_00273826: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273840
 * Original: 0x00273840 - 0x002738F2 (178 bytes, 57 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273840: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x29705E);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 2;
    ecx = MEM32(esi + 0x60);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273878; /* je: equal / zero */

loc_0027386D: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00273878; /* jne: not equal / not zero */

loc_00273872: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00273878u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273876u); } /* indirect call */
    }

loc_00273878: ;
    MEM8(esp + 0x14) = 1;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00273897; /* jb: below (unsigned <) */

loc_00273883: ;
    edi = MEM32(esi + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273897; /* je: equal / zero */

loc_0027388A: ;
    PUSH32(esp, 0x0027388Fu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027388F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00273897u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273894u); } /* indirect call */
    }

loc_00273897: ;
    MEM32(esi + 0x5C) = 0xF;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x48) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(ebx);
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002738C2; /* jb: below (unsigned <) */

loc_002738AE: ;
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002738C2; /* je: equal / zero */

loc_002738B5: ;
    PUSH32(esp, 0x002738BAu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_002738BA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002738C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002738BFu); } /* indirect call */
    }

loc_002738C2: ;
    MEM32(esi + 0x40) = 0xF;
    MEM32(esi + 0x3C) = ebx;
    ecx = esi;
    MEM8(esi + 0x2C) = LO8(ebx);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x002738DEu); RECOMP_ABI_CALL(0x002734F0u, sub_002734F0); /* call 0x002734F0 */

loc_002738DE: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273900
 * Original: 0x00273900 - 0x0027397B (123 bytes, 39 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273900: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2972B8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0;
    eax = MEM32(edi + 0x200);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027394B; /* je: equal / zero */

loc_0027392C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027393E; /* je: equal / zero */

loc_00273930: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0027393E; /* jne: not equal / not zero */

loc_00273938: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0027393Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027393Cu); } /* indirect call */
    }

loc_0027393E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x200) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027394B; /* je: equal / zero */

loc_00273948: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027394B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00273969; /* je: equal / zero */

loc_00273957: ;
    eax = MEM32(esi + 8);
    ecx = esi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    if ((_fa != 0)) goto loc_00273969; /* jne: not equal / not zero */

loc_00273963: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00273969u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273967u); } /* indirect call */
    }

loc_00273969: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273980
 * Original: 0x00273980 - 0x002739E8 (104 bytes, 31 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00273980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273980: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027398Eu); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0027398E: ;
    eax = ebx + 0x1000;
    ecx = 0x40;
    esi = ebp;
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
    esi = ebp + 0x100;
    edi = eax + 0x100;
    ecx = 0x40;
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
    ecx = MEM32(ebp + 0x200);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x200) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002739C5; /* je: equal / zero */

loc_002739C2: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002739C5: ;
    ecx = MEM32(esp + 0x14);
    esi = ebx;
    MEM32(ebx + 0x1204) = ecx;
    MEM32(ebx + 0x1208) = 0;
    PUSH32(esp, 0x002739E0u); RECOMP_ABI_CALL(0x002739F0u, sub_002739F0); /* call 0x002739F0 */

loc_002739E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002739F0
 * Original: 0x002739F0 - 0x00273A4F (95 bytes, 36 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002739F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002739F0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_002739FF; /* je: equal / zero */

loc_002739F7: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002739F7; /* jne: not equal / not zero */

loc_002739FF: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0x1000;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = 0xFFF;
    ecx = 0x332B24;
    PUSH32(esp, 0x00273A1Cu); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00273A1C: ;
    SET_LO8(ecx, MEM8(esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00273A2F; /* je: equal / zero */

loc_00273A27: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273A27; /* jne: not equal / not zero */

loc_00273A2F: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = 0x1000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi + 0x1000;
    edx = 0xFFF;
    PUSH32(esp, 0x00273A4Du); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00273A4D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00273A50
 * Original: 0x00273A50 - 0x00273AFD (173 bytes, 47 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273A50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297426);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x34A64C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273A79; /* jne: not equal / not zero */

loc_00273A72: ;
    PUSH32(esp, 0x00273A77u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00273A77: ;
    edi = eax;

loc_00273A79: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00273A84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273A7Eu); } /* indirect call */
    }

loc_00273A84: ;
    MEM32(esp + 0x14) = 0;
    SET_LO8(ecx, MEM8(0x6543EC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00273AC1; /* jne: not equal / not zero */

loc_00273A9B: ;
    MEM32(0x6543EC) = MEM32(0x6543EC) | eax;
    _fa = (uint32_t)(MEM32(0x6543EC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x64CF8C);
    esi = 0x6543E8;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x00273AB4u); RECOMP_ABI_CALL(0x00274DB0u, sub_00274DB0); /* call 0x00274DB0 */

loc_00273AB4: ;
    PUSH32(esp, 0x2978D0);
    PUSH32(esp, 0x00273ABEu); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00273ABE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00273AC1: ;
    eax = MEM32(0x64CF8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273ADD; /* jne: not equal / not zero */

loc_00273ACA: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273ADD; /* je: equal / zero */

loc_00273AD3: ;
    ecx = 0x10;
    PUSH32(esp, 0x00273ADDu); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_00273ADD: ;
    esi = MEM32(0x64CF8C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00273AEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273AE4u); } /* indirect call */
    }

loc_00273AEA: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273B00
 * Original: 0x00273B00 - 0x00273BB3 (179 bytes, 52 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273B00: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2973FE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(esi + 0x104) = ebx;
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x10C) = ebx;
    eax = esi + 0x110;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x00273B40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273B3Au); } /* indirect call */
    }

loc_00273B40: ;
    edx = 0x332B20;
    eax = esi;
    SET_LO8(ecx, 0x2F);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00273B50;

    /* nop */

loc_00273B50: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273B50; /* jne: not equal / not zero */

loc_00273B5B: ;
    MEM8(eax) = LO8(ebx);
    eax = MEM32(0x64CF9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273B6B; /* jne: not equal / not zero */

loc_00273B66: ;
    PUSH32(esp, 0x00273B6Bu); RECOMP_ABI_CALL(0x00279F90u, sub_00279F90); /* call 0x00279F90 */

loc_00273B6B: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0x100000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273B7Bu); RECOMP_ABI_CALL(0x0027A040u, sub_0027A040); /* call 0x0027A040 */

loc_00273B7B: ;
    ecx = esi;
    PUSH32(esp, 0x00273B82u); RECOMP_ABI_CALL(0x00273BC0u, sub_00273BC0); /* call 0x00273BC0 */

loc_00273B82: ;
    PUSH32(esp, 0x3331FC);
    PUSH32(esp, 0x323DD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273B92u); RECOMP_ABI_CALL(0x002743C0u, sub_002743C0); /* call 0x002743C0 */

loc_00273B92: ;
    PUSH32(esp, 0x3331FC);
    ecx = esi;
    PUSH32(esp, 0x00273B9Eu); RECOMP_ABI_CALL(0x00274120u, sub_00274120); /* call 0x00274120 */

loc_00273B9E: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273BC0
 * Original: 0x00273BC0 - 0x00273C10 (80 bytes, 23 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273BC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x110;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00273BEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273BE5u); } /* indirect call */
    }

loc_00273BEB: ;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00273BF8u); RECOMP_ABI_CALL(0x00279A50u, sub_00279A50); /* call 0x00279A50 */

loc_00273BF8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00273BFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273BF9u); } /* indirect call */
    }

loc_00273BFF: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273C10
 * Original: 0x00273C10 - 0x00273E09 (505 bytes, 148 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273C10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x297451);
    PUSH32(esp, eax);
    eax = 0x151C;
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, 0x00273C2Fu); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_00273C2F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1534);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x110;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00273C4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273C45u); } /* indirect call */
    }

loc_00273C4B: ;
    ecx = MEM32(esp + 0x1540);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x100;
    edx = 0xFF;
    MEM32(esp + 0x1538) = ebx;
    PUSH32(esp, 0x00273C6Fu); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00273C6F: ;
    SET_LO8(eax, MEM8(esp + 0x1548));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    edi = esp + 0x1C;
    MEM8(esp + 0x13) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00273C90; /* je: equal / zero */

loc_00273C85: ;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1C), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273C90; /* jne: not equal / not zero */

loc_00273C8C: ;
    edi = esp + 0x1D;

loc_00273C90: ;
    eax = MEM32(0x64CF8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273C9E; /* jne: not equal / not zero */

loc_00273C99: ;
    PUSH32(esp, 0x00273C9Eu); RECOMP_ABI_CALL(0x00273A50u, sub_00273A50); /* call 0x00273A50 */

loc_00273C9E: ;
    esi = eax;

loc_00273CA0: ;
    _fa = (uint32_t)(MEM8(esp + 0x1544)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1544), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273CCF; /* je: equal / zero */

loc_00273CA9: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00273CC1; /* je: equal / zero */

loc_00273CB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273DB8; /* je: equal / zero */

loc_00273CB9: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273CB1; /* jne: not equal / not zero */

loc_00273CC1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00273CC3: ;
    SET_LO8(ecx, MEM8(eax + 1));
    edi = eax;
    MEM8(esp + 0x13) = LO8(ecx);
    MEM8(eax + 1) = LO8(ebx);

loc_00273CCF: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00273CD9u); RECOMP_ABI_CALL(0x00273EB0u, sub_00273EB0); /* call 0x00273EB0 */

loc_00273CD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273D7E; /* jne: not equal / not zero */

loc_00273CE1: ;
    MEM32(esp + 0x31C) = ebx;
    MEM8(esp + 0x11C) = LO8(ebx);
    MEM8(esp + 0x21C) = LO8(ebx);
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    edx = esi;
    MEM8(esp + 0x1538) = 1;
    PUSH32(esp, 0x00273D11u); RECOMP_ABI_CALL(0x002749F0u, sub_002749F0); /* call 0x002749F0 */

loc_00273D11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273DBF; /* jne: not equal / not zero */

loc_00273D19: ;
    eax = esp + 0x14;
    ecx = esp + 0x11C;
    PUSH32(esp, 0x00273D29u); RECOMP_ABI_CALL(0x000BE050u, sub_000BE050); /* call 0x000BE050 */

loc_00273D29: ;
    MEM8(esp + 0x1534) = 2;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    eax = esp + 0x11C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00273D40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273D3Du); } /* indirect call */
    }

loc_00273D40: ;
    MEM8(esp + 0x1534) = 1;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273D5E; /* je: equal / zero */

loc_00273D50: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00273D5E; /* jne: not equal / not zero */

loc_00273D58: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00273D5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273D5Cu); } /* indirect call */
    }

loc_00273D5E: ;
    MEM8(esp + 0x1534) = LO8(ebx);
    eax = MEM32(esp + 0x31C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273D7E; /* je: equal / zero */

loc_00273D70: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00273D7E; /* jne: not equal / not zero */

loc_00273D78: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00273D7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273D7Cu); } /* indirect call */
    }

loc_00273D7E: ;
    _fa = (uint32_t)(MEM8(esp + 0x1544)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1544), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273D96; /* je: equal / zero */

loc_00273D87: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(edi) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00273CA0; /* jne: not equal / not zero */

loc_00273D96: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00273D9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273D97u); } /* indirect call */
    }

loc_00273D9D: ;
    ecx = MEM32(esp + 0x152C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x1528) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1528;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00273DB8: ;
    eax = ecx;
    goto loc_00273CC3;

loc_00273DBF: ;
    PUSH32(esp, 3);
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    eax = 0x332B08;
    ebx = esp + 0x328;
    PUSH32(esp, 0x00273DDAu); RECOMP_ABI_CALL(0x00273980u, sub_00273980); /* call 0x00273980 */

loc_00273DDA: ;
    PUSH32(esp, 0x334E80);
    edx = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00273DE7u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_00273DE7: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(ecx + 0x1200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273E08; /* je: equal / zero */

loc_00273DFA: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00273E08; /* jne: not equal / not zero */

loc_00273E02: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00273E08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273E06u); } /* indirect call */
    }

loc_00273E08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00273DF0
 * Original: 0x00273DF0 - 0x00273E09 (25 bytes, 10 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273DF0: ;
    eax = MEM32(ecx + 0x1200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273E08; /* je: equal / zero */

loc_00273DFA: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00273E08; /* jne: not equal / not zero */

loc_00273E02: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00273E08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273E06u); } /* indirect call */
    }

loc_00273E08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00273E10
 * Original: 0x00273E10 - 0x00273E23 (19 bytes, 8 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273E10(void)
{

loc_00273E10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00273E1Du); RECOMP_ABI_CALL(0x00273E30u, sub_00273E30); /* call 0x00273E30 */

loc_00273E1D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273E30
 * Original: 0x00273E30 - 0x00273EA1 (113 bytes, 34 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273E30: ;
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebp + 0x1000;
    ebx = eax + 0x1000;
    ecx = 0x400;
    esi = ebp;
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
    esi = edx;
    ecx = 0x40;
    edi = ebx;
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
    esi = edx + 0x100;
    edi = ebx + 0x100;
    ecx = 0x40;
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
    edx = MEM32(edx + 0x200);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebx + 0x200) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00273E82; /* je: equal / zero */

loc_00273E7F: ;
    MEM32(edx + 8) = MEM32(edx + 8) + 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00273E82: ;
    ecx = MEM32(ebp + 0x1204);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x1204) = ecx;
    edx = MEM32(ebp + 0x1208);
    POP32(esp, ebp);
    MEM32(eax + 0x1208) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273EB0
 * Original: 0x00273EB0 - 0x00273FCA (282 bytes, 78 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273EB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296AC1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0x110;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00273EDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273ED8u); } /* indirect call */
    }

loc_00273EDE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x220) = ebx;
    MEM32(esp + 0x214) = ebx;
    MEM8(esp + 0x14) = LO8(ebx);
    MEM8(esp + 0x114) = LO8(ebx);
    ecx = MEM32(esp + 0x228);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edx = esi;
    MEM8(esp + 0x224) = 1;
    PUSH32(esp, 0x00273F14u); RECOMP_ABI_CALL(0x002749F0u, sub_002749F0); /* call 0x002749F0 */

loc_00273F14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273F88; /* jne: not equal / not zero */

loc_00273F18: ;
    eax = esp + 0xC;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00273F25u); RECOMP_ABI_CALL(0x000BE050u, sub_000BE050); /* call 0x000BE050 */

loc_00273F25: ;
    MEM8(esp + 0x220) = 2;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00273F39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273F36u); } /* indirect call */
    }

loc_00273F39: ;
    MEM8(esp + 0xB) = LO8(eax);
    MEM8(esp + 0x220) = 1;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273F5B; /* je: equal / zero */

loc_00273F4D: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00273F5B; /* jne: not equal / not zero */

loc_00273F55: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00273F5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273F59u); } /* indirect call */
    }

loc_00273F5B: ;
    MEM8(esp + 0x220) = LO8(ebx);
    eax = MEM32(esp + 0x214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273F7B; /* je: equal / zero */

loc_00273F6D: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00273F7B; /* jne: not equal / not zero */

loc_00273F75: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00273F7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273F79u); } /* indirect call */
    }

loc_00273F7B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00273F82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273F7Cu); } /* indirect call */
    }

loc_00273F82: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    goto loc_00273FB1;

loc_00273F88: ;
    MEM8(esp + 0x220) = LO8(ebx);
    eax = MEM32(esp + 0x214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273FA8; /* je: equal / zero */

loc_00273F9A: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00273FA8; /* jne: not equal / not zero */

loc_00273FA2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00273FA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273FA6u); } /* indirect call */
    }

loc_00273FA8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00273FAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00273FA9u); } /* indirect call */
    }

loc_00273FAF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00273FB1: ;
    ecx = MEM32(esp + 0x218);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x21C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273FD0
 * Original: 0x00273FD0 - 0x0027411F (335 bytes, 105 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273FD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296D4B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x128);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0x110;
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00274009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274003u); } /* indirect call */
    }

loc_00274009: ;
    MEM32(esp + 0x124) = 0;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027402D; /* je: equal / zero */

loc_0027401B: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00274026; /* jne: not equal / not zero */

loc_00274020: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00274026u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274024u); } /* indirect call */
    }

loc_00274026: ;
    MEM32(ebp) = 0;

loc_0027402D: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x130);
    eax = 0x100;
    edx = 0xFF;
    MEM8(esp + 0x1C) = 0;
    PUSH32(esp, 0x0027404Du); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_0027404D: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_00274068; /* je: equal / zero */

loc_0027405C: ;
    /* nop */

loc_00274060: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274060; /* jne: not equal / not zero */

loc_00274068: ;
    esi = MEM32(edi + 0x108);
    edi = MEM32(edi + 0x104);
    edx = esp + 0x18;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x118) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00274092u); RECOMP_ABI_CALL(0x00275290u, sub_00275290); /* call 0x00275290 */

loc_00274092: ;
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002740F8; /* je: equal / zero */

loc_0027409D: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0x10 (32-bit) */
    ecx = MEM32(esi + 0x1C);
    if (CMP_B(_fa, _fb)) goto loc_002740AD; /* jb: below (unsigned <) */

loc_002740A8: ;
    eax = MEM32(esi + 0xC);
    goto loc_002740B0;

loc_002740AD: ;
    eax = esi + 0xC;

loc_002740B0: ;
    MEM8(esp + 0x10) = 0;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x002740C4u); RECOMP_ABI_CALL(0x00275200u, sub_00275200); /* call 0x00275200 */

loc_002740C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002740F8; /* jne: not equal / not zero */

loc_002740CB: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002740ED; /* je: equal / zero */

loc_002740D2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002740E1; /* je: equal / zero */

loc_002740D6: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002740E1; /* jne: not equal / not zero */

loc_002740DB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002740E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002740DFu); } /* indirect call */
    }

loc_002740E1: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002740ED; /* je: equal / zero */

loc_002740EA: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002740ED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002740F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002740EEu); } /* indirect call */
    }

loc_002740F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00274104;

loc_002740F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002740FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002740F9u); } /* indirect call */
    }

loc_002740FF: ;
    eax = 3;

loc_00274104: ;
    ecx = MEM32(esp + 0x11C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00274120
 * Original: 0x00274120 - 0x002741BA (154 bytes, 46 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274120: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2969D8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x110;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027414Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274149u); } /* indirect call */
    }

loc_0027414F: ;
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0027415Du); RECOMP_ABI_CALL(0x00273EB0u, sub_00273EB0); /* call 0x00273EB0 */

loc_0027415D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027419A; /* je: equal / zero */

loc_00274161: ;
    PUSH32(esp, esi);
    eax = 0x100;
    edx = 0xFF;
    ecx = ebp;
    PUSH32(esp, 0x00274173u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00274173: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(esi + 0xFF) = 0;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00274184u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027417Eu); } /* indirect call */
    }

loc_00274184: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027419A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002741A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027419Bu); } /* indirect call */
    }

loc_002741A1: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 5;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002741C0
 * Original: 0x002741C0 - 0x002743B2 (498 bytes, 146 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002741C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002741C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297379);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ebx + 0x110;
    MEM32(esp + 0x128) = 0;
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002741FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002741F4u); } /* indirect call */
    }

loc_002741FA: ;
    ecx = MEM32(esp + 0x130);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM8(esp + 0x12C) = 1;
    eax = 0x100;
    edx = 0xFF;
    MEM8(esp + 0x20) = 0;
    PUSH32(esp, 0x00274222u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00274222: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x1C;
    if (CMP_EQ(_fa, _fb)) goto loc_00274239; /* je: equal / zero */

loc_00274231: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274231; /* jne: not equal / not zero */

loc_00274239: ;
    esi = MEM32(ebx + 0x108);
    ecx = esp + 0x1C;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esp + 0x120) = eax;
    eax = MEM32(ebx + 0x104);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00274263u); RECOMP_ABI_CALL(0x00275290u, sub_00275290); /* call 0x00275290 */

loc_00274263: ;
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002742D1; /* je: equal / zero */

loc_0027426E: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0x10 (32-bit) */
    ecx = MEM32(eax + 0x1C);
    if (CMP_B(_fa, _fb)) goto loc_0027427E; /* jb: below (unsigned <) */

loc_00274279: ;
    eax = MEM32(eax + 0xC);
    goto loc_00274281;

loc_0027427E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274281: ;
    MEM8(esp + 0xC) = 0;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00274295u); RECOMP_ABI_CALL(0x00275200u, sub_00275200); /* call 0x00275200 */

loc_00274295: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002742D1; /* jne: not equal / not zero */

loc_0027429C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002742A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027429Du); } /* indirect call */
    }

loc_002742A3: ;
    MEM32(esp + 0x128) = 0xFFFFFFFFu;
    eax = MEM32(esp + 0x134);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002742C7; /* je: equal / zero */

loc_002742B9: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002742C7; /* jne: not equal / not zero */

loc_002742C1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002742C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002742C5u); } /* indirect call */
    }

loc_002742C7: ;
    eax = 2;
    goto loc_00274398;

loc_002742D1: ;
    eax = MEM32(0x64CF78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002742DF; /* jne: not equal / not zero */

loc_002742DA: ;
    PUSH32(esp, 0x002742DFu); RECOMP_ABI_CALL(0x00272E30u, sub_00272E30); /* call 0x00272E30 */

loc_002742DF: ;
    edx = 0x2C;
    ecx = eax;
    PUSH32(esp, 0x002742EBu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_002742EB: ;
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x128) = 2;
    ebp = MEM32(esp + 0x134);
    if (CMP_EQ(_fa, _fb)) goto loc_00274328; /* je: equal / zero */

loc_00274302: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x1C) = esp;
    MEM32(ecx) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00274312; /* je: equal / zero */

loc_0027430F: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00274312: ;
    edi = MEM32(esp + 0x134);
    esi = eax;
    PUSH32(esp, 0x00274320u); RECOMP_ABI_CALL(0x00273560u, sub_00273560); /* call 0x00273560 */

loc_00274320: ;
    edi = MEM32(esp + 0x10);
    esi = eax;
    goto loc_0027432A;

loc_00274328: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027432A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00274335; /* je: equal / zero */

loc_00274332: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00274335: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    eax = ebx + 0x100;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM8(esp + 0x138) = 3;
    PUSH32(esp, 0x00274351u); RECOMP_ABI_CALL(0x00274EB0u, sub_00274EB0); /* call 0x00274EB0 */

loc_00274351: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x128) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0027436A; /* je: equal / zero */

loc_0027435D: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0027436A; /* jne: not equal / not zero */

loc_00274362: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0027436Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274368u); } /* indirect call */
    }

loc_0027436A: ;
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00274375u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027436Fu); } /* indirect call */
    }

loc_00274375: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x128) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00274396; /* je: equal / zero */

loc_00274384: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    if ((_fa != 0)) goto loc_00274396; /* jne: not equal / not zero */

loc_00274390: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00274396u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274394u); } /* indirect call */
    }

loc_00274396: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00274398: ;
    ecx = MEM32(esp + 0x120);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002743C0
 * Original: 0x002743C0 - 0x0027478F (975 bytes, 289 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002743C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002743C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297342);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x238;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x250);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0x110;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002743F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002743F1u); } /* indirect call */
    }

loc_002743F7: ;
    ecx = MEM32(esp + 0x25C);
    eax = esp + 0x40;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 0x254) = ebx;
    eax = 0x100;
    edx = 0xFF;
    MEM8(esp + 0x44) = LO8(ebx);
    PUSH32(esp, 0x0027441Fu); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_0027441F: ;
    SET_LO8(ecx, MEM8(esp + 0x44));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    eax = esp + 0x40;
    if (CMP_EQ(_fa, _fb)) goto loc_00274438; /* je: equal / zero */

loc_0027442E: ;
    edi = edi;

loc_00274430: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274430; /* jne: not equal / not zero */

loc_00274438: ;
    esi = MEM32(ebp + 0x108);
    ecx = esp + 0x40;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEM32(esp + 0x144) = eax;
    eax = MEM32(ebp + 0x104);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00274462u); RECOMP_ABI_CALL(0x00275290u, sub_00275290); /* call 0x00275290 */

loc_00274462: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002744AB; /* je: equal / zero */

loc_0027446D: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0x10 (32-bit) */
    ecx = MEM32(eax + 0x1C);
    if (CMP_B(_fa, _fb)) goto loc_0027447D; /* jb: below (unsigned <) */

loc_00274478: ;
    eax = MEM32(eax + 0xC);
    goto loc_00274480;

loc_0027447D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274480: ;
    MEM8(esp + 0x10) = LO8(ebx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    PUSH32(esp, 0x00274493u); RECOMP_ABI_CALL(0x00275200u, sub_00275200); /* call 0x00275200 */

loc_00274493: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002744AB; /* jne: not equal / not zero */

loc_0027449A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002744A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027449Bu); } /* indirect call */
    }

loc_002744A1: ;
    eax = 2;
    goto loc_00274774;

loc_002744AB: ;
    ecx = MEM32(esp + 0x260);
    eax = esp + 0x144;
    PUSH32(esp, eax);
    eax = 0x100;
    edx = 0xFF;
    MEM8(esp + 0x148) = LO8(ebx);
    PUSH32(esp, 0x002744D0u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_002744D0: ;
    SET_LO8(ecx, MEM8(esp + 0x148));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    eax = esp + 0x144;
    if (CMP_EQ(_fa, _fb)) goto loc_002744ED; /* je: equal / zero */

loc_002744E5: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002744E5; /* jne: not equal / not zero */

loc_002744ED: ;
    edi = MEM32(ebp + 0x108);
    ecx = esp + 0x144;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x144;
    PUSH32(esp, edx);
    MEM32(esp + 0x248) = eax;
    eax = MEM32(ebp + 0x104);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027451Du); RECOMP_ABI_CALL(0x00275290u, sub_00275290); /* call 0x00275290 */

loc_0027451D: ;
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274764; /* je: equal / zero */

loc_0027452C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00274539; /* jb: below (unsigned <) */

loc_00274534: ;
    eax = MEM32(eax + 0xC);
    goto loc_0027453C;

loc_00274539: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027453C: ;
    edi = MEM32(esp + 0x260);
    MEM8(esp + 0x10) = LO8(ebx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = eax;
    edx = edi;
    PUSH32(esp, 0x00274555u); RECOMP_ABI_CALL(0x00275250u, sub_00275250); /* call 0x00275250 */

loc_00274555: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274764; /* jne: not equal / not zero */

loc_00274560: ;
    eax = MEM32(esi);
    edi = MEM32(eax + 0x24);
    PUSH32(esp, ebx);
    eax = 0x325305;
    ecx = esp + 0x24;
    MEM32(esp + 0x3C) = 0xF;
    MEM32(esp + 0x38) = ebx;
    MEM8(esp + 0x28) = LO8(ebx);
    PUSH32(esp, 0x00274584u); RECOMP_ABI_CALL(0x00275730u, sub_00275730); /* call 0x00275730 */

loc_00274584: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM8(esp + 0x250) = 2;
    if (CMP_NE(_fa, _fb)) goto loc_002745DC; /* jne: not equal / not zero */

loc_00274597: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x1C);
    edx = MEM32(esp + 0x260);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edi = ecx + 1;
    /* nop */

loc_002745B0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002745B0; /* jne: not equal / not zero */

loc_002745B7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x002745C3u); RECOMP_ABI_CALL(0x00275730u, sub_00275730); /* call 0x00275730 */

loc_002745C3: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274653; /* je: equal / zero */

loc_002745CD: ;
    ebp = esi;
    eax = MEM32(ebp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    MEM32(ebp + 4) = eax;
    goto loc_00274653;

loc_002745DC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274653; /* jne: not equal / not zero */

loc_002745E0: ;
    edi = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = edi + 0x44;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = esp + 0x24;
    PUSH32(esp, 0x002745F2u); RECOMP_ABI_CALL(0x00275800u, sub_00275800); /* call 0x00275800 */

loc_002745F2: ;
    esi = MEM32(esi);
    esi = MEM32(esi + 0x1C);
    eax = MEM32(esp + 0x260);
    ecx = esi + eax;
    esi = ebx;
    PUSH32(esp, 0x00274608u); RECOMP_ABI_CALL(0x00275960u, sub_00275960); /* call 0x00275960 */

loc_00274608: ;
    eax = esp + 0x14;
    ecx = edi;
    PUSH32(esp, 0x00274613u); RECOMP_ABI_CALL(0x002736C0u, sub_002736C0); /* call 0x002736C0 */

loc_00274613: ;
    edi = eax;
    esi = esp + 0x10;
    MEM8(esp + 0x250) = 3;
    PUSH32(esp, 0x00274626u); RECOMP_ABI_CALL(0x00274D80u, sub_00274D80); /* call 0x00274D80 */

loc_00274626: ;
    MEM8(esp + 0x250) = 2;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027464D; /* je: equal / zero */

loc_00274636: ;
    esi = MEM32(eax + 4);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0027464D; /* jne: not equal / not zero */

loc_00274647: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0027464Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027464Bu); } /* indirect call */
    }

loc_0027464D: ;
    ebp = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00274653: ;
    eax = MEM32(0x64CF78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274661; /* jne: not equal / not zero */

loc_0027465C: ;
    PUSH32(esp, 0x00274661u); RECOMP_ABI_CALL(0x00272E30u, sub_00272E30); /* call 0x00272E30 */

loc_00274661: ;
    edx = 0x64;
    ecx = eax;
    PUSH32(esp, 0x0027466Du); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027466D: ;
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x250) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_002746B6; /* je: equal / zero */

loc_0027467D: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), 0x10 (32-bit) */
    ecx = MEM32(esp + 0x24);
    if (CMP_AE(_fa, _fb)) goto loc_0027468C; /* jae: above or equal (unsigned >=) */

loc_00274688: ;
    ecx = esp + 0x24;

loc_0027468C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x44) = esp;
    MEM32(ecx) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0027469D; /* je: equal / zero */

loc_0027469A: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027469D: ;
    ecx = MEM32(esp + 0x268);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x268);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002746B2u); RECOMP_ABI_CALL(0x002735F0u, sub_002735F0); /* call 0x002735F0 */

loc_002746B2: ;
    esi = eax;
    goto loc_002746B8;

loc_002746B6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002746B8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_002746C3; /* je: equal / zero */

loc_002746C0: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002746C3: ;
    edi = MEM32(esp + 0x258);
    edx = esp + 0x14;
    MEM8(esp + 0x250) = 5;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esp + 0x44;
    PUSH32(esp, 0x002746EBu); RECOMP_ABI_CALL(0x00274CD0u, sub_00274CD0); /* call 0x00274CD0 */

loc_002746EB: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x250) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00274706; /* je: equal / zero */

loc_002746F9: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00274706; /* jne: not equal / not zero */

loc_002746FE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00274706u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274704u); } /* indirect call */
    }

loc_00274706: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM8(esp + 0x250) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00274720; /* je: equal / zero */

loc_00274712: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) - 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00274720; /* jne: not equal / not zero */

loc_00274717: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00274720u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027471Eu); } /* indirect call */
    }

loc_00274720: ;
    MEM8(esp + 0x250) = LO8(ebx);
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00274745; /* jb: below (unsigned <) */

loc_0027472E: ;
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00274745; /* je: equal / zero */

loc_00274738: ;
    PUSH32(esp, 0x0027473Du); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027473D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00274745u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274742u); } /* indirect call */
    }

loc_00274745: ;
    eax = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x3C) = 0xF;
    MEM32(esp + 0x38) = ebx;
    MEM8(esp + 0x28) = LO8(ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00274760u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027475Au); } /* indirect call */
    }

loc_00274760: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00274774;

loc_00274764: ;
    ecx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027476Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274769u); } /* indirect call */
    }

loc_0027476F: ;
    eax = 4;

loc_00274774: ;
    ecx = MEM32(esp + 0x248);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x244) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x244;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00274790
 * Original: 0x00274790 - 0x002748B1 (289 bytes, 87 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274790: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296D4B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0x110;
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002747C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002747BBu); } /* indirect call */
    }

loc_002747C1: ;
    ecx = MEM32(esp + 0x128);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x124) = 0;
    eax = 0x100;
    edx = 0xFF;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x002747ECu); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_002747EC: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_00274808; /* je: equal / zero */

loc_002747FB: ;
    goto loc_00274800;

    /* nop */

loc_00274800: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274800; /* jne: not equal / not zero */

loc_00274808: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x108);
    ecx = esp + 0x18;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x11C) = eax;
    eax = MEM32(edi + 0x104);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00274833u); RECOMP_ABI_CALL(0x00275290u, sub_00275290); /* call 0x00275290 */

loc_00274833: ;
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0027488B; /* je: equal / zero */

loc_0027483F: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0x10 (32-bit) */
    ecx = MEM32(eax + 0x1C);
    if (CMP_B(_fa, _fb)) goto loc_00274850; /* jb: below (unsigned <) */

loc_0027484B: ;
    eax = MEM32(eax + 0xC);
    goto loc_00274853;

loc_00274850: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274853: ;
    MEM8(esp + 0xC) = 0;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00274867u); RECOMP_ABI_CALL(0x00275200u, sub_00275200); /* call 0x00275200 */

loc_00274867: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027488B; /* jne: not equal / not zero */

loc_0027486E: ;
    PUSH32(esp, ebp);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00274880u); RECOMP_ABI_CALL(0x00274D10u, sub_00274D10); /* call 0x00274D10 */

loc_00274880: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00274887u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274881u); } /* indirect call */
    }

loc_00274887: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00274897;

loc_0027488B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00274892u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027488Cu); } /* indirect call */
    }

loc_00274892: ;
    eax = 3;

loc_00274897: ;
    ecx = MEM32(esp + 0x118);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002748C0
 * Original: 0x002748C0 - 0x002749F0 (304 bytes, 92 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002748C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002748C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x296BD1);
    PUSH32(esp, eax);
    eax = 0x1418;
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, 0x002748DFu); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_002748DF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x110;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002748F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002748EFu); } /* indirect call */
    }

loc_002748F5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x142C) = ebx;
    MEM32(esp + 0x214) = ebx;
    MEM8(esp + 0x14) = LO8(ebx);
    MEM8(esp + 0x114) = LO8(ebx);
    ecx = MEM32(esp + 0x1434);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edx = esi;
    MEM8(esp + 0x1430) = 1;
    PUSH32(esp, 0x0027492Bu); RECOMP_ABI_CALL(0x002749F0u, sub_002749F0); /* call 0x002749F0 */

loc_0027492B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002749BF; /* jne: not equal / not zero */

loc_00274933: ;
    eax = esp + 0xC;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00274940u); RECOMP_ABI_CALL(0x000BE050u, sub_000BE050); /* call 0x000BE050 */

loc_00274940: ;
    MEM8(esp + 0x142C) = 2;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x1438);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0027495Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274959u); } /* indirect call */
    }

loc_0027495C: ;
    esi = eax;
    MEM8(esp + 0x142C) = 1;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027497C; /* je: equal / zero */

loc_0027496E: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0027497C; /* jne: not equal / not zero */

loc_00274976: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0027497Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027497Au); } /* indirect call */
    }

loc_0027497C: ;
    MEM8(esp + 0x142C) = LO8(ebx);
    eax = MEM32(esp + 0x214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027499C; /* je: equal / zero */

loc_0027498E: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0027499C; /* jne: not equal / not zero */

loc_00274996: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0027499Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027499Au); } /* indirect call */
    }

loc_0027499C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002749A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027499Du); } /* indirect call */
    }

loc_002749A3: ;
    ecx = MEM32(esp + 0x1424);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x1424) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1424;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002749BF: ;
    PUSH32(esp, 2);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = 0x332B08;
    ebx = esp + 0x220;
    PUSH32(esp, 0x002749D7u); RECOMP_ABI_CALL(0x00273980u, sub_00273980); /* call 0x00273980 */

loc_002749D7: ;
    PUSH32(esp, 0x334E80);
    edx = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002749E4u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_002749E4: ;
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

}

/**
 * sub_002749F0
 * Original: 0x002749F0 - 0x00274CCC (732 bytes, 226 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002749F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002749F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296A91);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ebx = edx;
    eax = ebx + 0x110;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00274A24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274A1Eu); } /* indirect call */
    }

loc_00274A24: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x230) = ebp;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00274A42; /* je: equal / zero */

loc_00274A35: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274A44; /* je: equal / zero */

loc_00274A3A: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274A35; /* jne: not equal / not zero */

loc_00274A42: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00274A44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274A69; /* je: equal / zero */

loc_00274A48: ;
    MEM8(eax) = 0x2F;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00274A63; /* je: equal / zero */

loc_00274A53: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274B20; /* je: equal / zero */

loc_00274A5B: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274A53; /* jne: not equal / not zero */

loc_00274A63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00274A65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274A48; /* jne: not equal / not zero */

loc_00274A69: ;
    edi = MEM32(esp + 0x238);
    eax = edi + 0x100;
    MEM8(edi) = 0;
    MEM32(esp + 0x18) = eax;
    MEM8(eax) = 0;
    eax = MEM32(edi + 0x200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x128) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00274AA6; /* je: equal / zero */

loc_00274A92: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00274AA0; /* jne: not equal / not zero */

loc_00274A9A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00274AA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274A9Eu); } /* indirect call */
    }

loc_00274AA0: ;
    MEM32(edi + 0x200) = ebp;

loc_00274AA6: ;
    PUSH32(esp, edi);
    eax = 0x100;
    edx = 0xFF;
    ecx = esi;
    PUSH32(esp, 0x00274AB8u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00274AB8: ;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    PUSH32(esp, esi);
    esi = esp + 0x28;
    if (CMP_NE(_fa, _fb)) ecx = ebx; /* cmovne */
    PUSH32(esp, 0x00274ACEu); RECOMP_ABI_CALL(0x002736E0u, sub_002736E0); /* call 0x002736E0 */

loc_00274ACE: ;
    esi = MEM32(ebx + 0x108);
    eax = MEM32(ebx + 0x104);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00274AEBu); RECOMP_ABI_CALL(0x00275290u, sub_00275290); /* call 0x00275290 */

loc_00274AEB: ;
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274CA1; /* je: equal / zero */

loc_00274AFA: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00274B07; /* je: equal / zero */

loc_00274B04: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00274B07: ;
    MEM8(esp + 0x230) = 1;
    eax = MEM32(esi + 0x20);
    ebx = 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00274B27; /* jb: below (unsigned <) */

loc_00274B1B: ;
    edx = MEM32(esi + 0xC);
    goto loc_00274B2A;

loc_00274B20: ;
    eax = ecx;
    goto loc_00274A65;

loc_00274B27: ;
    edx = esi + 0xC;

loc_00274B2A: ;
    SET_LO8(ecx, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = edx;
    ebp = esp + 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_00274B56; /* je: equal / zero */

loc_00274B38: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274B4C; /* jne: not equal / not zero */

loc_00274B3C: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274B4E; /* jne: not equal / not zero */

loc_00274B44: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx + ebp + 1;
    goto loc_00274B58;

loc_00274B4C: ;
    eax = edx;

loc_00274B4E: ;
    SET_LO8(ecx, MEM8(ebp + 1));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274B38; /* jne: not equal / not zero */

loc_00274B56: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00274B58: ;
    ecx = esp + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274C88; /* jne: not equal / not zero */

loc_00274B64: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274BA8; /* jne: not equal / not zero */

loc_00274B6C: ;
    eax = MEM32(esi + 0x1C);
    edx = esp + 0x128;
    ecx = esp + eax + 0x24;
    PUSH32(esp, edx);
    eax = 0x100;
    edx = 0xFF;
    PUSH32(esp, 0x00274B8Au); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00274B8A: ;
    eax = esp;
    ecx = esi;
    MEM32(esp + 0x14) = esp;
    PUSH32(esp, 0x00274B97u); RECOMP_ABI_CALL(0x002735D0u, sub_002735D0); /* call 0x002735D0 */

loc_00274B97: ;
    edi = MEM32(esp + 0x23C);
    PUSH32(esp, 0x00274BA3u); RECOMP_ABI_CALL(0x00273900u, sub_00273900); /* call 0x00273900 */

loc_00274BA3: ;
    goto loc_00274C42;

loc_00274BA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274C42; /* jne: not equal / not zero */

loc_00274BB0: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00274BBA; /* jb: below (unsigned <) */

loc_00274BB5: ;
    ecx = MEM32(esi + 0x48);
    goto loc_00274BBD;

loc_00274BBA: ;
    ecx = esi + 0x48;

loc_00274BBD: ;
    eax = esp + 0x128;
    PUSH32(esp, eax);
    eax = 0x100;
    edx = 0xFF;
    PUSH32(esp, 0x00274BD4u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00274BD4: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0x100);
    ecx = esp + eax + 0x2C;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    ecx = esp + 0x138;
    PUSH32(esp, 0x00274BF4u); RECOMP_ABI_CALL(0x002751A0u, sub_002751A0); /* call 0x002751A0 */

loc_00274BF4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    ecx = esi;
    PUSH32(esp, 0x00274C02u); RECOMP_ABI_CALL(0x002736C0u, sub_002736C0); /* call 0x002736C0 */

loc_00274C02: ;
    PUSH32(esp, ecx);
    MEM8(esp + 0x234) = 2;
    ebp = MEM32(esp + 0x14);
    eax = esp;
    ecx = ebp;
    MEM32(esp + 0x24) = esp;
    PUSH32(esp, 0x00274C1Cu); RECOMP_ABI_CALL(0x002735D0u, sub_002735D0); /* call 0x002735D0 */

loc_00274C1C: ;
    edi = MEM32(esp + 0x23C);
    PUSH32(esp, 0x00274C28u); RECOMP_ABI_CALL(0x00273900u, sub_00273900); /* call 0x00273900 */

loc_00274C28: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(esp + 0x230) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00274C42; /* je: equal / zero */

loc_00274C34: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) - 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00274C42; /* jne: not equal / not zero */

loc_00274C39: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00274C42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274C40u); } /* indirect call */
    }

loc_00274C42: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = 0x100;
    edx = 0xFF;
    ecx = esp + 0x12C;
    PUSH32(esp, 0x00274C5Du); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00274C5D: ;
    MEM8(esp + 0x234) = 0;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_00274C79; /* jne: not equal / not zero */

loc_00274C71: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00274C79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274C77u); } /* indirect call */
    }

loc_00274C79: ;
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00274C84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274C7Eu); } /* indirect call */
    }

loc_00274C84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00274CB1;

loc_00274C88: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x230) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00274CA1; /* je: equal / zero */

loc_00274C94: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00274CA1; /* jne: not equal / not zero */

loc_00274C99: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00274CA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274C9Fu); } /* indirect call */
    }

loc_00274CA1: ;
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00274CACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274CA6u); } /* indirect call */
    }

loc_00274CAC: ;
    eax = 5;

loc_00274CB1: ;
    ecx = MEM32(esp + 0x228);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x224) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x224;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00274CD0
 * Original: 0x00274CD0 - 0x00274D0F (63 bytes, 27 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274CD0: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00274CE8; /* je: equal / zero */

loc_00274CDC: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274CEC; /* jne: not equal / not zero */

loc_00274CE8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00274CF3;

loc_00274CEC: ;
    esi = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00274CF3: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00274D01u); RECOMP_ABI_CALL(0x00274EB0u, sub_00274EB0); /* call 0x00274EB0 */

loc_00274D01: ;
    ecx = MEM32(edi + 4);
    edx = ecx + esi * 4;
    MEM32(ebx) = edx;
    eax = ebx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00274D10
 * Original: 0x00274D10 - 0x00274D72 (98 bytes, 39 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274D10: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = eax + 4;
    PUSH32(esp, 0x00274D2Cu); RECOMP_ABI_CALL(0x00275300u, sub_00275300); /* call 0x00275300 */

loc_00274D2C: ;
    edi = MEM32(ebp + 8);
    esi = edi + -4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274D58; /* je: equal / zero */

loc_00274D39: ;
    /* nop */

loc_00274D40: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274D51; /* je: equal / zero */

loc_00274D46: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00274D51; /* jne: not equal / not zero */

loc_00274D4B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00274D51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274D4Fu); } /* indirect call */
    }

loc_00274D51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274D40; /* jne: not equal / not zero */

loc_00274D58: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00274D80
 * Original: 0x00274D80 - 0x00274DA3 (35 bytes, 17 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274D80: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274DA0; /* je: equal / zero */

loc_00274D86: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274D95; /* je: equal / zero */

loc_00274D8A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00274D95; /* jne: not equal / not zero */

loc_00274D8F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00274D95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274D93u); } /* indirect call */
    }

loc_00274D95: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00274DA0; /* je: equal / zero */

loc_00274D9D: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00274DA0: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00274DB0
 * Original: 0x00274DB0 - 0x00274E15 (101 bytes, 29 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274DB0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297248);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    MEM32(esi) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274DD9; /* jne: not equal / not zero */

loc_00274DD4: ;
    PUSH32(esp, 0x00274DD9u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00274DD9: ;
    edx = 0x12C;
    ecx = eax;
    PUSH32(esp, 0x00274DE5u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00274DE5: ;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00274DFD; /* je: equal / zero */

loc_00274DF5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00274DFBu); RECOMP_ABI_CALL(0x00273B00u, sub_00273B00); /* call 0x00273B00 */

loc_00274DFB: ;
    goto loc_00274DFF;

loc_00274DFD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00274DFF: ;
    ecx = MEM32(esi);
    MEM32(ecx) = eax;
    ecx = MEM32(esp);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00274E20
 * Original: 0x00274E20 - 0x00274EA8 (136 bytes, 43 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274E20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274E48; /* jne: not equal / not zero */

loc_00274E41: ;
    PUSH32(esp, 0x00274E46u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00274E46: ;
    esi = eax;

loc_00274E48: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 8) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00274E53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274E4Du); } /* indirect call */
    }

loc_00274E53: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274E8F; /* je: equal / zero */

loc_00274E67: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00274E8E; /* je: equal / zero */

loc_00274E74: ;
    PUSH32(esp, ebx);
    ebx = edi + 0x100;
    PUSH32(esp, 0x00274E80u); RECOMP_ABI_CALL(0x00012620u, sub_00012620); /* call 0x00012620 */

loc_00274E80: ;
    PUSH32(esp, 0x00274E85u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00274E85: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00274E8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274E8Au); } /* indirect call */
    }

loc_00274E8D: ;
    POP32(esp, ebx);

loc_00274E8E: ;
    POP32(esp, edi);

loc_00274E8F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00274E96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00274E90u); } /* indirect call */
    }

loc_00274E96: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00274EB0
 * Original: 0x00274EB0 - 0x00275148 (664 bytes, 237 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00274EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296E28);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    MEM32(ebp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00274EE3; /* je: equal / zero */

loc_00274EE0: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00274EE3: ;
    MEM32(ebp + -4) = 0;
    edx = MEM32(ebx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274EF5; /* jne: not equal / not zero */

loc_00274EF1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00274EFD;

loc_00274EF5: ;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00274EFD: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027511F; /* je: equal / zero */

loc_00274F08: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274F10; /* jne: not equal / not zero */

loc_00274F0C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00274F18;

loc_00274F10: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00274F18: ;
    esi = 0x3FFFFFFF;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00274F28; /* jae: above or equal (unsigned >=) */

loc_00274F23: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00274F28u); RECOMP_ABI_CALL(0x00018B70u, sub_00018B70); /* call 0x00018B70 */

loc_00274F28: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274F30; /* jne: not equal / not zero */

loc_00274F2C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00274F38;

loc_00274F30: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00274F38: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00275065; /* jae: above or equal (unsigned >=) */

loc_00274F42: ;
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0x3FFFFFFF;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00274F55; /* jae: above or equal (unsigned >=) */

loc_00274F51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00274F57;

loc_00274F55: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274F57: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274F5F; /* jne: not equal / not zero */

loc_00274F5B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00274F67;

loc_00274F5F: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00274F67: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00274F7F; /* jae: above or equal (unsigned >=) */

loc_00274F6D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274F75; /* jne: not equal / not zero */

loc_00274F71: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00274F7D;

loc_00274F75: ;
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00274F7D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274F7F: ;
    esi = eax * 4;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00274F97; /* jne: not equal / not zero */

loc_00274F92: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00274F97u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00274F97: ;
    edx = esi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00274FA0u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00274FA0: ;
    MEM8(ebp + -4) = 1;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebx + 4);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00274FB9u); RECOMP_ABI_CALL(0x002753B0u, sub_002753B0); /* call 0x002753B0 */

loc_00274FB9: ;
    edx = MEM32(ebp + 0xC);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    esi = ebp + 0x14;
    eax = edi;
    MEM32(ebp + 0x10) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00274FCFu); RECOMP_ABI_CALL(0x00275390u, sub_00275390); /* call 0x00275390 */

loc_00274FCF: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ebx + 8);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + edi * 4;
    PUSH32(esp, ecx);
    MEM32(ebp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00274FEAu); RECOMP_ABI_CALL(0x002753B0u, sub_002753B0); /* call 0x002753B0 */

loc_00274FEA: ;
    MEM32(ebp + -4) = 0;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274FFF; /* jne: not equal / not zero */

loc_00274FFB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00275007;

loc_00274FFF: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00275007: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027502F; /* je: equal / zero */

loc_00275010: ;
    edi = MEM32(ebx + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00275018u); RECOMP_ABI_CALL(0x00012680u, sub_00012680); /* call 0x00012680 */

loc_00275018: ;
    edi = MEM32(ebx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027502C; /* je: equal / zero */

loc_0027501F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00275024u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00275024: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027502Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275029u); } /* indirect call */
    }

loc_0027502C: ;
    edi = MEM32(ebp + 0x10);

loc_0027502F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + edi * 4;
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 8) = edx;
    MEM32(ebx + 4) = eax;
    goto loc_0027511C;

    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00275055u); RECOMP_ABI_CALL(0x00012680u, sub_00012680); /* call 0x00012680 */

loc_00275055: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027505Cu); RECOMP_ABI_CALL(0x00016F20u, sub_00016F20); /* call 0x00016F20 */

loc_0027505C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00275065u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_00275065: ;
    esi = MEM32(ebx + 8);
    edx = MEM32(ebp + 0xC);
    eax = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    eax = edi * 4;
    MEM32(ebp + -20) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_002750E5; /* jae: above or equal (unsigned >=) */

loc_00275080: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027508Bu); RECOMP_ABI_CALL(0x002753B0u, sub_002753B0); /* call 0x002753B0 */

loc_0027508B: ;
    MEM8(ebp + -4) = 3;
    ecx = MEM32(ebx + 8);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0xC);
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    esi = ebp + 0x14;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002750ACu); RECOMP_ABI_CALL(0x00275390u, sub_00275390); /* call 0x00275390 */

loc_002750AC: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -4) = 0;
    edx = MEM32(ebx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = edx;
    ebx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0027510E;

    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edi = MEM32(ecx + 8);
    edx = MEM32(ebp + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002750DCu); RECOMP_ABI_CALL(0x00012680u, sub_00012680); /* call 0x00012680 */

loc_002750DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002750E5u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_002750E5: ;
    edi = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = esi;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002750F6u); RECOMP_ABI_CALL(0x002753B0u, sub_002753B0); /* call 0x002753B0 */

loc_002750F6: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebx + 8) = eax;
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    eax = esi;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00275109u); RECOMP_ABI_CALL(0x00275340u, sub_00275340); /* call 0x00275340 */

loc_00275109: ;
    edx = MEM32(ebp + -20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027510E: ;
    eax = MEM32(ebp + 0xC);
    edi = ebp + 0x14;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027511Cu); RECOMP_ABI_CALL(0x002751D0u, sub_002751D0); /* call 0x002751D0 */

loc_0027511C: ;
    ecx = MEM32(ebp + 0x14);

loc_0027511F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00275135; /* je: equal / zero */

loc_0027512A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00275135; /* jne: not equal / not zero */

loc_0027512F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00275135u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275133u); } /* indirect call */
    }

loc_00275135: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00275048
 * Original: 0x00275048 - 0x00275148 (256 bytes, 90 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275048(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275048: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    eax = esi;
    PUSH32(esp, 0x00275055u); RECOMP_ABI_CALL(0x00012680u, sub_00012680); /* call 0x00012680 */

loc_00275055: ;
    eax = esi;
    PUSH32(esp, 0x0027505Cu); RECOMP_ABI_CALL(0x00016F20u, sub_00016F20); /* call 0x00016F20 */

loc_0027505C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00275065u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_00275065: ;
    esi = MEM32(ebx + 8);
    edx = MEM32(ebp + 0xC);
    eax = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    eax = edi * 4;
    MEM32(ebp + -20) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_002750E5; /* jae: above or equal (unsigned >=) */

loc_00275080: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027508Bu); RECOMP_ABI_CALL(0x002753B0u, sub_002753B0); /* call 0x002753B0 */

loc_0027508B: ;
    MEM8(ebp + -4) = 3;
    ecx = MEM32(ebx + 8);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0xC);
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    esi = ebp + 0x14;
    eax = edi;
    PUSH32(esp, 0x002750ACu); RECOMP_ABI_CALL(0x00275390u, sub_00275390); /* call 0x00275390 */

loc_002750AC: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -4) = 0;
    edx = MEM32(ebx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = edx;
    ebx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0027510E;

    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edi = MEM32(ecx + 8);
    edx = MEM32(ebp + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002750DCu); RECOMP_ABI_CALL(0x00012680u, sub_00012680); /* call 0x00012680 */

loc_002750DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002750E5u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_002750E5: ;
    edi = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = esi;
    edx = edi;
    PUSH32(esp, 0x002750F6u); RECOMP_ABI_CALL(0x002753B0u, sub_002753B0); /* call 0x002753B0 */

loc_002750F6: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebx + 8) = eax;
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x00275109u); RECOMP_ABI_CALL(0x00275340u, sub_00275340); /* call 0x00275340 */

loc_00275109: ;
    edx = MEM32(ebp + -20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027510E: ;
    eax = MEM32(ebp + 0xC);
    edi = ebp + 0x14;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0027511Cu); RECOMP_ABI_CALL(0x002751D0u, sub_002751D0); /* call 0x002751D0 */

loc_0027511C: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00275135; /* je: equal / zero */

loc_0027512A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00275135; /* jne: not equal / not zero */

loc_0027512F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00275135u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275133u); } /* indirect call */
    }

loc_00275135: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002750C4
 * Original: 0x002750C4 - 0x00275148 (132 bytes, 48 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002750C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002750C4: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edi = MEM32(ecx + 8);
    edx = MEM32(ebp + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002750DCu); RECOMP_ABI_CALL(0x00012680u, sub_00012680); /* call 0x00012680 */

loc_002750DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002750E5u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_002750E5: ;
    edi = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = esi;
    edx = edi;
    PUSH32(esp, 0x002750F6u); RECOMP_ABI_CALL(0x002753B0u, sub_002753B0); /* call 0x002753B0 */

loc_002750F6: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebx + 8) = eax;
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x00275109u); RECOMP_ABI_CALL(0x00275340u, sub_00275340); /* call 0x00275340 */

loc_00275109: ;
    edx = MEM32(ebp + -20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0xC);
    edi = ebp + 0x14;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0027511Cu); RECOMP_ABI_CALL(0x002751D0u, sub_002751D0); /* call 0x002751D0 */

loc_0027511C: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00275135; /* je: equal / zero */

loc_0027512A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00275135; /* jne: not equal / not zero */

loc_0027512F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00275135u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275133u); } /* indirect call */
    }

loc_00275135: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00275150
 * Original: 0x00275150 - 0x002751A0 (80 bytes, 42 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275150: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = edx;
    SET_LO8(edx, MEM8(ecx));
    ebp = eax + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) edi = ebp; /* cmovae */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    ebx = esi + eax + -1;
    if (CMP_EQ(_fa, _fb)) goto loc_00275180; /* je: equal / zero */

loc_00275170: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275180; /* je: equal / zero */

loc_00275174: ;
    MEM8(esi) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275170; /* jne: not equal / not zero */

loc_00275180: ;
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    eax = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00275192; /* jae: above or equal (unsigned >=) */

loc_0027518A: ;
    POP32(esp, edi);
    MEM8(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00275192: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ebx) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0027519B; /* je: equal / zero */

loc_00275199: ;
    eax = ebp;

loc_0027519B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002751A0
 * Original: 0x002751A0 - 0x002751CD (45 bytes, 18 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002751A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002751A0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002751AF; /* je: equal / zero */

loc_002751A7: ;
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002751A7; /* jne: not equal / not zero */

loc_002751AF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x002751C9u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_002751C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002751D0
 * Original: 0x002751D0 - 0x00275200 (48 bytes, 24 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002751D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002751D0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002751FE; /* je: equal / zero */

loc_002751D7: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002751F7; /* je: equal / zero */

loc_002751DD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002751EC; /* je: equal / zero */

loc_002751E1: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002751EC; /* jne: not equal / not zero */

loc_002751E6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002751ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002751EAu); } /* indirect call */
    }

loc_002751EC: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002751F7; /* je: equal / zero */

loc_002751F4: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002751F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002751D7; /* jne: not equal / not zero */

loc_002751FE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00275200
 * Original: 0x00275200 - 0x00275245 (69 bytes, 37 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00275200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275200: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00275210: ;
    SET_LO8(ecx, MEM8(edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027521B; /* jne: not equal / not zero */

loc_00275216: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275241; /* je: equal / zero */

loc_0027521B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275241; /* jne: not equal / not zero */

loc_0027521F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275241; /* je: equal / zero */

loc_00275223: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00275233; /* jge: greater or equal (signed >=) */

loc_00275229: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0xFFFFFFFFu;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00275210;

loc_00275233: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    goto loc_00275210;

loc_00275241: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00275250
 * Original: 0x00275250 - 0x00275282 (50 bytes, 24 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00275250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275250: ;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027527E; /* je: equal / zero */

loc_00275259: ;
    /* nop */

loc_00275260: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275274; /* jne: not equal / not zero */

loc_00275264: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275276; /* jne: not equal / not zero */

loc_0027526C: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + edx + 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00275274: ;
    ecx = esi;

loc_00275276: ;
    SET_LO8(eax, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275260; /* jne: not equal / not zero */

loc_0027527E: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00275290
 * Original: 0x00275290 - 0x002752FA (106 bytes, 44 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00275290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275290: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002752F1; /* jle: less or equal (signed <=) */

loc_002752A3: ;
    PUSH32(esp, esi);

loc_002752A4: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = MEM32(ebp + esi * 4);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0x10 (32-bit) */
    edx = MEM32(eax + 0x1C);
    if (CMP_B(_fa, _fb)) goto loc_002752BF; /* jb: below (unsigned <) */

loc_002752BA: ;
    ecx = MEM32(eax + 0xC);
    goto loc_002752C2;

loc_002752BF: ;
    ecx = eax + 0xC;

loc_002752C2: ;
    MEM8(esp + 0x18) = 0;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002752D6u); RECOMP_ABI_CALL(0x00275200u, sub_00275200); /* call 0x00275200 */

loc_002752D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002752EA; /* jge: greater or equal (signed >=) */

loc_002752DD: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ebp + esi * 4 + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002752EC;

loc_002752EA: ;
    edi = esi;

loc_002752EC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002752A4; /* jg: greater (signed >) */

loc_002752F0: ;
    POP32(esp, esi);

loc_002752F1: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00275300
 * Original: 0x00275300 - 0x0027533F (63 bytes, 30 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275300: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027533A; /* je: equal / zero */

loc_0027530A: ;
    /* nop */

loc_00275310: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275330; /* je: equal / zero */

loc_00275316: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275325; /* je: equal / zero */

loc_0027531A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00275325; /* jne: not equal / not zero */

loc_0027531F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00275325u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275323u); } /* indirect call */
    }

loc_00275325: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00275330; /* je: equal / zero */

loc_0027532D: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00275330: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275310; /* jne: not equal / not zero */

loc_0027533A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00275340
 * Original: 0x00275340 - 0x00275383 (67 bytes, 31 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275340: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027537E; /* je: equal / zero */

loc_0027534A: ;
    /* nop */

loc_00275350: ;
    ecx = MEM32(edi + -4);
    eax = MEM32(esi + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027537A; /* je: equal / zero */

loc_00275360: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027536F; /* je: equal / zero */

loc_00275364: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0027536F; /* jne: not equal / not zero */

loc_00275369: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0027536Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027536Du); } /* indirect call */
    }

loc_0027536F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027537A; /* je: equal / zero */

loc_00275377: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027537A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275350; /* jne: not equal / not zero */

loc_0027537E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00275390
 * Original: 0x00275390 - 0x002753AC (28 bytes, 14 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275390: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002753AB; /* jbe: below or equal (unsigned <=) */

loc_00275394: ;
    edx = eax;

loc_00275396: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002753A5; /* je: equal / zero */

loc_0027539A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002753A5; /* je: equal / zero */

loc_002753A2: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002753A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00275396; /* jne: not equal / not zero */

loc_002753AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002753B0
 * Original: 0x002753B0 - 0x002753CE (30 bytes, 14 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002753B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002753B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002753CD; /* je: equal / zero */

loc_002753B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002753C3; /* je: equal / zero */

loc_002753B8: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002753C3; /* je: equal / zero */

loc_002753C0: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002753C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002753B4; /* jne: not equal / not zero */

loc_002753CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002753D0
 * Original: 0x002753D0 - 0x00275450 (128 bytes, 45 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002753D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002753D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296E10);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = eax;
    ebx = ebx | 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    if (CMP_BE(_fa, _fb)) goto loc_00275405; /* jbe: below or equal (unsigned <=) */

loc_00275401: ;
    ebx = eax;
    goto loc_00275427;

loc_00275405: ;
    edi = MEM32(esi + 0x18);
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = edi;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00275427; /* jae: above or equal (unsigned >=) */

loc_00275419: ;
    eax = 0xFFFFFFFEu;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00275427; /* ja: above (unsigned >) */

loc_00275424: ;
    ebx = ecx + edi;

loc_00275427: ;
    MEM32(ebp + -4) = 0;
    ecx = MEM32(0x64CF80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = ebx + 1;
    if (CMP_NE(_fa, _fb)) goto loc_00275442; /* jne: not equal / not zero */

loc_0027543B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00275440u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00275440: ;
    ecx = eax;

loc_00275442: ;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00275449u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00275449: ;
    edx = eax;
    MEM32(ebp + 0xC) = edx;
    g_seh_ebp = ebp; sub_00275476(); return; /* tail jmp 0x00275476 */

}

/**
 * sub_00275450
 * Original: 0x00275450 - 0x0027546D (29 bytes, 10 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275450: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -20) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = esp;
    PUSH32(esp, eax);
    MEM8(ebp + -4) = 2;
    PUSH32(esp, 0x00275464u); RECOMP_ABI_CALL(0x00275530u, sub_00275530); /* call 0x00275530 */

loc_00275464: ;
    MEM32(ebp + 0xC) = eax;
    eax = 0x27546D;
    esp += 4; return; /* ret */

}

/**
 * sub_0027546D
 * Original: 0x0027546D - 0x002754F3 (134 bytes, 49 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027546D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027546D: ;
    ebx = MEM32(ebp + -20);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    if (CMP_BE(_fa, _fb)) goto loc_002754A8; /* jbe: below or equal (unsigned <=) */

loc_00275484: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027548F; /* jb: below (unsigned <) */

loc_0027548A: ;
    esi = MEM32(esi + 4);
    goto loc_00275492;

loc_0027548F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275492: ;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
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
    esi = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);

loc_002754A8: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002754C8; /* jb: below (unsigned <) */

loc_002754AE: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002754C8; /* je: equal / zero */

loc_002754B5: ;
    PUSH32(esp, 0x002754BAu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_002754BA: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002754C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002754BFu); } /* indirect call */
    }

loc_002754C2: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);

loc_002754C8: ;
    eax = esi + 4;
    MEM8(eax) = 0;
    MEM32(eax) = edx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    POP32(esp, edi);
    if (CMP_AE(_fa, _fb)) eax = edx; /* cmovae */
    MEM8(eax + ecx) = 0;
    ecx = MEM32(ebp + -12);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00275476
 * Original: 0x00275476 - 0x002754F3 (125 bytes, 46 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275476(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275476: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    if (CMP_BE(_fa, _fb)) goto loc_002754A8; /* jbe: below or equal (unsigned <=) */

loc_00275484: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027548F; /* jb: below (unsigned <) */

loc_0027548A: ;
    esi = MEM32(esi + 4);
    goto loc_00275492;

loc_0027548F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275492: ;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
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
    esi = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);

loc_002754A8: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002754C8; /* jb: below (unsigned <) */

loc_002754AE: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002754C8; /* je: equal / zero */

loc_002754B5: ;
    PUSH32(esp, 0x002754BAu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_002754BA: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002754C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002754BFu); } /* indirect call */
    }

loc_002754C2: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);

loc_002754C8: ;
    eax = esi + 4;
    MEM8(eax) = 0;
    MEM32(eax) = edx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    POP32(esp, edi);
    if (CMP_AE(_fa, _fb)) eax = edx; /* cmovae */
    MEM8(eax + ecx) = 0;
    ecx = MEM32(ebp + -12);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002754F3
 * Original: 0x002754F3 - 0x00275530 (61 bytes, 22 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002754F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002754F3: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00275510; /* jb: below (unsigned <) */

loc_002754FC: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275510; /* je: equal / zero */

loc_00275503: ;
    PUSH32(esp, 0x00275508u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00275508: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00275510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027550Du); } /* indirect call */
    }

loc_00275510: ;
    PUSH32(esp, 0);
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0);
    MEM8(esi + 4) = 0;
    PUSH32(esp, 0x0027552Bu); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027552B: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00275530
 * Original: 0x00275530 - 0x0027554C (28 bytes, 8 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275530: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027553E; /* jne: not equal / not zero */

loc_00275539: ;
    PUSH32(esp, 0x0027553Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0027553E: ;
    edx = MEM32(esp + 4);
    ecx = eax;
    PUSH32(esp, 0x00275549u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00275549: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00275550
 * Original: 0x00275550 - 0x0027564D (253 bytes, 117 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275550: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edx;
    edx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00275567; /* jb: below (unsigned <) */

loc_00275562: ;
    eax = MEM32(ebx + 4);
    goto loc_0027556A;

loc_00275567: ;
    eax = ebx + 4;

loc_0027556A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027559D; /* jb: below (unsigned <) */

loc_0027556E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    eax = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_0027557A; /* jb: below (unsigned <) */

loc_00275576: ;
    ecx = MEM32(eax);
    goto loc_0027557C;

loc_0027557A: ;
    ecx = eax;

loc_0027557C: ;
    ebp = MEM32(ebx + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027559D; /* jbe: below or equal (unsigned <=) */

loc_00275585: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027558C; /* jb: below (unsigned <) */

loc_0027558A: ;
    eax = MEM32(eax);

loc_0027558C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x00275598u); RECOMP_ABI_CALL(0x00275650u, sub_00275650); /* call 0x00275650 */

loc_00275598: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0027559D: ;
    edx = MEM32(ebx + 0x14);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002755B0; /* ja: above (unsigned >) */

loc_002755A9: ;
    ecx = ebx;
    PUSH32(esp, 0x002755B0u); RECOMP_ABI_CALL(0x0028A3E4u, sub_0028A3E4); /* call 0x0028A3E4 */

loc_002755B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00275646; /* jbe: below or equal (unsigned <=) */

loc_002755B8: ;
    ebp = MEM32(ebx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002755C9; /* jbe: below or equal (unsigned <=) */

loc_002755C2: ;
    ecx = ebx;
    PUSH32(esp, 0x002755C9u); RECOMP_ABI_CALL(0x0028A3E4u, sub_0028A3E4); /* call 0x0028A3E4 */

loc_002755C9: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002755EA; /* jae: above or equal (unsigned >=) */

loc_002755D0: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002755DBu); RECOMP_ABI_CALL(0x002753D0u, sub_002753D0); /* call 0x002753D0 */

loc_002755DB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_002755DD: ;
    if (CMP_BE(_fa, _fb)) goto loc_00275646; /* jbe: below or equal (unsigned <=) */

loc_002755DF: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00275610; /* jb: below (unsigned <) */

loc_002755E5: ;
    eax = MEM32(ebx + 4);
    goto loc_00275613;

loc_002755EA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002755DD; /* jne: not equal / not zero */

loc_002755EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00275603; /* jb: below (unsigned <) */

loc_002755F6: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00275603: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM8(eax) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00275610: ;
    eax = ebx + 4;

loc_00275613: ;
    ecx = edi;
    edi = MEM32(ebx + 0x14);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
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
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_0027563F; /* jb: below (unsigned <) */

loc_00275631: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + ebp) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0027563F: ;
    eax = ebx + 4;
    MEM8(eax + ebp) = 0;

loc_00275646: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275650
 * Original: 0x00275650 - 0x0027572F (223 bytes, 92 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00275650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275650: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00275667; /* jae: above or equal (unsigned >=) */

loc_00275660: ;
    ecx = ebx;
    PUSH32(esp, 0x00275667u); RECOMP_ABI_CALL(0x0028A3A4u, sub_0028A3A4); /* call 0x0028A3A4 */

loc_00275667: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) edi = eax; /* cmovb */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00275684; /* ja: above (unsigned >) */

loc_0027567D: ;
    ecx = ebx;
    PUSH32(esp, 0x00275684u); RECOMP_ABI_CALL(0x0028A3E4u, sub_0028A3E4); /* call 0x0028A3E4 */

loc_00275684: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00275727; /* jbe: below or equal (unsigned <=) */

loc_0027568C: ;
    ebp = MEM32(ebx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027569D; /* jbe: below or equal (unsigned <=) */

loc_00275696: ;
    ecx = ebx;
    PUSH32(esp, 0x0027569Du); RECOMP_ABI_CALL(0x0028A3E4u, sub_0028A3E4); /* call 0x0028A3E4 */

loc_0027569D: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002756C4; /* jae: above or equal (unsigned >=) */

loc_002756A4: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002756AFu); RECOMP_ABI_CALL(0x002753D0u, sub_002753D0); /* call 0x002753D0 */

loc_002756AF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_002756B1: ;
    if (CMP_BE(_fa, _fb)) goto loc_00275727; /* jbe: below or equal (unsigned <=) */

loc_002756B3: ;
    ecx = MEM32(esi + 0x18);
    eax = 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002756EC; /* jb: below (unsigned <) */

loc_002756BF: ;
    esi = MEM32(esi + 4);
    goto loc_002756EF;

loc_002756C4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002756B1; /* jne: not equal / not zero */

loc_002756C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_002756DE; /* jb: below (unsigned <) */

loc_002756D0: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_002756DE: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM8(eax) = 0;
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_002756EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002756EF: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), eax (32-bit) */
    edx = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_002756FB; /* jb: below (unsigned <) */

loc_002756F7: ;
    eax = MEM32(edx);
    goto loc_002756FD;

loc_002756FB: ;
    eax = edx;

loc_002756FD: ;
    ecx = edi;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebx + 0x14);
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
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00275723; /* jb: below (unsigned <) */

loc_00275721: ;
    edx = MEM32(edx);

loc_00275723: ;
    MEM8(edx + ebp) = 0;

loc_00275727: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00275730
 * Original: 0x00275730 - 0x002757FF (207 bytes, 90 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275730: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    ebp = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_00275747; /* jb: below (unsigned <) */

loc_00275742: ;
    eax = MEM32(ebp);
    goto loc_00275749;

loc_00275747: ;
    eax = ebp;

loc_00275749: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027577E; /* jb: below (unsigned <) */

loc_0027574D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00275757; /* jb: below (unsigned <) */

loc_00275752: ;
    eax = MEM32(ebp);
    goto loc_00275759;

loc_00275757: ;
    eax = ebp;

loc_00275759: ;
    edx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027577E; /* jbe: below or equal (unsigned <=) */

loc_00275762: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027576A; /* jb: below (unsigned <) */

loc_00275767: ;
    ebp = MEM32(ebp);

loc_0027576A: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00275778u); RECOMP_ABI_CALL(0x00275800u, sub_00275800); /* call 0x00275800 */

loc_00275778: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0027577E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027578F; /* jbe: below or equal (unsigned <=) */

loc_00275788: ;
    ecx = ebx;
    PUSH32(esp, 0x0027578Fu); RECOMP_ABI_CALL(0x0028A3E4u, sub_0028A3E4); /* call 0x0028A3E4 */

loc_0027578F: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002757B0; /* jae: above or equal (unsigned >=) */

loc_00275796: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002757A1u); RECOMP_ABI_CALL(0x002753D0u, sub_002753D0); /* call 0x002753D0 */

loc_002757A1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */

loc_002757A3: ;
    if (CMP_BE(_fa, _fb)) goto loc_002757F6; /* jbe: below or equal (unsigned <=) */

loc_002757A5: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002757CC; /* jb: below (unsigned <) */

loc_002757AB: ;
    eax = MEM32(ebp);
    goto loc_002757CE;

loc_002757B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002757A3; /* jne: not equal / not zero */

loc_002757B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebx + 0x14) = esi;
    if (CMP_B(_fa, _fb)) goto loc_002757BF; /* jb: below (unsigned <) */

loc_002757BC: ;
    ebp = MEM32(ebp);

loc_002757BF: ;
    POP32(esp, esi);
    POP32(esp, edi);
    MEM8(ebp) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002757CC: ;
    eax = ebp;

loc_002757CE: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi;
    edi = eax;
    eax = MEM32(esp + 0x14);
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
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    MEM32(ebx + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_002757F2; /* jb: below (unsigned <) */

loc_002757EF: ;
    ebp = MEM32(ebp);

loc_002757F2: ;
    MEM8(eax + ebp) = 0;

loc_002757F6: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00275800
 * Original: 0x00275800 - 0x002758E6 (230 bytes, 97 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00275800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275800: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    edi = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00275819; /* jae: above or equal (unsigned >=) */

loc_00275812: ;
    ecx = ebx;
    PUSH32(esp, 0x00275819u); RECOMP_ABI_CALL(0x0028A3A4u, sub_0028A3A4); /* call 0x0028A3A4 */

loc_00275819: ;
    ebp = MEM32(esi + 0x14);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) ebp = edi; /* cmovb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027584B; /* jne: not equal / not zero */

loc_0027582B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebx;
    PUSH32(esp, 0x00275838u); RECOMP_ABI_CALL(0x002758F0u, sub_002758F0); /* call 0x002758F0 */

loc_00275838: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00275843u); RECOMP_ABI_CALL(0x002758F0u, sub_002758F0); /* call 0x002758F0 */

loc_00275843: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0027584B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00275857; /* jbe: below or equal (unsigned <=) */

loc_00275850: ;
    ecx = ebx;
    PUSH32(esp, 0x00275857u); RECOMP_ABI_CALL(0x0028A3E4u, sub_0028A3E4); /* call 0x0028A3E4 */

loc_00275857: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027587E; /* jae: above or equal (unsigned >=) */

loc_0027585E: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00275869u); RECOMP_ABI_CALL(0x002753D0u, sub_002753D0); /* call 0x002753D0 */

loc_00275869: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_0027586B: ;
    if (CMP_BE(_fa, _fb)) goto loc_002758DE; /* jbe: below or equal (unsigned <=) */

loc_0027586D: ;
    ecx = MEM32(esi + 0x18);
    eax = 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002758A6; /* jb: below (unsigned <) */

loc_00275879: ;
    esi = MEM32(esi + 4);
    goto loc_002758A9;

loc_0027587E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027586B; /* jne: not equal / not zero */

loc_00275882: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00275898; /* jb: below (unsigned <) */

loc_0027588A: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00275898: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM8(eax) = 0;
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_002758A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002758A9: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), eax (32-bit) */
    eax = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_002758B5; /* jb: below (unsigned <) */

loc_002758B1: ;
    edx = MEM32(eax);
    goto loc_002758B7;

loc_002758B5: ;
    edx = eax;

loc_002758B7: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    edi = edx;
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
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_002758DA; /* jb: below (unsigned <) */

loc_002758D8: ;
    eax = MEM32(eax);

loc_002758DA: ;
    MEM8(eax + ebp) = 0;

loc_002758DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002758F0
 * Original: 0x002758F0 - 0x00275960 (112 bytes, 49 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002758F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002758F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00275904; /* jae: above or equal (unsigned >=) */

loc_002758FD: ;
    ecx = esi;
    PUSH32(esp, 0x00275904u); RECOMP_ABI_CALL(0x0028A3A4u, sub_0028A3A4); /* call 0x0028A3A4 */

loc_00275904: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) edi = eax; /* cmovb */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00275959; /* jbe: below or equal (unsigned <=) */

loc_00275912: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    PUSH32(esp, ebx);
    ebx = esi + 4;
    if (CMP_B(_fa, _fb)) goto loc_00275922; /* jb: below (unsigned <) */

loc_0027591E: ;
    edx = MEM32(ebx);
    goto loc_00275924;

loc_00275922: ;
    edx = ebx;

loc_00275924: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027592D; /* jb: below (unsigned <) */

loc_00275929: ;
    ecx = MEM32(ebx);
    goto loc_0027592F;

loc_0027592D: ;
    ecx = ebx;

loc_0027592F: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027593Fu); RECOMP_ABI_CALL(0x0028AA50u, sub_0028AA50); /* call 0x0028AA50 */

loc_0027593F: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00275954; /* jb: below (unsigned <) */

loc_00275952: ;
    ebx = MEM32(ebx);

loc_00275954: ;
    MEM8(ebx + eax) = 0;
    POP32(esp, ebx);

loc_00275959: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00275960
 * Original: 0x00275960 - 0x0027597A (26 bytes, 13 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275960: ;
    eax = ecx;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00275966: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275966; /* jne: not equal / not zero */

loc_0027596D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi;
    PUSH32(esp, 0x00275976u); RECOMP_ABI_CALL(0x00275550u, sub_00275550); /* call 0x00275550 */

loc_00275976: ;
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00275980
 * Original: 0x00275980 - 0x002759AF (47 bytes, 16 insns)
 * Folder: base (library: 0x00272D70 and 0x002759B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275980: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027599C; /* jb: below (unsigned <) */

loc_00275986: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027599B; /* je: equal / zero */

loc_0027598E: ;
    PUSH32(esp, 0x00275993u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00275993: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027599Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275998u); } /* indirect call */
    }

loc_0027599B: ;
    POP32(esp, edi);

loc_0027599C: ;
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = 0;
    MEM8(esi + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002759B0
 * Original: 0x002759B0 - 0x00275A60 (176 bytes, 54 insns)
 * Folder: base (source: exception.cpp)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002759B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002759B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x343DF8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00275A34; /* je: equal / zero */

loc_002759D0: ;
    esi = MEM32(0x64CF98);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002759E1; /* jne: not equal / not zero */

loc_002759DA: ;
    PUSH32(esp, 0x002759DFu); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_002759DF: ;
    esi = eax;

loc_002759E1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = esi + 0x2E04;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = ebp;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002759F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002759EFu); } /* indirect call */
    }

loc_002759F5: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x332B5C);
    PUSH32(esp, 0x332B38);
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x00275A0Eu); RECOMP_ABI_CALL(0x002769D0u, sub_002769D0); /* call 0x002769D0 */

loc_00275A0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x650A68);
    ebx = eax;
    ecx = 2;
    edi = esi;
    PUSH32(esp, 0x00275A24u); RECOMP_ABI_CALL(0x00276B60u, sub_00276B60); /* call 0x00276B60 */

loc_00275A24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275A2A; /* jne: not equal / not zero */

loc_00275A29: ;
    /* int3: debug-trap slide byte, stepped over */

loc_00275A2A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00275A31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275A2Bu); } /* indirect call */
    }

loc_00275A31: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00275A34: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax = 0x1000;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0x00275A49u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00275A49: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00275A60
 * Original: 0x00275A60 - 0x00275A93 (51 bytes, 21 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275A60: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275A8F; /* je: equal / zero */

loc_00275A69: ;
    ecx = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = ecx;
    if ((_fa != 0)) goto loc_00275A89; /* jne: not equal / not zero */

loc_00275A72: ;
    eax = MEM32(0x64CF9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275A80; /* jne: not equal / not zero */

loc_00275A7B: ;
    PUSH32(esp, 0x00275A80u); RECOMP_ABI_CALL(0x00279F90u, sub_00279F90); /* call 0x00279F90 */

loc_00275A80: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x00275A88u); RECOMP_ABI_CALL(0x0027A510u, sub_0027A510); /* call 0x0027A510 */

loc_00275A88: ;
    POP32(esp, esi);

loc_00275A89: ;
    MEM32(edi) = 0;

loc_00275A8F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00275AA0
 * Original: 0x00275AA0 - 0x00275B14 (116 bytes, 32 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275AA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297168);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275AC4; /* jne: not equal / not zero */

loc_00275ABF: ;
    PUSH32(esp, 0x00275AC4u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00275AC4: ;
    edx = 0x44;
    ecx = eax;
    PUSH32(esp, 0x00275AD0u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00275AD0: ;
    MEM32(esp) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00275AFE; /* je: equal / zero */

loc_00275ADF: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275AEAu); RECOMP_ABI_CALL(0x00275B20u, sub_00275B20); /* call 0x00275B20 */

loc_00275AEA: ;
    MEM32(0x64D940) = eax;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00275AFE: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D940) = eax;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00275B20
 * Original: 0x00275B20 - 0x00275BB9 (153 bytes, 40 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275B20: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297028);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x00275B3Fu); RECOMP_ABI_CALL(0x00276330u, sub_00276330); /* call 0x00276330 */

loc_00275B3F: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    eax = esi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x00275B5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275B55u); } /* indirect call */
    }

loc_00275B5B: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0xC) = ecx;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275B70; /* jne: not equal / not zero */

loc_00275B6B: ;
    PUSH32(esp, 0x00275B70u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00275B70: ;
    edx = 1;
    ecx = eax;
    PUSH32(esp, 0x00275B7Cu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00275B7C: ;
    edx = MEM32(0x64D948);
    ecx = MEM32(esi + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x24) = eax;
    eax = edx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = edx;
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    MEM32(esi + 0x18) = edx;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x20) = 0;
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00275BC0
 * Original: 0x00275BC0 - 0x00275C32 (114 bytes, 31 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275BC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297168);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275BE4; /* jne: not equal / not zero */

loc_00275BDF: ;
    PUSH32(esp, 0x00275BE4u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00275BE4: ;
    edx = 0x40;
    ecx = eax;
    PUSH32(esp, 0x00275BF0u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00275BF0: ;
    MEM32(esp) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00275C1F; /* je: equal / zero */

loc_00275BFF: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275C0Eu); RECOMP_ABI_CALL(0x0027B460u, sub_0027B460); /* call 0x0027B460 */

loc_00275C0E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00275C1F: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00275C40
 * Original: 0x00275C40 - 0x00275D28 (232 bytes, 82 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275C40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296DF8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    ebx = edx;
    PUSH32(esp, edi);
    eax = ebx + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi = ecx;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00275C72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275C6Cu); } /* indirect call */
    }

loc_00275C72: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = ebp;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00275C82; /* jbe: below or equal (unsigned <=) */

loc_00275C7D: ;
    PUSH32(esp, 0x00275C82u); RECOMP_ABI_CALL(0x00275D30u, sub_00275D30); /* call 0x00275D30 */

loc_00275C82: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0x18));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0x18)); }
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00275C94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275C91u); } /* indirect call */
    }

loc_00275C94: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00275CB1; /* ja: above (unsigned >) */

loc_00275C98: ;
    if (CMP_B(_fa, _fb)) goto loc_00275CA4; /* jb: below (unsigned <) */

loc_00275C9A: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00275CB1; /* jae: above or equal (unsigned >=) */

loc_00275CA4: ;
    edx = MEM32(esp + 0x30);
    eax = edi + edx;
    MEM32(esp + 0x18) = ebp;
    goto loc_00275CBD;

loc_00275CB1: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00275CB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275CB6u); } /* indirect call */
    }

loc_00275CB9: ;
    MEM32(esp + 0x18) = edx;

loc_00275CBD: ;
    MEM32(esi + 0x10) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0x18));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0x18)); }
    MEM32(esi + 0x20) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(esi + 0x20);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    esi = MEM32(ebx + 4);
    edx = MEM32(esi + 4);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00275CF2u); RECOMP_ABI_CALL(0x0027B300u, sub_0027B300); /* call 0x0027B300 */

loc_00275CF2: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0x00275D00u); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_00275D00: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 4) = edi;
    eax = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(eax) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00275D13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275D0Du); } /* indirect call */
    }

loc_00275D13: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00275D30
 * Original: 0x00275D30 - 0x00275E37 (263 bytes, 92 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275D30: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx + 0x28;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00275D57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275D51u); } /* indirect call */
    }

loc_00275D57: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ecx;
    eax = MEM32(ebx + 4);
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00275E08; /* je: equal / zero */

loc_00275D6E: ;
    edi = edi;

loc_00275D70: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275D80; /* je: equal / zero */

loc_00275D75: ;
    ebp = MEM32(ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 4) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00275D70; /* jne: not equal / not zero */

loc_00275D80: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275E08; /* je: equal / zero */

loc_00275D88: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275DDD; /* je: equal / zero */

loc_00275D92: ;
    eax = MEM32(ebx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x2C) (32-bit) */
    ecx = MEM32(edi + 8);
    ebp = MEM32(edi);
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00275DC3; /* je: equal / zero */

loc_00275DA6: ;
    edx = MEM32(edi + 4);
    MEM32(edx) = ebp;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0x00275DB8u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00275DB8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00275DC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275DBDu); } /* indirect call */
    }

loc_00275DC0: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00275DC3: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edi = ebp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00275DD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275DCFu); } /* indirect call */
    }

loc_00275DD2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275D92; /* jne: not equal / not zero */

loc_00275DD7: ;
    ebp = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00275DDD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275E07; /* je: equal / zero */

loc_00275DE2: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(ebp);
    MEM32(eax) = ecx;
    edx = MEM32(ebp);
    eax = MEM32(ebp + 4);
    edi = ebp;
    MEM32(edx + 4) = eax;
    PUSH32(esp, 0x00275DFAu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00275DFA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00275E02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275DFFu); } /* indirect call */
    }

loc_00275E02: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) - 1;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00275E07: ;
    POP32(esp, edi);

loc_00275E08: ;
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00275E27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275E21u); } /* indirect call */
    }

loc_00275E27: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00275E40
 * Original: 0x00275E40 - 0x0027607E (574 bytes, 202 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275E40: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    eax = MEM32(ebx + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00276070; /* je: equal / zero */

loc_00275E62: ;
    goto loc_00275E68;

loc_00275E64: ;
    esi = MEM32(esp + 0x18);

loc_00275E68: ;
    eax = MEM32(esi + 8);
    edx = MEM32(eax + 0x38);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0027602B; /* jne: not equal / not zero */

loc_00275E7C: ;
    edi = MEM32(ebx + 0x20);
    MEM32(ebx + 0x20) = ecx;
    eax = MEM32(eax + 0x2C);
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00275FC7; /* je: equal / zero */

loc_00275E93: ;
    eax = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00275FB3; /* jb: below (unsigned <) */

loc_00275EA3: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x10);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00276042; /* jle: less or equal (signed <=) */

loc_00275EB7: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00275F05; /* jne: not equal / not zero */

loc_00275EC1: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275EF1; /* je: equal / zero */

loc_00275EC8: ;
    ecx = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = ecx;
    if ((_fa != 0)) goto loc_00275EEA; /* jne: not equal / not zero */

loc_00275ED1: ;
    eax = MEM32(0x64CF9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275EDF; /* jne: not equal / not zero */

loc_00275EDA: ;
    PUSH32(esp, 0x00275EDFu); RECOMP_ABI_CALL(0x00279F90u, sub_00279F90); /* call 0x00279F90 */

loc_00275EDF: ;
    esi = eax;
    PUSH32(esp, 0x00275EE6u); RECOMP_ABI_CALL(0x0027A510u, sub_0027A510); /* call 0x0027A510 */

loc_00275EE6: ;
    esi = MEM32(esp + 0x18);

loc_00275EEA: ;
    MEM32(ebp + 8) = 0;

loc_00275EF1: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = edx;
    goto loc_00275FB3;

loc_00275F05: ;
    edx = MEM32(ebx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) eax = edx; /* cmovb */
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00275F23; /* jae: above or equal (unsigned >=) */

loc_00275F17: ;
    eax = ecx;
    ecx = eax + edi;
    MEM32(ebx + 0x20) = ecx;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00275F23: ;
    esi = MEM32(ebp + 8);
    esi = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x30);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
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
    edi = MEM32(ebx + 0x14);
    esi = MEM32(ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ecx;
    ecx = edi;
    MEM32(ebx + 0x14) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(ebx) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00276054; /* je: equal / zero */

loc_00275F65: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275FAB; /* jne: not equal / not zero */

loc_00275F73: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275F9C; /* je: equal / zero */

loc_00275F79: ;
    ecx = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00275F99; /* jne: not equal / not zero */

loc_00275F84: ;
    eax = MEM32(0x64CF9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275F92; /* jne: not equal / not zero */

loc_00275F8D: ;
    PUSH32(esp, 0x00275F92u); RECOMP_ABI_CALL(0x00279F90u, sub_00279F90); /* call 0x00279F90 */

loc_00275F92: ;
    esi = eax;
    PUSH32(esp, 0x00275F99u); RECOMP_ABI_CALL(0x0027A510u, sub_0027A510); /* call 0x0027A510 */

loc_00275F99: ;
    MEM32(ebp + 8) = edi;

loc_00275F9C: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = edx;

loc_00275FAB: ;
    esi = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = edi;

loc_00275FB3: ;
    edx = MEM32(esp + 0x20);
    ebp = MEM32(ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx + 0x2C) (32-bit) */
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00275E93; /* jne: not equal / not zero */

loc_00275FC7: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027606D; /* jne: not equal / not zero */

loc_00275FD2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x2C) (32-bit) */
    ebp = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00275FF8; /* je: equal / zero */

loc_00275FD9: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = ebp;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    edi = esi;
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0x00275FEDu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00275FED: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00275FF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00275FF2u); } /* indirect call */
    }

loc_00275FF5: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00275FF8: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027600Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027600Au); } /* indirect call */
    }

loc_0027600D: ;
    MEM32(ebx + 0x1C) = 0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275E64; /* jne: not equal / not zero */

loc_0027601D: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027602B: ;
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0x00276034u); RECOMP_ABI_CALL(0x00276140u, sub_00276140); /* call 0x00276140 */

loc_00276034: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00276042: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(ebx + 0x1C) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00276054: ;
    esi = ebx;
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, 0x0027605Fu); RECOMP_ABI_CALL(0x00275D30u, sub_00275D30); /* call 0x00275D30 */

loc_0027605F: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027606D: ;
    MEM32(ebx + 0x1C) = ecx;

loc_00276070: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00276080
 * Original: 0x00276080 - 0x00276140 (192 bytes, 61 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276080(void)
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

loc_00276080: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ebx + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = ebp;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002760A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002760A3u); } /* indirect call */
    }

loc_002760A9: ;
    MEM32(esp + 0x1C) = 0;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002760BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002760B8u); } /* indirect call */
    }

loc_002760BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002760C6; /* je: equal / zero */

loc_002760BF: ;
    esi = ebx;
    PUSH32(esp, 0x002760C6u); RECOMP_ABI_CALL(0x00276140u, sub_00276140); /* call 0x00276140 */

loc_002760C6: ;
    ecx = MEM32(ebx + 8);
    fp_push((double)SMEM32(ebx + 8)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002760D6; /* jge: greater or equal (signed >=) */

loc_002760D0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002760D6: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(0x333884)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEM32(ebx + 0x1C) = edx;
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_002760FF; /* ja: above (unsigned >) */

loc_002760F7: ;
    xmm0 = XMM_SCALAR(MEMF(0x333884)); /* movss */

loc_002760FF: ;
    eax = MEM32(ebx + 4);
    MEMF(ebx + 0x1C) = xmm0.f[0]; /* movss */
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276127; /* je: equal / zero */

loc_0027610D: ;
    /* nop */

loc_00276110: ;
    esi = MEM32(edi + 8);
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276120; /* jne: not equal / not zero */

loc_0027611A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00276120u); RECOMP_ABI_CALL(0x002761B0u, sub_002761B0); /* call 0x002761B0 */

loc_00276120: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276110; /* jne: not equal / not zero */

loc_00276127: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027612Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276128u); } /* indirect call */
    }

loc_0027612E: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00276140
 * Original: 0x00276140 - 0x002761AB (107 bytes, 36 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276140: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = esi + 0x28;
    PUSH32(esp, edi);
    MEM32(esp + 8) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00276165u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027615Fu); } /* indirect call */
    }

loc_00276165: ;
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00276177u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276174u); } /* indirect call */
    }

loc_00276177: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276192; /* je: equal / zero */

loc_0027617B: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276184; /* je: equal / zero */

loc_00276182: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00276184u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276182u); } /* indirect call */
    }

loc_00276184: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0027618Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027618Bu); } /* indirect call */
    }

loc_0027618E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276184; /* jne: not equal / not zero */

loc_00276192: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00276199u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276193u); } /* indirect call */
    }

loc_00276199: ;
    ecx = MEM32(esp + 8);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002761B0
 * Original: 0x002761B0 - 0x002762F1 (321 bytes, 107 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002761B0(void)
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

loc_002761B0: ;
    eax = MEM32(esi + 8);
    fp_push((double)SMEM32(esi + 8)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_GE(_fas, _fbs)) goto loc_002761C8; /* jge: greater or equal (signed >=) */

loc_002761C2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002761C8: ;
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x10); /* divss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002762EA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_002761F1: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x00276201u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_00276201: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 0x18));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 0x18)); }
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_A(_fa, _fb)) goto loc_00276225; /* ja: above (unsigned >) */

loc_00276219: ;
    MEM32(esp + 0x14) = 1;
    edi = MEM32(esp + 0x14);

loc_00276225: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_002762E9; /* jbe: below or equal (unsigned <=) */

loc_00276235: ;
    PUSH32(esp, ebx);

loc_00276236: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002762E8; /* jae: above or equal (unsigned >=) */

loc_0027624A: ;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x14) = ecx;
    eax = ecx;
    if ((_fas < 0)) goto loc_002762E0; /* js: sign (negative) */

loc_0027625A: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x276300);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00276272u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027626Fu); } /* indirect call */
    }

loc_00276272: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002762BB; /* je: equal / zero */

loc_0027627A: ;
    edi = MEM32(esi + 0x2C);
    ecx = MEM32(edi + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027628Cu); RECOMP_ABI_CALL(0x0027B300u, sub_0027B300); /* call 0x0027B300 */

loc_0027628C: ;
    ecx = 1;
    edx = esi + 0x28;
    ebx = eax;
    PUSH32(esp, 0x0027629Bu); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_0027629B: ;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ebx + 4);
    edi = MEM32(esp + 0x18);
    MEM32(edx) = ebx;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = edx;
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ecx;
    goto loc_002762C6;

loc_002762BB: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = eax;

loc_002762C6: ;
    eax = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00276236; /* jb: below (unsigned <) */

loc_002762D7: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002762E0: ;
    edx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = edx;

loc_002762E8: ;
    POP32(esp, ebx);

loc_002762E9: ;
    POP32(esp, edi);

loc_002762EA: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00276300
 * Original: 0x00276300 - 0x00276321 (33 bytes, 13 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276300: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x64D940);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 4);
    MEM32(eax) = esi;
    ecx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 4) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276330
 * Original: 0x00276330 - 0x0027635A (42 bytes, 15 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276330: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027633E; /* jne: not equal / not zero */

loc_00276339: ;
    PUSH32(esp, 0x0027633Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0027633E: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x0027634Au); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027634A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276350; /* je: equal / zero */

loc_0027634E: ;
    MEM32(eax) = eax;

loc_00276350: ;
    ecx = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276359; /* je: equal / zero */

loc_00276357: ;
    MEM32(ecx) = eax;

loc_00276359: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00276360
 * Original: 0x00276360 - 0x0027640D (173 bytes, 47 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276360: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296C36);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x34A64C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276389; /* jne: not equal / not zero */

loc_00276382: ;
    PUSH32(esp, 0x00276387u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00276387: ;
    edi = eax;

loc_00276389: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00276394u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027638Eu); } /* indirect call */
    }

loc_00276394: ;
    MEM32(esp + 0x14) = 0;
    SET_LO8(ecx, MEM8(0x6542C0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002763D1; /* jne: not equal / not zero */

loc_002763AB: ;
    MEM32(0x6542C0) = MEM32(0x6542C0) | eax;
    _fa = (uint32_t)(MEM32(0x6542C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x64CF90);
    esi = 0x6542BC;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x002763C4u); RECOMP_ABI_CALL(0x00276410u, sub_00276410); /* call 0x00276410 */

loc_002763C4: ;
    PUSH32(esp, 0x2978E0);
    PUSH32(esp, 0x002763CEu); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_002763CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002763D1: ;
    eax = MEM32(0x64CF90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002763ED; /* jne: not equal / not zero */

loc_002763DA: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002763ED; /* je: equal / zero */

loc_002763E3: ;
    ecx = 0x10;
    PUSH32(esp, 0x002763EDu); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_002763ED: ;
    esi = MEM32(0x64CF90);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002763FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002763F4u); } /* indirect call */
    }

loc_002763FA: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00276410
 * Original: 0x00276410 - 0x0027648C (124 bytes, 36 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276410: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296C0B);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00276433u); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_00276433: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0xE0;
    ecx = eax;
    PUSH32(esp, 0x00276442u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00276442: ;
    ebx = eax;
    MEM32(esp + 0x14) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00276472; /* je: equal / zero */

loc_00276454: ;
    PUSH32(esp, 0x10000);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00276463u); RECOMP_ABI_CALL(0x002796F0u, sub_002796F0); /* call 0x002796F0 */

loc_00276463: ;
    ecx = ebx + 0xC4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x00276470u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027646Au); } /* indirect call */
    }

loc_00276470: ;
    goto loc_00276474;

loc_00276472: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00276474: ;
    edx = MEM32(esi);
    ecx = MEM32(esp + 4);
    MEM32(edx) = ebx;
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276490
 * Original: 0x00276490 - 0x0027653B (171 bytes, 54 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276490: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x34A64C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002764B8; /* jne: not equal / not zero */

loc_002764B1: ;
    PUSH32(esp, 0x002764B6u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_002764B6: ;
    ebx = eax;

loc_002764B8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esp + 8) = ebx;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002764C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002764BDu); } /* indirect call */
    }

loc_002764C3: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276522; /* je: equal / zero */

loc_002764D7: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00276521; /* je: equal / zero */

loc_002764E4: ;
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    PUSH32(esp, 0x002764EDu); RECOMP_ABI_CALL(0x0027D020u, sub_0027D020); /* call 0x0027D020 */

loc_002764ED: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002764F5u); RECOMP_ABI_CALL(0x0027D020u, sub_0027D020); /* call 0x0027D020 */

loc_002764F5: ;
    eax = MEM32(0x64CFA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00276504; /* jne: not equal / not zero */

loc_002764FF: ;
    PUSH32(esp, 0x00276504u); RECOMP_ABI_CALL(0x0027CD80u, sub_0027CD80); /* call 0x0027CD80 */

loc_00276504: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00276514u); RECOMP_ABI_CALL(0x00295EEDu, sub_00295EED); /* call 0x00295EED */

loc_00276514: ;
    PUSH32(esp, 0x00276519u); RECOMP_ABI_CALL(0x00273430u, sub_00273430); /* call 0x00273430 */

loc_00276519: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00276521u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027651Eu); } /* indirect call */
    }

loc_00276521: ;
    POP32(esp, esi);

loc_00276522: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00276529u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276523u); } /* indirect call */
    }

loc_00276529: ;
    ecx = MEM32(esp + 8);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276540
 * Original: 0x00276540 - 0x0027655F (31 bytes, 11 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276540: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x332B90;
    if (TEST_Z(_fa, _fb)) goto loc_00276559; /* je: equal / zero */

loc_00276550: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276556u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_00276556: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276559: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276560
 * Original: 0x00276560 - 0x0027657F (31 bytes, 11 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276560: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x332BB4;
    if (TEST_Z(_fa, _fb)) goto loc_00276579; /* je: equal / zero */

loc_00276570: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276576u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_00276576: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276579: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276580
 * Original: 0x00276580 - 0x00276587 (7 bytes, 2 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276580(void)
{

loc_00276580: ;
    MEM32(ecx) = 0x332BB4;
    esp += 4; return; /* ret */

}

/**
 * sub_00276590
 * Original: 0x00276590 - 0x002765B0 (32 bytes, 12 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276590: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x0027659Au); RECOMP_ABI_CALL(0x002765B0u, sub_002765B0); /* call 0x002765B0 */

loc_0027659A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002765AA; /* je: equal / zero */

loc_002765A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002765A7u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_002765A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002765AA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002765B0
 * Original: 0x002765B0 - 0x002765B7 (7 bytes, 2 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002765B0(void)
{

loc_002765B0: ;
    MEM32(eax) = 0x332B90;
    esp += 4; return; /* ret */

}

/**
 * sub_002765C0
 * Original: 0x002765C0 - 0x00276631 (113 bytes, 34 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002765C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002765C0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296A63);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(esi) = 0x332BA0;
    MEM32(esp + 0x10) = 1;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276611; /* je: equal / zero */

loc_002765F0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276611; /* je: equal / zero */

loc_002765F7: ;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276611; /* je: equal / zero */

loc_002765FE: ;
    edi = MEM32(esi + 0xC);
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0027660Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276607u); } /* indirect call */
    }

loc_0027660A: ;
    MEM32(esi + 8) = 0;

loc_00276611: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x18) = 0x332B90;
    MEM32(esi) = 0x332BB4;
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276640
 * Original: 0x00276640 - 0x0027665F (31 bytes, 12 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276649u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_00276649: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276659; /* je: equal / zero */

loc_00276650: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276656u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_00276656: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276659: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276660
 * Original: 0x00276660 - 0x0027671D (189 bytes, 42 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276660: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x34A64C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276673; /* jne: not equal / not zero */

loc_0027666C: ;
    PUSH32(esp, 0x00276671u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00276671: ;
    edi = eax;

loc_00276673: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027667Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276674u); } /* indirect call */
    }

loc_0027667A: ;
    SET_LO8(ecx, MEM8(0x6540CC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002766EF; /* jne: not equal / not zero */

loc_00276689: ;
    edx = MEM32(0x6540CC);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2978F0);
    MEM32(0x6540CC) = edx;
    MEM32(0x653CA8) = 0x64CF94;
    MEM32(0x653CB0) = 0x653CC4;
    MEM32(0x653CB4) = 0;
    MEM32(0x653CC0) = 0;
    MEM32(0x653CAC) = 0x332BA0;
    MEM32(0x653CC4) = 0x332BA4;
    MEM8(0x653CC8) = LO8(eax);
    MEM32(0x64CF94) = 0x653CAC;
    PUSH32(esp, 0x002766ECu); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_002766EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002766EF: ;
    eax = MEM32(0x64CF94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027670B; /* jne: not equal / not zero */

loc_002766F8: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027670B; /* je: equal / zero */

loc_00276701: ;
    ecx = 0x10;
    PUSH32(esp, 0x0027670Bu); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_0027670B: ;
    esi = MEM32(0x64CF94);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00276718u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276712u); } /* indirect call */
    }

loc_00276718: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027666C
 * Original: 0x0027666C - 0x0027671D (177 bytes, 37 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027666C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027666C: ;
    PUSH32(esp, 0x00276671u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00276671: ;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027667Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276674u); } /* indirect call */
    }

loc_0027667A: ;
    SET_LO8(ecx, MEM8(0x6540CC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002766EF; /* jne: not equal / not zero */

loc_00276689: ;
    edx = MEM32(0x6540CC);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2978F0);
    MEM32(0x6540CC) = edx;
    MEM32(0x653CA8) = 0x64CF94;
    MEM32(0x653CB0) = 0x653CC4;
    MEM32(0x653CB4) = 0;
    MEM32(0x653CC0) = 0;
    MEM32(0x653CAC) = 0x332BA0;
    MEM32(0x653CC4) = 0x332BA4;
    MEM8(0x653CC8) = LO8(eax);
    MEM32(0x64CF94) = 0x653CAC;
    PUSH32(esp, 0x002766ECu); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_002766EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002766EF: ;
    eax = MEM32(0x64CF94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027670B; /* jne: not equal / not zero */

loc_002766F8: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027670B; /* je: equal / zero */

loc_00276701: ;
    ecx = 0x10;
    PUSH32(esp, 0x0027670Bu); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_0027670B: ;
    esi = MEM32(0x64CF94);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00276718u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276712u); } /* indirect call */
    }

loc_00276718: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276720
 * Original: 0x00276720 - 0x0027673E (30 bytes, 9 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276720: ;
    edx = MEM32(esp + 0xC);
    eax = ecx + 8;
    MEM32(edx) = eax;
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x407) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x407;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00276740
 * Original: 0x00276740 - 0x00276754 (20 bytes, 7 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276740(void)
{

loc_00276740: ;
    eax = MEM32(ecx);
    edx = ecx + 0x407;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00276751u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027674Eu); } /* indirect call */
    }

loc_00276751: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276760
 * Original: 0x00276760 - 0x0027677A (26 bytes, 8 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276760: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM8(eax) = 0;
    PUSH32(esp, 0x00276770u); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_00276770: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00276777u); RECOMP_ABI_CALL(0x00281CC1u, sub_00281CC1); /* call 0x00281CC1 */

loc_00276777: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00276780
 * Original: 0x00276780 - 0x002767BC (60 bytes, 22 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276780: ;
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00276795; /* jne: not equal / not zero */

loc_0027678E: ;
    PUSH32(esp, 0x00276793u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00276793: ;
    esi = eax;

loc_00276795: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027679Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276796u); } /* indirect call */
    }

loc_0027679C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002767A9; /* je: equal / zero */

loc_002767A3: ;
    MEM32(eax) = 0;

loc_002767A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002767B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002767AAu); } /* indirect call */
    }

loc_002767B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x002767B9u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_002767B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002767C0
 * Original: 0x002767C0 - 0x0027687D (189 bytes, 49 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002767C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002767C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296A46);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002767E9; /* jne: not equal / not zero */

loc_002767E2: ;
    PUSH32(esp, 0x002767E7u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_002767E7: ;
    esi = eax;

loc_002767E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002767F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002767EEu); } /* indirect call */
    }

loc_002767F4: ;
    MEM32(esp + 0x14) = 0;
    SET_LO8(ecx, MEM8(0x653ACC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00276841; /* jne: not equal / not zero */

loc_0027680B: ;
    MEM32(0x653ACC) = MEM32(0x653ACC) | eax;
    _fa = (uint32_t)(MEM32(0x653ACC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x650C9C);
    MEM32(0x650C98) = 0x64CF98;
    PUSH32(esp, 0x00276829u); RECOMP_ABI_CALL(0x00276880u, sub_00276880); /* call 0x00276880 */

loc_00276829: ;
    eax = MEM32(0x650C98);
    PUSH32(esp, 0x297900);
    MEM32(eax) = 0x650C9C;
    PUSH32(esp, 0x0027683Eu); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_0027683E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276841: ;
    eax = MEM32(0x64CF98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027685D; /* jne: not equal / not zero */

loc_0027684A: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027685D; /* je: equal / zero */

loc_00276853: ;
    ecx = 0x10;
    PUSH32(esp, 0x0027685Du); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_0027685D: ;
    edi = MEM32(0x64CF98);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027686Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276864u); } /* indirect call */
    }

loc_0027686A: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00276880
 * Original: 0x00276880 - 0x00276924 (164 bytes, 44 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276880: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x29692D);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    eax = esi + 0x2E04;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi + 0x2E00) = ebx;
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x002768B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002768ABu); } /* indirect call */
    }

loc_002768B1: ;
    MEM8(esi + 0x2E20) = LO8(ebx);
    MEM32(esi + 0x2E28) = 1;
    MEM8(esi + 0x2E2C) = LO8(ebx);
    MEM32(esi + 0x2E24) = 0x332BC0;
    MEM32(esp + 0x14) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi) = LO8(ebx);
    ecx = 0x980;
    edi = esi + 0x800;
    PUSH32(esp, 0x332C74);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi;
    PUSH32(esp, 0x002768F4u); RECOMP_ABI_CALL(0x002733B0u, sub_002733B0); /* call 0x002733B0 */

loc_002768F4: ;
    PUSH32(esp, 0x332C6C);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x00276901u); RECOMP_ABI_CALL(0x002733B0u, sub_002733B0); /* call 0x002733B0 */

loc_00276901: ;
    PUSH32(esp, 0x332C64);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x0027690Eu); RECOMP_ABI_CALL(0x002733B0u, sub_002733B0); /* call 0x002733B0 */

loc_0027690E: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276930
 * Original: 0x00276930 - 0x002769CA (154 bytes, 51 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276930: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x29692D);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    eax = MEM32(ebx + 0x2E00);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027698F; /* jbe: below or equal (unsigned <=) */

loc_00276960: ;
    edi = ebx + 0x80C;

loc_00276966: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027697E; /* je: equal / zero */

loc_0027696C: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0027697E; /* jne: not equal / not zero */

loc_00276971: ;
    SET_LO8(eax, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027697E; /* je: equal / zero */

loc_00276978: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0027697Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027697Cu); } /* indirect call */
    }

loc_0027697E: ;
    eax = MEM32(ebx + 0x2E00);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x98;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00276966; /* jb: below (unsigned <) */

loc_0027698F: ;
    eax = MEM32(ebx + 0x2E28);
    esi = ebx + 0x2E24;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_002769B0; /* jne: not equal / not zero */

loc_002769A1: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002769B0; /* je: equal / zero */

loc_002769A8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002769B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002769AEu); } /* indirect call */
    }

loc_002769B0: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(esi) = 0x332BB8;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002769D0
 * Original: 0x002769D0 - 0x00276A07 (55 bytes, 20 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002769D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002769D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276A01; /* je: equal / zero */

loc_002769D8: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x800);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002769E9u); RECOMP_ABI_CALL(0x0028AFEDu, sub_0028AFED); /* call 0x0028AFED */

loc_002769E9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002769F7; /* jl: less (signed <) */

loc_002769F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276A04; /* jne: not equal / not zero */

loc_002769F7: ;
    MEM8(esi + 0x7FF) = 0;
    eax = esi;
    esp += 4; return; /* ret */

loc_00276A01: ;
    MEM8(esi) = 0;

loc_00276A04: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00276A10
 * Original: 0x00276A10 - 0x00276B5C (332 bytes, 90 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_debug
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276A10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296A26);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x808) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x808;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ebx + 0x2E04;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edi = ecx;
    MEM32(esp + 0x14) = ebp;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00276A41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276A3Bu); } /* indirect call */
    }

loc_00276A41: ;
    eax = ebx + 0x2E20;
    MEM32(esp + 0x81C) = 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276A72; /* je: equal / zero */

loc_00276A57: ;
    /* int3: debug-trap slide byte, stepped over */
    ecx = 0x4000010D;
    PUSH32(esp, 0x00276A62u); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_00276A62: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00276A6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276A65u); } /* indirect call */
    }

loc_00276A6B: ;
    eax = esi;
    goto loc_00276B42;

loc_00276A72: ;
    esi = eax;
    MEM32(esp + 0xC) = esi;
    MEM8(esi) = 1;
    MEM8(esp + 0x81C) = 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2E00)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x2E00) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00276A90; /* jb: below (unsigned <) */

loc_00276A8B: ;
    edi = 1;

loc_00276A90: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276AAC; /* je: equal / zero */

loc_00276A99: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x98);
    ecx = MEM32(eax + ebx + 0x80C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276B2A; /* je: equal / zero */

loc_00276AAC: ;
    eax = MEM32(esp + 0x824);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276ABC; /* jne: not equal / not zero */

loc_00276AB7: ;
    eax = 0x332C5C;

loc_00276ABC: ;
    ecx = MEM32(esp + 0x82C);
    edx = MEM32(esp + 0x828);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x332C10);
    esi = 0x800;
    edx = esp + 0x24;
    PUSH32(esp, 0x00276AE0u); RECOMP_ABI_CALL(0x00276E40u, sub_00276E40); /* call 0x00276E40 */

loc_00276AE0: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x98);
    eax = MEM32(edi + ebx + 0x80C);
    edi = edi + ebx + 0x80C;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276B07; /* je: equal / zero */

loc_00276AFB: ;
    ecx = eax;
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00276B07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276B04u); } /* indirect call */
    }

loc_00276B07: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276B26; /* jne: not equal / not zero */

loc_00276B10: ;
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM8(eax) = 0;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00276B1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276B19u); } /* indirect call */
    }

loc_00276B1F: ;
    eax = 8;
    goto loc_00276B42;

loc_00276B26: ;
    esi = MEM32(esp + 0xC);

loc_00276B2A: ;
    ecx = 0x20000860;
    PUSH32(esp, 0x00276B34u); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_00276B34: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edi = eax;
    MEM8(esi) = 0;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00276B40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276B3Au); } /* indirect call */
    }

loc_00276B40: ;
    eax = edi;

loc_00276B42: ;
    ecx = MEM32(esp + 0x814);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x814) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x814;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00276B60
 * Original: 0x00276B60 - 0x00276DF3 (659 bytes, 193 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276B60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296A06);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x82C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x82C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = edi + 0x2E04;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    esi = ecx;
    MEM32(esp + 0x10) = ebp;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00276B90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276B8Au); } /* indirect call */
    }

loc_00276B90: ;
    eax = edi + 0x2E20;
    MEM32(esp + 0x83C) = 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276BB6; /* je: equal / zero */

loc_00276BA6: ;
    /* int3: debug-trap slide byte, stepped over */
    ecx = 0x4000010D;
    PUSH32(esp, 0x00276BB1u); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_00276BB1: ;
    goto loc_00276DCF;

loc_00276BB6: ;
    MEM32(esp + 8) = eax;
    MEM8(eax) = 1;
    MEM8(esp + 0x83C) = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2E00)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x2E00) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00276BD2; /* jb: below (unsigned <) */

loc_00276BCD: ;
    esi = 1;

loc_00276BD2: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276BF2; /* je: equal / zero */

loc_00276BDB: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x98);
    ecx = MEM32(eax + edi + 0x80C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276DBE; /* je: equal / zero */

loc_00276BF2: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = 0x325305;
    eax = 0x800;
    edx = 0x7FF;
    if (CMP_NE(_fa, _fb)) ecx = ebx; /* cmovne */
    PUSH32(esp, 0x00276C10u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00276C10: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_00276C28; /* je: equal / zero */

loc_00276C1F: ;
    /* nop */

loc_00276C20: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276C20; /* jne: not equal / not zero */

loc_00276C28: ;
    ecx = esp + 0x34;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = esp + ecx + 0x34;
    eax = 0x800;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = 0x7FF;
    ecx = 0x332BFC;
    PUSH32(esp, 0x00276C4Bu); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00276C4B: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_00276C68; /* je: equal / zero */

loc_00276C5A: ;
    /* nop */

loc_00276C60: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276C60; /* jne: not equal / not zero */

loc_00276C68: ;
    ecx = esp + 0x34;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = esp + ecx + 0x34;
    eax = 0x800;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x848);
    PUSH32(esp, edx);
    edx = 0x7FF;
    PUSH32(esp, 0x00276C8Du); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00276C8D: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_00276CA8; /* je: equal / zero */

loc_00276C9C: ;
    /* nop */

loc_00276CA0: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276CA0; /* jne: not equal / not zero */

loc_00276CA8: ;
    ecx = esp + 0x34;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = esp + ecx + 0x34;
    eax = 0x800;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = 0x7FF;
    ecx = 0x332BF0;
    PUSH32(esp, 0x00276CCBu); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00276CCB: ;
    SET_LO8(eax, MEM8(0x64D94C));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x332BCC;
    if (CMP_NE(_fa, _fb)) goto loc_00276CE1; /* jne: not equal / not zero */

loc_00276CDC: ;
    eax = 0x332BC8;

loc_00276CE1: ;
    ecx = MEM32(esp + 0x84C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, 0x21);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00276CF6u); RECOMP_ABI_CALL(0x0028A699u, sub_0028A699); /* call 0x0028A699 */

loc_00276CF6: ;
    SET_LO8(ecx, MEM8(esp + 0x44));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_00276D0D; /* je: equal / zero */

loc_00276D05: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276D05; /* jne: not equal / not zero */

loc_00276D0D: ;
    ecx = esp + 0x34;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = esp + ecx + 0x34;
    eax = 0x800;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = 0x7FF;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00276D2Fu); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00276D2F: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_00276D48; /* je: equal / zero */

loc_00276D3E: ;
    edi = edi;

loc_00276D40: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276D40; /* jne: not equal / not zero */

loc_00276D48: ;
    ecx = esp + 0x34;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = esp + ecx + 0x34;
    eax = 0x800;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = 0x7FF;
    ecx = 0x332BD4;
    PUSH32(esp, 0x00276D6Bu); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00276D6B: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x98);
    ecx = MEM32(esi + edi + 0x80C);
    eax = esi + edi + 0x80C;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276D94; /* je: equal / zero */

loc_00276D86: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00276D94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276D91u); } /* indirect call */
    }

loc_00276D94: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276DBE; /* jne: not equal / not zero */

loc_00276D9D: ;
    edx = MEM32(esp + 0x844);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276DBE; /* jne: not equal / not zero */

loc_00276DA9: ;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM8(eax) = 0;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00276DB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276DB1u); } /* indirect call */
    }

loc_00276DB7: ;
    eax = 8;
    goto loc_00276DDA;

loc_00276DBE: ;
    ecx = 0x4000010D;
    PUSH32(esp, 0x00276DC8u); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_00276DC8: ;
    ecx = MEM32(esp + 8);
    MEM8(ecx) = 0;

loc_00276DCF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00276DD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276DD2u); } /* indirect call */
    }

loc_00276DD8: ;
    eax = esi;

loc_00276DDA: ;
    ecx = MEM32(esp + 0x834);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x838) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x838;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00276E00
 * Original: 0x00276E00 - 0x00276E3C (60 bytes, 22 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276E00: ;
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00276E15; /* jne: not equal / not zero */

loc_00276E0E: ;
    PUSH32(esp, 0x00276E13u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00276E13: ;
    esi = eax;

loc_00276E15: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00276E1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276E16u); } /* indirect call */
    }

loc_00276E1C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276E29; /* je: equal / zero */

loc_00276E23: ;
    MEM32(eax) = 0;

loc_00276E29: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00276E30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276E2Au); } /* indirect call */
    }

loc_00276E30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00276E39u); RECOMP_ABI_CALL(0x00276930u, sub_00276930); /* call 0x00276930 */

loc_00276E39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276E40
 * Original: 0x00276E40 - 0x00276E5B (27 bytes, 12 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276E40: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00276E51u); RECOMP_ABI_CALL(0x0028AFEDu, sub_0028AFED); /* call 0x0028AFED */

loc_00276E51: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00276E5A; /* jge: greater or equal (signed >=) */

loc_00276E58: ;
    eax = esi;

loc_00276E5A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00276E60
 * Original: 0x00276E60 - 0x00276E66 (6 bytes, 3 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276E60(void)
{

loc_00276E60: ;
    ecx = MEM32(eax);
    MEM8(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00276E70
 * Original: 0x00276E70 - 0x00276E77 (7 bytes, 2 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276E70(void)
{

loc_00276E70: ;
    MEM32(eax) = 0x332BB8;
    esp += 4; return; /* ret */

}

/**
 * sub_00276E80
 * Original: 0x00276E80 - 0x00276EAC (44 bytes, 16 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276E80: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x332BB8;
    if (TEST_Z(_fa, _fb)) goto loc_00276EA6; /* je: equal / zero */

loc_00276E90: ;
    eax = MEM32(0x64CF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276E9E; /* jne: not equal / not zero */

loc_00276E99: ;
    PUSH32(esp, 0x00276E9Eu); RECOMP_ABI_CALL(0x00273050u, sub_00273050); /* call 0x00273050 */

loc_00276E9E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00276EA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276EA3u); } /* indirect call */
    }

loc_00276EA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276EB0
 * Original: 0x00276EB0 - 0x00276EDD (45 bytes, 17 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x00276EBAu); RECOMP_ABI_CALL(0x00276E70u, sub_00276E70); /* call 0x00276E70 */

loc_00276EBA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276ED7; /* je: equal / zero */

loc_00276EC1: ;
    eax = MEM32(0x64CF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276ECF; /* jne: not equal / not zero */

loc_00276ECA: ;
    PUSH32(esp, 0x00276ECFu); RECOMP_ABI_CALL(0x00273050u, sub_00273050); /* call 0x00273050 */

loc_00276ECF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00276ED7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276ED4u); } /* indirect call */
    }

loc_00276ED7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276EE0
 * Original: 0x00276EE0 - 0x00277006 (294 bytes, 116 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276EE0: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = ebx + 8;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00276F07; /* jne: not equal / not zero */

loc_00276EF2: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    edi = ebx + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00276F07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276F04u); } /* indirect call */
    }

loc_00276F07: ;
    edi = MEM32(ebx + 0xC);
    ebp = MEM32(ebx + 0x10);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00276FD5; /* ja: above (unsigned >) */

loc_00276F22: ;
    if (CMP_NE(_fa, _fb)) goto loc_00276F61; /* jne: not equal / not zero */

loc_00276F24: ;
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
    edi = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x14) = edi;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00276F48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276F45u); } /* indirect call */
    }

loc_00276F48: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 8) = 0;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00276F61: ;
    MEM32(esp + 0xC) = esi;

loc_00276F65: ;
    esi = MEM32(esp + 0xC);
    ecx = ebp;
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
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(ebx + 8);
    edx = MEM32(ecx);
    esi = ebx + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00276F90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276F8Du); } /* indirect call */
    }

loc_00276F90: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebx + 0x10;
    PUSH32(esp, ebp);
    edi = ebx + 0xC;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00276FBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00276FBCu); } /* indirect call */
    }

loc_00276FBF: ;
    edi = MEM32(edi);
    ebp = MEM32(ebp);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00276F65; /* jb: below (unsigned <) */

loc_00276FCE: ;
    esi = MEM32(esp + 0xC);
    edi = MEM32(ebx + 0xC);

loc_00276FD5: ;
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
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebx + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    eax = edx;
    POP32(esp, esi);
    MEM32(ebx + 0x14) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277010
 * Original: 0x00277010 - 0x0027703B (43 bytes, 16 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277010: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00277018u); RECOMP_ABI_CALL(0x00277040u, sub_00277040); /* call 0x00277040 */

loc_00277018: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277035; /* je: equal / zero */

loc_0027701F: ;
    eax = MEM32(0x64CF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027702D; /* jne: not equal / not zero */

loc_00277028: ;
    PUSH32(esp, 0x0027702Du); RECOMP_ABI_CALL(0x00273050u, sub_00273050); /* call 0x00273050 */

loc_0027702D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00277035u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277032u); } /* indirect call */
    }

loc_00277035: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277040
 * Original: 0x00277040 - 0x00277047 (7 bytes, 2 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277040(void)
{

loc_00277040: ;
    MEM32(ecx) = 0x3329D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00277050
 * Original: 0x00277050 - 0x00277079 (41 bytes, 16 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277050: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027705Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277056u); } /* indirect call */
    }

loc_0027705C: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00277066u); RECOMP_ABI_CALL(0x0028BA96u, sub_0028BA96); /* call 0x0028BA96 */

loc_00277066: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277072u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027706Cu); } /* indirect call */
    }

loc_00277072: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277080
 * Original: 0x00277080 - 0x002770A9 (41 bytes, 16 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277080: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027708Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277086u); } /* indirect call */
    }

loc_0027708C: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00277096u); RECOMP_ABI_CALL(0x0028BA96u, sub_0028BA96); /* call 0x0028BA96 */

loc_00277096: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002770A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027709Cu); } /* indirect call */
    }

loc_002770A2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002770B0
 * Original: 0x002770B0 - 0x002770D3 (35 bytes, 12 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002770B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002770B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002770BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002770B5u); } /* indirect call */
    }

loc_002770BB: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002770C5u); RECOMP_ABI_CALL(0x0028BAA8u, sub_0028BAA8); /* call 0x0028BAA8 */

loc_002770C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002770CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002770C9u); } /* indirect call */
    }

loc_002770CF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002770E0
 * Original: 0x002770E0 - 0x00277103 (35 bytes, 12 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002770E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002770E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002770EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002770E5u); } /* indirect call */
    }

loc_002770EB: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002770F5u); RECOMP_ABI_CALL(0x0028BAA8u, sub_0028BAA8); /* call 0x0028BAA8 */

loc_002770F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002770FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002770F9u); } /* indirect call */
    }

loc_002770FF: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00277110
 * Original: 0x00277110 - 0x0027716E (94 bytes, 29 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277110: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00277136u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277130u); } /* indirect call */
    }

loc_00277136: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0027714Du); RECOMP_ABI_CALL(0x0028C316u, sub_0028C316); /* call 0x0028C316 */

loc_0027714D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277159u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277153u); } /* indirect call */
    }

loc_00277159: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00277170
 * Original: 0x00277170 - 0x002771CE (94 bytes, 29 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277170: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00277196u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277190u); } /* indirect call */
    }

loc_00277196: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x002771ADu); RECOMP_ABI_CALL(0x0028C316u, sub_0028C316); /* call 0x0028C316 */

loc_002771AD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002771B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002771B3u); } /* indirect call */
    }

loc_002771B9: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002771D0
 * Original: 0x002771D0 - 0x002771E6 (22 bytes, 9 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002771D0(void)
{

loc_002771D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002771DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002771D5u); } /* indirect call */
    }

loc_002771DB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002771E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002771DCu); } /* indirect call */
    }

loc_002771E2: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002771F0
 * Original: 0x002771F0 - 0x00277208 (24 bytes, 9 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002771F0(void)
{

loc_002771F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002771FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002771F5u); } /* indirect call */
    }

loc_002771FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277202u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002771FCu); } /* indirect call */
    }

loc_00277202: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277210
 * Original: 0x00277210 - 0x00277215 (5 bytes, 2 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00277210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277210: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00277220
 * Original: 0x00277220 - 0x00277225 (5 bytes, 2 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00277220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277220: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00277230
 * Original: 0x00277230 - 0x0027727A (74 bytes, 18 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277230: ;
    MEM32(ecx) = 0xBAAAAAABu;
    MEM32(ecx + 4) = 0;
    MEM32(ecx + 8) = 0;
    eax = ecx + 0x20;
    MEM32(ecx + 0xC) = eax;
    MEM32(eax) = 0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0xFE0;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    edx = MEM32(ecx + 0xC);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(ecx + 0x10) = esi;
    MEM32(ecx + 0x14) = 0;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = 0xEAAAAAAEu;
    esp += 4; return; /* ret */

}

/**
 * sub_00277280
 * Original: 0x00277280 - 0x002772BB (59 bytes, 26 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277280: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00277291; /* je: equal / zero */

loc_0027728B: ;
    edi = MEM32(eax + 8);
    MEM32(ecx + 8) = edi;

loc_00277291: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027729E; /* je: equal / zero */

loc_00277298: ;
    edi = MEM32(eax + 4);
    MEM32(ecx + 4) = edi;

loc_0027729E: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002772A9; /* jne: not equal / not zero */

loc_002772A3: ;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;

loc_002772A9: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002772B2; /* jne: not equal / not zero */

loc_002772AD: ;
    ecx = MEM32(eax + 8);
    MEM32(edx) = ecx;

loc_002772B2: ;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002772C0
 * Original: 0x002772C0 - 0x002773F0 (304 bytes, 82 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002772C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002772C0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296C68);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(edi) = 0x3329D0;
    eax = MEM32(0x64CF94);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002772F1; /* jne: not equal / not zero */

loc_002772EC: ;
    PUSH32(esp, 0x002772F1u); RECOMP_ABI_CALL(0x00276660u, sub_00276660); /* call 0x00276660 */

loc_002772F1: ;
    _fa = (uint32_t)(MEM32(0x343DF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x343DF4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027730E; /* jne: not equal / not zero */

loc_002772FA: ;
    PUSH32(esp, 0x332AF0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00277306u); RECOMP_ABI_CALL(0x00272C60u, sub_00272C60); /* call 0x00272C60 */

loc_00277306: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x343DF4) = eax;

loc_0027730E: ;
    ecx = edi + 4;
    MEM32(esp + 0x10) = esi;
    MEM32(edi) = 0x332CD8;
    eax = ecx + 0x34;
    edx = 0x10;

loc_00277323: ;
    MEM32(ecx) = esi;
    MEM32(eax + -48) = esi;
    MEM32(eax + -44) = esi;
    MEM32(eax + -40) = esi;
    MEM32(eax + -36) = esi;
    MEM32(eax + -32) = esi;
    MEM32(eax + -28) = esi;
    MEM32(eax + -24) = esi;
    MEM32(eax + -20) = esi;
    MEM32(eax + -16) = esi;
    MEM32(eax + -12) = esi;
    MEM32(eax + -8) = esi;
    MEM32(eax + -4) = esi;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00277323; /* jne: not equal / not zero */

loc_00277357: ;
    eax = edi + 0x3F0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(edi + 0x3C4) = esi;
    MEM32(edi + 0x3C8) = esi;
    MEM32(edi + 0x3CC) = esi;
    MEM32(edi + 0x3D0) = esi;
    MEM32(edi + 0x3D4) = esi;
    MEM32(edi + 0x3D8) = esi;
    MEM32(edi + 0x3DC) = esi;
    MEM32(edi + 0x3E0) = esi;
    MEM32(edi + 0x3E4) = esi;
    MEM32(edi + 0x3E8) = esi;
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x002773A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027739Au); } /* indirect call */
    }

loc_002773A0: ;
    _fa = (uint32_t)(MEM32(0x64CF90)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64CF90), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002773AD; /* jne: not equal / not zero */

loc_002773A8: ;
    PUSH32(esp, 0x002773ADu); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_002773AD: ;
    ecx = MEM32(0x343DF4);
    PUSH32(esp, 0x332F4C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002773BEu); RECOMP_ABI_CALL(0x00272C60u, sub_00272C60); /* call 0x00272C60 */

loc_002773BE: ;
    MEM32(edi + 0x3EC) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + 0x3C;
    ecx = 0x10;
    /* nop */

loc_002773D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002773D0; /* jne: not equal / not zero */

loc_002773DB: ;
    ecx = MEM32(esp + 8);
    eax = edi;
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002773F0
 * Original: 0x002773F0 - 0x00277412 (34 bytes, 13 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002773F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002773F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002773F8u); RECOMP_ABI_CALL(0x00277420u, sub_00277420); /* call 0x00277420 */

loc_002773F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027740C; /* je: equal / zero */

loc_002773FF: ;
    PUSH32(esp, 0x00277404u); RECOMP_ABI_CALL(0x00273430u, sub_00273430); /* call 0x00273430 */

loc_00277404: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027740Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277409u); } /* indirect call */
    }

loc_0027740C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277420
 * Original: 0x00277420 - 0x00277477 (87 bytes, 25 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277420: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296908);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x332CD8;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0027745Au); RECOMP_ABI_CALL(0x00277CC0u, sub_00277CC0); /* call 0x00277CC0 */

loc_0027745A: ;
    ecx = esi;
    PUSH32(esp, 0x00277461u); RECOMP_ABI_CALL(0x002779C0u, sub_002779C0); /* call 0x002779C0 */

loc_00277461: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3329D0;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277449
 * Original: 0x00277449 - 0x00277477 (46 bytes, 12 insns)
 * Folder: base (library: 0x002759B0 and 0x00277480)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277449(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277449: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0027745Au); RECOMP_ABI_CALL(0x00277CC0u, sub_00277CC0); /* call 0x00277CC0 */

loc_0027745A: ;
    ecx = esi;
    PUSH32(esp, 0x00277461u); RECOMP_ABI_CALL(0x002779C0u, sub_002779C0); /* call 0x002779C0 */

loc_00277461: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3329D0;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027D390
 * Original: 0x0027D390 - 0x0027D3E7 (87 bytes, 31 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D390: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027D3C9; /* je: equal / zero */

loc_0027D3A5: ;
    MEM8(esp + 0xC) = LO8(eax);
    ecx = MEM32(esp + 0xC);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0x0027D3BCu); RECOMP_ABI_CALL(0x0027D710u, sub_0027D710); /* call 0x0027D710 */

loc_0027D3BC: ;
    edi = esp + 8;
    edx = ebx;
    ecx = esi;
    PUSH32(esp, 0x0027D3C9u); RECOMP_ABI_CALL(0x0027D450u, sub_0027D450); /* call 0x0027D450 */

loc_0027D3C9: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = ebx;
    edi = esi;
    PUSH32(esp, 0x0027D3E0u); RECOMP_ABI_CALL(0x0027C240u, sub_0027C240); /* call 0x0027C240 */

loc_0027D3E0: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D3F0
 * Original: 0x0027D3F0 - 0x0027D447 (87 bytes, 31 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D3F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027D429; /* je: equal / zero */

loc_0027D405: ;
    MEM8(esp + 0xC) = LO8(eax);
    ecx = MEM32(esp + 0xC);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0x0027D41Cu); RECOMP_ABI_CALL(0x0027D7B0u, sub_0027D7B0); /* call 0x0027D7B0 */

loc_0027D41C: ;
    edi = esp + 8;
    edx = ebx;
    ecx = esi;
    PUSH32(esp, 0x0027D429u); RECOMP_ABI_CALL(0x0027D540u, sub_0027D540); /* call 0x0027D540 */

loc_0027D429: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = ebx;
    edi = esi;
    PUSH32(esp, 0x0027D440u); RECOMP_ABI_CALL(0x0027C240u, sub_0027C240); /* call 0x0027C240 */

loc_0027D440: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D450
 * Original: 0x0027D450 - 0x0027D4FD (173 bytes, 72 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D450: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0027D45C; /* jne: not equal / not zero */

loc_0027D459: ;
    eax = MEM32(esi + 4);

loc_0027D45C: ;
    ebx = MEM32(edx);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x30) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D498; /* je: equal / zero */

loc_0027D478: ;
    ebx = MEM32(edx);
    ebp = MEM32(ebx + 0x30);
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D478; /* jne: not equal / not zero */

loc_0027D498: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    SET_LO8(ecx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D4C3; /* jne: not equal / not zero */

loc_0027D4A5: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D4F5; /* je: equal / zero */

loc_0027D4AB: ;
    ebx = MEM32(edx);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x30) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D4A5; /* je: equal / zero */

loc_0027D4C3: ;
    ecx = MEM32(eax + 0xC);
    ebx = MEM32(edx);
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x30) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027D4EF; /* je: equal / zero */

loc_0027D4DC: ;
    edx = MEM32(edx);
    ecx = MEM32(eax + 0xC);
    esi = MEM32(edx + 0x30);
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(edx);

loc_0027D4EF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0027D4F5: ;
    MEM32(edi) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D500
 * Original: 0x0027D500 - 0x0027D536 (54 bytes, 25 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0027D500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D500: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D51A; /* je: equal / zero */

loc_0027D507: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D535; /* je: equal / zero */

loc_0027D50E: ;
    edi = edi;

loc_0027D510: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D510; /* jne: not equal / not zero */

loc_0027D519: ;
    esp += 4; return; /* ret */

loc_0027D51A: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D533; /* je: equal / zero */

loc_0027D520: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D533; /* je: equal / zero */

loc_0027D525: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D535; /* jne: not equal / not zero */

loc_0027D52A: ;
    ecx = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D525; /* jne: not equal / not zero */

loc_0027D533: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027D535: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D540
 * Original: 0x0027D540 - 0x0027D60D (205 bytes, 73 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D540: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0027D54C; /* jne: not equal / not zero */

loc_0027D549: ;
    eax = MEM32(esi + 4);

loc_0027D54C: ;
    ebx = MEM32(edx);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x8C) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D596; /* je: equal / zero */

loc_0027D56E: ;
    edi = edi;

loc_0027D570: ;
    ebx = MEM32(edx);
    ebp = MEM32(ebx + 0x8C);
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D570; /* jne: not equal / not zero */

loc_0027D596: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    SET_LO8(ecx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D5C7; /* jne: not equal / not zero */

loc_0027D5A3: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D605; /* je: equal / zero */

loc_0027D5A9: ;
    ebx = MEM32(edx);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x8C) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D5A3; /* je: equal / zero */

loc_0027D5C7: ;
    ecx = MEM32(eax + 0xC);
    ebx = MEM32(edx);
    ecx = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x8C) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027D5FF; /* je: equal / zero */

loc_0027D5E6: ;
    edx = MEM32(edx);
    ecx = MEM32(eax + 0xC);
    esi = MEM32(edx + 0x8C);
    ecx = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(edx);

loc_0027D5FF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0027D605: ;
    MEM32(edi) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D610
 * Original: 0x0027D610 - 0x0027D65D (77 bytes, 31 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D610: ;
    eax = MEM32(ecx + 0x140);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027D65C; /* jbe: below or equal (unsigned <=) */

loc_0027D61C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0xFFFFFF00u;
    PUSH32(esp, edi);
    esi = ecx + 0x101;
    edi = ecx + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0027D630: ;
    edx = MEM32(edi);
    ebx = MEM32(ecx + eax * 4);
    MEM32(edi) = ebx;
    MEM32(ecx + eax * 4) = edx;
    SET_LO8(edx, MEM8(esi));
    SET_LO8(ebx, MEM8(ecx + eax + 0x100));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + eax + 0x100) = LO8(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027D630; /* jb: below (unsigned <) */

loc_0027D658: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0027D65C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D660
 * Original: 0x0027D660 - 0x0027D70B (171 bytes, 78 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D660: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D6E2; /* je: equal / zero */

loc_0027D66C: ;
    esi = MEM32(ecx);
    edi = edi;

loc_0027D670: ;
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D67E; /* jne: not equal / not zero */

loc_0027D67A: ;
    SET_LO8(ecx, 1);
    goto loc_0027D687;

loc_0027D67E: ;
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D687; /* jne: not equal / not zero */

loc_0027D685: ;
    edi = eax;

loc_0027D687: ;
    edx = ZX8(LO8(ecx));
    eax = MEM32(eax + edx * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D670; /* jne: not equal / not zero */

loc_0027D692: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D6E2; /* je: equal / zero */

loc_0027D696: ;
    ecx = edi;
    PUSH32(esp, 0x0027D69Du); RECOMP_ABI_CALL(0x0027D500u, sub_0027D500); /* call 0x0027D500 */

loc_0027D69D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D6E2; /* je: equal / zero */

loc_0027D6A1: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(edx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0027D6B0; /* je: equal / zero */

loc_0027D6AD: ;
    SET_LO8(ebx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */

loc_0027D6B0: ;
    ecx = MEM32(edx + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(ecx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0027D6BC; /* je: equal / zero */

loc_0027D6B9: ;
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */

loc_0027D6BC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D6E2; /* jne: not equal / not zero */

loc_0027D6C0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) edi = eax; /* cmove */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D6EA; /* je: equal / zero */

loc_0027D6CC: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D6DC; /* je: equal / zero */

loc_0027D6D3: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D6D3; /* jne: not equal / not zero */

loc_0027D6DC: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D6A1; /* jne: not equal / not zero */

loc_0027D6E2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0027D6EA: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D6E2; /* je: equal / zero */

loc_0027D6F0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D6E2; /* je: equal / zero */

loc_0027D6F5: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D6DC; /* jne: not equal / not zero */

loc_0027D6FA: ;
    eax = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D6F5; /* jne: not equal / not zero */

loc_0027D703: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D710
 * Original: 0x0027D710 - 0x0027D7A6 (150 bytes, 64 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D710: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D77F; /* je: equal / zero */

loc_0027D71B: ;
    edx = MEM32(ecx);
    esi = MEM32(edx + 0x30);

loc_0027D720: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), esi (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = ZX8(LO8(ecx));
    if (CMP_EQ(_fa, _fb)) edi = eax; /* cmove */
    eax = MEM32(eax + edx * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D720; /* jne: not equal / not zero */

loc_0027D739: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D77F; /* je: equal / zero */

loc_0027D73D: ;
    ecx = edi;
    PUSH32(esp, 0x0027D744u); RECOMP_ABI_CALL(0x0027D500u, sub_0027D500); /* call 0x0027D500 */

loc_0027D744: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D77F; /* je: equal / zero */

loc_0027D748: ;
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D77F; /* jne: not equal / not zero */

loc_0027D757: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_AE(_fa, _fb)) edi = eax; /* cmovae */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D786; /* je: equal / zero */

loc_0027D763: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D779; /* je: equal / zero */

loc_0027D76A: ;
    /* nop */

loc_0027D770: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D770; /* jne: not equal / not zero */

loc_0027D779: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D748; /* jne: not equal / not zero */

loc_0027D77F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0027D786: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D77F; /* je: equal / zero */

loc_0027D78C: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D77F; /* je: equal / zero */

loc_0027D791: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D779; /* jne: not equal / not zero */

loc_0027D796: ;
    eax = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D791; /* jne: not equal / not zero */

loc_0027D79F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D7B0
 * Original: 0x0027D7B0 - 0x0027D84B (155 bytes, 64 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D7B0: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D824; /* je: equal / zero */

loc_0027D7BB: ;
    edx = MEM32(ecx);
    esi = MEM32(edx + 0x8C);

loc_0027D7C3: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8C), esi (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = ZX8(LO8(ecx));
    if (CMP_EQ(_fa, _fb)) edi = eax; /* cmove */
    eax = MEM32(eax + edx * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D7C3; /* jne: not equal / not zero */

loc_0027D7DF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D824; /* je: equal / zero */

loc_0027D7E3: ;
    ecx = edi;
    PUSH32(esp, 0x0027D7EAu); RECOMP_ABI_CALL(0x0027D500u, sub_0027D500); /* call 0x0027D500 */

loc_0027D7EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D824; /* je: equal / zero */

loc_0027D7EE: ;
    edi = edi;

loc_0027D7F0: ;
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D824; /* jne: not equal / not zero */

loc_0027D802: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_AE(_fa, _fb)) edi = eax; /* cmovae */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D82B; /* je: equal / zero */

loc_0027D80E: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D81E; /* je: equal / zero */

loc_0027D815: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D815; /* jne: not equal / not zero */

loc_0027D81E: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D7F0; /* jne: not equal / not zero */

loc_0027D824: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0027D82B: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D824; /* je: equal / zero */

loc_0027D831: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D824; /* je: equal / zero */

loc_0027D836: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D81E; /* jne: not equal / not zero */

loc_0027D83B: ;
    eax = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D836; /* jne: not equal / not zero */

loc_0027D844: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D850
 * Original: 0x0027D850 - 0x0027D856 (6 bytes, 2 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D850(void)
{

loc_0027D850: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D860
 * Original: 0x0027D860 - 0x0027D881 (33 bytes, 9 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D860: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D872; /* je: equal / zero */

loc_0027D864: ;
    MEM32(eax + 4) = 0x332AFC;
    MEM32(eax) = 0x333214;
    esp += 4; return; /* ret */

loc_0027D872: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x332AFC;
    MEM32(eax) = 0x333214;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D890
 * Original: 0x0027D890 - 0x0027D8F7 (103 bytes, 24 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D890: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297398);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esi + 0xC;
    MEM32(esp + 0xC) = 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi) = 0x333654;
    MEM32(esi + 4) = 0;
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x0027D8C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027D8C3u); } /* indirect call */
    }

loc_0027D8C9: ;
    PUSH32(esp, 0x0027D8CEu); RECOMP_ABI_CALL(0x00276330u, sub_00276330); /* call 0x00276330 */

loc_0027D8CE: ;
    ecx = MEM32(esp + 4);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = 0;
    MEM8(esi + 0x34) = 1;
    MEM32(esi + 0x38) = 2;
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D900
 * Original: 0x0027D900 - 0x0027D98F (143 bytes, 44 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D900: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297493);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    MEM32(esi) = 0x333654;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0x0027D934u); RECOMP_ABI_CALL(0x0027A560u, sub_0027A560); /* call 0x0027A560 */

loc_0027D934: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax);
    PUSH32(esp, 0x275A60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D94Au); RECOMP_ABI_CALL(0x0027B3F0u, sub_0027B3F0); /* call 0x0027B3F0 */

loc_0027D94A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0x28;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0027D95Au); RECOMP_ABI_CALL(0x000F94B0u, sub_000F94B0); /* call 0x000F94B0 */

loc_0027D95A: ;
    edi = MEM32(ebx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D96E; /* je: equal / zero */

loc_0027D961: ;
    PUSH32(esp, 0x0027D966u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027D966: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027D96Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027D96Bu); } /* indirect call */
    }

loc_0027D96E: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 4) = 0;
    POP32(esp, edi);
    MEM32(esi) = 0x333214;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D990
 * Original: 0x0027D990 - 0x0027D999 (9 bytes, 4 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D990: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D9A0
 * Original: 0x0027D9A0 - 0x0027D9B1 (17 bytes, 5 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D9A0(void)
{

loc_0027D9A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027D9C0
 * Original: 0x0027D9C0 - 0x0027D9CF (15 bytes, 8 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D9C0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D9CE; /* je: equal / zero */

loc_0027D9C7: ;
    ecx = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0027D9CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027D9CBu); } /* indirect call */
    }

loc_0027D9CD: ;
    POP32(esp, ecx);

loc_0027D9CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D9D0
 * Original: 0x0027D9D0 - 0x0027D9F7 (39 bytes, 16 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D9D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027D9D9u); RECOMP_ABI_CALL(0x0027D900u, sub_0027D900); /* call 0x0027D900 */

loc_0027D9D9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D9F1; /* je: equal / zero */

loc_0027D9E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D9F1; /* je: equal / zero */

loc_0027D9E4: ;
    PUSH32(esp, 0x0027D9E9u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027D9E9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027D9F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027D9EEu); } /* indirect call */
    }

loc_0027D9F1: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027DA00
 * Original: 0x0027DA00 - 0x0027DA07 (7 bytes, 3 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DA00(void)
{

loc_0027DA00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027DA06u); RECOMP_ABI_CALL(0x0027D900u, sub_0027D900); /* call 0x0027D900 */

loc_0027DA06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027DA10
 * Original: 0x0027DA10 - 0x0027DA38 (40 bytes, 16 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DA10: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi;
    PUSH32(esp, 0x0027DA1Au); RECOMP_ABI_CALL(0x0027DA00u, sub_0027DA00); /* call 0x0027DA00 */

loc_0027DA1A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DA32; /* je: equal / zero */

loc_0027DA21: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DA32; /* je: equal / zero */

loc_0027DA25: ;
    PUSH32(esp, 0x0027DA2Au); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027DA2A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027DA32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027DA2Fu); } /* indirect call */
    }

loc_0027DA32: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027DA40
 * Original: 0x0027DA40 - 0x0027DA5B (27 bytes, 9 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DA40: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi) = 0x333680;
    if (CMP_EQ(_fa, _fb)) goto loc_0027DA54; /* je: equal / zero */

loc_0027DA4E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027DA54u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_0027DA54: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027DA5Au); RECOMP_ABI_CALL(0x00279F00u, sub_00279F00); /* call 0x00279F00 */

loc_0027DA5A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027DA60
 * Original: 0x0027DA60 - 0x0027DA8A (42 bytes, 18 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DA60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0027DA68u); RECOMP_ABI_CALL(0x0027DA40u, sub_0027DA40); /* call 0x0027DA40 */

loc_0027DA68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DA84; /* je: equal / zero */

loc_0027DA6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DA84; /* je: equal / zero */

loc_0027DA73: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x0027DA7Bu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027DA7B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027DA83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027DA80u); } /* indirect call */
    }

loc_0027DA83: ;
    POP32(esp, edi);

loc_0027DA84: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027DA90
 * Original: 0x0027DA90 - 0x0027DAE9 (89 bytes, 38 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DA90: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = esi + 0x10;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027DA9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027DA95u); } /* indirect call */
    }

loc_0027DA9B: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DADE; /* je: equal / zero */

loc_0027DAA2: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ecx = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DAD2; /* je: equal / zero */

loc_0027DAB3: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(edx + 4) = ecx;
    PUSH32(esp, 0x0027DAC8u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_0027DAC8: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x40) = eax;

loc_0027DAD2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027DAD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027DAD3u); } /* indirect call */
    }

loc_0027DAD9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0027DADE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027DAE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027DADFu); } /* indirect call */
    }

loc_0027DAE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027DAF0
 * Original: 0x0027DAF0 - 0x0027DB58 (104 bytes, 32 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027DAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DAF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027DAFEu); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0027DAFE: ;
    eax = ebx + 0x1000;
    ecx = 0x40;
    esi = ebp;
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
    esi = ebp + 0x100;
    edi = eax + 0x100;
    ecx = 0x40;
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
    ecx = MEM32(ebp + 0x200);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x200) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027DB35; /* je: equal / zero */

loc_0027DB32: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027DB35: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    esi = ebx;
    MEM32(ebx + 0x1204) = ecx;
    MEM32(ebx + 0x1208) = edx;
    PUSH32(esp, 0x0027DB50u); RECOMP_ABI_CALL(0x002739F0u, sub_002739F0); /* call 0x002739F0 */

loc_0027DB50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027DB60
 * Original: 0x0027DB60 - 0x0027DB77 (23 bytes, 10 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DB60(void)
{

loc_0027DB60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027DB71u); RECOMP_ABI_CALL(0x0027DAF0u, sub_0027DAF0); /* call 0x0027DAF0 */

loc_0027DB71: ;
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027DB80
 * Original: 0x0027DB80 - 0x0027DCEE (366 bytes, 122 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027DB80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297468);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027DBACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027DBA6u); } /* indirect call */
    }

loc_0027DBAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = eax;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), eax (32-bit) */
    ebx = MEM32(edi + 0x44);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0027DBF0; /* ja: above (unsigned >) */

loc_0027DBC2: ;
    esi = edi;
    PUSH32(esp, 0x0027DBC9u); RECOMP_ABI_CALL(0x0027A600u, sub_0027A600); /* call 0x0027A600 */

loc_0027DBC9: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);

loc_0027DBCE: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027DBD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027DBCEu); } /* indirect call */
    }

loc_0027DBD4: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027DBE7: ;
    ebx = MEM32(esp + 0x10);
    goto loc_0027DBF0;

    /* nop */

loc_0027DBF0: ;
    eax = MEM32(0x64CF9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(edi + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_0027DC01; /* jne: not equal / not zero */

loc_0027DBFC: ;
    PUSH32(esp, 0x0027DC01u); RECOMP_ABI_CALL(0x00279F90u, sub_00279F90); /* call 0x00279F90 */

loc_0027DC01: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x0027DC0Au); RECOMP_ABI_CALL(0x0027A220u, sub_0027A220); /* call 0x0027A220 */

loc_0027DC0A: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027DC40; /* jne: not equal / not zero */

loc_0027DC10: ;
    eax = MEM32(0x64CF9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(edi + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_0027DC21; /* jne: not equal / not zero */

loc_0027DC1C: ;
    PUSH32(esp, 0x0027DC21u); RECOMP_ABI_CALL(0x00279F90u, sub_00279F90); /* call 0x00279F90 */

loc_0027DC21: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x0027DC2Au); RECOMP_ABI_CALL(0x0027A330u, sub_0027A330); /* call 0x0027A330 */

loc_0027DC2A: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DCC4; /* je: equal / zero */

loc_0027DC34: ;
    esi = MEM32(edi + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027DC3Du); RECOMP_ABI_CALL(0x0027E010u, sub_0027E010); /* call 0x0027E010 */

loc_0027DC3D: ;
    MEM32(ebp + 0x10) = eax;

loc_0027DC40: ;
    SET_LO8(eax, MEM8(edi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DC63; /* je: equal / zero */

loc_0027DC47: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DC63; /* je: equal / zero */

loc_0027DC4E: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx + 8);
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027DC63; /* jae: above or equal (unsigned >=) */

loc_0027DC5F: ;
    MEM8(edi + 0x34) = 0;

loc_0027DC63: ;
    esi = MEM32(edi + 0x2C);
    edx = MEM32(esi + 4);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x0027DC79u); RECOMP_ABI_CALL(0x0027B300u, sub_0027B300); /* call 0x0027B300 */

loc_0027DC79: ;
    ecx = 1;
    edx = edi + 0x28;
    ebx = eax;
    PUSH32(esp, 0x0027DC88u); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_0027DC88: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebx + 4);
    MEM32(eax) = ebx;
    ecx = MEM32(edi + 0x40);
    edx = MEM32(ecx + 4);
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027DBC2; /* jne: not equal / not zero */

loc_0027DCA2: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x3C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0027DBE7; /* jb: below (unsigned <) */

loc_0027DCBF: ;
    goto loc_0027DBC2;

loc_0027DCC4: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax);
    PUSH32(esp, 0x275A60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027DCDAu); RECOMP_ABI_CALL(0x0027B3F0u, sub_0027B3F0); /* call 0x0027B3F0 */

loc_0027DCDA: ;
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x38) = 4;
    PUSH32(esp, edx);
    goto loc_0027DBCE;

}

/**
 * sub_0027DCF0
 * Original: 0x0027DCF0 - 0x0027DDC2 (210 bytes, 70 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027DCF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2974C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x0027DD14u); RECOMP_ABI_CALL(0x0027D890u, sub_0027D890); /* call 0x0027D890 */

loc_0027DD14: ;
    eax = MEM32(esp + 0x20);
    MEM32(ebp + 0x3C) = esi;
    MEM32(ebp + 0x40) = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(ebp) = 0x333668;
    if (CMP_EQ(_fa, _fb)) goto loc_0027DDAD; /* je: equal / zero */

loc_0027DD31: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ebp + 0x28;
    MEM32(esp + 0x28) = esi;
    /* nop */

loc_0027DD40: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x34));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DD69; /* je: equal / zero */

loc_0027DD4D: ;
    ecx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DD69; /* je: equal / zero */

loc_0027DD54: ;
    edx = MEM32(ebp + 0x2C);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 8);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027DD69; /* jae: above or equal (unsigned >=) */

loc_0027DD65: ;
    MEM8(ebp + 0x34) = 0;

loc_0027DD69: ;
    esi = MEM32(ebx + 4);
    edx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027DD7Fu); RECOMP_ABI_CALL(0x0027B300u, sub_0027B300); /* call 0x0027B300 */

loc_0027DD7F: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0x0027DD8Du); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_0027DD8D: ;
    eax = MEM32(esp + 0x28);
    MEM32(esi + 4) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = edi;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_0027DD40; /* jne: not equal / not zero */

loc_0027DDAB: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0027DDAD: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027DDD0
 * Original: 0x0027DDD0 - 0x0027DE2F (95 bytes, 40 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027DDD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x2C);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027DE23; /* je: equal / zero */

loc_0027DDE3: ;
    PUSH32(esp, edi);

loc_0027DDE4: ;
    esi = MEM32(ebp + 0x40);
    edi = ebx + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027DDF0u); RECOMP_ABI_CALL(0x0027E090u, sub_0027E090); /* call 0x0027E090 */

loc_0027DDF0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DE1A; /* je: equal / zero */

loc_0027DDF6: ;
    ecx = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = ecx;
    if ((_fa != 0)) goto loc_0027DE14; /* jne: not equal / not zero */

loc_0027DDFF: ;
    eax = MEM32(0x64CF9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027DE0D; /* jne: not equal / not zero */

loc_0027DE08: ;
    PUSH32(esp, 0x0027DE0Du); RECOMP_ABI_CALL(0x00279F90u, sub_00279F90); /* call 0x00279F90 */

loc_0027DE0D: ;
    esi = eax;
    PUSH32(esp, 0x0027DE14u); RECOMP_ABI_CALL(0x0027A510u, sub_0027A510); /* call 0x0027A510 */

loc_0027DE14: ;
    MEM32(edi) = 0;

loc_0027DE1A: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027DDE4; /* jne: not equal / not zero */

loc_0027DE22: ;
    POP32(esp, edi);

loc_0027DE23: ;
    esi = ebp;
    PUSH32(esp, 0x0027DE2Au); RECOMP_ABI_CALL(0x0027A600u, sub_0027A600); /* call 0x0027A600 */

loc_0027DE2A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027DE30
 * Original: 0x0027DE30 - 0x0027DEBD (141 bytes, 43 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DE30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297168);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0027DE58; /* jne: not equal / not zero */

loc_0027DE53: ;
    PUSH32(esp, 0x0027DE58u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0027DE58: ;
    edx = 0x48;
    ecx = eax;
    PUSH32(esp, 0x0027DE64u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027DE64: ;
    esi = eax;
    MEM32(esp + 8) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0027DE95; /* je: equal / zero */

loc_0027DE76: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027DE7Cu); RECOMP_ABI_CALL(0x0027D890u, sub_0027D890); /* call 0x0027D890 */

loc_0027DE7C: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = edi;
    MEM32(esi) = 0x333698;
    MEM32(esi + 0x44) = ecx;
    goto loc_0027DE97;

loc_0027DE95: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027DE97: ;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0027DEA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027DEA5u); } /* indirect call */
    }

loc_0027DEA8: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0027DEC0
 * Original: 0x0027DEC0 - 0x0027DF5E (158 bytes, 50 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DEC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297168);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0027DEE8; /* jne: not equal / not zero */

loc_0027DEE3: ;
    PUSH32(esp, 0x0027DEE8u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0027DEE8: ;
    edx = 0x48;
    ecx = eax;
    PUSH32(esp, 0x0027DEF4u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027DEF4: ;
    esi = eax;
    MEM32(esp + 8) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0027DF25; /* je: equal / zero */

loc_0027DF06: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027DF0Cu); RECOMP_ABI_CALL(0x0027D890u, sub_0027D890); /* call 0x0027D890 */

loc_0027DF0C: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = edi;
    MEM32(esi) = 0x333698;
    MEM32(esi + 0x44) = ecx;
    goto loc_0027DF27;

loc_0027DF25: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027DF27: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0027DF40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027DF3Du); } /* indirect call */
    }

loc_0027DF40: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0027DF49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027DF46u); } /* indirect call */
    }

loc_0027DF49: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0027DF60
 * Original: 0x0027DF60 - 0x0027DFDA (122 bytes, 40 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DF60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297168);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x64CF80);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0027DF8A; /* jne: not equal / not zero */

loc_0027DF85: ;
    PUSH32(esp, 0x0027DF8Au); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0027DF8A: ;
    edx = 0x44;
    ecx = eax;
    PUSH32(esp, 0x0027DF96u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027DF96: ;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027DFB4; /* je: equal / zero */

loc_0027DFA2: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027DFB2u); RECOMP_ABI_CALL(0x0027DCF0u, sub_0027DCF0); /* call 0x0027DCF0 */

loc_0027DFB2: ;
    esi = eax;

loc_0027DFB4: ;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0027DFC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027DFC2u); } /* indirect call */
    }

loc_0027DFC5: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0027DFE0
 * Original: 0x0027DFE0 - 0x0027E010 (48 bytes, 22 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DFE0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0027DFF6u); RECOMP_ABI_CALL(0x00281606u, sub_00281606); /* call 0x00281606 */

loc_0027DFF6: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E00C; /* je: equal / zero */

loc_0027DFFF: ;
    edx = MEM32(esp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0027E00C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027E010
 * Original: 0x0027E010 - 0x0027E090 (128 bytes, 52 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027E010: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(eax + 0xC));
    eax = MEM32(esi + 0x10);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0027E030; /* jne: not equal / not zero */

loc_0027E02B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0027E055; /* je: equal / zero */

loc_0027E030: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0027E045u); RECOMP_ABI_CALL(0x002813DFu, sub_002813DF); /* call 0x002813DF */

loc_0027E045: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0027E04F; /* jne: not equal / not zero */

loc_0027E04A: ;
    PUSH32(esp, 0x0027E04Fu); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_0027E04F: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = ebx;

loc_0027E055: ;
    ecx = MEM32(esi + 4);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x1C) = edi;
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027E075u); RECOMP_ABI_CALL(0x00281198u, sub_00281198); /* call 0x00281198 */

loc_0027E075: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E090
 * Original: 0x0027E090 - 0x0027E112 (130 bytes, 53 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027E090: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ecx = MEM32(ebp);
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(ecx + 4);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0027E0B2; /* jne: not equal / not zero */

loc_0027E0AD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0027E0D7; /* je: equal / zero */

loc_0027E0B2: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0027E0C7u); RECOMP_ABI_CALL(0x002813DFu, sub_002813DF); /* call 0x002813DF */

loc_0027E0C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0027E0D1; /* jne: not equal / not zero */

loc_0027E0CC: ;
    PUSH32(esp, 0x0027E0D1u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_0027E0D1: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = ebx;

loc_0027E0D7: ;
    eax = MEM32(ebp);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edi;
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027E0F7u); RECOMP_ABI_CALL(0x00281285u, sub_00281285); /* call 0x00281285 */

loc_0027E0F7: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E120
 * Original: 0x0027E120 - 0x0027E16D (77 bytes, 31 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027E120: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E139; /* jne: not equal / not zero */

loc_0027E134: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E15E; /* je: equal / zero */

loc_0027E139: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0027E14Eu); RECOMP_ABI_CALL(0x002813DFu, sub_002813DF); /* call 0x002813DF */

loc_0027E14E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E158; /* jne: not equal / not zero */

loc_0027E153: ;
    PUSH32(esp, 0x0027E158u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_0027E158: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = ebx;

loc_0027E15E: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E167u); RECOMP_ABI_CALL(0x0028135Bu, sub_0028135B); /* call 0x0028135B */

loc_0027E167: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027E170
 * Original: 0x0027E170 - 0x0027E275 (261 bytes, 85 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027E170: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297229);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D944);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = 0x332AFC;
    MEM32(esi + 8) = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = eax;
    eax = esi + 0x10;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, eax);
    MEM32(esi) = 0x333628;
    MEM32(esi + 4) = 0x333624;
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x0027E1BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027E1B7u); } /* indirect call */
    }

loc_0027E1BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027E1C7u); RECOMP_ABI_CALL(0x00281A86u, sub_00281A86); /* call 0x00281A86 */

loc_0027E1C7: ;
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027E1D5u); RECOMP_ABI_CALL(0x00281A86u, sub_00281A86); /* call 0x00281A86 */

loc_0027E1D5: ;
    MEM32(esi + 0x30) = eax;
    MEM8(esp + 0x1C) = 2;
    PUSH32(esp, 0x0027E1E2u); RECOMP_ABI_CALL(0x0027ECA0u, sub_0027ECA0); /* call 0x0027ECA0 */

loc_0027E1E2: ;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = ebx;
    MEM8(esp + 0x1C) = 3;
    eax = MEM32(0x64CFA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E1FB; /* jne: not equal / not zero */

loc_0027E1F6: ;
    PUSH32(esp, 0x0027E1FBu); RECOMP_ABI_CALL(0x0027EE40u, sub_0027EE40); /* call 0x0027EE40 */

loc_0027E1FB: ;
    ebp = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E20B; /* jne: not equal / not zero */

loc_0027E206: ;
    PUSH32(esp, 0x0027E20Bu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0027E20B: ;
    edx = 8;
    ecx = eax;
    PUSH32(esp, 0x0027E217u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027E217: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x27EEF0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(eax + 4) = esi;
    MEM32(eax) = 0x27EC10;
    PUSH32(esp, 0x0027E233u); RECOMP_ABI_CALL(0x0027FB7Du, sub_0027FB7D); /* call 0x0027FB7D */

loc_0027E233: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E258; /* je: equal / zero */

loc_0027E239: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027E245u); RECOMP_ABI_CALL(0x0027F96Eu, sub_0027F96E); /* call 0x0027F96E */

loc_0027E245: ;
    ecx = ebp + 4;
    eax = esp + 0x10;
    PUSH32(esp, 0x0027E251u); RECOMP_ABI_CALL(0x0027F030u, sub_0027F030); /* call 0x0027F030 */

loc_0027E251: ;
    MEM32(eax) = edi;
    MEM32(esi + 0x34) = ebx;
    goto loc_0027E25E;

loc_0027E258: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x34) = eax;

loc_0027E25E: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E280
 * Original: 0x0027E280 - 0x0027E2A7 (39 bytes, 16 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027E280: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027E289u); RECOMP_ABI_CALL(0x0027E2B0u, sub_0027E2B0); /* call 0x0027E2B0 */

loc_0027E289: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E2A1; /* je: equal / zero */

loc_0027E290: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E2A1; /* je: equal / zero */

loc_0027E294: ;
    PUSH32(esp, 0x0027E299u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027E299: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027E2A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027E29Eu); } /* indirect call */
    }

loc_0027E2A1: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E284
 * Original: 0x0027E284 - 0x0027E2A7 (35 bytes, 13 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E284(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027E284: ;
    PUSH32(esp, 0x0027E289u); RECOMP_ABI_CALL(0x0027E2B0u, sub_0027E2B0); /* call 0x0027E2B0 */

loc_0027E289: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E2A1; /* je: equal / zero */

loc_0027E290: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E2A1; /* je: equal / zero */

loc_0027E294: ;
    PUSH32(esp, 0x0027E299u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027E299: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027E2A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027E29Eu); } /* indirect call */
    }

loc_0027E2A1: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E2B0
 * Original: 0x0027E2B0 - 0x0027E398 (232 bytes, 69 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027E2B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297229);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(edi) = 0x333628;
    MEM32(edi + 4) = 0x333624;
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = 3;
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E2EFu); RECOMP_ABI_CALL(0x00281AE1u, sub_00281AE1); /* call 0x00281AE1 */

loc_0027E2EF: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027E2FAu); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_0027E2FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E30E; /* jne: not equal / not zero */

loc_0027E301: ;
    edx = MEM32(edi + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E30Eu); RECOMP_ABI_CALL(0x00281AE1u, sub_00281AE1); /* call 0x00281AE1 */

loc_0027E30E: ;
    esi = MEM32(0x64CFA4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = MEM32(edi + 0x34);
    if (CMP_NE(_fa, _fb)) goto loc_0027E322; /* jne: not equal / not zero */

loc_0027E31B: ;
    PUSH32(esp, 0x0027E320u); RECOMP_ABI_CALL(0x0027EE40u, sub_0027EE40); /* call 0x0027EE40 */

loc_0027E320: ;
    esi = eax;

loc_0027E322: ;
    MEM32(esp + 0x20) = ebx;
    ecx = esi + 4;
    ebx = esp + 0x20;
    eax = esp + 0xC;
    PUSH32(esp, 0x0027E336u); RECOMP_ABI_CALL(0x00108700u, sub_00108700); /* call 0x00108700 */

loc_0027E336: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E34A; /* je: equal / zero */

loc_0027E33F: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E34Au); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_0027E34A: ;
    esi = edi + 0x38;
    PUSH32(esp, 0x0027E352u); RECOMP_ABI_CALL(0x0027ECC0u, sub_0027ECC0); /* call 0x0027ECC0 */

loc_0027E352: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027E35Bu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_0027E35B: ;
    MEM32(esi + 4) = 0;
    edx = MEM32(edi + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E36Eu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_0027E36E: ;
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E377u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_0027E377: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 4) = 0x332AFC;
    MEM32(edi) = 0x333214;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E3A0
 * Original: 0x0027E3A0 - 0x0027E424 (132 bytes, 45 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027E3A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebp = esi + 0x10;
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = ebp;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027E3CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027E3C4u); } /* indirect call */
    }

loc_0027E3CA: ;
    MEM32(esp + 0x1C) = 0;
    edi = MEM32(esi + 0x3C);
    ecx = MEM32(edi + 4);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027E3E4u); RECOMP_ABI_CALL(0x0027ED00u, sub_0027ED00); /* call 0x0027ED00 */

loc_0027E3E4: ;
    ecx = 1;
    edx = esi + 0x38;
    ebx = eax;
    PUSH32(esp, 0x0027E3F3u); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_0027E3F3: ;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    MEM32(edx) = ebx;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E408u); RECOMP_ABI_CALL(0x00281AE1u, sub_00281AE1); /* call 0x00281AE1 */

loc_0027E408: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027E40Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027E409u); } /* indirect call */
    }

loc_0027E40F: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E430
 * Original: 0x0027E430 - 0x0027E4E7 (183 bytes, 66 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027E430: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = esi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027E459u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027E453u); } /* indirect call */
    }

loc_0027E459: ;
    edi = MEM32(esp + 0x20);
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E47B; /* je: equal / zero */

loc_0027E46E: ;
    edi = edi;

loc_0027E470: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E47B; /* je: equal / zero */

loc_0027E475: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E470; /* jne: not equal / not zero */

loc_0027E47B: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E4B6; /* je: equal / zero */

loc_0027E482: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E4A5; /* je: equal / zero */

loc_0027E486: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0x0027E49Bu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_0027E49B: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x40) = eax;

loc_0027E4A5: ;
    MEM32(edi + 0x38) = 1;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0027E4B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027E4B2u); } /* indirect call */
    }

loc_0027E4B4: ;
    goto loc_0027E4CC;

loc_0027E4B6: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E4B6; /* jne: not equal / not zero */

loc_0027E4BD: ;
    MEM32(edi + 0x38) = 1;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0027E4CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027E4CAu); } /* indirect call */
    }

loc_0027E4CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027E4D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027E4CDu); } /* indirect call */
    }

loc_0027E4D3: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E4F0
 * Original: 0x0027E4F0 - 0x0027E720 (560 bytes, 192 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027E4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0027E4F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2108;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E500u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_0027E500: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0027E539; /* je: equal / zero */

loc_0027E50D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = 0x80000000u;
    if (TEST_Z(_fa, _fb)) goto loc_0027E51D; /* je: equal / zero */

loc_0027E516: ;
    eax = 3;
    goto loc_0027E561;

loc_0027E51D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0027E528; /* jns: not sign (positive) */

loc_0027E521: ;
    eax = 4;
    goto loc_0027E561;

loc_0027E528: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0027E561;

loc_0027E539: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = 0x40000000;
    if (TEST_Z(_fa, _fb)) goto loc_0027E549; /* je: equal / zero */

loc_0027E542: ;
    eax = 2;
    goto loc_0027E561;

loc_0027E549: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0027E554; /* je: equal / zero */

loc_0027E54D: ;
    eax = 1;
    goto loc_0027E561;

loc_0027E554: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x280;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027E561: ;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x100)) >> 32) & 1);
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E583; /* je: equal / zero */

loc_0027E572: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0027E670; /* je: equal / zero */

loc_0027E57B: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0027E572; /* jne: not equal / not zero */

loc_0027E583: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027E585: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E5B7; /* je: equal / zero */

loc_0027E589: ;
    /* nop */

loc_0027E590: ;
    MEM8(ecx) = 0x5C;
    edx = ecx;
    SET_LO8(ecx, MEM8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E5B1; /* je: equal / zero */

loc_0027E59B: ;
    goto loc_0027E5A0;

    /* nop */

loc_0027E5A0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0027E677; /* je: equal / zero */

loc_0027E5A9: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0027E5A0; /* jne: not equal / not zero */

loc_0027E5B1: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027E5B3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0027E590; /* jne: not equal / not zero */

loc_0027E5B7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8000000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E5CAu); RECOMP_ABI_CALL(0x002804EAu, sub_002804EA); /* call 0x002804EA */

loc_0027E5CA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0027E687; /* jne: not equal / not zero */

loc_0027E5D5: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0027E715; /* je: equal / zero */

loc_0027E5DF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E5E4u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_0027E5E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0027E715; /* jne: not equal / not zero */

loc_0027E5ED: ;
    esi = MEM32(ebp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = 0x100;
    edx = 0xFF;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E606u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_0027E606: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = esp + 0x10;
    ecx = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027E620; /* je: equal / zero */

loc_0027E617: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0027E617; /* jne: not equal / not zero */

loc_0027E61F: ;
    /* nop */

loc_0027E620: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027E630; /* je: equal / zero */

loc_0027E626: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0027E67E; /* je: equal / zero */

loc_0027E62B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0027E626; /* jne: not equal / not zero */

loc_0027E630: ;
    eax = MEM32(0x64CF8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(edx) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0027E641; /* jne: not equal / not zero */

loc_0027E63C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E641u); RECOMP_ABI_CALL(0x00273A50u, sub_00273A50); /* call 0x00273A50 */

loc_0027E641: ;
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E64Eu); RECOMP_ABI_CALL(0x00273C10u, sub_00273C10); /* call 0x00273C10 */

loc_0027E64E: ;
    eax = MEM32(0x64CF8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0027E65C; /* jne: not equal / not zero */

loc_0027E657: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E65Cu); RECOMP_ABI_CALL(0x00273A50u, sub_00273A50); /* call 0x00273A50 */

loc_0027E65C: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E668u); RECOMP_ABI_CALL(0x002748C0u, sub_002748C0); /* call 0x002748C0 */

loc_0027E668: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0027E670: ;
    ecx = edx;
    goto loc_0027E585;

loc_0027E677: ;
    ecx = edx;
    goto loc_0027E5B3;

loc_0027E67E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0027E630; /* je: equal / zero */

loc_0027E682: ;
    edx = eax + 1;
    goto loc_0027E620;

loc_0027E687: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0027E69B; /* je: equal / zero */

loc_0027E68F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E69Bu); RECOMP_ABI_CALL(0x002813DFu, sub_002813DF); /* call 0x002813DF */

loc_0027E69B: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0027E6A9; /* jne: not equal / not zero */

loc_0027E6A4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E6A9u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0027E6A9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0027E6B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027E6AFu); } /* indirect call */
    }

loc_0027E6B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E6DC; /* je: equal / zero */

loc_0027E6B6: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edi;
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x333680;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0027E6DC: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x114;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E6EEu); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0027E6EE: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x1114;
    ecx = 0x400;
    esi = esp + 0x114;
    edi = esp + 0x1114;
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
    PUSH32(esp, 0x0027E715u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027E715: ;
    esi = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027E71Du); RECOMP_ABI_CALL(0x0027E720u, sub_0027E720); /* call 0x0027E720 */

loc_0027E71D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0027E720
 * Original: 0x0027E720 - 0x0027E9D5 (693 bytes, 335 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_debug
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027E720: ;
    eax = 0x9060;
    PUSH32(esp, 0x0027E72Au); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_0027E72A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027E730u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_0027E730: ;
    ecx = eax + -2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027E850; /* ja: above (unsigned >) */

loc_0027E73F: ;
    ecx = ZX8(MEM8(ecx + 0x27E894));
    { uint32_t _jt = MEM32(ecx * 4 + 0x27E874); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0027E74Du) goto loc_0027E74D;
    if (_jt == 0x0027E775u) goto loc_0027E775;
    if (_jt == 0x0027E7A0u) goto loc_0027E7A0;
    if (_jt == 0x0027E7CBu) goto loc_0027E7CB;
    if (_jt == 0x0027E7EAu) goto loc_0027E7EA;
    if (_jt == 0x0027E80Cu) goto loc_0027E80C;
    if (_jt == 0x0027E82Eu) goto loc_0027E82E;
    if (_jt == 0x0027E850u) goto loc_0027E850;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0027E74D: ;
    PUSH32(esp, 0x333780);
    edx = esp + 0x4838;
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi;
    PUSH32(esp, 0x0027E763u); RECOMP_ABI_CALL(0x0027DB60u, sub_0027DB60); /* call 0x0027DB60 */

loc_0027E763: ;
    PUSH32(esp, 0x334EE8);
    eax = esp + 0x4838;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E775u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027E775: ;
    PUSH32(esp, 0x333770);
    ecx = esp + 0x2420;
    PUSH32(esp, ecx);
    ecx = 1;
    edx = esi;
    PUSH32(esp, 0x0027E78Eu); RECOMP_ABI_CALL(0x0027DB60u, sub_0027DB60); /* call 0x0027DB60 */

loc_0027E78E: ;
    PUSH32(esp, 0x334E80);
    edx = esp + 0x2420;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E7A0u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027E7A0: ;
    PUSH32(esp, 0x333760);
    ecx = esp + 0x6C50;
    PUSH32(esp, ecx);
    ecx = 2;
    edx = esi;
    PUSH32(esp, 0x0027E7B9u); RECOMP_ABI_CALL(0x0027DB60u, sub_0027DB60); /* call 0x0027DB60 */

loc_0027E7B9: ;
    PUSH32(esp, 0x334E80);
    edx = esp + 0x6C50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E7CBu); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027E7CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    eax = 0x33374C;
    ebx = esp + 0x10;
    PUSH32(esp, 0x0027E7DDu); RECOMP_ABI_CALL(0x0027DAF0u, sub_0027DAF0); /* call 0x0027DAF0 */

loc_0027E7DD: ;
    PUSH32(esp, 0x334ED8);
    eax = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E7EAu); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027E7EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    eax = 0x33373C;
    ebx = esp + 0x121C;
    PUSH32(esp, 0x0027E7FFu); RECOMP_ABI_CALL(0x0027DAF0u, sub_0027DAF0); /* call 0x0027DAF0 */

loc_0027E7FF: ;
    PUSH32(esp, 0x334ED8);
    ecx = ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027E80Cu); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027E80C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    eax = 0x33372C;
    ebx = esp + 0x3634;
    PUSH32(esp, 0x0027E821u); RECOMP_ABI_CALL(0x0027DAF0u, sub_0027DAF0); /* call 0x0027DAF0 */

loc_0027E821: ;
    PUSH32(esp, 0x334ED8);
    edx = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E82Eu); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027E82E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    eax = 0x333718;
    ebx = esp + 0x5A4C;
    PUSH32(esp, 0x0027E843u); RECOMP_ABI_CALL(0x0027DAF0u, sub_0027DAF0); /* call 0x0027DAF0 */

loc_0027E843: ;
    PUSH32(esp, 0x334ED8);
    eax = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E850u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027E850: ;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    eax = 0x333708;
    ebx = esp + 0x7E64;
    PUSH32(esp, 0x0027E865u); RECOMP_ABI_CALL(0x0027DAF0u, sub_0027DAF0); /* call 0x0027DAF0 */

loc_0027E865: ;
    PUSH32(esp, 0x334ED8);
    ecx = ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027E872u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027E872: ;
    edi = edi;
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_0027E85D - dead code, label not in function */

loc_0027E876: ;
    RECOMP_UNIMPL("daa", 0x0027E876u); /* TODO: daa */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -889182233) = MEM8(eax + -889182233) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + -889182233)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("out 0x27, eax", 0x0027E87Du); /* TODO: out 0x27, eax */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + HI8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("out 0x27, eax", 0x0027E881u); /* TODO: out 0x27, eax */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0x0027E88Au); RECOMP_ABI_CALL(0xE833E8B1u, sub_E833E8B1); /* call 0xE833E8B1 */

loc_0027E88A: ;
    RECOMP_UNIMPL("daa", 0x0027E88Au); /* TODO: daa */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + -25) = MEM8(ebp + -25) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("daa", 0x0027E88Eu); /* TODO: daa */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -24) = MEM8(eax + -24) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + -24)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("daa", 0x0027E892u); /* TODO: daa */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(7) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(0x7070707) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7070707;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    PUSH32(esp, 0 /* seg:es */);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    PUSH32(esp, 0 /* seg:es */);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    SET_LO8(eax, MEM8(ecx));
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E974; /* je: equal / zero */

loc_0027E968: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E9C2; /* je: equal / zero */

loc_0027E96C: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E968; /* jne: not equal / not zero */

loc_0027E974: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027E976: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E9A2; /* je: equal / zero */

loc_0027E97A: ;
    /* nop */

loc_0027E980: ;
    MEM8(eax) = 0x5C;
    ecx = eax;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E99C; /* je: equal / zero */

loc_0027E98B: ;
    goto loc_0027E990;

    /* nop */

loc_0027E990: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E9C6; /* je: equal / zero */

loc_0027E994: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E990; /* jne: not equal / not zero */

loc_0027E99C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027E99E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E980; /* jne: not equal / not zero */

loc_0027E9A2: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E9ACu); RECOMP_ABI_CALL(0x002938A1u, sub_002938A1); /* call 0x002938A1 */

loc_0027E9AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E9CA; /* je: equal / zero */

loc_0027E9B1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E9B7u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_0027E9B7: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027E9C2: ;
    eax = ecx;
    goto loc_0027E976;

loc_0027E9C6: ;
    eax = ecx;
    goto loc_0027E99E;

loc_0027E9CA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E950
 * Original: 0x0027E950 - 0x0027E9D5 (133 bytes, 51 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027E950: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    SET_LO8(eax, MEM8(ecx));
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E974; /* je: equal / zero */

loc_0027E968: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E9C2; /* je: equal / zero */

loc_0027E96C: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E968; /* jne: not equal / not zero */

loc_0027E974: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027E976: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E9A2; /* je: equal / zero */

loc_0027E97A: ;
    /* nop */

loc_0027E980: ;
    MEM8(eax) = 0x5C;
    ecx = eax;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E99C; /* je: equal / zero */

loc_0027E98B: ;
    goto loc_0027E990;

    /* nop */

loc_0027E990: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E9C6; /* je: equal / zero */

loc_0027E994: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E990; /* jne: not equal / not zero */

loc_0027E99C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027E99E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E980; /* jne: not equal / not zero */

loc_0027E9A2: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E9ACu); RECOMP_ABI_CALL(0x002938A1u, sub_002938A1); /* call 0x002938A1 */

loc_0027E9AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E9CA; /* je: equal / zero */

loc_0027E9B1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E9B7u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_0027E9B7: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027E9C2: ;
    eax = ecx;
    goto loc_0027E976;

loc_0027E9C6: ;
    eax = ecx;
    goto loc_0027E99E;

loc_0027E9CA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E9E0
 * Original: 0x0027E9E0 - 0x0027EA04 (36 bytes, 13 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027E9E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esi + 0x100;
    PUSH32(esp, eax);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0x0027E9F6u); RECOMP_ABI_CALL(0x0027F8A8u, sub_0027F8A8); /* call 0x0027F8A8 */

loc_0027E9F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E9FF; /* jne: not equal / not zero */

loc_0027E9FA: ;
    PUSH32(esp, 0x0027E9FFu); RECOMP_ABI_CALL(0x0027E720u, sub_0027E720); /* call 0x0027E720 */

loc_0027E9FF: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027EA10
 * Original: 0x0027EA10 - 0x0027EB0D (253 bytes, 86 insns)
 * Folder: base (library: 0x0027D230 and 0x0027EB10)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027EA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027EA10: ;
    ecx = MEM32(esp + 4);
    eax = esp + -576;
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x100;
    edx = 0xFF;
    PUSH32(esp, 0x0027EA37u); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_0027EA37: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp;
    if (CMP_EQ(_fa, _fb)) goto loc_0027EA4D; /* je: equal / zero */

loc_0027EA45: ;
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EA45; /* jne: not equal / not zero */

loc_0027EA4D: ;
    edx = esp;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EA8B; /* jne: not equal / not zero */

loc_0027EA57: ;
    _fa = (uint32_t)(MEM8(esp + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EA8B; /* jne: not equal / not zero */

loc_0027EA5E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x64 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027EA7D; /* je: equal / zero */

loc_0027EA63: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x65 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027EA7D; /* je: equal / zero */

loc_0027EA68: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x73 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027EA72; /* jl: less (signed <) */

loc_0027EA6D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7A (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027EA7D; /* jle: less or equal (signed <=) */

loc_0027EA72: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027EA7D: ;
    eax = 1;
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027EA8B: ;
    MEM8(esp + eax + -1) = 0;
    SET_LO8(eax, MEM8(esp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esp;
    if (CMP_EQ(_fa, _fb)) goto loc_0027EAAC; /* je: equal / zero */

loc_0027EA9A: ;
    /* nop */

loc_0027EAA0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027EAFA; /* je: equal / zero */

loc_0027EAA4: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EAA0; /* jne: not equal / not zero */

loc_0027EAAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027EAAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027EAD2; /* je: equal / zero */

loc_0027EAB2: ;
    MEM8(eax) = 0x5C;
    ecx = eax;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027EACC; /* je: equal / zero */

loc_0027EABD: ;
    /* nop */

loc_0027EAC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027EAFE; /* je: equal / zero */

loc_0027EAC4: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EAC0; /* jne: not equal / not zero */

loc_0027EACC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027EACE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EAB2; /* jne: not equal / not zero */

loc_0027EAD2: ;
    eax = esp + 0x100;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027EAE4u); RECOMP_ABI_CALL(0x002938A1u, sub_002938A1); /* call 0x002938A1 */

loc_0027EAE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027EB02; /* je: equal / zero */

loc_0027EAE9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EAEFu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_0027EAEF: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027EAFA: ;
    eax = ecx;
    goto loc_0027EAAE;

loc_0027EAFE: ;
    eax = ecx;
    goto loc_0027EACE;

loc_0027EB02: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}
