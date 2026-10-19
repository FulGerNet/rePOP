/**
 * PoP SoT xbox-retail - ai, chunk 1
 * AI interpreter and the functions it exposes to scripts (Jade AIinterp)
 * Functions: 250 (0x000EF980 - 0x000F8E60)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000EF980
 * Original: 0x000EF980 - 0x000EF9F5 (117 bytes, 44 insns)
 * Folder: ai (between: 0x000EF900 and 0x000EFA70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EF980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(0x44AA20);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF99Au); RECOMP_ABI_CALL(0x00021030u, sub_00021030); /* call 0x00021030 */

loc_000EF99A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF9A6u); RECOMP_ABI_CALL(0x00034B90u, sub_00034B90); /* call 0x00034B90 */

loc_000EF9A6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF9ABu); RECOMP_ABI_CALL(0x00034F60u, sub_00034F60); /* call 0x00034F60 */

loc_000EF9AB: ;
    edx = MEM32(0x44AA20);
    edi = MEM32(edx + 0x2C);
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF9BBu); RECOMP_ABI_CALL(0x0002C900u, sub_0002C900); /* call 0x0002C900 */

loc_000EF9BB: ;
    eax = 0xD;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF9C7u); RECOMP_ABI_CALL(0x00015690u, sub_00015690); /* call 0x00015690 */

loc_000EF9C7: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EF9DF; /* je: equal / zero */

loc_000EF9CC: ;
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF9D4u); RECOMP_ABI_CALL(0x000E8B40u, sub_000E8B40); /* call 0x000E8B40 */

loc_000EF9D4: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF9DCu); RECOMP_ABI_CALL(0x000E8B40u, sub_000E8B40); /* call 0x000E8B40 */

loc_000EF9DC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EF9DF: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    edi = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF9EAu); RECOMP_ABI_CALL(0x00023060u, sub_00023060); /* call 0x00023060 */

loc_000EF9EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000EFA00
 * Original: 0x000EFA00 - 0x000EFA63 (99 bytes, 24 insns)
 * Folder: ai (between: 0x000EF900 and 0x000EFA70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EFA00: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx + 0x696528);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = esi;
    PUSH32(esp, edx);
    esi = ecx + 0x696528;
    MEM32(0x758D48) = ecx;
    PUSH32(esp, 0x000EFA51u); RECOMP_ABI_CALL(0x000EF980u, sub_000EF980); /* call 0x000EF980 */

loc_000EFA51: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EFA57u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_000EFA57: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EFA70
 * Original: 0x000EFA70 - 0x000EFADC (108 bytes, 34 insns)
 * Folder: ai (match: xbox-demo 0x000FFDF0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EFA70: ;
    ecx = MEM32(0x758D4C);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758DF0);
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + 0x696528;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_000EFAA5; /* jle: less or equal (signed <=) */

loc_000EFA97: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x6A3AE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx * 4 + 0x6A3AE0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFAD5; /* je: equal / zero */

loc_000EFAA0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EFA97; /* jl: less (signed <) */

loc_000EFAA5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000EFAA7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x758D48) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    POP32(esp, esi);
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
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000EFAD5: ;
    edx = 1;
    goto loc_000EFAA7;

}

/**
 * sub_000EFAE0
 * Original: 0x000EFAE0 - 0x000EFC3F (351 bytes, 108 insns)
 * Folder: ai (between: 0x000EFA70 and 0x000EFC70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EFAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EFAE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x758DF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000EFB05; /* jge: greater or equal (signed >=) */

loc_000EFAF8: ;
    MEM32(eax * 4 + 0x6A3AE0) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758DF0) = eax;

loc_000EFB05: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x20000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EFBE7; /* jne: not equal / not zero */

loc_000EFB11: ;
    edi = MEM32(esi + 4);
    edi = edi & 0xFFFF0000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x200000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFB27u); RECOMP_ABI_CALL(0x000230D0u, sub_000230D0); /* call 0x000230D0 */

loc_000EFB27: ;
    edi = MEM32(esi + 4);
    edi = edi & 0xFFFF0000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFB3Du); RECOMP_ABI_CALL(0x000230D0u, sub_000230D0); /* call 0x000230D0 */

loc_000EFB3D: ;
    edi = MEM32(0x44AA20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFB57; /* je: equal / zero */

loc_000EFB47: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFB4Eu); RECOMP_ABI_CALL(0x000282F0u, sub_000282F0); /* call 0x000282F0 */

loc_000EFB4E: ;
    eax = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFB57u); RECOMP_ABI_CALL(0x00027F50u, sub_00027F50); /* call 0x00027F50 */

loc_000EFB57: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EFC20; /* je: equal / zero */

loc_000EFB63: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFC20; /* je: equal / zero */

loc_000EFB6E: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFC20; /* je: equal / zero */

loc_000EFB79: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EFC20; /* jne: not equal / not zero */

loc_000EFB82: ;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFB89u); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_000EFB89: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EFB9A; /* je: equal / zero */

loc_000EFB91: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFB97u); RECOMP_ABI_CALL(0x0003B790u, sub_0003B790); /* call 0x0003B790 */

loc_000EFB97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EFB9A: ;
    edx = MEM32(esi);
    eax = MEM32(esi + 0x14);
    edx = edx & 0xFFBFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFBCA; /* je: equal / zero */

loc_000EFBAE: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EFBBC; /* jne: not equal / not zero */

loc_000EFBB7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFBBCu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000EFBBC: ;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000EFBCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EFBC7u); } /* indirect call */
    }

loc_000EFBCA: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(0x44AA20);
    _fb = (uint32_t)(0x17C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x17C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFBE5u); RECOMP_ABI_CALL(0x000DEB70u, sub_000DEB70); /* call 0x000DEB70 */

loc_000EFBE5: ;
    goto loc_000EFC20;

loc_000EFBE7: ;
    edi = MEM32(0x44AA20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFC15; /* je: equal / zero */

loc_000EFBF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFBF8u); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_000EFBF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    ebx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFC04u); RECOMP_ABI_CALL(0x0002CCF0u, sub_0002CCF0); /* call 0x0002CCF0 */

loc_000EFC04: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFC15; /* je: equal / zero */

loc_000EFC0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFC12u); RECOMP_ABI_CALL(0x00028490u, sub_00028490); /* call 0x00028490 */

loc_000EFC12: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EFC15: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFC1Du); RECOMP_ABI_CALL(0x00021660u, sub_00021660); /* call 0x00021660 */

loc_000EFC1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EFC20: ;
    edi = MEM32(0x758D6C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFC1Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3E8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000EFC40
 * Original: 0x000EFC40 - 0x000EFC70 (48 bytes, 12 insns)
 * Folder: ai (between: 0x000EFA70 and 0x000EFC70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EFC40: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x000EFC62u); RECOMP_ABI_CALL(0x000EFAE0u, sub_000EFAE0); /* call 0x000EFAE0 */

loc_000EFC62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EFC68; /* jne: not equal / not zero */

loc_000EFC67: ;
    esp += 4; return; /* ret */

loc_000EFC68: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EFC70
 * Original: 0x000EFC70 - 0x000EFD04 (148 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00100020, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EFC70: ;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFCC1; /* je: equal / zero */

loc_000EFC79: ;
    eax = MEM32(0x758DBC);
    eax = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x758DC8)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42936C); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */

loc_000EFCC1: ;
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EFD03; /* je: equal / zero */

loc_000EFCF7: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000EFD03: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EFD10
 * Original: 0x000EFD10 - 0x000EFDFF (239 bytes, 48 insns)
 * Folder: ai (match: xbox-demo 0x001000C0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EFD10: ;
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D48) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFDAB; /* je: equal / zero */

loc_000EFD4F: ;
    eax = MEM32(0x758DBC);
    eax = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x758DC8)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42936C); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x696528) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x69652C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x69652C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x696530)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x696530) = xmm1.f[0]; /* movss */

loc_000EFDAB: ;
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x696528); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x69652C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696530)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EFDF7; /* je: equal / zero */

loc_000EFDEB: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000EFDF7: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EFE00
 * Original: 0x000EFE00 - 0x000EFED6 (214 bytes, 57 insns)
 * Folder: ai (match: xbox-demo 0x001001B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EFE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EFE00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000EFE5B; /* je: equal / zero */

loc_000EFE13: ;
    eax = MEM32(0x758DBC);
    ecx = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x758DC8)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42936C); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */

loc_000EFE5B: ;
    edx = MEM32(edi + 0xC);
    eax = esp + 0x10;
    ebx = edx + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFE6Au); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_000EFE6A: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = ebx;
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFE7Au); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_000EFE7A: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    ecx = MEM32(edi + 0xC);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    eax = ecx + 0x30;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    PUSH32(esp, eax);
    eax = esp + 0xC;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFEBCu); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_000EFEBC: ;
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EFED1; /* je: equal / zero */

loc_000EFEC5: ;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000EFED1: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000EFEE0
 * Original: 0x000EFEE0 - 0x000EFF2D (77 bytes, 20 insns)
 * Folder: ai (between: 0x000EFE00 and 0x000EFF30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EFEE0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = eax + 0x696528;
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, 0x000EFF23u); RECOMP_ABI_CALL(0x000EFE00u, sub_000EFE00); /* call 0x000EFE00 */

loc_000EFF23: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EFF30
 * Original: 0x000EFF30 - 0x000EFFEC (188 bytes, 67 insns)
 * Folder: ai (match: xbox-demo 0x001002E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EFF30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x14);
    esi = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(edi);
    MEM32(esi + 0x30) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(esi + 0x34) = ebp;
    edi = MEM32(edi + 8);
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) | 2;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(edx);
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x10) = edx;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax);
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x28) = edx;
    PUSH32(esp, 0x000EFFA4u); RECOMP_ABI_CALL(0x000E2C10u, sub_000E2C10); /* call 0x000E2C10 */

loc_000EFFA4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    MEM32(esi + 0x40) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000EFFB6; /* jne: not equal / not zero */

loc_000EFFAB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x2C) = eax;

loc_000EFFB6: ;
    edx = ebx;
    PUSH32(esp, 0x000EFFBDu); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_000EFFBD: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EFFE6; /* je: equal / zero */

loc_000EFFC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    edi = MEM32(ebx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000EFFD8; /* je: equal / zero */

loc_000EFFD0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000EFFDB;

loc_000EFFD8: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EFFDB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFFE6; /* je: equal / zero */

loc_000EFFDF: ;
    ecx = 0x14;
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

loc_000EFFE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EFFF0
 * Original: 0x000EFFF0 - 0x000F0063 (115 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x001003A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFFF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EFFF0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D4C);
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = esi + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = ecx;
    ecx = esi + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = esi;
    esi = esi + 0x696528;
    PUSH32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D4C) = ebx;
    PUSH32(esp, 0x000F0055u); RECOMP_ABI_CALL(0x000EFF30u, sub_000EFF30); /* call 0x000EFF30 */

loc_000F0055: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0070
 * Original: 0x000F0070 - 0x000F00E3 (115 bytes, 30 insns)
 * Folder: ai (match: xbox-demo 0x00100420, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0070: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 8);
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D68) = edx;
    edx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(0x758D70) = ecx;
    ecx = edi + 0x696528;
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 3;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    MEM32(ecx + 4) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F00F0
 * Original: 0x000F00F0 - 0x000F0174 (132 bytes, 33 insns)
 * Folder: ai (match: xbox-demo 0x001004A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F00F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F00F0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 8);
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D68) = edx;
    edx = MEM32(eax);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D70) = ecx;
    ecx = edi + 0x696528;
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 3;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    MEM32(ecx + 4) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0180
 * Original: 0x000F0180 - 0x000F0271 (241 bytes, 56 insns)
 * Folder: ai (between: 0x000F00F0 and 0x000F0490)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0180(void)
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

loc_000F0180: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x14);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 8);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(0x758D68) = edx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F01F7; /* jnp: not parity */

loc_000F01E4: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_000F01F7: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
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
 * sub_000F0280
 * Original: 0x000F0280 - 0x000F0371 (241 bytes, 56 insns)
 * Folder: ai (between: 0x000F00F0 and 0x000F0490)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0280(void)
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

loc_000F0280: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x14);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 8);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(0x758D68) = edx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F02F7; /* jnp: not parity */

loc_000F02E4: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_000F02F7: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
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
 * sub_000F0380
 * Original: 0x000F0380 - 0x000F0483 (259 bytes, 92 insns)
 * Folder: ai (between: 0x000F00F0 and 0x000F0490)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F0380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F03B8; /* je: equal / zero */

loc_000F03A9: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F03B5u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F03B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F03B8: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F03CDu); RECOMP_ABI_CALL(0x000E18D0u, sub_000E18D0); /* call 0x000E18D0 */

loc_000F03CD: ;
    eax = MEM32(ebx + 0xC);
    ecx = esp + 0x1C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F03EC; /* je: equal / zero */

loc_000F03DB: ;
    ecx = 0x14;
    esi = eax;
    edi = esp + 0x10;
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
    edi = MEM32(esp + 8);

loc_000F03EC: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F03FBu); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_000F03FB: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0470; /* je: equal / zero */

loc_000F0406: ;
    eax = MEM32(ebx);
    edx = eax;
    edx = edx & 0x4000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F0453; /* je: equal / zero */

loc_000F0412: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    esi = MEM32(ebx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F044E; /* je: equal / zero */

loc_000F041C: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F0422: ;
    ecx = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0439; /* je: equal / zero */

loc_000F042A: ;
    ecx = 0x14;
    edi = esp + 0x10;
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
    edi = MEM32(esp + 8);

loc_000F0439: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F045C; /* je: equal / zero */

loc_000F043D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(ebx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F0457; /* je: equal / zero */

loc_000F0447: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F045E;

loc_000F044E: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F0422;

loc_000F0453: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F042A;

loc_000F0457: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F045E;

loc_000F045C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F045E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F046Du); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_000F046D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F0470: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F047D; /* je: equal / zero */

loc_000F0474: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F047Au); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F047A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F047D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0490
 * Original: 0x000F0490 - 0x000F052D (157 bytes, 38 insns)
 * Folder: ai (match: xbox-demo 0x001007B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0490: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F04D4; /* jne: not equal / not zero */

loc_000F04CA: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_000F04DC;

loc_000F04D4: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_000F04DC: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(0x758D48) = eax;
    eax = MEM32(esp + 4);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x000F051Eu); RECOMP_ABI_CALL(0x000F0380u, sub_000F0380); /* call 0x000F0380 */

loc_000F051E: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000F0530
 * Original: 0x000F0530 - 0x000F0A71 (1345 bytes, 358 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F0530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000F0530: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F058E; /* je: equal / zero */

loc_000F0546: ;
    eax = MEM32(0x758DBC);
    ecx = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x758DC8)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42936C); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */

loc_000F058E: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F05D8; /* je: equal / zero */

loc_000F05A7: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F05D1u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F05D1: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F05D8: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    edx = 4;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F06E1; /* jnp: not parity */

loc_000F05F1: ;
    fp_push(MEMF(edi)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm4 = xmm2; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F06E1; /* je: equal / zero */

loc_000F06B1: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F06D0; /* je: equal / zero */

loc_000F06BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F06CB; /* je: equal / zero */

loc_000F06C4: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F06D2;

loc_000F06CB: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F06D2;

loc_000F06D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F06D2: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F06DAu); RECOMP_ABI_CALL(0x000E1DC0u, sub_000E1DC0); /* call 0x000E1DC0 */

loc_000F06DA: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F06E1: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F0893; /* jnp: not parity */

loc_000F06F3: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0893; /* je: equal / zero */

loc_000F07B8: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F07D7; /* je: equal / zero */

loc_000F07C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F07D2; /* je: equal / zero */

loc_000F07CB: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F07D9;

loc_000F07D2: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F07D9;

loc_000F07D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F07D9: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */

loc_000F0893: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F0A41; /* jnp: not parity */

loc_000F08A5: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0A41; /* je: equal / zero */

loc_000F0963: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F0982; /* je: equal / zero */

loc_000F096C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F097D; /* je: equal / zero */

loc_000F0976: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F0984;

loc_000F097D: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F0984;

loc_000F0982: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F0984: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    edi = MEM32(eax + 0x40);
    xmm3 = xmm2; /* movaps */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = edi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */

loc_000F0A41: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0A6B; /* je: equal / zero */

loc_000F0A45: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0A4Bu); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F0A4B: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_000F0A6B: ;
    POP32(esp, edi);
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
 * sub_000F0A80
 * Original: 0x000F0A80 - 0x000F0AE6 (102 bytes, 24 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0A80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = ecx;
    MEM32(0x758D4C) = MEM32(0x758D4C) - 1;
    _fa = (uint32_t)(MEM32(0x758D4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(0x758D48) = eax;
    eax = esp + 4;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x000F0ADAu); RECOMP_ABI_CALL(0x000F0530u, sub_000F0530); /* call 0x000F0530 */

loc_000F0ADA: ;
    eax = MEM32(esp + 0x14);
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
 * sub_000F0AF0
 * Original: 0x000F0AF0 - 0x000F0BF2 (258 bytes, 82 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F0AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F0AF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F0BEC; /* jnp: not parity */

loc_000F0B11: ;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0B43; /* je: equal / zero */

loc_000F0B1A: ;
    eax = MEM32(0x758DBC);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x758DC8)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42936C); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_000F0B43: ;
    eax = MEM32(esi);
    eax = eax & 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 8) = eax;
    if ((_fa == 0)) goto loc_000F0B77; /* je: equal / zero */

loc_000F0B50: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x40);
    ebx = MEM32(eax + 0x44);
    edi = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0B72u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F0B72: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F0B7F;

loc_000F0B77: ;
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);

loc_000F0B7F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F0BC6; /* jnp: not parity */

loc_000F0B91: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0B9Du); RECOMP_ABI_CALL(0x000E1DC0u, sub_000E1DC0); /* call 0x000E1DC0 */

loc_000F0B9D: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F0BC6; /* je: equal / zero */

loc_000F0BA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F0BBA; /* je: equal / zero */

loc_000F0BB3: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F0BBD;

loc_000F0BBA: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F0BBD: ;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0BC3u); RECOMP_ABI_CALL(0x000E1DC0u, sub_000E1DC0); /* call 0x000E1DC0 */

loc_000F0BC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F0BC6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0BEC; /* je: equal / zero */

loc_000F0BCE: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0BD4u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F0BD4: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;

loc_000F0BEC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0C00
 * Original: 0x000F0C00 - 0x000F0C72 (114 bytes, 28 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0C00: ;
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
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F0C4D; /* jne: not equal / not zero */

loc_000F0C43: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F0C55;

loc_000F0C4D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F0C55: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F0C65u); RECOMP_ABI_CALL(0x000F0AF0u, sub_000F0AF0); /* call 0x000F0AF0 */

loc_000F0C65: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0C80
 * Original: 0x000F0C80 - 0x000F0E3B (443 bytes, 126 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F0C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000F0C80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F0E35; /* jnp: not parity */

loc_000F0CA1: ;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0CD3; /* je: equal / zero */

loc_000F0CAA: ;
    eax = MEM32(0x758DBC);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x758DC8)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42936C); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_000F0CD3: ;
    edx = MEM32(esi);
    edx = edx & 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = edx;
    if ((_fa == 0)) goto loc_000F0D0C; /* je: equal / zero */

loc_000F0CE1: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x40);
    ebx = MEM32(eax + 0x44);
    edi = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0D03u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F0D03: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F0D14;

loc_000F0D0C: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);

loc_000F0D14: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F0E13; /* jnp: not parity */

loc_000F0D2A: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    fp_top() = cos(fp_top()); /* fcos */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(eax + 0x40);
    xmm3 = xmm0; /* movaps */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = ecx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F0E13; /* je: equal / zero */

loc_000F0DF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F0E04; /* je: equal / zero */

loc_000F0DFD: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F0E07;

loc_000F0E04: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F0E07: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0E10u); RECOMP_ABI_CALL(0x000E1E80u, sub_000E1E80); /* call 0x000E1E80 */

loc_000F0E10: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F0E13: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0E35; /* je: equal / zero */

loc_000F0E17: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0E1Du); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F0E1D: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;

loc_000F0E35: ;
    POP32(esp, edi);
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
 * sub_000F0E40
 * Original: 0x000F0E40 - 0x000F0EB2 (114 bytes, 28 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0E40: ;
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
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F0E8D; /* jne: not equal / not zero */

loc_000F0E83: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F0E95;

loc_000F0E8D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F0E95: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F0EA5u); RECOMP_ABI_CALL(0x000F0C80u, sub_000F0C80); /* call 0x000F0C80 */

loc_000F0EA5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0EC0
 * Original: 0x000F0EC0 - 0x000F107D (445 bytes, 126 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F0EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000F0EC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F1077; /* jnp: not parity */

loc_000F0EE1: ;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0F13; /* je: equal / zero */

loc_000F0EEA: ;
    eax = MEM32(0x758DBC);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x758DC8)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42936C); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_000F0F13: ;
    edx = MEM32(esi);
    edx = edx & 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = edx;
    if ((_fa == 0)) goto loc_000F0F4C; /* je: equal / zero */

loc_000F0F21: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x40);
    ebx = MEM32(eax + 0x44);
    edi = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0F43u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F0F43: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F0F54;

loc_000F0F4C: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);

loc_000F0F54: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F1055; /* jnp: not parity */

loc_000F0F6A: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    fp_top() = cos(fp_top()); /* fcos */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    ecx = MEM32(eax + 0x40);
    xmm4 = xmm2; /* movaps */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F1055; /* je: equal / zero */

loc_000F1035: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F1046; /* je: equal / zero */

loc_000F103F: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F1049;

loc_000F1046: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1049: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1052u); RECOMP_ABI_CALL(0x000E1F50u, sub_000E1F50); /* call 0x000E1F50 */

loc_000F1052: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1055: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1077; /* je: equal / zero */

loc_000F1059: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F105Fu); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F105F: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;

loc_000F1077: ;
    POP32(esp, edi);
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
 * sub_000F1080
 * Original: 0x000F1080 - 0x000F10F2 (114 bytes, 28 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1080: ;
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
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F10CD; /* jne: not equal / not zero */

loc_000F10C3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F10D5;

loc_000F10CD: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F10D5: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F10E5u); RECOMP_ABI_CALL(0x000F0EC0u, sub_000F0EC0); /* call 0x000F0EC0 */

loc_000F10E5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1100
 * Original: 0x000F1100 - 0x000F1604 (1284 bytes, 340 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F1100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000F1100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F115E; /* je: equal / zero */

loc_000F1116: ;
    eax = MEM32(0x758DBC);
    ecx = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x758DC8)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42936C); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */

loc_000F115E: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F118A; /* je: equal / zero */

loc_000F1177: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1183u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F1183: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F118A: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    edx = 4;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F1291; /* jnp: not parity */

loc_000F11A3: ;
    fp_push(MEMF(edi)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm3 = xmm0; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1291; /* je: equal / zero */

loc_000F1261: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F1280; /* je: equal / zero */

loc_000F126A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F127B; /* je: equal / zero */

loc_000F1274: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F1282;

loc_000F127B: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F1282;

loc_000F1280: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F1282: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F128Au); RECOMP_ABI_CALL(0x000E1B50u, sub_000E1B50); /* call 0x000E1B50 */

loc_000F128A: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1291: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F1443; /* jnp: not parity */

loc_000F12A3: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm4 = xmm2; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1443; /* je: equal / zero */

loc_000F1368: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F1387; /* je: equal / zero */

loc_000F1371: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F1382; /* je: equal / zero */

loc_000F137B: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F1389;

loc_000F1382: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F1389;

loc_000F1387: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F1389: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm4 = xmm2; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */

loc_000F1443: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F15F1; /* jnp: not parity */

loc_000F1455: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F15F1; /* je: equal / zero */

loc_000F1515: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F1534; /* je: equal / zero */

loc_000F151E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F152F; /* je: equal / zero */

loc_000F1528: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F1536;

loc_000F152F: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F1536;

loc_000F1534: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F1536: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edi = MEM32(eax + 0x40);
    fp_top() = cos(fp_top()); /* fcos */
    xmm3 = xmm0; /* movaps */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = edi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */

loc_000F15F1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F15FE; /* je: equal / zero */

loc_000F15F5: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F15FBu); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F15FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F15FE: ;
    POP32(esp, edi);
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
 * sub_000F1610
 * Original: 0x000F1610 - 0x000F1676 (102 bytes, 24 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1610: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = ecx;
    MEM32(0x758D4C) = MEM32(0x758D4C) - 1;
    _fa = (uint32_t)(MEM32(0x758D4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(0x758D48) = eax;
    eax = esp + 4;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x000F166Au); RECOMP_ABI_CALL(0x000F1100u, sub_000F1100); /* call 0x000F1100 */

loc_000F166A: ;
    eax = MEM32(esp + 0x14);
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
 * sub_000F1680
 * Original: 0x000F1680 - 0x000F1742 (194 bytes, 61 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F1680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F1680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F173D; /* jnp: not parity */

loc_000F169E: ;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F16D0; /* je: equal / zero */

loc_000F16A7: ;
    eax = MEM32(0x758DBC);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x758DC8)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42936C); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_000F16D0: ;
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F16E9; /* je: equal / zero */

loc_000F16DA: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F16E6u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F16E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F16E9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F1730; /* jnp: not parity */

loc_000F16FB: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1707u); RECOMP_ABI_CALL(0x000E1B50u, sub_000E1B50); /* call 0x000E1B50 */

loc_000F1707: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F1730; /* je: equal / zero */

loc_000F1713: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F1724; /* je: equal / zero */

loc_000F171D: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F1727;

loc_000F1724: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1727: ;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F172Du); RECOMP_ABI_CALL(0x000E1B50u, sub_000E1B50); /* call 0x000E1B50 */

loc_000F172D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1730: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F173D; /* je: equal / zero */

loc_000F1734: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F173Au); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F173A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F173D: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1750
 * Original: 0x000F1750 - 0x000F17C2 (114 bytes, 28 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1750: ;
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
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F179D; /* jne: not equal / not zero */

loc_000F1793: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F17A5;

loc_000F179D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F17A5: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F17B5u); RECOMP_ABI_CALL(0x000F1680u, sub_000F1680); /* call 0x000F1680 */

loc_000F17B5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F17D0
 * Original: 0x000F17D0 - 0x000F194E (382 bytes, 105 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F17D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000F17D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F1949; /* jnp: not parity */

loc_000F17F0: ;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1822; /* je: equal / zero */

loc_000F17F9: ;
    eax = MEM32(0x758DBC);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x758DC8)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42936C); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_000F1822: ;
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F183B; /* je: equal / zero */

loc_000F182C: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1838u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F1838: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F183B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F193C; /* jnp: not parity */

loc_000F1851: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    fp_top() = cos(fp_top()); /* fcos */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(eax + 0x40);
    xmm4 = xmm2; /* movaps */
    edx = edx | 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = edx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F193C; /* je: equal / zero */

loc_000F191C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F192D; /* je: equal / zero */

loc_000F1926: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F1930;

loc_000F192D: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1930: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1939u); RECOMP_ABI_CALL(0x000E1C20u, sub_000E1C20); /* call 0x000E1C20 */

loc_000F1939: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F193C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1949; /* je: equal / zero */

loc_000F1940: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1946u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F1946: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1949: ;
    POP32(esp, edi);
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
 * sub_000F1950
 * Original: 0x000F1950 - 0x000F19C2 (114 bytes, 28 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1950: ;
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
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F199D; /* jne: not equal / not zero */

loc_000F1993: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F19A5;

loc_000F199D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F19A5: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F19B5u); RECOMP_ABI_CALL(0x000F17D0u, sub_000F17D0); /* call 0x000F17D0 */

loc_000F19B5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F19D0
 * Original: 0x000F19D0 - 0x000F1B4C (380 bytes, 105 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F19D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000F19D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F1B47; /* jnp: not parity */

loc_000F19F0: ;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A22; /* je: equal / zero */

loc_000F19F9: ;
    eax = MEM32(0x758DBC);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x758DC8)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x42936C); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_000F1A22: ;
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F1A3B; /* je: equal / zero */

loc_000F1A2C: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1A38u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F1A38: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1A3B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F1B3A; /* jnp: not parity */

loc_000F1A51: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    fp_top() = cos(fp_top()); /* fcos */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    edx = MEM32(eax + 0x40);
    xmm3 = xmm0; /* movaps */
    edx = edx | 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F1B3A; /* je: equal / zero */

loc_000F1B1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F1B2B; /* je: equal / zero */

loc_000F1B24: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F1B2E;

loc_000F1B2B: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1B2E: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1B37u); RECOMP_ABI_CALL(0x000E1CF0u, sub_000E1CF0); /* call 0x000E1CF0 */

loc_000F1B37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1B3A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1B47; /* je: equal / zero */

loc_000F1B3E: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1B44u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F1B44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1B47: ;
    POP32(esp, edi);
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
 * sub_000F1B50
 * Original: 0x000F1B50 - 0x000F1BC2 (114 bytes, 28 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1B50: ;
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
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F1B9D; /* jne: not equal / not zero */

loc_000F1B93: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F1BA5;

loc_000F1B9D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F1BA5: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F1BB5u); RECOMP_ABI_CALL(0x000F19D0u, sub_000F19D0); /* call 0x000F19D0 */

loc_000F1BB5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1BD0
 * Original: 0x000F1BD0 - 0x000F1D2C (348 bytes, 120 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F1BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000F1D04; /* je: equal / zero */

loc_000F1BEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_000F1C15; /* je: equal / zero */

loc_000F1BF1: ;
    ecx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1C0F; /* je: equal / zero */

loc_000F1BFA: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1C0F; /* je: equal / zero */

loc_000F1C01: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1C0F; /* je: equal / zero */

loc_000F1C08: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F1BF1; /* jne: not equal / not zero */

loc_000F1C0D: ;
    goto loc_000F1C17;

loc_000F1C0F: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_000F1C1B;

loc_000F1C15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F1C17: ;
    MEM32(esp + 0xC) = ecx;

loc_000F1C1B: ;
    edx = MEM32(esp + 0x50);
    ecx = 0x3F800000;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0xC);
    edx = edx & 0xFFFFFFC3u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x50) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F1CC4; /* je: equal / zero */

loc_000F1C73: ;
    goto loc_000F1C77;

loc_000F1C75: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F1C77: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F1C88; /* je: equal / zero */

loc_000F1C7F: ;
    eax = MEM32(ebx + 0x14);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1C88: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    eax = esp + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1C97u); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_000F1C97: ;
    ecx = 0x14;
    esi = esp + 0x68;
    edi = esp + 0x18;
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
    ebx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1CBC; /* je: equal / zero */

loc_000F1CB0: ;
    ebx = MEM32(ebx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1CBC; /* je: equal / zero */

loc_000F1CB7: ;
    ebx = MEM32(ebx + 4);
    goto loc_000F1CBE;

loc_000F1CBC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F1CBE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1C75; /* jne: not equal / not zero */

loc_000F1CC4: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    eax = esp + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1CDAu); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_000F1CDA: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esp + 0x98);
    ecx = MEM32(esp + 0x9C);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xA0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000F1D04: ;
    edx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1D0Bu); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_000F1D0B: ;
    eax = MEM32(ebx + 0xC);
    edx = MEM32(eax + 0x30);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, esi);
    MEM32(ecx + 8) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1D30
 * Original: 0x000F1D30 - 0x000F1DAC (124 bytes, 28 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1D30: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = esp + -12;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x000F1D5Au); RECOMP_ABI_CALL(0x000F1BD0u, sub_000F1BD0); /* call 0x000F1BD0 */

loc_000F1D5A: ;
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
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F1DB0
 * Original: 0x000F1DB0 - 0x000F1DDB (43 bytes, 11 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1DB0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F1DD2u); RECOMP_ABI_CALL(0x00034F60u, sub_00034F60); /* call 0x00034F60 */

loc_000F1DD2: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1DE0
 * Original: 0x000F1DE0 - 0x000F1E1A (58 bytes, 19 insns)
 * Folder: ai (between: 0x000F0490 and 0x000F1E20)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1DE0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x10000 (32-bit) */
    eax = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F1E05; /* je: equal / zero */

loc_000F1DEB: ;
    edx = MEM32(eax + 0x80);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

loc_000F1E05: ;
    edx = MEM32(eax + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1E20
 * Original: 0x000F1E20 - 0x000F1EA1 (129 bytes, 33 insns)
 * Folder: ai (match: xbox-demo 0x00102230, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1E20: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x10000 (32-bit) */
    eax = MEM32(eax + 0xC);
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000F1E4F; /* je: equal / zero */

loc_000F1E48: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F1E52;

loc_000F1E4F: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1E52: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
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
 * sub_000F1EB0
 * Original: 0x000F1EB0 - 0x000F1F37 (135 bytes, 46 insns)
 * Folder: ai (between: 0x000F1E20 and 0x000F2000)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F1EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(0x67B6A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x67B6A0), esi (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000F1ECA; /* jne: not equal / not zero */

loc_000F1EC0: ;
    MEM32(0x7585A0) = 0;

loc_000F1ECA: ;
    ebx = MEM32(esi);
    ebx = ebx & 0x400000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F1EDB; /* je: equal / zero */

loc_000F1ED4: ;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1EDBu); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_000F1EDB: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi);
    MEM32(eax + 0x30) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x38) = ecx;
    ecx = MEM32(eax + 0x40);
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(eax + 0x40) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F1F05; /* je: equal / zero */

loc_000F1EFC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1F02u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F1F02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1F05: ;
    eax = MEM32(0x7584B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1F21; /* jne: not equal / not zero */

loc_000F1F0E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F1F21; /* je: equal / zero */

loc_000F1F16: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1F1Eu); RECOMP_ABI_CALL(0x0003C220u, sub_0003C220); /* call 0x0003C220 */

loc_000F1F1E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1F21: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F1F32; /* je: equal / zero */

loc_000F1F26: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F1F32: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1F40
 * Original: 0x000F1F40 - 0x000F1F8D (77 bytes, 20 insns)
 * Folder: ai (between: 0x000F1E20 and 0x000F2000)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1F40: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = eax + 0x696528;
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, 0x000F1F83u); RECOMP_ABI_CALL(0x000F1EB0u, sub_000F1EB0); /* call 0x000F1EB0 */

loc_000F1F83: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1F90
 * Original: 0x000F1F90 - 0x000F1FF6 (102 bytes, 39 insns)
 * Folder: ai (between: 0x000F1E20 and 0x000F2000)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F1F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1F90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F1FF1; /* je: equal / zero */

loc_000F1F9C: ;
    esi = MEM32(edi);
    esi = esi & 0x400000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F1FAD; /* je: equal / zero */

loc_000F1FA6: ;
    edx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1FADu); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_000F1FAD: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x38) = ecx;
    ecx = MEM32(eax + 0x40);
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(eax + 0x40) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F1FDE; /* je: equal / zero */

loc_000F1FD5: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1FDBu); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F1FDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1FDE: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F1FF1; /* je: equal / zero */

loc_000F1FE6: ;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1FEEu); RECOMP_ABI_CALL(0x0003C220u, sub_0003C220); /* call 0x0003C220 */

loc_000F1FEE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1FF1: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2000
 * Original: 0x000F2000 - 0x000F204D (77 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00102400, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2000: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    ebx = MEM32(eax + 0x696508);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, 0x000F2043u); RECOMP_ABI_CALL(0x000F1F90u, sub_000F1F90); /* call 0x000F1F90 */

loc_000F2043: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2050
 * Original: 0x000F2050 - 0x000F20C1 (113 bytes, 43 insns)
 * Folder: ai (between: 0x000F2000 and 0x000F20D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F2050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F20BB; /* je: equal / zero */

loc_000F2061: ;
    eax = MEM32(ebx);
    eax = eax & 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = eax;
    if ((_fa == 0)) goto loc_000F2075; /* je: equal / zero */

loc_000F206E: ;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2075u); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_000F2075: ;
    esi = MEM32(esi + 0xC);
    edi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2086; /* je: equal / zero */

loc_000F207F: ;
    ecx = 0x14;
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

loc_000F2086: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2097; /* je: equal / zero */

loc_000F208E: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2094u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F2094: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F2097: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F20AA; /* je: equal / zero */

loc_000F209F: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F20A7u); RECOMP_ABI_CALL(0x0003C220u, sub_0003C220); /* call 0x0003C220 */

loc_000F20A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F20AA: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F20BB; /* je: equal / zero */

loc_000F20AF: ;
    eax = MEM32(ebx + 0x14);
    eax = MEM32(eax + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F20BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F20D0
 * Original: 0x000F20D0 - 0x000F211B (75 bytes, 18 insns)
 * Folder: ai (match: xbox-demo 0x001024C0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F20D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F20D0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    MEM32(0x758D68) = ecx;
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
    PUSH32(esp, 0x000F2112u); RECOMP_ABI_CALL(0x000F2050u, sub_000F2050); /* call 0x000F2050 */

loc_000F2112: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2120
 * Original: 0x000F2120 - 0x000F217B (91 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x00102510, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2120: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F2143u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F2143: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x000F214Cu); RECOMP_ABI_CALL(0x00015690u, sub_00015690); /* call 0x00015690 */

loc_000F214C: ;
    edx = edi;
    edx = edx & 0xFE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F2171; /* jne: not equal / not zero */

loc_000F2159: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F2171; /* je: equal / zero */

loc_000F215E: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F2166u); RECOMP_ABI_CALL(0x000E8B40u, sub_000E8B40); /* call 0x000E8B40 */

loc_000F2166: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F216Eu); RECOMP_ABI_CALL(0x000E8B40u, sub_000E8B40); /* call 0x000E8B40 */

loc_000F216E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F2171: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2180
 * Original: 0x000F2180 - 0x000F21C7 (71 bytes, 22 insns)
 * Folder: ai (between: 0x000F2120 and 0x000F21D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2180: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F21A3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F21A3: ;
    esi = eax;
    PUSH32(esp, 0x000F21AAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F21AA: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F21BD; /* je: equal / zero */

loc_000F21B1: ;
    esi = ~esi;
    SET_LO16(esi, LO16(esi) & MEM16(ecx + 0x2E));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0x2E) = LO16(esi);

loc_000F21BD: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F21D0
 * Original: 0x000F21D0 - 0x000F2237 (103 bytes, 23 insns)
 * Folder: ai (match: xbox-demo 0x001025C0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F21D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F21D0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000F221B; /* jne: not equal / not zero */

loc_000F2211: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F2223;

loc_000F221B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F2223: ;
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F222F; /* je: equal / zero */

loc_000F222A: ;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */

loc_000F222F: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F2240
 * Original: 0x000F2240 - 0x000F2386 (326 bytes, 100 insns)
 * Folder: ai (match: xbox-demo 0x00102630, between)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000F2240(void)
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

loc_000F2240: ;
    eax = MEM32(edx + 0x18);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2382; /* je: equal / zero */

loc_000F224E: ;
    ecx = MEM32(edx + 0x10);
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64506C);
    PUSH32(esp, esi);
    esi = MEM32(0x645074);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x645070);
    if (CMP_EQ(_fa, _fb)) goto loc_000F228A; /* je: equal / zero */

loc_000F2271: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x18);
    MEM32(esp + 0x24) = ebp;
    ebp = MEM32(ecx + 0x1C);
    MEM32(esp + 0x28) = ebp;
    ebp = MEM32(ecx + 0x20);
    MEM32(esp + 0x2C) = ebp;
    POP32(esp, ebp);
    goto loc_000F2296;

loc_000F228A: ;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = esi;

loc_000F2296: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F22B2; /* je: equal / zero */

loc_000F229B: ;
    eax = MEM32(ecx + 0x24);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(ecx + 0x2C);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    goto loc_000F22BE;

loc_000F22B2: ;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = esi;

loc_000F22BE: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    POP32(esp, edi);
    fp_top() = fabs(fp_top()); /* fabs */
    POP32(esp, esi);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000F22E9; /* ja: above (unsigned >) */

loc_000F22E3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_000F22E9: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000F2317; /* ja: above (unsigned >) */

loc_000F2312: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_000F2317: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000F2345; /* ja: above (unsigned >) */

loc_000F2340: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_000F2345: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    eax = MEM32(edx + 0x18);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM8(eax + 0x2E) = MEM8(eax + 0x2E) | 8;
    _fa = (uint32_t)(MEM8(eax + 0x2E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    edx = MEM32(edx + 0x18);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429398)); /* fadd dword ptr [0x429398] */
    MEMF(edx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_000F2382: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F2390
 * Original: 0x000F2390 - 0x000F23B9 (41 bytes, 9 insns)
 * Folder: ai (match: xbox-demo 0x00102780, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2390: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F23B1u); RECOMP_ABI_CALL(0x000F2240u, sub_000F2240); /* call 0x000F2240 */

loc_000F23B1: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F23C0
 * Original: 0x000F23C0 - 0x000F246D (173 bytes, 43 insns)
 * Folder: ai (match: xbox-demo 0x001027B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F23C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F23C0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0xC);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi + 0x696528;
    MEM32(0x758D70) = ecx;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    MEM32(edx * 8 + 0x68642C) = esi;
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(0x758D48) = edi;
    MEM16(edx * 8 + 0x686428) = 2;
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEMF(esi) = xmm3.f[0]; /* movss */
    MEM32(0x758D4C) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2470
 * Original: 0x000F2470 - 0x000F2508 (152 bytes, 38 insns)
 * Folder: ai (match: xbox-demo 0x00102860, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2470: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0xC);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi + 0x696528;
    MEM32(0x758D70) = ecx;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    xmm2 = xmm1; /* movaps */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    MEM32(edx * 8 + 0x68642C) = esi;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(0x758D48) = edi;
    MEM16(edx * 8 + 0x686428) = 2;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEMF(esi) = xmm2.f[0]; /* movss */
    MEM32(0x758D4C) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2510
 * Original: 0x000F2510 - 0x000F252E (30 bytes, 11 insns)
 * Folder: ai (between: 0x000F2470 and 0x000F2890)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2510: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    ecx = ~ecx;
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xFFFF0000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000F2525u); RECOMP_ABI_CALL(0x000230D0u, sub_000230D0); /* call 0x000230D0 */

loc_000F2525: ;
    eax = edi;
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2530
 * Original: 0x000F2530 - 0x000F25C2 (146 bytes, 42 insns)
 * Folder: ai (between: 0x000F2470 and 0x000F2890)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F2530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2530: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F253Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F253F: ;
    ecx = MEM32(0x758D64);
    ebx = MEM32(0x758D70);
    esi = eax;
    eax = MEM32(0x758D6C);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2562u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F2562: ;
    edx = MEM32(ebx + 4);
    esi = ~esi;
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    edx = edx & 0xFFFF0000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F257Au); RECOMP_ABI_CALL(0x000230D0u, sub_000230D0); /* call 0x000230D0 */

loc_000F257A: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 0xFFFF0000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edi;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(ebp + 8);
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
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F25D0
 * Original: 0x000F25D0 - 0x000F2639 (105 bytes, 23 insns)
 * Folder: ai (between: 0x000F2470 and 0x000F2890)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F25D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F25D0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F25FC; /* je: equal / zero */

loc_000F25F3: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFF0000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000F25FC: ;
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
 * sub_000F2640
 * Original: 0x000F2640 - 0x000F2678 (56 bytes, 17 insns)
 * Folder: ai (between: 0x000F2470 and 0x000F2890)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2640: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    edi = edi & 0xFFFF0000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2663; /* je: equal / zero */

loc_000F264E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x200000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F2676; /* jne: not equal / not zero */

loc_000F2656: ;
    edi = edi | 0x200000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000F2661u); RECOMP_ABI_CALL(0x000230D0u, sub_000230D0); /* call 0x000230D0 */

loc_000F2661: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000F2663: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F2676; /* je: equal / zero */

loc_000F266B: ;
    edi = edi & 0xFFDFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x000F2676u); RECOMP_ABI_CALL(0x000230D0u, sub_000230D0); /* call 0x000230D0 */

loc_000F2676: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2680
 * Original: 0x000F2680 - 0x000F26EE (110 bytes, 32 insns)
 * Folder: ai (between: 0x000F2470 and 0x000F2890)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2680: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F26A3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F26A3: ;
    edi = MEM32(esi + 4);
    edi = edi & 0xFFFF0000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F26CF; /* je: equal / zero */

loc_000F26B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x200000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F26E4; /* jne: not equal / not zero */

loc_000F26B8: ;
    edi = edi | 0x200000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    PUSH32(esp, 0x000F26C5u); RECOMP_ABI_CALL(0x000230D0u, sub_000230D0); /* call 0x000230D0 */

loc_000F26C5: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F26CF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F26E4; /* je: equal / zero */

loc_000F26D7: ;
    edi = edi & 0xFFDFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    PUSH32(esp, 0x000F26E4u); RECOMP_ABI_CALL(0x000230D0u, sub_000230D0); /* call 0x000230D0 */

loc_000F26E4: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F26F0
 * Original: 0x000F26F0 - 0x000F27DF (239 bytes, 77 insns)
 * Folder: ai (between: 0x000F2470 and 0x000F2890)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F26F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F26F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = MEM32(esi + 4);
    edi = edi & 0xFFFF0000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2716; /* je: equal / zero */

loc_000F2702: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F27DB; /* jne: not equal / not zero */

loc_000F270E: ;
    edi = edi | 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000F2728;

loc_000F2716: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F27DB; /* je: equal / zero */

loc_000F2722: ;
    edi = edi & 0xFFBFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000F2728: ;
    eax = esi;
    PUSH32(esp, 0x000F272Fu); RECOMP_ABI_CALL(0x000230D0u, sub_000230D0); /* call 0x000230D0 */

loc_000F272F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F275D; /* jne: not equal / not zero */

loc_000F2733: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F27DB; /* je: equal / zero */

loc_000F273C: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F27DB; /* jne: not equal / not zero */

loc_000F2746: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F274Eu); RECOMP_ABI_CALL(0x000E8B40u, sub_000E8B40); /* call 0x000E8B40 */

loc_000F274E: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F2756u); RECOMP_ABI_CALL(0x000E8B40u, sub_000E8B40); /* call 0x000E8B40 */

loc_000F2756: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000F275D: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F27DB; /* je: equal / zero */

loc_000F2765: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F27DB; /* je: equal / zero */

loc_000F276C: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F27DB; /* je: equal / zero */

loc_000F2773: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F27DB; /* jne: not equal / not zero */

loc_000F2778: ;
    edx = esi;
    PUSH32(esp, 0x000F277Fu); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_000F277F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F2790; /* je: equal / zero */

loc_000F2787: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F278Du); RECOMP_ABI_CALL(0x0003B790u, sub_0003B790); /* call 0x0003B790 */

loc_000F278D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F2790: ;
    edx = MEM32(esi);
    ecx = MEM32(0x44AA20);
    edx = edx & 0xFFBFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x17C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x17C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    PUSH32(esp, 0x000F27ABu); RECOMP_ABI_CALL(0x000DEB70u, sub_000DEB70); /* call 0x000DEB70 */

loc_000F27AB: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F27D1; /* je: equal / zero */

loc_000F27B5: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F27C3; /* jne: not equal / not zero */

loc_000F27BE: ;
    PUSH32(esp, 0x000F27C3u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000F27C3: ;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F27D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F27CEu); } /* indirect call */
    }

loc_000F27D1: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 8) = 0;

loc_000F27DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F27E0
 * Original: 0x000F27E0 - 0x000F281E (62 bytes, 21 insns)
 * Folder: ai (between: 0x000F2470 and 0x000F2890)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F27E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F27E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2809u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F2809: ;
    ebx = eax;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2812u); RECOMP_ABI_CALL(0x000F26F0u, sub_000F26F0); /* call 0x000F26F0 */

loc_000F2812: ;
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
 * sub_000F2820
 * Original: 0x000F2820 - 0x000F2889 (105 bytes, 23 insns)
 * Folder: ai (between: 0x000F2470 and 0x000F2890)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2820: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F284C; /* je: equal / zero */

loc_000F2843: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000F284C: ;
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
 * sub_000F2890
 * Original: 0x000F2890 - 0x000F28DB (75 bytes, 22 insns)
 * Folder: ai (match: xbox-demo 0x00102C00, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2890: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F28B3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F28B3: ;
    esi = eax;
    PUSH32(esp, 0x000F28BAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F28BA: ;
    edx = MEM32(edi + 4);
    esi = esi & 0xFF00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ~esi;
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0xC);
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F28E0
 * Original: 0x000F28E0 - 0x000F2942 (98 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00102C50, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F28E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F28E0: ;
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D70);
    ecx = MEM32(ecx + 4);
    eax = MEM32(0x758D6C);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = edx + 0x696528;
    ecx = ecx & 0xFF00;
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
 * sub_000F2950
 * Original: 0x000F2950 - 0x000F29C6 (118 bytes, 27 insns)
 * Folder: ai (match: xbox-demo 0x00102CC0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2950: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F2972u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F2972: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(0x758D48);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    POP32(esp, esi);
    eax = ecx + 0x696528;
    if (TEST_Z(_fa, _fb)) goto loc_000F2991; /* je: equal / zero */

loc_000F2989: ;
    MEM32(eax) = 1;
    goto loc_000F2997;

loc_000F2991: ;
    MEM32(eax) = 0;

loc_000F2997: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
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
 * sub_000F29D0
 * Original: 0x000F29D0 - 0x000F2A3F (111 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x00102D40, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F29D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F29D0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F29F2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F29F2: ;
    ecx = MEM32(esi + 4);
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = ecx;
    esi = ecx;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(eax) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
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
 * sub_000F2A40
 * Original: 0x000F2A40 - 0x000F2A84 (68 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00102DB0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2A40: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F2A63u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F2A63: ;
    esi = eax;
    PUSH32(esp, 0x000F2A6Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F2A6A: ;
    ecx = MEM32(edi + 0x18);
    esi = ~esi;
    MEM16(ecx + 0x28) = MEM16(ecx + 0x28) & LO16(esi);
    _fa = (uint32_t)(MEM16(ecx + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edi = MEM32(edi + 0x18);
    MEM16(edi + 0x28) = MEM16(edi + 0x28) | LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2A90
 * Original: 0x000F2A90 - 0x000F2AF0 (96 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00102E00, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2A90: ;
    ecx = MEM32(0x758D70);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(0x758D64);
    ecx = ZX16(MEM16(ecx + 0x28));
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
 * sub_000F2AF0
 * Original: 0x000F2AF0 - 0x000F2B70 (128 bytes, 36 insns)
 * Folder: ai (match: xbox-demo 0x00102E60, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2AF0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F2B12u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F2B12: ;
    edx = MEM32(esi + 0x18);
    ecx = ZX16(MEM16(edx + 0x28));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    ecx = MEM32(0x758D48);
    POP32(esp, esi);
    eax = ecx + 0x696528;
    if (TEST_Z(_fa, _fb)) goto loc_000F2B32; /* je: equal / zero */

loc_000F2B2A: ;
    MEM32(eax) = 1;
    goto loc_000F2B38;

loc_000F2B32: ;
    MEM32(eax) = 0;

loc_000F2B38: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
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
 * sub_000F2B70
 * Original: 0x000F2B70 - 0x000F2BDC (108 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x00102EE0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2B70: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F2B96u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F2B96: ;
    MEM16(edi + 0x28) = MEM16(edi + 0x28) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    ecx = MEM32(0x758D48);
    edx = MEM32(esi + 4);
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
 * sub_000F2BE0
 * Original: 0x000F2BE0 - 0x000F2C77 (151 bytes, 56 insns)
 * Folder: ai (between: 0x000F2B70 and 0x000F31B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F2BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2BE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F2C20; /* je: equal / zero */

loc_000F2BF5: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x44);
    ebx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2C1Bu); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F2C1B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F2C24;

loc_000F2C20: ;
    ebx = MEM32(esp + 0x14);

loc_000F2C24: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2C35u); RECOMP_ABI_CALL(0x000E2020u, sub_000E2020); /* call 0x000E2020 */

loc_000F2C35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2C5E; /* je: equal / zero */

loc_000F2C3C: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2C42u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F2C42: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ebx;

loc_000F2C5E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F2C71; /* je: equal / zero */

loc_000F2C66: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2C6Eu); RECOMP_ABI_CALL(0x0003C220u, sub_0003C220); /* call 0x0003C220 */

loc_000F2C6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F2C71: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2C80
 * Original: 0x000F2C80 - 0x000F2D19 (153 bytes, 37 insns)
 * Folder: ai (between: 0x000F2B70 and 0x000F31B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2C80: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x696530);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 4;
    MEM32(esp + 0x14) = edx;
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000F2D0Au); RECOMP_ABI_CALL(0x000F2BE0u, sub_000F2BE0); /* call 0x000F2BE0 */

loc_000F2D0A: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000F2D20
 * Original: 0x000F2D20 - 0x000F2DB5 (149 bytes, 55 insns)
 * Folder: ai (between: 0x000F2B70 and 0x000F31B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F2D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2D20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F2D60; /* je: equal / zero */

loc_000F2D35: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x44);
    ebx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2D5Bu); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F2D5B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F2D64;

loc_000F2D60: ;
    ebx = MEM32(esp + 0x14);

loc_000F2D64: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2D73u); RECOMP_ABI_CALL(0x000E2020u, sub_000E2020); /* call 0x000E2020 */

loc_000F2D73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2D9C; /* je: equal / zero */

loc_000F2D7A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2D80u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F2D80: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebx;

loc_000F2D9C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F2DAF; /* je: equal / zero */

loc_000F2DA4: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2DACu); RECOMP_ABI_CALL(0x0003C220u, sub_0003C220); /* call 0x0003C220 */

loc_000F2DAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F2DAF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2DC0
 * Original: 0x000F2DC0 - 0x000F2E31 (113 bytes, 28 insns)
 * Folder: ai (between: 0x000F2B70 and 0x000F31B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2DC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(0x758D48) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x000F2E22u); RECOMP_ABI_CALL(0x000F2D20u, sub_000F2D20); /* call 0x000F2D20 */

loc_000F2E22: ;
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
 * sub_000F2E40
 * Original: 0x000F2E40 - 0x000F2F4A (266 bytes, 78 insns)
 * Folder: ai (between: 0x000F2B70 and 0x000F31B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F2E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F2F44; /* je: equal / zero */

loc_000F2E56: ;
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F2E83; /* je: equal / zero */

loc_000F2E60: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    edx = MEM32(eax + 0x44);
    ecx = MEM32(eax + 0x40);
    ebx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    edx = esi;
    MEM32(esp + 0x18) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2E81u); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_000F2E81: ;
    goto loc_000F2E87;

loc_000F2E83: ;
    ebx = MEM32(esp + 0x20);

loc_000F2E87: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(eax + 0x34);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x34); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x24;
    PUSH32(esp, 0);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    PUSH32(esp, edx);
    edx = esp + 0x14;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2F08u); RECOMP_ABI_CALL(0x000E2020u, sub_000E2020); /* call 0x000E2020 */

loc_000F2F08: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2F31; /* je: equal / zero */

loc_000F2F0F: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2F15u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F2F15: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ebx;

loc_000F2F31: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F2F44; /* je: equal / zero */

loc_000F2F39: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2F41u); RECOMP_ABI_CALL(0x0003C220u, sub_0003C220); /* call 0x0003C220 */

loc_000F2F41: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F2F44: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2F50
 * Original: 0x000F2F50 - 0x000F2F9F (79 bytes, 20 insns)
 * Folder: ai (between: 0x000F2B70 and 0x000F31B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2F50: ;
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
    PUSH32(esp, 0x000F2F93u); RECOMP_ABI_CALL(0x000F2E40u, sub_000F2E40); /* call 0x000F2E40 */

loc_000F2F93: ;
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
 * sub_000F2FA0
 * Original: 0x000F2FA0 - 0x000F3128 (392 bytes, 132 insns)
 * Folder: ai (between: 0x000F2B70 and 0x000F31B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F2FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000F30E0; /* je: equal / zero */

loc_000F2FBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_000F2FE5; /* je: equal / zero */

loc_000F2FC1: ;
    ecx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2FDF; /* je: equal / zero */

loc_000F2FCA: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2FDF; /* je: equal / zero */

loc_000F2FD1: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2FDF; /* je: equal / zero */

loc_000F2FD8: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F2FC1; /* jne: not equal / not zero */

loc_000F2FDD: ;
    goto loc_000F2FE7;

loc_000F2FDF: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_000F2FEB;

loc_000F2FE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F2FE7: ;
    MEM32(esp + 0xC) = ecx;

loc_000F2FEB: ;
    edx = MEM32(esp + 0x50);
    ecx = 0x3F800000;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0xC);
    edx = edx & 0xFFFFFFC3u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x50) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F3094; /* je: equal / zero */

loc_000F3043: ;
    goto loc_000F3047;

loc_000F3045: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F3047: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F3058; /* je: equal / zero */

loc_000F304F: ;
    eax = MEM32(ebx + 0x14);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F3058: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    eax = esp + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F3067u); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_000F3067: ;
    ecx = 0x14;
    esi = esp + 0x68;
    edi = esp + 0x18;
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
    ebx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F308C; /* je: equal / zero */

loc_000F3080: ;
    ebx = MEM32(ebx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F308C; /* je: equal / zero */

loc_000F3087: ;
    ebx = MEM32(ebx + 4);
    goto loc_000F308E;

loc_000F308C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F308E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3045; /* jne: not equal / not zero */

loc_000F3094: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    eax = esp + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F30AAu); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_000F30AA: ;
    edx = MEM32(esp + 0x78);
    eax = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x7C);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x80);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000F30E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F30F6; /* je: equal / zero */

loc_000F30E7: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F30F3u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F30F3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F30F6: ;
    eax = MEM32(ebx + 0xC);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    MEM32(ecx + 8) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3130
 * Original: 0x000F3130 - 0x000F31AC (124 bytes, 28 insns)
 * Folder: ai (between: 0x000F2B70 and 0x000F31B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3130: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = esp + -12;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x000F315Au); RECOMP_ABI_CALL(0x000F2FA0u, sub_000F2FA0); /* call 0x000F2FA0 */

loc_000F315A: ;
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
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F31B0
 * Original: 0x000F31B0 - 0x000F325C (172 bytes, 44 insns)
 * Folder: ai (match: xbox-demo 0x00103510, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F31B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F31B0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x758D68) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000F31E0; /* je: equal / zero */

loc_000F31D9: ;
    edx = esi;
    PUSH32(esp, 0x000F31E0u); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_000F31E0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F320A; /* je: equal / zero */

loc_000F31E8: ;
    eax = MEM32(esi + 0xC);
    esi = MEM32(eax + 0x60);
    edx = MEM32(eax + 0x64);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000F3216;

loc_000F320A: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);

loc_000F3216: ;
    edi = MEM32(0x758D48);
    ecx = edi + 0x696528;
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 3;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edx;
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
 * sub_000F31D7
 * Original: 0x000F31D7 - 0x000F325C (133 bytes, 35 insns)
 * Folder: ai (between: 0x000F31B0 and 0x000F3880)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F31D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F31D7: ;
    if (_flags /* je: equal / zero */) goto loc_000F31E0;

loc_000F31D9: ;
    edx = esi;
    PUSH32(esp, 0x000F31E0u); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_000F31E0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F320A; /* je: equal / zero */

loc_000F31E8: ;
    eax = MEM32(esi + 0xC);
    esi = MEM32(eax + 0x60);
    edx = MEM32(eax + 0x64);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000F3216;

loc_000F320A: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);

loc_000F3216: ;
    edi = MEM32(0x758D48);
    ecx = edi + 0x696528;
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 3;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edx;
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
 * sub_000F3260
 * Original: 0x000F3260 - 0x000F32F7 (151 bytes, 56 insns)
 * Folder: ai (between: 0x000F31B0 and 0x000F3880)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F3260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F32A0; /* je: equal / zero */

loc_000F3275: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x44);
    ebx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F329Bu); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F329B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F32A4;

loc_000F32A0: ;
    ebx = MEM32(esp + 0x14);

loc_000F32A4: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F32B5u); RECOMP_ABI_CALL(0x000E2370u, sub_000E2370); /* call 0x000E2370 */

loc_000F32B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F32DE; /* je: equal / zero */

loc_000F32BC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F32C2u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F32C2: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ebx;

loc_000F32DE: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F32F1; /* je: equal / zero */

loc_000F32E6: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F32EEu); RECOMP_ABI_CALL(0x0003C220u, sub_0003C220); /* call 0x0003C220 */

loc_000F32EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F32F1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3300
 * Original: 0x000F3300 - 0x000F3399 (153 bytes, 37 insns)
 * Folder: ai (between: 0x000F31B0 and 0x000F3880)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3300: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x696530);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 4;
    MEM32(esp + 0x14) = edx;
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000F338Au); RECOMP_ABI_CALL(0x000F3260u, sub_000F3260); /* call 0x000F3260 */

loc_000F338A: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000F3391
 * Original: 0x000F3391 - 0x000F3399 (8 bytes, 4 insns)
 * Folder: ai (between: 0x000F31B0 and 0x000F3880)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3391(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3391: ;
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
 * sub_000F33A0
 * Original: 0x000F33A0 - 0x000F3435 (149 bytes, 55 insns)
 * Folder: ai (between: 0x000F31B0 and 0x000F3880)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F33A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F33A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F33E0; /* je: equal / zero */

loc_000F33B5: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x44);
    ebx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F33DBu); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F33DB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F33E4;

loc_000F33E0: ;
    ebx = MEM32(esp + 0x14);

loc_000F33E4: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F33F3u); RECOMP_ABI_CALL(0x000E2370u, sub_000E2370); /* call 0x000E2370 */

loc_000F33F3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F341C; /* je: equal / zero */

loc_000F33FA: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F3400u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F3400: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebx;

loc_000F341C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F342F; /* je: equal / zero */

loc_000F3424: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F342Cu); RECOMP_ABI_CALL(0x0003C220u, sub_0003C220); /* call 0x0003C220 */

loc_000F342C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F342F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3440
 * Original: 0x000F3440 - 0x000F34B1 (113 bytes, 28 insns)
 * Folder: ai (between: 0x000F31B0 and 0x000F3880)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3440: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(0x758D48) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x000F34A2u); RECOMP_ABI_CALL(0x000F33A0u, sub_000F33A0); /* call 0x000F33A0 */

loc_000F34A2: ;
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
 * sub_000F34C0
 * Original: 0x000F34C0 - 0x000F3556 (150 bytes, 42 insns)
 * Folder: ai (between: 0x000F31B0 and 0x000F3880)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F34C0(void)
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

loc_000F34C0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F34D8; /* je: equal / zero */

loc_000F34C9: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F34D5u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F34D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F34D8: ;
    ecx = MEM32(esi + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F352C; /* jnp: not parity */

loc_000F3519: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_000F352C: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F3560
 * Original: 0x000F3560 - 0x000F366B (267 bytes, 66 insns)
 * Folder: ai (between: 0x000F31B0 and 0x000F3880)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3560(void)
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

loc_000F3560: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    MEM32(0x758D68) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000F3597; /* je: equal / zero */

loc_000F3588: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3594u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F3594: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F3597: ;
    ecx = MEM32(esi + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F35ED; /* jnp: not parity */

loc_000F35DA: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_000F35ED: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
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
 * sub_000F3670
 * Original: 0x000F3670 - 0x000F36FE (142 bytes, 40 insns)
 * Folder: ai (between: 0x000F31B0 and 0x000F3880)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3670(void)
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

loc_000F3670: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F3688; /* je: equal / zero */

loc_000F3679: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3685u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F3685: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F3688: ;
    ecx = MEM32(esi + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F36D8; /* jnp: not parity */

loc_000F36C5: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_000F36D8: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F3700
 * Original: 0x000F3700 - 0x000F3803 (259 bytes, 64 insns)
 * Folder: ai (between: 0x000F31B0 and 0x000F3880)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3700(void)
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

loc_000F3700: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    MEM32(0x758D68) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000F3737; /* je: equal / zero */

loc_000F3728: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3734u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F3734: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F3737: ;
    ecx = MEM32(esi + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F3789; /* jnp: not parity */

loc_000F3776: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_000F3789: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
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
 * sub_000F3810
 * Original: 0x000F3810 - 0x000F387E (110 bytes, 26 insns)
 * Folder: ai (between: 0x000F31B0 and 0x000F3880)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3810: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
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
    MEM32(esp) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 4) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(esp + 0xC) = eax;
    eax = esp + 4;
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x000F3872u); RECOMP_ABI_CALL(0x00034960u, sub_00034960); /* call 0x00034960 */

loc_000F3872: ;
    eax = MEM32(esp + 0x14);
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
 * sub_000F3880
 * Original: 0x000F3880 - 0x000F3901 (129 bytes, 34 insns)
 * Folder: ai (match: xbox-demo 0x00103A50, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3880: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0xC);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 8 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000F38B3; /* je: equal / zero */

loc_000F38A8: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 0x1C);
    esi = MEM32(eax + 0x2C);
    goto loc_000F38BC;

loc_000F38B3: ;
    ecx = 0x3F800000;
    edx = ecx;
    esi = ecx;

loc_000F38BC: ;
    edi = MEM32(0x758D48);
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
 * sub_000F3910
 * Original: 0x000F3910 - 0x000F39AD (157 bytes, 45 insns)
 * Folder: ai (between: 0x000F3880 and 0x000F39B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F3910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    if (CMP_NE(_fa, _fb)) goto loc_000F3966; /* jne: not equal / not zero */

loc_000F395C: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F396E;

loc_000F3966: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F396E: ;
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fa == 0)) goto loc_000F3985; /* je: equal / zero */

loc_000F397E: ;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F3985u); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_000F3985: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F3991u); RECOMP_ABI_CALL(0x00034A50u, sub_00034A50); /* call 0x00034A50 */

loc_000F3991: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F39A1; /* je: equal / zero */

loc_000F3998: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F399Eu); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F399E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F39A1: ;
    eax = MEM32(ebp + 8);
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
 * sub_000F39B0
 * Original: 0x000F39B0 - 0x000F3A60 (176 bytes, 43 insns)
 * Folder: ai (match: xbox-demo 0x00103B80, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F39B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F39B0: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0xC);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000F39ED; /* je: equal / zero */

loc_000F39DB: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = edx;
    goto loc_000F39F9;

loc_000F39ED: ;
    eax = 0x3F800000;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;

loc_000F39F9: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 8) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F3A10; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000F3A0D: ;
    xmm0 = xmm1; /* movaps */

loc_000F3A10: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F3A1E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000F3A1B: ;
    xmm0 = xmm1; /* movaps */

loc_000F3A1E: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
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
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F3A60
 * Original: 0x000F3A60 - 0x000F3AC0 (96 bytes, 24 insns)
 * Folder: ai (match: xbox-demo 0x00103C30, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3A60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3A60: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    ecx = MEM32(ecx);
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
 * sub_000F3AC0
 * Original: 0x000F3AC0 - 0x000F3B0F (79 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x00103C90, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F3AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F3AE9u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F3AE9: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F3AF0u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F3AF0: ;
    ecx = MEM32(edi);
    esi = ~esi;
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F3B00u); RECOMP_ABI_CALL(0x00021DA0u, sub_00021DA0); /* call 0x00021DA0 */

loc_000F3B00: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000F3B10
 * Original: 0x000F3B10 - 0x000F3B78 (104 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x00103CE0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000F3B10: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F3B32u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F3B32: ;
    esi = MEM32(esi);
    edx = MEM32(0x758D48);
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x758D4C);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = edx + 0x696528;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
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
    eax = MEM32(esp + 8);
    MEM32(ecx) = esi;
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3B80
 * Original: 0x000F3B80 - 0x000F3BE6 (102 bytes, 23 insns)
 * Folder: ai (match: xbox-demo 0x00103D50, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3B80: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    MEM32(0x758D68) = edx;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D70) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F3BA6; /* je: equal / zero */

loc_000F3BA3: ;
    SET_LO8(edx, MEM8(eax + 0x1E));

loc_000F3BA6: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(LO8(edx));
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
 * sub_000F3BF0
 * Original: 0x000F3BF0 - 0x000F3C71 (129 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00103DC0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3BF0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F3C13u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F3C13: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000F3C1Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F3C1A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3C2F; /* je: equal / zero */

loc_000F3C1E: ;
    SET_LO8(edx, MEM8(esi + 0x1E));
    SET_LO8(ebx, ~LO8(ebx));
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x1E) = LO8(ebx);
    ecx = ZX8(LO8(ebx));
    goto loc_000F3C32;

loc_000F3C2F: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F3C32: ;
    edx = MEM32(0x758D48);
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3C80
 * Original: 0x000F3C80 - 0x000F3CC0 (64 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00103E50, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3C80: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F3CA3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F3CA3: ;
    ebx = eax;
    PUSH32(esp, 0x000F3CAAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F3CAA: ;
    SET_LO8(edx, MEM8(esi + 0x1F));
    SET_LO8(ebx, ~LO8(ebx));
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esp + 0xC);
    MEM8(esi + 0x1F) = LO8(ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3CC0
 * Original: 0x000F3CC0 - 0x000F3D20 (96 bytes, 22 insns)
 * Folder: ai (match: xbox-demo 0x00103E90, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3CC0: ;
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D70);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x1F);
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
 * sub_000F3D20
 * Original: 0x000F3D20 - 0x000F3D55 (53 bytes, 15 insns)
 * Folder: ai (match: xbox-demo 0x00103EF0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3D20: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F3D42u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F3D42: ;
    SET_LO8(ecx, MEM8(esi + 0x1F));
    SET_LO8(eax, LO8(eax) & 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esp + 8);
    MEM8(esi + 0x1F) = LO8(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3D60
 * Original: 0x000F3D60 - 0x000F3E15 (181 bytes, 74 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3D60: ;
    PUSH32(esp, ecx);
    eax = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3E13; /* je: equal / zero */

loc_000F3D6E: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3E13; /* je: equal / zero */

loc_000F3D79: ;
    PUSH32(esp, esi);
    /* nop */

loc_000F3D80: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3D8C; /* jne: not equal / not zero */

loc_000F3D87: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3D96; /* je: equal / zero */

loc_000F3D8B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F3D8C: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3D80; /* jne: not equal / not zero */

loc_000F3D93: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000F3D96: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3E11; /* je: equal / zero */

loc_000F3D9E: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x000F3DA7u); RECOMP_ABI_CALL(0x000452C0u, sub_000452C0); /* call 0x000452C0 */

loc_000F3DA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3E11; /* je: equal / zero */

loc_000F3DAB: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) edx = ecx; /* cmovg */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(edi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_000F3E11; /* je: equal / zero */

loc_000F3DC0: ;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, ebp);

loc_000F3DC6: ;
    eax = MEM32(esi + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(esi + 0xC);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(esi);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ebx = edx;
    if (CMP_GE(_fas, _fbs)) ebx = eax; /* cmovge */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F3E09; /* jle: less or equal (signed <=) */

loc_000F3DE3: ;
    edx = MEM32(esi + 4);
    edx = MEM32(edx + eax * 4);
    ebp = MEM32(ecx + 4);
    MEM32(ebp + eax * 4) = edx;
    edx = MEM32(ecx + 4);
    ebp = MEM32(edx + eax * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 8) (32-bit) */
    edx = edx + eax * 4;
    if (CMP_L(_fas, _fbs)) goto loc_000F3E04; /* jl: less (signed <) */

loc_000F3DFE: ;
    MEM32(edx) = 0xFFFFFFFFu;

loc_000F3E04: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F3DE3; /* jl: less (signed <) */

loc_000F3E09: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F3DC6; /* jne: not equal / not zero */

loc_000F3E0F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000F3E11: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F3E13: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3E20
 * Original: 0x000F3E20 - 0x000F3E70 (80 bytes, 18 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3E20: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
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
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x000F3E65u); RECOMP_ABI_CALL(0x000F3D60u, sub_000F3D60); /* call 0x000F3D60 */

loc_000F3E65: ;
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
 * sub_000F3E70
 * Original: 0x000F3E70 - 0x000F3EA2 (50 bytes, 24 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3E70: ;
    eax = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3E9B; /* je: equal / zero */

loc_000F3E79: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3E9B; /* je: equal / zero */

loc_000F3E80: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E8C; /* jne: not equal / not zero */

loc_000F3E87: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3E94; /* je: equal / zero */

loc_000F3E8B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F3E8C: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E80; /* jne: not equal / not zero */

loc_000F3E93: ;
    esp += 4; return; /* ret */

loc_000F3E94: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E9E; /* jne: not equal / not zero */

loc_000F3E9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000F3E9E: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3EB0
 * Original: 0x000F3EB0 - 0x000F3F11 (97 bytes, 23 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3EB0: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    esi = edi + 0x696528;
    PUSH32(esp, 0x000F3EE0u); RECOMP_ABI_CALL(0x000F3E70u, sub_000F3E70); /* call 0x000F3E70 */

loc_000F3EE0: ;
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
 * sub_000F3F20
 * Original: 0x000F3F20 - 0x000F3F52 (50 bytes, 24 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3F20: ;
    eax = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F4B; /* je: equal / zero */

loc_000F3F29: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F4B; /* je: equal / zero */

loc_000F3F30: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3F3C; /* jne: not equal / not zero */

loc_000F3F37: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F44; /* je: equal / zero */

loc_000F3F3B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F3F3C: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3F30; /* jne: not equal / not zero */

loc_000F3F43: ;
    esp += 4; return; /* ret */

loc_000F3F44: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3F4E; /* jne: not equal / not zero */

loc_000F3F4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000F3F4E: ;
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3F60
 * Original: 0x000F3F60 - 0x000F3FC1 (97 bytes, 23 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3F60: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    esi = edi + 0x696528;
    PUSH32(esp, 0x000F3F90u); RECOMP_ABI_CALL(0x000F3F20u, sub_000F3F20); /* call 0x000F3F20 */

loc_000F3F90: ;
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
 * sub_000F3FD0
 * Original: 0x000F3FD0 - 0x000F4017 (71 bytes, 32 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3FD0: ;
    eax = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3FF4; /* je: equal / zero */

loc_000F3FDA: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3FF4; /* je: equal / zero */

loc_000F3FE1: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3FED; /* jne: not equal / not zero */

loc_000F3FE8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3FF9; /* je: equal / zero */

loc_000F3FEC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F3FED: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3FE1; /* jne: not equal / not zero */

loc_000F3FF4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F3FF9: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3FF4; /* je: equal / zero */

loc_000F4000: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F3FF4; /* jl: less (signed <) */

loc_000F4004: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F3FF4; /* jge: greater or equal (signed >=) */

loc_000F4009: ;
    ecx = MEM32(eax + 0x14);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(ecx + edx + 8)); /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4020
 * Original: 0x000F4020 - 0x000F408B (107 bytes, 24 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4020: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F4042u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4042: ;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0x000F404Bu); RECOMP_ABI_CALL(0x000F3FD0u, sub_000F3FD0); /* call 0x000F3FD0 */

loc_000F404B: ;
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
 * sub_000F4090
 * Original: 0x000F4090 - 0x000F40DA (74 bytes, 32 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4090: ;
    eax = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F40D9; /* je: equal / zero */

loc_000F4099: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F40D9; /* je: equal / zero */

loc_000F40A0: ;
    PUSH32(esp, esi);

loc_000F40A1: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F40AD; /* jne: not equal / not zero */

loc_000F40A8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F40B6; /* je: equal / zero */

loc_000F40AC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F40AD: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F40A1; /* jne: not equal / not zero */

loc_000F40B4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F40B6: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F40D8; /* je: equal / zero */

loc_000F40BD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F40D8; /* jl: less (signed <) */

loc_000F40C1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F40D8; /* jge: greater or equal (signed >=) */

loc_000F40C6: ;
    ecx = MEM32(eax + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(ecx + edx + 8) = xmm0.f[0]; /* movss */

loc_000F40D8: ;
    POP32(esp, esi);

loc_000F40D9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F40E0
 * Original: 0x000F40E0 - 0x000F415B (123 bytes, 31 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F40E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F40E0: ;
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
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F412D; /* jne: not equal / not zero */

loc_000F4123: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F4135;

loc_000F412D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F4135: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F4145u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4145: ;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0x000F414Eu); RECOMP_ABI_CALL(0x000F4090u, sub_000F4090); /* call 0x000F4090 */

loc_000F414E: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4160
 * Original: 0x000F4160 - 0x000F41A7 (71 bytes, 32 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4160: ;
    eax = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4184; /* je: equal / zero */

loc_000F416A: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4184; /* je: equal / zero */

loc_000F4171: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F417D; /* jne: not equal / not zero */

loc_000F4178: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4189; /* je: equal / zero */

loc_000F417C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F417D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4171; /* jne: not equal / not zero */

loc_000F4184: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F4189: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4184; /* je: equal / zero */

loc_000F4190: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F4184; /* jl: less (signed <) */

loc_000F4194: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4184; /* jge: greater or equal (signed >=) */

loc_000F4199: ;
    ecx = MEM32(eax + 0x14);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(ecx + edx + 0xC)); /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F41B0
 * Original: 0x000F41B0 - 0x000F421B (107 bytes, 24 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F41B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F41B0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F41D2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F41D2: ;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0x000F41DBu); RECOMP_ABI_CALL(0x000F4160u, sub_000F4160); /* call 0x000F4160 */

loc_000F41DB: ;
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
 * sub_000F4220
 * Original: 0x000F4220 - 0x000F426A (74 bytes, 32 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4220: ;
    eax = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4269; /* je: equal / zero */

loc_000F4229: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4269; /* je: equal / zero */

loc_000F4230: ;
    PUSH32(esp, esi);

loc_000F4231: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F423D; /* jne: not equal / not zero */

loc_000F4238: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4246; /* je: equal / zero */

loc_000F423C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F423D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4231; /* jne: not equal / not zero */

loc_000F4244: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F4246: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4268; /* je: equal / zero */

loc_000F424D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F4268; /* jl: less (signed <) */

loc_000F4251: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4268; /* jge: greater or equal (signed >=) */

loc_000F4256: ;
    ecx = MEM32(eax + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(ecx + edx + 0xC) = xmm0.f[0]; /* movss */

loc_000F4268: ;
    POP32(esp, esi);

loc_000F4269: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4270
 * Original: 0x000F4270 - 0x000F42EB (123 bytes, 31 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4270: ;
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
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F42BD; /* jne: not equal / not zero */

loc_000F42B3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F42C5;

loc_000F42BD: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F42C5: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F42D5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F42D5: ;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0x000F42DEu); RECOMP_ABI_CALL(0x000F4220u, sub_000F4220); /* call 0x000F4220 */

loc_000F42DE: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F42F0
 * Original: 0x000F42F0 - 0x000F4344 (84 bytes, 41 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F42F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F42F0: ;
    eax = MEM32(eax + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F4314; /* je: equal / zero */

loc_000F42FA: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4314; /* je: equal / zero */

loc_000F4301: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F430D; /* jne: not equal / not zero */

loc_000F4308: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4318; /* je: equal / zero */

loc_000F430C: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F430D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4301; /* jne: not equal / not zero */

loc_000F4314: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000F4318: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4314; /* je: equal / zero */

loc_000F431F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F4314; /* jl: less (signed <) */

loc_000F4323: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4314; /* jge: greater or equal (signed >=) */

loc_000F4328: ;
    edx = MEM32(eax + 0x14);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F4340; /* jl: less (signed <) */

loc_000F4334: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4340; /* jge: greater or equal (signed >=) */

loc_000F4338: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx + esi * 4);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000F4340: ;
    eax = MEM32(ecx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4350
 * Original: 0x000F4350 - 0x000F43C0 (112 bytes, 28 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4350: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F4373u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4373: ;
    esi = eax;
    PUSH32(esp, 0x000F437Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F437A: ;
    ecx = eax;
    eax = edi;
    PUSH32(esp, 0x000F4383u); RECOMP_ABI_CALL(0x000F42F0u, sub_000F42F0); /* call 0x000F42F0 */

loc_000F4383: ;
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
 * sub_000F43C0
 * Original: 0x000F43C0 - 0x000F4413 (83 bytes, 39 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F43C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F43C0: ;
    eax = MEM32(eax + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4412; /* je: equal / zero */

loc_000F43C9: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4412; /* je: equal / zero */

loc_000F43D0: ;
    PUSH32(esp, ebx);

loc_000F43D1: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F43DD; /* jne: not equal / not zero */

loc_000F43D8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F43E6; /* je: equal / zero */

loc_000F43DC: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F43DD: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F43D1; /* jne: not equal / not zero */

loc_000F43E4: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000F43E6: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4411; /* je: equal / zero */

loc_000F43ED: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F4411; /* jl: less (signed <) */

loc_000F43F1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4411; /* jge: greater or equal (signed >=) */

loc_000F43F6: ;
    ebx = MEM32(eax + 0x14);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F4411; /* jl: less (signed <) */

loc_000F4402: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4411; /* jge: greater or equal (signed >=) */

loc_000F4406: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4411; /* jge: greater or equal (signed >=) */

loc_000F440B: ;
    ecx = MEM32(ecx + 4);
    MEM32(ecx + esi * 4) = edi;

loc_000F4411: ;
    POP32(esp, ebx);

loc_000F4412: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4420
 * Original: 0x000F4420 - 0x000F4466 (70 bytes, 22 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4420: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F4444u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4444: ;
    esi = eax;
    PUSH32(esp, 0x000F444Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F444B: ;
    edi = eax;
    PUSH32(esp, 0x000F4452u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4452: ;
    ecx = eax;
    eax = ebx;
    PUSH32(esp, 0x000F445Bu); RECOMP_ABI_CALL(0x000F43C0u, sub_000F43C0); /* call 0x000F43C0 */

loc_000F445B: ;
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
 * sub_000F4470
 * Original: 0x000F4470 - 0x000F44D9 (105 bytes, 47 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4470: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000F4487; /* je: equal / zero */

loc_000F447A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F4480u); RECOMP_ABI_CALL(0x0003B870u, sub_0003B870); /* call 0x0003B870 */

loc_000F4480: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F44D7; /* je: equal / zero */

loc_000F4487: ;
    eax = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F44D7; /* je: equal / zero */

loc_000F4490: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F44D7; /* je: equal / zero */

loc_000F4497: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F44A3; /* jne: not equal / not zero */

loc_000F449E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F44AC; /* je: equal / zero */

loc_000F44A2: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F44A3: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4497; /* jne: not equal / not zero */

loc_000F44AA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F44AC: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F44D7; /* je: equal / zero */

loc_000F44B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F44D7; /* jl: less (signed <) */

loc_000F44B7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F44D7; /* jge: greater or equal (signed >=) */

loc_000F44BC: ;
    edx = MEM32(eax + 0x14);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F44D7; /* jl: less (signed <) */

loc_000F44C8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F44D7; /* jge: greater or equal (signed >=) */

loc_000F44CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F44D7; /* jge: greater or equal (signed >=) */

loc_000F44D1: ;
    eax = MEM32(esi + 4);
    MEM32(eax + edi * 4) = ebx;

loc_000F44D7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F44E0
 * Original: 0x000F44E0 - 0x000F452F (79 bytes, 25 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F44E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F44E0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F4504u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4504: ;
    ebx = eax;
    PUSH32(esp, 0x000F450Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F450B: ;
    edi = eax;
    PUSH32(esp, 0x000F4512u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4512: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F4518u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4518: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x000F4521u); RECOMP_ABI_CALL(0x000F4470u, sub_000F4470); /* call 0x000F4470 */

loc_000F4521: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4530
 * Original: 0x000F4530 - 0x000F45A4 (116 bytes, 54 insns)
 * Folder: ai (between: 0x000F3D20 and 0x000F45B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4530: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F4545; /* je: equal / zero */

loc_000F4538: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F453Eu); RECOMP_ABI_CALL(0x0003B870u, sub_0003B870); /* call 0x0003B870 */

loc_000F453E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F45A2; /* je: equal / zero */

loc_000F4545: ;
    eax = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F45A2; /* je: equal / zero */

loc_000F454E: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F45A2; /* je: equal / zero */

loc_000F4555: ;
    PUSH32(esp, edi);

loc_000F4556: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4562; /* jne: not equal / not zero */

loc_000F455D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F456C; /* je: equal / zero */

loc_000F4561: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F4562: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4556; /* jne: not equal / not zero */

loc_000F4569: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F456C: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F45A1; /* je: equal / zero */

loc_000F4573: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F45A1; /* jl: less (signed <) */

loc_000F4577: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F45A1; /* jge: greater or equal (signed >=) */

loc_000F457C: ;
    edi = MEM32(eax + 0x14);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F45A1; /* jle: less or equal (signed <=) */

loc_000F458E: ;
    edi = edi;

loc_000F4590: ;
    edx = MEM32(ecx + 4);
    MEM32(edx + eax * 4) = 0xFFFFFFFFu;
    edx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F4590; /* jl: less (signed <) */

loc_000F45A1: ;
    POP32(esp, edi);

loc_000F45A2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F45B0
 * Original: 0x000F45B0 - 0x000F45EF (63 bytes, 19 insns)
 * Folder: ai (match: xbox-demo 0x00104660, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F45B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F45B0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F45D3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F45D3: ;
    edi = eax;
    PUSH32(esp, 0x000F45DAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F45DA: ;
    ecx = eax;
    edx = edi;
    eax = esi;
    PUSH32(esp, 0x000F45E5u); RECOMP_ABI_CALL(0x000F4530u, sub_000F4530); /* call 0x000F4530 */

loc_000F45E5: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F45F0
 * Original: 0x000F45F0 - 0x000F46E0 (240 bytes, 102 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F45F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F45F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F4615; /* je: equal / zero */

loc_000F4600: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x000F4608u); RECOMP_ABI_CALL(0x0003B870u, sub_0003B870); /* call 0x0003B870 */

loc_000F4608: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F46DC; /* je: equal / zero */

loc_000F4615: ;
    eax = MEM32(esi + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4663; /* je: equal / zero */

loc_000F461E: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4663; /* je: equal / zero */

loc_000F4625: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4631; /* jne: not equal / not zero */

loc_000F462C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F463A; /* je: equal / zero */

loc_000F4630: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F4631: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4625; /* jne: not equal / not zero */

loc_000F4638: ;
    goto loc_000F4663;

loc_000F463A: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4663; /* je: equal / zero */

loc_000F4641: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F4663; /* jl: less (signed <) */

loc_000F4645: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4663; /* jge: greater or equal (signed >=) */

loc_000F464A: ;
    edx = MEM32(eax + 0x14);
    ecx = edi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F4663; /* jle: less or equal (signed <=) */

loc_000F4659: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4663; /* jge: greater or equal (signed >=) */

loc_000F465E: ;
    eax = MEM32(ecx + 4);
    MEM32(eax) = ebx;

loc_000F4663: ;
    eax = MEM32(esi + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F46B5; /* je: equal / zero */

loc_000F466C: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F46B5; /* je: equal / zero */

loc_000F4673: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F467F; /* jne: not equal / not zero */

loc_000F467A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4688; /* je: equal / zero */

loc_000F467E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F467F: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4673; /* jne: not equal / not zero */

loc_000F4686: ;
    goto loc_000F46B5;

loc_000F4688: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F46B5; /* je: equal / zero */

loc_000F468F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F46B5; /* jl: less (signed <) */

loc_000F4693: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F46B5; /* jge: greater or equal (signed >=) */

loc_000F4698: ;
    ebx = MEM32(eax + 0x14);
    ecx = edi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx + ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F46B5; /* jle: less or equal (signed <=) */

loc_000F46AA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F46B5; /* jge: greater or equal (signed >=) */

loc_000F46AF: ;
    eax = MEM32(ecx + 4);
    MEM32(eax + 4) = ebp;

loc_000F46B5: ;
    ebx = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx + 0x30);
    PUSH32(esp, edx);
    edx = edi;
    eax = esi;
    PUSH32(esp, 0x000F46C9u); RECOMP_ABI_CALL(0x000F4090u, sub_000F4090); /* call 0x000F4090 */

loc_000F46C9: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, ecx);
    edx = edi;
    eax = esi;
    PUSH32(esp, 0x000F46D9u); RECOMP_ABI_CALL(0x000F4220u, sub_000F4220); /* call 0x000F4220 */

loc_000F46D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F46DC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F46E0
 * Original: 0x000F46E0 - 0x000F4760 (128 bytes, 47 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F46E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F46E0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F4705u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4705: ;
    ebx = eax;
    PUSH32(esp, 0x000F470Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F470C: ;
    ebp = eax;
    PUSH32(esp, 0x000F4713u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4713: ;
    edi = eax;
    PUSH32(esp, 0x000F471Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F471A: ;
    edx = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    edx = MEM32(edx + 0x696528);
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000F4745u); RECOMP_ABI_CALL(0x000F45F0u, sub_000F45F0); /* call 0x000F45F0 */

loc_000F4745: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4760
 * Original: 0x000F4760 - 0x000F4803 (163 bytes, 50 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4760: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F4784u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4784: ;
    ebx = eax;
    PUSH32(esp, 0x000F478Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F478B: ;
    esi = MEM32(0x758D4C);
    ecx = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D4C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000F47F8; /* je: equal / zero */

loc_000F47B1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F47C7; /* je: equal / zero */

loc_000F47B8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F47BEu); RECOMP_ABI_CALL(0x0003B870u, sub_0003B870); /* call 0x0003B870 */

loc_000F47BE: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F47F8; /* je: equal / zero */

loc_000F47C7: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edx + 0x30);
    PUSH32(esp, eax);
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0x000F47D7u); RECOMP_ABI_CALL(0x000F4090u, sub_000F4090); /* call 0x000F4090 */

loc_000F47D7: ;
    ecx = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x429344); /* addss */
    edx = ebx;
    eax = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000F47F5u); RECOMP_ABI_CALL(0x000F4220u, sub_000F4220); /* call 0x000F4220 */

loc_000F47F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F47F8: ;
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
 * sub_000F4810
 * Original: 0x000F4810 - 0x000F484F (63 bytes, 27 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F4810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4810: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F484C; /* je: equal / zero */

loc_000F4817: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F484C; /* je: equal / zero */

loc_000F4822: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F484C; /* jne: not equal / not zero */

loc_000F4829: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F4848u); RECOMP_ABI_CALL(0x003070C0u, sub_003070C0); /* call 0x003070C0 */

loc_000F4848: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F484C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F4850
 * Original: 0x000F4850 - 0x000F4995 (325 bytes, 84 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4850: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D68) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x696508);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(ecx + 0x696548);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 0x696530);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 0x696530);
    edi = MEM32(0x758D4C);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_000F4959; /* je: equal / zero */

loc_000F4921: ;
    edx = MEM32(eax + 0x14);
    edx = MEM32(edx);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4959; /* je: equal / zero */

loc_000F492C: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4959; /* jne: not equal / not zero */

loc_000F4933: ;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F494Eu); RECOMP_ABI_CALL(0x003070C0u, sub_003070C0); /* call 0x003070C0 */

loc_000F494E: ;
    ecx = MEM32(0x758D48);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F495B;

loc_000F4959: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F495B: ;
    edx = ecx + 0x696528;
    MEM32(edx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x3C);
    POP32(esp, edi);
    MEM32(0x758D48) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F49A0
 * Original: 0x000F49A0 - 0x000F4AAA (266 bytes, 71 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F49A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F49A0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F49C5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F49C5: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 0x696508);
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
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(0x758D48) = ecx;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx + 0x69652C);
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    MEM32(esp + 0x2C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000F4A9E; /* je: equal / zero */

loc_000F4A6B: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4A9D; /* je: equal / zero */

loc_000F4A77: ;
    edx = MEM32(ebx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4A9D; /* jne: not equal / not zero */

loc_000F4A7E: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x000F4A9Au); RECOMP_ABI_CALL(0x00306DF0u, sub_00306DF0); /* call 0x00306DF0 */

loc_000F4A9A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F4A9D: ;
    POP32(esp, ebx);

loc_000F4A9E: ;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F4AB0
 * Original: 0x000F4AB0 - 0x000F4AEE (62 bytes, 19 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4AB0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F4AD3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4AD3: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ebx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4AE4; /* je: equal / zero */

loc_000F4ADF: ;
    PUSH32(esp, 0x000F4AE4u); RECOMP_ABI_CALL(0x00307280u, sub_00307280); /* call 0x00307280 */

loc_000F4AE4: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4AF0
 * Original: 0x000F4AF0 - 0x000F4B4D (93 bytes, 26 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4AF0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F4B12u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4B12: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F4B44; /* je: equal / zero */

loc_000F4B19: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4B44; /* je: equal / zero */

loc_000F4B24: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4B44; /* jne: not equal / not zero */

loc_000F4B2B: ;
    MEM8(esi + 8) = MEM8(esi + 8) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(0x758510) = esi;
    PUSH32(esp, 0x000F4B3Au); RECOMP_ABI_CALL(0x00304830u, sub_00304830); /* call 0x00304830 */

loc_000F4B3A: ;
    MEM32(0x758510) = 0;

loc_000F4B44: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4B50
 * Original: 0x000F4B50 - 0x000F4B93 (67 bytes, 14 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4B50: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(0x440A18);
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
 * sub_000F4BA0
 * Original: 0x000F4BA0 - 0x000F4BD2 (50 bytes, 22 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4BA0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4BD1; /* je: equal / zero */

loc_000F4BA4: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F4BCD; /* je: equal / zero */

loc_000F4BAB: ;
    eax = MEM32(ecx + 0x14);
    eax = MEM32(eax);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4BCD; /* je: equal / zero */

loc_000F4BB6: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4BCC; /* jne: not equal / not zero */

loc_000F4BBE: ;
    esi = MEM32(eax + 0x14);
    esi = esi | MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ~edx;
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x14) = esi;

loc_000F4BCC: ;
    POP32(esp, esi);

loc_000F4BCD: ;
    MEM8(ecx + 8) = MEM8(ecx + 8) & 0xF7;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000F4BD1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4BE0
 * Original: 0x000F4BE0 - 0x000F4C41 (97 bytes, 34 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4BE0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F4C03u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4C03: ;
    edi = eax;
    PUSH32(esp, 0x000F4C0Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4C0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4C37; /* je: equal / zero */

loc_000F4C0E: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F4C33; /* je: equal / zero */

loc_000F4C15: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4C33; /* je: equal / zero */

loc_000F4C20: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4C33; /* jne: not equal / not zero */

loc_000F4C27: ;
    edx = MEM32(ecx + 0x14);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ~edi;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x14) = edx;

loc_000F4C33: ;
    MEM8(esi + 8) = MEM8(esi + 8) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000F4C37: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4C50
 * Original: 0x000F4C50 - 0x000F4CB1 (97 bytes, 34 insns)
 * Folder: ai (between: 0x000F45B0 and 0x000F4CC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4C50: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F4C73u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4C73: ;
    edi = eax;
    PUSH32(esp, 0x000F4C7Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F4C7A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4CA7; /* je: equal / zero */

loc_000F4C7E: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F4CA3; /* je: equal / zero */

loc_000F4C85: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4CA3; /* je: equal / zero */

loc_000F4C90: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4CA3; /* jne: not equal / not zero */

loc_000F4C97: ;
    edx = MEM32(ecx + 0x18);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ~edi;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x18) = edx;

loc_000F4CA3: ;
    MEM8(esi + 8) = MEM8(esi + 8) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000F4CA7: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4CC0
 * Original: 0x000F4CC0 - 0x000F4D3A (122 bytes, 32 insns)
 * Folder: ai (match: xbox-demo 0x00104DC0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4CC0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000F4CFB; /* je: equal / zero */

loc_000F4CE4: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4CFB; /* je: equal / zero */

loc_000F4CEF: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4CFB; /* jne: not equal / not zero */

loc_000F4CF6: ;
    edx = MEM32(eax + 0x14);
    goto loc_000F4CFD;

loc_000F4CFB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F4CFD: ;
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
 * sub_000F4D40
 * Original: 0x000F4D40 - 0x000F4F5E (542 bytes, 123 insns)
 * Folder: ai (match: xbox-demo 0x00104E40, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4D40: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F4F5D; /* jl: less (signed <) */

loc_000F4D48: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x23 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4F5D; /* jge: greater or equal (signed >=) */

loc_000F4D51: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F4F5D; /* je: equal / zero */

loc_000F4D5C: ;
    eax = MEM32(eax + 0x14);
    edx = MEM32(eax);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4F5D; /* je: equal / zero */

loc_000F4D6B: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4F5D; /* jne: not equal / not zero */

loc_000F4D76: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x22 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F4F5D; /* ja: above (unsigned >) */

loc_000F4D7F: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0xF4F60); /* switch: 35 entries, 35 targets */
    if (_jt == 0x000F4D86u) goto loc_000F4D86;
    if (_jt == 0x000F4D92u) goto loc_000F4D92;
    if (_jt == 0x000F4D9Eu) goto loc_000F4D9E;
    if (_jt == 0x000F4DAAu) goto loc_000F4DAA;
    if (_jt == 0x000F4DB6u) goto loc_000F4DB6;
    if (_jt == 0x000F4DC2u) goto loc_000F4DC2;
    if (_jt == 0x000F4DCEu) goto loc_000F4DCE;
    if (_jt == 0x000F4DDAu) goto loc_000F4DDA;
    if (_jt == 0x000F4DE6u) goto loc_000F4DE6;
    if (_jt == 0x000F4DF2u) goto loc_000F4DF2;
    if (_jt == 0x000F4DFEu) goto loc_000F4DFE;
    if (_jt == 0x000F4E0Au) goto loc_000F4E0A;
    if (_jt == 0x000F4E16u) goto loc_000F4E16;
    if (_jt == 0x000F4E22u) goto loc_000F4E22;
    if (_jt == 0x000F4E2Eu) goto loc_000F4E2E;
    if (_jt == 0x000F4E3Au) goto loc_000F4E3A;
    if (_jt == 0x000F4E46u) goto loc_000F4E46;
    if (_jt == 0x000F4E55u) goto loc_000F4E55;
    if (_jt == 0x000F4E64u) goto loc_000F4E64;
    if (_jt == 0x000F4E73u) goto loc_000F4E73;
    if (_jt == 0x000F4E82u) goto loc_000F4E82;
    if (_jt == 0x000F4E91u) goto loc_000F4E91;
    if (_jt == 0x000F4EA0u) goto loc_000F4EA0;
    if (_jt == 0x000F4EAFu) goto loc_000F4EAF;
    if (_jt == 0x000F4EBEu) goto loc_000F4EBE;
    if (_jt == 0x000F4ECDu) goto loc_000F4ECD;
    if (_jt == 0x000F4EDCu) goto loc_000F4EDC;
    if (_jt == 0x000F4EEBu) goto loc_000F4EEB;
    if (_jt == 0x000F4EFAu) goto loc_000F4EFA;
    if (_jt == 0x000F4F09u) goto loc_000F4F09;
    if (_jt == 0x000F4F18u) goto loc_000F4F18;
    if (_jt == 0x000F4F27u) goto loc_000F4F27;
    if (_jt == 0x000F4F36u) goto loc_000F4F36;
    if (_jt == 0x000F4F40u) goto loc_000F4F40;
    if (_jt == 0x000F4F4Fu) goto loc_000F4F4F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F4D86: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4D92: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4D9E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4DAA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4DB6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4DC2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4DCE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4DDA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4DE6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4DF2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4DFE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4E0A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4E16: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4E22: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4E2E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4E3A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4E46: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4E55: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x84) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4E64: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4E73: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4E82: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4E91: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4EA0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4EAF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x9C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4EBE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0xA0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4ECD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0xA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4EDC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0xA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4EEB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0xAC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4EFA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0xB0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4F09: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0xB4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4F18: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0xB8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4F27: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0xDC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4F36: ;
    ecx = (int32_t)MEMF(esp + 4); /* cvttss2si */
    MEM8(eax + 0x1E) = LO8(ecx);
    esp += 4; return; /* ret */

loc_000F4F40: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x150) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F4F4F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x154) = xmm0.f[0]; /* movss */

loc_000F4F5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4F5E
 * Original: 0x000F4F5E - 0x000F506B (269 bytes, 14 insns)
 * Folder: ai (between: 0x000F4D40 and 0x000F4FF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4F5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4F5E: ;
    edi = edi;
    { uint32_t _tmp = MEM8(ebp + 0xF);
    MEM8(ebp + 0xF) = LO8(ecx);
    SET_LO8(ecx, _tmp); }
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + -1644163251) = MEM8(edx + -1644163251) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx + -1644163251)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("verw word ptr [edx - 0x49fff0b3]", 0x000F4F6Au); /* TODO: verw word ptr [edx - 0x49fff0b3] */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("sldt edx", 0x000F4F72u); /* TODO: sldt edx */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("str esi", 0x000F4F76u); /* TODO: str esi */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("ltr dx", 0x000F4F7Au); /* TODO: ltr dx */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("verr si", 0x000F4F7Eu); /* TODO: verr si */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

}

/**
 * sub_000F4FF0
 * Original: 0x000F4FF0 - 0x000F506B (123 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x001050F0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4FF0: ;
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
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F503D; /* jne: not equal / not zero */

loc_000F5033: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F5045;

loc_000F503D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F5045: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F5055u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F5055: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x000F505Eu); RECOMP_ABI_CALL(0x000F4D40u, sub_000F4D40); /* call 0x000F4D40 */

loc_000F505E: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5070
 * Original: 0x000F5070 - 0x000F509A (42 bytes, 16 insns)
 * Folder: ai (between: 0x000F4FF0 and 0x000F5200)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5070: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F5083u); RECOMP_ABI_CALL(0x00306470u, sub_00306470); /* call 0x00306470 */

loc_000F5083: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x14);
    ecx = ecx | 0x2000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F50A0
 * Original: 0x000F50A0 - 0x000F50EA (74 bytes, 23 insns)
 * Folder: ai (between: 0x000F4FF0 and 0x000F5200)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F50A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F50A0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    edx = MEM32(esi + 0x14);
    MEM32(0x758D70) = eax;
    eax = MEM32(edx);
    edx = MEM32(eax);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F50D0u); RECOMP_ABI_CALL(0x00306470u, sub_00306470); /* call 0x00306470 */

loc_000F50D0: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) | 0x2000000;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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
 * sub_000F50F0
 * Original: 0x000F50F0 - 0x000F51F1 (257 bytes, 64 insns)
 * Folder: ai (between: 0x000F4FF0 and 0x000F5200)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F50F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F50F0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5139; /* jne: not equal / not zero */

loc_000F512F: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_000F5141;

loc_000F5139: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_000F5141: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), LO16(edx) (16-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000F515F; /* jne: not equal / not zero */

loc_000F5155: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_000F5167;

loc_000F515F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_000F5167: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), LO16(edx) (16-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000F5185; /* jne: not equal / not zero */

loc_000F517B: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_000F518D;

loc_000F5185: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_000F518D: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    MEM32(0x758D48) = eax;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = esp + 0x24;
    PUSH32(esp, 0x000F51E1u); RECOMP_ABI_CALL(0x00306BD0u, sub_00306BD0); /* call 0x00306BD0 */

loc_000F51E1: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000F5200
 * Original: 0x000F5200 - 0x000F527F (127 bytes, 42 insns)
 * Folder: ai (match: xbox-demo 0x001052D0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5200: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    eax = MEM32(eax + 0x14);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x696528);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x000F524Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F524D: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000F5272; /* je: equal / zero */

loc_000F5252: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000F5265; /* je: equal / zero */

loc_000F5255: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0xC);
    if ((_fa != 0)) goto loc_000F5279; /* jne: not equal / not zero */

loc_000F525C: ;
    MEM32(edi + 0x2C) = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F5265: ;
    eax = MEM32(esp + 0xC);
    MEM32(edi + 0x34) = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F5272: ;
    eax = MEM32(esp + 0xC);
    MEM32(edi + 0x30) = esi;

loc_000F5279: ;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5230
 * Original: 0x000F5230 - 0x000F527F (79 bytes, 32 insns)
 * Folder: ai (between: 0x000F5200 and 0x000F5280)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5230: ;
    esi = MEM32(ecx + 0x696528);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x000F524Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F524D: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000F5272; /* je: equal / zero */

loc_000F5252: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000F5265; /* je: equal / zero */

loc_000F5255: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0xC);
    if ((_fa != 0)) goto loc_000F5279; /* jne: not equal / not zero */

loc_000F525C: ;
    MEM32(edi + 0x2C) = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F5265: ;
    eax = MEM32(esp + 0xC);
    MEM32(edi + 0x34) = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F5272: ;
    eax = MEM32(esp + 0xC);
    MEM32(edi + 0x30) = esi;

loc_000F5279: ;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5280
 * Original: 0x000F5280 - 0x000F52EE (110 bytes, 32 insns)
 * Folder: ai (match: xbox-demo 0x00105350, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5280: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(edx);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = eax + 0x100;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000F52C5u); RECOMP_ABI_CALL(0x000E2B90u, sub_000E2B90); /* call 0x000E2B90 */

loc_000F52C5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000F52CDu); RECOMP_ABI_CALL(0x000E2C10u, sub_000E2C10); /* call 0x000E2C10 */

loc_000F52CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    MEM32(esi + 0x40) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000F52E9; /* jne: not equal / not zero */

loc_000F52D4: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x2C) = 0;

loc_000F52E9: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F52F0
 * Original: 0x000F52F0 - 0x000F53D1 (225 bytes, 52 insns)
 * Folder: ai (match: xbox-demo 0x001053C0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F52F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F52F0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x14) = edx;
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
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = ecx;
    edx = esp;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F53C6u); RECOMP_ABI_CALL(0x000F5280u, sub_000F5280); /* call 0x000F5280 */

loc_000F53C6: ;
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F53E0
 * Original: 0x000F53E0 - 0x000F5511 (305 bytes, 82 insns)
 * Folder: ai (match: xbox-demo 0x001054B0, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F53E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F53E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F550D; /* jl: less (signed <) */

loc_000F53E8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x23 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F550D; /* jge: greater or equal (signed >=) */

loc_000F53F1: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F550D; /* je: equal / zero */

loc_000F53FC: ;
    eax = MEM32(eax + 0x14);
    edx = MEM32(eax);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F550D; /* je: equal / zero */

loc_000F540B: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F550D; /* jne: not equal / not zero */

loc_000F5416: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1E (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F550D; /* ja: above (unsigned >) */

loc_000F541F: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0xF5514); /* switch: 31 entries, 31 targets */
    if (_jt == 0x000F5426u) goto loc_000F5426;
    if (_jt == 0x000F542Cu) goto loc_000F542C;
    if (_jt == 0x000F5432u) goto loc_000F5432;
    if (_jt == 0x000F5438u) goto loc_000F5438;
    if (_jt == 0x000F543Eu) goto loc_000F543E;
    if (_jt == 0x000F5444u) goto loc_000F5444;
    if (_jt == 0x000F544Au) goto loc_000F544A;
    if (_jt == 0x000F5450u) goto loc_000F5450;
    if (_jt == 0x000F5456u) goto loc_000F5456;
    if (_jt == 0x000F545Cu) goto loc_000F545C;
    if (_jt == 0x000F5462u) goto loc_000F5462;
    if (_jt == 0x000F5468u) goto loc_000F5468;
    if (_jt == 0x000F546Eu) goto loc_000F546E;
    if (_jt == 0x000F5474u) goto loc_000F5474;
    if (_jt == 0x000F547Au) goto loc_000F547A;
    if (_jt == 0x000F5480u) goto loc_000F5480;
    if (_jt == 0x000F5486u) goto loc_000F5486;
    if (_jt == 0x000F548Fu) goto loc_000F548F;
    if (_jt == 0x000F5498u) goto loc_000F5498;
    if (_jt == 0x000F54A1u) goto loc_000F54A1;
    if (_jt == 0x000F54AAu) goto loc_000F54AA;
    if (_jt == 0x000F54B3u) goto loc_000F54B3;
    if (_jt == 0x000F54BCu) goto loc_000F54BC;
    if (_jt == 0x000F54C5u) goto loc_000F54C5;
    if (_jt == 0x000F54CEu) goto loc_000F54CE;
    if (_jt == 0x000F54D7u) goto loc_000F54D7;
    if (_jt == 0x000F54E0u) goto loc_000F54E0;
    if (_jt == 0x000F54E9u) goto loc_000F54E9;
    if (_jt == 0x000F54F2u) goto loc_000F54F2;
    if (_jt == 0x000F54FBu) goto loc_000F54FB;
    if (_jt == 0x000F5504u) goto loc_000F5504;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F5426: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    esp += 4; return; /* ret */

loc_000F542C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    esp += 4; return; /* ret */

loc_000F5432: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    esp += 4; return; /* ret */

loc_000F5438: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    esp += 4; return; /* ret */

loc_000F543E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    esp += 4; return; /* ret */

loc_000F5444: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    esp += 4; return; /* ret */

loc_000F544A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    esp += 4; return; /* ret */

loc_000F5450: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    esp += 4; return; /* ret */

loc_000F5456: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    esp += 4; return; /* ret */

loc_000F545C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    esp += 4; return; /* ret */

loc_000F5462: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    esp += 4; return; /* ret */

loc_000F5468: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    esp += 4; return; /* ret */

loc_000F546E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x70)); /* movss */
    esp += 4; return; /* ret */

loc_000F5474: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    esp += 4; return; /* ret */

loc_000F547A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x78)); /* movss */
    esp += 4; return; /* ret */

loc_000F5480: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    esp += 4; return; /* ret */

loc_000F5486: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    esp += 4; return; /* ret */

loc_000F548F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x84)); /* movss */
    esp += 4; return; /* ret */

loc_000F5498: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x88)); /* movss */
    esp += 4; return; /* ret */

loc_000F54A1: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x8C)); /* movss */
    esp += 4; return; /* ret */

loc_000F54AA: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    esp += 4; return; /* ret */

loc_000F54B3: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    esp += 4; return; /* ret */

loc_000F54BC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    esp += 4; return; /* ret */

loc_000F54C5: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    esp += 4; return; /* ret */

loc_000F54CE: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    esp += 4; return; /* ret */

loc_000F54D7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA4)); /* movss */
    esp += 4; return; /* ret */

loc_000F54E0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA8)); /* movss */
    esp += 4; return; /* ret */

loc_000F54E9: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xAC)); /* movss */
    esp += 4; return; /* ret */

loc_000F54F2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */
    esp += 4; return; /* ret */

loc_000F54FB: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    esp += 4; return; /* ret */

loc_000F5504: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB8)); /* movss */
    esp += 4; return; /* ret */

loc_000F550D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp += 4; return; /* ret */

}

/**
 * sub_000F5590
 * Original: 0x000F5590 - 0x000F5600 (112 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x00105660, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5590: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F55B2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F55B2: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x000F55BBu); RECOMP_ABI_CALL(0x000F53E0u, sub_000F53E0); /* call 0x000F53E0 */

loc_000F55BB: ;
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
 * sub_000F5600
 * Original: 0x000F5600 - 0x000F5639 (57 bytes, 25 insns)
 * Folder: ai (match: xbox-demo 0x001056D0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5600: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5638; /* je: equal / zero */

loc_000F5607: ;
    eax = MEM32(eax + 0x14);
    edx = MEM32(eax);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5638; /* je: equal / zero */

loc_000F5612: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5637; /* jne: not equal / not zero */

loc_000F561A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F5637; /* je: equal / zero */

loc_000F5621: ;
    esi = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = eax + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5636; /* je: equal / zero */

loc_000F562F: ;
    ecx = 0x14;
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

loc_000F5636: ;
    POP32(esp, edi);

loc_000F5637: ;
    POP32(esp, esi);

loc_000F5638: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F5640
 * Original: 0x000F5640 - 0x000F56BF (127 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x00105710, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5640: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = edx;
    edx = MEM32(eax);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696528);
    MEM32(0x758D4C) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000F56B6; /* je: equal / zero */

loc_000F5687: ;
    eax = MEM32(eax + 0x14);
    edx = MEM32(eax);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F56B6; /* je: equal / zero */

loc_000F5692: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F56B6; /* jne: not equal / not zero */

loc_000F5699: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F56B6; /* je: equal / zero */

loc_000F56A0: ;
    esi = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = eax + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F56B5; /* je: equal / zero */

loc_000F56AE: ;
    ecx = 0x14;
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

loc_000F56B5: ;
    POP32(esp, edi);

loc_000F56B6: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F56C0
 * Original: 0x000F56C0 - 0x000F56F3 (51 bytes, 24 insns)
 * Folder: ai (between: 0x000F5640 and 0x000F5760)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F56C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F56C0: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F56D2u); RECOMP_ABI_CALL(0x00301800u, sub_00301800); /* call 0x00301800 */

loc_000F56D2: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000F56DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F56D7u); } /* indirect call */
    }

loc_000F56DA: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(edx);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000F56E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F56E4u); } /* indirect call */
    }

loc_000F56E7: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5700
 * Original: 0x000F5700 - 0x000F5758 (88 bytes, 33 insns)
 * Folder: ai (between: 0x000F5640 and 0x000F5760)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5700: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    eax = MEM32(edx);
    PUSH32(esp, 0);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F572Fu); RECOMP_ABI_CALL(0x00301800u, sub_00301800); /* call 0x00301800 */

loc_000F572F: ;
    edi = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000F5737u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5734u); } /* indirect call */
    }

loc_000F5737: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000F5744u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5741u); } /* indirect call */
    }

loc_000F5744: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5760
 * Original: 0x000F5760 - 0x000F57CB (107 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x00105820, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5760: ;
    ecx = MEM32(0x758D70);
    ecx = ZX8(MEM8(ecx + 0x1C));
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = edx + 0x696528;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x758D4C);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4293B0); /* mulss */
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 2;
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
 * sub_000F57D0
 * Original: 0x000F57D0 - 0x000F584C (124 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x00105890, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F57D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F57D0: ;
    eax = MEM32(0x758D70);
    SET_LO8(eax, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_000F5803; /* jbe: below or equal (unsigned <=) */

loc_000F57F4: ;
    eax = ZX8(LO8(eax));
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    goto loc_000F580D;

loc_000F5803: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */

loc_000F580D: ;
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
 * sub_000F5850
 * Original: 0x000F5850 - 0x000F5866 (22 bytes, 8 insns)
 * Folder: ai (between: 0x000F57D0 and 0x000F5870)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5850: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5865; /* je: equal / zero */

loc_000F585C: ;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 4);

loc_000F5865: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F5870
 * Original: 0x000F5870 - 0x000F58B2 (66 bytes, 18 insns)
 * Folder: ai (match: xbox-demo 0x00105930, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5870: ;
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D6C);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    MEM32(0x758D70) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F58A1; /* je: equal / zero */

loc_000F5898: ;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 4);

loc_000F58A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F58A7u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_000F58A7: ;
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
 * sub_000F58C0
 * Original: 0x000F58C0 - 0x000F5970 (176 bytes, 47 insns)
 * Folder: ai (match: xbox-demo 0x00105980, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F58C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F58C0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F58E8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F58E8: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x000F5916u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F590Fu); } /* indirect call */
    }

loc_000F5916: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(0x758D48);
    PUSH32(esp, ecx);
    ecx = MEM32(0x44AA20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ebp = edi + 0x696528;
    PUSH32(esp, 0x000F5936u); RECOMP_ABI_CALL(0x00028920u, sub_00028920); /* call 0x00028920 */

loc_000F5936: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = ebp;
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
 * sub_000F5970
 * Original: 0x000F5970 - 0x000F59C8 (88 bytes, 30 insns)
 * Folder: ai (match: xbox-demo 0x00105A30, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F5970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x44AA20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F59BB; /* je: equal / zero */

loc_000F59A0: ;
    ebx = MEM32(esi + 0x270);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F59ABu); RECOMP_ABI_CALL(0x0006BF70u, sub_0006BF70); /* call 0x0006BF70 */

loc_000F59AB: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F59B2u); RECOMP_ABI_CALL(0x0003D250u, sub_0003D250); /* call 0x0003D250 */

loc_000F59B2: ;
    eax = ebx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F59BBu); RECOMP_ABI_CALL(0x0006D3C0u, sub_0006D3C0); /* call 0x0006D3C0 */

loc_000F59BB: ;
    eax = MEM32(ebp + 8);
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
 * sub_000F59D0
 * Original: 0x000F59D0 - 0x000F5A91 (193 bytes, 82 insns)
 * Folder: ai (between: 0x000F5970 and 0x000F5C80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F59D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F59D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F59EDu); RECOMP_ABI_CALL(0x00021DA0u, sub_00021DA0); /* call 0x00021DA0 */

loc_000F59ED: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ebx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(eax + 4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5A02u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_000F5A02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5A1C; /* je: equal / zero */

loc_000F5A09: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5A1C; /* je: equal / zero */

loc_000F5A11: ;
    PUSH32(esp, esi);
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5A19u); RECOMP_ABI_CALL(0x0003B680u, sub_0003B680); /* call 0x0003B680 */

loc_000F5A19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F5A1C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5A88; /* je: equal / zero */

loc_000F5A25: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F5A88; /* jne: not equal / not zero */

loc_000F5A29: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5A88; /* je: equal / zero */

loc_000F5A36: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5A88; /* je: equal / zero */

loc_000F5A3A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5A88; /* je: equal / zero */

loc_000F5A3E: ;
    edi = edi;

loc_000F5A40: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F5A63; /* jne: not equal / not zero */

loc_000F5A45: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5A88; /* je: equal / zero */

loc_000F5A4C: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5A88; /* je: equal / zero */

loc_000F5A53: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5A40; /* jne: not equal / not zero */

loc_000F5A5A: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000F5A63: ;
    edi = MEM32(0x44AA20);
    _fb = (uint32_t)(0x17C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x17C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5A76u); RECOMP_ABI_CALL(0x000DEBA0u, sub_000DEBA0); /* call 0x000DEBA0 */

loc_000F5A76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5A88; /* jne: not equal / not zero */

loc_000F5A7B: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    esi = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5A85u); RECOMP_ABI_CALL(0x00020970u, sub_00020970); /* call 0x00020970 */

loc_000F5A85: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F5A88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5A40
 * Original: 0x000F5A40 - 0x000F5A91 (81 bytes, 36 insns)
 * Folder: ai (between: 0x000F5970 and 0x000F5C80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F5A40: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F5A63; /* jne: not equal / not zero */

loc_000F5A45: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5A88; /* je: equal / zero */

loc_000F5A4C: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5A88; /* je: equal / zero */

loc_000F5A53: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5A40; /* jne: not equal / not zero */

loc_000F5A5A: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000F5A63: ;
    edi = MEM32(0x44AA20);
    _fb = (uint32_t)(0x17C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x17C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    PUSH32(esp, 0x000F5A76u); RECOMP_ABI_CALL(0x000DEBA0u, sub_000DEBA0); /* call 0x000DEBA0 */

loc_000F5A76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5A88; /* jne: not equal / not zero */

loc_000F5A7B: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    esi = edi;
    PUSH32(esp, 0x000F5A85u); RECOMP_ABI_CALL(0x00020970u, sub_00020970); /* call 0x00020970 */

loc_000F5A85: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F5A88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5AA0
 * Original: 0x000F5AA0 - 0x000F5AF2 (82 bytes, 19 insns)
 * Folder: ai (between: 0x000F5970 and 0x000F5C80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5AA0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x000F5AE1u); RECOMP_ABI_CALL(0x000F59D0u, sub_000F59D0); /* call 0x000F59D0 */

loc_000F5AE1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F5AE7u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_000F5AE7: ;
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
 * sub_000F5B00
 * Original: 0x000F5B00 - 0x000F5B6F (111 bytes, 43 insns)
 * Folder: ai (between: 0x000F5970 and 0x000F5C80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F5B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F5B6A; /* je: equal / zero */

loc_000F5B0F: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5B6A; /* je: equal / zero */

loc_000F5B16: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5B27; /* je: equal / zero */

loc_000F5B1E: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5B24u); RECOMP_ABI_CALL(0x0003B790u, sub_0003B790); /* call 0x0003B790 */

loc_000F5B24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F5B27: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    eax = eax & 0xFFBFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5B36u); RECOMP_ABI_CALL(0x00021DA0u, sub_00021DA0); /* call 0x00021DA0 */

loc_000F5B36: ;
    ecx = MEM32(0x44AA20);
    eax = MEM32(ecx + 0x18C);
    edx = MEM32(ecx + 0x180);
    _fb = (uint32_t)(0x17C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x17C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F5B6A; /* jae: above or equal (unsigned >=) */

loc_000F5B55: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5B65; /* je: equal / zero */

loc_000F5B59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F5B55; /* jb: below (unsigned <) */

loc_000F5B60: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000F5B65: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F5B6Au); RECOMP_ABI_CALL(0x000DEB00u, sub_000DEB00); /* call 0x000DEB00 */

loc_000F5B6A: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5B70
 * Original: 0x000F5B70 - 0x000F5B9B (43 bytes, 11 insns)
 * Folder: ai (between: 0x000F5970 and 0x000F5C80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5B70: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F5B92u); RECOMP_ABI_CALL(0x000F5B00u, sub_000F5B00); /* call 0x000F5B00 */

loc_000F5B92: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5BA0
 * Original: 0x000F5BA0 - 0x000F5C21 (129 bytes, 33 insns)
 * Folder: ai (between: 0x000F5970 and 0x000F5C80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5BA0: ;
    edx = MEM32(0x758D70);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F5BDD; /* je: equal / zero */

loc_000F5BC0: ;
    ecx = MEM32(0x44AA20);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F5BDB; /* jae: above or equal (unsigned >=) */

loc_000F5BD0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5C1A; /* je: equal / zero */

loc_000F5BD4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F5BD0; /* jb: below (unsigned <) */

loc_000F5BDB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F5BDD: ;
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

loc_000F5C1A: ;
    edx = 1;
    goto loc_000F5BDD;

}

/**
 * sub_000F5C30
 * Original: 0x000F5C30 - 0x000F5C7A (74 bytes, 33 insns)
 * Folder: ai (between: 0x000F5970 and 0x000F5C80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5C30: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x800000 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000F5C76; /* je: equal / zero */

loc_000F5C3B: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5C76; /* je: equal / zero */

loc_000F5C42: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5C76; /* je: equal / zero */

loc_000F5C49: ;
    eax = MEM32(eax);
    edi = MEM32(eax + 4);
    esi = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F5C76; /* ja: above (unsigned >) */

loc_000F5C58: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5C6F; /* je: equal / zero */

loc_000F5C5E: ;
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5C6F; /* je: equal / zero */

loc_000F5C68: ;
    ecx = ebx;
    PUSH32(esp, 0x000F5C6Fu); RECOMP_ABI_CALL(0x000F2640u, sub_000F2640); /* call 0x000F2640 */

loc_000F5C6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F5C58; /* jbe: below or equal (unsigned <=) */

loc_000F5C76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5C80
 * Original: 0x000F5C80 - 0x000F5CB6 (54 bytes, 16 insns)
 * Folder: ai (match: xbox-demo 0x00105CE0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5C80: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F5CA3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F5CA3: ;
    ebx = eax;
    eax = esi;
    PUSH32(esp, 0x000F5CACu); RECOMP_ABI_CALL(0x000F5C30u, sub_000F5C30); /* call 0x000F5C30 */

loc_000F5CAC: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5CC0
 * Original: 0x000F5CC0 - 0x000F5D10 (80 bytes, 34 insns)
 * Folder: ai (between: 0x000F5C80 and 0x000F5D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5CC0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x800000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5D0E; /* je: equal / zero */

loc_000F5CCB: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5D0E; /* je: equal / zero */

loc_000F5CD2: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5D0E; /* je: equal / zero */

loc_000F5CD9: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F5D0C; /* ja: above (unsigned >) */

loc_000F5CEA: ;
    /* nop */

loc_000F5CF0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5D05; /* je: equal / zero */

loc_000F5CF6: ;
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5D05; /* je: equal / zero */

loc_000F5D00: ;
    PUSH32(esp, 0x000F5D05u); RECOMP_ABI_CALL(0x000F26F0u, sub_000F26F0); /* call 0x000F26F0 */

loc_000F5D05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F5CF0; /* jbe: below or equal (unsigned <=) */

loc_000F5D0C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F5D0E: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5D10
 * Original: 0x000F5D10 - 0x000F5D50 (64 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x00107C10, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5D10: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F5D32u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F5D32: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x000F5D3Bu); RECOMP_ABI_CALL(0x000F5CC0u, sub_000F5CC0); /* call 0x000F5CC0 */

loc_000F5D3B: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5D50
 * Original: 0x000F5D50 - 0x000F5DE6 (150 bytes, 46 insns)
 * Folder: ai (match: xbox-demo 0x00105DC0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5D50: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F5D72u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F5D72: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(esi);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x10 (8-bit) */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696528);
    if (TEST_Z(_fa, _fb)) goto loc_000F5DDD; /* je: equal / zero */

loc_000F5D9B: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F5DDD; /* je: equal / zero */

loc_000F5DA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5DBA; /* jne: not equal / not zero */

loc_000F5DA7: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esp + 8);
    MEM32(edx + 0x10) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F5DBA: ;
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5DD7; /* je: equal / zero */

loc_000F5DC6: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F5DD7; /* jne: not equal / not zero */

loc_000F5DCD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 8))); }
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + edx * 4);

loc_000F5DD7: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x10) = ecx;

loc_000F5DDD: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F5DF0
 * Original: 0x000F5DF0 - 0x000F5E57 (103 bytes, 25 insns)
 * Folder: ai (between: 0x000F5D50 and 0x000F6460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F5DF0: ;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp;
    MEM32(0x758D4C) = eax;
    eax = MEM32(eax * 8 + 0x68642C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x43D06C); PUSH32(esp, 0x000F5E1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F5E15u); } /* indirect call */
    }

loc_000F5E1C: ;
    ecx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(0x758D6C);
    MEM32(0x758D70) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D64);
    MEM32(0x758D68) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F5E60
 * Original: 0x000F5E60 - 0x000F5FE1 (385 bytes, 98 insns)
 * Folder: ai (between: 0x000F5D50 and 0x000F6460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5E60(void)
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

loc_000F5E60: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(ecx + 0xC);
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm6.f[0] = xmm6.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F5EA5; /* je: equal / zero */

loc_000F5E9C: ;
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_000F5EA5: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000F5FDD; /* ja: above (unsigned >) */

loc_000F5EE8: ;
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 8); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F5F1E; /* jnp: not parity */

loc_000F5F08: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */

loc_000F5F1E: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm4 = xmm1; /* movaps */
    xmm5 = xmm1; /* movaps */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x14) = eax;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm7 = xmm1; /* movaps */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F5FB0; /* je: equal / zero */

loc_000F5F62: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm2 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F5F9F; /* jnp: not parity */

loc_000F5F89: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */

loc_000F5F9F: ;
    xmm2 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    goto loc_000F5FBC;

loc_000F5FB0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_000F5FBC: ;
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(esp + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F5FDD; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(esp + 0x20)) */

loc_000F5FD7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_000F5FDD: ;
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
 * sub_000F5FF0
 * Original: 0x000F5FF0 - 0x000F60E8 (248 bytes, 63 insns)
 * Folder: ai (between: 0x000F5D50 and 0x000F6460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F5FF0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D70);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F6018u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F6018: ;
    ebx = MEM32(0x758D48);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = 1;
    _fa = (uint32_t)(MEM16(esi * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 8 + 0x686428), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6041; /* jne: not equal / not zero */

loc_000F6037: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebx + 0x696528); /* cvtsi2ss */
    goto loc_000F6049;

loc_000F6041: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x696528)); /* movss */

loc_000F6049: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 8 + 0x686428), LO16(ecx) (16-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000F6067; /* jne: not equal / not zero */

loc_000F605D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebx + 0x696528); /* cvtsi2ss */
    goto loc_000F606F;

loc_000F6067: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x696528)); /* movss */

loc_000F606F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebx + 0x696528);
    ecx = MEM32(ebx + 0x69652C);
    edi = ebx + 0x696528;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(edi + 8);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = eax;
    eax = esp + 0x20;
    ecx = ebp;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000F60B1u); RECOMP_ABI_CALL(0x000F5E60u, sub_000F5E60); /* call 0x000F5E60 */

loc_000F60B1: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = edi;
    MEM16(esi * 8 + 0x686428) = 2;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(edi) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x758D48) = ebx;
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
 * sub_000F60F0
 * Original: 0x000F60F0 - 0x000F633A (586 bytes, 202 insns)
 * Folder: ai (between: 0x000F5D50 and 0x000F6460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F60F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000F60F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x194) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x194;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 1);
    eax = esp + 0x14;
    edi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6110u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F6110: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6123u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F6123: ;
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    edx = esp + 0x154;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6139u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F6139: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F617F; /* jp: parity */

loc_000F614D: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x10000 (32-bit) */
    eax = MEM32(ebx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F615B; /* je: equal / zero */

loc_000F6158: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F615B: ;
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    fp_push(MEMF(eax + 0x30)); /* fld float */
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
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_000F617F: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F61BF; /* jp: parity */

loc_000F618D: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000F619B; /* je: equal / zero */

loc_000F6198: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F619B: ;
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    fp_push(MEMF(eax + 0x30)); /* fld float */
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
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_000F61BF: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    esi = esp + 0x150;
    edx = esp + 0xB0;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F61E0u); RECOMP_ABI_CALL(0x00047E50u, sub_00047E50); /* call 0x00047E50 */

loc_000F61E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6247; /* je: equal / zero */

loc_000F61E4: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6247; /* je: equal / zero */

loc_000F61EB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6247; /* je: equal / zero */

loc_000F61F2: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6247; /* je: equal / zero */

loc_000F61F9: ;
    PUSH32(esp, 1);
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6209u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F6209: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x100;
    eax = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F621Cu); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_000F621C: ;
    ecx = MEM32(edi + 0x14);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6234u); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_000F6234: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6245u); RECOMP_ABI_CALL(0x000DF220u, sub_000DF220); /* call 0x000DF220 */

loc_000F6245: ;
    goto loc_000F625B;

loc_000F6247: ;
    edi = MEM32(edi + 0xC);
    eax = esp + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F625B; /* je: equal / zero */

loc_000F6252: ;
    ecx = 0x14;
    esi = eax;
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

loc_000F625B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F62AF; /* je: equal / zero */

loc_000F625F: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F62AF; /* je: equal / zero */

loc_000F6266: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F62AF; /* je: equal / zero */

loc_000F626D: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F62AF; /* je: equal / zero */

loc_000F6274: ;
    edx = esp + 0x10;
    eax = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6281u); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_000F6281: ;
    eax = MEM32(ebx + 0x14);
    eax = MEM32(eax + 8);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0xB4;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F629Cu); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_000F629C: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F62ADu); RECOMP_ABI_CALL(0x000DF220u, sub_000DF220); /* call 0x000DF220 */

loc_000F62AD: ;
    goto loc_000F62C8;

loc_000F62AF: ;
    ebx = MEM32(ebx + 0xC);
    edx = esp + 0xB0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F62C8; /* je: equal / zero */

loc_000F62BD: ;
    ecx = 0x14;
    esi = edx;
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

loc_000F62C8: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6333; /* je: equal / zero */

loc_000F62CF: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6333; /* je: equal / zero */

loc_000F62D6: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6333; /* je: equal / zero */

loc_000F62DD: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6333; /* je: equal / zero */

loc_000F62E4: ;
    PUSH32(esp, 1);
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F62F4u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_000F62F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x100;
    eax = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6307u); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_000F6307: ;
    ecx = MEM32(esi + 0x14);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x154;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6322u); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_000F6322: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6333u); RECOMP_ABI_CALL(0x000DF220u, sub_000DF220); /* call 0x000DF220 */

loc_000F6333: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000F6340
 * Original: 0x000F6340 - 0x000F63FB (187 bytes, 45 insns)
 * Folder: ai (between: 0x000F5D50 and 0x000F6460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6340: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = 1;
    _fa = (uint32_t)(MEM16(edx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx * 8 + 0x686428), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6388; /* jne: not equal / not zero */

loc_000F637E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_000F6390;

loc_000F6388: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_000F6390: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx * 8 + 0x686428), LO16(ecx) (16-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000F63AE; /* jne: not equal / not zero */

loc_000F63A4: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_000F63B6;

loc_000F63AE: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_000F63B6: ;
    ecx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(0x758D4C) = edx;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F63ECu); RECOMP_ABI_CALL(0x000F60F0u, sub_000F60F0); /* call 0x000F60F0 */

loc_000F63EC: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000F6400
 * Original: 0x000F6400 - 0x000F645F (95 bytes, 33 insns)
 * Folder: ai (between: 0x000F5D50 and 0x000F6460)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6400: ;
    edx = MEM32(0x758D70);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6457; /* je: equal / zero */

loc_000F6420: ;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6457; /* je: equal / zero */

loc_000F6427: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6457; /* je: equal / zero */

loc_000F642E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6457; /* je: equal / zero */

loc_000F6435: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6457; /* je: equal / zero */

loc_000F643C: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6457; /* je: equal / zero */

loc_000F6443: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6457; /* je: equal / zero */

loc_000F644A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F6454u); RECOMP_ABI_CALL(0x000F60F0u, sub_000F60F0); /* call 0x000F60F0 */

loc_000F6454: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F6457: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6460
 * Original: 0x000F6460 - 0x000F64B5 (85 bytes, 30 insns)
 * Folder: ai (match: xbox-demo 0x001064C0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6460: ;
    ecx = eax;
    PUSH32(esp, esi);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    PUSH32(esp, edi);
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    eax = eax & 0xDFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    edi = edi & 0x10000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edx = edx & 0x40000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi & 0x20000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    eax = eax & 0xEFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F64AFu); RECOMP_ABI_CALL(0x00035250u, sub_00035250); /* call 0x00035250 */

loc_000F64AF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F64C0
 * Original: 0x000F64C0 - 0x000F6560 (160 bytes, 37 insns)
 * Folder: ai (match: xbox-demo 0x00106520, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F64C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F64C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000F64C8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F64C8: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000F64ED; /* jne: not equal / not zero */

loc_000F64E3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F64F5;

loc_000F64ED: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F64F5: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 8) = edx;
    edx = MEM32(0x758D6C);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(0x758D68) = edx;
    edx = MEM32(esp);
    PUSH32(esp, edx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F6555u); RECOMP_ABI_CALL(0x000F6460u, sub_000F6460); /* call 0x000F6460 */

loc_000F6555: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6560
 * Original: 0x000F6560 - 0x000F6638 (216 bytes, 89 insns)
 * Folder: ai (between: 0x000F64C0 and 0x000F66D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6560: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000F65DA; /* jne: not equal / not zero */

loc_000F6566: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    goto loc_000F6570;

    /* nop */

loc_000F6570: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F659A; /* je: equal / zero */

loc_000F657D: ;
    edi = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F659A; /* je: equal / zero */

loc_000F6584: ;
    edx = MEM32(edi);
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6593; /* jne: not equal / not zero */

loc_000F658E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F659F; /* je: equal / zero */

loc_000F6592: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F6593: ;
    edi = MEM32(edi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6584; /* jne: not equal / not zero */

loc_000F659A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);

loc_000F659D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F659F: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F65D0; /* je: equal / zero */

loc_000F65A7: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F65C6; /* jne: not equal / not zero */

loc_000F65AE: ;
    esi = MEM32(edi + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F65C6; /* je: equal / zero */

loc_000F65B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F65C3; /* jne: not equal / not zero */

loc_000F65BB: ;
    ebx = MEM32(edi + 0x14);
    PUSH32(esp, 0x000F65C3u); RECOMP_ABI_CALL(0x00056B10u, sub_00056B10); /* call 0x00056B10 */

loc_000F65C3: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFF9Eu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000F65C6: ;
    MEM32(edi + 4) = MEM32(edi + 4) | 0x2000000;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000F6570;

loc_000F65D0: ;
    MEM32(edi + 4) = MEM32(edi + 4) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000F6570;

loc_000F65DA: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F659D; /* je: equal / zero */

loc_000F65E5: ;
    esi = MEM32(eax + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F659D; /* je: equal / zero */

loc_000F65EC: ;
    /* nop */

loc_000F65F0: ;
    eax = MEM32(esi);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6607; /* jne: not equal / not zero */

loc_000F65FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6607; /* jne: not equal / not zero */

loc_000F65FF: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(edx + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x60), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6610; /* je: equal / zero */

loc_000F6607: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F65F0; /* jne: not equal / not zero */

loc_000F660E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F6610: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F662F; /* je: equal / zero */

loc_000F6618: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6626; /* jne: not equal / not zero */

loc_000F661F: ;
    ecx = esi;
    PUSH32(esp, 0x000F6626u); RECOMP_ABI_CALL(0x00056C20u, sub_00056C20); /* call 0x00056C20 */

loc_000F6626: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 0x2000000;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F662F: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6640
 * Original: 0x000F6640 - 0x000F6696 (86 bytes, 29 insns)
 * Folder: ai (between: 0x000F64C0 and 0x000F66D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6640: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F6648u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F6648: ;
    esi = eax;
    PUSH32(esp, 0x000F664Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F664F: ;
    edi = eax;
    PUSH32(esp, 0x000F6656u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F6656: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx + 0x18);
    ebx = MEM32(edx + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F668B; /* je: equal / zero */

loc_000F667E: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000F6688u); RECOMP_ABI_CALL(0x000F6560u, sub_000F6560); /* call 0x000F6560 */

loc_000F6688: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F668B: ;
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
 * sub_000F66A0
 * Original: 0x000F66A0 - 0x000F66CC (44 bytes, 20 insns)
 * Folder: ai (between: 0x000F64C0 and 0x000F66D0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F66A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F66A0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F66C9; /* je: equal / zero */

loc_000F66A7: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F66C9; /* je: equal / zero */

loc_000F66AE: ;
    eax = MEM32(eax);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F66C9; /* je: equal / zero */

loc_000F66B7: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F66C9; /* je: equal / zero */

loc_000F66BE: ;
    ecx = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 1));
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_000F66C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F66D0
 * Original: 0x000F66D0 - 0x000F6756 (134 bytes, 37 insns)
 * Folder: ai (match: xbox-demo 0x00106700, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F66D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F66D0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000F6717; /* je: equal / zero */

loc_000F66F4: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6717; /* je: equal / zero */

loc_000F66FB: ;
    eax = MEM32(eax);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6717; /* je: equal / zero */

loc_000F6704: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6717; /* je: equal / zero */

loc_000F670B: ;
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 1));
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_000F6719;

loc_000F6717: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F6719: ;
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
 * sub_000F6760
 * Original: 0x000F6760 - 0x000F67DA (122 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00106790, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6760: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F67D8; /* je: equal / zero */

loc_000F676A: ;
    ecx = ZX16(MEM16(eax + 0x38));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F67D8; /* je: equal / zero */

loc_000F6776: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F67D8; /* je: equal / zero */

loc_000F677B: ;
    edx = MEM32(ecx * 4 + 0x69EB30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F67D8; /* je: equal / zero */

loc_000F6786: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edx * 4 + 0x69EBF4);
    edx = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x18);
    SET_LO16(esi, MEM16(esi + 0x3A));
    MEM16(edx + 0x3A) = LO16(esi);
    edi = MEM32(edi + 0x18);
    edi = ZX16(MEM16(edi + 0x3A));
    edx = MEM32(ecx * 4 + 0x69EB30);
    esi = eax + edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi * 4 + 0x69EBF4);
    MEM32(edi * 4 + 0x69EBF8) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi * 4 + 0x69EBF4) = 0;
    MEM32(ecx * 4 + 0x69EB30) = edx;
    POP32(esp, esi);

loc_000F67D8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F67E0
 * Original: 0x000F67E0 - 0x000F686E (142 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00106810, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F67E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F67E0: ;
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x696528);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    MEM32(0x758D68) = ecx;
    ecx = esi + 0x696528;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F683F; /* je: equal / zero */

loc_000F681D: ;
    edx = MEM32(0x758DF4);
    MEM32(edx * 4 + 0x6A3A18) = edi;
    MEM32(edx * 4 + 0x69EB30) = 0;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758DF4) = edx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000F6842;

loc_000F683F: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F6842: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(0x758D48) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6870
 * Original: 0x000F6870 - 0x000F696C (252 bytes, 76 insns)
 * Folder: ai (match: xbox-demo 0x001068A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6870: ;
    PUSH32(esp, esi);
    esi = MEM32(0x758DF4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F6969; /* jbe: below or equal (unsigned <=) */

loc_000F6884: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x6A3A18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x6A3A18), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6895; /* je: equal / zero */

loc_000F688D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F6884; /* jb: below (unsigned <) */

loc_000F6892: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F6895: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, ebp);
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6968; /* je: equal / zero */

loc_000F68A1: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = eax * 4;
    eax = MEM32(esi * 4 + 0x6A3A18);
    MEM32(edx + 0x6A3A18) = eax;
    _fa = (uint32_t)(MEM32(edx + 0x69EB30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x69EB30), edi (32-bit) */
    PUSH32(esp, ebx);
    MEM32(0x758DF4) = esi;
    MEM32(esi * 4 + 0x6A3A18) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_000F6906; /* jbe: below or equal (unsigned <=) */

loc_000F68CC: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x190);
    _fb = (uint32_t)(0x69EBF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x69EBF8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0xFFFF;
    edi = edi;

loc_000F68E0: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x18);
    MEM16(ecx + 0x38) = LO16(ebx);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x18);
    MEM16(ecx + 0x3A) = LO16(ebx);
    ecx = MEM32(eax);
    MEM8(ecx + 6) = MEM8(ecx + 6) & 0xFD;
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(edx + 0x69EB30);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F68E0; /* jb: below (unsigned <) */

loc_000F6906: ;
    eax = MEM32(esi * 4 + 0x69EB30);
    MEM32(edx + 0x69EB30) = eax;
    MEM32(esi * 4 + 0x69EB30) = 0;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x190);
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x190);
    ebx = ecx + 0x69EBF8;
    _fb = (uint32_t)(0x69EBF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x69EBF8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x64;
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
    ecx = MEM32(edx + 0x69EB30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F6967; /* jbe: below or equal (unsigned <=) */

loc_000F694D: ;
    ecx = ebx;
    /* nop */

loc_000F6950: ;
    esi = MEM32(ecx);
    esi = MEM32(esi + 0x18);
    MEM16(esi + 0x38) = LO16(ebp);
    esi = MEM32(edx + 0x69EB30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F6950; /* jb: below (unsigned <) */

loc_000F6967: ;
    POP32(esp, ebx);

loc_000F6968: ;
    POP32(esp, ebp);

loc_000F6969: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6970
 * Original: 0x000F6970 - 0x000F6999 (41 bytes, 9 insns)
 * Folder: ai (between: 0x000F6870 and 0x000F6B00)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6970: ;
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x000F6991u); RECOMP_ABI_CALL(0x000F6870u, sub_000F6870); /* call 0x000F6870 */

loc_000F6991: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F69A0
 * Original: 0x000F69A0 - 0x000F6AFF (351 bytes, 99 insns)
 * Folder: ai (between: 0x000F6870 and 0x000F6B00)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F69A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F69A0: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 4), 0x10000000 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_000F69E0; /* jne: not equal / not zero */

loc_000F69AC: ;
    ebx = MEM32(0x758DF4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F69E0; /* jle: less or equal (signed <=) */

loc_000F69B8: ;
    goto loc_000F69C0;

    /* nop */

loc_000F69C0: ;
    ecx = MEM32(edi * 4 + 0x6A3A18);
    PUSH32(esp, 0);
    edx = esi;
    PUSH32(esp, 0x000F69D0u); RECOMP_ABI_CALL(0x0003EC10u, sub_0003EC10); /* call 0x0003EC10 */

loc_000F69D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6A5B; /* jne: not equal / not zero */

loc_000F69DB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F69C0; /* jl: less (signed <) */

loc_000F69E0: ;
    edx = MEM32(esi + 0x18);
    SET_LO16(eax, MEM16(edx + 0x38));
    edi = 0xFFFF;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A42; /* je: equal / zero */

loc_000F69F1: ;
    ecx = ZX16(LO16(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A42; /* je: equal / zero */

loc_000F69F9: ;
    ebx = MEM32(ecx * 4 + 0x69EB30);
    SET_LO16(edx, MEM16(edx + 0x3A));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebx * 4 + 0x69EBF4);
    ebx = MEM32(ebx + 0x18);
    MEM16(ebx + 0x3A) = LO16(edx);
    ebp = MEM32(esi + 0x18);
    ebp = ZX16(MEM16(ebp + 0x3A));
    edx = MEM32(ecx * 4 + 0x69EB30);
    ebx = edx + eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx * 4 + 0x69EBF4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp * 4 + 0x69EBF8) = eax;
    MEM32(ecx * 4 + 0x69EB30) = edx;

loc_000F6A42: ;
    ecx = MEM32(esi + 0x18);
    MEM16(ecx + 0x38) = LO16(edi);
    edx = MEM32(esi + 0x18);
    MEM16(edx + 0x3A) = LO16(edi);
    MEM32(esi + 4) = MEM32(esi + 4) & 0xFFFDFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000F6A57: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000F6A5B: ;
    edx = MEM32(esi + 0x18);
    SET_LO16(ecx, MEM16(edx + 0x38));
    eax = ZX16(LO16(ecx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A57; /* je: equal / zero */

loc_000F6A69: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6ABE; /* je: equal / zero */

loc_000F6A70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6ABE; /* je: equal / zero */

loc_000F6A75: ;
    ebx = MEM32(eax * 4 + 0x69EB30);
    SET_LO16(edx, MEM16(edx + 0x3A));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebx * 4 + 0x69EBF4);
    ebx = MEM32(ebx + 0x18);
    MEM16(ebx + 0x3A) = LO16(edx);
    ebp = MEM32(esi + 0x18);
    ebp = ZX16(MEM16(ebp + 0x3A));
    edx = MEM32(eax * 4 + 0x69EB30);
    ebx = edx + ecx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx * 4 + 0x69EBF4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp * 4 + 0x69EBF8) = ecx;
    MEM32(eax * 4 + 0x69EB30) = edx;

loc_000F6ABE: ;
    ebx = MEM32(edi * 4 + 0x69EB30);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx * 4 + 0x69EBF8) = esi;
    eax = MEM32(esi + 0x18);
    MEM16(eax + 0x38) = LO16(edi);
    SET_LO16(edx, MEM16(edi * 4 + 0x69EB30));
    ecx = MEM32(esi + 0x18);
    MEM16(ecx + 0x3A) = LO16(edx);
    MEM32(edi * 4 + 0x69EB30) = MEM32(edi * 4 + 0x69EB30) + 1;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x69EB30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    eax = eax & 0xFFFDFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    MEM32(esi + 4) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6B00
 * Original: 0x000F6B00 - 0x000F6BBD (189 bytes, 70 insns)
 * Folder: ai (match: xbox-demo 0x00106B40, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6B00: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x800000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F6BBC; /* je: equal / zero */

loc_000F6B0C: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6BBC; /* je: equal / zero */

loc_000F6B17: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6BBC; /* je: equal / zero */

loc_000F6B22: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    edx = 0x20000;
    ebp = 0xFFFDFFFFu;
    if (CMP_A(_fa, _fb)) goto loc_000F6B6C; /* ja: above (unsigned >) */

loc_000F6B3D: ;
    PUSH32(esp, ebx);
    edi = edi;

loc_000F6B40: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6B64; /* je: equal / zero */

loc_000F6B46: ;
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 3);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6B64; /* je: equal / zero */

loc_000F6B50: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ebx = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000F6B5F; /* je: equal / zero */

loc_000F6B5B: ;
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000F6B61;

loc_000F6B5F: ;
    ebx = ebx & ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000F6B61: ;
    MEM32(eax + 4) = ebx;

loc_000F6B64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F6B40; /* jbe: below or equal (unsigned <=) */

loc_000F6B6B: ;
    POP32(esp, ebx);

loc_000F6B6C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6BBA; /* je: equal / zero */

loc_000F6B74: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6BBA; /* je: equal / zero */

loc_000F6B79: ;
    eax = MEM32(0x758DF4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F6BBA; /* jge: greater or equal (signed >=) */

loc_000F6B84: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi * 4 + 0x69EB30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi * 4 + 0x69EB30) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F6BBA; /* jge: greater or equal (signed >=) */

loc_000F6B8D: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x69EBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6BB7; /* je: equal / zero */

loc_000F6B9F: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    esi = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000F6BB2; /* je: equal / zero */

loc_000F6BAA: ;
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000F6B84;

loc_000F6BB2: ;
    esi = esi & ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = esi;

loc_000F6BB7: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000F6B84;

loc_000F6BBA: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000F6BBC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F6BC0
 * Original: 0x000F6BC0 - 0x000F6C03 (67 bytes, 22 insns)
 * Folder: ai (match: xbox-demo 0x00106C00, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6BC0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F6BE4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F6BE4: ;
    ebx = eax;
    PUSH32(esp, 0x000F6BEBu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F6BEB: ;
    edi = eax;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x000F6BF5u); RECOMP_ABI_CALL(0x000F6B00u, sub_000F6B00); /* call 0x000F6B00 */

loc_000F6BF5: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6C10
 * Original: 0x000F6C10 - 0x000F6D0E (254 bytes, 98 insns)
 * Folder: ai (between: 0x000F6BC0 and 0x000F6D80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6C10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000F6D08; /* je: equal / zero */

loc_000F6C2E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6D08; /* je: equal / zero */

loc_000F6C38: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6D08; /* je: equal / zero */

loc_000F6C40: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x000F6C4Cu); RECOMP_ABI_CALL(0x0003B870u, sub_0003B870); /* call 0x0003B870 */

loc_000F6C4C: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6D08; /* je: equal / zero */

loc_000F6C59: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6C91; /* je: equal / zero */

loc_000F6C5D: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x800000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F6C91; /* je: equal / zero */

loc_000F6C65: ;
    ecx = MEM32(esi + 0x18);
    edi = MEM32(ecx + 0xC);
    eax = ebx;
    PUSH32(esp, 0x000F6C72u); RECOMP_ABI_CALL(0x000730C0u, sub_000730C0); /* call 0x000730C0 */

loc_000F6C72: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000F6C81u); RECOMP_ABI_CALL(0x0003B960u, sub_0003B960); /* call 0x0003B960 */

loc_000F6C81: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    PUSH32(esp, 0x000F6C8Bu); RECOMP_ABI_CALL(0x0003BE10u, sub_0003BE10); /* call 0x0003BE10 */

loc_000F6C8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000F6C91: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F6C98u); RECOMP_ABI_CALL(0x00072FF0u, sub_00072FF0); /* call 0x00072FF0 */

loc_000F6C98: ;
    eax = MEM32(ebx + 0x14);
    esi = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6CE9; /* je: equal / zero */

loc_000F6CA4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6CB5; /* je: equal / zero */

loc_000F6CAA: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000F6CB0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000F6CADu); } /* indirect call */
    }

loc_000F6CB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;

loc_000F6CB5: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6CC8; /* je: equal / zero */

loc_000F6CBC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000F6CC2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000F6CBFu); } /* indirect call */
    }

loc_000F6CC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;

loc_000F6CC8: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6CE9; /* je: equal / zero */

loc_000F6CCD: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6CDB; /* jne: not equal / not zero */

loc_000F6CD6: ;
    PUSH32(esp, 0x000F6CDBu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000F6CDB: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F6CE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F6CE3u); } /* indirect call */
    }

loc_000F6CE6: ;
    MEM32(esi + 0xC) = edi;

loc_000F6CE9: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM8(eax + ecx + 0x44)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx + 0x44), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6D01; /* jne: not equal / not zero */

loc_000F6CFB: ;
    MEM32(ebx) = MEM32(ebx) & 0xFFFFBFFFu;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000F6D01: ;
    eax = ebp;
    PUSH32(esp, 0x000F6D08u); RECOMP_ABI_CALL(0x0003BE10u, sub_0003BE10); /* call 0x0003BE10 */

loc_000F6D08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6C91
 * Original: 0x000F6C91 - 0x000F6D0E (125 bytes, 50 insns)
 * Folder: ai (between: 0x000F6BC0 and 0x000F6D80)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6C91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6C91: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F6C98u); RECOMP_ABI_CALL(0x00072FF0u, sub_00072FF0); /* call 0x00072FF0 */

loc_000F6C98: ;
    eax = MEM32(ebx + 0x14);
    esi = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6CE9; /* je: equal / zero */

loc_000F6CA4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6CB5; /* je: equal / zero */

loc_000F6CAA: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000F6CB0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000F6CADu); } /* indirect call */
    }

loc_000F6CB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;

loc_000F6CB5: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6CC8; /* je: equal / zero */

loc_000F6CBC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000F6CC2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000F6CBFu); } /* indirect call */
    }

loc_000F6CC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;

loc_000F6CC8: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6CE9; /* je: equal / zero */

loc_000F6CCD: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6CDB; /* jne: not equal / not zero */

loc_000F6CD6: ;
    PUSH32(esp, 0x000F6CDBu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000F6CDB: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F6CE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F6CE3u); } /* indirect call */
    }

loc_000F6CE6: ;
    MEM32(esi + 0xC) = edi;

loc_000F6CE9: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM8(eax + ecx + 0x44)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx + 0x44), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6D01; /* jne: not equal / not zero */

loc_000F6CFB: ;
    MEM32(ebx) = MEM32(ebx) & 0xFFFFBFFFu;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000F6D01: ;
    eax = ebp;
    PUSH32(esp, 0x000F6D08u); RECOMP_ABI_CALL(0x0003BE10u, sub_0003BE10); /* call 0x0003BE10 */

loc_000F6D08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6D10
 * Original: 0x000F6D10 - 0x000F6D71 (97 bytes, 30 insns)
 * Folder: ai (between: 0x000F6BC0 and 0x000F6D80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F6D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    edi = MEM32(0x758D4C);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edi;
    edi = MEM32(eax + 0x696528);
    MEM32(0x758D68) = ecx;
    MEM32(0x758D48) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6D59u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F6D59: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6D62u); RECOMP_ABI_CALL(0x000F6C10u, sub_000F6C10); /* call 0x000F6C10 */

loc_000F6D62: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000F6D80
 * Original: 0x000F6D80 - 0x000F6DC6 (70 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x00106DA0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6D80: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x800000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F6DC5; /* je: equal / zero */

loc_000F6D88: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6DC5; /* je: equal / zero */

loc_000F6D8F: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6DC5; /* je: equal / zero */

loc_000F6D96: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F6DC4; /* ja: above (unsigned >) */

loc_000F6DA6: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6DBD; /* je: equal / zero */

loc_000F6DAC: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6DBD; /* je: equal / zero */

loc_000F6DB6: ;
    MEM32(eax + 4) = MEM32(eax + 4) | 0x10000;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F6DBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F6DA6; /* jbe: below or equal (unsigned <=) */

loc_000F6DC4: ;
    POP32(esp, esi);

loc_000F6DC5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F6DD0
 * Original: 0x000F6DD0 - 0x000F6DFA (42 bytes, 9 insns)
 * Folder: ai (between: 0x000F6D80 and 0x000F7700)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6DD0: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x000F6DF2u); RECOMP_ABI_CALL(0x000F6D80u, sub_000F6D80); /* call 0x000F6D80 */

loc_000F6DF2: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6E00
 * Original: 0x000F6E00 - 0x000F76EA (2282 bytes, 522 insns)
 * Folder: ai (between: 0x000F6D80 and 0x000F7700)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F6E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000F6E00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x12C4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6E10u); RECOMP_ABI_CALL(0x00347D50u, sub_00347D50); /* call 0x00347D50 */

loc_000F6E10: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x800000 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000F76E3; /* je: equal / zero */

loc_000F6E2E: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F76E3; /* je: equal / zero */

loc_000F6E39: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F76E3; /* je: equal / zero */

loc_000F6E42: ;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(0x44AA20);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD0);
    eax = MEM32(edi + 0x30);
    ebx = MEM32(esi + eax + 0xA8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F76E3; /* je: equal / zero */

loc_000F6E63: ;
    ecx = eax;
    eax = esi + ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x000F6E6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F6E69u); } /* indirect call */
    }

loc_000F6E6F: ;
    eax = MEM32(edi + 0x30);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xD0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx + 0x90;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6E88u); RECOMP_ABI_CALL(0x002FDDD0u, sub_002FDDD0); /* call 0x002FDDD0 */

loc_000F6E88: ;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6E8Fu); RECOMP_ABI_CALL(0x002FDD00u, sub_002FDD00); /* call 0x002FDD00 */

loc_000F6E8F: ;
    esi = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6E96u); RECOMP_ABI_CALL(0x002FD810u, sub_002FD810); /* call 0x002FD810 */

loc_000F6E96: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6E9Bu); RECOMP_ABI_CALL(0x0007A460u, sub_0007A460); /* call 0x0007A460 */

loc_000F6E9B: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x18);
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax);
    ecx = 0x64;
    edi = esp + 0xD0;
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
    esi = MEM32(eax + 0x10);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_000F6EEA; /* ja: above (unsigned >) */

loc_000F6EC7: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6EDF; /* je: equal / zero */

loc_000F6ECD: ;
    edx = edi;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6EDF; /* je: equal / zero */

loc_000F6ED7: ;
    MEM32(esp + ecx * 4 + 0x330) = edi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F6EDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F6EC7; /* jbe: below or equal (unsigned <=) */

loc_000F6EE6: ;
    MEM32(esp + 0x1C) = ecx;

loc_000F6EEA: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6F26; /* je: equal / zero */

loc_000F6EF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6F26; /* je: equal / zero */

loc_000F6EF9: ;
    edx = MEM32(eax * 4 + 0x69EB30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F6F26; /* jle: less or equal (signed <=) */

loc_000F6F04: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x190);
    _fb = (uint32_t)(0x69EBF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x69EBF8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = MEM32(esp + 0x1C);
    edi = esp + ecx * 4 + 0x330;
    ecx = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    MEM32(esp + 0x1C) = eax;

loc_000F6F26: ;
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x9C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000F76B9; /* je: equal / zero */

loc_000F6F3C: ;
    /* nop */

loc_000F6F40: ;
    eax = MEM32(0x430EA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6F65; /* je: equal / zero */

loc_000F6F49: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F6F4Eu); RECOMP_ABI_CALL(0x0007B9C0u, sub_0007B9C0); /* call 0x0007B9C0 */

loc_000F6F4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6F65; /* jne: not equal / not zero */

loc_000F6F52: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 4), 0x200000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F6F65; /* jne: not equal / not zero */

loc_000F6F5D: ;
    MEM32(esp + esi * 4 + 0x268) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F6F65: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F6F40; /* jne: not equal / not zero */

loc_000F6F6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x9C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000F76B9; /* je: equal / zero */

loc_000F6F7E: ;
    eax = MEM32(0x46B164);
    ecx = MEM32(0x46B168);
    edx = MEM32(0x46B16C);
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(0x46B17C);
    MEM32(esp + 0xA4) = ecx;
    ecx = MEM32(0x46B180);
    MEM32(esp + 0xA8) = edx;
    edx = MEM32(0x46B184);
    MEM32(esp + 0xAC) = eax;
    eax = MEM32(0x46B158);
    MEM32(esp + 0xB0) = ecx;
    ecx = MEM32(0x46B15C);
    MEM32(esp + 0xB4) = edx;
    edx = MEM32(0x46B160);
    MEM32(esp + 0xB8) = eax;
    eax = MEM32(0x46B170);
    MEM32(esp + 0xBC) = ecx;
    ecx = MEM32(0x46B174);
    MEM32(esp + 0xC0) = edx;
    edx = MEM32(0x46B178);
    MEM32(esp + 0xC4) = eax;
    MEM32(esp + 0xC8) = ecx;
    MEM32(esp + 0xCC) = edx;
    MEM32(esp + 0x28) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000F76B9; /* jle: less or equal (signed <=) */

loc_000F7024: ;
    goto loc_000F7030;

    /* nop */
    /* nop */

loc_000F7030: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + eax * 4 + 0x268);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0x14);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(esp + 0x38) = edx;
    edx = MEM32(eax);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ecx + 0xC);
    xmm6 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x40) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x4C); /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x58); /* addss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x5C); /* addss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x60) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x64); /* addss */
    MEMF(esp + 0x74) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x68); /* addss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x6C); /* addss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x70); /* addss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x78); /* addss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x7C); /* addss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x88); /* addss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x38;

loc_000F7293: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0xC4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx + 0xC8); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx + -8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ebx + 0xC0); /* subss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F72FF; /* jnp: not parity */

loc_000F72E9: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */

loc_000F72FF: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 0xB4); /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xB0)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebx + 0xB8); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x4293F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000F76E3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000F7343: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F7293; /* jl: less (signed <) */

loc_000F7350: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = eax;
    goto loc_000F7360;

loc_000F7358: ;
    eax = MEM32(esp + 0x24);
    /* nop */

loc_000F7360: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F73CA; /* ja: above (unsigned >) */

loc_000F7365: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xF76EC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000F736Cu) goto loc_000F736C;
    if (_jt == 0x000F7384u) goto loc_000F7384;
    if (_jt == 0x000F739Cu) goto loc_000F739C;
    if (_jt == 0x000F73B4u) goto loc_000F73B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F736C: ;
    esi = esp + 0xA0;
    ecx = esp + 0x140;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = ecx;
    goto loc_000F73D2;

loc_000F7384: ;
    ecx = esp + 0xAC;
    edx = esp + 0x11C;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    goto loc_000F73CA;

loc_000F739C: ;
    eax = esp + 0xB8;
    ecx = esp + 0x134;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    goto loc_000F73CA;

loc_000F73B4: ;
    edx = esp + 0xC4;
    eax = esp + 0x128;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;

loc_000F73CA: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x14);

loc_000F73D2: ;
    xmm0 = XMM_SCALAR(MEMF(0x42934C)); /* movss */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x38;

loc_000F73E3: ;
    fp_push(MEMF(eax + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 0xC0)); /* fsub dword ptr [ebx + 0xc0] */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 0xC4)); /* fsub dword ptr [ebx + 0xc4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 0xC8)); /* fsub dword ptr [ebx + 0xc8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] / fp_top()); fp_pop(); /* fdivp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_push(MEMF(0x429350)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000F75EB; /* ja: above (unsigned >) */

loc_000F7445: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F7455; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F7450: ;
    xmm0 = xmm1; /* movaps */
    edi = edx;

loc_000F7455: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F73E3; /* jl: less (signed <) */

loc_000F745E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F75EB; /* je: equal / zero */

loc_000F7467: ;
    eax = edi + edi * 2;
    xmm1 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0xC8); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xC4); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ebx + 0xC0); /* subss */
    eax = esp + eax * 4 + 0x30;
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x98)); /* fmul dword ptr [esp + 0x98] */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x94)); /* fld float */
    MEMF(esp + 0x90) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x94)); /* fmul dword ptr [esp + 0x94] */
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x90)); /* fmul dword ptr [esp + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F756B; /* je: equal / zero */

loc_000F750A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F756B; /* je: equal / zero */

loc_000F750F: ;
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x98)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x94)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 0x90); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x90); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x98)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    goto loc_000F75C8;

loc_000F756B: ;
    xmm3 = XMM_SCALAR(MEMF(ebx + 0xA8)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebx + 0xA4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0xA0)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0xA8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebx + 0xA4); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0xA0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    MEMF(ecx + 8) = xmm2.f[0]; /* movss */

loc_000F75C8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F75D1; /* je: equal / zero */

loc_000F75CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F75FF; /* jne: not equal / not zero */

loc_000F75D1: ;
    edx = MEM32(ecx);
    edi = MEM32(ecx + 4);
    eax = 0x80000000u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F75FC;

loc_000F75EB: ;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    MEM32(ecx) = edx;
    edx = MEM32(esi + 8);
    esi = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;

loc_000F75FC: ;
    MEM32(ecx + 8) = edx;

loc_000F75FF: ;
    PUSH32(esp, ecx);
    eax = ebx + 0xE0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F760Bu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_000F760B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x24) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000F7358; /* jl: less (signed <) */

loc_000F761C: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x58)); /* movss */
    MEMF(esp + 0x128) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x4C)); /* movss */
    MEMF(esp + 0x11C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x74)); /* movss */
    MEMF(esp + 0x144) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    esi = esp + 0xD0;
    MEMF(esp + 0x138) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F7660u); RECOMP_ABI_CALL(0x0007A460u, sub_0007A460); /* call 0x0007A460 */

loc_000F7660: ;
    eax = MEM32(esp + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F76A1; /* jle: less or equal (signed <=) */

loc_000F766A: ;
    /* nop */

loc_000F7670: ;
    esi = MEM32(esp + edi * 4 + 0x330);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7698; /* je: equal / zero */

loc_000F767B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F7682u); RECOMP_ABI_CALL(0x0007B9C0u, sub_0007B9C0); /* call 0x0007B9C0 */

loc_000F7682: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7698; /* jne: not equal / not zero */

loc_000F7686: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0xFFFDFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + edi * 4 + 0x330) = 0;

loc_000F7698: ;
    eax = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F7670; /* jl: less (signed <) */

loc_000F76A1: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x9C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000F7030; /* jl: less (signed <) */

loc_000F76B9: ;
    edx = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F76E3; /* jle: less or equal (signed <=) */

loc_000F76C3: ;
    esi = 0x20000;
    goto loc_000F76D0;

    /* nop */

loc_000F76D0: ;
    eax = MEM32(esp + ecx * 4 + 0x330);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F76DE; /* je: equal / zero */

loc_000F76DB: ;
    MEM32(eax + 4) = MEM32(eax + 4) | esi;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F76DE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F76D0; /* jl: less (signed <) */

loc_000F76E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000F76EA
 * Original: 0x000F76EA - 0x000F7784 (154 bytes, 4 insns)
 * Folder: ai (between: 0x000F6D80 and 0x000F7700)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F76EA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F76EA: ;
    edi = edi;
    RECOMP_UNIMPL("insb byte ptr es:[edi], dx", 0x000F76ECu); /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_000F76FE - dead code, label not in function */

loc_000F76EF: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + esi * 2 + 0x739C000F) = MEM8(ebx + esi * 2 + 0x739C000F) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + esi * 2 + 0x739C000F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

}

/**
 * sub_000F7700
 * Original: 0x000F7700 - 0x000F7784 (132 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x00107720, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7700: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F770Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F770B: ;
    edi = eax;
    PUSH32(esp, 0x000F7712u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F7712: ;
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
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x000F773Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F7737u); } /* indirect call */
    }

loc_000F773E: ;
    edx = MEM32(0x758D48);
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D64);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(0x758D48) = edx;
    edx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x758D70) = edx;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F7773u); RECOMP_ABI_CALL(0x000F6E00u, sub_000F6E00); /* call 0x000F6E00 */

loc_000F7773: ;
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000F7790
 * Original: 0x000F7790 - 0x000F77F7 (103 bytes, 23 insns)
 * Folder: ai (match: xbox-demo 0x001077B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7790: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000F77DB; /* jne: not equal / not zero */

loc_000F77D1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000F77E3;

loc_000F77DB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000F77E3: ;
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F77EF; /* je: equal / zero */

loc_000F77EA: ;
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */

loc_000F77EF: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F7800
 * Original: 0x000F7800 - 0x000F787A (122 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x00107820, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7800: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F782B; /* je: equal / zero */

loc_000F7824: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_000F7833;

loc_000F782B: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */

loc_000F7833: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(ecx * 8 + 0x68642C) = eax;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
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
 * sub_000F7880
 * Original: 0x000F7880 - 0x000F78CF (79 bytes, 20 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7880: ;
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D4C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
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
    PUSH32(esp, 0x000F78C3u); RECOMP_ABI_CALL(0x00023060u, sub_00023060); /* call 0x00023060 */

loc_000F78C3: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F78D0
 * Original: 0x000F78D0 - 0x000F792E (94 bytes, 35 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F78D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F78D0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F792C; /* je: equal / zero */

loc_000F78DA: ;
    _fa = (uint32_t)(MEM32(eax + 0x490)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x490), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F792C; /* je: equal / zero */

loc_000F78E2: ;
    PUSH32(esp, 0x000F78E7u); RECOMP_ABI_CALL(0x000E08E0u, sub_000E08E0); /* call 0x000E08E0 */

loc_000F78E7: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F792C; /* je: equal / zero */

loc_000F78EE: ;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F7905u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000F7905: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F792B; /* je: equal / zero */

loc_000F790F: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7928; /* je: equal / zero */

loc_000F7916: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x7585A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x7585A8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7928; /* je: equal / zero */

loc_000F791E: ;
    ecx = eax + 0x10;
    esi = edi;
    PUSH32(esp, 0x000F7928u); RECOMP_ABI_CALL(0x000DEB70u, sub_000DEB70); /* call 0x000DEB70 */

loc_000F7928: ;
    MEM32(edi + 0x24) = ebx;

loc_000F792B: ;
    POP32(esp, ebx);

loc_000F792C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F7930
 * Original: 0x000F7930 - 0x000F7960 (48 bytes, 12 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7930: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F7952u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F7952: ;
    PUSH32(esp, 0x000F7957u); RECOMP_ABI_CALL(0x000F78D0u, sub_000F78D0); /* call 0x000F78D0 */

loc_000F7957: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F7960
 * Original: 0x000F7960 - 0x000F79E0 (128 bytes, 45 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000F7960: ;
    edx = MEM32(0x758D48);
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x20));
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x696528);
    edi = MEM32(edi + 0x24);
    MEM32(0x758D68) = ecx;
    ecx = edx + 0x696528;
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ebx));
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edi;
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F79E0
 * Original: 0x000F79E0 - 0x000F7AE3 (259 bytes, 99 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F79E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F79E0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000F7A1A; /* je: equal / zero */

loc_000F79E8: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ebx, 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F79FF; /* je: equal / zero */

loc_000F79F6: ;
    _fa = (uint32_t)(MEM8(ecx + 0x4C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x4C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7AE1; /* je: equal / zero */

loc_000F79FF: ;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx);
    MEM32(ecx + 0x28) = edi;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx);
    MEM8(ecx + 0x4C) = MEM8(ecx + 0x4C) | 8;
    _fa = (uint32_t)(MEM8(ecx + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) | LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000F7A1A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7AE1; /* je: equal / zero */

loc_000F7A23: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7A60; /* je: equal / zero */

loc_000F7A2B: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7A60; /* je: equal / zero */

loc_000F7A38: ;
    goto loc_000F7A40;

    /* nop */

loc_000F7A40: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F7AE1; /* jne: not equal / not zero */

loc_000F7A4B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7A60; /* je: equal / zero */

loc_000F7A53: ;
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7A40; /* jne: not equal / not zero */

loc_000F7A60: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x74);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ebx, 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7A73; /* je: equal / zero */

loc_000F7A6E: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7AE1; /* je: equal / zero */

loc_000F7A73: ;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx);
    MEM32(ecx + 0x74) = edi;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx);
    MEM8(ecx + 0x6C) = MEM8(ecx + 0x6C) | 8;
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    MEM8(ecx + 0x6C) = MEM8(ecx + 0x6C) | LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax + 8);
    eax = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F7AE0; /* ja: above (unsigned >) */

loc_000F7AA4: ;
    PUSH32(esp, ebp);

loc_000F7AA5: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7AD8; /* je: equal / zero */

loc_000F7AAE: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    ebp = MEM32(ecx + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7ABF; /* je: equal / zero */

loc_000F7ABA: ;
    _fa = (uint32_t)(MEM8(ecx + 0x4C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x4C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7AD8; /* je: equal / zero */

loc_000F7ABF: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    MEM32(ecx + 0x28) = edi;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    MEM8(ecx + 0x4C) = MEM8(ecx + 0x4C) | 8;
    _fa = (uint32_t)(MEM8(ecx + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) | LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_000F7AD8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F7AA5; /* jbe: below or equal (unsigned <=) */

loc_000F7ADF: ;
    POP32(esp, ebp);

loc_000F7AE0: ;
    POP32(esp, esi);

loc_000F7AE1: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F7AF0
 * Original: 0x000F7AF0 - 0x000F7B3E (78 bytes, 18 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7AF0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x696528);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x000F7B35u); RECOMP_ABI_CALL(0x000F79E0u, sub_000F79E0); /* call 0x000F79E0 */

loc_000F7B35: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F7B40
 * Original: 0x000F7B40 - 0x000F7C61 (289 bytes, 101 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7B40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(ebx, 0x10);
    /* nop */

loc_000F7B50: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    eax = MEM32(edi + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_000F7B75; /* je: equal / zero */

loc_000F7B5A: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B7A; /* je: equal / zero */

loc_000F7B66: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x4C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x4C), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F7B7A; /* jne: not equal / not zero */

loc_000F7B70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000F7B75: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F7B7A: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7B8C; /* je: equal / zero */

loc_000F7B82: ;
    ecx = MEM32(ebp + 0x14);
    esi = MEM32(ecx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F7B94;

loc_000F7B8C: ;
    edx = MEM32(ebp + 0x14);
    esi = MEM32(edx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x54;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F7B94: ;
    SET_LO8(edx, MEM8(eax + 0x18));
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0x18) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 0x18));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x18) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x18));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x18) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 0x18));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x18) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x18));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x18) = LO8(edx);
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 0x14) = ecx;
    SET_LO8(edx, MEM8(esi + 0x18));
    SET_LO8(ecx, MEM8(eax + 0x18));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 0x40);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x18) = LO8(ecx);
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7B70; /* je: equal / zero */

loc_000F7C0E: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7B70; /* je: equal / zero */

loc_000F7C1B: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx + 8);
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B70; /* je: equal / zero */

loc_000F7C2C: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4002) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x4002 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7B70; /* je: equal / zero */

loc_000F7C38: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B70; /* je: equal / zero */

loc_000F7C49: ;
    ecx = MEM32(eax);
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_000F7B70; /* je: equal / zero */

loc_000F7C5A: ;
    ebp = eax;
    goto loc_000F7B50;

}

/**
 * sub_000F7C70
 * Original: 0x000F7C70 - 0x000F7CC0 (80 bytes, 18 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7C70: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
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
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x000F7CB5u); RECOMP_ABI_CALL(0x000F7B40u, sub_000F7B40); /* call 0x000F7B40 */

loc_000F7CB5: ;
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
 * sub_000F7CC0
 * Original: 0x000F7CC0 - 0x000F7D22 (98 bytes, 37 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7CC0: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7CF2; /* je: equal / zero */

loc_000F7CC7: ;
    edx = MEM32(eax + 0x14);
    edx = MEM32(edx);
    MEM8(edx + 0x4C) = MEM8(edx + 0x4C) | 8;
    _fa = (uint32_t)(MEM8(edx + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(eax + 0x14);
    edx = MEM32(edx);
    MEM32(edx + 0x40) = ecx;
    edx = MEM32(eax + 0x14);
    edx = MEM32(edx);
    MEM32(edx + 0x44) = ecx;
    edx = MEM32(eax + 0x14);
    edx = MEM32(edx);
    MEM32(edx + 0x48) = ecx;
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) & 0xBF;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_000F7CF2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7D21; /* je: equal / zero */

loc_000F7CF7: ;
    edx = MEM32(eax + 0x14);
    edx = MEM32(edx);
    MEM8(edx + 0x6C) = MEM8(edx + 0x6C) | 8;
    _fa = (uint32_t)(MEM8(edx + 0x6C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(eax + 0x14);
    edx = MEM32(edx);
    MEM32(edx + 0x60) = ecx;
    edx = MEM32(eax + 0x14);
    edx = MEM32(edx);
    MEM32(edx + 0x64) = ecx;
    edx = MEM32(eax + 0x14);
    edx = MEM32(edx);
    MEM32(edx + 0x68) = ecx;
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    MEM8(eax + 0x6C) = MEM8(eax + 0x6C) & 0xBF;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000F7D21: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7D30
 * Original: 0x000F7D30 - 0x000F7D64 (52 bytes, 14 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7D30: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F7D52u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F7D52: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x000F7D5Bu); RECOMP_ABI_CALL(0x000F7CC0u, sub_000F7CC0); /* call 0x000F7CC0 */

loc_000F7D5B: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F7D70
 * Original: 0x000F7D70 - 0x000F7DDE (110 bytes, 35 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7D70: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000F7DAD; /* je: equal / zero */

loc_000F7D94: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F7DA2u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_000F7DA2: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F7DAD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7DCB; /* je: equal / zero */

loc_000F7DB2: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax + 0x74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F7DC0u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_000F7DC0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F7DCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F7DD3u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_000F7DD3: ;
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
 * sub_000F7DE0
 * Original: 0x000F7DE0 - 0x000F7E12 (50 bytes, 19 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7DE0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7DFA; /* je: equal / zero */

loc_000F7DE7: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    MEM8(ecx + 0x4C) = MEM8(ecx + 0x4C) | 8;
    _fa = (uint32_t)(MEM8(ecx + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) & 0xBF;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_000F7DFA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7E11; /* je: equal / zero */

loc_000F7DFF: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    MEM8(ecx + 0x6C) = MEM8(ecx + 0x6C) | 8;
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) & 0xBF;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000F7E11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7E20
 * Original: 0x000F7E20 - 0x000F7E6E (78 bytes, 23 insns)
 * Folder: ai (between: 0x000F7800 and 0x000F7E70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7E20: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000F7E4F; /* je: equal / zero */

loc_000F7E44: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    MEM8(ecx + 0x4C) = MEM8(ecx + 0x4C) | 8;
    _fa = (uint32_t)(MEM8(ecx + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_000F7E5D;

loc_000F7E4F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F7E66; /* je: equal / zero */

loc_000F7E54: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    MEM8(ecx + 0x6C) = MEM8(ecx + 0x6C) | 8;
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_000F7E5D: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) & 0xBF;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000F7E66: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F7E70
 * Original: 0x000F7E70 - 0x000F7F23 (179 bytes, 74 insns)
 * Folder: ai (match: xbox-demo 0x00107D10, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7E70: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7EDB; /* je: equal / zero */

loc_000F7E7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7E8F; /* je: equal / zero */

loc_000F7E7F: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000F7E8Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000F7E89u); } /* indirect call */
    }

loc_000F7E8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F7E8F: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(eax);
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(edx);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x000F7EAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F7EA7u); } /* indirect call */
    }

loc_000F7EAA: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7F22; /* jne: not equal / not zero */

loc_000F7EB9: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(edx + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000F7ED7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000F7ED4u); } /* indirect call */
    }

loc_000F7ED7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F7EDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7EFA; /* je: equal / zero */

loc_000F7EDF: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x000F7EECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F7EE9u); } /* indirect call */
    }

loc_000F7EEC: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 0;

loc_000F7EFA: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7F22; /* je: equal / zero */

loc_000F7F06: ;
    eax = ecx;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000F7F13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F7F10u); } /* indirect call */
    }

loc_000F7F13: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    MEM32(ecx + 4) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F7F22: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7F30
 * Original: 0x000F7F30 - 0x000F7F7D (77 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00107DD0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7F30: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696528);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    PUSH32(esp, 0x000F7F73u); RECOMP_ABI_CALL(0x000F7E70u, sub_000F7E70); /* call 0x000F7E70 */

loc_000F7F73: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F7F80
 * Original: 0x000F7F80 - 0x000F7FC4 (68 bytes, 17 insns)
 * Folder: ai (between: 0x000F7F30 and 0x000F8060)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7F80: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000F7FBC; /* je: equal / zero */

loc_000F7FA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x8000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F7FBC; /* jne: not equal / not zero */

loc_000F7FAA: ;
    eax = eax | 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, 0x000F7FBCu); RECOMP_ABI_CALL(0x00027F50u, sub_00027F50); /* call 0x00027F50 */

loc_000F7FBC: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F7FCF
 * Original: 0x000F7FCF - 0x000F7FD0 (1 bytes, 1 insns)
 * Folder: ai (between: 0x000F7F30 and 0x000F8060)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7FCF(void)
{

loc_000F7FCF: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000F7FD0
 * Original: 0x000F7FD0 - 0x000F7FFF (47 bytes, 17 insns)
 * Folder: ai (between: 0x000F7F30 and 0x000F8060)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F7FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x44AA20);
    edx = edx & 0xFBFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(eax + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F7FF0u); RECOMP_ABI_CALL(0x00028160u, sub_00028160); /* call 0x00028160 */

loc_000F7FF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8000
 * Original: 0x000F8000 - 0x000F8052 (82 bytes, 24 insns)
 * Folder: ai (between: 0x000F7F30 and 0x000F8060)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F8000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    MEM32(0x758D68) = edx;
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x44AA20);
    edx = edx & 0xFBFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM32(0x758D70) = ecx;
    MEM32(eax + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F803Du); RECOMP_ABI_CALL(0x00028160u, sub_00028160); /* call 0x00028160 */

loc_000F803D: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8060
 * Original: 0x000F8060 - 0x000F8088 (40 bytes, 17 insns)
 * Folder: ai (match: xbox-demo 0x00107EF0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8060: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8078; /* je: equal / zero */

loc_000F8067: ;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x7584F8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8077u); RECOMP_ABI_CALL(0x0001E4D0u, sub_0001E4D0); /* call 0x0001E4D0 */

loc_000F8077: ;
    esp += 4; return; /* ret */

loc_000F8078: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x7584F8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8087u); RECOMP_ABI_CALL(0x0001E4D0u, sub_0001E4D0); /* call 0x0001E4D0 */

loc_000F8087: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8090
 * Original: 0x000F8090 - 0x000F811E (142 bytes, 37 insns)
 * Folder: ai (match: xbox-demo 0x00107F20, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8090: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F80BB; /* je: equal / zero */

loc_000F80B6: ;
    eax = MEM32(eax + 0x40);
    goto loc_000F80BD;

loc_000F80BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F80BD: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x7584F8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F80CDu); RECOMP_ABI_CALL(0x0001E4D0u, sub_0001E4D0); /* call 0x0001E4D0 */

loc_000F80CD: ;
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
 * sub_000F8120
 * Original: 0x000F8120 - 0x000F816F (79 bytes, 30 insns)
 * Folder: ai (between: 0x000F8090 and 0x000F81A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8120: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F816E; /* je: equal / zero */

loc_000F8127: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x7585A8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F816D; /* je: equal / zero */

loc_000F8132: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F816A; /* je: equal / zero */

loc_000F813A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax + 0x10;
    esi = edi;
    PUSH32(esp, 0x000F8146u); RECOMP_ABI_CALL(0x000DEB70u, sub_000DEB70); /* call 0x000DEB70 */

loc_000F8146: ;
    ebx = ebp + 0x10;
    edx = ebx;
    PUSH32(esp, 0x000F8150u); RECOMP_ABI_CALL(0x000DEBA0u, sub_000DEBA0); /* call 0x000DEBA0 */

loc_000F8150: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8168; /* jne: not equal / not zero */

loc_000F8155: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0x000F815Fu); RECOMP_ABI_CALL(0x00020970u, sub_00020970); /* call 0x00020970 */

loc_000F815F: ;
    ebp = MEM32(0x7585A8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F8168: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000F816A: ;
    MEM32(edi + 0x24) = ebp;

loc_000F816D: ;
    POP32(esp, ebp);

loc_000F816E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8170
 * Original: 0x000F8170 - 0x000F819B (43 bytes, 11 insns)
 * Folder: ai (between: 0x000F8090 and 0x000F81A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8170: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F8192u); RECOMP_ABI_CALL(0x000F8120u, sub_000F8120); /* call 0x000F8120 */

loc_000F8192: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F81A0
 * Original: 0x000F81A0 - 0x000F81D2 (50 bytes, 19 insns)
 * Folder: ai (match: xbox-demo 0x00108030, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F81A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F81A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F81D1; /* je: equal / zero */

loc_000F81A4: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F81D1; /* je: equal / zero */

loc_000F81AB: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F81D1; /* je: equal / zero */

loc_000F81B2: ;
    edx = MEM32(eax);
    edx = MEM32(edx);
    edx = edx & 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F81CA; /* jne: not equal / not zero */

loc_000F81C1: ;
    edx = MEM32(eax + 8);
    MEM32(edx + 0x5F0) = ecx;

loc_000F81CA: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F81B2; /* jne: not equal / not zero */

loc_000F81D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F81E0
 * Original: 0x000F81E0 - 0x000F822C (76 bytes, 16 insns)
 * Folder: ai (match: xbox-demo 0x00108070, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F81E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F81E0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
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
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696528);
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x000F8224u); RECOMP_ABI_CALL(0x000F81A0u, sub_000F81A0); /* call 0x000F81A0 */

loc_000F8224: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F8230
 * Original: 0x000F8230 - 0x000F8291 (97 bytes, 19 insns)
 * Folder: ai (between: 0x000F81E0 and 0x000F8630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8230: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000F824Bu); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000F824B: ;
    PUSH32(esp, 0x000F8250u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F8250: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 1;
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
 * sub_000F82A0
 * Original: 0x000F82A0 - 0x000F82F7 (87 bytes, 17 insns)
 * Folder: ai (between: 0x000F81E0 and 0x000F8630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F82A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F82A0: ;
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
 * sub_000F8300
 * Original: 0x000F8300 - 0x000F83D6 (214 bytes, 84 insns)
 * Folder: ai (between: 0x000F81E0 and 0x000F8630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8300: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000F8331; /* je: equal / zero */

loc_000F8308: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ebx, 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_000F831F; /* je: equal / zero */

loc_000F8316: ;
    _fa = (uint32_t)(MEM8(ecx + 0x4C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x4C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F83D4; /* je: equal / zero */

loc_000F831F: ;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx);
    MEM32(ecx + 0x2C) = edi;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) | LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000F8331: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F83D4; /* je: equal / zero */

loc_000F833A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F836C; /* je: equal / zero */

loc_000F8342: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F836C; /* je: equal / zero */

loc_000F834F: ;
    /* nop */

loc_000F8350: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F83D4; /* jne: not equal / not zero */

loc_000F8357: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F836C; /* je: equal / zero */

loc_000F835F: ;
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8350; /* jne: not equal / not zero */

loc_000F836C: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    MEM32(edx + 0x7C) = edi;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    SET_LO8(edx, MEM8(ecx + 0x6C));
    SET_LO8(ebx, 0x20);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x6C) = LO8(edx);
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax + 8);
    eax = MEM32(eax);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F83D4; /* ja: above (unsigned >) */

loc_000F839A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    /* nop */

loc_000F83A0: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x4000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F83CB; /* je: equal / zero */

loc_000F83AA: ;
    esi = MEM32(eax + 0x14);
    esi = MEM32(esi);
    ebp = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F83BB; /* je: equal / zero */

loc_000F83B6: ;
    _fa = (uint32_t)(MEM8(esi + 0x4C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x4C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F83CB; /* je: equal / zero */

loc_000F83BB: ;
    esi = MEM32(eax + 0x14);
    esi = MEM32(esi);
    MEM32(esi + 0x2C) = edi;
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    MEM8(eax + 0x4C) = MEM8(eax + 0x4C) | LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_000F83CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F83A0; /* jbe: below or equal (unsigned <=) */

loc_000F83D2: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000F83D4: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F83E0
 * Original: 0x000F83E0 - 0x000F842E (78 bytes, 18 insns)
 * Folder: ai (between: 0x000F81E0 and 0x000F8630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F83E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F83E0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x696528);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x000F8425u); RECOMP_ABI_CALL(0x000F8300u, sub_000F8300); /* call 0x000F8300 */

loc_000F8425: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8430
 * Original: 0x000F8430 - 0x000F849E (110 bytes, 35 insns)
 * Folder: ai (between: 0x000F81E0 and 0x000F8630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8430: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000F846D; /* je: equal / zero */

loc_000F8454: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8462u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_000F8462: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F846D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F848B; /* je: equal / zero */

loc_000F8472: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8480u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_000F8480: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F848B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8493u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_000F8493: ;
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
 * sub_000F84A0_gen
 * Original: 0x000F84A0 - 0x000F8520 (128 bytes, 48 insns)
 * Folder: ai (between: 0x000F81E0 and 0x000F8630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F84A0_gen(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F84A0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F84AF; /* jne: not equal / not zero */

loc_000F84A8: ;
    eax = 0x41F4A8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F84AF: ;
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000F84BAu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000F84BA: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F84D0; /* je: equal / zero */

loc_000F84C7: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F84DA; /* je: equal / zero */

loc_000F84D0: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F84E1; /* je: equal / zero */

loc_000F84DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000F84E3; /* je: equal / zero */

loc_000F84E1: ;
    ecx = eax;

loc_000F84E3: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F84FBu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000F84FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F851C; /* je: equal / zero */

loc_000F8503: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F851C; /* je: equal / zero */

loc_000F850A: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F851C; /* jae: above or equal (unsigned >=) */

loc_000F8512: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + ecx * 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F851C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8520
 * Original: 0x000F8520 - 0x000F8560 (64 bytes, 24 insns)
 * Folder: ai (between: 0x000F81E0 and 0x000F8630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8520: ;
    eax = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = eax + 0x696528;
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x000F8546u); RECOMP_ABI_CALL(0x000F84A0u, sub_000F84A0); /* call 0x000F84A0 */

loc_000F8546: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F854Cu); RECOMP_ABI_CALL(0x000E6CB0u, sub_000E6CB0); /* call 0x000E6CB0 */

loc_000F854C: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8560
 * Original: 0x000F8560 - 0x000F85D5 (117 bytes, 44 insns)
 * Folder: ai (between: 0x000F81E0 and 0x000F8630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8560: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F85D1; /* je: equal / zero */

loc_000F8568: ;
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000F8573u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000F8573: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8589; /* je: equal / zero */

loc_000F8580: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8593; /* je: equal / zero */

loc_000F8589: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F859A; /* je: equal / zero */

loc_000F8593: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000F859C; /* je: equal / zero */

loc_000F859A: ;
    ecx = eax;

loc_000F859C: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F85B4u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000F85B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F85D1; /* je: equal / zero */

loc_000F85BC: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F85D1; /* je: equal / zero */

loc_000F85C3: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F85D1; /* jae: above or equal (unsigned >=) */

loc_000F85CD: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F85D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F85E0
 * Original: 0x000F85E0 - 0x000F862C (76 bytes, 22 insns)
 * Folder: ai (between: 0x000F81E0 and 0x000F8630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F85E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F85E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D48);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ebx + 0x696528;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000F85FEu); RECOMP_ABI_CALL(0x000F8560u, sub_000F8560); /* call 0x000F8560 */

loc_000F85FE: ;
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
 * sub_000F8630
 * Original: 0x000F8630 - 0x000F8688 (88 bytes, 27 insns)
 * Folder: ai (match: xbox-demo 0x001105A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8630: ;
    eax = MEM32(0x758D4C);
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 0x696528;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8654; /* jne: not equal / not zero */

loc_000F864D: ;
    edx = 1;
    goto loc_000F865C;

loc_000F8654: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_000F865C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(0x758D48) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F868B
 * Original: 0x000F868B - 0x000F8690 (5 bytes, 5 insns)
 * Folder: ai (between: 0x000F8630 and 0x000F8690)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F868B(void)
{

loc_000F868B: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000F8690
 * Original: 0x000F8690 - 0x000F8713 (131 bytes, 44 insns)
 * Folder: ai (match: xbox-demo 0x00110600, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000F8690: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F8697u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000F8697: ;
    esi = eax;
    PUSH32(esp, 0x000F869Eu); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000F869E: ;
    edi = edi;

loc_000F86A0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F86C8; /* jne: not equal / not zero */

loc_000F86AA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F86C4; /* je: equal / zero */

loc_000F86AE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F86C8; /* jne: not equal / not zero */

loc_000F86BA: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F86A0; /* jne: not equal / not zero */

loc_000F86C4: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F86CD;

loc_000F86C8: ;
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(esi) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000F86CD: ;
    ecx = MEM32(0x758D48);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = ecx + 0x696528;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
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
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8720
 * Original: 0x000F8720 - 0x000F876C (76 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00110690, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8720: ;
    PUSH32(esp, 0x000F8725u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000F8725: ;
    edx = eax + 1;

loc_000F8728: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8728; /* jne: not equal / not zero */

loc_000F872F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
 * sub_000F8770
 * Original: 0x000F8770 - 0x000F8782 (18 bytes, 5 insns)
 * Folder: ai (between: 0x000F8720 and 0x000F8830)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8770: ;
    PUSH32(esp, 0x000F8775u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F8775: ;
    PUSH32(esp, 0x000F877Au); RECOMP_ABI_CALL(0x00069D50u, sub_00069D50); /* call 0x00069D50 */

loc_000F877A: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F8790
 * Original: 0x000F8790 - 0x000F87D3 (67 bytes, 14 insns)
 * Folder: ai (between: 0x000F8720 and 0x000F8830)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8790: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(0x44A9D8);
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
 * sub_000F87E0
 * Original: 0x000F87E0 - 0x000F8821 (65 bytes, 13 insns)
 * Folder: ai (between: 0x000F8720 and 0x000F8830)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F87E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F87E0: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 5;
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
 * sub_000F8830
 * Original: 0x000F8830 - 0x000F88A0 (112 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00110750, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8830: ;
    PUSH32(esp, edi);
    eax = 0x470148;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x000F8848u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000F8848: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F885E; /* je: equal / zero */

loc_000F8855: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8868; /* je: equal / zero */

loc_000F885E: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F886F; /* je: equal / zero */

loc_000F8868: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000F8871; /* je: equal / zero */

loc_000F886F: ;
    ecx = eax;

loc_000F8871: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F889F; /* je: equal / zero */

loc_000F8876: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F888Eu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000F888E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F889F; /* je: equal / zero */

loc_000F8896: ;
    ecx = MEM32(esp + 4);
    MEM32(esi) = edi;
    MEM32(esi + 4) = ecx;

loc_000F889F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F88A0
 * Original: 0x000F88A0 - 0x000F8927 (135 bytes, 37 insns)
 * Folder: ai (match: xbox-demo 0x001107C0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F88A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F88A0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F88AAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F88AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F88B0u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F88B0: ;
    esi = esp + 0xC;
    edi = eax;
    PUSH32(esp, 0x000F88BBu); RECOMP_ABI_CALL(0x000F8830u, sub_000F8830); /* call 0x000F8830 */

loc_000F88BB: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(0x758D48);
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x673788);
    edi = eax;
    esi = esi + 0x696528;
    edx = SX16(LO16(eax));
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x000F88EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F88E7u); } /* indirect call */
    }

loc_000F88EE: ;
    eax = MEM32(0x758D4C);
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = LO16(edi);
    MEM32(eax * 8 + 0x68642C) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x4C);
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
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
 * sub_000F8930
 * Original: 0x000F8930 - 0x000F897D (77 bytes, 19 insns)
 * Folder: ai (match: xbox-demo 0x00110850, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8930: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F8936u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000F8936: ;
    esi = eax;
    PUSH32(esp, 0x000F893Du); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000F893D: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + esi);
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
 * sub_000F8980
 * Original: 0x000F8980 - 0x000F89C1 (65 bytes, 31 insns)
 * Folder: ai (between: 0x000F8930 and 0x000F8EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8980: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8997u); RECOMP_ABI_CALL(0x000F8E60u, sub_000F8E60); /* call 0x000F8E60 */

loc_000F8997: ;
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F89B6; /* je: equal / zero */

loc_000F89A0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F89AE; /* jne: not equal / not zero */

loc_000F89A9: ;
    PUSH32(esp, 0x000F89AEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000F89AE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F89B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F89B3u); } /* indirect call */
    }

loc_000F89B6: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F89D0
 * Original: 0x000F89D0 - 0x000F8B2E (350 bytes, 127 insns)
 * Folder: ai (between: 0x000F8930 and 0x000F8EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F89D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F89D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ebx = esp + 0x18;
    eax = 0x76552C;
    MEM32(ebp) = 0;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x000F8A02u); RECOMP_ABI_CALL(0x000F8D50u, sub_000F8D50); /* call 0x000F8D50 */

loc_000F8A02: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8A20; /* jne: not equal / not zero */

loc_000F8A0A: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x10);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F8A20: ;
    edx = MEM32(0x758DF8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_000F8A4C; /* jbe: below or equal (unsigned <=) */

loc_000F8A2F: ;
    ecx = 0x67B784;

loc_000F8A34: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8A42; /* je: equal / zero */

loc_000F8A38: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F8A34; /* jb: below (unsigned <) */

loc_000F8A40: ;
    goto loc_000F8A4C;

loc_000F8A42: ;
    ebx = eax + eax * 8;
    ebx = ebx * 4 + 0x67B784;

loc_000F8A4C: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8A76; /* jne: not equal / not zero */

loc_000F8A54: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8A76; /* jne: not equal / not zero */

loc_000F8A58: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x76552C);
    PUSH32(esp, 0x000F8A6Cu); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_000F8A6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F8A76: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8A84; /* jne: not equal / not zero */

loc_000F8A7F: ;
    PUSH32(esp, 0x000F8A84u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000F8A84: ;
    edx = 0x24;
    ecx = eax;
    PUSH32(esp, 0x000F8A90u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000F8A90: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edx = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    MEM32(edx + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F8ABC; /* je: equal / zero */

loc_000F8A9E: ;
    edi = MEM32(ebp);
    esi = ebx;
    ecx = 9;
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
    eax = MEM32(ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebx;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F8ABC: ;
    edx = MEM32(ebp);
    eax = MEM32(0x758DF8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_000F8B24; /* jae: above or equal (unsigned >=) */

loc_000F8AE7: ;
    ecx = eax + eax * 8;
    edx = ecx * 4 + 0x67B784;
    ecx = MEM32(ebp);
    MEM32(ecx) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758DF8) = eax;
    eax = MEM32(ebp);
    ecx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(ebp);
    eax = MEM32(edx);
    MEM32(eax) = esi;

loc_000F8B24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F8B30
 * Original: 0x000F8B30 - 0x000F8BF4 (196 bytes, 71 insns)
 * Folder: ai (between: 0x000F8930 and 0x000F8EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8B30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x765530);
    eax = MEM32(esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F8B7B; /* je: equal / zero */

loc_000F8B45: ;
    PUSH32(esp, edi);

loc_000F8B46: ;
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8B69; /* je: equal / zero */

loc_000F8B4D: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8B5B; /* jne: not equal / not zero */

loc_000F8B56: ;
    PUSH32(esp, 0x000F8B5Bu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000F8B5B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F8B63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8B60u); } /* indirect call */
    }

loc_000F8B63: ;
    esi = MEM32(0x765530);

loc_000F8B69: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x000F8B72u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_000F8B72: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8B46; /* jne: not equal / not zero */

loc_000F8B7A: ;
    POP32(esp, edi);

loc_000F8B7B: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = 0x76552C;
    PUSH32(esp, 0x000F8B89u); RECOMP_ABI_CALL(0x000F8E10u, sub_000F8E10); /* call 0x000F8E10 */

loc_000F8B89: ;
    eax = MEM32(0x765530);
    MEM32(eax + 4) = eax;
    eax = MEM32(0x765530);
    MEM32(0x765534) = ebp;
    MEM32(eax) = eax;
    eax = MEM32(0x765530);
    MEM32(eax + 8) = eax;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8BB2; /* je: equal / zero */

loc_000F8BAC: ;
    MEM32(0x758DF8) = ebp;

loc_000F8BB2: ;
    eax = MEM32(0x44AA20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8BF0; /* je: equal / zero */

loc_000F8BBB: ;
    esi = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F8BF0; /* ja: above (unsigned >) */

loc_000F8BC8: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8BE9; /* je: equal / zero */

loc_000F8BCE: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8BE9; /* je: equal / zero */

loc_000F8BD8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8BE9; /* je: equal / zero */

loc_000F8BDF: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8BE9; /* je: equal / zero */

loc_000F8BE6: ;
    MEM32(eax + 0x54) = ebp;

loc_000F8BE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F8BC8; /* jbe: below or equal (unsigned <=) */

loc_000F8BF0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8C00
 * Original: 0x000F8C00 - 0x000F8C6F (111 bytes, 43 insns)
 * Folder: ai (between: 0x000F8930 and 0x000F8EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8C00: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x765530);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F8C6D; /* je: equal / zero */

loc_000F8C10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000F8C12: ;
    eax = MEM32(eax + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x20));
    edx = MEM32(eax);
    SET_LO8(ecx, LO8(ecx) & 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    MEM8(eax + 0x20) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_000F8C36; /* je: equal / zero */

loc_000F8C25: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8C54; /* je: equal / zero */

loc_000F8C29: ;
    ecx = 9;
    esi = edx;
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
    goto loc_000F8C54;

loc_000F8C36: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;

loc_000F8C54: ;
    MEM32(eax) = edx;
    edx = esp + 8;
    PUSH32(esp, 0x000F8C5Fu); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_000F8C5F: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x765530)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x765530) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8C12; /* jne: not equal / not zero */

loc_000F8C6B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F8C6D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8C70
 * Original: 0x000F8C70 - 0x000F8CB7 (71 bytes, 25 insns)
 * Folder: ai (between: 0x000F8930 and 0x000F8EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8C70: ;
    eax = MEM32(0x758D68);
    eax = MEM32(eax + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D6C);
    MEM32(0x758D68) = ecx;
    MEM32(0x758D70) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F8CB6; /* je: equal / zero */

loc_000F8C94: ;
    SET_LO8(edx, MEM8(eax + 0x20));
    PUSH32(esp, edi);
    edi = MEM32(eax);
    SET_LO8(edx, LO8(edx) | 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM8(eax + 0x20) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_000F8CB5; /* je: equal / zero */

loc_000F8CA4: ;
    edx = MEM32(edi);
    PUSH32(esp, esi);
    esi = eax;
    ecx = 9;
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
    eax = MEM32(eax);
    MEM32(eax) = edx;
    POP32(esp, esi);

loc_000F8CB5: ;
    POP32(esp, edi);

loc_000F8CB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8CC0
 * Original: 0x000F8CC0 - 0x000F8D19 (89 bytes, 34 insns)
 * Folder: ai (between: 0x000F8930 and 0x000F8EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8CC0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x765530);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F8D0E; /* je: equal / zero */

loc_000F8CD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000F8CD2: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8CF7; /* je: equal / zero */

loc_000F8CD9: ;
    SET_LO8(edx, MEM8(eax + 0x20));
    edi = MEM32(eax);
    SET_LO8(edx, LO8(edx) | 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM8(eax + 0x20) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_000F8CF7; /* je: equal / zero */

loc_000F8CE8: ;
    edx = MEM32(edi);
    esi = eax;
    ecx = 9;
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
    eax = MEM32(eax);
    MEM32(eax) = edx;

loc_000F8CF7: ;
    edx = esp + 8;
    PUSH32(esp, 0x000F8D00u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_000F8D00: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x765530)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x765530) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8CD2; /* jne: not equal / not zero */

loc_000F8D0C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F8D0E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F8D15u); RECOMP_ABI_CALL(0x000F8B30u, sub_000F8B30); /* call 0x000F8B30 */

loc_000F8D15: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F8D20
 * Original: 0x000F8D20 - 0x000F8D47 (39 bytes, 12 insns)
 * Folder: ai (between: 0x000F8930 and 0x000F8EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8D20(void)
{

loc_000F8D20: ;
    PUSH32(esp, 0x000F8D25u); RECOMP_ABI_CALL(0x000348A0u, sub_000348A0); /* call 0x000348A0 */

loc_000F8D25: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8D50
 * Original: 0x000F8D50 - 0x000F8E05 (181 bytes, 78 insns)
 * Folder: ai (between: 0x000F8930 and 0x000F8EE0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8D50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, 1);
    MEM8(esp + 0xC) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000F8D8D; /* jne: not equal / not zero */

loc_000F8D6D: ;
    edx = MEM32(ebx);
    /* nop */

loc_000F8D70: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = eax;
    MEM8(esp + 0xC) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000F8D84; /* je: equal / zero */

loc_000F8D80: ;
    eax = MEM32(eax);
    goto loc_000F8D87;

loc_000F8D84: ;
    eax = MEM32(eax + 8);

loc_000F8D87: ;
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8D70; /* je: equal / zero */

loc_000F8D8D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F8DCB; /* je: equal / zero */

loc_000F8D97: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8DBE; /* jne: not equal / not zero */

loc_000F8D9E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8DACu); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_000F8DAC: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F8DBE: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x000F8DC7u); RECOMP_ABI_CALL(0x000CEA70u, sub_000CEA70); /* call 0x000CEA70 */

loc_000F8DC7: ;
    eax = MEM32(esp + 0x14);

loc_000F8DCB: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F8DF5; /* jae: above or equal (unsigned >=) */

loc_000F8DD2: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8DE3u); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_000F8DE3: ;
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F8DF5: ;
    POP32(esp, edi);
    MEM32(ebp) = eax;
    POP32(esp, esi);
    MEM8(ebp + 4) = 0;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8E10
 * Original: 0x000F8E10 - 0x000F8E58 (72 bytes, 32 insns)
 * Folder: ai (between: 0x000F8930 and 0x000F8EE0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8E10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000F8E52; /* jne: not equal / not zero */

loc_000F8E22: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000F8E2Du); RECOMP_ABI_CALL(0x000F8E10u, sub_000F8E10); /* call 0x000F8E10 */

loc_000F8E2D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F8E49; /* je: equal / zero */

loc_000F8E33: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8E41; /* jne: not equal / not zero */

loc_000F8E3C: ;
    PUSH32(esp, 0x000F8E41u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000F8E41: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F8E49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8E46u); } /* indirect call */
    }

loc_000F8E49: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000F8E22; /* je: equal / zero */

loc_000F8E52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8E3C
 * Original: 0x000F8E3C - 0x000F8E58 (28 bytes, 13 insns)
 * Folder: ai (between: 0x000F8930 and 0x000F8EE0)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8E3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8E3C: ;
    PUSH32(esp, 0x000F8E41u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000F8E41: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F8E49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8E46u); } /* indirect call */
    }

loc_000F8E49: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000F8E22(); return; } /* je: equal / zero */

loc_000F8E52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8E60
 * Original: 0x000F8E60 - 0x000F8EDA (122 bytes, 48 insns)
 * Folder: ai (between: 0x000F8930 and 0x000F8EE0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8E60: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_000F8EAB; /* jne: not equal / not zero */

loc_000F8E75: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8EAB; /* jne: not equal / not zero */

loc_000F8E79: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F8E84u); RECOMP_ABI_CALL(0x000F8E10u, sub_000F8E10); /* call 0x000F8E10 */

loc_000F8E84: ;
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

loc_000F8EAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8ED0; /* je: equal / zero */

loc_000F8EAF: ;
    PUSH32(esp, edi);

loc_000F8EB0: ;
    edx = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x000F8EBBu); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_000F8EBB: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F8EC7u); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_000F8EC7: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8EB0; /* jne: not equal / not zero */

loc_000F8ECF: ;
    POP32(esp, edi);

loc_000F8ED0: ;
    MEM32(ebp) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
