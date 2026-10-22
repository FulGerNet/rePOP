/**
 * PoP Warrior Within Xbox retail - compiler, chunk 4
 * Compiler-generated C++ exception unwinding and global set-up (.text$x, .text$yc/yd)
 * Functions: 84 (0x0048EAF0 - 0x0048F43E)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_0048EAF0
 * Original: 0x0048EAF0 - 0x0048EAFD (13 bytes, 5 insns)
 * Folder: compiler (between: 0x0048EA50 and 0x0048EC80)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EAF0(void)
{

loc_0048EAF0: ;
    PUSH32(esp, esi);
    esi = 0x945620;
    PUSH32(esp, 0x0048EAFBu); RECOMP_ABI_CALL(0x000C5B00u, sub_000C5B00); /* call 0x000C5B00 */

loc_0048EAFB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EB00
 * Original: 0x0048EB00 - 0x0048EB11 (17 bytes, 3 insns)
 * Folder: compiler (between: 0x0048EA50 and 0x0048EC80)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EB00(void)
{

loc_0048EB00: ;
    xmm0 = XMM_SCALAR(MEMF(0x58667C)); /* movss */
    MEMF(0x9456B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048EB20
 * Original: 0x0048EB20 - 0x0048EB38 (24 bytes, 5 insns)
 * Folder: compiler (between: 0x0048EA50 and 0x0048EC80)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EB20(void)
{

loc_0048EB20: ;
    xmm0 = XMM_SCALAR(MEMF(0x9456B8)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x9456BC) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048EB40
 * Original: 0x0048EB40 - 0x0048EB81 (65 bytes, 9 insns)
 * Folder: compiler (between: 0x0048EA50 and 0x0048EC80)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EB40(void)
{

loc_0048EB40: ;
    xmm0 = XMM_SCALAR(MEMF(0x9456B8)); /* movss */
    MEMF(0x9456C0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x9456BC)); /* movss */
    MEMF(0x9456C4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x57EC30)); /* movss */
    MEMF(0x9456C8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586A10)); /* movss */
    MEMF(0x9456CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048EB90
 * Original: 0x0048EB90 - 0x0048EBB1 (33 bytes, 5 insns)
 * Folder: compiler (between: 0x0048EA50 and 0x0048EC80)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EB90(void)
{

loc_0048EB90: ;
    xmm0 = XMM_SCALAR(MEMF(0x586684)); /* movss */
    MEMF(0x5AABF4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586634)); /* movss */
    MEMF(0x5AABF8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048EBC0
 * Original: 0x0048EBC0 - 0x0048EBD1 (17 bytes, 3 insns)
 * Folder: compiler (between: 0x0048EA50 and 0x0048EC80)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EBC0(void)
{

loc_0048EBC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x58667C)); /* movss */
    MEMF(0x9456D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048EBE0
 * Original: 0x0048EBE0 - 0x0048EBF8 (24 bytes, 5 insns)
 * Folder: compiler (between: 0x0048EA50 and 0x0048EC80)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EBE0(void)
{

loc_0048EBE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x9456D0)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x9456D4) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048EC00
 * Original: 0x0048EC00 - 0x0048EC41 (65 bytes, 9 insns)
 * Folder: compiler (between: 0x0048EA50 and 0x0048EC80)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EC00(void)
{

loc_0048EC00: ;
    xmm0 = XMM_SCALAR(MEMF(0x9456D0)); /* movss */
    MEMF(0x9477F0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x9456D4)); /* movss */
    MEMF(0x9477F4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x57EC30)); /* movss */
    MEMF(0x9477F8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586A10)); /* movss */
    MEMF(0x9477FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048EC50
 * Original: 0x0048EC50 - 0x0048EC71 (33 bytes, 5 insns)
 * Folder: compiler (between: 0x0048EA50 and 0x0048EC80)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EC50(void)
{

loc_0048EC50: ;
    xmm0 = XMM_SCALAR(MEMF(0x586684)); /* movss */
    MEMF(0x5AAC04) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586634)); /* movss */
    MEMF(0x5AAC08) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048EC80
 * Original: 0x0048EC80 - 0x0048EC8A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048EC80: ;
    eax = 0x9456E0;
    g_seh_ebp = ebp; sub_000C7F10(); return; /* tail jmp 0x000C7F10 */

}

/**
 * sub_0048EC90
 * Original: 0x0048EC90 - 0x0048ECAA (26 bytes, 8 insns)
 * Folder: compiler (between: 0x0048EC80 and 0x0048EDF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EC90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EC90: ;
    PUSH32(esp, esi);
    esi = 0x947800;
    PUSH32(esp, 0x0048EC9Bu); RECOMP_ABI_CALL(0x000C9220u, sub_000C9220); /* call 0x000C9220 */

loc_0048EC9B: ;
    PUSH32(esp, 0x48F240);
    PUSH32(esp, 0x0048ECA5u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048ECA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048ECB0
 * Original: 0x0048ECB0 - 0x0048ECCA (26 bytes, 8 insns)
 * Folder: compiler (between: 0x0048EC80 and 0x0048EDF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ECB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048ECB0: ;
    PUSH32(esp, esi);
    esi = 0x951AC0;
    PUSH32(esp, 0x0048ECBBu); RECOMP_ABI_CALL(0x000CBE40u, sub_000CBE40); /* call 0x000CBE40 */

loc_0048ECBB: ;
    PUSH32(esp, 0x48F250);
    PUSH32(esp, 0x0048ECC5u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048ECC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048ECD0
 * Original: 0x0048ECD0 - 0x0048ECE6 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x0048EC80 and 0x0048EDF0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ECD0(void)
{

loc_0048ECD0: ;
    PUSH32(esp, 0x951AE0);
    PUSH32(esp, 0x0048ECDAu); RECOMP_ABI_CALL(0x000CC440u, sub_000CC440); /* call 0x000CC440 */

loc_0048ECDA: ;
    PUSH32(esp, 0x48F260);
    PUSH32(esp, 0x0048ECE4u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048ECE4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048ECF0
 * Original: 0x0048ECF0 - 0x0048ED06 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x0048EC80 and 0x0048EDF0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ECF0(void)
{

loc_0048ECF0: ;
    PUSH32(esp, 0x951B04);
    PUSH32(esp, 0x0048ECFAu); RECOMP_ABI_CALL(0x000CC280u, sub_000CC280); /* call 0x000CC280 */

loc_0048ECFA: ;
    PUSH32(esp, 0x48F270);
    PUSH32(esp, 0x0048ED04u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048ED04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048ED10
 * Original: 0x0048ED10 - 0x0048ED21 (17 bytes, 3 insns)
 * Folder: compiler (between: 0x0048EC80 and 0x0048EDF0)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ED10(void)
{

loc_0048ED10: ;
    xmm0 = XMM_SCALAR(MEMF(0x58667C)); /* movss */
    MEMF(0x951B14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048ED30
 * Original: 0x0048ED30 - 0x0048ED48 (24 bytes, 5 insns)
 * Folder: compiler (between: 0x0048EC80 and 0x0048EDF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ED30(void)
{

loc_0048ED30: ;
    xmm0 = XMM_SCALAR(MEMF(0x951B14)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x951B18) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048ED50
 * Original: 0x0048ED50 - 0x0048ED91 (65 bytes, 9 insns)
 * Folder: compiler (between: 0x0048EC80 and 0x0048EDF0)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ED50(void)
{

loc_0048ED50: ;
    xmm0 = XMM_SCALAR(MEMF(0x951B14)); /* movss */
    MEMF(0x951B1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x951B18)); /* movss */
    MEMF(0x951B20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x57EC30)); /* movss */
    MEMF(0x951B24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586A10)); /* movss */
    MEMF(0x951B28) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048EDA0
 * Original: 0x0048EDA0 - 0x0048EDC1 (33 bytes, 5 insns)
 * Folder: compiler (between: 0x0048EC80 and 0x0048EDF0)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EDA0(void)
{

loc_0048EDA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x586684)); /* movss */
    MEMF(0x5AAC14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x586634)); /* movss */
    MEMF(0x5AAC18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0048EDD0
 * Original: 0x0048EDD0 - 0x0048EDE6 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x0048EC80 and 0x0048EDF0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EDD0(void)
{

loc_0048EDD0: ;
    PUSH32(esp, 0x951B30);
    PUSH32(esp, 0x0048EDDAu); RECOMP_ABI_CALL(0x000CD4E0u, sub_000CD4E0); /* call 0x000CD4E0 */

loc_0048EDDA: ;
    PUSH32(esp, 0x48F280);
    PUSH32(esp, 0x0048EDE4u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EDE4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EDF0
 * Original: 0x0048EDF0 - 0x0048EDFA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048EDF0: ;
    eax = 0x952270;
    g_seh_ebp = ebp; sub_000CDE30(); return; /* tail jmp 0x000CDE30 */

}

/**
 * sub_0048EE00
 * Original: 0x0048EE00 - 0x0048EE20 (32 bytes, 7 insns)
 * Folder: compiler (match: xbox-retail 0x003699B0, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EE00(void)
{

loc_0048EE00: ;
    PUSH32(esp, 0x0048EE05u); RECOMP_ABI_CALL(0x000BCD80u, sub_000BCD80); /* call 0x000BCD80 */

loc_0048EE05: ;
    PUSH32(esp, 0x48F290);
    MEM32(0x952C9C) = eax;
    MEM32(0x952CA0) = 0;
    PUSH32(esp, 0x0048EE1Eu); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EE1E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EE20
 * Original: 0x0048EE20 - 0x0048EE40 (32 bytes, 15 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EE20(void)
{

loc_0048EE20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x952CC0);
    { uint32_t _icall_target = MEM32(0x54B3D4); PUSH32(esp, 0x0048EE2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0048EE25u); } /* indirect call */
    }

loc_0048EE2B: ;
    PUSH32(esp, 0x48F2C0);
    PUSH32(esp, 0x0048EE35u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EE35: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EE40
 * Original: 0x0048EE40 - 0x0048EE51 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EE40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EE40: ;
    PUSH32(esp, edi);
    ecx = 0x480;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x84F398;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EE60
 * Original: 0x0048EE60 - 0x0048EE7A (26 bytes, 8 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EE60: ;
    PUSH32(esp, esi);
    esi = 0x952D38;
    PUSH32(esp, 0x0048EE6Bu); RECOMP_ABI_CALL(0x000E64E0u, sub_000E64E0); /* call 0x000E64E0 */

loc_0048EE6B: ;
    PUSH32(esp, 0x48F2D0);
    PUSH32(esp, 0x0048EE75u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EE75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EE80
 * Original: 0x0048EE80 - 0x0048EE9A (26 bytes, 8 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EE80: ;
    PUSH32(esp, esi);
    esi = 0x952D44;
    PUSH32(esp, 0x0048EE8Bu); RECOMP_ABI_CALL(0x000E76F0u, sub_000E76F0); /* call 0x000E76F0 */

loc_0048EE8B: ;
    PUSH32(esp, 0x48F2E0);
    PUSH32(esp, 0x0048EE95u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EE95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EEA0
 * Original: 0x0048EEA0 - 0x0048EEBA (26 bytes, 8 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EEA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EEA0: ;
    PUSH32(esp, esi);
    esi = 0x952D50;
    PUSH32(esp, 0x0048EEABu); RECOMP_ABI_CALL(0x000E64E0u, sub_000E64E0); /* call 0x000E64E0 */

loc_0048EEAB: ;
    PUSH32(esp, 0x48F2F0);
    PUSH32(esp, 0x0048EEB5u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EEB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EEC0
 * Original: 0x0048EEC0 - 0x0048EECD (13 bytes, 5 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EEC0(void)
{

loc_0048EEC0: ;
    PUSH32(esp, esi);
    esi = 0x952E20;
    PUSH32(esp, 0x0048EECBu); RECOMP_ABI_CALL(0x003D06B0u, sub_003D06B0); /* call 0x003D06B0 */

loc_0048EECB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EECD
 * Original: 0x0048EECD - 0x0048EEE3 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EECD(void)
{

loc_0048EECD: ;
    ecx = 0x5AF3E0;
    PUSH32(esp, 0x0048EED7u); RECOMP_ABI_CALL(0x003F1EF2u, sub_003F1EF2); /* call 0x003F1EF2 */

loc_0048EED7: ;
    PUSH32(esp, 0x48F2FA);
    PUSH32(esp, 0x0048EEE1u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EEE1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EEE3
 * Original: 0x0048EEE3 - 0x0048EEF9 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EEE3(void)
{

loc_0048EEE3: ;
    ecx = 0x5AF6E0;
    PUSH32(esp, 0x0048EEEDu); RECOMP_ABI_CALL(0x003F3913u, sub_003F3913); /* call 0x003F3913 */

loc_0048EEED: ;
    PUSH32(esp, 0x48F30F);
    PUSH32(esp, 0x0048EEF7u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EEF7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EEF9
 * Original: 0x0048EEF9 - 0x0048EF0F (22 bytes, 6 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EEF9(void)
{

loc_0048EEF9: ;
    ecx = 0x5AF7A8;
    PUSH32(esp, 0x0048EF03u); RECOMP_ABI_CALL(0x003F60D4u, sub_003F60D4); /* call 0x003F60D4 */

loc_0048EF03: ;
    PUSH32(esp, 0x48F319);
    PUSH32(esp, 0x0048EF0Du); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EF0D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EF0F
 * Original: 0x0048EF0F - 0x0048EF30 (33 bytes, 17 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EF0F(void)
{

loc_0048EF0F: ;
    ecx = 0x5AFAC4;
    PUSH32(esp, 0x0048EF19u); RECOMP_ABI_CALL(0x003F8160u, sub_003F8160); /* call 0x003F8160 */

loc_0048EF19: ;
    PUSH32(esp, 0x48F323);
    PUSH32(esp, 0x0048EF23u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EF23: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EF30
 * Original: 0x0048EF30 - 0x0048EF3C (12 bytes, 4 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EF30(void)
{

loc_0048EF30: ;
    PUSH32(esp, 0x48F350);
    PUSH32(esp, 0x0048EF3Au); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EF3A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EF40
 * Original: 0x0048EF40 - 0x0048EF4C (12 bytes, 4 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EF40(void)
{

loc_0048EF40: ;
    PUSH32(esp, 0x48F360);
    PUSH32(esp, 0x0048EF4Au); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EF4A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EF50
 * Original: 0x0048EF50 - 0x0048EF5C (12 bytes, 4 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EF50(void)
{

loc_0048EF50: ;
    PUSH32(esp, 0x48F370);
    PUSH32(esp, 0x0048EF5Au); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EF5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EF60
 * Original: 0x0048EF60 - 0x0048EF6C (12 bytes, 4 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EF60(void)
{

loc_0048EF60: ;
    PUSH32(esp, 0x48F380);
    PUSH32(esp, 0x0048EF6Au); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EF6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EF70
 * Original: 0x0048EF70 - 0x0048EF7C (12 bytes, 4 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EF70(void)
{

loc_0048EF70: ;
    PUSH32(esp, 0x48F390);
    PUSH32(esp, 0x0048EF7Au); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048EF7A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048EF80
 * Original: 0x0048EF80 - 0x0048F02E (174 bytes, 27 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EF80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048EF80: ;
    ecx = 0x5B11D4;
    PUSH32(esp, 0x0048EF8Au); RECOMP_ABI_CALL(0x0044B1A0u, sub_0044B1A0); /* call 0x0044B1A0 */

loc_0048EF8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5B11D0) = eax;
    MEM32(0x5B11C0) = eax;
    MEM32(0x5B1228) = eax;
    MEM32(0x5B1220) = eax;
    MEM32(0x5B122C) = eax;
    MEM32(0x5B1230) = eax;
    MEM32(0x5B1268) = eax;
    eax = 1;
    PUSH32(esp, 0x48F3A0);
    MEM32(0x5B1234) = 0x10000;
    MEM32(0x5B1264) = eax;
    MEM32(0x5B1260) = eax;
    MEM32(0x5B11F8) = 0x447270;
    MEM32(0x5B11FC) = 0x446E80;
    MEM32(0x5B1200) = 0x447300;
    MEM32(0x5B1204) = 0x4456D0;
    MEM32(0x5B1208) = 0x445730;
    MEM32(0x5B120C) = 0x445790;
    MEM32(0x5B1210) = 0x446F10;
    MEM32(0x5B1214) = 0x4468E0;
    MEM32(0x5B1218) = 0x445800;
    PUSH32(esp, 0x0048F02Cu); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048F02C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F030
 * Original: 0x0048F030 - 0x0048F03C (12 bytes, 4 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F030(void)
{

loc_0048F030: ;
    PUSH32(esp, 0x48F3B0);
    PUSH32(esp, 0x0048F03Au); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048F03A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F040
 * Original: 0x0048F040 - 0x0048F067 (39 bytes, 10 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F040(void)
{

loc_0048F040: ;
    PUSH32(esp, 0x45BBE0);
    PUSH32(esp, 0x45BBB0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x8C);
    PUSH32(esp, 0x5B3330);
    PUSH32(esp, 0x0048F05Bu); RECOMP_ABI_CALL(0x00480105u, sub_00480105); /* call 0x00480105 */

loc_0048F05B: ;
    PUSH32(esp, 0x48F3C0);
    PUSH32(esp, 0x0048F065u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0048F065: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F070
 * Original: 0x0048F070 - 0x0048F071 (1 bytes, 1 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F070(void)
{

loc_0048F070: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F080
 * Original: 0x0048F080 - 0x0048F0AF (47 bytes, 11 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F080: ;
    _fa = (uint32_t)(MEM32(0x959BD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x959BD0), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048F097; /* jb: below (unsigned <) */

loc_0048F089: ;
    eax = MEM32(0x959BBC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F094u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048F094: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0048F097: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x959BD0) = 7;
    MEM32(0x959BCC) = eax;
    MEM16(0x959BBC) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F0B0
 * Original: 0x0048F0B0 - 0x0048F0BB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F0B0(void)
{

loc_0048F0B0: ;
    PUSH32(esp, 0x91F2C8);
    PUSH32(esp, 0x0048F0BAu); RECOMP_ABI_CALL(0x0002CD10u, sub_0002CD10); /* call 0x0002CD10 */

loc_0048F0BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F0C0
 * Original: 0x0048F0C0 - 0x0048F0EF (47 bytes, 11 insns)
 * Folder: compiler (between: 0x0048EE00 and 0x0048F0F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F0C0: ;
    _fa = (uint32_t)(MEM32(0x959BB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x959BB0), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048F0D7; /* jb: below (unsigned <) */

loc_0048F0C9: ;
    eax = MEM32(0x959B9C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F0D4u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048F0D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0048F0D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x959BB0) = 7;
    MEM32(0x959BAC) = eax;
    MEM16(0x959B9C) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F0F0
 * Original: 0x0048F0F0 - 0x0048F0FA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F0F0: ;
    ecx = 0x93F634;
    g_seh_ebp = ebp; sub_000BD4B0(); return; /* tail jmp 0x000BD4B0 */

}

/**
 * sub_0048F100
 * Original: 0x0048F100 - 0x0048F11A (26 bytes, 7 insns)
 * Folder: compiler (between: 0x0048F0F0 and 0x0048F120)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F100: ;
    eax = MEM32(0x5AAAB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x5AAAB0) = 0x581240;
    if (CMP_EQ(_fa, _fb)) goto loc_0048F119; /* je: equal / zero */

loc_0048F113: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F119u); RECOMP_ABI_CALL(0x003D89F7u, sub_003D89F7); /* call 0x003D89F7 */

loc_0048F119: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F120
 * Original: 0x0048F120 - 0x0048F151 (49 bytes, 10 insns)
 * Folder: compiler (match: xbox-retail 0x00369B20, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F120: ;
    eax = MEM32(0x93FBA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0048F132; /* je: equal / zero */

loc_0048F129: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F12Fu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048F12F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0048F132: ;
    MEM32(0x93FBA8) = 0;
    MEM32(0x93FBAC) = 0;
    MEM32(0x93FBB0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F160
 * Original: 0x0048F160 - 0x0048F16A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F160: ;
    eax = 0x93FBB4;
    g_seh_ebp = ebp; sub_00036490(); return; /* tail jmp 0x00036490 */

}

/**
 * sub_0048F170
 * Original: 0x0048F170 - 0x0048F17A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F170: ;
    eax = 0x93FBC0;
    g_seh_ebp = ebp; sub_000369E0(); return; /* tail jmp 0x000369E0 */

}

/**
 * sub_0048F180
 * Original: 0x0048F180 - 0x0048F18D (13 bytes, 5 insns)
 * Folder: compiler (between: 0x0048F170 and 0x0048F1C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F180(void)
{

loc_0048F180: ;
    PUSH32(esp, esi);
    esi = 0x93FBD0;
    PUSH32(esp, 0x0048F18Bu); RECOMP_ABI_CALL(0x000400D0u, sub_000400D0); /* call 0x000400D0 */

loc_0048F18B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F190
 * Original: 0x0048F190 - 0x0048F19D (13 bytes, 5 insns)
 * Folder: compiler (between: 0x0048F170 and 0x0048F1C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F190(void)
{

loc_0048F190: ;
    PUSH32(esp, edi);
    edi = 0x959AEC;
    PUSH32(esp, 0x0048F19Bu); RECOMP_ABI_CALL(0x000B5320u, sub_000B5320); /* call 0x000B5320 */

loc_0048F19B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F1A0
 * Original: 0x0048F1A0 - 0x0048F1AB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048F170 and 0x0048F1C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F1A0(void)
{

loc_0048F1A0: ;
    PUSH32(esp, 0x959EC8);
    PUSH32(esp, 0x0048F1AAu); RECOMP_ABI_CALL(0x000B7040u, sub_000B7040); /* call 0x000B7040 */

loc_0048F1AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F1B0
 * Original: 0x0048F1B0 - 0x0048F1BB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048F170 and 0x0048F1C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F1B0(void)
{

loc_0048F1B0: ;
    PUSH32(esp, 0x959648);
    PUSH32(esp, 0x0048F1BAu); RECOMP_ABI_CALL(0x000B9770u, sub_000B9770); /* call 0x000B9770 */

loc_0048F1BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F1C0
 * Original: 0x0048F1C0 - 0x0048F1CA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F1C0: ;
    eax = 0x9596A0;
    g_seh_ebp = ebp; sub_000B8A20(); return; /* tail jmp 0x000B8A20 */

}

/**
 * sub_0048F1D0
 * Original: 0x0048F1D0 - 0x0048F1DA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F1D0: ;
    eax = 0x956810;
    g_seh_ebp = ebp; sub_000B8F50(); return; /* tail jmp 0x000B8F50 */

}

/**
 * sub_0048F1E0
 * Original: 0x0048F1E0 - 0x0048F1EB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048F1D0 and 0x0048F210)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F1E0(void)
{

loc_0048F1E0: ;
    PUSH32(esp, 0x9565F8);
    PUSH32(esp, 0x0048F1EAu); RECOMP_ABI_CALL(0x000B9770u, sub_000B9770); /* call 0x000B9770 */

loc_0048F1EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F1F0
 * Original: 0x0048F1F0 - 0x0048F1FB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048F1D0 and 0x0048F210)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F1F0(void)
{

loc_0048F1F0: ;
    PUSH32(esp, 0x959DDC);
    PUSH32(esp, 0x0048F1FAu); RECOMP_ABI_CALL(0x000BAD50u, sub_000BAD50); /* call 0x000BAD50 */

loc_0048F1FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F200
 * Original: 0x0048F200 - 0x0048F20B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048F1D0 and 0x0048F210)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F200(void)
{

loc_0048F200: ;
    PUSH32(esp, 0x959B38);
    PUSH32(esp, 0x0048F20Au); RECOMP_ABI_CALL(0x000BD130u, sub_000BD130); /* call 0x000BD130 */

loc_0048F20A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F210
 * Original: 0x0048F210 - 0x0048F21A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F210: ;
    eax = 0x9453B8;
    g_seh_ebp = ebp; sub_000BE5B0(); return; /* tail jmp 0x000BE5B0 */

}

/**
 * sub_0048F220
 * Original: 0x0048F220 - 0x0048F22A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F220: ;
    eax = 0x9453F8;
    g_seh_ebp = ebp; sub_000C02C0(); return; /* tail jmp 0x000C02C0 */

}

/**
 * sub_0048F230
 * Original: 0x0048F230 - 0x0048F23B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048F220 and 0x0048F290)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F230(void)
{

loc_0048F230: ;
    PUSH32(esp, 0x945580);
    PUSH32(esp, 0x0048F23Au); RECOMP_ABI_CALL(0x000C3190u, sub_000C3190); /* call 0x000C3190 */

loc_0048F23A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F240
 * Original: 0x0048F240 - 0x0048F24D (13 bytes, 5 insns)
 * Folder: compiler (between: 0x0048F220 and 0x0048F290)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F240(void)
{

loc_0048F240: ;
    PUSH32(esp, esi);
    esi = 0x947800;
    PUSH32(esp, 0x0048F24Bu); RECOMP_ABI_CALL(0x000C91E0u, sub_000C91E0); /* call 0x000C91E0 */

loc_0048F24B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F250
 * Original: 0x0048F250 - 0x0048F25D (13 bytes, 5 insns)
 * Folder: compiler (between: 0x0048F220 and 0x0048F290)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F250(void)
{

loc_0048F250: ;
    PUSH32(esp, esi);
    esi = 0x951AC0;
    PUSH32(esp, 0x0048F25Bu); RECOMP_ABI_CALL(0x000CBE50u, sub_000CBE50); /* call 0x000CBE50 */

loc_0048F25B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F260
 * Original: 0x0048F260 - 0x0048F26B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048F220 and 0x0048F290)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F260(void)
{

loc_0048F260: ;
    PUSH32(esp, 0x951AE0);
    PUSH32(esp, 0x0048F26Au); RECOMP_ABI_CALL(0x000CC040u, sub_000CC040); /* call 0x000CC040 */

loc_0048F26A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F270
 * Original: 0x0048F270 - 0x0048F27D (13 bytes, 5 insns)
 * Folder: compiler (between: 0x0048F220 and 0x0048F290)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F270(void)
{

loc_0048F270: ;
    PUSH32(esp, esi);
    esi = 0x951B04;
    PUSH32(esp, 0x0048F27Bu); RECOMP_ABI_CALL(0x000CF200u, sub_000CF200); /* call 0x000CF200 */

loc_0048F27B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F280
 * Original: 0x0048F280 - 0x0048F281 (1 bytes, 1 insns)
 * Folder: compiler (between: 0x0048F220 and 0x0048F290)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F280(void)
{

loc_0048F280: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F290
 * Original: 0x0048F290 - 0x0048F2B5 (37 bytes, 10 insns)
 * Folder: compiler (match: xbox-retail 0x00369CB0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F290: ;
    PUSH32(esp, esi);
    esi = 0x952C98;
    PUSH32(esp, 0x0048F29Bu); RECOMP_ABI_CALL(0x000D5170u, sub_000D5170); /* call 0x000D5170 */

loc_0048F29B: ;
    eax = MEM32(0x952C9C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F2A6u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048F2A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x952C9C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F2C0
 * Original: 0x0048F2C0 - 0x0048F2C1 (1 bytes, 1 insns)
 * Folder: compiler (between: 0x0048F290 and 0x0048F2D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F2C0(void)
{

loc_0048F2C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F2D0
 * Original: 0x0048F2D0 - 0x0048F2DA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F2D0: ;
    eax = 0x952D38;
    g_seh_ebp = ebp; sub_000E5020(); return; /* tail jmp 0x000E5020 */

}

/**
 * sub_0048F2E0
 * Original: 0x0048F2E0 - 0x0048F2EA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F2E0: ;
    eax = 0x952D44;
    g_seh_ebp = ebp; sub_000E73C0(); return; /* tail jmp 0x000E73C0 */

}

/**
 * sub_0048F2F0
 * Original: 0x0048F2F0 - 0x0048F2FA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F2F0: ;
    eax = 0x952D50;
    g_seh_ebp = ebp; sub_000E7F10(); return; /* tail jmp 0x000E7F10 */

}

/**
 * sub_0048F2FA
 * Original: 0x0048F2FA - 0x0048F30F (21 bytes, 4 insns)
 * Folder: compiler (between: 0x0048F2F0 and 0x0048F30F)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F2FA(void)
{

loc_0048F2FA: ;
    PUSH32(esp, 0x5AF3E0);
    MEM32(0x5AF3E0) = 0x54C338;
    PUSH32(esp, 0x0048F30Eu); RECOMP_ABI_CALL(0x003F1884u, sub_003F1884); /* call 0x003F1884 */

loc_0048F30E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F30F
 * Original: 0x0048F30F - 0x0048F319 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F30F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F30F: ;
    ecx = 0x5AF6E0;
    g_seh_ebp = ebp; sub_003F4835(); return; /* tail jmp 0x003F4835 */

}

/**
 * sub_0048F323
 * Original: 0x0048F323 - 0x0048F342 (31 bytes, 5 insns)
 * Folder: compiler (between: 0x0048F30F and 0x0048F350)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F323(void)
{

loc_0048F323: ;
    PUSH32(esp, 0x5AFAC4);
    MEM32(0x5AFAC4) = 0x54C548;
    MEM32(0x5AFACC) = 0x54C530;
    PUSH32(esp, 0x0048F341u); RECOMP_ABI_CALL(0x003F7803u, sub_003F7803); /* call 0x003F7803 */

loc_0048F341: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F350
 * Original: 0x0048F350 - 0x0048F35A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F350: ;
    ecx = 0x5B0120;
    g_seh_ebp = ebp; sub_0043E870(); return; /* tail jmp 0x0043E870 */

}

/**
 * sub_0048F360
 * Original: 0x0048F360 - 0x0048F36A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F360: ;
    ecx = 0x5B0444;
    g_seh_ebp = ebp; sub_0043E870(); return; /* tail jmp 0x0043E870 */

}

/**
 * sub_0048F370
 * Original: 0x0048F370 - 0x0048F37A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F370: ;
    ecx = 0x5B0450;
    g_seh_ebp = ebp; sub_0043E870(); return; /* tail jmp 0x0043E870 */

}

/**
 * sub_0048F380
 * Original: 0x0048F380 - 0x0048F38A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F380: ;
    ecx = 0x5B0468;
    g_seh_ebp = ebp; sub_0043E870(); return; /* tail jmp 0x0043E870 */

}

/**
 * sub_0048F390
 * Original: 0x0048F390 - 0x0048F39A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F390: ;
    ecx = 0x5B045C;
    g_seh_ebp = ebp; sub_0043E870(); return; /* tail jmp 0x0043E870 */

}

/**
 * sub_0048F3A0
 * Original: 0x0048F3A0 - 0x0048F3AA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F3A0: ;
    ecx = 0x5B11D4;
    g_seh_ebp = ebp; sub_0044B750(); return; /* tail jmp 0x0044B750 */

}

/**
 * sub_0048F3B0
 * Original: 0x0048F3B0 - 0x0048F3BA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F3B0: ;
    ecx = 0x5B11C4;
    g_seh_ebp = ebp; sub_0043E870(); return; /* tail jmp 0x0043E870 */

}

/**
 * sub_0048F3C0
 * Original: 0x0048F3C0 - 0x0048F3D7 (23 bytes, 6 insns)
 * Folder: compiler (between: 0x0048F3B0 and 0x0048F43E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F3C0(void)
{

loc_0048F3C0: ;
    PUSH32(esp, 0x45BBE0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x8C);
    PUSH32(esp, 0x5B3330);
    PUSH32(esp, 0x0048F3D6u); RECOMP_ABI_CALL(0x004801C5u, sub_004801C5); /* call 0x004801C5 */

loc_0048F3D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048F3E0
 * Original: 0x0048F3E0 - 0x0048F40E (46 bytes, 11 insns)
 * Folder: compiler (between: 0x0048F3B0 and 0x0048F43E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F3E0: ;
    _fa = (uint32_t)(MEM32(0x5B3624)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5B3624), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048F3F7; /* jb: below (unsigned <) */

loc_0048F3E9: ;
    eax = MEM32(0x5B3610);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F3F4u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048F3F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0048F3F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5B3624) = 0xF;
    MEM32(0x5B3620) = eax;
    MEM8(0x5B3610) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F410
 * Original: 0x0048F410 - 0x0048F43E (46 bytes, 11 insns)
 * Folder: compiler (between: 0x0048F3B0 and 0x0048F43E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048F410: ;
    _fa = (uint32_t)(MEM32(0x5B3640)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5B3640), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0048F427; /* jb: below (unsigned <) */

loc_0048F419: ;
    eax = MEM32(0x5B362C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048F424u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048F424: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0048F427: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5B3640) = 0xF;
    MEM32(0x5B363C) = eax;
    MEM8(0x5B362C) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F43E
 * Original: 0x0048F43E - 0x0048F448 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F43E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F43E: ;
    ecx = 0x5B58C0;
    g_seh_ebp = ebp; sub_0047D769(); return; /* tail jmp 0x0047D769 */

}
