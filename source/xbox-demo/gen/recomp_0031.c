/**
 * PoP SoT xbox-demo - Recompiled code chunk 31
 * Functions: 250 (0x002725B0 - 0x0027B070)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002725B0
 * Original: 0x002725B0 - 0x00272636 (134 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002725B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002725B0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002725DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002725D7u); } /* indirect call */
    }

loc_002725DE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272602; /* je: equal / zero */

loc_002725F7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272608; /* jne: not equal / not zero */

loc_002725FA: ;
    esi = MEM32(0x614FD0);
    goto loc_00272608;

loc_00272602: ;
    esi = MEM32(0x614FCC);

loc_00272608: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D186));
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x0027262Au); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_0027262A: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272640
 * Original: 0x00272640 - 0x002726C6 (134 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272640: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027266Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272667u); } /* indirect call */
    }

loc_0027266E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272692; /* je: equal / zero */

loc_00272687: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272698; /* jne: not equal / not zero */

loc_0027268A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272698;

loc_00272692: ;
    esi = MEM32(0x614FCC);

loc_00272698: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D186));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x002726BAu); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_002726BA: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002726D0
 * Original: 0x002726D0 - 0x00272751 (129 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002726D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002726D0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002726FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002726F7u); } /* indirect call */
    }

loc_002726FE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272722; /* je: equal / zero */

loc_00272717: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272728; /* jne: not equal / not zero */

loc_0027271A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272728;

loc_00272722: ;
    esi = MEM32(0x614FCC);

loc_00272728: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 1;
    PUSH32(esp, 0x00272745u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272745: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272760
 * Original: 0x00272760 - 0x002727E1 (129 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272760: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027278Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272787u); } /* indirect call */
    }

loc_0027278E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_002727B2; /* je: equal / zero */

loc_002727A7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002727B8; /* jne: not equal / not zero */

loc_002727AA: ;
    esi = MEM32(0x614FD0);
    goto loc_002727B8;

loc_002727B2: ;
    esi = MEM32(0x614FCC);

loc_002727B8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 1;
    PUSH32(esp, 0x002727D5u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_002727D5: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002727F0
 * Original: 0x002727F0 - 0x0027287E (142 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002727F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002727F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D398);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ebp + 4;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00272837; /* je: equal / zero */

loc_00272810: ;
    ebx = ecx;
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x1B) = LO8(ecx);
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x18);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x19) = LO8(ebx);
    MEM8(esp + 0x1A) = LO8(ecx);
    ecx = MEM32(esp + 0x18);

loc_00272837: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272877; /* je: equal / zero */

loc_0027283B: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(esi + 4) = edx;
    edi = edx + 4;
    if (CMP_BE(_fa, _fb)) goto loc_00272868; /* jbe: below or equal (unsigned <=) */

loc_00272848: ;
    ebx = ecx;
    /* nop */

loc_00272850: ;
    eax = 1;
    esi = esp + 0x10;
    PUSH32(esp, 0x0027285Eu); RECOMP_ABI_CALL(0x000C17E0u, sub_000C17E0); /* call 0x000C17E0 */

loc_0027285E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272850; /* jne: not equal / not zero */

loc_00272864: ;
    eax = MEM32(esp + 0x10);

loc_00272868: ;
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx + 4);
    ecx = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(edx) = LO16(ecx);
    POP32(esp, edi);

loc_00272877: ;
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00272880
 * Original: 0x00272880 - 0x00272902 (130 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272880: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272901; /* je: equal / zero */

loc_00272887: ;
    PUSH32(esp, esi);
    esi = eax + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272900; /* je: equal / zero */

loc_0027288F: ;
    _fa = (uint32_t)(MEM8(esi + 7)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 7), 0x1F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272900; /* je: equal / zero */

loc_00272895: ;
    _fa = (uint32_t)(MEM8(esi + 7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 7), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002728C2; /* jne: not equal / not zero */

loc_0027289B: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    ecx = MEM32(esi);
    edx = eax + -39;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002728BE; /* ja: above (unsigned >) */

loc_002728A9: ;
    edx = ZX8(MEM8(edx + 0x27290C));
    { uint32_t _jt = MEM32(edx * 4 + 0x272904); /* switch: 2 entries, 2 targets */
    if (_jt == 0x002728B7u) goto loc_002728B7;
    if (_jt == 0x002728BEu) goto loc_002728BE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002728B7: ;
    PUSH32(esp, 0x002728BCu); RECOMP_ABI_CALL(0x00108A60u, sub_00108A60); /* call 0x00108A60 */

loc_002728BC: ;
    goto loc_002728C0;

loc_002728BE: ;
    eax = ecx;

loc_002728C0: ;
    MEM32(esi) = eax;

loc_002728C2: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 7);
    ecx = eax + -16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002728DC; /* ja: above (unsigned >) */

loc_002728CE: ;
    ecx = ZX8(MEM8(ecx + 0x272920));
    { uint32_t _jt = MEM32(ecx * 4 + 0x272918); /* switch: 2 entries, 2 targets */
    if (_jt == 0x002728DCu) goto loc_002728DC;
    if (_jt == 0x002728ECu) goto loc_002728EC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002728DC: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    SET_LO16(ecx, MEM16(edx * 2 + 0x60D130));
    MEM16(esi + 4) = LO16(ecx);

loc_002728EC: ;
    SET_LO8(edx, MEM8(eax * 2 + 0x60D130));
    MEM8(esi + 7) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0xF));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272895; /* jne: not equal / not zero */

loc_00272900: ;
    POP32(esp, esi);

loc_00272901: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00272902
 * Original: 0x00272902 - 0x00272930 (46 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272902(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272902: ;
    edi = edi;
    SET_HI8(ebx, 0x28);
    RECOMP_UNIMPL("daa", 0x00272906u); /* TODO: daa */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + 0x2728) = MEM8(esi + 0x2728) + HI8(ebx);
    _fa = (uint32_t)(MEM8(esi + 0x2728)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    RECOMP_UNIMPL("in al, dx", 0x00272918u); /* TODO: in al, dx */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    MEM8(edi) = MEM8(edi) - HI8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    MEM8(edi) = MEM8(edi) - HI8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00272930
 * Original: 0x00272930 - 0x00272A54 (292 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272930: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx + 4);
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00272A38; /* je: equal / zero */

loc_00272958: ;
    eax = MEM32(0x64D8C8);
    SET_LO16(ecx, MEM16(eax + 0x10));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFF (16-bit) */
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D880);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D870);
    PUSH32(esp, edi);
    edi = MEM32(0x64D878);
    MEM32(0x64D858) = esi;
    MEM32(0x64D854) = esi;
    MEM32(0x64D870) = esi;
    MEM32(0x64D87C) = esi;
    MEM32(0x64D878) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_002729BE; /* jne: not equal / not zero */

loc_0027299D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002729AD; /* je: equal / zero */

loc_002729A1: ;
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    goto loc_002729F8;

loc_002729AD: ;
    eax = MEM32(0x64D8B8);
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    goto loc_002729F8;

loc_002729BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272A35; /* je: equal / zero */

loc_002729C2: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272A35; /* je: equal / zero */

loc_002729C7: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272A35; /* je: equal / zero */

loc_002729CE: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272A35; /* je: equal / zero */

loc_002729D4: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272A35; /* je: equal / zero */

loc_002729D9: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax);
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00272A35; /* jae: above or equal (unsigned >=) */

loc_002729E6: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ecx * 8);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D880) = ecx;

loc_002729F8: ;
    eax = edx + 4;
    PUSH32(esp, 0x00272A00u); RECOMP_ABI_CALL(0x000F8400u, sub_000F8400); /* call 0x000F8400 */

loc_00272A00: ;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D854), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272A17; /* je: equal / zero */

loc_00272A08: ;
    ecx = MEM32(0x64D8CC);
    edx = MEM32(0x6270D8);
    MEM32(ecx + 4) = edx;

loc_00272A17: ;
    MEM32(0x64D870) = ebp;
    MEM32(0x64D87C) = edi;
    MEM32(0x64D878) = edi;
    MEM32(0x64D884) = ebx;
    MEM32(0x64D880) = ebx;

loc_00272A35: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00272A38: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x64D854) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x64D858) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272A60
 * Original: 0x00272A60 - 0x00272AF0 (144 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272A60: ;
    PUSH32(esp, esi);
    esi = ZX16(LO16(edi));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00272A86; /* ja: above (unsigned >) */

loc_00272A6A: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x272AC8); /* switch: 9 entries, 8 targets */
    if (_jt == 0x00272A71u) goto loc_00272A71;
    if (_jt == 0x00272A7Bu) goto loc_00272A7B;
    if (_jt == 0x00272A88u) goto loc_00272A88;
    if (_jt == 0x00272A92u) goto loc_00272A92;
    if (_jt == 0x00272AA1u) goto loc_00272AA1;
    if (_jt == 0x00272AAEu) goto loc_00272AAE;
    if (_jt == 0x00272AB4u) goto loc_00272AB4;
    if (_jt == 0x00272ABEu) goto loc_00272ABE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00272A71: ;
    eax = ecx;
    ecx = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010E710(); return; /* tail jmp 0x0010E710 */

loc_00272A7B: ;
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x00272A83u); RECOMP_ABI_CALL(0x0010DFB0u, sub_0010DFB0); /* call 0x0010DFB0 */

loc_00272A83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00272A86: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00272A88: ;
    eax = ecx;
    ecx = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010E190(); return; /* tail jmp 0x0010E190 */

loc_00272A92: ;
    eax = ecx;
    PUSH32(esp, edi);
    ecx = edx;
    PUSH32(esp, 0x00272A9Cu); RECOMP_ABI_CALL(0x0010BF10u, sub_0010BF10); /* call 0x0010BF10 */

loc_00272A9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00272AA1: ;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, 0x00272AA9u); RECOMP_ABI_CALL(0x0010E570u, sub_0010E570); /* call 0x0010E570 */

loc_00272AA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00272AAE: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010DD10(); return; /* tail jmp 0x0010DD10 */

loc_00272AB4: ;
    eax = ecx;
    ecx = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0010BC50(); return; /* tail jmp 0x0010BC50 */

loc_00272ABE: ;
    eax = ecx;
    ecx = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001103A0(); return; /* tail jmp 0x001103A0 */

    if (_flags /* jno: not overflow */) { g_seh_ebp = ebp; sub_00272AF4(); return; }

loc_00272ACA: ;
    RECOMP_UNIMPL("daa", 0x00272ACAu); /* TODO: daa */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + 0x2A) = MEM8(ebx + 0x2A) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebx + 0x2A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("daa", 0x00272ACEu); /* TODO: daa */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -1845483734) = MEM8(eax + -1845483734) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + -1845483734)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_HI8(eax, HI8(eax) - MEM8(edi));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -1375721686) = MEM8(ecx + -1375721686) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx + -1375721686)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_HI8(eax, HI8(eax) - MEM8(edi));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + ebp + 0x2ABE0027) = MEM8(edx + ebp + 0x2ABE0027) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx + ebp + 0x2ABE0027)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("daa", 0x00272AE6u); /* TODO: daa */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + -872405206) = MEM8(edx + -872405206) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx + -872405206)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00272AF0
 * Original: 0x00272AF0 - 0x00272C11 (289 bytes, 118 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272AF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebx + 4));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00272B06; /* je: equal / zero */

loc_00272B00: ;
    SET_LO16(eax, MEM16(ebx + 6));
    goto loc_00272B11;

loc_00272B06: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272B11; /* je: equal / zero */

loc_00272B0D: ;
    SET_LO16(eax, MEM16(eax + 2));

loc_00272B11: ;
    eax = ZX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00272C09; /* ja: above (unsigned >) */

loc_00272B1E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x272C14); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00272B25u) goto loc_00272B25;
    if (_jt == 0x00272B34u) goto loc_00272B34;
    if (_jt == 0x00272B4Eu) goto loc_00272B4E;
    if (_jt == 0x00272B6Au) goto loc_00272B6A;
    if (_jt == 0x00272B9Bu) goto loc_00272B9B;
    if (_jt == 0x00272BB0u) goto loc_00272BB0;
    if (_jt == 0x00272BD0u) goto loc_00272BD0;
    if (_jt == 0x00272BE9u) goto loc_00272BE9;
    if (_jt == 0x00272BFEu) goto loc_00272BFE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00272B25: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272B2Bu); RECOMP_ABI_CALL(0x0010E7A0u, sub_0010E7A0); /* call 0x0010E7A0 */

loc_00272B2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272B34: ;
    eax = MEM32(0x343DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272C0B; /* je: equal / zero */

loc_00272B41: ;
    eax = ebx;
    PUSH32(esp, 0x00272B48u); RECOMP_ABI_CALL(0x0010E100u, sub_0010E100); /* call 0x0010E100 */

loc_00272B48: ;
    ecx = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272B4E: ;
    eax = MEM32(0x343DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272C0B; /* je: equal / zero */

loc_00272B5B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272B61u); RECOMP_ABI_CALL(0x0010E2F0u, sub_0010E2F0); /* call 0x0010E2F0 */

loc_00272B61: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272B6A: ;
    eax = MEM32(0x343DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272C0B; /* je: equal / zero */

loc_00272B77: ;
    esi = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00272C0B; /* jp: parity */

loc_00272B8C: ;
    PUSH32(esp, 0x00272B91u); RECOMP_ABI_CALL(0x0010BF90u, sub_0010BF90); /* call 0x0010BF90 */

loc_00272B91: ;
    MEM8(esi + 0xA) = MEM8(esi + 0xA) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272B9B: ;
    PUSH32(esp, 0x00272BA0u); RECOMP_ABI_CALL(0x0010BF90u, sub_0010BF90); /* call 0x0010BF90 */

loc_00272BA0: ;
    ecx = eax;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 0xA) = MEM8(eax + 0xA) | 4;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272BB0: ;
    eax = MEM32(0x343DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272C0B; /* je: equal / zero */

loc_00272BB9: ;
    eax = ebx;
    PUSH32(esp, 0x00272BC0u); RECOMP_ABI_CALL(0x0010E670u, sub_0010E670); /* call 0x0010E670 */

loc_00272BC0: ;
    ecx = eax;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 0xA) = MEM8(eax + 0xA) | 4;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272BD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272BD6u); RECOMP_ABI_CALL(0x0010DE40u, sub_0010DE40); /* call 0x0010DE40 */

loc_00272BD6: ;
    ecx = eax;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0xA) = MEM8(eax + 0xA) | 4;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272BE9: ;
    PUSH32(esp, 0x00272BEEu); RECOMP_ABI_CALL(0x0010BDB0u, sub_0010BDB0); /* call 0x0010BDB0 */

loc_00272BEE: ;
    ecx = eax;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 0xA) = MEM8(eax + 0xA) | 4;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272BFE: ;
    PUSH32(esp, 0x00272C03u); RECOMP_ABI_CALL(0x00110420u, sub_00110420); /* call 0x00110420 */

loc_00272C03: ;
    ecx = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00272C09: ;
    ecx = ebx;

loc_00272C0B: ;
    POP32(esp, esi);
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00272C40
 * Original: 0x00272C40 - 0x00272C57 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272C40: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00272C47u); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_00272C47: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00272C56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272C53u); } /* indirect call */
    }

loc_00272C56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00272C60
 * Original: 0x00272C60 - 0x00272D18 (184 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272C60: ;
    eax = MEM32(0x64CF98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272C6E; /* jne: not equal / not zero */

loc_00272C69: ;
    PUSH32(esp, 0x00272C6Eu); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_00272C6E: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00272C80u); RECOMP_ABI_CALL(0x002733B0u, sub_002733B0); /* call 0x002733B0 */

loc_00272C80: ;
    ebx = eax;
    eax = MEM32(0x64CF98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272C90; /* jne: not equal / not zero */

loc_00272C8B: ;
    PUSH32(esp, 0x00272C90u); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_00272C90: ;
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x98);
    ecx = MEM32(esi + eax + 0x810);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x26);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4 + 0x818) = 0x332ADC;
    MEM32(esi + eax + 0x810) = MEM32(esi + eax + 0x810) + 1;
    _fa = (uint32_t)(MEM32(esi + eax + 0x810)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x64CF98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272CC6; /* jne: not equal / not zero */

loc_00272CC1: ;
    PUSH32(esp, 0x00272CC6u); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_00272CC6: ;
    edx = MEM32(esi + eax + 0x810);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edx * 4 + 0x818) = 0x332AC4;
    MEM32(esi + eax + 0x810) = MEM32(esi + eax + 0x810) + 1;
    _fa = (uint32_t)(MEM32(esi + eax + 0x810)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x64CF98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272CEF; /* jne: not equal / not zero */

loc_00272CEA: ;
    PUSH32(esp, 0x00272CEFu); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_00272CEF: ;
    ecx = MEM32(esi + eax + 0x810);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4 + 0x818) = 0x332AB0;
    ecx = MEM32(esi + eax + 0x810);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + eax + 0x810) = ecx;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00272D20
 * Original: 0x00272D20 - 0x00272D6B (75 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272D20: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x800;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0x808;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x800);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00272D42u); RECOMP_ABI_CALL(0x0028AFEDu, sub_0028AFED); /* call 0x0028AFED */

loc_00272D42: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00272D4E; /* jge: greater or equal (signed >=) */

loc_00272D49: ;
    eax = 0x800;

loc_00272D4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x7FF) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_00272D64; /* jbe: below or equal (unsigned <=) */

loc_00272D5A: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, 0x00272D64u); RECOMP_ABI_CALL(0x00276EE0u, sub_00276EE0); /* call 0x00276EE0 */

loc_00272D64: ;
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x800;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272D70
 * Original: 0x00272D70 - 0x00272E1E (174 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272D70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x64CF90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272D94; /* jne: not equal / not zero */

loc_00272D8F: ;
    PUSH32(esp, 0x00272D94u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_00272D94: ;
    ecx = edi;
    ecx = ecx & 0xFFFFF000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx * 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272E0E; /* jne: not equal / not zero */

loc_00272DAF: ;
    esi = MEM32(0x64CF98);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272DC0; /* jne: not equal / not zero */

loc_00272DB9: ;
    PUSH32(esp, 0x00272DBEu); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_00272DBE: ;
    esi = eax;

loc_00272DC0: ;
    eax = esi + 0x2E04;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00272DD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272DCCu); } /* indirect call */
    }

loc_00272DD2: ;
    PUSH32(esp, 0xB2);
    PUSH32(esp, 0x332A74);
    PUSH32(esp, edi);
    PUSH32(esp, 0x332A30);
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x00272DEFu); RECOMP_ABI_CALL(0x002769D0u, sub_002769D0); /* call 0x002769D0 */

loc_00272DEF: ;
    ecx = MEM32(0x343DF4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ebx = esi;
    PUSH32(esp, 0x00272E00u); RECOMP_ABI_CALL(0x00276A10u, sub_00276A10); /* call 0x00276A10 */

loc_00272E00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00272E07; /* jne: not equal / not zero */

loc_00272E06: ;
    /* int3: debug-trap slide byte, stepped over */

loc_00272E07: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00272E0Eu); RECOMP_ABI_CALL(0x0028E1BDu, sub_0028E1BD); /* call 0x0028E1BD */

loc_00272E0E: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272E20
 * Original: 0x00272E20 - 0x00272E23 (3 bytes, 1 insns)
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
 * sub_00277480
 * Original: 0x00277480 - 0x00277783 (771 bytes, 249 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277480: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297010);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    eax = ebp + 0x3F0;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002774AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002774A9u); } /* indirect call */
    }

loc_002774AF: ;
    esi = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    edi = eax + ebp + 4;
    MEM32(esp + 0x20) = 0;
    ebx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277554; /* jne: not equal / not zero */

loc_002774D5: ;
    eax = MEM32(0x64CF90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002774E3; /* jne: not equal / not zero */

loc_002774DE: ;
    PUSH32(esp, 0x002774E3u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_002774E3: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x002774EDu); RECOMP_ABI_CALL(0x00278070u, sub_00278070); /* call 0x00278070 */

loc_002774ED: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277589; /* je: equal / zero */

loc_002774F7: ;
    esi = MEM32(edi + 0x38);
    ecx = ebx;
    PUSH32(esp, 0x00277501u); RECOMP_ABI_CALL(0x00277230u, sub_00277230); /* call 0x00277230 */

loc_00277501: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027751A; /* je: equal / zero */

loc_00277508: ;
    MEM32(eax + 8) = ebx;
    ecx = MEM32(edi + 0x2C);
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = 0;
    goto loc_0027751D;

loc_0027751A: ;
    MEM32(edi + 0x28) = ebx;

loc_0027751D: ;
    MEM32(edi + 0x2C) = ebx;
    esi = MEM32(edi + 0x18);
    ecx = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) eax = ecx; /* cmovbe */
    MEM32(edi + 4) = eax;
    MEM32(edi + 0x18) = esi;
    esi = MEM32(ebp + 0x3DC);
    ecx = MEM32(ebp + 0x3C8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) eax = ecx; /* cmovbe */
    MEM32(ebp + 0x3DC) = esi;
    MEM32(ebp + 0x3C8) = eax;

loc_00277554: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(ebx + 0xC);
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 0xC);
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027762C; /* je: equal / zero */

loc_00277572: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    eax = MEM32(ebx + 0xC);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(ebx + 0xC);
    goto loc_0027762E;

loc_00277589: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002775A8; /* jae: above or equal (unsigned >=) */

loc_0027758F: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    edi = edx + ebp + 4;

loc_00277598: ;
    ebx = MEM32(edi + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277554; /* jne: not equal / not zero */

loc_0027759F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x3C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00277598; /* jb: below (unsigned <) */

loc_002775A8: ;
    esi = MEM32(0x64CF98);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002775B9; /* jne: not equal / not zero */

loc_002775B2: ;
    PUSH32(esp, 0x002775B7u); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_002775B7: ;
    esi = eax;

loc_002775B9: ;
    ebp = esi + 0x2E04;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002775CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002775C4u); } /* indirect call */
    }

loc_002775CA: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0x88);
    PUSH32(esp, 0x332F0C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x332EA8);
    MEM8(esp + 0x30) = 1;
    PUSH32(esp, 0x002775E8u); RECOMP_ABI_CALL(0x002769D0u, sub_002769D0); /* call 0x002769D0 */

loc_002775E8: ;
    ecx = MEM32(0x343DF4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x650A6C);
    ebx = eax;
    edi = esi;
    PUSH32(esp, 0x002775FFu); RECOMP_ABI_CALL(0x00276B60u, sub_00276B60); /* call 0x00276B60 */

loc_002775FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277605; /* jne: not equal / not zero */

loc_00277604: ;
    /* int3: debug-trap slide byte, stepped over */

loc_00277605: ;
    esi = MEM32(0x31C7B0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0027760Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027760Cu); } /* indirect call */
    }

loc_0027760E: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00277615u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277613u); } /* indirect call */
    }

loc_00277615: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027762C: ;
    ecx = MEM32(eax);

loc_0027762E: ;
    MEM32(ebx + 0xC) = ecx;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(edi + 0xC);
    esi = eax;
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x20) = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) ecx = edx; /* cmova */
    MEM32(edi + 0xC) = ecx;
    ecx = MEM32(edi + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x24) = ecx;
    eax = ecx;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    ecx = MEM32(edi + 8);
    MEM32(edi + 0x10) = eax;
    eax = MEM32(edi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(edi + 0x1C) = eax;
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    MEM32(edi + 8) = eax;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebp + 0x3E4);
    edx = MEM32(ebp + 0x3D0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(ebp + 0x3E4) = ecx;
    if (CMP_A(_fa, _fb)) ecx = edx; /* cmova */
    MEM32(ebp + 0x3D0) = ecx;
    ecx = MEM32(ebp + 0x3E8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    MEM32(ebp + 0x3E8) = ecx;
    ecx = MEM32(ebp + 0x3D4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    ecx = MEM32(ebp + 0x3CC);
    MEM32(ebp + 0x3D4) = eax;
    eax = MEM32(ebp + 0x3E0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + 0x3E0) = eax;
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    MEM32(ebp + 0x3CC) = eax;
    eax = MEM32(ebx + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277761; /* jne: not equal / not zero */

loc_002776DE: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002776EB; /* je: equal / zero */

loc_002776E5: ;
    edx = MEM32(ebx + 8);
    MEM32(eax + 8) = edx;

loc_002776EB: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002776F8; /* je: equal / zero */

loc_002776F2: ;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;

loc_002776F8: ;
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277703; /* jne: not equal / not zero */

loc_002776FD: ;
    eax = MEM32(ebx + 4);
    MEM32(edi + 0x2C) = eax;

loc_00277703: ;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027770E; /* jne: not equal / not zero */

loc_00277708: ;
    edx = MEM32(ebx + 8);
    MEM32(edi + 0x28) = edx;

loc_0027770E: ;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = ecx;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277729; /* je: equal / zero */

loc_0027771B: ;
    MEM32(eax + 8) = ebx;
    eax = MEM32(edi + 0x34);
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    goto loc_0027772C;

loc_00277729: ;
    MEM32(edi + 0x30) = ebx;

loc_0027772C: ;
    MEM32(edi + 0x34) = ebx;
    ebx = MEM32(edi + 0x14);
    ecx = MEM32(edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) eax = ecx; /* cmovbe */
    MEM32(edi) = eax;
    MEM32(edi + 0x14) = ebx;
    edi = MEM32(ebp + 0x3D8);
    ecx = MEM32(ebp + 0x3C4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) eax = ecx; /* cmovbe */
    MEM32(ebp + 0x3D8) = edi;
    MEM32(ebp + 0x3C4) = eax;

loc_00277761: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027776Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277766u); } /* indirect call */
    }

loc_0027776C: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277790
 * Original: 0x00277790 - 0x002777ED (93 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277790: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x3F0;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002777BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002777B5u); } /* indirect call */
    }

loc_002777BB: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002777CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002777CCu); } /* indirect call */
    }

loc_002777CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002777D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002777D2u); } /* indirect call */
    }

loc_002777D8: ;
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
 * sub_002777F0
 * Original: 0x002777F0 - 0x0027790D (285 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002777F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002777F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = ebp + 0x3F0;
    PUSH32(esp, eax);
    MEM32(esp + 8) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027781Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277814u); } /* indirect call */
    }

loc_0027781A: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_002778F0; /* je: equal / zero */

loc_0027782E: ;
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi & 0xFFFFF000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x10);
    edx = eax + -1;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    PUSH32(esp, edi);
    edi = edx + ebp + 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi + 0x20) = MEM32(edi + 0x20) - eax;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi + 0x24) = MEM32(edi + 0x24) - eax;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x3E4) = MEM32(ebp + 0x3E4) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x3E4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x3E8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x3E0) = MEM32(ebp + 0x3E0) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x3E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x3E8) = edx;
    edx = MEM32(esi + 0xC);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(esi + 0x14);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002778BE; /* je: equal / zero */

loc_0027788A: ;
    edx = edi + 0x30;
    eax = esi;
    PUSH32(esp, 0x00277894u); RECOMP_ABI_CALL(0x00277280u, sub_00277280); /* call 0x00277280 */

loc_00277894: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002778AD; /* je: equal / zero */

loc_0027789B: ;
    MEM32(eax + 8) = esi;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    goto loc_002778B0;

loc_002778AD: ;
    MEM32(edi + 0x28) = esi;

loc_002778B0: ;
    MEM32(edi + 0x2C) = esi;
    MEM32(edi + 0x14) = MEM32(edi + 0x14) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x3D8) = MEM32(ebp + 0x3D8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x3D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_002778EE;

loc_002778BE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002778EE; /* jne: not equal / not zero */

loc_002778C2: ;
    edx = edi + 0x28;
    eax = esi;
    PUSH32(esp, 0x002778CCu); RECOMP_ABI_CALL(0x00277280u, sub_00277280); /* call 0x00277280 */

loc_002778CC: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x3DC) = MEM32(ebp + 0x3DC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x3DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x64CF90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002778E3; /* jne: not equal / not zero */

loc_002778DE: ;
    PUSH32(esp, 0x002778E3u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_002778E3: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x002778EEu); RECOMP_ABI_CALL(0x00278010u, sub_00278010); /* call 0x00278010 */

loc_002778EE: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002778F0: ;
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002778FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002778F5u); } /* indirect call */
    }

loc_002778FB: ;
    ecx = MEM32(esp + 8);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277910
 * Original: 0x00277910 - 0x00277969 (89 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277910: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x3F0;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027793Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277935u); } /* indirect call */
    }

loc_0027793B: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0027794Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027794Cu); } /* indirect call */
    }

loc_0027794F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277956u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277950u); } /* indirect call */
    }

loc_00277956: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00277970
 * Original: 0x00277970 - 0x002779B8 (72 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00277970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277970: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x64CF90);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277987; /* jne: not equal / not zero */

loc_00277980: ;
    PUSH32(esp, 0x00277985u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_00277985: ;
    edi = eax;

loc_00277987: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002779A5; /* je: equal / zero */

loc_0027798E: ;
    PUSH32(esp, esi);
    /* nop */

loc_00277990: ;
    esi = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0027799Eu); RECOMP_ABI_CALL(0x00278010u, sub_00278010); /* call 0x00278010 */

loc_0027799E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00277990; /* jne: not equal / not zero */

loc_002779A4: ;
    POP32(esp, esi);

loc_002779A5: ;
    POP32(esp, edi);
    MEM32(ebp) = 0;
    MEM32(ebp + 4) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002779C0
 * Original: 0x002779C0 - 0x00277A62 (162 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002779C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002779C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = ebx + 0x3F0;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002779EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002779E7u); } /* indirect call */
    }

loc_002779ED: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = edi;
    esi = ebx + 0x1C;
    ebp = 0x10;
    goto loc_00277A00;

    /* nop */

loc_00277A00: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    MEM32(esi + -4) = edi;
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x00277A17u); RECOMP_ABI_CALL(0x00277970u, sub_00277970); /* call 0x00277970 */

loc_00277A17: ;
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00277A20u); RECOMP_ABI_CALL(0x00277970u, sub_00277970); /* call 0x00277970 */

loc_00277A20: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00277A00; /* jne: not equal / not zero */

loc_00277A26: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(ebx + 0x3D8) = edi;
    MEM32(ebx + 0x3DC) = edi;
    MEM32(ebx + 0x3E0) = edi;
    MEM32(ebx + 0x3E4) = edi;
    MEM32(ebx + 0x3E8) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277A4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277A49u); } /* indirect call */
    }

loc_00277A4F: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277A70
 * Original: 0x00277A70 - 0x00277C01 (401 bytes, 137 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277A70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = ebx + 0x3F0;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00277A9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277A96u); } /* indirect call */
    }

loc_00277A9C: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00277BD6; /* je: equal / zero */

loc_00277AB0: ;
    esi = esi & 0xFFFFF000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0x10);
    eax = edx + -1;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    edi = ebp + 0xF;
    edi = edi & 0xFFFFFFF0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    ecx = ecx + ebx + 4;
    if (CMP_A(_fa, _fb)) goto loc_00277B4F; /* ja: above (unsigned >) */

loc_00277AD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277AE1; /* je: equal / zero */

loc_00277ADB: ;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00277B4F; /* jb: below (unsigned <) */

loc_00277AE1: ;
    edi = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x20);
    eax = ebp;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x20) = edx;
    eax = edx;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) eax = edx; /* cmova */
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi + 0x10);
    edi = MEM32(ebx + 0x3E4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x3E4) = edi;
    ecx = MEM32(ebx + 0x3D0);
    eax = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    MEM32(ebx + 0x3E4) = esi;
    MEM32(ebx + 0x3D0) = eax;

loc_00277B2B: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277B36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277B30u); } /* indirect call */
    }

loc_00277B36: ;
    eax = MEM32(esp + 0x24);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00277B4F: ;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00277B57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277B54u); } /* indirect call */
    }

loc_00277B57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00277BAB; /* je: equal / zero */

loc_00277B5F: ;
    esi = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) ebp = esi; /* cmovb */
    edi = eax;
    ecx = ebp;
    eax = ecx;
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
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00277B87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277B84u); } /* indirect call */
    }

loc_00277B87: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277B92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277B8Cu); } /* indirect call */
    }

loc_00277B92: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00277BAB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x10) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00277B2B; /* jbe: below or equal (unsigned <=) */

loc_00277BB4: ;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277BBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277BB9u); } /* indirect call */
    }

loc_00277BBF: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00277BD6: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00277BE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277BDFu); } /* indirect call */
    }

loc_00277BE2: ;
    PUSH32(esp, edi);
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277BEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277BE5u); } /* indirect call */
    }

loc_00277BEB: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00277C10
 * Original: 0x00277C10 - 0x00277C72 (98 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277C10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x3F0;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00277C3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277C35u); } /* indirect call */
    }

loc_00277C3B: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = 0;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00277C54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277C51u); } /* indirect call */
    }

loc_00277C54: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277C5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277C57u); } /* indirect call */
    }

loc_00277C5D: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00277C80
 * Original: 0x00277C80 - 0x00277C96 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277C80(void)
{

loc_00277C80: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x00277C93u); RECOMP_ABI_CALL(0x00277F70u, sub_00277F70); /* call 0x00277F70 */

loc_00277C93: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00277CA0
 * Original: 0x00277CA0 - 0x00277CB6 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277CA0(void)
{

loc_00277CA0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x00277CB3u); RECOMP_ABI_CALL(0x00277F70u, sub_00277F70); /* call 0x00277F70 */

loc_00277CB3: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00277CC0
 * Original: 0x00277CC0 - 0x00277F2D (621 bytes, 202 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277CC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296D28);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = ebp + 0x3F0;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00277CEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277CE8u); } /* indirect call */
    }

loc_00277CEE: ;
    ebx = MEM32(esp + 0x40);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(esp + 0x2C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00277D0C; /* jne: not equal / not zero */

loc_00277CFC: ;
    eax = MEM32(0x64CF94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277D0A; /* jne: not equal / not zero */

loc_00277D05: ;
    PUSH32(esp, 0x00277D0Au); RECOMP_ABI_CALL(0x00276660u, sub_00276660); /* call 0x00276660 */

loc_00277D0A: ;
    ebx = eax;

loc_00277D0C: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x44) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00277D26; /* je: equal / zero */

loc_00277D20: ;
    eax = MEM32(eax);
    MEM32(esp + 0x10) = eax;

loc_00277D26: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277D36; /* je: equal / zero */

loc_00277D2E: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x44) = ecx;
    edi = ecx;

loc_00277D36: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277D47; /* je: equal / zero */

loc_00277D3E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00277D44u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00277D44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277D47: ;
    _fa = (uint32_t)(MEM8(esp + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x38), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277DC5; /* je: equal / zero */

loc_00277D4E: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x332E58);
    PUSH32(esp, 0x00277D5Bu); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00277D5B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x332E48;
    PUSH32(esp, 0x00277D68u); RECOMP_ABI_CALL(0x0027B590u, sub_0027B590); /* call 0x0027B590 */

loc_00277D68: ;
    edi = ebp + 4;
    MEM32(esp + 0x3C) = 0x10;

loc_00277D73: ;
    edx = MEM32(edi + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3333A0);
    esi = 0x10;
    edx = esp + 0x20;
    PUSH32(esp, 0x00277D8Au); RECOMP_ABI_CALL(0x00276E40u, sub_00276E40); /* call 0x00276E40 */

loc_00277D8A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x18;
    PUSH32(esp, 0x00277D96u); RECOMP_ABI_CALL(0x0027B4F0u, sub_0027B4F0); /* call 0x0027B4F0 */

loc_00277D96: ;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x3C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x3C) = eax;
    if ((_fa != 0)) goto loc_00277D73; /* jne: not equal / not zero */

loc_00277DA4: ;
    edi = ebp + 0x3C4;
    eax = 0x332E40;
    PUSH32(esp, 0x00277DB4u); RECOMP_ABI_CALL(0x0027B4F0u, sub_0027B4F0); /* call 0x0027B4F0 */

loc_00277DB4: ;
    PUSH32(esp, 0x332E3C);
    PUSH32(esp, 0x00277DBEu); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00277DBE: ;
    edi = MEM32(esp + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277DC5: ;
    _fa = (uint32_t)(MEM8(esp + 0x38)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x38), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277DDC; /* je: equal / zero */

loc_00277DCC: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x332DF0);
    PUSH32(esp, 0x00277DD9u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00277DD9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277DDC: ;
    _fa = (uint32_t)(MEM8(esp + 0x38)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x38), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277E84; /* je: equal / zero */

loc_00277DE7: ;
    MEM8(esp + 0x44) = 0;
    esi = ebp + 0x34;
    MEM32(esp + 0x3C) = 0x10;

loc_00277DF7: ;
    eax = MEM32(esi + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277E03; /* jne: not equal / not zero */

loc_00277DFE: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277E23; /* je: equal / zero */

loc_00277E03: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277E1E; /* jne: not equal / not zero */

loc_00277E0B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x332DBC);
    PUSH32(esp, 0x00277E16u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00277E16: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x44) = 1;

loc_00277E1E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277E2A; /* jne: not equal / not zero */

loc_00277E23: ;
    eax = MEM32(esi + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277E3B; /* je: equal / zero */

loc_00277E2A: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x33338C);
    PUSH32(esp, 0x00277E38u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00277E38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277E3B: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00277E4Cu); RECOMP_ABI_CALL(0x0027B720u, sub_0027B720); /* call 0x0027B720 */

loc_00277E4C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    eax = esi + -8;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00277E60u); RECOMP_ABI_CALL(0x0027B720u, sub_0027B720); /* call 0x0027B720 */

loc_00277E60: ;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x3C) = eax;
    if ((_fa != 0)) goto loc_00277DF7; /* jne: not equal / not zero */

loc_00277E6E: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277E84; /* je: equal / zero */

loc_00277E76: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x332D8C);
    PUSH32(esp, 0x00277E81u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00277E81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277E84: ;
    _fa = (uint32_t)(MEM8(esp + 0x38)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x38), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277EE5; /* je: equal / zero */

loc_00277E8B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x332D5C);
    PUSH32(esp, 0x00277E96u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00277E96: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp + 0x2C;
    MEM32(esp + 0x38) = 0x10;

loc_00277EA4: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00277EB8u); RECOMP_ABI_CALL(0x0027B720u, sub_0027B720); /* call 0x0027B720 */

loc_00277EB8: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00277EC9u); RECOMP_ABI_CALL(0x0027B720u, sub_0027B720); /* call 0x0027B720 */

loc_00277EC9: ;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x38) = eax;
    if ((_fa != 0)) goto loc_00277EA4; /* jne: not equal / not zero */

loc_00277ED7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x332D2C);
    PUSH32(esp, 0x00277EE2u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00277EE2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277EE5: ;
    edx = MEM32(ebx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00277F0E; /* je: equal / zero */

loc_00277EED: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277F0E; /* je: equal / zero */

loc_00277EF4: ;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277F0E; /* je: equal / zero */

loc_00277EFB: ;
    esi = MEM32(ebx + 0xC);
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00277F07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277F04u); } /* indirect call */
    }

loc_00277F07: ;
    MEM32(ebx + 8) = 0;

loc_00277F0E: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277F19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277F13u); } /* indirect call */
    }

loc_00277F19: ;
    ecx = MEM32(esp + 0x24);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00277F30
 * Original: 0x00277F30 - 0x00277F33 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277F30(void)
{

loc_00277F30: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00277F40
 * Original: 0x00277F40 - 0x00277F45 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277F40(void)
{

loc_00277F40: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277F50
 * Original: 0x00277F50 - 0x00277F57 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277F50(void)
{

loc_00277F50: ;
    eax = MEM32(ecx + 0x3EC);
    esp += 4; return; /* ret */

}

/**
 * sub_00277F60
 * Original: 0x00277F60 - 0x00277F66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277F60(void)
{

loc_00277F60: ;
    eax = 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_00277F70
 * Original: 0x00277F70 - 0x0027800B (155 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277F70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2969D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + 0x3F0;
    PUSH32(esp, eax);
    edi = ecx;
    esi = edx;
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00277FA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277F9Cu); } /* indirect call */
    }

loc_00277FA2: ;
    MEM32(esp + 0x18) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00277FB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277FAFu); } /* indirect call */
    }

loc_00277FB2: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277FE9; /* je: equal / zero */

loc_00277FB8: ;
    eax = MEM32(esp + 0x24);
    ecx = eax;
    ecx = ecx & 0xFFFFF000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) edi = ecx; /* cmovb */
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
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
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00277FE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277FE6u); } /* indirect call */
    }

loc_00277FE9: ;
    eax = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00277FF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277FEEu); } /* indirect call */
    }

loc_00277FF4: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00278010
 * Original: 0x00278010 - 0x0027806F (95 bytes, 27 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278010: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ebx = ecx;
    esi = ebx + 0xC4;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027803Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278035u); } /* indirect call */
    }

loc_0027803B: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00278055u); RECOMP_ABI_CALL(0x002798E0u, sub_002798E0); /* call 0x002798E0 */

loc_00278055: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027805Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278056u); } /* indirect call */
    }

loc_0027805C: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00278070
 * Original: 0x00278070 - 0x002780D0 (96 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278070: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0xC4;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027809Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278095u); } /* indirect call */
    }

loc_0027809B: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x002780B2u); RECOMP_ABI_CALL(0x002797D0u, sub_002797D0); /* call 0x002797D0 */

loc_002780B2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002780BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002780B5u); } /* indirect call */
    }

loc_002780BB: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002780D0
 * Original: 0x002780D0 - 0x00278105 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002780D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002780D0: ;
    MEM32(eax) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(eax + 0x15) = LO8(ecx);
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x39) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00278110
 * Original: 0x00278110 - 0x00278124 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278110: ;
    eax = MEM32(ecx + 0x58);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278120; /* je: equal / zero */

loc_00278119: ;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x64) = eax;
    esp += 4; return; /* ret */

loc_00278120: ;
    MEM32(ecx + 0x64) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00278130
 * Original: 0x00278130 - 0x0027816A (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278130: ;
    PUSH32(esp, edi);
    edi = ebx + -1;
    edi = edi << 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xF80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    MEM32(esi) = 0xBAAAAAABu;
    PUSH32(esp, 0x00278154u); RECOMP_ABI_CALL(0x0027BFC0u, sub_0027BFC0); /* call 0x0027BFC0 */

loc_00278154: ;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = 0;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x70) = 0xEAAAAAAEu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00278170
 * Original: 0x00278170 - 0x00278271 (257 bytes, 71 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278170: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296C68);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(esi) = 0x3329D0;
    eax = MEM32(0x64CF94);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002781A1; /* jne: not equal / not zero */

loc_0027819C: ;
    PUSH32(esp, 0x002781A1u); RECOMP_ABI_CALL(0x00276660u, sub_00276660); /* call 0x00276660 */

loc_002781A1: ;
    _fa = (uint32_t)(MEM32(0x343DF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x343DF4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002781BE; /* jne: not equal / not zero */

loc_002781AA: ;
    PUSH32(esp, 0x332AF0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x002781B6u); RECOMP_ABI_CALL(0x00272C60u, sub_00272C60); /* call 0x00272C60 */

loc_002781B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x343DF4) = eax;

loc_002781BE: ;
    MEM32(esp + 0x10) = ebx;
    MEM32(esi) = 0x332F60;
    eax = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x002781F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002781EAu); } /* indirect call */
    }

loc_002781F0: ;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    MEM8(esi + 0x5D) = LO8(ebx);
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM8(esi + 0x80) = LO8(ebx);
    MEM8(esi + 0x81) = LO8(ebx);
    MEM32(esi + 0x94) = ecx;
    _fa = (uint32_t)(MEM32(0x64CF90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64CF90), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278246; /* jne: not equal / not zero */

loc_00278241: ;
    PUSH32(esp, 0x00278246u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_00278246: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(0x343DF4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00278256u); RECOMP_ABI_CALL(0x00272C60u, sub_00272C60); /* call 0x00272C60 */

loc_00278256: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x2C) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00278280
 * Original: 0x00278280 - 0x002782A2 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278280: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00278288u); RECOMP_ABI_CALL(0x002782B0u, sub_002782B0); /* call 0x002782B0 */

loc_00278288: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027829C; /* je: equal / zero */

loc_0027828F: ;
    PUSH32(esp, 0x00278294u); RECOMP_ABI_CALL(0x00273430u, sub_00273430); /* call 0x00273430 */

loc_00278294: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027829Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278299u); } /* indirect call */
    }

loc_0027829C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002782B0
 * Original: 0x002782B0 - 0x00278307 (87 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002782B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002782B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296908);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x332F60;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x002782EAu); RECOMP_ABI_CALL(0x00278CB0u, sub_00278CB0); /* call 0x00278CB0 */

loc_002782EA: ;
    ecx = esi;
    PUSH32(esp, 0x002782F1u); RECOMP_ABI_CALL(0x002789B0u, sub_002789B0); /* call 0x002789B0 */

loc_002782F1: ;
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
 * sub_00278310
 * Original: 0x00278310 - 0x0027865A (842 bytes, 277 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278310: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2971D0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027833Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278336u); } /* indirect call */
    }

loc_0027833C: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x30) = ebx;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00278353; /* jae: above or equal (unsigned >=) */

loc_0027834E: ;
    eax = 0x28;

loc_00278353: ;
    esi = eax + 0xF;
    eax = MEM32(edi + 0x64);
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027839A; /* je: equal / zero */

loc_00278364: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x64), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0027839A; /* jb: below (unsigned <) */

loc_0027836C: ;
    MEM8(esp + 0x1C) = LO8(ebx);
    ecx = MEM32(esp + 0x1C);
    eax = edi + 0x4C;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00278385u); RECOMP_ABI_CALL(0x00278F60u, sub_00278F60); /* call 0x00278F60 */

loc_00278385: ;
    ecx = eax;
    ebp = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002784E3; /* jne: not equal / not zero */

loc_0027839A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002783B2; /* jbe: below or equal (unsigned <=) */

loc_002783A2: ;
    ebp = esi + 0x7F;
    if (0xC) _cf = (int)(((ebp) >> ((0xC) - 1)) & 1);
    ebp = ebp >> 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = ebp;
    if (CMP_AE(_fa, _fb)) goto loc_002783BE; /* jae: above or equal (unsigned >=) */

loc_002783B2: ;
    MEM32(esp + 0x18) = 4;
    ebp = MEM32(esp + 0x18);

loc_002783BE: ;
    eax = MEM32(0x64CF90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002783CC; /* jne: not equal / not zero */

loc_002783C7: ;
    PUSH32(esp, 0x002783CCu); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_002783CC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x002783D5u); RECOMP_ABI_CALL(0x00278070u, sub_00278070); /* call 0x00278070 */

loc_002783D5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00278460; /* jne: not equal / not zero */

loc_002783DF: ;
    esi = MEM32(0x64CF98);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002783F0; /* jne: not equal / not zero */

loc_002783E9: ;
    PUSH32(esp, 0x002783EEu); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_002783EE: ;
    esi = eax;

loc_002783F0: ;
    ebp = esi + 0x2E04;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = ebp;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00278401u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002783FBu); } /* indirect call */
    }

loc_00278401: ;
    PUSH32(esp, 0x79);
    MEM8(esp + 0x34) = 1;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x333134);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3330D0);
    PUSH32(esp, 0x0027841Cu); RECOMP_ABI_CALL(0x002769D0u, sub_002769D0); /* call 0x002769D0 */

loc_0027841C: ;
    ecx = MEM32(0x343DF4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x650A70);
    ebx = eax;
    edi = esi;
    PUSH32(esp, 0x00278433u); RECOMP_ABI_CALL(0x00276B60u, sub_00276B60); /* call 0x00276B60 */

loc_00278433: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00278439; /* jne: not equal / not zero */

loc_00278438: ;
    /* int3: debug-trap slide byte, stepped over */

loc_00278439: ;
    esi = MEM32(0x31C7B0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00278442u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278440u); } /* indirect call */
    }

loc_00278442: ;
    eax = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00278449u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278447u); } /* indirect call */
    }

loc_00278449: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00278460: ;
    MEM32(esi + 0x18) = 1;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM8(esi + 0x2C) = LO8(ebx);
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM8(esi + 0x50) = LO8(ebx);
    MEM8(esi + 0x51) = LO8(ebx);
    ebx = ebp;
    MEM32(esp + 0x38) = esi;
    PUSH32(esp, 0x002784A2u); RECOMP_ABI_CALL(0x00278130u, sub_00278130); /* call 0x00278130 */

loc_002784A2: ;
    eax = esi + 4;
    ebp = esi;
    esi = edi + 0x4C;
    PUSH32(esp, eax);
    ebx = esp + 0x3C;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x002784C0u); RECOMP_ABI_CALL(0x00278E50u, sub_00278E50); /* call 0x00278E50 */

loc_002784C0: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(edi + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 8);
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) eax = ecx; /* cmovbe */
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x1C) = esi;
    esi = MEM32(esp + 0x20);
    MEM32(edi + 8) = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002784E3: ;
    edx = MEM32(ebp + 0x64);
    eax = ebp + 0x18;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0x40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00278514; /* je: equal / zero */

loc_002784F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00278514; /* ja: above (unsigned >) */

loc_002784FD: ;
    PUSH32(esp, 0xFE);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x0027850Eu); RECOMP_ABI_CALL(0x0027C1D0u, sub_0027C1D0); /* call 0x0027C1D0 */

loc_0027850E: ;
    ecx = MEM32(esp + 0x10);
    goto loc_00278516;

loc_00278514: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00278516: ;
    edx = MEM32(esp + 0x38);
    MEM32(eax) = 0xB123456Bu;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    edx = edx + 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    esi = MEM32(ebp + 0x68);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x68) = esi;
    edx = MEM32(edi + 0x24);
    esi = MEM32(edi + 0x10);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(eax + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi + 0x24) = edx;
    if (CMP_A(_fa, _fb)) edx = esi; /* cmova */
    MEM32(edi + 0x10) = edx;
    edx = MEM32(edi + 0x28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    MEM32(edi + 0x28) = edx;
    edx = MEM32(edi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) eax = edx; /* cmova */
    edx = MEM32(edi + 0xC);
    MEM32(edi + 0x14) = eax;
    eax = MEM32(edi + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi + 0x20) = eax;
    if (CMP_A(_fa, _fb)) eax = edx; /* cmova */
    MEM32(edi + 0xC) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0027857C; /* jbe: below or equal (unsigned <=) */

loc_00278577: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x68), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00278598; /* jne: not equal / not zero */

loc_0027857C: ;
    eax = MEM32(ebp + 0x58);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00278588; /* je: equal / zero */

loc_00278585: ;
    edx = MEM32(eax + 0xC);

loc_00278588: ;
    _fa = (uint32_t)(MEM32(edi + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x94), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x38) = LO8(edx);
    if ((_fa == 0)) goto loc_002785DC; /* je: equal / zero */

loc_00278598: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, 0x002785A4u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_002785A4: ;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002785AE; /* je: equal / zero */

loc_002785AB: ;
    ebx = MEM32(eax + 0xC);

loc_002785AE: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebp + 0x64) = ebx;
    PUSH32(esp, ecx);
    esi = edi + 0x70;
    ebx = esp + 0x20;
    PUSH32(esp, 0x002785C2u); RECOMP_ABI_CALL(0x00278E50u, sub_00278E50); /* call 0x00278E50 */

loc_002785C2: ;
    edx = MEM32(ebp + 0x6C);
    esi = MEM32(edi + 0x18);
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) eax = ecx; /* cmovbe */
    MEM32(edi + 0x18) = esi;
    MEM32(edi + 4) = eax;
    goto loc_00278636;

loc_002785DC: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002785E5; /* je: equal / zero */

loc_002785E2: ;
    esi = MEM32(eax + 0xC);

loc_002785E5: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00278636; /* je: equal / zero */

loc_002785EB: ;
    PUSH32(esp, 0x002785F0u); RECOMP_ABI_CALL(0x0027D500u, sub_0027D500); /* call 0x0027D500 */

loc_002785F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00278629; /* je: equal / zero */

loc_002785F4: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x64), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00278629; /* jbe: below or equal (unsigned <=) */

loc_002785FC: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x0027860Cu); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027860C: ;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00278616; /* je: equal / zero */

loc_00278613: ;
    ebx = MEM32(eax + 0xC);

loc_00278616: ;
    MEM32(ebp + 0x64) = ebx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebx = esp + 0x20;
    PUSH32(esp, 0x00278627u); RECOMP_ABI_CALL(0x00278E50u, sub_00278E50); /* call 0x00278E50 */

loc_00278627: ;
    goto loc_00278636;

loc_00278629: ;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00278633; /* je: equal / zero */

loc_00278630: ;
    ebx = MEM32(eax + 0xC);

loc_00278633: ;
    MEM32(ebp + 0x64) = ebx;

loc_00278636: ;
    edx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00278641u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027863Bu); } /* indirect call */
    }

loc_00278641: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278660
 * Original: 0x00278660 - 0x002786BA (90 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278660: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x30;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00278688u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278682u); } /* indirect call */
    }

loc_00278688: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0027869Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278699u); } /* indirect call */
    }

loc_0027869C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002786A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027869Fu); } /* indirect call */
    }

loc_002786A5: ;
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
 * sub_002786C0
 * Original: 0x002786C0 - 0x002788FC (572 bytes, 194 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002786C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002786C0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002788E9; /* je: equal / zero */

loc_002786E8: ;
    PUSH32(esp, ebx);
    eax = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002786F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002786F2u); } /* indirect call */
    }

loc_002786F8: ;
    MEM32(esp + 0x28) = 0;
    ecx = MEM32(0x64CF90);
    edi = ebp;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFF000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00278718; /* je: equal / zero */

loc_00278712: ;
    MEM32(esp + 0x10) = ecx;
    goto loc_00278723;

loc_00278718: ;
    PUSH32(esp, 0x0027871Du); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_0027871D: ;
    MEM32(esp + 0x10) = eax;
    ecx = eax;

loc_00278723: ;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 0x10);
    ebx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (0xC) _cf = (int)(((edi) >> ((0xC) - 1)) & 1);
    edi = edi >> 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(ecx + edi * 8 + 4);
    ecx = MEM32(esi + 0x20);
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0xC) _cf = (int)(((edi) >> (32 - (0xC))) & 1);
    edi = edi << 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = edx;
    MEM32(esi + 0x20) = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x6C), 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = edi;
    SET_LO8(ebx, 1);
    if (CMP_BE(_fa, _fb)) goto loc_00278770; /* jbe: below or equal (unsigned <=) */

loc_00278763: ;
    eax = MEM32(edi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00278770; /* je: equal / zero */

loc_0027876A: ;
    MEM8(esp + 0x30) = LO8(ebx);
    goto loc_0027878A;

loc_00278770: ;
    eax = MEM32(edi + 0x58);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0027877C; /* je: equal / zero */

loc_00278779: ;
    ecx = MEM32(eax + 0xC);

loc_0027877C: ;
    _fa = (uint32_t)(MEM32(esi + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x94), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x30) = LO8(eax);

loc_0027878A: ;
    ecx = MEM32(ebp + -12);
    edx = MEM32(edi + 0x64);
    eax = ebp + -16;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, eax);
    edx = edi + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002787A5u); RECOMP_ABI_CALL(0x0027BFC0u, sub_0027BFC0); /* call 0x0027BFC0 */

loc_002787A5: ;
    ecx = MEM32(edi + 0x68);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x68) = ecx;
    edx = MEM32(edi + 0x6C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002787BA; /* jbe: below or equal (unsigned <=) */

loc_002787B4: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002787DD; /* jne: not equal / not zero */

loc_002787BA: ;
    eax = MEM32(edi + 0x58);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002787C6; /* je: equal / zero */

loc_002787C3: ;
    ecx = MEM32(eax + 0xC);

loc_002787C6: ;
    ebx = MEM32(esi + 0x94);
    eax = MEM32(edi + 0x68);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002788A0; /* je: equal / zero */

loc_002787DD: ;
    eax = MEM32(edi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_002787F3; /* je: equal / zero */

loc_002787EC: ;
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x10) = eax;

loc_002787F3: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002788DC; /* je: equal / zero */

loc_00278801: ;
    ebp = edi + 4;
    ecx = ebp;
    PUSH32(esp, 0x0027880Bu); RECOMP_ABI_CALL(0x0027C920u, sub_0027C920); /* call 0x0027C920 */

loc_0027880B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0027881B; /* je: equal / zero */

loc_0027880F: ;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x64) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0027883B; /* ja: above (unsigned >) */

loc_0027881B: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00278827; /* je: equal / zero */

loc_00278823: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0027883B; /* je: equal / zero */

loc_00278827: ;
    eax = MEM32(edi + 0x58);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00278833; /* je: equal / zero */

loc_00278830: ;
    ecx = MEM32(eax + 0xC);

loc_00278833: ;
    MEM32(edi + 0x64) = ecx;
    goto loc_002788DC;

loc_0027883B: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00278861; /* jne: not equal / not zero */

loc_00278843: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x4C)) >> 32) & 1);
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0x0027884Eu); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027884E: ;
    ecx = edi;
    PUSH32(esp, 0x00278855u); RECOMP_ABI_CALL(0x00278110u, sub_00278110); /* call 0x00278110 */

loc_00278855: ;
    PUSH32(esp, ebp);
    ebx = esp + 0x18;
    PUSH32(esp, 0x0027885Fu); RECOMP_ABI_CALL(0x00278E50u, sub_00278E50); /* call 0x00278E50 */

loc_0027885F: ;
    goto loc_002788DC;

loc_00278861: ;
    eax = esi + 0x70;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x00278870u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_00278870: ;
    ecx = edi;
    PUSH32(esp, 0x00278877u); RECOMP_ABI_CALL(0x00278110u, sub_00278110); /* call 0x00278110 */

loc_00278877: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebp);
    ebx = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_00278895; /* jne: not equal / not zero */

loc_00278880: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edi + 0x6C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x18) = edx;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x4C)) >> 32) & 1);
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00278893u); RECOMP_ABI_CALL(0x00278E50u, sub_00278E50); /* call 0x00278E50 */

loc_00278893: ;
    goto loc_002788DC;

loc_00278895: ;
    esi = MEM32(esp + 0x34);
    PUSH32(esp, 0x0027889Eu); RECOMP_ABI_CALL(0x00278E50u, sub_00278E50); /* call 0x00278E50 */

loc_0027889E: ;
    goto loc_002788DC;

loc_002788A0: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = edi + 4;
    if (CMP_NE(_fa, _fb)) goto loc_002788B1; /* jne: not equal / not zero */

loc_002788AB: ;
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    goto loc_002788BD;

loc_002788B1: ;
    ebx = MEM32(esi + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 0x70;
    MEM32(esi + 0x18) = ebx;
    PUSH32(esp, ecx);

loc_002788BD: ;
    PUSH32(esp, 0x002788C2u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_002788C2: ;
    edx = MEM32(edi + 0x6C);
    ebx = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x1C) = ebx;
    eax = MEM32(edi + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002788DCu); RECOMP_ABI_CALL(0x00278010u, sub_00278010); /* call 0x00278010 */

loc_002788DC: ;
    ecx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002788E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002788E1u); } /* indirect call */
    }

loc_002788E7: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002788E9: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278900
 * Original: 0x00278900 - 0x00278956 (86 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278900: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x30;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00278928u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278922u); } /* indirect call */
    }

loc_00278928: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0027893Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278939u); } /* indirect call */
    }

loc_0027893C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00278943u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027893Du); } /* indirect call */
    }

loc_00278943: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00278960
 * Original: 0x00278960 - 0x002789A6 (70 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278960: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x64CF90);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_0027897B; /* jne: not equal / not zero */

loc_00278974: ;
    PUSH32(esp, 0x00278979u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_00278979: ;
    ebx = eax;

loc_0027897B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002789A0; /* je: equal / zero */

loc_0027897F: ;
    /* nop */

loc_00278980: ;
    esi = MEM32(esi + 0xC);
    eax = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027898Cu); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027898C: ;
    eax = MEM32(esi + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00278999u); RECOMP_ABI_CALL(0x00278010u, sub_00278010); /* call 0x00278010 */

loc_00278999: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278980; /* jne: not equal / not zero */

loc_002789A0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002789B0
 * Original: 0x002789B0 - 0x00278A19 (105 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002789B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002789B0: ;
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
    ebx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002789D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002789D3u); } /* indirect call */
    }

loc_002789D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = eax;
    edi = esi + 0x4C;
    PUSH32(esp, esi);
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x002789F7u); RECOMP_ABI_CALL(0x00278960u, sub_00278960); /* call 0x00278960 */

loc_002789F7: ;
    edi = esi + 0x70;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00278A00u); RECOMP_ABI_CALL(0x00278960u, sub_00278960); /* call 0x00278960 */

loc_00278A00: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00278A07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278A01u); } /* indirect call */
    }

loc_00278A07: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00278A20
 * Original: 0x00278A20 - 0x00278AE4 (196 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278A20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0x30;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00278A49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278A43u); } /* indirect call */
    }

loc_00278A49: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00278ACD; /* je: equal / zero */

loc_00278A59: ;
    eax = MEM32(0x64CF90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278A67; /* jne: not equal / not zero */

loc_00278A62: ;
    PUSH32(esp, 0x00278A67u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_00278A67: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(edi + -12);
    eax = edx + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_A(_fa, _fb)) goto loc_00278AC0; /* ja: above (unsigned >) */

loc_00278A79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00278A86; /* jbe: below or equal (unsigned <=) */

loc_00278A7E: ;
    ebp = ecx;
    ebp = ebp >> 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00278AC0; /* jb: below (unsigned <) */

loc_00278A86: ;
    eax = MEM32(ebx + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    MEM32(ebx + 0x24) = eax;
    ecx = MEM32(ebx + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    MEM32(ebx + 0x24) = ebp;
    MEM32(ebx + 0x10) = eax;

loc_00278AA2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00278AA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278AA3u); } /* indirect call */
    }

loc_00278AA9: ;
    POP32(esp, ebp);

loc_00278AAA: ;
    ecx = MEM32(esp + 0x10);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00278AC0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00278AC6u); RECOMP_ABI_CALL(0x00273240u, sub_00273240); /* call 0x00273240 */

loc_00278AC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    goto loc_00278AA2;

loc_00278ACD: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00278AD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278AD6u); } /* indirect call */
    }

loc_00278AD9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00278AE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278ADCu); } /* indirect call */
    }

loc_00278AE2: ;
    goto loc_00278AAA;

}

/**
 * sub_00278AF0
 * Original: 0x00278AF0 - 0x00278B4E (94 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278AF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x30;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00278B18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278B12u); } /* indirect call */
    }

loc_00278B18: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00278B30u); RECOMP_ABI_CALL(0x00013820u, sub_00013820); /* call 0x00013820 */

loc_00278B30: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00278B39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278B33u); } /* indirect call */
    }

loc_00278B39: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00278B50
 * Original: 0x00278B50 - 0x00278B9A (74 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278B50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebp = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00278B63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278B60u); } /* indirect call */
    }

loc_00278B63: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278B92; /* je: equal / zero */

loc_00278B69: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) ecx = esi; /* cmovae */
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
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
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00278B91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278B8Eu); } /* indirect call */
    }

loc_00278B91: ;
    POP32(esp, edi);

loc_00278B92: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00278BA0
 * Original: 0x00278BA0 - 0x00278BEA (74 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278BA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebp = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00278BB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278BB0u); } /* indirect call */
    }

loc_00278BB3: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278BE2; /* je: equal / zero */

loc_00278BB9: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) ecx = esi; /* cmovae */
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
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
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00278BE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278BDEu); } /* indirect call */
    }

loc_00278BE1: ;
    POP32(esp, edi);

loc_00278BE2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00278BF0
 * Original: 0x00278BF0 - 0x00278CA4 (180 bytes, 70 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278BF0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278C9C; /* je: equal / zero */

loc_00278C04: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx & 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = eax;

loc_00278C12: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = MEM32(esi + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00278C3B; /* je: equal / zero */

loc_00278C19: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    ecx = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x00278C38u); RECOMP_ABI_CALL(0x0027CA80u, sub_0027CA80); /* call 0x0027CA80 */

loc_00278C38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00278C3B: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278C55; /* je: equal / zero */

loc_00278C43: ;
    edx = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x00278C52u); RECOMP_ABI_CALL(0x0027CC00u, sub_0027CC00); /* call 0x0027CC00 */

loc_00278C52: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00278C55: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278C70; /* je: equal / zero */

loc_00278C5C: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278C6C; /* je: equal / zero */

loc_00278C63: ;
    ecx = eax;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278C63; /* jne: not equal / not zero */

loc_00278C6C: ;
    eax = ecx;
    goto loc_00278C90;

loc_00278C70: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278C8E; /* je: equal / zero */

loc_00278C76: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278C8E; /* je: equal / zero */

loc_00278C7B: ;
    goto loc_00278C80;

    /* nop */

loc_00278C80: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278C90; /* jne: not equal / not zero */

loc_00278C85: ;
    esi = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278C80; /* jne: not equal / not zero */

loc_00278C8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00278C90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00278C12; /* jne: not equal / not zero */

loc_00278C9A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00278C9C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00278CB0
 * Original: 0x00278CB0 - 0x00278E3D (397 bytes, 136 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278CB0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    edi = ebp + 0x30;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00278CDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278CD6u); } /* indirect call */
    }

loc_00278CDC: ;
    esi = MEM32(esp + 0x34);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00278CFA; /* jne: not equal / not zero */

loc_00278CEA: ;
    eax = MEM32(0x64CF94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278CF8; /* jne: not equal / not zero */

loc_00278CF3: ;
    PUSH32(esp, 0x00278CF8u); RECOMP_ABI_CALL(0x00276660u, sub_00276660); /* call 0x00276660 */

loc_00278CF8: ;
    esi = eax;

loc_00278CFA: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00278D14; /* je: equal / zero */

loc_00278D0E: ;
    eax = MEM32(eax);
    MEM32(esp + 0x10) = eax;

loc_00278D14: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278D22; /* je: equal / zero */

loc_00278D1C: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x34) = ecx;

loc_00278D22: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278D35; /* je: equal / zero */

loc_00278D2A: ;
    PUSH32(esp, eax);
    ebx = esi;
    PUSH32(esp, 0x00278D32u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00278D32: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00278D35: ;
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278D69; /* je: equal / zero */

loc_00278D3E: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x333078);
    ebx = esi;
    PUSH32(esp, 0x00278D4Du); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00278D4D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00278D57u); RECOMP_ABI_CALL(0x0027B590u, sub_0027B590); /* call 0x0027B590 */

loc_00278D57: ;
    edi = ebp + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00278D61u); RECOMP_ABI_CALL(0x0027B4F0u, sub_0027B4F0); /* call 0x0027B4F0 */

loc_00278D61: ;
    ebx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x14);

loc_00278D69: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278D84; /* je: equal / zero */

loc_00278D6E: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x333028);
    ebx = esi;
    PUSH32(esp, 0x00278D7Du); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00278D7D: ;
    ebx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00278D84: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xA (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278DF9; /* je: equal / zero */

loc_00278D89: ;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278D9A; /* jne: not equal / not zero */

loc_00278D90: ;
    eax = MEM32(ebp + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278DAE; /* je: equal / zero */

loc_00278D9A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x332FEC);
    ebx = esi;
    PUSH32(esp, 0x00278DA7u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00278DA7: ;
    ebx = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00278DAE: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp + 0x4C;
    eax = ebx;
    PUSH32(esp, 0x00278DC3u); RECOMP_ABI_CALL(0x00278BF0u, sub_00278BF0); /* call 0x00278BF0 */

loc_00278DC3: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp + 0x70;
    eax = ebx;
    PUSH32(esp, 0x00278DD8u); RECOMP_ABI_CALL(0x00278BF0u, sub_00278BF0); /* call 0x00278BF0 */

loc_00278DD8: ;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278DE9; /* jne: not equal / not zero */

loc_00278DDF: ;
    eax = MEM32(ebp + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278DF9; /* je: equal / zero */

loc_00278DE9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x332FB4);
    ebx = esi;
    PUSH32(esp, 0x00278DF6u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_00278DF6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00278DF9: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278E21; /* je: equal / zero */

loc_00278E00: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278E21; /* je: equal / zero */

loc_00278E07: ;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278E21; /* je: equal / zero */

loc_00278E0E: ;
    ebx = MEM32(esi + 0xC);
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00278E1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278E17u); } /* indirect call */
    }

loc_00278E1A: ;
    MEM32(esi + 8) = 0;

loc_00278E21: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x00278E28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00278E22u); } /* indirect call */
    }

loc_00278E28: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00278E40
 * Original: 0x00278E40 - 0x00278E44 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278E40(void)
{

loc_00278E40: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00278E50
 * Original: 0x00278E50 - 0x00278EA7 (87 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278E50: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_00278E89; /* je: equal / zero */

loc_00278E65: ;
    MEM8(esp + 0xC) = LO8(eax);
    ecx = MEM32(esp + 0xC);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0x00278E7Cu); RECOMP_ABI_CALL(0x00279000u, sub_00279000); /* call 0x00279000 */

loc_00278E7C: ;
    edi = esp + 8;
    edx = ebx;
    ecx = esi;
    PUSH32(esp, 0x00278E89u); RECOMP_ABI_CALL(0x00278EB0u, sub_00278EB0); /* call 0x00278EB0 */

loc_00278E89: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = ebx;
    edi = esi;
    PUSH32(esp, 0x00278EA0u); RECOMP_ABI_CALL(0x0027C240u, sub_0027C240); /* call 0x0027C240 */

loc_00278EA0: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278EB0
 * Original: 0x00278EB0 - 0x00278F5D (173 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278EB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00278EBC; /* jne: not equal / not zero */

loc_00278EB9: ;
    eax = MEM32(esi + 4);

loc_00278EBC: ;
    ebx = MEM32(edx);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x64) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278EF8; /* je: equal / zero */

loc_00278ED8: ;
    ebx = MEM32(edx);
    ebp = MEM32(ebx + 0x64);
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278ED8; /* jne: not equal / not zero */

loc_00278EF8: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    SET_LO8(ecx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278F23; /* jne: not equal / not zero */

loc_00278F05: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278F55; /* je: equal / zero */

loc_00278F0B: ;
    ebx = MEM32(edx);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x64) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278F05; /* je: equal / zero */

loc_00278F23: ;
    ecx = MEM32(eax + 0xC);
    ebx = MEM32(edx);
    ecx = MEM32(ecx + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x64) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00278F4F; /* je: equal / zero */

loc_00278F3C: ;
    edx = MEM32(edx);
    ecx = MEM32(eax + 0xC);
    esi = MEM32(edx + 0x64);
    ecx = MEM32(ecx + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(edx);

loc_00278F4F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00278F55: ;
    MEM32(edi) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278F60
 * Original: 0x00278F60 - 0x00278FF6 (150 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278F60: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278FCF; /* je: equal / zero */

loc_00278F6B: ;
    esi = MEM32(ecx);
    /* nop */

loc_00278F70: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(edx + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x64), esi (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = ZX8(LO8(ecx));
    if (CMP_EQ(_fa, _fb)) edi = eax; /* cmove */
    eax = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278F70; /* jne: not equal / not zero */

loc_00278F89: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278FCF; /* je: equal / zero */

loc_00278F8D: ;
    ecx = edi;
    PUSH32(esp, 0x00278F94u); RECOMP_ABI_CALL(0x0027D500u, sub_0027D500); /* call 0x0027D500 */

loc_00278F94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278FCF; /* je: equal / zero */

loc_00278F98: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(edx + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278FCF; /* jne: not equal / not zero */

loc_00278FA7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_AE(_fa, _fb)) edi = eax; /* cmovae */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278FD6; /* je: equal / zero */

loc_00278FB3: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278FC9; /* je: equal / zero */

loc_00278FBA: ;
    /* nop */

loc_00278FC0: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278FC0; /* jne: not equal / not zero */

loc_00278FC9: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278F98; /* jne: not equal / not zero */

loc_00278FCF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00278FD6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278FCF; /* je: equal / zero */

loc_00278FDC: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278FCF; /* je: equal / zero */

loc_00278FE1: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278FC9; /* jne: not equal / not zero */

loc_00278FE6: ;
    eax = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278FE1; /* jne: not equal / not zero */

loc_00278FEF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279000
 * Original: 0x00279000 - 0x00279096 (150 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279000: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027906F; /* je: equal / zero */

loc_0027900B: ;
    edx = MEM32(ecx);
    esi = MEM32(edx + 0x64);

loc_00279010: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x64), esi (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = ZX8(LO8(ecx));
    if (CMP_EQ(_fa, _fb)) edi = eax; /* cmove */
    eax = MEM32(eax + edx * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279010; /* jne: not equal / not zero */

loc_00279029: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027906F; /* je: equal / zero */

loc_0027902D: ;
    ecx = edi;
    PUSH32(esp, 0x00279034u); RECOMP_ABI_CALL(0x0027D500u, sub_0027D500); /* call 0x0027D500 */

loc_00279034: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027906F; /* je: equal / zero */

loc_00279038: ;
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027906F; /* jne: not equal / not zero */

loc_00279047: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_AE(_fa, _fb)) edi = eax; /* cmovae */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279076; /* je: equal / zero */

loc_00279053: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279069; /* je: equal / zero */

loc_0027905A: ;
    /* nop */

loc_00279060: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279060; /* jne: not equal / not zero */

loc_00279069: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279038; /* jne: not equal / not zero */

loc_0027906F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00279076: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027906F; /* je: equal / zero */

loc_0027907C: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027906F; /* je: equal / zero */

loc_00279081: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279069; /* jne: not equal / not zero */

loc_00279086: ;
    eax = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279081; /* jne: not equal / not zero */

loc_0027908F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002790A0
 * Original: 0x002790A0 - 0x00279143 (163 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002790A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002790A0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296C68);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    MEM32(esi) = 0x3329D0;
    eax = MEM32(0x64CF94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002790CE; /* jne: not equal / not zero */

loc_002790C9: ;
    PUSH32(esp, 0x002790CEu); RECOMP_ABI_CALL(0x00276660u, sub_00276660); /* call 0x00276660 */

loc_002790CE: ;
    _fa = (uint32_t)(MEM32(0x343DF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x343DF4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002790EB; /* jne: not equal / not zero */

loc_002790D7: ;
    PUSH32(esp, 0x332AF0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x002790E3u); RECOMP_ABI_CALL(0x00272C60u, sub_00272C60); /* call 0x00272C60 */

loc_002790E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x343DF4) = eax;

loc_002790EB: ;
    MEM32(esp + 0xC) = 0;
    MEM32(esi) = 0x3331A8;
    eax = MEM32(0x64CF90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279107; /* jne: not equal / not zero */

loc_00279102: ;
    PUSH32(esp, 0x00279107u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_00279107: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00279111u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027910Eu); } /* indirect call */
    }

loc_00279111: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM8(esi + 0xC) = LO8(ecx);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x10) = edi;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00279125u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279122u); } /* indirect call */
    }

loc_00279125: ;
    ecx = MEM32(esp + 4);
    MEM32(esi + 0x14) = eax;
    SET_LO8(eax, MEM8(esp + 0x1C));
    MEM8(esi + 0x18) = LO8(eax);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00279150
 * Original: 0x00279150 - 0x00279177 (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279150: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00279158u); RECOMP_ABI_CALL(0x00279180u, sub_00279180); /* call 0x00279180 */

loc_00279158: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279171; /* je: equal / zero */

loc_0027915F: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00279166u); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_00279166: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00279171u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027916Eu); } /* indirect call */
    }

loc_00279171: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279180
 * Original: 0x00279180 - 0x002791E6 (102 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279180: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296908);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    MEM32(ebx) = 0x3331A8;
    MEM32(esp + 0x18) = 0;
    esi = ebx + 4;
    edi = 2;

loc_002791B5: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002791C8; /* je: equal / zero */

loc_002791BC: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002791C8; /* je: equal / zero */

loc_002791C2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002791C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002791C6u); } /* indirect call */
    }

loc_002791C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002791B5; /* jne: not equal / not zero */

loc_002791CE: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ebx) = 0x3329D0;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002791F0
 * Original: 0x002791F0 - 0x00279234 (68 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002791F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002791F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    edx = ebx + 0xF;
    PUSH32(esp, edi);
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 8;

loc_00279204: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027921F; /* jbe: below or equal (unsigned <=) */

loc_00279208: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00279204; /* jb: below (unsigned <) */

loc_00279211: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00279219u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279216u); } /* indirect call */
    }

loc_00279219: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0027921F: ;
    eax = eax + eax * 2;
    edi = MEM32(ecx + eax * 4 + 4);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0027922Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027922Bu); } /* indirect call */
    }

loc_0027922E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279240
 * Original: 0x00279240 - 0x00279284 (68 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279240: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    edx = ebx + 0xF;
    PUSH32(esp, edi);
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 8;

loc_00279254: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027926F; /* jbe: below or equal (unsigned <=) */

loc_00279258: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00279254; /* jb: below (unsigned <) */

loc_00279261: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00279269u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279266u); } /* indirect call */
    }

loc_00279269: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0027926F: ;
    eax = eax + eax * 2;
    edi = MEM32(ecx + eax * 4 + 4);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0027927Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027927Bu); } /* indirect call */
    }

loc_0027927E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00279290
 * Original: 0x00279290 - 0x002792C7 (55 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279290: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002792C3; /* je: equal / zero */

loc_00279299: ;
    eax = MEM32(0x64CF90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002792A7; /* jne: not equal / not zero */

loc_002792A2: ;
    PUSH32(esp, 0x002792A7u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_002792A7: ;
    edx = MEM32(eax + 0x14);
    ecx = esi;
    ecx = ecx & 0xFFFFF000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 0x10);
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + ecx * 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x002792C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002792C0u); } /* indirect call */
    }

loc_002792C3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002792D0
 * Original: 0x002792D0 - 0x00279307 (55 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002792D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002792D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279303; /* je: equal / zero */

loc_002792D9: ;
    eax = MEM32(0x64CF90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002792E7; /* jne: not equal / not zero */

loc_002792E2: ;
    PUSH32(esp, 0x002792E7u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_002792E7: ;
    edx = MEM32(eax + 0x14);
    ecx = esi;
    ecx = ecx & 0xFFFFF000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 0x10);
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + ecx * 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00279303u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279300u); } /* indirect call */
    }

loc_00279303: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00279310
 * Original: 0x00279310 - 0x00279330 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    edi = 2;
    /* nop */

loc_00279320: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00279327u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279324u); } /* indirect call */
    }

loc_00279327: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00279320; /* jne: not equal / not zero */

loc_0027932D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00279330
 * Original: 0x00279330 - 0x00279406 (214 bytes, 86 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00279330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279330: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002793F4; /* je: equal / zero */

loc_0027933D: ;
    eax = MEM32(0x64CF90);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279356; /* jne: not equal / not zero */

loc_00279351: ;
    PUSH32(esp, 0x00279356u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_00279356: ;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    ecx = ebp;
    ecx = ecx & 0xFFFFF000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(edx + ecx * 8);
    edx = MEM32(esp + 0x14);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edx + 8;
    /* nop */

loc_00279380: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027938F; /* jbe: below or equal (unsigned <=) */

loc_00279384: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00279380; /* jb: below (unsigned <) */

loc_0027938D: ;
    goto loc_002793BD;

loc_0027938F: ;
    ecx = eax + eax * 2;
    ecx = MEM32(edx + ecx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002793BD; /* je: equal / zero */

loc_0027939C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    eax = MEM32(esp + 0x1C);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_002793AF; /* jne: not equal / not zero */

loc_002793A8: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002793ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002793AAu); } /* indirect call */
    }

loc_002793AD: ;
    goto loc_002793B5;

loc_002793AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x002793B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002793B2u); } /* indirect call */
    }

loc_002793B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002793ED; /* jne: not equal / not zero */

loc_002793B9: ;
    edx = MEM32(esp + 0x14);

loc_002793BD: ;
    esi = ebx + 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002793ED; /* jae: above or equal (unsigned >=) */

loc_002793C7: ;
    ecx = esi + esi * 2;
    ebx = edx + ecx * 4 + 4;
    edi = edi;

loc_002793D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002793ED; /* jne: not equal / not zero */

loc_002793D4: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ebx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x002793E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002793E1u); } /* indirect call */
    }

loc_002793E4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002793D0; /* jb: below (unsigned <) */

loc_002793ED: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_002793F4: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00279402u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002793FFu); } /* indirect call */
    }

loc_00279402: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00279410
 * Original: 0x00279410 - 0x00279423 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279410(void)
{

loc_00279410: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00279420u); RECOMP_ABI_CALL(0x00279330u, sub_00279330); /* call 0x00279330 */

loc_00279420: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00279430
 * Original: 0x00279430 - 0x00279443 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279430(void)
{

loc_00279430: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00279440u); RECOMP_ABI_CALL(0x00279330u, sub_00279330); /* call 0x00279330 */

loc_00279440: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00279450
 * Original: 0x00279450 - 0x00279495 (69 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279450: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(0x60) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 0x60 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279492; /* jne: not equal / not zero */

loc_00279457: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    edi = 2;
    goto loc_00279470;

    /* nop */

loc_00279470: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00279488u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279485u); } /* indirect call */
    }

loc_00279488: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00279470; /* jne: not equal / not zero */

loc_0027948E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00279492: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002794A0
 * Original: 0x002794A0 - 0x002794C5 (37 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002794A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002794A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 1);
    esi = ecx + 4;
    edi = 2;
    /* nop */

loc_002794B0: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002794B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002794B4u); } /* indirect call */
    }

loc_002794B7: ;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002794B0; /* jne: not equal / not zero */

loc_002794BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002794D0
 * Original: 0x002794D0 - 0x00279503 (51 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002794D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002794D0: ;
    eax = MEM32(0x64CF90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002794DE; /* jne: not equal / not zero */

loc_002794D9: ;
    PUSH32(esp, 0x002794DEu); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_002794DE: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x10);
    ecx = edx;
    ecx = ecx & 0xFFFFF000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + ecx * 8);
    eax = MEM32(ecx);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_00279510
 * Original: 0x00279510 - 0x00279516 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279510(void)
{

loc_00279510: ;
    eax = MEM32(0x343DF4);
    esp += 4; return; /* ret */

}

/**
 * sub_00279520
 * Original: 0x00279520 - 0x0027952D (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279520: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027952C; /* ja: above (unsigned >) */

loc_0027952A: ;
    eax = ecx;

loc_0027952C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00279530
 * Original: 0x00279530 - 0x00279554 (36 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279530: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    edi = 2;
    /* nop */

loc_00279540: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x00279548u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279545u); } /* indirect call */
    }

loc_00279548: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00279540; /* jne: not equal / not zero */

loc_0027954E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279560
 * Original: 0x00279560 - 0x00279580 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    edi = 2;
    /* nop */

loc_00279570: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00279577u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279574u); } /* indirect call */
    }

loc_00279577: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00279570; /* jne: not equal / not zero */

loc_0027957D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00279580
 * Original: 0x00279580 - 0x002795A0 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279580: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    edi = 2;
    /* nop */

loc_00279590: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00279597u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279594u); } /* indirect call */
    }

loc_00279597: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00279590; /* jne: not equal / not zero */

loc_0027959D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002795A0
 * Original: 0x002795A0 - 0x002795C0 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002795A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002795A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    edi = 2;
    /* nop */

loc_002795B0: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x002795B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002795B4u); } /* indirect call */
    }

loc_002795B7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002795B0; /* jne: not equal / not zero */

loc_002795BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002795C0
 * Original: 0x002795C0 - 0x00279642 (130 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002795C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002795C0: ;
    eax = MEM32(edi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = edi + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_0027963C; /* je: equal / zero */

loc_002795CB: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027963C; /* ja: above (unsigned >) */

loc_002795D4: ;
    PUSH32(esp, 0xFC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002795E3u); RECOMP_ABI_CALL(0x0027C1D0u, sub_0027C1D0); /* call 0x0027C1D0 */

loc_002795E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279638; /* je: equal / zero */

loc_002795E7: ;
    edx = MEM32(edi + 0x88);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x88) = edx;
    edx = MEM32(edi + 0x94);
    esi = MEM32(edi + 0x98);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x94) = edx;
    edx = MEM32(edi + 0xA0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) ecx = edx; /* cmova */
    MEM32(edi + 0xA0) = ecx;
    ecx = MEM32(edi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) ecx = esi; /* cmovbe */
    MEM32(edi + 0x98) = esi;
    MEM32(edi + 0xA4) = ecx;

loc_00279638: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0027963C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279650
 * Original: 0x00279650 - 0x00279662 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279650(void)
{

loc_00279650: ;
    eax = esi;
    PUSH32(esp, 0x00279657u); RECOMP_ABI_CALL(0x002796B0u, sub_002796B0); /* call 0x002796B0 */

loc_00279657: ;
    eax = esi + 0x48;
    PUSH32(esp, 0x0027965Fu); RECOMP_ABI_CALL(0x002796B0u, sub_002796B0); /* call 0x002796B0 */

loc_0027965F: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00279670
 * Original: 0x00279670 - 0x002796A4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279670: ;
    eax = MEM32(ecx + 0x38);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027967C; /* je: equal / zero */

loc_00279679: ;
    edx = MEM32(eax + 0xC);

loc_0027967C: ;
    ecx = MEM32(ecx + 0x80);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027968B; /* je: equal / zero */

loc_00279688: ;
    eax = MEM32(ecx + 0xC);

loc_0027968B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002796A3; /* je: equal / zero */

loc_0027968F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002796A1; /* je: equal / zero */

loc_00279693: ;
    ecx = MEM32(edx + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x8C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002796A3; /* jae: above or equal (unsigned >=) */

loc_002796A1: ;
    eax = edx;

loc_002796A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002796B0
 * Original: 0x002796B0 - 0x002796E2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002796B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002796B0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0x10) = LO8(ecx);
    MEM8(eax + 0x11) = LO8(ecx);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM8(eax + 0x34) = LO8(ecx);
    MEM8(eax + 0x35) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002796F0
 * Original: 0x002796F0 - 0x002797C3 (211 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002796F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002796F0: ;
    edx = MEM32(esp + 4);
    MEM32(ebx) = eax;
    eax = MEM32(0x343DF4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = edx;
    MEM32(ebx + 0xC) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00279720; /* jne: not equal / not zero */

loc_0027970C: ;
    PUSH32(esp, 0x332AF0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00279718u); RECOMP_ABI_CALL(0x00272C60u, sub_00272C60); /* call 0x00272C60 */

loc_00279718: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x343DF4) = eax;

loc_00279720: ;
    PUSH32(esp, 0x00279725u); RECOMP_ABI_CALL(0x00273430u, sub_00273430); /* call 0x00273430 */

loc_00279725: ;
    _fa = (uint32_t)(MEM32(0x64CFA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64CFA0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279732; /* jne: not equal / not zero */

loc_0027972D: ;
    PUSH32(esp, 0x00279732u); RECOMP_ABI_CALL(0x0027CD80u, sub_0027CD80); /* call 0x0027CD80 */

loc_00279732: ;
    PUSH32(esp, esi);
    esi = ebx + 0x1C;
    PUSH32(esp, 0x0027973Bu); RECOMP_ABI_CALL(0x00279650u, sub_00279650); /* call 0x00279650 */

loc_0027973B: ;
    MEM32(ebx + 0xAC) = edi;
    MEM32(ebx + 0xB0) = edi;
    MEM32(ebx + 0xB4) = edi;
    MEM32(ebx + 0xB8) = edi;
    MEM32(ebx + 0xBC) = edi;
    MEM32(ebx + 0xC0) = edi;
    _fa = (uint32_t)(MEM32(0x64CFA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64CFA0), edi (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0027976D; /* jne: not equal / not zero */

loc_00279768: ;
    PUSH32(esp, 0x0027976Du); RECOMP_ABI_CALL(0x0027CD80u, sub_0027CD80); /* call 0x0027CD80 */

loc_0027976D: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x400000);
    PUSH32(esp, edi);
    MEM32(ebx + 0x14) = 0x10000;
    MEM32(ebx + 0x18) = 0x7FFF0000;
    PUSH32(esp, 0x0027978Du); RECOMP_ABI_CALL(0x00295EBFu, sub_00295EBF); /* call 0x00295EBF */

loc_0027978D: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x10) = edi;
    ecx = 0x100000;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebx + 0x10);
    eax = ecx;
    _fb = (uint32_t)(0x400FFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x400FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFF000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFF000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    PUSH32(esp, 0x002797BDu); RECOMP_ABI_CALL(0x002799D0u, sub_002799D0); /* call 0x002799D0 */

loc_002797BD: ;
    eax = ebx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002797D0
 * Original: 0x002797D0 - 0x002798D7 (263 bytes, 83 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002797D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002797D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0x002797E2u); RECOMP_ABI_CALL(0x0027D120u, sub_0027D120); /* call 0x0027D120 */

loc_002797E2: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279879; /* jne: not equal / not zero */

loc_002797EC: ;
    ebx = MEM32(esi + 0xC);
    eax = MEM32(esi + 8);
    ecx = ebp;
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002797FD; /* jne: not equal / not zero */

loc_002797FB: ;
    eax = MEM32(esi);

loc_002797FD: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) eax = edx; /* cmovb */
    ebx = eax + 0xFFFF;
    ebx = ebx & 0xFFFF0000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002798CF; /* jb: below (unsigned <) */

loc_00279820: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x00279828u); RECOMP_ABI_CALL(0x0027D070u, sub_0027D070); /* call 0x0027D070 */

loc_00279828: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002798CF; /* je: equal / zero */

loc_00279832: ;
    eax = MEM32(edi + 0x84);
    ecx = MEM32(esi + 0xAC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    MEM32(esi + 0xAC) = ecx;
    ecx = MEM32(esi + 0xB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    MEM32(esi + 0xB8) = eax;
    ecx = MEM32(edi + 0x84);
    eax = MEM32(edi + 0x2C);
    edx = esi;
    PUSH32(esp, 0x00279869u); RECOMP_ABI_CALL(0x00279A10u, sub_00279A10); /* call 0x00279A10 */

loc_00279869: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    MEM32(esi + 0xC) = ecx;
    PUSH32(esp, 0x00279877u); RECOMP_ABI_CALL(0x002795C0u, sub_002795C0); /* call 0x002795C0 */

loc_00279877: ;
    ebx = eax;

loc_00279879: ;
    edi = MEM32(esp + 0x10);
    edx = ebp;
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0x00279888u); RECOMP_ABI_CALL(0x00279990u, sub_00279990); /* call 0x00279990 */

loc_00279888: ;
    ecx = MEM32(esi + 0xB4);
    eax = MEM32(esi + 0xB0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    MEM32(esi + 0xB4) = ecx;
    ecx = MEM32(esi + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0xB0) = eax;
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    MEM32(esi + 0xBC) = eax;
    eax = MEM32(esi + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    POP32(esp, edi);
    if (CMP_BE(_fa, _fb)) eax = edx; /* cmovbe */
    MEM32(esi + 0xC0) = eax;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002798CF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002798E0
 * Original: 0x002798E0 - 0x0027998B (171 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002798E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002798E0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    ecx = edi;
    eax = esi;
    edx = ebx;
    PUSH32(esp, 0x002798F2u); RECOMP_ABI_CALL(0x00279A10u, sub_00279A10); /* call 0x00279A10 */

loc_002798F2: ;
    PUSH32(esp, edi);
    ebp = ebx + 0x1C;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x002798FEu); RECOMP_ABI_CALL(0x0027D230u, sub_0027D230); /* call 0x0027D230 */

loc_002798FE: ;
    edx = MEM32(ebx + 0xB4);
    ecx = MEM32(ebx + 0xB0);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    MEM32(ebx + 0xB4) = edx;
    MEM32(ebx + 0xB0) = ecx;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279985; /* jne: not equal / not zero */

loc_00279925: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279935; /* je: equal / zero */

loc_0027992A: ;
    ecx = ebp;
    PUSH32(esp, 0x00279931u); RECOMP_ABI_CALL(0x00279670u, sub_00279670); /* call 0x00279670 */

loc_00279931: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279985; /* je: equal / zero */

loc_00279935: ;
    eax = MEM32(esi + 0x84);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebx + 0xAC) = MEM32(ebx + 0xAC) - eax;
    _fa = (uint32_t)(MEM32(ebx + 0xAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x2C);
    edi = MEM32(ebx + 0x14);
    ecx = MEM32(esi + 0x84);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebx + 0x10);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi + edx * 8;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi + 0x84);
    ecx = MEM32(ebx + 0xC);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    MEM32(ebx + 0xC) = ecx;
    PUSH32(esp, 0x00279985u); RECOMP_ABI_CALL(0x0027D1E0u, sub_0027D1E0); /* call 0x0027D1E0 */

loc_00279985: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279990
 * Original: 0x00279990 - 0x002799CC (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279990: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = eax;
    eax = MEM32(esi + 0x10);
    eax = eax + ecx * 8;
    if (CMP_EQ(_fa, _fb)) goto loc_002799CA; /* je: equal / zero */

loc_002799A5: ;
    ecx = ecx & 0xFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_002799B0;

    /* nop */

loc_002799B0: ;
    esi = MEM32(eax + 4);
    esi = esi & 0xFF000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;
    MEM32(eax) = edi;
    MEM8(eax + 7) = 3;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002799B0; /* jne: not equal / not zero */

loc_002799CA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002799D0
 * Original: 0x002799D0 - 0x00279A07 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002799D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002799D0: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x14);
    edx = MEM32(edx + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edx + eax * 8;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00279A06; /* je: equal / zero */

loc_002799E4: ;
    SET_LO8(edx, 2);
    goto loc_002799F0;

    /* nop */
    /* nop */

loc_002799F0: ;
    MEM32(eax + 4) = MEM32(eax + 4) & 0xFF000000u;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0;
    MEM8(eax + 7) = LO8(edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002799F0; /* jne: not equal / not zero */

loc_00279A06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00279A10
 * Original: 0x00279A10 - 0x00279A47 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279A10: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x14);
    edx = MEM32(edx + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edx + eax * 8;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00279A46; /* je: equal / zero */

loc_00279A24: ;
    SET_LO8(edx, 1);
    goto loc_00279A30;

    /* nop */
    /* nop */

loc_00279A30: ;
    MEM32(eax + 4) = MEM32(eax + 4) & 0xFF000000u;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0;
    MEM8(eax + 7) = LO8(edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00279A30; /* jne: not equal / not zero */

loc_00279A46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00279A50
 * Original: 0x00279A50 - 0x00279CD0 (640 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279A50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2973DC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 4) = 0;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x333208);
    ecx = edi;
    MEM32(esp + 0x120) = 0;
    PUSH32(esp, 0x00279A90u); RECOMP_ABI_CALL(0x00273FD0u, sub_00273FD0); /* call 0x00273FD0 */

loc_00279A90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279AED; /* jne: not equal / not zero */

loc_00279A95: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279AA3; /* jne: not equal / not zero */

loc_00279A9E: ;
    PUSH32(esp, 0x00279AA3u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00279AA3: ;
    edx = 0x44;
    ecx = eax;
    PUSH32(esp, 0x00279AAFu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00279AAF: ;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x118) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00279AC7; /* je: equal / zero */

loc_00279ABF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00279AC5u); RECOMP_ABI_CALL(0x0027E170u, sub_0027E170); /* call 0x0027E170 */

loc_00279AC5: ;
    goto loc_00279AC9;

loc_00279AC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00279AC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ecx);
    MEM8(esp + 0x11C) = 0;
    ecx = esp;
    MEM32(esp + 0xC) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00279AE1; /* je: equal / zero */

loc_00279ADE: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00279AE1: ;
    PUSH32(esp, 0x333208);
    ebx = edi;
    PUSH32(esp, 0x00279AEDu); RECOMP_ABI_CALL(0x002741C0u, sub_002741C0); /* call 0x002741C0 */

loc_00279AED: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x333200);
    ecx = edi;
    PUSH32(esp, 0x00279AFEu); RECOMP_ABI_CALL(0x00273FD0u, sub_00273FD0); /* call 0x00273FD0 */

loc_00279AFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279B5B; /* jne: not equal / not zero */

loc_00279B03: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279B11; /* jne: not equal / not zero */

loc_00279B0C: ;
    PUSH32(esp, 0x00279B11u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00279B11: ;
    edx = 0x44;
    ecx = eax;
    PUSH32(esp, 0x00279B1Du); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_00279B1D: ;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x118) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00279B35; /* je: equal / zero */

loc_00279B2D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00279B33u); RECOMP_ABI_CALL(0x0027E170u, sub_0027E170); /* call 0x0027E170 */

loc_00279B33: ;
    goto loc_00279B37;

loc_00279B35: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00279B37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ecx);
    MEM8(esp + 0x11C) = 0;
    ecx = esp;
    MEM32(esp + 0xC) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00279B4F; /* je: equal / zero */

loc_00279B4C: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00279B4F: ;
    PUSH32(esp, 0x333200);
    ebx = edi;
    PUSH32(esp, 0x00279B5Bu); RECOMP_ABI_CALL(0x002741C0u, sub_002741C0); /* call 0x002741C0 */

loc_00279B5B: ;
    MEM32(esp + 0x118) = 0xFFFFFFFFu;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279B79; /* je: equal / zero */

loc_00279B6E: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00279B79; /* jne: not equal / not zero */

loc_00279B73: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00279B79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279B77u); } /* indirect call */
    }

loc_00279B79: ;
    MEM32(esp + 4) = 0x5C3A20;
    MEM32(esp + 0xC) = 0x2F202F;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00279B90;

    /* nop */

loc_00279B90: ;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ebx));
    _fb = (uint32_t)(0x61) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x61);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esp + 0xD) = LO8(ecx);
    edx = eax;
    edx = edx & 0x3BC0018;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279C5E; /* jne: not equal / not zero */

loc_00279BB2: ;
    eax = SX8(LO8(ecx));
    _fb = (uint32_t)(0xFFFFFF9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF9Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    MEM8(esp + 4) = LO8(ecx);
    if (CMP_A(_fa, _fb)) goto loc_00279CB0; /* ja: above (unsigned >) */

loc_00279BC5: ;
    eax = ZX8(MEM8(eax + 0x279CD8));
    { uint32_t _jt = MEM32(eax * 4 + 0x279CD0); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00279BD3u) goto loc_00279BD3;
    if (_jt == 0x00279CB0u) goto loc_00279CB0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00279BD3: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = 0x100;
    edx = 0xFF;
    ecx = 0x333200;
    PUSH32(esp, 0x00279BECu); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00279BEC: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_00279C08; /* je: equal / zero */

loc_00279BFB: ;
    goto loc_00279C00;

    /* nop */

loc_00279C00: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279C00; /* jne: not equal / not zero */

loc_00279C08: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0x100;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + ecx + 0x10;
    PUSH32(esp, ecx);
    edx = 0xFF;
    ecx = esp + 8;
    PUSH32(esp, 0x00279C2Au); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00279C2A: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_00279C48; /* je: equal / zero */

loc_00279C39: ;
    /* nop */

loc_00279C40: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279C40; /* jne: not equal / not zero */

loc_00279C48: ;
    edx = esp + 0x10;
    MEM8(eax + -1) = 0x2F;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00279C5Cu); RECOMP_ABI_CALL(0x002743C0u, sub_002743C0); /* call 0x002743C0 */

loc_00279C5C: ;
    goto loc_00279CB0;

loc_00279C5E: ;
    MEM32(esp + 8) = 0;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x120) = 3;
    PUSH32(esp, 0x00279C82u); RECOMP_ABI_CALL(0x00273FD0u, sub_00273FD0); /* call 0x00273FD0 */

loc_00279C82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279C92; /* jne: not equal / not zero */

loc_00279C86: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00279C92u); RECOMP_ABI_CALL(0x00274790u, sub_00274790); /* call 0x00274790 */

loc_00279C92: ;
    MEM32(esp + 0x118) = 0xFFFFFFFFu;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279CB0; /* je: equal / zero */

loc_00279CA5: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00279CB0; /* jne: not equal / not zero */

loc_00279CAA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00279CB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279CAEu); } /* indirect call */
    }

loc_00279CB0: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00279B90; /* jb: below (unsigned <) */

loc_00279CBA: ;
    ecx = MEM32(esp + 0x110);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00279CF0
 * Original: 0x00279CF0 - 0x00279D66 (118 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279CF0: ;
    PUSH32(esp, ecx);
    edx = esi + -1;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00279CFCu); RECOMP_ABI_CALL(0x00275150u, sub_00275150); /* call 0x00275150 */

loc_00279CFC: ;
    MEM8(esp + 4) = 0;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = esi;
    eax = edi;
    edx = edi;
    PUSH32(esp, 0x00279D11u); RECOMP_ABI_CALL(0x00279D70u, sub_00279D70); /* call 0x00279D70 */

loc_00279D11: ;
    SET_LO8(ecx, MEM8(edi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00279D2D; /* je: equal / zero */

loc_00279D1C: ;
    /* nop */

loc_00279D20: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279D2F; /* je: equal / zero */

loc_00279D25: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279D20; /* jne: not equal / not zero */

loc_00279D2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00279D2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279D52; /* je: equal / zero */

loc_00279D33: ;
    MEM8(eax) = 0x2F;
    ecx = eax;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279D4C; /* je: equal / zero */

loc_00279D3E: ;
    edi = edi;

loc_00279D40: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279D62; /* je: equal / zero */

loc_00279D44: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279D40; /* jne: not equal / not zero */

loc_00279D4C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00279D4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279D33; /* jne: not equal / not zero */

loc_00279D52: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279D60; /* jne: not equal / not zero */

loc_00279D58: ;
    SET_LO8(ecx, MEM8(edi));
    MEM8(edi + 1) = LO8(ecx);
    MEM8(edi) = 0x2F;

loc_00279D60: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00279D62: ;
    eax = ecx;
    goto loc_00279D4E;

}

/**
 * sub_00279D70
 * Original: 0x00279D70 - 0x00279DA5 (53 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00279D99; /* je: equal / zero */

loc_00279D7C: ;
    /* nop */

loc_00279D80: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279DA0; /* je: equal / zero */

loc_00279D84: ;
    ecx = ZX8(LO8(ecx));
    SET_LO8(ecx, MEM8(ecx + 0x343E00));
    MEM8(edx) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279D80; /* jne: not equal / not zero */

loc_00279D99: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279DA0; /* je: equal / zero */

loc_00279D9D: ;
    MEM8(edx) = 0;

loc_00279DA0: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00279DB0
 * Original: 0x00279DB0 - 0x00279E1B (107 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279DB0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2971AB);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x00279DD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279DCCu); } /* indirect call */
    }

loc_00279DD2: ;
    PUSH32(esp, 0x00279DD7u); RECOMP_ABI_CALL(0x00276330u, sub_00276330); /* call 0x00276330 */

loc_00279DD7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = edi;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x00279DE8u); RECOMP_ABI_CALL(0x000F9650u, sub_000F9650); /* call 0x000F9650 */

loc_00279DE8: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x2C) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 0x2C);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(eax) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(eax + 8) = eax;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279E20
 * Original: 0x00279E20 - 0x00279EC0 (160 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279E20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296FF6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00279E50u); RECOMP_ABI_CALL(0x0027A040u, sub_0027A040); /* call 0x0027A040 */

loc_00279E50: ;
    MEM8(esp + 0x1C) = LO8(ebx);
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(eax);
    esi = ebp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00279E68u); RECOMP_ABI_CALL(0x0027AFB0u, sub_0027AFB0); /* call 0x0027AFB0 */

loc_00279E68: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279E7C; /* je: equal / zero */

loc_00279E6F: ;
    PUSH32(esp, 0x00279E74u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00279E74: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00279E7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279E79u); } /* indirect call */
    }

loc_00279E7C: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    ebx = ebp + 0x1C;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00279E92u); RECOMP_ABI_CALL(0x000F94B0u, sub_000F94B0); /* call 0x000F94B0 */

loc_00279E92: ;
    edi = MEM32(ebx + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279EA8; /* je: equal / zero */

loc_00279E9B: ;
    PUSH32(esp, 0x00279EA0u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00279EA0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00279EA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279EA5u); } /* indirect call */
    }

loc_00279EA8: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(ebx + 4) = esi;
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
 * sub_00279F00
 * Original: 0x00279F00 - 0x00279F57 (87 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279F00: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297398);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(ebx) = 0x333218;
    MEM32(esp + 0x10) = 0;
    eax = MEM32(0x64CF9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279F37; /* jne: not equal / not zero */

loc_00279F32: ;
    PUSH32(esp, 0x00279F37u); RECOMP_ABI_CALL(0x00279F90u, sub_00279F90); /* call 0x00279F90 */

loc_00279F37: ;
    edi = eax;
    PUSH32(esp, 0x00279F3Eu); RECOMP_ABI_CALL(0x0027A520u, sub_0027A520); /* call 0x0027A520 */

loc_00279F3E: ;
    ecx = MEM32(esp + 8);
    MEM32(ebx) = 0x333214;
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279F60
 * Original: 0x00279F60 - 0x00279F87 (39 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279F60: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00279F69u); RECOMP_ABI_CALL(0x00279F00u, sub_00279F00); /* call 0x00279F00 */

loc_00279F69: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279F81; /* je: equal / zero */

loc_00279F70: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279F81; /* je: equal / zero */

loc_00279F74: ;
    PUSH32(esp, 0x00279F79u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00279F79: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00279F81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279F7Eu); } /* indirect call */
    }

loc_00279F81: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279F90
 * Original: 0x00279F90 - 0x0027A03D (173 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279F90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297276);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x34A64C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279FB9; /* jne: not equal / not zero */

loc_00279FB2: ;
    PUSH32(esp, 0x00279FB7u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_00279FB7: ;
    edi = eax;

loc_00279FB9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x00279FC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00279FBEu); } /* indirect call */
    }

loc_00279FC4: ;
    MEM32(esp + 0x14) = 0;
    SET_LO8(ecx, MEM8(0x65436C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027A001; /* jne: not equal / not zero */

loc_00279FDB: ;
    MEM32(0x65436C) = MEM32(0x65436C) | eax;
    _fa = (uint32_t)(MEM32(0x65436C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x64CF9C);
    esi = 0x654368;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x00279FF4u); RECOMP_ABI_CALL(0x0027ACD0u, sub_0027ACD0); /* call 0x0027ACD0 */

loc_00279FF4: ;
    PUSH32(esp, 0x297910);
    PUSH32(esp, 0x00279FFEu); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00279FFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027A001: ;
    eax = MEM32(0x64CF9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A01D; /* jne: not equal / not zero */

loc_0027A00A: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A01D; /* je: equal / zero */

loc_0027A013: ;
    ecx = 0x10;
    PUSH32(esp, 0x0027A01Du); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_0027A01D: ;
    esi = MEM32(0x64CF9C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027A02Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A024u); } /* indirect call */
    }

loc_0027A02A: ;
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
 * sub_0027A040
 * Original: 0x0027A040 - 0x0027A220 (480 bytes, 167 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027A040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027A040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x200C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A050u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_0027A050: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(0x64D944) = eax;
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x64D948) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A08B; /* je: equal / zero */

loc_0027A070: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A084; /* je: equal / zero */

loc_0027A077: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A07Cu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027A07C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027A084u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A081u); } /* indirect call */
    }

loc_0027A084: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A070; /* jne: not equal / not zero */

loc_0027A08B: ;
    eax = MEM32(ebx + 0x20);
    edi = MEM32(eax);
    MEM32(eax) = eax;
    eax = MEM32(ebx + 0x20);
    MEM32(eax + 4) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x20) (32-bit) */
    MEM32(ebx + 0x24) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A0BA; /* je: equal / zero */

loc_0027A0A4: ;
    esi = MEM32(edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A0ABu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027A0AB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027A0B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A0B0u); } /* indirect call */
    }

loc_0027A0B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x20) (32-bit) */
    edi = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0027A0A4; /* jne: not equal / not zero */

loc_0027A0BA: ;
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(eax + 4);
    esi = ebx + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A0CBu); RECOMP_ABI_CALL(0x0027B030u, sub_0027B030); /* call 0x0027B030 */

loc_0027A0CB: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    esi = MEM32(esi + 4);
    MEM32(esi + 8) = esi;
    edi = MEM32(ebx + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A0FA; /* je: equal / zero */

loc_0027A0EA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A0EFu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027A0EF: ;
    ecx = MEM32(ebx + 0x34);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027A0FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A0F7u); } /* indirect call */
    }

loc_0027A0FA: ;
    ecx = MEM32(0x64D944);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A14C; /* je: equal / zero */

loc_0027A104: ;
    eax = MEM32(0x64D948);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A14C; /* je: equal / zero */

loc_0027A10D: ;
    eax = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A14C; /* je: equal / zero */

loc_0027A11E: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A132; /* jne: not equal / not zero */

loc_0027A127: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A12Cu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0027A12C: ;
    ecx = MEM32(0x64D944);

loc_0027A132: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A141u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027A141: ;
    MEM32(ebx + 0x34) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027A160; /* ja: above (unsigned >) */

loc_0027A14C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0027A155: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0027A160;

    /* nop */

loc_0027A160: ;
    edx = MEM32(0x64D944);
    eax = MEM32(ebp + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(0x64CF80);
    esi = edx + ecx + 0x3F;
    esi = esi & 0xFFFFFFC0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A184; /* jne: not equal / not zero */

loc_0027A17F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A184u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0027A184: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0027A18Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A18Au); } /* indirect call */
    }

loc_0027A18D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A1EB; /* je: equal / zero */

loc_0027A191: ;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 0x20);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A1BBu); RECOMP_ABI_CALL(0x0027B300u, sub_0027B300); /* call 0x0027B300 */

loc_0027A1BB: ;
    edx = MEM32(ebp + 8);
    ecx = 1;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A1CDu); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_0027A1CD: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 4) = edi;
    edx = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(edx) = edi;
    if (CMP_B(_fa, _fb)) goto loc_0027A155; /* jb: below (unsigned <) */

loc_0027A1E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0027A1EB: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A1FAu); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0027A1FA: ;
    ecx = 0x400;
    esi = esp + 0x18;
    edi = esp + 0x1018;
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
    PUSH32(esp, 0x334D7C);
    ecx = esp + 0x101C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027A21Eu); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027A21E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0027A220
 * Original: 0x0027A220 - 0x0027A32B (267 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027A220: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296DF8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 8) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027A244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A23Eu); } /* indirect call */
    }

loc_0027A244: ;
    MEM32(esp + 0x18) = 0;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    edx = esp + 8;
    ecx = esi + 0x28;
    eax = esp + 0x20;
    ebx = esp + 0x24;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x0027A274u); RECOMP_ABI_CALL(0x0027AA00u, sub_0027AA00); /* call 0x0027AA00 */

loc_0027A274: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A310; /* je: equal / zero */

loc_0027A281: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    MEM32(esp + 0x28) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A2B1; /* je: equal / zero */

loc_0027A292: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    MEM32(edx + 4) = eax;
    PUSH32(esp, 0x0027A2A6u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027A2A6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027A2AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A2ABu); } /* indirect call */
    }

loc_0027A2AE: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0027A2B1: ;
    edi = MEM32(esi + 0x20);
    ecx = MEM32(edi + 4);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027A2C3u); RECOMP_ABI_CALL(0x0027B300u, sub_0027B300); /* call 0x0027B300 */

loc_0027A2C3: ;
    ecx = 1;
    edx = esi + 0x1C;
    ebx = eax;
    PUSH32(esp, 0x0027A2D2u); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_0027A2D2: ;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ebx + 4);
    MEM32(edx) = ebx;
    edi = MEM32(edi + 4);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ebx = esp + 0x2C;
    PUSH32(esp, 0x0027A2EAu); RECOMP_ABI_CALL(0x0027A670u, sub_0027A670); /* call 0x0027A670 */

loc_0027A2EA: ;
    MEM32(eax) = edi;
    eax = MEM32(ebp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(ebp + 0xC) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027A2FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A2F4u); } /* indirect call */
    }

loc_0027A2FA: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0027A310: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027A317u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A311u); } /* indirect call */
    }

loc_0027A317: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027A330
 * Original: 0x0027A330 - 0x0027A50E (478 bytes, 162 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027A330: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296DF8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027A356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A350u); } /* indirect call */
    }

loc_0027A356: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x30) = ebp;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    edx = esp + 0x20;
    ecx = esi + 0x28;
    eax = esp + 0x10;
    ebx = esp + 0x14;
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0027A388u); RECOMP_ABI_CALL(0x0027AA00u, sub_0027AA00); /* call 0x0027AA00 */

loc_0027A388: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A438; /* jne: not equal / not zero */

loc_0027A395: ;
    eax = MEM32(esi + 0x20);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A406; /* je: equal / zero */

loc_0027A39E: ;
    edi = edi;

loc_0027A3A0: ;
    ebp = MEM32(edi + 8);
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A3B6; /* je: equal / zero */

loc_0027A3AE: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A3A0; /* jne: not equal / not zero */

loc_0027A3B4: ;
    goto loc_0027A406;

loc_0027A3B6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A3DA; /* je: equal / zero */

loc_0027A3BB: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    MEM32(edx + 4) = eax;
    PUSH32(esp, 0x0027A3CFu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027A3CF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027A3D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A3D4u); } /* indirect call */
    }

loc_0027A3D7: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0027A3DA: ;
    eax = esp + 0x14;
    ebx = esp + 0x10;
    ecx = esi + 0x28;
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0x0027A3EEu); RECOMP_ABI_CALL(0x0027AA00u, sub_0027AA00); /* call 0x0027AA00 */

loc_0027A3EE: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A406; /* je: equal / zero */

loc_0027A3F7: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A406u); RECOMP_ABI_CALL(0x0027A6D0u, sub_0027A6D0); /* call 0x0027A6D0 */

loc_0027A406: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A428; /* jne: not equal / not zero */

loc_0027A40B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027A412u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A40Cu); } /* indirect call */
    }

loc_0027A412: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0027A428: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    MEM32(ebp) = ecx;
    MEM32(ebp + 4) = edx;
    goto loc_0027A466;

loc_0027A438: ;
    ebp = MEM32(eax + 0xC);
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    MEM32(esp + 0xC) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A466; /* je: equal / zero */

loc_0027A447: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    MEM32(edx + 4) = eax;
    PUSH32(esp, 0x0027A45Bu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027A45B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027A463u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A460u); } /* indirect call */
    }

loc_0027A463: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0027A466: ;
    edi = MEM32(esi + 0x20);
    ecx = MEM32(edi + 4);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027A478u); RECOMP_ABI_CALL(0x0027B300u, sub_0027B300); /* call 0x0027B300 */

loc_0027A478: ;
    ecx = 1;
    edx = esi + 0x1C;
    ebx = eax;
    PUSH32(esp, 0x0027A487u); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_0027A487: ;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ebx + 4);
    MEM32(edx) = ebx;
    eax = MEM32(edi + 4);
    ecx = esp + 0xC;
    MEM32(esp + 0x38) = eax;
    ebx = esi + 0x28;
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0x0027A4A5u); RECOMP_ABI_CALL(0x0027B260u, sub_0027B260); /* call 0x0027B260 */

loc_0027A4A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A4C5; /* je: equal / zero */

loc_0027A4AA: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ebp);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A4BE; /* jne: not equal / not zero */

loc_0027A4B6: ;
    edx = MEM32(ebp + 4);
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */

loc_0027A4BE: ;
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A4E3; /* je: equal / zero */

loc_0027A4C5: ;
    PUSH32(esp, eax);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0027A4E1u); RECOMP_ABI_CALL(0x0027ADD0u, sub_0027ADD0); /* call 0x0027ADD0 */

loc_0027A4E1: ;
    eax = MEM32(eax);

loc_0027A4E3: ;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(ebp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(ebp + 0xC) = edx;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027A4F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A4F2u); } /* indirect call */
    }

loc_0027A4F8: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027A510
 * Original: 0x0027A510 - 0x0027A51F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A510(void)
{

loc_0027A510: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027A517u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A511u); } /* indirect call */
    }

loc_0027A517: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027A51Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A518u); } /* indirect call */
    }

loc_0027A51E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027A520
 * Original: 0x0027A520 - 0x0027A560 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027A520: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A55C; /* je: equal / zero */

loc_0027A52F: ;
    PUSH32(esp, esi);

loc_0027A530: ;
    edx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x0027A53Bu); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0027A53B: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0027A552; /* jne: not equal / not zero */

loc_0027A546: ;
    ecx = edi + 0x28;
    eax = esp + 8;
    PUSH32(esp, 0x0027A552u); RECOMP_ABI_CALL(0x0027A9A0u, sub_0027A9A0); /* call 0x0027A9A0 */

loc_0027A552: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A530; /* jne: not equal / not zero */

loc_0027A55B: ;
    POP32(esp, esi);

loc_0027A55C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027A560
 * Original: 0x0027A560 - 0x0027A5F1 (145 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027A560: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x10;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM8(esp + 0x20) = 0;
    PUSH32(esp, 0x0027A588u); RECOMP_ABI_CALL(0x0005FE30u, sub_0005FE30); /* call 0x0005FE30 */

loc_0027A588: ;
    ebp = MEM32(esp + 0x2C);
    /* nop */

loc_0027A590: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A5E6; /* je: equal / zero */

loc_0027A59B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A5E6; /* je: equal / zero */

loc_0027A5A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A5E6; /* je: equal / zero */

loc_0027A5A5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A590; /* je: equal / zero */

loc_0027A5A9: ;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A5B7; /* jne: not equal / not zero */

loc_0027A5B2: ;
    PUSH32(esp, 0x0027A5B7u); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0027A5B7: ;
    esi = MEM32(eax + 8);
    edi = MEM32(eax + 0xC);
    eax = esp + 0x10;
    PUSH32(esp, 0x0027A5C6u); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_0027A5C6: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A5CFu); RECOMP_ABI_CALL(0x0028A900u, sub_0028A900); /* call 0x0028A900 */

loc_0027A5CF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027A590; /* jb: below (unsigned <) */

loc_0027A5D5: ;
    if (CMP_A(_fa, _fb)) goto loc_0027A5DB; /* ja: above (unsigned >) */

loc_0027A5D7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027A590; /* jb: below (unsigned <) */

loc_0027A5DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0027A5E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027A600
 * Original: 0x0027A600 - 0x0027A66F (111 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027A600: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = esi + 0xC;
    PUSH32(esp, edi);
    MEM32(esp + 8) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027A625u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A61Fu); } /* indirect call */
    }

loc_0027A625: ;
    MEM32(esp + 0x10) = 0;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A641; /* jne: not equal / not zero */

loc_0027A634: ;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A63Du); RECOMP_ABI_CALL(0x0027AA90u, sub_0027AA90); /* call 0x0027AA90 */

loc_0027A63D: ;
    MEM8(esi + 0x34) = 1;

loc_0027A641: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A651; /* je: equal / zero */

loc_0027A648: ;
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0027A64Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0027A64Cu); } /* indirect call */
    }

loc_0027A64E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027A651: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esi + 0x38) = 0;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027A65Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A659u); } /* indirect call */
    }

loc_0027A65F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027A670
 * Original: 0x0027A670 - 0x0027A6CD (93 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027A670: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0x0027A680u); RECOMP_ABI_CALL(0x0027B260u, sub_0027B260); /* call 0x0027B260 */

loc_0027A680: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A6A3; /* je: equal / zero */

loc_0027A685: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A69A; /* jne: not equal / not zero */

loc_0027A694: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */

loc_0027A69A: ;
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0027A6C3; /* je: equal / zero */

loc_0027A6A3: ;
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0027A6C1u); RECOMP_ABI_CALL(0x0027ADD0u, sub_0027ADD0); /* call 0x0027ADD0 */

loc_0027A6C1: ;
    eax = MEM32(eax);

loc_0027A6C3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027A6D0
 * Original: 0x0027A6D0 - 0x0027A99E (718 bytes, 250 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027A6D0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297148);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = esp;
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0027A740; /* je: equal / zero */

loc_0027A6F4: ;
    PUSH32(esp, 0x1B);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x323150);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x0027A717u); RECOMP_ABI_CALL(0x00017340u, sub_00017340); /* call 0x00017340 */

loc_0027A717: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM32(esp + 0x58) = esi;
    PUSH32(esp, 0x0027A729u); RECOMP_ABI_CALL(0x00017430u, sub_00017430); /* call 0x00017430 */

loc_0027A729: ;
    PUSH32(esp, 0x334E44);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x323120;
    PUSH32(esp, 0x0027A740u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0027A740: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    PUSH32(esp, edi);
    edx = esp + 0x70;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x0027A752u); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0027A752: ;
    eax = MEM32(ebx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A760; /* je: equal / zero */

loc_0027A75B: ;
    ebp = MEM32(ebx + 8);
    goto loc_0027A779;

loc_0027A760: ;
    edx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A76E; /* je: equal / zero */

loc_0027A76A: ;
    ebp = eax;
    goto loc_0027A779;

loc_0027A76E: ;
    ecx = MEM32(esp + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    ebp = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0027A7EC; /* jne: not equal / not zero */

loc_0027A779: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0027A786; /* jne: not equal / not zero */

loc_0027A783: ;
    MEM32(ebp + 4) = esi;

loc_0027A786: ;
    edi = MEM32(esp + 0x68);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A797; /* jne: not equal / not zero */

loc_0027A792: ;
    MEM32(eax + 4) = ebp;
    goto loc_0027A7A2;

loc_0027A797: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A79F; /* jne: not equal / not zero */

loc_0027A79B: ;
    MEM32(esi) = ebp;
    goto loc_0027A7A2;

loc_0027A79F: ;
    MEM32(esi + 8) = ebp;

loc_0027A7A2: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A7C0; /* jne: not equal / not zero */

loc_0027A7A9: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A7B4; /* je: equal / zero */

loc_0027A7B0: ;
    eax = esi;
    goto loc_0027A7BB;

loc_0027A7B4: ;
    eax = ebp;
    PUSH32(esp, 0x0027A7BBu); RECOMP_ABI_CALL(0x000F3EC0u, sub_000F3EC0); /* call 0x000F3EC0 */

loc_0027A7BB: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = eax;

loc_0027A7C0: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A84C; /* jne: not equal / not zero */

loc_0027A7CC: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A7DD; /* je: equal / zero */

loc_0027A7D3: ;
    ecx = MEM32(edi + 4);
    eax = esi;
    MEM32(ecx + 8) = eax;
    goto loc_0027A84C;

loc_0027A7DD: ;
    eax = ebp;
    PUSH32(esp, 0x0027A7E4u); RECOMP_ABI_CALL(0x0027B070u, sub_0027B070); /* call 0x0027B070 */

loc_0027A7E4: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + 8) = eax;
    goto loc_0027A84C;

loc_0027A7EC: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebx);
    MEM32(ecx) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A7FC; /* jne: not equal / not zero */

loc_0027A7F8: ;
    esi = ecx;
    goto loc_0027A817;

loc_0027A7FC: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0027A809; /* jne: not equal / not zero */

loc_0027A806: ;
    MEM32(ebp + 4) = esi;

loc_0027A809: ;
    MEM32(esi) = ebp;
    edx = MEM32(ebx + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(ebx + 8);
    MEM32(eax + 4) = ecx;

loc_0027A817: ;
    edx = MEM32(esp + 0x68);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A828; /* jne: not equal / not zero */

loc_0027A823: ;
    MEM32(eax + 4) = ecx;
    goto loc_0027A836;

loc_0027A828: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A833; /* jne: not equal / not zero */

loc_0027A82F: ;
    MEM32(eax) = ecx;
    goto loc_0027A836;

loc_0027A833: ;
    MEM32(eax + 8) = ecx;

loc_0027A836: ;
    eax = MEM32(ebx + 4);
    edi = MEM32(esp + 0x68);
    MEM32(ecx + 4) = eax;
    SET_LO8(edx, MEM8(ebx + 0x14));
    SET_LO8(eax, MEM8(ecx + 0x14));
    MEM8(ecx + 0x14) = LO8(edx);
    MEM8(ebx + 0x14) = LO8(eax);

loc_0027A84C: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x14));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A95D; /* jne: not equal / not zero */

loc_0027A85D: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A95A; /* je: equal / zero */

loc_0027A869: ;
    /* nop */

loc_0027A870: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A95A; /* jne: not equal / not zero */

loc_0027A879: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A8E4; /* jne: not equal / not zero */

loc_0027A87F: ;
    ecx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A89B; /* jne: not equal / not zero */

loc_0027A889: ;
    MEM8(ecx + 0x14) = LO8(ebx);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esi + 0x14) = 0;
    PUSH32(esp, 0x0027A898u); RECOMP_ABI_CALL(0x000F3E60u, sub_000F3E60); /* call 0x000F3E60 */

loc_0027A898: ;
    ecx = MEM32(esi + 8);

loc_0027A89B: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A916; /* jne: not equal / not zero */

loc_0027A8A2: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A8B1; /* jne: not equal / not zero */

loc_0027A8A9: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A912; /* je: equal / zero */

loc_0027A8B1: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A8CB; /* jne: not equal / not zero */

loc_0027A8B9: ;
    eax = MEM32(ecx);
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, edi);
    MEM8(ecx + 0x14) = 0;
    PUSH32(esp, 0x0027A8C8u); RECOMP_ABI_CALL(0x000F95F0u, sub_000F95F0); /* call 0x000F95F0 */

loc_0027A8C8: ;
    ecx = MEM32(esi + 8);

loc_0027A8CB: ;
    SET_LO8(edx, MEM8(esi + 0x14));
    MEM8(ecx + 0x14) = LO8(edx);
    MEM8(esi + 0x14) = LO8(ebx);
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, 0x0027A8E2u); RECOMP_ABI_CALL(0x000F3E60u, sub_000F3E60); /* call 0x000F3E60 */

loc_0027A8E2: ;
    goto loc_0027A95A;

loc_0027A8E4: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A8FC; /* jne: not equal / not zero */

loc_0027A8EB: ;
    MEM8(ecx + 0x14) = LO8(ebx);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esi + 0x14) = 0;
    PUSH32(esp, 0x0027A8FAu); RECOMP_ABI_CALL(0x000F95F0u, sub_000F95F0); /* call 0x000F95F0 */

loc_0027A8FA: ;
    ecx = MEM32(esi);

loc_0027A8FC: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A916; /* jne: not equal / not zero */

loc_0027A903: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A92B; /* jne: not equal / not zero */

loc_0027A90B: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A92B; /* jne: not equal / not zero */

loc_0027A912: ;
    MEM8(ecx + 0x14) = 0;

loc_0027A916: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    ebp = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0027A870; /* jne: not equal / not zero */

loc_0027A929: ;
    goto loc_0027A95A;

loc_0027A92B: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A944; /* jne: not equal / not zero */

loc_0027A932: ;
    eax = MEM32(ecx + 8);
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, edi);
    MEM8(ecx + 0x14) = 0;
    PUSH32(esp, 0x0027A942u); RECOMP_ABI_CALL(0x000F3E60u, sub_000F3E60); /* call 0x000F3E60 */

loc_0027A942: ;
    ecx = MEM32(esi);

loc_0027A944: ;
    SET_LO8(edx, MEM8(esi + 0x14));
    MEM8(ecx + 0x14) = LO8(edx);
    MEM8(esi + 0x14) = LO8(ebx);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, 0x0027A95Au); RECOMP_ABI_CALL(0x000F95F0u, sub_000F95F0); /* call 0x000F95F0 */

loc_0027A95A: ;
    MEM8(ebp + 0x14) = LO8(ebx);

loc_0027A95D: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x0027A966u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027A966: ;
    edx = MEM32(eax);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027A970u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027A96Du); } /* indirect call */
    }

loc_0027A970: ;
    ecx = MEM32(esp + 0x68);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0027A982; /* jbe: below or equal (unsigned <=) */

loc_0027A97E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;

loc_0027A982: ;
    edx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x4C);
    MEM32(eax) = edx;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027A9A0
 * Original: 0x0027A9A0 - 0x0027A9F4 (84 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027A9A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0027A9B1u); RECOMP_ABI_CALL(0x0027B260u, sub_0027B260); /* call 0x0027B260 */

loc_0027A9B1: ;
    ebx = eax;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0027A9BBu); RECOMP_ABI_CALL(0x0027B340u, sub_0027B340); /* call 0x0027B340 */

loc_0027A9BB: ;
    edi = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A9E0; /* je: equal / zero */

loc_0027A9C7: ;
    goto loc_0027A9D0;

    /* nop */

loc_0027A9D0: ;
    edx = esp + 0x10;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0027A9DAu); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0027A9DA: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A9D0; /* jne: not equal / not zero */

loc_0027A9E0: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A9ECu); RECOMP_ABI_CALL(0x0027AFB0u, sub_0027AFB0); /* call 0x0027AFB0 */

loc_0027A9EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027AA00
 * Original: 0x0027AA00 - 0x0027AA5A (90 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027AA00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0027AA11u); RECOMP_ABI_CALL(0x0027B260u, sub_0027B260); /* call 0x0027B260 */

loc_0027AA11: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027AA46; /* je: equal / zero */

loc_0027AA1C: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esi);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027AA2F; /* jne: not equal / not zero */

loc_0027AA29: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */

loc_0027AA2F: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027AA46; /* jne: not equal / not zero */

loc_0027AA36: ;
    eax = esp + 8;
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(ebx) = edx;
    eax = ebx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027AA46: ;
    eax = esp + 0xC;
    MEM32(esp + 0xC) = edi;
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(ebx) = edx;
    eax = ebx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027AA60
 * Original: 0x0027AA60 - 0x0027AA87 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027AA60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0027AA69u); RECOMP_ABI_CALL(0x000F94B0u, sub_000F94B0); /* call 0x000F94B0 */

loc_0027AA69: ;
    edi = MEM32(ebx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027AA7D; /* je: equal / zero */

loc_0027AA70: ;
    PUSH32(esp, 0x0027AA75u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027AA75: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027AA7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027AA7Au); } /* indirect call */
    }

loc_0027AA7D: ;
    POP32(esp, edi);
    MEM32(ebx + 4) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027AA90
 * Original: 0x0027AA90 - 0x0027ACCF (575 bytes, 180 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027AA90: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296FD1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x15C);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027ACB7; /* jb: below (unsigned <) */

loc_0027AABD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027AAC5u); RECOMP_ABI_CALL(0x00276330u, sub_00276330); /* call 0x00276330 */

loc_0027AAC5: ;
    ebp = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x27AA60);
    PUSH32(esp, 0x27B090);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0xC);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEM32(esp + 0x174) = ebx;
    PUSH32(esp, 0x0027AAF0u); RECOMP_ABI_CALL(0x0028B546u, sub_0028B546); /* call 0x0028B546 */

loc_0027AAF0: ;
    MEM8(esp + 0x160) = 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027AC11; /* je: equal / zero */

loc_0027AB05: ;
    eax = MEM32(esi + 4);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    edi = MEM32(ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0027AB71; /* je: equal / zero */

loc_0027AB11: ;
    eax = MEM32(esp + 0x168);
    ebx = MEM32(esi);
    ecx = esp + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027AB2C; /* jne: not equal / not zero */

loc_0027AB22: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027AB6D; /* je: equal / zero */

loc_0027AB26: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027AB6D; /* je: equal / zero */

loc_0027AB2A: ;
    goto loc_0027AB4C;

loc_0027AB2C: ;
    ecx = 1;
    edx = esp + 0x14;
    PUSH32(esp, 0x0027AB3Au); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_0027AB3A: ;
    eax = MEM32(esp + 0x168);
    ecx = MEM32(eax + 8);
    ebp = MEM32(esp + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 8) = ecx;

loc_0027AB4C: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = ebx;
    eax = MEM32(ebx + 4);
    MEM32(eax) = edi;
    eax = MEM32(edi + 4);
    MEM32(eax) = esi;
    edx = MEM32(ebx + 4);
    eax = MEM32(edi + 4);
    MEM32(edi + 4) = edx;
    ecx = MEM32(esi + 4);
    MEM32(ebx + 4) = ecx;
    MEM32(esi + 4) = eax;

loc_0027AB6D: ;
    ebx = MEM32(esp + 0x10);

loc_0027AB71: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027ABD2; /* jbe: below or equal (unsigned <=) */

loc_0027AB77: ;
    esi = esp + 0x28;
    goto loc_0027AB80;

    /* nop */

loc_0027AB80: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027ABB5; /* je: equal / zero */

loc_0027AB85: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esi + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027AB93u); RECOMP_ABI_CALL(0x0027B0B0u, sub_0027B0B0); /* call 0x0027B0B0 */

loc_0027AB93: ;
    ebp = MEM32(esi + -4);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(esi + -4) = ecx;
    eax = MEM32(esi);
    MEM32(esi) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0027AB80; /* jb: below (unsigned <) */

loc_0027ABB5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x19 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027ABD2; /* jne: not equal / not zero */

loc_0027ABBA: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x144;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027ABCCu); RECOMP_ABI_CALL(0x0027B0B0u, sub_0027B0B0); /* call 0x0027B0B0 */

loc_0027ABCC: ;
    ebp = MEM32(esp + 0x18);
    goto loc_0027ABFD;

loc_0027ABD2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    edx = MEM32(esp + 0x1C);
    eax = edi + edi * 2;
    ecx = MEM32(esp + eax * 4 + 0x24);
    eax = esp + eax * 4 + 0x20;
    MEM32(eax + 4) = ebp;
    ebp = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x18) = ebp;
    MEM32(eax + 8) = edx;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0027ABFD; /* jne: not equal / not zero */

loc_0027ABF8: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebx;

loc_0027ABFD: ;
    eax = MEM32(esp + 0x168);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0027AB05; /* jne: not equal / not zero */

loc_0027AC11: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027AC39; /* jbe: below or equal (unsigned <=) */

loc_0027AC16: ;
    ecx = ebx + -1;
    edi = esp + 0x2C;
    MEM32(esp + 0x10) = ecx;

loc_0027AC21: ;
    edx = edi + -12;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027AC2Bu); RECOMP_ABI_CALL(0x0027B0B0u, sub_0027B0B0); /* call 0x0027B0B0 */

loc_0027AC2B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0027AC21; /* jne: not equal / not zero */

loc_0027AC39: ;
    ecx = MEM32(esi + 4);
    eax = ebx + ebx * 2;
    edx = MEM32(esp + eax * 4 + 0x18);
    eax = esp + eax * 4 + 0x14;
    MEM32(eax + 4) = ecx;
    MEM32(esi + 4) = edx;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax + 8);
    PUSH32(esp, 0x27AA60);
    PUSH32(esp, 0x1A);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0xC);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEM32(esi + 8) = edx;
    MEM8(esp + 0x170) = 0;
    PUSH32(esp, 0x0027AC74u); RECOMP_ABI_CALL(0x0028B4E6u, sub_0028B4E6); /* call 0x0028B4E6 */

loc_0027AC74: ;
    MEM32(esp + 0x160) = 0xFFFFFFFFu;
    edi = MEM32(ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(ebp) = ebp;
    MEM32(ebp + 4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0027ACA5; /* je: equal / zero */

loc_0027AC8C: ;
    /* nop */

loc_0027AC90: ;
    esi = MEM32(edi);
    PUSH32(esp, 0x0027AC97u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027AC97: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027AC9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027AC9Cu); } /* indirect call */
    }

loc_0027AC9F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    edi = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0027AC90; /* jne: not equal / not zero */

loc_0027ACA5: ;
    edi = ebp;
    PUSH32(esp, 0x0027ACACu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027ACAC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027ACB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027ACB1u); } /* indirect call */
    }

loc_0027ACB4: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0027ACB7: ;
    ecx = MEM32(esp + 0x14C);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x154) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x154;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027ACD0
 * Original: 0x0027ACD0 - 0x0027AD35 (101 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027ACD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027ACD0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0027ACF9; /* jne: not equal / not zero */

loc_0027ACF4: ;
    PUSH32(esp, 0x0027ACF9u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0027ACF9: ;
    edx = 0x38;
    ecx = eax;
    PUSH32(esp, 0x0027AD05u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027AD05: ;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0027AD1D; /* je: equal / zero */

loc_0027AD15: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027AD1Bu); RECOMP_ABI_CALL(0x00279DB0u, sub_00279DB0); /* call 0x00279DB0 */

loc_0027AD1B: ;
    goto loc_0027AD1F;

loc_0027AD1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027AD1F: ;
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
 * sub_0027AD40
 * Original: 0x0027AD40 - 0x0027ADC1 (129 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027AD40: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0027AD68; /* jne: not equal / not zero */

loc_0027AD61: ;
    PUSH32(esp, 0x0027AD66u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_0027AD66: ;
    esi = eax;

loc_0027AD68: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 8) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027AD73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027AD6Du); } /* indirect call */
    }

loc_0027AD73: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027ADA8; /* je: equal / zero */

loc_0027AD87: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0027ADA7; /* je: equal / zero */

loc_0027AD94: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027AD9Au); RECOMP_ABI_CALL(0x00279E20u, sub_00279E20); /* call 0x00279E20 */

loc_0027AD9A: ;
    PUSH32(esp, 0x0027AD9Fu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027AD9F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027ADA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027ADA4u); } /* indirect call */
    }

loc_0027ADA7: ;
    POP32(esp, edi);

loc_0027ADA8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027ADAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027ADA9u); } /* indirect call */
    }

loc_0027ADAF: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027ADD0
 * Original: 0x0027ADD0 - 0x0027AFAB (475 bytes, 203 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027ADD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027ADD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0027ADFF; /* jne: not equal / not zero */

loc_0027ADE9: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x0027ADF5u); RECOMP_ABI_CALL(0x0002E1A0u, sub_0002E1A0); /* call 0x0002E1A0 */

loc_0027ADF5: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027ADFF: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0027AE43; /* jne: not equal / not zero */

loc_0027AE0B: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(edi);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027AE1E; /* jne: not equal / not zero */

loc_0027AE18: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */

loc_0027AE1E: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027AF8B; /* je: equal / zero */

loc_0027AE29: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027AE37u); RECOMP_ABI_CALL(0x0002E1A0u, sub_0002E1A0); /* call 0x0002E1A0 */

loc_0027AE37: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027AE43: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027AE82; /* jne: not equal / not zero */

loc_0027AE47: ;
    ebx = MEM32(ecx + 8);
    eax = MEM32(edi);
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027AE5D; /* jne: not equal / not zero */

loc_0027AE57: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */

loc_0027AE5D: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027AF8B; /* je: equal / zero */

loc_0027AE68: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027AE76u); RECOMP_ABI_CALL(0x0002E1A0u, sub_0002E1A0); /* call 0x0002E1A0 */

loc_0027AE76: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027AE82: ;
    eax = MEM32(ebx + 0xC);
    esi = MEM32(edi);
    ecx = MEM32(esi);
    edx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027AE95; /* jne: not equal / not zero */

loc_0027AE8F: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */

loc_0027AE95: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027AF02; /* je: equal / zero */

loc_0027AE9C: ;
    edx = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0027AEA9u); RECOMP_ABI_CALL(0x0027B390u, sub_0027B390); /* call 0x0027B390 */

loc_0027AEA9: ;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esi);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027AEBE; /* jne: not equal / not zero */

loc_0027AEB8: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */

loc_0027AEBE: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027AF02; /* je: equal / zero */

loc_0027AEC5: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax + 8);
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_0027AEED; /* je: equal / zero */

loc_0027AED8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027AEE1u); RECOMP_ABI_CALL(0x0002E1A0u, sub_0002E1A0); /* call 0x0002E1A0 */

loc_0027AEE1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027AEED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027AEF6u); RECOMP_ABI_CALL(0x0002E1A0u, sub_0002E1A0); /* call 0x0002E1A0 */

loc_0027AEF6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027AF02: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(esi);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027AF13; /* jne: not equal / not zero */

loc_0027AF0D: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */

loc_0027AF13: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027AF8B; /* je: equal / zero */

loc_0027AF1A: ;
    edx = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0027AF27u); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0027AF27: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027AF52; /* je: equal / zero */

loc_0027AF34: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027AF47; /* jne: not equal / not zero */

loc_0027AF3F: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */

loc_0027AF47: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027AF8B; /* je: equal / zero */

loc_0027AF4E: ;
    eax = MEM32(esp + 0x20);

loc_0027AF52: ;
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_0027AF76; /* je: equal / zero */

loc_0027AF61: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027AF6Au); RECOMP_ABI_CALL(0x0002E1A0u, sub_0002E1A0); /* call 0x0002E1A0 */

loc_0027AF6A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027AF76: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027AF7Fu); RECOMP_ABI_CALL(0x0002E1A0u, sub_0002E1A0); /* call 0x0002E1A0 */

loc_0027AF7F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027AF8B: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ebx = esp + 0x18;
    PUSH32(esp, 0x0027AF9Au); RECOMP_ABI_CALL(0x0027B160u, sub_0027B160); /* call 0x0027B160 */

loc_0027AF9A: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ebp) = eax;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027AFB0
 * Original: 0x0027AFB0 - 0x0027B02A (122 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027AFB0: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0027AFFB; /* jne: not equal / not zero */

loc_0027AFC5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027AFFB; /* jne: not equal / not zero */

loc_0027AFC9: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0027AFD4u); RECOMP_ABI_CALL(0x0027B030u, sub_0027B030); /* call 0x0027B030 */

loc_0027AFD4: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    MEM32(ebp) = edx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0027AFFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B020; /* je: equal / zero */

loc_0027AFFF: ;
    PUSH32(esp, edi);

loc_0027B000: ;
    edx = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x0027B00Bu); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0027B00B: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027B017u); RECOMP_ABI_CALL(0x0027A6D0u, sub_0027A6D0); /* call 0x0027A6D0 */

loc_0027B017: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B000; /* jne: not equal / not zero */

loc_0027B01F: ;
    POP32(esp, edi);

loc_0027B020: ;
    MEM32(ebp) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027B030
 * Original: 0x0027B030 - 0x0027B06F (63 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0027B069; /* jne: not equal / not zero */

loc_0027B042: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0027B04Du); RECOMP_ABI_CALL(0x0027B030u, sub_0027B030); /* call 0x0027B030 */

loc_0027B04D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0027B060; /* je: equal / zero */

loc_0027B053: ;
    PUSH32(esp, 0x0027B058u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0027B058: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027B060u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027B05Du); } /* indirect call */
    }

loc_0027B060: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027B042; /* je: equal / zero */

loc_0027B069: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027B070
 * Original: 0x0027B070 - 0x0027B08D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B070: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B08C; /* jne: not equal / not zero */

loc_0027B07A: ;
    /* nop */

loc_0027B080: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B080; /* je: equal / zero */

loc_0027B08C: ;
    esp += 4; return; /* ret */

}
