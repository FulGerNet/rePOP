/**
 * PoP SoT xbox-demo - xdk/xapi, chunk 0
 * Xbox API (XAPILIB): start-up, disc and save storage
 * Functions: 91 (0x0027F5F9 - 0x00282164)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_0027F5F9
 * Original: 0x0027F5F9 - 0x0027F6DA (225 bytes, 83 insns)
 * Folder: xdk/xapi (string: \Device\Cdrom0)
 * Category: game_io
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027F5F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F5F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x31C768);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x1000;
    if (CMP_NE(_fa, _fb)) goto loc_0027F61B; /* jne: not equal / not zero */

loc_0027F60C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C764); PUSH32(esp, 0x0027F613u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F60Du); } /* indirect call */
    }

loc_0027F613: ;
    ecx = MEM32(0x31C768);
    MEM32(ecx) = eax;

loc_0027F61B: ;
    eax = MEM32(0x31C768);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F630; /* jne: not equal / not zero */

loc_0027F626: ;
    eax = 0xC0000017u;
    goto loc_0027F6D5;

loc_0027F630: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C760); PUSH32(esp, 0x0027F63Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F634u); } /* indirect call */
    }

loc_0027F63A: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F646; /* jne: not equal / not zero */

loc_0027F641: ;
    edx = 0x31C964;

loc_0027F646: ;
    eax = MEM32(0x31C768);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x400;
    ebx = edi + 8;
    ecx = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x31C768);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edi = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    ecx = MEM32(0x31C768);
    ecx = MEM32(ecx);
    MEM32(ecx + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027F68F; /* je: equal / zero */

loc_0027F67C: ;
    eax = MEM32(0x31C768);
    edi = MEM32(eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 0x1C);
    ecx = 0x300;
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

loc_0027F68F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F6D1; /* je: equal / zero */

loc_0027F696: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F6BE; /* je: equal / zero */

loc_0027F69A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F6BE; /* je: equal / zero */

loc_0027F69F: ;
    PUSH32(esp, 0x207);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027F6ABu); RECOMP_ABI_CALL(0x00280418u, sub_00280418); /* call 0x00280418 */

loc_0027F6AB: ;
    eax = ebx;
    esi = eax + 1;

loc_0027F6B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F6B0; /* jne: not equal / not zero */

loc_0027F6B7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(eax + ebx) = 0x3B;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027F6BE: ;
    ecx = 0x208;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027F6D1u); RECOMP_ABI_CALL(0x00280418u, sub_00280418); /* call 0x00280418 */

loc_0027F6D1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_0027F6D5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0027F6DA
 * Original: 0x0027F6DA - 0x0027F73E (100 bytes, 34 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F6DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F6DA: ;
    eax = MEM32(0x31C768);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F736; /* je: equal / zero */

loc_0027F6E5: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F6FF; /* je: equal / zero */

loc_0027F6EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F6FF; /* je: equal / zero */

loc_0027F6F1: ;
    edx = MEM32(0x10118);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F736; /* jne: not equal / not zero */

loc_0027F6FF: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = MEM32(0x31C768);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x400;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x300;
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
    eax = MEM32(0x31C768);
    ecx = MEM32(eax);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x31C76C); PUSH32(esp, 0x0027F730u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F72Au); } /* indirect call */
    }

loc_0027F730: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    goto loc_0027F73B;

loc_0027F736: ;
    eax = 0x490;

loc_0027F73B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027F73E
 * Original: 0x0027F73E - 0x0027F785 (71 bytes, 24 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027F73E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F73E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027F757u); RECOMP_ABI_CALL(0x0027F5F9u, sub_0027F5F9); /* call 0x0027F5F9 */

loc_0027F757: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027F77A; /* jl: less (signed <) */

loc_0027F75B: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F772; /* je: equal / zero */

loc_0027F76B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0027F772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F76Fu); } /* indirect call */
    }

loc_0027F772: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(0x31C774); PUSH32(esp, 0x0027F77Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F774u); } /* indirect call */
    }

loc_0027F77A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C770); PUSH32(esp, 0x0027F781u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F77Bu); } /* indirect call */
    }

loc_0027F781: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0027F785
 * Original: 0x0027F785 - 0x0027F7B7 (50 bytes, 22 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027F785(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F785: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    ecx = eax + 1;

loc_0027F793: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F793; /* jne: not equal / not zero */

loc_0027F79A: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ebp + -8) = LO16(eax);
    eax = MEM32(ebp + -8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebp + -6) = LO16(eax);
    ecx = ebp + -8;
    eax = 1;
    recomp_debug_service(eax, ecx); /* int 0x2d */
    /* int3: debug-trap slide byte, stepped over */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027F7B7
 * Original: 0x0027F7B7 - 0x0027F85D (166 bytes, 61 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027F7B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F7B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C784); PUSH32(esp, 0x0027F7CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F7C4u); } /* indirect call */
    }

loc_0027F7CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4020);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 7);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100100);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    { uint32_t _icall_target = MEM32(0x31C780); PUSH32(esp, 0x0027F7FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F7F6u); } /* indirect call */
    }

loc_0027F7FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027F80A; /* jge: greater or equal (signed >=) */

loc_0027F800: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027F806u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_0027F806: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0027F859;

loc_0027F80A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -68;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x3127;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(ebp + -36) = eax;
    PUSH32(esp, 0x28);
    eax = ebp + -68;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C77C); PUSH32(esp, 0x0027F83Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F835u); } /* indirect call */
    }

loc_0027F83B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x0027F846u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F840u); } /* indirect call */
    }

loc_0027F846: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027F84F; /* jl: less (signed <) */

loc_0027F84A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0027F857;

loc_0027F84F: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027F855u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_0027F855: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027F857: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0027F859: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027F85D
 * Original: 0x0027F85D - 0x0027F8A8 (75 bytes, 25 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027F85D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F85D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C784); PUSH32(esp, 0x0027F870u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F86Au); } /* indirect call */
    }

loc_0027F870: ;
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    eax = ebp + -76;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0xFFFFFFFDu;
    MEM32(ebp + -12) = 0x40;
    { uint32_t _icall_target = MEM32(0x31C788); PUSH32(esp, 0x0027F892u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F88Cu); } /* indirect call */
    }

loc_0027F892: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027F89B; /* jl: less (signed <) */

loc_0027F896: ;
    eax = MEM32(ebp + -28);
    goto loc_0027F8A4;

loc_0027F89B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027F8A1u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_0027F8A1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0027F8A4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027F8A8
 * Original: 0x0027F8A8 - 0x0027F936 (142 bytes, 51 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027F8A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F8A8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C784); PUSH32(esp, 0x0027F8BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F8B5u); } /* indirect call */
    }

loc_0027F8BB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4040);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 7);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10000);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -32) = 0xFFFFFFFDu;
    MEM32(ebp + -24) = 0x40;
    { uint32_t _icall_target = MEM32(0x31C780); PUSH32(esp, 0x0027F8EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F8E7u); } /* indirect call */
    }

loc_0027F8ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027F8FB; /* jge: greater or equal (signed >=) */

loc_0027F8F1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027F8F7u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_0027F8F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0027F932;

loc_0027F8FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = ebp + 0xB;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM8(ebp + 0xB) = 1;
    { uint32_t _icall_target = MEM32(0x31C77C); PUSH32(esp, 0x0027F915u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F90Fu); } /* indirect call */
    }

loc_0027F915: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x0027F920u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F91Au); } /* indirect call */
    }

loc_0027F920: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027F929; /* jl: less (signed <) */

loc_0027F924: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0027F931;

loc_0027F929: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027F92Fu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_0027F92F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027F931: ;
    POP32(esp, esi);

loc_0027F932: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027F936
 * Original: 0x0027F936 - 0x0027F96E (56 bytes, 21 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F936(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F936: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x3360B0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027F945u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F93Fu); } /* indirect call */
    }

loc_0027F945: ;
    esi = MEM32(0x3360CC);
    edi = 0x3360CC;
    goto loc_0027F95D;

loc_0027F952: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = esi;
    esi = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0027F95Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F95Au); } /* indirect call */
    }

loc_0027F95D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F952; /* jne: not equal / not zero */

loc_0027F961: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027F968u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F962u); } /* indirect call */
    }

loc_0027F968: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027F96E
 * Original: 0x0027F96E - 0x0027F9C0 (82 bytes, 31 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027F96E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F96E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x31C7C4));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C7C0); PUSH32(esp, 0x0027F984u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F97Eu); } /* indirect call */
    }

loc_0027F984: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027F9B4; /* jl: less (signed <) */

loc_0027F988: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F994; /* jne: not equal / not zero */

loc_0027F990: ;
    PUSH32(esp, 0x10);
    goto loc_0027F99B;

loc_0027F994: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF1u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F99C; /* jne: not equal / not zero */

loc_0027F999: ;
    PUSH32(esp, 0xFFFFFFF0u);

loc_0027F99B: ;
    POP32(esp, eax);

loc_0027F99C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C7BC); PUSH32(esp, 0x0027F9A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F9A0u); } /* indirect call */
    }

loc_0027F9A6: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7B8); PUSH32(esp, 0x0027F9AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F9A9u); } /* indirect call */
    }

loc_0027F9AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0027F9BC;

loc_0027F9B4: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027F9BAu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_0027F9BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027F9BC: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027F9C0
 * Original: 0x0027F9C0 - 0x0027F9E6 (38 bytes, 15 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027F9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F9C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C7C8); PUSH32(esp, 0x0027F9D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027F9CAu); } /* indirect call */
    }

loc_0027F9D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027F9DF; /* jge: greater or equal (signed >=) */

loc_0027F9D4: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027F9DAu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_0027F9DA: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0027F9E2;

loc_0027F9DF: ;
    eax = MEM32(ebp + 8);

loc_0027F9E2: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027F9E6
 * Original: 0x0027F9E6 - 0x0027FA3C (86 bytes, 34 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027F9E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F9E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -76) = eax;
    MEM32(ebp + -68) = 0x27F9E6;
    if (CMP_EQ(_fa, _fb)) goto loc_0027FA29; /* je: equal / zero */

loc_0027FA0E: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027FA19; /* jbe: below or equal (unsigned <=) */

loc_0027FA16: ;
    PUSH32(esp, 0xF);
    POP32(esp, ecx);

loc_0027FA19: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -64) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027FA2D; /* je: equal / zero */

loc_0027FA20: ;
    PUSH32(esp, edi);
    edi = ebp + -60;
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
    POP32(esp, edi);
    goto loc_0027FA2D;

loc_0027FA29: ;
    MEM32(ebp + -64) = MEM32(ebp + -64) & 0;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0027FA2D: ;
    eax = ebp + -80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7CC); PUSH32(esp, 0x0027FA37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FA31u); } /* indirect call */
    }

loc_0027FA37: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0027FA3C
 * Original: 0x0027FA3C - 0x0027FA4E (18 bytes, 5 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027FA3C(void)
{

loc_0027FA3C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027FA43u); RECOMP_ABI_CALL(0x0027F936u, sub_0027F936); /* call 0x0027F936 */

loc_0027FA43: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x31C7D0); PUSH32(esp, 0x0027FA4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FA47u); } /* indirect call */
    }

loc_0027FA4D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0027FA4E
 * Original: 0x0027FA4E - 0x0027FA60 (18 bytes, 4 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027FA4E(void)
{

loc_0027FA4E: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(0x65461C);
    MEM32(0x65461C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027FA60
 * Original: 0x0027FA60 - 0x0027FAA9 (73 bytes, 22 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027FA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027FA60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = 0x3360B0;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027FA6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FA67u); } /* indirect call */
    }

loc_0027FA6D: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FA90; /* je: equal / zero */

loc_0027FA74: ;
    ecx = MEM32(0x3360D0);
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x3360CC;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(0x3360D0) = eax;
    goto loc_0027FA9E;

loc_0027FA90: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;

loc_0027FA9E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027FAA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FA9Fu); } /* indirect call */
    }

loc_0027FAA5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027FAA9
 * Original: 0x0027FAA9 - 0x0027FAE5 (60 bytes, 22 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0027FAA9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027FAA9: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FAC2; /* je: equal / zero */

loc_0027FAB9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0027FAC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FABDu); } /* indirect call */
    }

loc_0027FAC0: ;
    goto loc_0027FAC4;

loc_0027FAC2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027FAC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FAE0; /* jne: not equal / not zero */

loc_0027FAC8: ;
    eax = MEM32(0x65461C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FAE0; /* je: equal / zero */

loc_0027FAD1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0027FAD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FAD5u); } /* indirect call */
    }

loc_0027FAD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FAE0; /* jne: not equal / not zero */

loc_0027FADC: ;
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0027FAE2;

loc_0027FAE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027FAE2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027FAE5
 * Original: 0x0027FAE5 - 0x0027FB7D (152 bytes, 49 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027FAE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027FAE5: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x31C980);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FAF1u); RECOMP_ABI_CALL(0x0028A558u, sub_0028A558); /* call 0x0028A558 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0027FAF1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x28);
    MEM32(ebp + -32) = eax;
    edx = MEM32(eax + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -36) = edx;
    MEM32(edx + -4) = edx;
    ebx = MEM32(0x31C9D8);
    esi = MEM32(0x31C9D4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -40) = ebx;
    ecx = ebx;
    edi = edx;
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
    ecx = MEM32(0x31C9E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FB4A; /* je: equal / zero */

loc_0027FB37: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + edx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_0027FB4A: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FB51u); RECOMP_ABI_CALL(0x0027F936u, sub_0027F936); /* call 0x0027F936 */

loc_0027FB51: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x0027FB57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FB54u); } /* indirect call */
    }

loc_0027FB57: ;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FB61u); RECOMP_ABI_CALL(0x0027F936u, sub_0027F936); /* call 0x0027F936 */

loc_0027FB61: ;
    goto loc_0027FB6F;

    PUSH32(esp, MEM32(ebp + -20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FB6Bu); RECOMP_ABI_CALL(0x0027FAA9u, sub_0027FAA9); /* call 0x0027FAA9 */

loc_0027FB6B: ;
    esp += 4; return; /* ret */

loc_0027FB6F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -28));
    { uint32_t _icall_target = MEM32(0x31C7D0); PUSH32(esp, 0x0027FB7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FB76u); } /* indirect call */
    }

loc_0027FB7C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0027FB63
 * Original: 0x0027FB63 - 0x0027FB7D (26 bytes, 8 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027FB63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027FB63: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0027FB6Bu); RECOMP_ABI_CALL(0x0027FAA9u, sub_0027FAA9); /* call 0x0027FAA9 */

loc_0027FB6B: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0027FB6C
 * Original: 0x0027FB6C - 0x0027FB7D (17 bytes, 5 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027FB6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027FB6C: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -28));
    { uint32_t _icall_target = MEM32(0x31C7D0); PUSH32(esp, 0x0027FB7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FB76u); } /* indirect call */
    }

loc_0027FB7C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0027FB7D
 * Original: 0x0027FB7D - 0x0027FBEB (110 bytes, 37 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027FB7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027FB7D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FB8C; /* jne: not equal / not zero */

loc_0027FB87: ;
    eax = MEM32(0x10130);

loc_0027FB8C: ;
    ecx = MEM32(ebp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27FAE5);
    PUSH32(esp, 0);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF01u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(0x654620));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7D4); PUSH32(esp, 0x0027FBBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FBB6u); } /* indirect call */
    }

loc_0027FBBC: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027FBE4; /* jge: greater or equal (signed >=) */

loc_0027FBC2: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027FBE4; /* jae: above or equal (unsigned >=) */

loc_0027FBCE: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FBE4; /* je: equal / zero */

loc_0027FBDA: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FBE0u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_0027FBE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0027FBE7;

loc_0027FBE4: ;
    eax = MEM32(ebp + 0xC);

loc_0027FBE7: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0027FBEB
 * Original: 0x0027FBEB - 0x0027FBF8 (13 bytes, 3 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027FBEB(void)
{

loc_0027FBEB: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);
    eax = MEM32(eax + 0x12C);
    esp += 4; return; /* ret */

}

/**
 * sub_0027FBF8
 * Original: 0x0027FBF8 - 0x0027FC6C (116 bytes, 34 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0027FBF8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027FBF8: ;
    PUSH32(esp, 0x0027FBFDu); RECOMP_ABI_CALL(0x002810B5u, sub_002810B5); /* call 0x002810B5 */

loc_0027FBFD: ;
    PUSH32(esp, 0x0027FC02u); RECOMP_ABI_CALL(0x00280E53u, sub_00280E53); /* call 0x00280E53 */

loc_0027FC02: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FC17; /* je: equal / zero */

loc_0027FC12: ;
    ecx = MEM32(eax + 0x24);
    goto loc_0027FC19;

loc_0027FC17: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027FC19: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FC44; /* je: equal / zero */

loc_0027FC1D: ;
    PUSH32(esp, edi);
    eax = MEM32(XBOX_FS_BASE + 0x28);
    edi = MEM32(XBOX_FS_BASE + 4);
    edx = MEM32(0x347B7C);
    edx = MEM32(edi + edx * 4);
    _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ecx) = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);

loc_0027FC44: ;
    PUSH32(esp, 0x0027FC49u); RECOMP_ABI_CALL(0x00281028u, sub_00281028); /* call 0x00281028 */

loc_0027FC49: ;
    PUSH32(esp, 0x0027FC4Eu); RECOMP_ABI_CALL(0x00280FD0u, sub_00280FD0); /* call 0x00280FD0 */

loc_0027FC4E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027FC59u); RECOMP_ABI_CALL(0x000110B0u, sub_000110B0); /* call 0x000110B0 */

loc_0027FC59: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0027FC67u); RECOMP_ABI_CALL(0x00280B5Du, sub_00280B5D); /* call 0x00280B5D */

loc_0027FC67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * xbe_entry_point
 * Original: 0x0027FC6C - 0x0027FCDE (114 bytes, 42 insns)
 * Folder: xdk/xapi (between: 0x0027F5F9 and 0x0027FCDE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xbe_entry_point(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027FC6C: ;
    ecx = MEM32(0x10118);
    eax = MEM32(0x10108);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027FC84; /* jae: above or equal (unsigned >=) */

loc_0027FC82: ;
    MEM32(ecx) = eax;

loc_0027FC84: ;
    eax = MEM32(0x31C9E4);
    _fb = (uint32_t)(MEM32(0x31C9D4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x31C9D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x31C9D8);
    PUSH32(esp, esi);
    eax = eax + ecx + 0xF;
    PUSH32(esp, edi);
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFCu);
    POP32(esp, ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x654620) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(0x31C9DC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x27FBF8);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0027FCC5u); RECOMP_ABI_CALL(0x0027FB7Du, sub_0027FB7D); /* call 0x0027FB7D */

loc_0027FCC5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FCD5; /* jne: not equal / not zero */

loc_0027FCCB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0027FCD5u); RECOMP_ABI_CALL(0x00280B5Du, sub_00280B5D); /* call 0x00280B5D */

loc_0027FCD5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027FCDBu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_0027FCDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027FCDE
 * Original: 0x0027FCDE - 0x0027FD28 (74 bytes, 29 insns)
 * Folder: xdk/xapi (string: t:\$u\%s)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027FCDE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027FCDE: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x31C994);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x0027FCF7u); RECOMP_ABI_CALL(0x0028A699u, sub_0028A699); /* call 0x0028A699 */

loc_0027FCF7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027FD1E; /* jge: greater or equal (signed >=) */

loc_0027FCFE: ;
    eax = MEM32(esp + 8);
    edx = eax + 1;

loc_0027FD05: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FD05; /* jne: not equal / not zero */

loc_0027FD0C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7A);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0027FD1Au); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_0027FD1A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0027FD24;

loc_0027FD1E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027FD24: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027FD28
 * Original: 0x0027FD28 - 0x0027FDF4 (204 bytes, 77 insns)
 * Folder: xdk/xapi (between: 0x0027FCDE and 0x0027FE58)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027FD28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027FD28: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x188) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x188;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x8000080);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FD50u); RECOMP_ABI_CALL(0x002804EAu, sub_002804EA); /* call 0x002804EA */

loc_0027FD50: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FDBD; /* je: equal / zero */

loc_0027FD57: ;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ebx = 0x178;
    PUSH32(esp, ebx);
    eax = ebp + -392;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FD6Fu); RECOMP_ABI_CALL(0x00281198u, sub_00281198); /* call 0x00281198 */

loc_0027FD6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FDBD; /* je: equal / zero */

loc_0027FD73: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FDB6; /* jne: not equal / not zero */

loc_0027FD78: ;
    eax = MEM32(ebp + -112);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -132) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027FDB6; /* jb: below (unsigned <) */

loc_0027FD83: ;
    _fb = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -132);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FD95u); RECOMP_ABI_CALL(0x002813DFu, sub_002813DF); /* call 0x002813DF */

loc_0027FD95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FDBD; /* je: equal / zero */

loc_0027FD99: ;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    esi = 0x1D0;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FDADu); RECOMP_ABI_CALL(0x00281198u, sub_00281198); /* call 0x00281198 */

loc_0027FDAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FDBD; /* je: equal / zero */

loc_0027FDB1: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FDDF; /* je: equal / zero */

loc_0027FDB6: ;
    PUSH32(esp, 0xD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FDBDu); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_0027FDBD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FDC2u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_0027FDC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027FDCD; /* jg: greater (signed >) */

loc_0027FDC6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FDCBu); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_0027FDCB: ;
    goto loc_0027FDDC;

loc_0027FDCD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FDD2u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_0027FDD2: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0027FDDC: ;
    MEM32(ebp + -4) = eax;

loc_0027FDDF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FDEA; /* je: equal / zero */

loc_0027FDE4: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FDEAu); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_0027FDEA: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027FDF4
 * Original: 0x0027FDF4 - 0x0027FE58 (100 bytes, 41 insns)
 * Folder: xdk/xapi (between: 0x0027FCDE and 0x0027FE58)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027FDF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027FDF4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = MEM32(edx) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    ecx = MEM32(0x31C768);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0027FE3A; /* je: equal / zero */

loc_0027FE10: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FE3A; /* je: equal / zero */

loc_0027FE16: ;
    edi = ecx;
    ecx = edi + 0x214;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FE34; /* je: equal / zero */

loc_0027FE23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0027FE3D;

loc_0027FE34: ;
    ecx = MEM32(edi);
    MEM32(edx) = ecx;
    goto loc_0027FE3D;

loc_0027FE3A: ;
    edi = MEM32(ebp + 0xC);

loc_0027FE3D: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FE52; /* je: equal / zero */

loc_0027FE42: ;
    esi = edi + 0x400;
    edi = MEM32(ebp + 0x10);
    ecx = 0x300;
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

loc_0027FE52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027FE58
 * Original: 0x0027FE58 - 0x0027FEEA (146 bytes, 48 insns)
 * Folder: xdk/xapi (string: \Device\Cdrom0)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027FE58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027FE58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x21C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM8(edi) = 0;
    MEM32(ebp + -12) = 0x40;
    MEM32(ebp + -16) = 0x33612C;
    { uint32_t _icall_target = MEM32(0x31C7E4); PUSH32(esp, 0x0027FE88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FE82u); } /* indirect call */
    }

loc_0027FE88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027FED7; /* jl: less (signed <) */

loc_0027FE8C: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = ebp + -540;
    MEM32(ebp + -4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM16(ebp + -6) = 0x208;
    { uint32_t _icall_target = MEM32(0x31C7E0); PUSH32(esp, 0x0027FEB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FEAAu); } /* indirect call */
    }

loc_0027FEB0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x0027FEBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027FEB5u); } /* indirect call */
    }

loc_0027FEBB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0027FED7; /* jl: less (signed <) */

loc_0027FEC0: ;
    eax = ZX16(MEM16(ebp + -8));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027FECD; /* jae: above or equal (unsigned >=) */

loc_0027FECA: ;
    eax = MEM32(ebp + 0xC);

loc_0027FECD: ;
    PUSH32(esp, eax);
    eax = ebp + -540;
    PUSH32(esp, eax);
    goto loc_0027FEDF;

loc_0027FED7: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x31C9A0);

loc_0027FEDF: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0027FEE5u); RECOMP_ABI_CALL(0x00280418u, sub_00280418); /* call 0x00280418 */

loc_0027FEE5: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027FEEA
 * Original: 0x0027FEEA - 0x0027FF6B (129 bytes, 57 insns)
 * Folder: xdk/xapi (between: 0x0027FE58 and 0x0028026E)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027FEEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027FEEA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x31C768);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = eax + 1;

loc_0027FEFC: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FEFC; /* jne: not equal / not zero */

loc_0027FF03: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + 1;
    eax = MEM32(ebp + 0xC);
    edi = eax + 1;

loc_0027FF0E: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FF0E; /* jne: not equal / not zero */

loc_0027FF15: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + ecx + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1EC (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027FF65; /* jae: above or equal (unsigned >=) */

loc_0027FF22: ;
    eax = esi + 0x214;
    MEM16(eax) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax) = LO16(ecx);
    edx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FF43; /* jne: not equal / not zero */

loc_0027FF40: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0027FF43: ;
    esi = MEM32(ebp + 8);
    edi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0027FF4A: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + esi) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FF4A; /* jne: not equal / not zero */

loc_0027FF54: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0027FF5B: ;
    SET_LO8(ecx, MEM8(edx));
    MEM8(eax + edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FF5B; /* jne: not equal / not zero */

loc_0027FF65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027FF6B
 * Original: 0x0027FF6B - 0x002800ED (386 bytes, 134 insns)
 * Folder: xdk/xapi (between: 0x0027FE58 and 0x0028026E)
 * Category: game_io
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027FF6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027FF6B: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x45C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31C9B0);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x64) = 0x104;
    PUSH32(esp, 0x0027FF98u); RECOMP_ABI_CALL(0x0027FCDEu, sub_0027FCDE); /* call 0x0027FCDE */

loc_0027FF98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D1; /* je: equal / zero */

loc_0027FFA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027FFBAu); RECOMP_ABI_CALL(0x002804EAu, sub_002804EA); /* call 0x002804EA */

loc_0027FFBA: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D1; /* je: equal / zero */

loc_0027FFC5: ;
    eax = ebp + -144;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027FFD7u); RECOMP_ABI_CALL(0x00281745u, sub_00281745); /* call 0x00281745 */

loc_0027FFD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D1; /* je: equal / zero */

loc_0027FFDF: ;
    _fa = (uint32_t)(MEM8(ebp + -112)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -112), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002800D1; /* je: equal / zero */

loc_0027FFE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x50;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x44);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + -92);
    POP32(esp, esi);
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -88), esi (32-bit) */
    MEM32(ebp + 0x58) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002800D1; /* jne: not equal / not zero */

loc_00280005: ;
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00280018u); RECOMP_ABI_CALL(0x00281198u, sub_00281198); /* call 0x00281198 */

loc_00280018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D1; /* je: equal / zero */

loc_00280020: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002800D1; /* jne: not equal / not zero */

loc_00280029: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280035u); RECOMP_ABI_CALL(0x00284E4Cu, sub_00284E4C); /* call 0x00284E4C */

loc_00280035: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280046u); RECOMP_ABI_CALL(0x00284E46u, sub_00284E46); /* call 0x00284E46 */

loc_00280046: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280056u); RECOMP_ABI_CALL(0x00284E40u, sub_00284E40); /* call 0x00284E40 */

loc_00280056: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebp + -84;
    esi = ebp + 0x3C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_002800D1; /* jne: not equal / not zero */

loc_00280065: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002800D1; /* ja: above (unsigned >) */

loc_0028006D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0028007F; /* jbe: below or equal (unsigned <=) */

loc_00280071: ;
    edx = MEM32(ebp + eax * 4 + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x78) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028007F; /* je: equal / zero */

loc_0028007A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00280071; /* jb: below (unsigned <) */

loc_0028007F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D1; /* je: equal / zero */

loc_00280083: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    MEM32(ebp + 0x64) = 0x104;
    PUSH32(esp, 0x0028009Du); RECOMP_ABI_CALL(0x0027FCDEu, sub_0027FCDE); /* call 0x0027FCDE */

loc_0028009D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002800AD; /* jne: not equal / not zero */

loc_002800A1: ;
    PUSH32(esp, 0x002800A6u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_002800A6: ;
    PUSH32(esp, 0x002800ABu); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_002800AB: ;
    goto loc_002800D1;

loc_002800AD: ;
    eax = ebp + -1012;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002800C0u); RECOMP_ABI_CALL(0x0027FD28u, sub_0027FD28); /* call 0x0027FD28 */

loc_002800C0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800D1; /* jl: less (signed <) */

loc_002800C6: ;
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(MEM32(ebp + -1004)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1004), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D6; /* je: equal / zero */

loc_002800D1: ;
    esi = 0x8007000Du;

loc_002800D6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800E1; /* je: equal / zero */

loc_002800DB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002800E1u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_002800E1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x68;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00280020
 * Original: 0x00280020 - 0x002800ED (205 bytes, 71 insns)
 * Folder: xdk/xapi (between: 0x0027FE58 and 0x0028026E)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280020: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002800D1; /* jne: not equal / not zero */

loc_00280029: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280035u); RECOMP_ABI_CALL(0x00284E4Cu, sub_00284E4C); /* call 0x00284E4C */

loc_00280035: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280046u); RECOMP_ABI_CALL(0x00284E46u, sub_00284E46); /* call 0x00284E46 */

loc_00280046: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280056u); RECOMP_ABI_CALL(0x00284E40u, sub_00284E40); /* call 0x00284E40 */

loc_00280056: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebp + -84;
    esi = ebp + 0x3C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_002800D1; /* jne: not equal / not zero */

loc_00280065: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002800D1; /* ja: above (unsigned >) */

loc_0028006D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0028007F; /* jbe: below or equal (unsigned <=) */

loc_00280071: ;
    edx = MEM32(ebp + eax * 4 + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x78) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028007F; /* je: equal / zero */

loc_0028007A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00280071; /* jb: below (unsigned <) */

loc_0028007F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D1; /* je: equal / zero */

loc_00280083: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    MEM32(ebp + 0x64) = 0x104;
    PUSH32(esp, 0x0028009Du); RECOMP_ABI_CALL(0x0027FCDEu, sub_0027FCDE); /* call 0x0027FCDE */

loc_0028009D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002800AD; /* jne: not equal / not zero */

loc_002800A1: ;
    PUSH32(esp, 0x002800A6u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_002800A6: ;
    PUSH32(esp, 0x002800ABu); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_002800AB: ;
    goto loc_002800D1;

loc_002800AD: ;
    eax = ebp + -1012;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002800C0u); RECOMP_ABI_CALL(0x0027FD28u, sub_0027FD28); /* call 0x0027FD28 */

loc_002800C0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800D1; /* jl: less (signed <) */

loc_002800C6: ;
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(MEM32(ebp + -1004)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1004), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D6; /* je: equal / zero */

loc_002800D1: ;
    esi = 0x8007000Du;

loc_002800D6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800E1; /* je: equal / zero */

loc_002800DB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002800E1u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_002800E1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x68;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00280068
 * Original: 0x00280068 - 0x002800ED (133 bytes, 47 insns)
 * Folder: xdk/xapi (between: 0x0027FE58 and 0x0028026E)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280068(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280068: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002800D1; /* ja: above (unsigned >) */

loc_0028006D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0028007F; /* jbe: below or equal (unsigned <=) */

loc_00280071: ;
    edx = MEM32(ebp + eax * 4 + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x78) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028007F; /* je: equal / zero */

loc_0028007A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00280071; /* jb: below (unsigned <) */

loc_0028007F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D1; /* je: equal / zero */

loc_00280083: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    MEM32(ebp + 0x64) = 0x104;
    PUSH32(esp, 0x0028009Du); RECOMP_ABI_CALL(0x0027FCDEu, sub_0027FCDE); /* call 0x0027FCDE */

loc_0028009D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002800AD; /* jne: not equal / not zero */

loc_002800A1: ;
    PUSH32(esp, 0x002800A6u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_002800A6: ;
    PUSH32(esp, 0x002800ABu); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_002800AB: ;
    goto loc_002800D1;

loc_002800AD: ;
    eax = ebp + -1012;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002800C0u); RECOMP_ABI_CALL(0x0027FD28u, sub_0027FD28); /* call 0x0027FD28 */

loc_002800C0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800D1; /* jl: less (signed <) */

loc_002800C6: ;
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(MEM32(ebp + -1004)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1004), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D6; /* je: equal / zero */

loc_002800D1: ;
    esi = 0x8007000Du;

loc_002800D6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800E1; /* je: equal / zero */

loc_002800DB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002800E1u); RECOMP_ABI_CALL(0x0028117Au, sub_0028117A); /* call 0x0028117A */

loc_002800E1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x68;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002800ED
 * Original: 0x002800ED - 0x0028026E (385 bytes, 136 insns)
 * Folder: xdk/xapi (between: 0x0027FE58 and 0x0028026E)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002800ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002800ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2D4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x10118);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280125; /* jne: not equal / not zero */

loc_00280106: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ecx + 8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + -1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280120u); RECOMP_ABI_CALL(0x0027F73Eu, sub_0027F73E); /* call 0x0027F73E */

loc_00280120: ;
    goto loc_00280269;

loc_00280125: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    edi = 0x168;
    PUSH32(esp, edi);
    eax = ebp + -724;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + 8) = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280145u); RECOMP_ABI_CALL(0x0027FE58u, sub_0027FE58); /* call 0x0027FE58 */

loc_00280145: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x44 (8-bit) */
    SET_LO8(edx, 0x5C);
    if (CMP_EQ(_fa, _fb)) goto loc_00280151; /* je: equal / zero */

loc_0028014D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x64 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280173; /* jne: not equal / not zero */

loc_00280151: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280173; /* jne: not equal / not zero */

loc_00280157: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280173; /* jne: not equal / not zero */

loc_0028015C: ;
    eax = esi + 3;
    esi = eax;
    ecx = ebp + -724;
    MEM32(ebp + -4) = 1;
    goto loc_00280201;

loc_00280173: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x54) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x54 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028017B; /* je: equal / zero */

loc_00280177: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x74) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x74 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002801AC; /* jne: not equal / not zero */

loc_0028017B: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002801AC; /* jne: not equal / not zero */

loc_00280181: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002801AC; /* jne: not equal / not zero */

loc_00280186: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002801AC; /* jne: not equal / not zero */

loc_0028018C: ;
    SET_LO8(ecx, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x55) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x55 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280199; /* je: equal / zero */

loc_00280194: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x75) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x75 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002801AC; /* jne: not equal / not zero */

loc_00280199: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002801AC; /* jne: not equal / not zero */

loc_0028019E: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x3360F4);
    goto loc_002801E3;

loc_002801AC: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280264; /* je: equal / zero */

loc_002801B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x59) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x59 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002801C2; /* je: equal / zero */

loc_002801BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x79) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x79 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280264; /* jne: not equal / not zero */

loc_002801C2: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280264; /* jne: not equal / not zero */

loc_002801CC: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280264; /* jne: not equal / not zero */

loc_002801D5: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3360D4);
    PUSH32(esp, 0x322C94);

loc_002801E3: ;
    eax = ebp + -364;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002801F0u); RECOMP_ABI_CALL(0x0028A699u, sub_0028A699); /* call 0x0028A699 */

loc_002801F0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280264; /* jl: less (signed <) */

loc_002801F7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -364;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00280201: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028020C; /* je: equal / zero */

loc_00280207: ;
    edx = MEM32(ebp + 0x14);
    goto loc_0028020F;

loc_0028020C: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0028020F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028021Eu); RECOMP_ABI_CALL(0x0027F5F9u, sub_0027F5F9); /* call 0x0027F5F9 */

loc_0028021E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0028022C; /* je: equal / zero */

loc_00280227: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280239; /* je: equal / zero */

loc_0028022C: ;
    PUSH32(esp, esi);
    eax = ebp + -724;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280239u); RECOMP_ABI_CALL(0x0027FEEAu, sub_0027FEEA); /* call 0x0027FEEA */

loc_00280239: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028025B; /* jl: less (signed <) */

loc_0028023D: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280253; /* je: equal / zero */

loc_0028024D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00280253u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280250u); } /* indirect call */
    }

loc_00280253: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(0x31C774); PUSH32(esp, 0x0028025Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280255u); } /* indirect call */
    }

loc_0028025B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C770); PUSH32(esp, 0x00280262u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028025Cu); } /* indirect call */
    }

loc_00280262: ;
    goto loc_00280267;

loc_00280264: ;
    PUSH32(esp, 0x57);
    POP32(esp, eax);

loc_00280267: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00280269: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0028026E
 * Original: 0x0028026E - 0x002803D3 (357 bytes, 121 insns)
 * Folder: xdk/xapi (string: t:\$u\)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0028026E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0028026E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x1050;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028027Bu); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_0028027B: ;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFE0000u (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002803CF; /* je: equal / zero */

loc_00280291: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -4176;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002802A7u); RECOMP_ABI_CALL(0x0027FDF4u, sub_0027FDF4); /* call 0x0027FDF4 */

loc_002802A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = eax;
    ebx = 0x168;
    if (CMP_NE(_fa, _fb)) goto loc_002802C8; /* jne: not equal / not zero */

loc_002802B3: ;
    PUSH32(esp, ebx);
    eax = ebp + -1104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002802C0u); RECOMP_ABI_CALL(0x0027FE58u, sub_0027FE58); /* call 0x0027FE58 */

loc_002802C0: ;
    edi = ebp + -1104;
    goto loc_002802CB;

loc_002802C8: ;
    edi = MEM32(ebp + -12);

loc_002802CB: ;
    eax = edi;
    edx = eax + 1;

loc_002802D0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002802D0; /* jne: not equal / not zero */

loc_002802D7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x31C7F4);
    ecx = ZX16(MEM16(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00280396; /* jbe: below or equal (unsigned <=) */

loc_002802EC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002802F6u); RECOMP_ABI_CALL(0x0028A814u, sub_0028A814); /* call 0x0028A814 */

loc_002802F6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00280396; /* jne: not equal / not zero */

loc_00280301: ;
    eax = MEM32(0x31C7F4);
    ecx = ZX16(MEM16(eax));
    eax = MEM32(eax + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebp + -384;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028031Fu); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_0028031F: ;
    eax = MEM32(0x31C7F4);
    eax = ZX16(MEM16(eax));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ebp + eax + -384) = 0;
    eax = ebp + -384;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31C9C0);
    PUSH32(esp, 0x322C94);
    eax = ebp + -744;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028034Fu); RECOMP_ABI_CALL(0x0028A699u, sub_0028A699); /* call 0x0028A699 */

loc_0028034F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002803CC; /* jl: less (signed <) */

loc_00280356: ;
    eax = MEM32(0x10118);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0xAC));
    eax = ebp + -384;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280372u); RECOMP_ABI_CALL(0x0027FF6Bu, sub_0027FF6B); /* call 0x0027FF6B */

loc_00280372: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00280396; /* jl: less (signed <) */

loc_00280376: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ebp + -4176;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = ebp + -744;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280396u); RECOMP_ABI_CALL(0x002800EDu, sub_002800ED); /* call 0x002800ED */

loc_00280396: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002803CC; /* je: equal / zero */

loc_0028039C: ;
    eax = edi;
    edx = eax + 1;

loc_002803A1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002803A1; /* jne: not equal / not zero */

loc_002803A8: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 0x33612C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM16(ebp + -8) = LO16(eax);
    MEM16(ebp + -6) = LO16(eax);
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_target = MEM32(0x31C7DC); PUSH32(esp, 0x002803C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002803BBu); } /* indirect call */
    }

loc_002803C1: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7D8); PUSH32(esp, 0x002803CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002803C6u); } /* indirect call */
    }

loc_002803CC: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002803CF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002803D3
 * Original: 0x002803D3 - 0x00280418 (69 bytes, 30 insns)
 * Folder: xdk/xapi (between: 0x0028026E and 0x002807D4)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002803D3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002803D3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 1);
    PUSH32(esp, 0x002803E8u); RECOMP_ABI_CALL(0x00281826u, sub_00281826); /* call 0x00281826 */

loc_002803E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00280411; /* jne: not equal / not zero */

loc_002803EC: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00280409; /* je: equal / zero */

loc_002803F2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00280404; /* je: equal / zero */

loc_002803F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00280400u); RECOMP_ABI_CALL(0x0028A8B1u, sub_0028A8B1); /* call 0x0028A8B1 */

loc_00280400: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00280414;

loc_00280404: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00280414;

loc_00280409: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    goto loc_00280414;

loc_00280411: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00280414: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00280418
 * Original: 0x00280418 - 0x0028047D (101 bytes, 39 insns)
 * Folder: xdk/xapi (between: 0x0028026E and 0x002807D4)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280418(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280418: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x31C9C8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280424u); RECOMP_ABI_CALL(0x0028A558u, sub_0028A558); /* call 0x0028A558 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00280424: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -32) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028045F; /* je: equal / zero */

loc_0028043A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280459; /* je: equal / zero */

loc_0028043F: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280454; /* je: equal / zero */

loc_00280445: ;
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0028043A;

loc_00280454: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028045D; /* jne: not equal / not zero */

loc_00280459: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;

loc_0028045D: ;
    MEM8(eax) = LO8(ebx);

loc_0028045F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 8);
    goto loc_00280475;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00280475: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028047Au); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0028047A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00280468
 * Original: 0x00280468 - 0x0028047D (21 bytes, 8 insns)
 * Folder: xdk/xapi (between: 0x0028026E and 0x002807D4)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280468(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280468: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    esp += 16; return; /* ret 12 */

}

/**
 * sub_0028046C
 * Original: 0x0028046C - 0x0028047D (17 bytes, 5 insns)
 * Folder: xdk/xapi (between: 0x0028026E and 0x002807D4)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028046C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028046C: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0028047Au); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0028047A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0028047D
 * Original: 0x0028047D - 0x002804A5 (40 bytes, 9 insns)
 * Folder: xdk/xapi (between: 0x0028026E and 0x002807D4)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028047D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028047D: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0028048F; /* jae: above or equal (unsigned >=) */

loc_00280489: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);

loc_0028048F: ;
    eax = MEM32(0x347B7C);
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(ecx + eax * 4);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002804A5
 * Original: 0x002804A5 - 0x002804D3 (46 bytes, 10 insns)
 * Folder: xdk/xapi (between: 0x0028026E and 0x002807D4)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002804A5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002804A5: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002804B7; /* jae: above or equal (unsigned >=) */

loc_002804B1: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);

loc_002804B7: ;
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(0x347B7C);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002804D3
 * Original: 0x002804D3 - 0x002804EA (23 bytes, 7 insns)
 * Folder: xdk/xapi (between: 0x0028026E and 0x002807D4)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002804D3(void)
{

loc_002804D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x31C770); PUSH32(esp, 0x002804DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002804D7u); } /* indirect call */
    }

loc_002804DD: ;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002804E5u); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_002804E5: ;
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002804EA
 * Original: 0x002804EA - 0x00280675 (395 bytes, 136 insns)
 * Folder: xdk/xapi (between: 0x0028026E and 0x002807D4)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002804EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002804EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    POP32(esp, ebx);
    if ((_fa == 0)) goto loc_0028053F; /* je: equal / zero */

loc_002804FE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00280536; /* je: equal / zero */

loc_00280501: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00280531; /* je: equal / zero */

loc_00280504: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00280528; /* je: equal / zero */

loc_00280507: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00280519; /* jne: not equal / not zero */

loc_0028050A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x40000000 (32-bit) */
    MEM32(ebp + 0xC) = 4;
    if (TEST_NZ(_fa, _fb)) goto loc_00280546; /* jne: not equal / not zero */

loc_00280519: ;
    PUSH32(esp, 0xC000000Du);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280523u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00280523: ;
    goto loc_00280642;

loc_00280528: ;
    MEM32(ebp + 0xC) = 3;
    goto loc_00280546;

loc_00280531: ;
    MEM32(ebp + 0xC) = ebx;
    goto loc_00280546;

loc_00280536: ;
    MEM32(ebp + 0xC) = 5;
    goto loc_00280546;

loc_0028053F: ;
    MEM32(ebp + 0xC) = 2;

loc_00280546: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C784); PUSH32(esp, 0x00280555u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028054Fu); } /* indirect call */
    }

loc_00280555: ;
    _fa = (uint32_t)(MEM16(ebp + -12)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -12), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0028056B; /* jbe: below or equal (unsigned <=) */

loc_0028055B: ;
    eax = ZX16(MEM16(ebp + -12));
    _fa = (uint32_t)(MEM8(eax + edi + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edi + -1), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028056B; /* jne: not equal / not zero */

loc_00280566: ;
    MEM32(ebp + 8) = ebx;
    goto loc_0028056F;

loc_0028056B: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0028056F: ;
    ecx = MEM32(ebp + 0x1C);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    eax = ecx;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0x8000000;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ecx;
    ebx = ebx & 0x20000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx;
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    edx = edx & 0x10000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    edx = ecx;
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0x2000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ~edx;
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x4000000 (32-bit) */
    MEM32(ebp + -32) = 0xFFFFFFFDu;
    MEM32(ebp + -24) = 0x40;
    if (TEST_Z(_fa, _fb)) goto loc_002805E0; /* je: equal / zero */

loc_002805D5: ;
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002805E0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002805EA; /* jne: not equal / not zero */

loc_002805E7: ;
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002805EA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ecx & 0x7FA7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    esi = esi | 0x100080;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7F8); PUSH32(esp, 0x00280612u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028060Cu); } /* indirect call */
    }

loc_00280612: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280647; /* jge: greater or equal (signed >=) */

loc_00280618: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028061Eu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_0028061E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC0000035u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028062A; /* jne: not equal / not zero */

loc_00280626: ;
    PUSH32(esp, 0x50);
    goto loc_0028063D;

loc_0028062A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC00000BAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC00000BAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280642; /* jne: not equal / not zero */

loc_00280632: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028063B; /* je: equal / zero */

loc_00280637: ;
    PUSH32(esp, 3);
    goto loc_0028063D;

loc_0028063B: ;
    PUSH32(esp, 5);

loc_0028063D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280642u); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_00280642: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0028066F;

loc_00280647: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280653; /* jne: not equal / not zero */

loc_0028064D: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028065F; /* je: equal / zero */

loc_00280653: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280666; /* jne: not equal / not zero */

loc_00280659: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280666; /* jne: not equal / not zero */

loc_0028065F: ;
    PUSH32(esp, 0xB7);
    goto loc_00280667;

loc_00280666: ;
    PUSH32(esp, ebx);

loc_00280667: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028066Cu); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_0028066C: ;
    eax = MEM32(ebp + -4);

loc_0028066F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00280675
 * Original: 0x00280675 - 0x002806ED (120 bytes, 43 insns)
 * Folder: xdk/xapi (between: 0x0028026E and 0x002807D4)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00280675(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00280675: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 3);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = 0x40;
    { uint32_t _icall_target = MEM32(0x31C780); PUSH32(esp, 0x002806ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002806A5u); } /* indirect call */
    }

loc_002806AB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002806E6; /* jl: less (signed <) */

loc_002806B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C840); PUSH32(esp, 0x002806C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002806C0u); } /* indirect call */
    }

loc_002806C6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x002806D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002806CBu); } /* indirect call */
    }

loc_002806D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002806E6; /* jl: less (signed <) */

loc_002806D5: ;
    eax = MEM32(ebp + -28);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -24));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002806E6; /* je: equal / zero */

loc_002806E1: ;
    esi = 0xC000014Fu;

loc_002806E6: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002806ED
 * Original: 0x002806ED - 0x002807D4 (231 bytes, 94 insns)
 * Folder: xdk/xapi (between: 0x0028026E and 0x002807D4)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002806ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002806ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi;
    esi = eax + 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00280700: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280700; /* jne: not equal / not zero */

loc_00280707: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = eax + edi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028071Bu); RECOMP_ABI_CALL(0x00280418u, sub_00280418); /* call 0x00280418 */

loc_0028071B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C784); PUSH32(esp, 0x00280726u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280720u); } /* indirect call */
    }

loc_00280726: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -16;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40100000);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = ebx;
    MEM32(ebp + -20) = 0x40;
    { uint32_t _icall_target = MEM32(0x31C7F8); PUSH32(esp, 0x00280756u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280750u); } /* indirect call */
    }

loc_00280756: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esi) = LO8(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_002807C1; /* jl: less (signed <) */

loc_0028075E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -84;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x31C804); PUSH32(esp, 0x00280773u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028076Du); } /* indirect call */
    }

loc_00280773: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002807B6; /* jl: less (signed <) */

loc_00280779: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002807B6; /* jne: not equal / not zero */

loc_0028077E: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002807B6; /* jne: not equal / not zero */

loc_00280783: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028078Bu); RECOMP_ABI_CALL(0x00281DD7u, sub_00281DD7); /* call 0x00281DD7 */

loc_0028078B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002807B6; /* je: equal / zero */

loc_00280791: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028079Au); RECOMP_ABI_CALL(0x00281E16u, sub_00281E16); /* call 0x00281E16 */

loc_0028079A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x31C7FC); PUSH32(esp, 0x002807ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002807A6u); } /* indirect call */
    }

loc_002807AC: ;
    PUSH32(esp, MEM32(ebp + 8));
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002807B6u); RECOMP_ABI_CALL(0x00281DF8u, sub_00281DF8); /* call 0x00281DF8 */

loc_002807B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x002807BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002807B9u); } /* indirect call */
    }

loc_002807BF: ;
    goto loc_002807CB;

loc_002807C1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC0000035u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002807CB; /* jne: not equal / not zero */

loc_002807C9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002807CB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002807D4
 * Original: 0x002807D4 - 0x00280B08 (820 bytes, 271 insns)
 * Folder: xdk/xapi (string: \TitleMeta.xbx)
 * Category: game_io
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002807D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002807D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x284) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x284;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4021);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    edi = 0x80;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -8) = 0x40;
    MEM32(ebp + -12) = esi;
    { uint32_t _icall_target = MEM32(0x31C7F8); PUSH32(esp, 0x00280819u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280813u); } /* indirect call */
    }

loc_00280819: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028082B; /* jl: less (signed <) */

loc_00280820: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x00280829u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280823u); } /* indirect call */
    }

loc_00280829: ;
    goto loc_00280835;

loc_0028082B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000103u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000103u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280835; /* jne: not equal / not zero */

loc_00280832: ;
    MEM32(ebp + 0xC) = ebx;

loc_00280835: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280AFE; /* jl: less (signed <) */

loc_0028083E: ;
    eax = MEM32(esi + 4);
    edx = ebp + -360;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00280849: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280849; /* jne: not equal / not zero */

loc_00280853: ;
    SET_LO16(ecx, MEM16(esi));
    eax = ZX16(LO16(ecx));
    eax = ebp + eax + -360;
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028086B; /* je: equal / zero */

loc_00280866: ;
    MEM8(eax) = 0x5C;
    goto loc_0028086F;

loc_0028086B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi) = LO16(ecx);

loc_0028086F: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + eax + -359;

loc_0028087E: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028087E; /* jne: not equal / not zero */

loc_00280888: ;
    eax = ebp + -360;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C784); PUSH32(esp, 0x00280899u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280893u); } /* indirect call */
    }

loc_00280899: ;
    eax = ebp + -36;
    MEM32(ebp + -12) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -8) = 0x40;
    eax = eax + eax + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x120117);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7F8); PUSH32(esp, 0x002808D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002808D0u); } /* indirect call */
    }

loc_002808D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00280AFE; /* jl: less (signed <) */

loc_002808E1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028090F; /* je: equal / zero */

loc_002808E6: ;
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -84;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C838); PUSH32(esp, 0x002808FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002808F4u); } /* indirect call */
    }

loc_002808FA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x28);
    eax = ebp + -84;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x31C77C); PUSH32(esp, 0x0028090Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280909u); } /* indirect call */
    }

loc_0028090F: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280AE0; /* je: equal / zero */

loc_0028091A: ;
    PUSH32(esp, 0x31CB8C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280924u); RECOMP_ABI_CALL(0x00281D70u, sub_00281D70); /* call 0x00281D70 */

loc_00280924: ;
    PUSH32(esp, 0x31CB80);
    MEM32(ebp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280931u); RECOMP_ABI_CALL(0x00281D70u, sub_00281D70); /* call 0x00281D70 */

loc_00280931: ;
    PUSH32(esp, 0x31CB74);
    MEM32(ebp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028093Eu); RECOMP_ABI_CALL(0x00281D70u, sub_00281D70); /* call 0x00281D70 */

loc_0028093E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + -28) = eax;
    edi = 0x104;
    if (CMP_NE(_fa, _fb)) goto loc_00280955; /* jne: not equal / not zero */

loc_0028094C: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280A9A; /* je: equal / zero */

loc_00280955: ;
    eax = ebp + -360;
    esi = eax + 1;

loc_0028095E: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028095E; /* jne: not equal / not zero */

loc_00280965: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    esi = ebp + eax + -360;
    PUSH32(esp, 0x31CA88);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028097Eu); RECOMP_ABI_CALL(0x00280418u, sub_00280418); /* call 0x00280418 */

loc_0028097E: ;
    eax = ebp + -360;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C784); PUSH32(esp, 0x0028098Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280989u); } /* indirect call */
    }

loc_0028098F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -44;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40100000);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -8) = 0x40;
    { uint32_t _icall_target = MEM32(0x31C7F8); PUSH32(esp, 0x002809BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002809B9u); } /* indirect call */
    }

loc_002809BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    MEM8(esi) = LO8(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_00280A90; /* jl: less (signed <) */

loc_002809CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -100;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x31C804); PUSH32(esp, 0x002809E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002809DBu); } /* indirect call */
    }

loc_002809E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00280A85; /* jl: less (signed <) */

loc_002809EC: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280A85; /* jne: not equal / not zero */

loc_002809F5: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280A85; /* jne: not equal / not zero */

loc_002809FE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280A3A; /* je: equal / zero */

loc_00280A04: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280A0Cu); RECOMP_ABI_CALL(0x00281DD7u, sub_00281DD7); /* call 0x00281DD7 */

loc_00280A0C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280A3A; /* je: equal / zero */

loc_00280A12: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280A1Bu); RECOMP_ABI_CALL(0x00281E16u, sub_00281E16); /* call 0x00281E16 */

loc_00280A1B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x31C7FC); PUSH32(esp, 0x00280A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280A27u); } /* indirect call */
    }

loc_00280A2D: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280A38u); RECOMP_ABI_CALL(0x00281DF8u, sub_00281DF8); /* call 0x00281DF8 */

loc_00280A38: ;
    goto loc_00280A85;

loc_00280A3A: ;
    PUSH32(esp, 0x31CB2C);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -644;
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x31CAE8);
    PUSH32(esp, 0xFEFF);
    PUSH32(esp, 0x31CB54);
    PUSH32(esp, 0x8E);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280A64u); RECOMP_ABI_CALL(0x0028A9D4u, sub_0028A9D4); /* call 0x0028A9D4 */

loc_00280A64: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ebp + -644;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x31C7FC); PUSH32(esp, 0x00280A82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280A7Cu); } /* indirect call */
    }

loc_00280A82: ;
    MEM32(ebp + 0xC) = eax;

loc_00280A85: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x00280A8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280A88u); } /* indirect call */
    }

loc_00280A8E: ;
    goto loc_00280A9A;

loc_00280A90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000035u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280A9A; /* jne: not equal / not zero */

loc_00280A97: ;
    MEM32(ebp + 0xC) = ebx;

loc_00280A9A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280AE0; /* jl: less (signed <) */

loc_00280A9F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280ABD; /* je: equal / zero */

loc_00280AA5: ;
    PUSH32(esp, 0x31CA9C);
    PUSH32(esp, edi);
    eax = ebp + -360;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280ABAu); RECOMP_ABI_CALL(0x002806EDu, sub_002806ED); /* call 0x002806ED */

loc_00280ABA: ;
    MEM32(ebp + 0xC) = eax;

loc_00280ABD: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280AE0; /* jl: less (signed <) */

loc_00280AC2: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280AE0; /* je: equal / zero */

loc_00280AC8: ;
    PUSH32(esp, 0x31CAB0);
    PUSH32(esp, edi);
    eax = ebp + -360;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280ADDu); RECOMP_ABI_CALL(0x002806EDu, sub_002806ED); /* call 0x002806ED */

loc_00280ADD: ;
    MEM32(ebp + 0xC) = eax;

loc_00280AE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x00280AE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280AE3u); } /* indirect call */
    }

loc_00280AE9: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280AFE; /* jl: less (signed <) */

loc_00280AEE: ;
    eax = ebp + -36;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C7D8); PUSH32(esp, 0x00280AFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280AF5u); } /* indirect call */
    }

loc_00280AFB: ;
    MEM32(ebp + 0xC) = eax;

loc_00280AFE: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00280B08
 * Original: 0x00280B08 - 0x00280B5D (85 bytes, 29 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00280B08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00280B08: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, 0x31CB98);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280B1Fu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_00280B1F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x33614C);
    PUSH32(esp, 0x336144);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280B3Bu); RECOMP_ABI_CALL(0x002807D4u, sub_002807D4); /* call 0x002807D4 */

loc_00280B3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280B59; /* jl: less (signed <) */

loc_00280B3F: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -12;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x33615C);
    PUSH32(esp, 0x336154);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280B59u); RECOMP_ABI_CALL(0x002807D4u, sub_002807D4); /* call 0x002807D4 */

loc_00280B59: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00280B5D
 * Original: 0x00280B5D - 0x00280BC2 (101 bytes, 28 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00280B5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00280B5D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC00;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x10118);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0xFFFE0000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280BB9; /* je: equal / zero */

loc_00280B74: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x300;
    edi = ebp + -3072;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -3068) = MEM32(ebp + -3068) & 0;
    _fa = (uint32_t)(MEM32(ebp + -3068)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -3072) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -3064) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -3060) = eax;
    eax = ebp + -3072;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280BB4u); RECOMP_ABI_CALL(0x0027F5B7u, sub_0027F5B7); /* call 0x0027F5B7 */

loc_00280BB4: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_00280BB9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(0x31C774); PUSH32(esp, 0x00280BC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280BBBu); } /* indirect call */
    }

loc_00280BC1: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00280BC2
 * Original: 0x00280BC2 - 0x00280C79 (183 bytes, 63 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00280BC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00280BC2: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x88));
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x10118);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x7C);
    ecx = MEM32(ebx + 0x4AB);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00280BEB; /* je: equal / zero */

loc_00280BE1: ;
    eax = 0xC0000156u;
    goto loc_00280C71;

loc_00280BEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(ebp + 0x7C) = 0x4CB;
    PUSH32(esp, 0x00280BFDu); RECOMP_ABI_CALL(0x00284E4Cu, sub_00284E4C); /* call 0x00284E4C */

loc_00280BFD: ;
    PUSH32(esp, 4);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280C0Cu); RECOMP_ABI_CALL(0x00284E46u, sub_00284E46); /* call 0x00284E46 */

loc_00280C0C: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    eax = ebx + 4;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280C1Cu); RECOMP_ABI_CALL(0x00284E46u, sub_00284E46); /* call 0x00284E46 */

loc_00280C1C: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280C29u); RECOMP_ABI_CALL(0x00284E40u, sub_00284E40); /* call 0x00284E40 */

loc_00280C29: ;
    PUSH32(esp, 0x14);
    POP32(esp, ecx);
    edi = ebx + 0x4CF;
    esi = ebp + 0x60;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags != 0)) goto loc_00280C42; /* je: equal / zero */

loc_00280C3D: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00280C42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00280C4D; /* je: equal / zero */

loc_00280C46: ;
    eax = 0xC0000190u;
    goto loc_00280C71;

loc_00280C4D: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x31C848));
    _fb = (uint32_t)(0x4E3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x4E3)) >> 32) & 1);
    ebx = ebx + 0x4E3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00280C63u); RECOMP_ABI_CALL(0x00284E52u, sub_00284E52); /* call 0x00284E52 */

loc_00280C63: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3FFFFE70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC0000190u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC0000190u)) >> 32) & 1);
    eax = eax + 0xC0000190u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00280C71: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x74)) >> 32) & 1);
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00280C79
 * Original: 0x00280C79 - 0x00280E42 (457 bytes, 159 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00280C79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00280C79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x10118);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x1D8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00280C9A; /* jbe: below or equal (unsigned <=) */

loc_00280C92: ;
    ecx = MEM32(eax + 0x1D8);
    goto loc_00280C9C;

loc_00280C9A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00280C9C: ;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 0x9C);
    MEM32(ebp + -8) = ecx;
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00280CB8; /* je: equal / zero */

loc_00280CB5: ;
    PUSH32(esp, 2);
    POP32(esp, eax);

loc_00280CB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280CC4; /* je: equal / zero */

loc_00280CBD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00280E3F;

loc_00280CC4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -76;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEM32(ebp + -76) = ebx;
    MEM32(ebp + -68) = 0x40;
    MEM32(ebp + -72) = 0x336134;
    { uint32_t _icall_target = MEM32(0x31C780); PUSH32(esp, 0x00280CF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280CEAu); } /* indirect call */
    }

loc_00280CF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280E3F; /* jl: less (signed <) */

loc_00280CF8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xB);
    POP32(esp, ecx);
    esi = MEM32(0x31C84C);
    edi = ebp + -56;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -104;
    MEM32(ebp + -36) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebp + -56) = 0x2C;
    MEM8(ebp + -48) = 1;
    MEM32(ebp + -44) = 0x1C;
    edi = ebp + -28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    SET_LO8(eax, MEM8(ebp + -26));
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 0x3E);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 7);
    MEM8(ebp + -26) = LO8(eax);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -104;
    MEM8(ebp + -28) = 0x5A;
    MEM16(ebp + -21) = 0x1C00;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + -4) = ebx;

loc_00280D4B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4D014);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00280D64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280D62u); } /* indirect call */
    }

loc_00280D64: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280E32; /* jl: less (signed <) */

loc_00280D6E: ;
    _fa = (uint32_t)(MEM8(ebp + -93)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -93), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280D7B; /* je: equal / zero */

loc_00280D74: ;
    edi = 0xC0000014u;
    goto loc_00280D8A;

loc_00280D7B: ;
    _fa = (uint32_t)(MEM8(ebp + -94)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -94), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280D85; /* je: equal / zero */

loc_00280D80: ;
    _fa = (uint32_t)(MEM8(ebp + -92)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -92), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280D95; /* jne: not equal / not zero */

loc_00280D85: ;
    edi = 0xC0000001u;

loc_00280D8A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280D4B; /* jl: less (signed <) */

loc_00280D93: ;
    goto loc_00280D97;

loc_00280D95: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00280D97: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280E32; /* jl: less (signed <) */

loc_00280D9F: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280E32; /* je: equal / zero */

loc_00280DA8: ;
    MEM32(ebp + -4) = ebx;

loc_00280DAB: ;
    PUSH32(esp, 0xB);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -56;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -1740;
    MEM32(ebp + -36) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebp + -56) = 0x2C;
    MEM8(ebp + -48) = 1;
    MEM32(ebp + -44) = 0x664;
    edi = ebp + -28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x2C);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4D014);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    MEM8(ebp + -28) = 0xAD;
    MEM16(ebp + -20) = 0x6406;
    MEM32(ebp + -26) = 0xFFFD02FFu;
    MEM8(ebp + -22) = 0xFE;
    MEM8(ebp + -21) = LO8(ebx);
    MEM8(ebp + -17) = 0xC0;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00280E0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280E0Bu); } /* indirect call */
    }

loc_00280E0D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280E32; /* jl: less (signed <) */

loc_00280E13: ;
    eax = ebp + -1740;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280E1Fu); RECOMP_ABI_CALL(0x00280BC2u, sub_00280BC2); /* call 0x00280BC2 */

loc_00280E1F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280E32; /* jge: greater or equal (signed >=) */

loc_00280E25: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280DAB; /* jl: less (signed <) */

loc_00280E32: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -12));
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x00280E3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280E35u); } /* indirect call */
    }

loc_00280E3B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00280E3F: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00280E42
 * Original: 0x00280E42 - 0x00280E53 (17 bytes, 4 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280E42(void)
{

loc_00280E42: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00280E50u); RECOMP_ABI_CALL(0x00280675u, sub_00280675); /* call 0x00280675 */

loc_00280E50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00280E53
 * Original: 0x00280E53 - 0x00280FD0 (381 bytes, 133 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00280E53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00280E53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3365C0);
    MEM32(ebp + -4) = esi;
    { uint32_t _icall_target = MEM32(0x31C850); PUSH32(esp, 0x00280E70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280E6Au); } /* indirect call */
    }

loc_00280E70: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280E75u); RECOMP_ABI_CALL(0x00281CFCu, sub_00281CFC); /* call 0x00281CFC */

loc_00280E75: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -52;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -52;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp + -52) = 0x30;
    PUSH32(esp, MEM32(0x10138));
    PUSH32(esp, MEM32(0x10134));
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280EA1u); RECOMP_ABI_CALL(0x0028336Bu, sub_0028336B); /* call 0x0028336B */

loc_00280EA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x654534) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00280F08; /* je: equal / zero */

loc_00280EAA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280EAFu); RECOMP_ABI_CALL(0x00280C79u, sub_00280C79); /* call 0x00280C79 */

loc_00280EAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    goto loc_00280EB8;

    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    goto loc_00280ED9;

loc_00280EB8: ;
    _fa = (uint32_t)(MEM8(0x10124)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x10124), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00280EE3; /* jne: not equal / not zero */

loc_00280EC1: ;
    PUSH32(esp, 0x33613C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280ECBu); RECOMP_ABI_CALL(0x00280E42u, sub_00280E42); /* call 0x00280E42 */

loc_00280ECB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280EE3; /* jge: greater or equal (signed >=) */

loc_00280ECF: ;
    PUSH32(esp, 2);

loc_00280ED1: ;
    eax = ebx;
    POP32(esp, ecx);

loc_00280ED4: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);

loc_00280ED9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280EDEu); RECOMP_ABI_CALL(0x00280B5Du, sub_00280B5D); /* call 0x00280B5D */

loc_00280EDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00280EE3: ;
    eax = MEM32(0x31C83C);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00280F0E; /* jne: not equal / not zero */

loc_00280EED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x336134);
    PUSH32(esp, 0x33612C);
    { uint32_t _icall_target = MEM32(0x31C7D8); PUSH32(esp, 0x00280EFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280EF7u); } /* indirect call */
    }

loc_00280EFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280F0E; /* jge: greater or equal (signed >=) */

loc_00280F01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000035u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280F0E; /* je: equal / zero */

loc_00280F08: ;
    eax = ebx;
    ecx = ebx;
    goto loc_00280ED4;

loc_00280F0E: ;
    _fa = (uint32_t)(MEM8(0x10124)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x10124), 0x18 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00280F42; /* jne: not equal / not zero */

loc_00280F17: ;
    eax = MEM32(0x10118);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280F28u); RECOMP_ABI_CALL(0x00280B08u, sub_00280B08); /* call 0x00280B08 */

loc_00280F28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280F42; /* jge: greater or equal (signed >=) */

loc_00280F2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000007Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000007Fu (32-bit) */
    PUSH32(esp, 2);
    if (CMP_NE(_fa, _fb)) goto loc_00280ED1; /* jne: not equal / not zero */

loc_00280F35: ;
    POP32(esp, eax);
    PUSH32(esp, 0x54);
    POP32(esp, ecx);
    MEM32(ebp + -4) = 0x10;
    goto loc_00280ED4;

loc_00280F42: ;
    eax = MEM32(0x10124);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00280F65; /* jne: not equal / not zero */

loc_00280F4B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280F65; /* je: equal / zero */

loc_00280F4F: ;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280F58u); RECOMP_ABI_CALL(0x00282164u, sub_00282164); /* call 0x00282164 */

loc_00280F58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280F65; /* jne: not equal / not zero */

loc_00280F5C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280F65u); RECOMP_ABI_CALL(0x00280B5Du, sub_00280B5D); /* call 0x00280B5D */

loc_00280F65: ;
    eax = MEM32(0x10118);
    edi = MEM32(eax + 0xA4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280F75u); RECOMP_ABI_CALL(0x00281E20u, sub_00281E20); /* call 0x00281E20 */

loc_00280F75: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00280F86; /* jae: above or equal (unsigned >=) */

loc_00280F79: ;
    PUSH32(esp, 4);
    eax = ebx;
    POP32(esp, ecx);
    MEM32(ebp + -4) = edi;
    goto loc_00280ED4;

loc_00280F86: ;
    eax = MEM32(0x31C768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280FA6; /* je: equal / zero */

loc_00280F8F: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280FA6; /* je: equal / zero */

loc_00280F95: ;
    esi = eax;
    eax = esi + 0x214;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280FA6; /* je: equal / zero */

loc_00280FA1: ;
    eax = MEM32(eax + 4);
    MEM32(esi) = eax;

loc_00280FA6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00280FABu); RECOMP_ABI_CALL(0x0028026Eu, sub_0028026E); /* call 0x0028026E */

loc_00280FAB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280EDE; /* je: equal / zero */

loc_00280FB3: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280EDE; /* jne: not equal / not zero */

loc_00280FBC: ;
    eax = MEM32(0x31C768);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C76C); PUSH32(esp, 0x00280FCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280FC5u); } /* indirect call */
    }

loc_00280FCB: ;
    goto loc_00280EDE;

}

/**
 * sub_00280FD0
 * Original: 0x00280FD0 - 0x00281028 (88 bytes, 37 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00280FD0: ;
    eax = MEM32(0x3367A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280FDB; /* je: equal / zero */

loc_00280FD9: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00280FDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280FD9u); } /* indirect call */
    }

loc_00280FDB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x33606C;
    edi = 0x336080;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00281001; /* jae: above or equal (unsigned >=) */

loc_00280FED: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280FFA; /* je: equal / zero */

loc_00280FF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280FFA; /* je: equal / zero */

loc_00280FF8: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00280FFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00280FF8u); } /* indirect call */
    }

loc_00280FFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00280FED; /* jb: below (unsigned <) */

loc_00281001: ;
    esi = 0x335FF0;
    eax = esi;
    edi = 0x336068;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00281025; /* jae: above or equal (unsigned >=) */

loc_00281011: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028101E; /* je: equal / zero */

loc_00281017: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028101E; /* je: equal / zero */

loc_0028101C: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0028101Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028101Cu); } /* indirect call */
    }

loc_0028101E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00281011; /* jb: below (unsigned <) */

loc_00281025: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00281028
 * Original: 0x00281028 - 0x00281051 (41 bytes, 19 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281028(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281028: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x335FE0;
    edi = 0x335FEC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0028104E; /* jae: above or equal (unsigned >=) */

loc_0028103A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281047; /* je: equal / zero */

loc_00281040: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281047; /* je: equal / zero */

loc_00281045: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00281047u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281045u); } /* indirect call */
    }

loc_00281047: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0028103A; /* jb: below (unsigned <) */

loc_0028104E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00281051
 * Original: 0x00281051 - 0x002810B5 (100 bytes, 33 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281051(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281051: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x8001003Cu);
    edx = 0x7FFF0000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX16(MEM16(eax + 6));
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0x14));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 4;
    eax = esi + ecx * 8 + -16;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x54494E49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x54494E49 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002810B3; /* jne: not equal / not zero */

loc_0028107D: ;
    eax = MEM32(eax + 0xC);
    MEM16(ebp + -6) = MEM16(ebp + -6) & 0;
    _fa = (uint32_t)(MEM16(ebp + -6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | 0xC09B00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM16(ebp + -8) = LO16(eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002810A8u); RECOMP_ABI_CALL(0x002848A0u, sub_002848A0); /* call 0x002848A0 */

loc_002810A8: ;
    MEM32(0x654610) = eax;
    MEM32(0x654614) = edx;

loc_002810B3: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002810B5
 * Original: 0x002810B5 - 0x0028117A (197 bytes, 66 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002810B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002810B5: ;
    eax = MEM32(0x31C83C);
    eax = MEM32(eax);
    ecx = MEM32(0x31C854);
    ecx = ZX16(MEM16(ecx + 4));
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, ~LO8(eax));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF68 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00281120; /* je: equal / zero */

loc_002810D5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFC2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00281115; /* je: equal / zero */

loc_002810DD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFC7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFC7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00281105; /* je: equal / zero */

loc_002810E5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12D0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00281164; /* jle: less or equal (signed <=) */

loc_002810ED: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12D2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00281164; /* jg: greater (signed >) */

loc_002810F5: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF1611u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8003838Fu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8003838Fu)) >> 32) & 1);
    eax = eax + 0x8003838Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0028112E;

loc_00281105: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF12CBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x800398CDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x800398CDu)) >> 32) & 1);
    eax = eax + 0x800398CDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0028112E;

loc_00281115: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8002AB88u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0028112E;

loc_00281120: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF1471u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80039749u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80039749u)) >> 32) & 1);
    eax = eax + 0x80039749u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0028112E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00281164; /* je: equal / zero */

loc_00281134: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20C5048D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x20C5048D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00281164; /* jne: not equal / not zero */

loc_0028113C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C828); PUSH32(esp, 0x00281145u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028113Fu); } /* indirect call */
    }

loc_00281145: ;
    edi = MEM32(0x31C824);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ebx = eax;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00281154u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281152u); } /* indirect call */
    }

loc_00281154: ;
    RECOMP_UNIMPL("cli", 0x00281154u); /* TODO: cli */
    MEM32(esi) = 0x28C5048D;
    RECOMP_UNIMPL("sti", 0x0028115Bu); /* TODO: sti */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00281162u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281160u); } /* indirect call */
    }

loc_00281162: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00281164: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    _fa = (uint32_t)(MEM32(eax + 0x250)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x250), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00281179; /* jne: not equal / not zero */

loc_00281174: ;
    g_seh_ebp = ebp; sub_00281051(); return; /* tail jmp 0x00281051 */

loc_00281179: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0028117A
 * Original: 0x0028117A - 0x00281198 (30 bytes, 11 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0028117A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028117A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x00281184u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028117Eu); } /* indirect call */
    }

loc_00281184: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028118D; /* jl: less (signed <) */

loc_00281188: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00281195;

loc_0028118D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281193u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281193: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281195: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00281198
 * Original: 0x00281198 - 0x00281285 (237 bytes, 100 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281198(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00281198: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002811AC; /* je: equal / zero */

loc_002811AA: ;
    MEM32(edi) = ebx;

loc_002811AC: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0028121B; /* je: equal / zero */

loc_002811B3: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C800); PUSH32(esp, 0x002811EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002811E7u); } /* indirect call */
    }

loc_002811ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00281206; /* jl: less (signed <) */

loc_002811F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00281206; /* je: equal / zero */

loc_002811F5: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00281201; /* je: equal / zero */

loc_002811FC: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_00281201: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0028127E;

loc_00281206: ;
    ecx = 0xC0000011u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00281276; /* jne: not equal / not zero */

loc_0028120F: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00281218; /* je: equal / zero */

loc_00281216: ;
    MEM32(eax) = ebx;

loc_00281218: ;
    PUSH32(esp, ecx);
    goto loc_00281277;

loc_0028121B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C800); PUSH32(esp, 0x00281232u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028122Cu); } /* indirect call */
    }

loc_00281232: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0028124B; /* jne: not equal / not zero */

loc_00281239: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C858); PUSH32(esp, 0x00281244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028123Eu); } /* indirect call */
    }

loc_00281244: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00281256; /* jl: less (signed <) */

loc_00281248: ;
    eax = MEM32(ebp + -8);

loc_0028124B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00281256; /* jl: less (signed <) */

loc_0028124F: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_00281201;

loc_00281256: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000011u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000011u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00281261; /* jne: not equal / not zero */

loc_0028125D: ;
    MEM32(edi) = ebx;
    goto loc_00281201;

loc_00281261: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00281276; /* jne: not equal / not zero */

loc_00281271: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_00281276: ;
    PUSH32(esp, eax);

loc_00281277: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028127Cu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_0028127C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0028127E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00281285
 * Original: 0x00281285 - 0x0028135B (214 bytes, 90 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281285(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00281285: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00281299; /* je: equal / zero */

loc_00281297: ;
    MEM32(edi) = ebx;

loc_00281299: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002812FC; /* je: equal / zero */

loc_002812A0: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C7FC); PUSH32(esp, 0x002812DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002812D4u); } /* indirect call */
    }

loc_002812DA: ;
    ecx = 0xC0000000u;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0028134C; /* je: equal / zero */

loc_002812E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0028134C; /* je: equal / zero */

loc_002812EB: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002812F7; /* je: equal / zero */

loc_002812F2: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_002812F7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00281354;

loc_002812FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C7FC); PUSH32(esp, 0x00281313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028130Du); } /* indirect call */
    }

loc_00281313: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0028132C; /* jne: not equal / not zero */

loc_0028131A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C858); PUSH32(esp, 0x00281325u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028131Fu); } /* indirect call */
    }

loc_00281325: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00281337; /* jl: less (signed <) */

loc_00281329: ;
    eax = MEM32(ebp + -8);

loc_0028132C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00281337; /* jl: less (signed <) */

loc_00281330: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_002812F7;

loc_00281337: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0028134C; /* jne: not equal / not zero */

loc_00281347: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_0028134C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281352u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281352: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281354: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0028135B
 * Original: 0x0028135B - 0x002813DF (132 bytes, 56 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0028135B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028135B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C804); PUSH32(esp, 0x00281376u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281370u); } /* indirect call */
    }

loc_00281376: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00281384; /* jge: greater or equal (signed >=) */

loc_0028137A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281380u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281380: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002813DB;

loc_00281384: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, esi);
    esi = MEM32(0x31C77C);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 8);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x002813A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002813A6u); } /* indirect call */
    }

loc_002813A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002813D2; /* jl: less (signed <) */

loc_002813AC: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 8);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x002813C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002813C7u); } /* indirect call */
    }

loc_002813C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002813D2; /* jl: less (signed <) */

loc_002813CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002813DA;

loc_002813D2: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002813D8u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_002813D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002813DA: ;
    POP32(esp, esi);

loc_002813DB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002813DF
 * Original: 0x002813DF - 0x002814D9 (250 bytes, 104 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002813DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002813DF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002813F6; /* je: equal / zero */

loc_002813EF: ;
    edi = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    goto loc_002813FE;

loc_002813F6: ;
    eax = MEM32(ebp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = eax;
    edi = edx;

loc_002813FE: ;
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00281460; /* je: equal / zero */

loc_00281406: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00281432; /* je: equal / zero */

loc_00281409: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00281432; /* jne: not equal / not zero */

loc_0028140C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -72;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C804); PUSH32(esp, 0x00281421u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028141Bu); } /* indirect call */
    }

loc_00281421: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0028144B; /* jl: less (signed <) */

loc_00281425: ;
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -28);
    goto loc_0028145C;

loc_00281432: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C804); PUSH32(esp, 0x00281447u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281441u); } /* indirect call */
    }

loc_00281447: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00281456; /* jge: greater or equal (signed >=) */

loc_0028144B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281451u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281451: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002814D2;

loc_00281456: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(esi)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + esi;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);

loc_0028145C: ;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_00281465;

loc_00281460: ;
    MEM32(ebp + -8) = esi;
    eax = edi;

loc_00281465: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0028147B; /* jg: greater (signed >) */

loc_0028146C: ;
    if (CMP_L(_fas, _fbs)) goto loc_00281474; /* jl: less (signed <) */

loc_0028146E: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_AE(_fa, _fb)) goto loc_0028147B; /* jae: above or equal (unsigned >=) */

loc_00281474: ;
    PUSH32(esp, 0x83);
    goto loc_00281488;

loc_0028147B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0028148F; /* jne: not equal / not zero */

loc_0028147F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0028148F; /* je: equal / zero */

loc_00281486: ;
    PUSH32(esp, 0x57);

loc_00281488: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028148Du); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_0028148D: ;
    goto loc_00281451;

loc_0028148F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C77C); PUSH32(esp, 0x002814A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028149Eu); } /* indirect call */
    }

loc_002814A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002814C3; /* jl: less (signed <) */

loc_002814A8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002814B1; /* je: equal / zero */

loc_002814AC: ;
    eax = MEM32(ebp + -4);
    MEM32(ebx) = eax;

loc_002814B1: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002814BE; /* jne: not equal / not zero */

loc_002814B7: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002814BEu); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_002814BE: ;
    eax = MEM32(ebp + -8);
    goto loc_002814D2;

loc_002814C3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002814C9u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_002814C9: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002814D2; /* je: equal / zero */

loc_002814D0: ;
    MEM32(ebx) = eax;

loc_002814D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002814D9
 * Original: 0x002814D9 - 0x002815A1 (200 bytes, 79 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002814D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002814D9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00281543; /* je: equal / zero */

loc_002814E7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00281518; /* je: equal / zero */

loc_002814EA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00281518; /* jne: not equal / not zero */

loc_002814ED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -72;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C804); PUSH32(esp, 0x00281502u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002814FCu); } /* indirect call */
    }

loc_00281502: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00281595; /* jl: less (signed <) */

loc_0028150A: ;
    ecx = MEM32(ebp + -32);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 0xC))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -28);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_00281549;

loc_00281518: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C804); PUSH32(esp, 0x0028152Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281527u); } /* indirect call */
    }

loc_0028152D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00281595; /* jl: less (signed <) */

loc_00281531: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_00281549;

loc_00281543: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);

loc_00281549: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00281565; /* jg: greater (signed >) */

loc_00281553: ;
    if (CMP_L(_fas, _fbs)) goto loc_00281559; /* jl: less (signed <) */

loc_00281555: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_AE(_fa, _fb)) goto loc_00281565; /* jae: above or equal (unsigned >=) */

loc_00281559: ;
    PUSH32(esp, 0x83);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281563u); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_00281563: ;
    goto loc_0028159B;

loc_00281565: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C77C); PUSH32(esp, 0x0028157Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281574u); } /* indirect call */
    }

loc_0028157A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00281595; /* jl: less (signed <) */

loc_0028157E: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00281590; /* je: equal / zero */

loc_00281585: ;
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;

loc_00281590: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0028159D;

loc_00281595: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028159Bu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_0028159B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0028159D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002815A1
 * Original: 0x002815A1 - 0x002815C8 (39 bytes, 18 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002815A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002815A1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C85C); PUSH32(esp, 0x002815B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002815ADu); } /* indirect call */
    }

loc_002815B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002815BC; /* jl: less (signed <) */

loc_002815B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002815C4;

loc_002815BC: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002815C2u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_002815C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002815C4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002815C8
 * Original: 0x002815C8 - 0x00281606 (62 bytes, 26 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002815C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002815C8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C804); PUSH32(esp, 0x002815E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002815DDu); } /* indirect call */
    }

loc_002815E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002815F1; /* jge: greater or equal (signed >=) */

loc_002815E7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002815EDu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_002815ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00281602;

loc_002815F1: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00281602: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00281606
 * Original: 0x00281606 - 0x00281641 (59 bytes, 24 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281606(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281606: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281617u); RECOMP_ABI_CALL(0x002815C8u, sub_002815C8); /* call 0x002815C8 */

loc_00281617: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281636; /* je: equal / zero */

loc_0028161B: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281627; /* je: equal / zero */

loc_00281622: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;

loc_00281627: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028163A; /* jne: not equal / not zero */

loc_0028162D: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281634u); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_00281634: ;
    goto loc_0028163A;

loc_00281636: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0028163A: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00281641
 * Original: 0x00281641 - 0x00281660 (31 bytes, 10 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281641(void)
{

loc_00281641: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x31C868));
    PUSH32(esp, 0x0028165Du); RECOMP_ABI_CALL(0x00284E58u, sub_00284E58); /* call 0x00284E58 */

loc_0028165D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00281660
 * Original: 0x00281660 - 0x00281745 (229 bytes, 94 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281660: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    _fb = (uint32_t)(0x290) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x290;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x78);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0028167B; /* jne: not equal / not zero */

loc_00281678: ;
    eax = MEM32(esi + 0x24);

loc_0028167B: ;
    ecx = ebp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281685u); RECOMP_ABI_CALL(0x00281641u, sub_00281641); /* call 0x00281641 */

loc_00281685: ;
    eax = MEM32(esi + 0x18);
    edi = 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebx = edi;
    if (CMP_AE(_fa, _fb)) goto loc_00281695; /* jae: above or equal (unsigned >=) */

loc_00281693: ;
    ebx = eax;

loc_00281695: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002816A4u); RECOMP_ABI_CALL(0x002848C5u, sub_002848C5); /* call 0x002848C5 */

loc_002816A4: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFECu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002816B5u); RECOMP_ABI_CALL(0x00284927u, sub_00284927); /* call 0x00284927 */

loc_002816B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281715; /* je: equal / zero */

loc_002816BC: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00281715; /* jbe: below or equal (unsigned <=) */

loc_002816C3: ;
    edi = esi + -136;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281715; /* je: equal / zero */

loc_002816CD: ;
    ebx = 0x200;
    goto loc_002816D6;

loc_002816D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002816D6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_002816DE; /* jae: above or equal (unsigned >=) */

loc_002816DC: ;
    esi = edi;

loc_002816DE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp + -552;
    PUSH32(esp, ecx);
    ecx = ebp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    { uint32_t _icall_target = MEM32(0x31C800); PUSH32(esp, 0x002816F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002816F1u); } /* indirect call */
    }

loc_002816F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00281734; /* jl: less (signed <) */

loc_002816FB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00281737; /* jne: not equal / not zero */

loc_00281700: ;
    PUSH32(esp, esi);
    eax = ebp + -552;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281711u); RECOMP_ABI_CALL(0x00284927u, sub_00284927); /* call 0x00284927 */

loc_00281711: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_002816D4; /* jne: not equal / not zero */

loc_00281715: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    eax = ebp + 0x4C;
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281727u); RECOMP_ABI_CALL(0x0028492Cu, sub_0028492C); /* call 0x0028492C */

loc_00281727: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028172A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x68;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_00281734: ;
    PUSH32(esp, eax);
    goto loc_0028173C;

loc_00281737: ;
    PUSH32(esp, 0xC0000011u);

loc_0028173C: ;
    PUSH32(esp, 0x00281741u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281741: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0028172A;

}

/**
 * sub_00281745
 * Original: 0x00281745 - 0x00281826 (225 bytes, 98 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281745(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281745: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(0x31C800);
    eax = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00281772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281770u); } /* indirect call */
    }

loc_00281772: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002817B3; /* jl: less (signed <) */

loc_00281776: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002817AE; /* jne: not equal / not zero */

loc_0028177C: ;
    esi = MEM32(esi + 0x18);
    eax = 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0028178A; /* jbe: below or equal (unsigned <=) */

loc_00281788: ;
    esi = eax;

loc_0028178A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esi + -28;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x002817A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002817A0u); } /* indirect call */
    }

loc_002817A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002817B3; /* jl: less (signed <) */

loc_002817A6: ;
    eax = esi + -28;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002817BD; /* je: equal / zero */

loc_002817AE: ;
    eax = 0xC0000010u;

loc_002817B3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002817B9u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_002817B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0028181F;

loc_002817BD: ;
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46534358) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), 0x46534358 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002817D2; /* je: equal / zero */

loc_002817C9: ;
    PUSH32(esp, 0xD);

loc_002817CB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002817D0u); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_002817D0: ;
    goto loc_002817B9;

loc_002817D2: ;
    ecx = 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002817F0; /* jae: above or equal (unsigned >=) */

loc_002817DB: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esi + edx;
    esi = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_002817F0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028181C; /* je: equal / zero */

loc_002817F5: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281805u); RECOMP_ABI_CALL(0x00281660u, sub_00281660); /* call 0x00281660 */

loc_00281805: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002817B9; /* je: equal / zero */

loc_00281809: ;
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = ebp + -36;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_0028181C; /* je: equal / zero */

loc_00281818: ;
    PUSH32(esp, 5);
    goto loc_002817CB;

loc_0028181C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028181F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00281826
 * Original: 0x00281826 - 0x002819AF (393 bytes, 130 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281826(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281826: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = ecx;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ~eax;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0028199F; /* je: equal / zero */

loc_00281857: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028199F; /* je: equal / zero */

loc_00281860: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028199F; /* jl: less (signed <) */

loc_0028186A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028199F; /* jl: less (signed <) */

loc_00281874: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */

loc_00281877: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00281980; /* je: equal / zero */

loc_0028187D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    ecx = 0x10000;
    if (CMP_EQ(_fa, _fb)) goto loc_0028197B; /* je: equal / zero */

loc_0028188B: ;
    edx = MEM32(ebp + 0xC);
    SET_LO8(edx, MEM8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281969; /* je: equal / zero */

loc_00281898: ;
    esi = MEM32(ebp + 0x14);
    SET_LO8(ebx, MEM8(esi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281976; /* je: equal / zero */

loc_002818A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO16(edx, ZX8(LO8(edx)));
    SET_LO16(ebx, ZX8(LO8(ebx)));
    edi = ZX16(LO16(edx));
    esi = MEM32(edi * 4 + 0x336170);
    ebx = ZX16(LO16(ebx));
    edx = MEM32(ebx * 4 + 0x336170);
    if (CMP_EQ(_fa, _fb)) goto loc_00281915; /* je: equal / zero */

loc_002818C5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002818FE; /* je: equal / zero */

loc_002818C9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002818E5; /* je: equal / zero */

loc_002818CD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002818DA; /* jae: above or equal (unsigned >=) */

loc_002818D1: ;
    MEM32(ebp + -4) = 7;
    goto loc_00281953;

loc_002818DA: ;
    if (CMP_BE(_fa, _fb)) goto loc_00281953; /* jbe: below or equal (unsigned <=) */

loc_002818DC: ;
    MEM32(ebp + -4) = 0xB;
    goto loc_00281953;

loc_002818E5: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002818F2; /* jne: not equal / not zero */

loc_002818EB: ;
    MEM32(ebp + -4) = 4;

loc_002818F2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002818F6: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0028195F;

loc_002818FE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00281915; /* je: equal / zero */

loc_00281902: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028190F; /* jne: not equal / not zero */

loc_00281908: ;
    MEM32(ebp + -4) = 8;

loc_0028190F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 2;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00281959;

loc_00281915: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281928; /* je: equal / zero */

loc_0028191B: ;
    ecx = 0x20000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002818F6; /* jne: not equal / not zero */

loc_00281924: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281959; /* jne: not equal / not zero */

loc_00281928: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028194D; /* je: equal / zero */

loc_0028192E: ;
    ecx = 0x100000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00281940; /* je: equal / zero */

loc_00281937: ;
    esi = edi + 0x20;
    esi = esi | 0x80000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00281940: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028194D; /* je: equal / zero */

loc_00281944: ;
    edx = ebx + 0x20;
    edx = edx | 0x80000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0028194D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00281971; /* jb: below (unsigned <) */

loc_00281951: ;
    if (CMP_A(_fa, _fb)) goto loc_00281976; /* ja: above (unsigned >) */

loc_00281953: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00281959: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0028195F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    goto loc_00281877;

loc_00281969: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281985; /* je: equal / zero */

loc_00281971: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002819A8;

loc_00281976: ;
    PUSH32(esp, 3);
    POP32(esp, eax);
    goto loc_002819A8;

loc_0028197B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00281991; /* jne: not equal / not zero */

loc_00281980: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00281991; /* jne: not equal / not zero */

loc_00281985: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax * 4 + 0x336570);
    goto loc_002819A8;

loc_00281991: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + eax + 1;
    goto loc_002819A8;

loc_0028199F: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002819A6u); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_002819A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002819A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002819AF
 * Original: 0x002819AF - 0x002819D7 (40 bytes, 11 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002819AF(void)
{

loc_002819AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C784); PUSH32(esp, 0x002819BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002819B9u); } /* indirect call */
    }

loc_002819BF: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 4) = esi;
    MEM32(eax) = 0xFFFFFFFCu;
    MEM32(eax + 8) = 0x80;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002819D7
 * Original: 0x002819D7 - 0x00281A05 (46 bytes, 17 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002819D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002819D7: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002819E4; /* jne: not equal / not zero */

loc_002819E0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00281A02;

loc_002819E4: ;
    ecx = 0x2710;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx + 4) = edx;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    eax = ecx;

loc_00281A02: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00281A05
 * Original: 0x00281A05 - 0x00281A66 (97 bytes, 37 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281A05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281A05: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281A23; /* je: equal / zero */

loc_00281A11: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281A21u); RECOMP_ABI_CALL(0x002819AFu, sub_002819AF); /* call 0x002819AF */

loc_00281A21: ;
    goto loc_00281A25;

loc_00281A23: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281A25: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C86C); PUSH32(esp, 0x00281A3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281A36u); } /* indirect call */
    }

loc_00281A3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00281A5A; /* jl: less (signed <) */

loc_00281A40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00281A4E; /* jne: not equal / not zero */

loc_00281A47: ;
    PUSH32(esp, 0xB7);
    goto loc_00281A50;

loc_00281A4E: ;
    PUSH32(esp, 0);

loc_00281A50: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281A55u); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_00281A55: ;
    eax = MEM32(ebp + 0x14);
    goto loc_00281A62;

loc_00281A5A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281A60u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281A60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281A62: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00281A66
 * Original: 0x00281A66 - 0x00281A86 (32 bytes, 12 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00281A66(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281A66: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(0x31C870); PUSH32(esp, 0x00281A72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281A6Cu); } /* indirect call */
    }

loc_00281A72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00281A7B; /* jl: less (signed <) */

loc_00281A76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00281A83;

loc_00281A7B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281A81u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281A81: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281A83: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00281A86
 * Original: 0x00281A86 - 0x00281AE1 (91 bytes, 34 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281A86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281A86: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281AA4; /* je: equal / zero */

loc_00281A92: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281AA2u); RECOMP_ABI_CALL(0x002819AFu, sub_002819AF); /* call 0x002819AF */

loc_00281AA2: ;
    goto loc_00281AA6;

loc_00281AA4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281AA6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C874); PUSH32(esp, 0x00281AB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281AB1u); } /* indirect call */
    }

loc_00281AB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00281AD5; /* jl: less (signed <) */

loc_00281ABB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00281AC9; /* jne: not equal / not zero */

loc_00281AC2: ;
    PUSH32(esp, 0xB7);
    goto loc_00281ACB;

loc_00281AC9: ;
    PUSH32(esp, 0);

loc_00281ACB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281AD0u); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_00281AD0: ;
    eax = MEM32(ebp + 0x14);
    goto loc_00281ADD;

loc_00281AD5: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281ADBu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281ADB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281ADD: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00281AE1
 * Original: 0x00281AE1 - 0x00281B07 (38 bytes, 13 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00281AE1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281AE1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(0x31C878); PUSH32(esp, 0x00281AF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281AEDu); } /* indirect call */
    }

loc_00281AF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00281AFC; /* jl: less (signed <) */

loc_00281AF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00281B04;

loc_00281AFC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281B02u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281B02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281B04: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00281B07
 * Original: 0x00281B07 - 0x00281B5F (88 bytes, 33 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281B07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281B07: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281B25; /* je: equal / zero */

loc_00281B13: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281B23u); RECOMP_ABI_CALL(0x002819AFu, sub_002819AF); /* call 0x002819AF */

loc_00281B23: ;
    goto loc_00281B27;

loc_00281B25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281B27: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C87C); PUSH32(esp, 0x00281B35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281B2Fu); } /* indirect call */
    }

loc_00281B35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00281B53; /* jl: less (signed <) */

loc_00281B39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00281B47; /* jne: not equal / not zero */

loc_00281B40: ;
    PUSH32(esp, 0xB7);
    goto loc_00281B49;

loc_00281B47: ;
    PUSH32(esp, 0);

loc_00281B49: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281B4Eu); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_00281B4E: ;
    eax = MEM32(ebp + 0x10);
    goto loc_00281B5B;

loc_00281B53: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281B59u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281B59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281B5B: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00281B5F
 * Original: 0x00281B5F - 0x00281B7F (32 bytes, 12 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00281B5F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281B5F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(0x31C880); PUSH32(esp, 0x00281B6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281B65u); } /* indirect call */
    }

loc_00281B6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00281B74; /* jl: less (signed <) */

loc_00281B6F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00281B7C;

loc_00281B74: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281B7Au); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281B7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281B7C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00281B7F
 * Original: 0x00281B7F - 0x00281BC3 (68 bytes, 28 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281B7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281B7F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281B91u); RECOMP_ABI_CALL(0x002819D7u, sub_002819D7); /* call 0x002819D7 */

loc_00281B91: ;
    esi = eax;

loc_00281B93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C884); PUSH32(esp, 0x00281BA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281B9Cu); } /* indirect call */
    }

loc_00281BA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00281BB5; /* jl: less (signed <) */

loc_00281BA6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281BBE; /* je: equal / zero */

loc_00281BAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281B93; /* je: equal / zero */

loc_00281BB3: ;
    goto loc_00281BBE;

loc_00281BB5: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281BBBu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281BBB: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00281BBE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00281BC3
 * Original: 0x00281BC3 - 0x00281C43 (128 bytes, 48 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281BC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281BC3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00281BE3; /* jbe: below or equal (unsigned <=) */

loc_00281BD4: ;
    PUSH32(esp, 0xC000000Du);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281BDEu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281BDE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00281C3F;

loc_00281BE3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    edi = ebp + -264;
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
    PUSH32(esp, 0x00281BFDu); RECOMP_ABI_CALL(0x002819D7u, sub_002819D7); /* call 0x002819D7 */

loc_00281BFD: ;
    esi = (uint32_t)(int32_t)SMEM8(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    edi = eax;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_00281C0B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -264;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C888); PUSH32(esp, 0x00281C20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281C1Au); } /* indirect call */
    }

loc_00281C20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00281C33; /* jl: less (signed <) */

loc_00281C24: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281C3C; /* je: equal / zero */

loc_00281C2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281C0B; /* je: equal / zero */

loc_00281C31: ;
    goto loc_00281C3C;

loc_00281C33: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281C39u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281C39: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00281C3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00281C3F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00281C43
 * Original: 0x00281C43 - 0x00281C95 (82 bytes, 32 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281C43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281C43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281C55u); RECOMP_ABI_CALL(0x002819D7u, sub_002819D7); /* call 0x002819D7 */

loc_00281C55: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00281C68; /* jne: not equal / not zero */

loc_00281C5B: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = 0x80000000u;
    esi = ebp + -8;

loc_00281C68: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(0x31C88C); PUSH32(esp, 0x00281C74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281C6Eu); } /* indirect call */
    }

loc_00281C74: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281C81; /* je: equal / zero */

loc_00281C7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281C68; /* je: equal / zero */

loc_00281C81: ;
    ecx = 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00281C8F; /* jne: not equal / not zero */

loc_00281C8B: ;
    eax = ecx;
    goto loc_00281C91;

loc_00281C8F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00281C91: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00281C95
 * Original: 0x00281C95 - 0x00281CA7 (18 bytes, 5 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281C95(void)
{

loc_00281C95: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00281CA4u); RECOMP_ABI_CALL(0x00281B7Fu, sub_00281B7F); /* call 0x00281B7F */

loc_00281CA4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00281CA7
 * Original: 0x00281CA7 - 0x00281CC1 (26 bytes, 7 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281CA7(void)
{

loc_00281CA7: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x00281CBEu); RECOMP_ABI_CALL(0x00281BC3u, sub_00281BC3); /* call 0x00281BC3 */

loc_00281CBE: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00281CC1
 * Original: 0x00281CC1 - 0x00281CCF (14 bytes, 4 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281CC1(void)
{

loc_00281CC1: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00281CCCu); RECOMP_ABI_CALL(0x00281C43u, sub_00281C43); /* call 0x00281C43 */

loc_00281CCC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00281CCF
 * Original: 0x00281CCF - 0x00281CEA (27 bytes, 9 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281CCF(void)
{

loc_00281CCF: ;
    PUSH32(esp, 0xFFFFFFCDu);
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6545C0);
    PUSH32(esp, ecx);
    eax = 0xB5659000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6545E0);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x00281CE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281CE3u); } /* indirect call */
    }

loc_00281CE9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00281CEA
 * Original: 0x00281CEA - 0x00281CFC (18 bytes, 4 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281CEA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281CEA: ;
    _fa = (uint32_t)(MEM32(0x654608)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x654608), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281CF9; /* je: equal / zero */

loc_00281CF3: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C890); PUSH32(esp, 0x00281CF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281CF3u); } /* indirect call */
    }

loc_00281CF9: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00281CFC
 * Original: 0x00281CFC - 0x00281D70 (116 bytes, 34 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281CFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281CFC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x281CEA);
    PUSH32(esp, 0x6545C0);
    { uint32_t _icall_target = MEM32(0x31C7A8); PUSH32(esp, 0x00281D14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281D0Eu); } /* indirect call */
    }

loc_00281D14: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x6545E0);
    { uint32_t _icall_target = MEM32(0x31C7A4); PUSH32(esp, 0x00281D21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281D1Bu); } /* indirect call */
    }

loc_00281D21: ;
    eax = MEM32(0x31C83C);
    MEM32(0x654608) = MEM32(0x654608) & 0;
    _fa = (uint32_t)(MEM32(0x654608)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x65460C) = MEM32(0x65460C) & 0;
    _fa = (uint32_t)(MEM32(0x65460C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281D69; /* jne: not equal / not zero */

loc_00281D39: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281D4Eu); RECOMP_ABI_CALL(0x00284A72u, sub_00284A72); /* call 0x00284A72 */

loc_00281D4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00281D5F; /* jne: not equal / not zero */

loc_00281D52: ;
    eax = MEM32(ebp + -4);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x654608) = eax;
    goto loc_00281D69;

loc_00281D5F: ;
    MEM32(0x65460C) = 1;

loc_00281D69: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281D6Eu); RECOMP_ABI_CALL(0x00281CCFu, sub_00281CCF); /* call 0x00281CCF */

loc_00281D6E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00281D70
 * Original: 0x00281D70 - 0x00281DD7 (103 bytes, 41 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x31C784);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00281D88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281D86u); } /* indirect call */
    }

loc_00281D88: ;
    esi = MEM32(0x1011C);
    edi = MEM32(0x10120);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00281DBB;

loc_00281D9B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00281DA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281DA2u); } /* indirect call */
    }

loc_00281DA4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8A8); PUSH32(esp, 0x00281DB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281DAEu); } /* indirect call */
    }

loc_00281DB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00281DD3; /* jne: not equal / not zero */

loc_00281DB8: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x38;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00281DBB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00281D9B; /* jb: below (unsigned <) */

loc_00281DBF: ;
    PUSH32(esp, 0x490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281DC9u); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_00281DC9: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00281DCC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_00281DD3: ;
    eax = edi;
    goto loc_00281DCC;

}

/**
 * sub_00281DD7
 * Original: 0x00281DD7 - 0x00281DF8 (33 bytes, 13 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281DD7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281DD7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8AC); PUSH32(esp, 0x00281DE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281DDDu); } /* indirect call */
    }

loc_00281DE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00281DF1; /* jge: greater or equal (signed >=) */

loc_00281DE7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281DEDu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281DED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00281DF4;

loc_00281DF1: ;
    eax = MEM32(esi + 4);

loc_00281DF4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00281DF8
 * Original: 0x00281DF8 - 0x00281E16 (30 bytes, 11 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281DF8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281DF8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x31C8B0); PUSH32(esp, 0x00281E02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281DFCu); } /* indirect call */
    }

loc_00281E02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00281E10; /* jge: greater or equal (signed >=) */

loc_00281E06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00281E0Cu); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281E0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00281E13;

loc_00281E10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00281E13: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00281E16
 * Original: 0x00281E16 - 0x00281E20 (10 bytes, 3 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281E16(void)
{

loc_00281E16: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00281E20
 * Original: 0x00281E20 - 0x00281E45 (37 bytes, 20 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281E38u); RECOMP_ABI_CALL(0x00284E5Eu, sub_00284E5E); /* call 0x00284E5E */

loc_00281E38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00281E41; /* jl: less (signed <) */

loc_00281E3C: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00281E41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00281E45
 * Original: 0x00281E45 - 0x00281F39 (244 bytes, 91 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281E45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281E45: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C784); PUSH32(esp, 0x00281E58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281E52u); } /* indirect call */
    }

loc_00281E58: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 3);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    { uint32_t _icall_target = MEM32(0x31C780); PUSH32(esp, 0x00281E8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281E84u); } /* indirect call */
    }

loc_00281E8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00281EAC; /* jge: greater or equal (signed >=) */

loc_00281E8E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281E94u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281E94: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281E99u); RECOMP_ABI_CALL(0x0028047Du, sub_0028047D); /* call 0x0028047D */

loc_00281E99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00281EA5; /* jne: not equal / not zero */

loc_00281E9E: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281EA5u); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_00281EA5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00281F35;

loc_00281EAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C840); PUSH32(esp, 0x00281EC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281EBCu); } /* indirect call */
    }

loc_00281EC2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x00281ECDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281EC7u); } /* indirect call */
    }

loc_00281ECD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00281EDB; /* jge: greater or equal (signed >=) */

loc_00281ED1: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281ED7u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00281ED7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00281F34;

loc_00281EDB: ;
    esi = MEM32(ebp + -36);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + -32));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, MEM32(ebp + -44));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281EF3u); RECOMP_ABI_CALL(0x0028A9A0u, sub_0028A9A0); /* call 0x0028A9A0 */

loc_00281EF3: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -48));
    ebx = eax;
    PUSH32(esp, MEM32(ebp + -52));
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00281F05u); RECOMP_ABI_CALL(0x0028A9A0u, sub_0028A9A0); /* call 0x0028A9A0 */

loc_00281F05: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281F14; /* je: equal / zero */

loc_00281F0C: ;
    esi = MEM32(ebp + -4);
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = esi;

loc_00281F14: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281F20; /* je: equal / zero */

loc_00281F1B: ;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;

loc_00281F20: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00281F2F; /* je: equal / zero */

loc_00281F27: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;

loc_00281F2F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);

loc_00281F34: ;
    POP32(esp, esi);

loc_00281F35: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00281F39
 * Original: 0x00281F39 - 0x00282164 (555 bytes, 184 insns)
 * Folder: xdk/xapi (between: 0x002807D4 and 0x00282164)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00281F39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00281F39: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x22C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x22C));
    esp = esp - 0x22C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 3);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0100000u);
    eax = ebp + -8;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + -44) = edi;
    MEM32(ebp + -36) = 0x40;
    MEM32(ebp + -40) = 0x31CDA0;
    { uint32_t _icall_target = MEM32(0x31C780); PUSH32(esp, 0x00281F7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281F76u); } /* indirect call */
    }

loc_00281F7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028215C; /* jl: less (signed <) */

loc_00281F87: ;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -556;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + -24) = 0x800;
    MEM32(ebp + -20) = edi;
    { uint32_t _icall_target = MEM32(0x31C800); PUSH32(esp, 0x00281FB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00281FABu); } /* indirect call */
    }

loc_00281FB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00282153; /* jl: less (signed <) */

loc_00281FBC: ;
    eax = MEM32(0x31C8B8);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = 0x97315286u;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -556)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -556), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = 0xAA550000u;
    if (CMP_NE(_fa, _fb)) goto loc_00281FE6; /* jne: not equal / not zero */

loc_00281FD8: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00281FE6; /* jne: not equal / not zero */

loc_00281FDD: ;
    _fa = (uint32_t)(MEM32(ebp + -552)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -552), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0028200A; /* je: equal / zero */

loc_00281FE6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x80;
    edi = ebp + -556;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + -556) = ebx;
    MEM32(ebp + -552) = 2;
    MEM32(ebp + -52) = esi;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0028200A: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;
    eax = MEM32(0x31C8B8);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x29 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00282022; /* jbe: below or equal (unsigned <=) */

loc_0028201F: ;
    PUSH32(esp, 0x29);
    POP32(esp, ecx);

loc_00282022: ;
    ebx = ecx + -1;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00282068; /* jbe: below or equal (unsigned <=) */

loc_0028202E: ;
    ebx = ebp + -548;

loc_00282034: ;
    esi = MEM32(ebp + -16);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00282041; /* jne: not equal / not zero */

loc_0028203B: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0028204B; /* jne: not equal / not zero */

loc_00282041: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00282034; /* jb: below (unsigned <) */

loc_00282049: ;
    goto loc_00282065;

loc_0028204B: ;
    edx = eax + eax * 2;
    edi = MEM32(ebp + edx * 4 + -544);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(3)) >> 32) & 1);
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    if ((_fa != 0)) goto loc_002820B8; /* jne: not equal / not zero */

loc_00282065: ;
    ebx = MEM32(ebp + -4);

loc_00282068: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_002820A9; /* jbe: below or equal (unsigned <=) */

loc_00282070: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -544;

loc_0028207A: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00282087; /* je: equal / zero */

loc_00282080: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00282092; /* je: equal / zero */

loc_00282087: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0028207A; /* jb: below (unsigned <) */

loc_00282092: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0028209D; /* jne: not equal / not zero */

loc_00282097: ;
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(3)) >> 32) & 1);
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0028209D: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00282070; /* jb: below (unsigned <) */

loc_002820A5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002820BB; /* jne: not equal / not zero */

loc_002820A9: ;
    eax = ebx + ebx * 2;
    edi = MEM32(ebp + eax * 4 + -544);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(3)) >> 32) & 1);
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002820BB;

loc_002820B8: ;
    ebx = MEM32(ebp + -4);

loc_002820BB: ;
    eax = ecx + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002820C5; /* jb: below (unsigned <) */

loc_002820C2: ;
    edi = ecx + 2;

loc_002820C5: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_002820ED; /* jae: above or equal (unsigned >=) */

loc_002820D7: ;
    eax = edx + edx * 2;
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ebp + -548;
    PUSH32(esp, eax);
    eax = ebp + -536;
    goto loc_00282106;

loc_002820ED: ;
    if (CMP_BE(_fa, _fb)) goto loc_0028210F; /* jbe: below or equal (unsigned <=) */

loc_002820EF: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + ebx * 2;
    eax = edx + edx * 2;
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebp + eax * 4 + -548;
    PUSH32(esp, ecx);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);

loc_00282106: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028210Cu); RECOMP_ABI_CALL(0x0028AA50u, sub_0028AA50); /* call 0x0028AA50 */

loc_0028210C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0028210F: ;
    ecx = MEM32(ebp + -16);
    eax = esi + esi * 2;
    eax = ebp + eax * 4 + -548;
    MEM32(eax) = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xFFFFFFFDu)) >> 32) & 1);
    edi = edi + 0xFFFFFFFDu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax + 4) = edi;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(eax + 8) = edx;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -556;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x31C7FC); PUSH32(esp, 0x00282151u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0028214Bu); } /* indirect call */
    }

loc_00282151: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00282153: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x31C778); PUSH32(esp, 0x0028215Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00282156u); } /* indirect call */
    }

loc_0028215C: ;
    eax = MEM32(ebp + -12);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00282164
 * Original: 0x00282164 - 0x00282269 (261 bytes, 97 insns)
 * Folder: xdk/xapi (string: \Device\Harddisk0\Partition%d\)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00282164(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00282164: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00282180u); RECOMP_ABI_CALL(0x00281F39u, sub_00281F39); /* call 0x00281F39 */

loc_00282180: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00282258; /* jl: less (signed <) */

loc_0028218A: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00282197; /* jne: not equal / not zero */

loc_0028218F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0028219E; /* je: equal / zero */

loc_00282197: ;
    MEM32(ebp + 8) = 1;

loc_0028219E: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(0x10124);
    PUSH32(esp, 0x31CD80);
    eax = ebp + -276;
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x104);
    esi = 0x4000;
    PUSH32(esp, eax);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002821C7u); RECOMP_ABI_CALL(0x0028A699u, sub_0028A699); /* call 0x0028A699 */

loc_002821C7: ;
    edi = MEM32(0x31C784);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -276;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x002821DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002821DBu); } /* indirect call */
    }

loc_002821DD: ;
    eax = ebp + -276;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x002821EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002821E8u); } /* indirect call */
    }

loc_002821EA: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) - 1;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00282203; /* je: equal / zero */

loc_002821F3: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002821FDu); RECOMP_ABI_CALL(0x00284A94u, sub_00284A94); /* call 0x00284A94 */

loc_002821FD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00282260; /* je: equal / zero */

loc_00282203: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0028220Du); RECOMP_ABI_CALL(0x00280675u, sub_00280675); /* call 0x00280675 */

loc_0028220D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00282237; /* jge: greater or equal (signed >=) */

loc_00282213: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00282233; /* jne: not equal / not zero */

loc_00282219: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00282223u); RECOMP_ABI_CALL(0x00284A94u, sub_00284A94); /* call 0x00284A94 */

loc_00282223: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00282233; /* je: equal / zero */

loc_00282227: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00282231u); RECOMP_ABI_CALL(0x00280675u, sub_00280675); /* call 0x00280675 */

loc_00282231: ;
    ebx = eax;

loc_00282233: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00282248; /* jl: less (signed <) */

loc_00282237: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31CD78);
    { uint32_t _icall_target = MEM32(0x31C7D8); PUSH32(esp, 0x00282246u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00282240u); } /* indirect call */
    }

loc_00282246: ;
    ebx = eax;

loc_00282248: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00282260; /* jne: not equal / not zero */

loc_00282255: ;
    PUSH32(esp, ebx);
    goto loc_0028225B;

loc_00282258: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);

loc_0028225B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00282260u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00282260: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
