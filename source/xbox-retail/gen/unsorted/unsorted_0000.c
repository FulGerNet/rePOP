/**
 * PoP SoT xbox-retail - unsorted, chunk 0
 * Functions no evidence places
 * Functions: 250 (0x00011000 - 0x002F86C0)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00011000
 * Original: 0x00011000 - 0x0001100F (15 bytes, 5 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011000: ;
    eax = MEM32(0x46B18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001100E; /* jne: not equal / not zero */

loc_00011009: ;
    g_seh_ebp = ebp; sub_00093250(); return; /* tail jmp 0x00093250 */

loc_0001100E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011010
 * Original: 0x00011010 - 0x000110D8 (200 bytes, 52 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011010: ;
    _fb = (uint32_t)(0x344) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x344;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x340) = eax;
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x41ED0C);
    PUSH32(esp, 0x00011032u); RECOMP_ABI_CALL(0x00331384u, sub_00331384); /* call 0x00331384 */

loc_00011032: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000110BE; /* je: equal / zero */

loc_0001103D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x41ECF8);
    PUSH32(esp, 0x00011049u); RECOMP_ABI_CALL(0x003314E2u, sub_003314E2); /* call 0x003314E2 */

loc_00011049: ;
    /* nop */

loc_00011050: ;
    PUSH32(esp, 0x41ECE4);
    ecx = esp + 0x148;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00011062u); RECOMP_ABI_CALL(0x00331621u, sub_00331621); /* call 0x00331621 */

loc_00011062: ;
    PUSH32(esp, 0x41ECF8);
    edx = esp + 0x248;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00011074u); RECOMP_ABI_CALL(0x00331621u, sub_00331621); /* call 0x00331621 */

loc_00011074: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x148;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00011086u); RECOMP_ABI_CALL(0x003316C4u, sub_003316C4); /* call 0x003316C4 */

loc_00011086: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x248;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011098u); RECOMP_ABI_CALL(0x003316C4u, sub_003316C4); /* call 0x003316C4 */

loc_00011098: ;
    PUSH32(esp, 0);
    ecx = esp + 0x248;
    PUSH32(esp, ecx);
    edx = esp + 0x14C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000110AFu); RECOMP_ABI_CALL(0x00331BC9u, sub_00331BC9); /* call 0x00331BC9 */

loc_000110AF: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000110BAu); RECOMP_ABI_CALL(0x00331491u, sub_00331491); /* call 0x00331491 */

loc_000110BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011050; /* jne: not equal / not zero */

loc_000110BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000110C4u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_000110C4: ;
    ecx = MEM32(esp + 0x344);
    POP32(esp, esi);
    PUSH32(esp, 0x000110D1u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000110D1: ;
    _fb = (uint32_t)(0x344) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x344;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000110E0
 * Original: 0x000110E0 - 0x000113C1 (737 bytes, 181 insns)
 * Folder: unsorted (none)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000110E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    int _jf_0001118D = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000110E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC2C) = eax;
    MEM8(esp + 0x28) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x2FF;
    edi = esp + 0x29;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x758F08);
    PUSH32(esp, 0x758EF8);
    PUSH32(esp, 0x4481B0);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, 0x4482B8);
    PUSH32(esp, 0x4483C0);
    MEM8(0x758485) = 0;
    MEM32(0x758BBC) = 1;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    MEM32(esp + 0x24) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011147u); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_00011147: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001114Eu); RECOMP_ABI_CALL(0x00011B20u, sub_00011B20); /* call 0x00011B20 */

loc_0001114E: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011158u); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_00011158: ;
    esi = esp + 0x14;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011163u); RECOMP_ABI_CALL(0x00011B90u, sub_00011B90); /* call 0x00011B90 */

loc_00011163: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x408) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x408 (32-bit) */
    ebx = 8;
    if (CMP_A(_fa, _fb)) goto loc_00011183; /* ja: above (unsigned >) */

loc_00011173: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0001118F; /* je: equal / zero */

loc_00011175: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001118F; /* je: equal / zero */

loc_0001117C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x404) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x404 (32-bit) */
    _jf_0001118D = (CMP_NE(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_0001118D;

loc_00011183: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x410;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001118F; /* je: equal / zero */

loc_0001118A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _jf_0001118D = ((_fa != 0)) ? 1 : 0; /* flags of this edge */

loc_0001118D: ;
    if (_jf_0001118D /* jne: not equal / not zero */) goto loc_000111BB;

loc_0001118F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011194u); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_00011194: ;
    edx = eax + 0x10;
    MEM32(eax + 0xC) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    ecx = 0x300;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx) = eax;
    MEM32(0x758498) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000111B6u); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_000111B6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000111BBu); RECOMP_ABI_CALL(0x000121A0u, sub_000121A0); /* call 0x000121A0 */

loc_000111BB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000111C0u); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_000111C0: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000111C7u); RECOMP_ABI_CALL(0x00011E30u, sub_00011E30); /* call 0x00011E30 */

loc_000111C7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000111CCu); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_000111CC: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000111D3u); RECOMP_ABI_CALL(0x00011EE0u, sub_00011EE0); /* call 0x00011EE0 */

loc_000111D3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000111D8u); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_000111D8: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000111E8; /* je: equal / zero */

loc_000111DF: ;
    MEM32(eax + 0x10) = 0;
    goto loc_000111F5;

loc_000111E8: ;
    esi = MEM32(eax + 8);
    edi = eax + 0x10;
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

loc_000111F5: ;
    eax = MEM32(0x46B18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = 0x410290;
    MEM32(esp + 0x1C) = 4;
    MEM32(esp + 0x20) = 0x410340;
    MEM32(esp + 0x24) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0001121F; /* jne: not equal / not zero */

loc_0001121A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001121Fu); RECOMP_ABI_CALL(0x00093250u, sub_00093250); /* call 0x00093250 */

loc_0001121F: ;
    PUSH32(esp, 0x41ECD0);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001122Bu); RECOMP_ABI_CALL(0x00093790u, sub_00093790); /* call 0x00093790 */

loc_0001122B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011239; /* je: equal / zero */

loc_0001122F: ;
    MEM32(0x758460) = 1;

loc_00011239: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001123Eu); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_0001123E: ;
    edx = MEM32(eax);
    ebx = MEM32(edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    MEM32(esp + 0x1C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011252u); RECOMP_ABI_CALL(0x00411726u, sub_00411726); /* call 0x00411726 */

loc_00011252: ;
    edi = ebx;
    edi = edi & 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00011260;

loc_0001125C: ;
    ebx = MEM32(esp + 0x14);

loc_00011260: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011265u); RECOMP_ABI_CALL(0x000152F0u, sub_000152F0); /* call 0x000152F0 */

loc_00011265: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001126Au); RECOMP_ABI_CALL(0x002F9D60u, sub_002F9D60); /* call 0x002F9D60 */

loc_0001126A: ;
    MEM32(0x44A518) = eax;
    ecx = MEM32(eax + 0xAC);
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x4484C4) = eax;
    MEM32(0x758E34) = eax;
    MEM32(eax + 0xAC) = ecx;
    eax = MEM32(0x44A518);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011292u); RECOMP_ABI_CALL(0x002F9EC0u, sub_002F9EC0); /* call 0x002F9EC0 */

loc_00011292: ;
    esi = MEM32(0x44A518);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001129Du); RECOMP_ABI_CALL(0x002F9F70u, sub_002F9F70); /* call 0x002F9F70 */

loc_0001129D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000112AF; /* jne: not equal / not zero */

loc_000112A1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_000112AF; /* js: sign (negative) */

loc_000112A5: ;
    ebx = 0x440B20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112AFu); RECOMP_ABI_CALL(0x000CA680u, sub_000CA680); /* call 0x000CA680 */

loc_000112AF: ;
    ebx = 0x4483C0;
    MEM32(0x43B0E4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112C3u); RECOMP_ABI_CALL(0x000D8E70u, sub_000D8E70); /* call 0x000D8E70 */

loc_000112C3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112C8u); RECOMP_ABI_CALL(0x00011010u, sub_00011010); /* call 0x00011010 */

loc_000112C8: ;
    ebx = 1;
    MEM32(0x758490) = 0x1F990;
    MEM32(0x7584BC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112E2u); RECOMP_ABI_CALL(0x0001EE20u, sub_0001EE20); /* call 0x0001EE20 */

loc_000112E2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112E7u); RECOMP_ABI_CALL(0x000DF110u, sub_000DF110); /* call 0x000DF110 */

loc_000112E7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112ECu); RECOMP_ABI_CALL(0x000DB900u, sub_000DB900); /* call 0x000DB900 */

loc_000112EC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112F1u); RECOMP_ABI_CALL(0x000DBB50u, sub_000DBB50); /* call 0x000DBB50 */

loc_000112F1: ;
    MEM8(0x44AA44) = 0xFE;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000112FDu); RECOMP_ABI_CALL(0x000DCA10u, sub_000DCA10); /* call 0x000DCA10 */

loc_000112FD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011302u); RECOMP_ABI_CALL(0x000DA040u, sub_000DA040); /* call 0x000DA040 */

loc_00011302: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011307u); RECOMP_ABI_CALL(0x00014870u, sub_00014870); /* call 0x00014870 */

loc_00011307: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001130Eu); RECOMP_ABI_CALL(0x000148A0u, sub_000148A0); /* call 0x000148A0 */

loc_0001130E: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011315u); RECOMP_ABI_CALL(0x0037E294u, sub_0037E294); /* call 0x0037E294 */

loc_00011315: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001132A; /* jl: less (signed <) */

loc_00011319: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011320u); RECOMP_ABI_CALL(0x00014910u, sub_00014910); /* call 0x00014910 */

loc_00011320: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001132A; /* je: equal / zero */

loc_00011324: ;
    MEM32(esi + 0x298) = ebx;

loc_0001132A: ;
    esi = 0x7596E4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011334u); RECOMP_ABI_CALL(0x000CAAC0u, sub_000CAAC0); /* call 0x000CAAC0 */

loc_00011334: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011339u); RECOMP_ABI_CALL(0x000167C0u, sub_000167C0); /* call 0x000167C0 */

loc_00011339: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001133Eu); RECOMP_ABI_CALL(0x00031E90u, sub_00031E90); /* call 0x00031E90 */

loc_0001133E: ;
    ebx = MEM32(0x44AA24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001135C; /* je: equal / zero */

loc_00011348: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001134Fu); RECOMP_ABI_CALL(0x000E8130u, sub_000E8130); /* call 0x000E8130 */

loc_0001134F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x44AA24) = 0;

loc_0001135C: ;
    MEM32(0x44A514) = 0;
    MEM8(0x44AA44) = 0xFE;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011372u); RECOMP_ABI_CALL(0x00015460u, sub_00015460); /* call 0x00015460 */

loc_00011372: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011377u); RECOMP_ABI_CALL(0x0036B440u, sub_0036B440); /* call 0x0036B440 */

loc_00011377: ;
    eax = MEM32(0x75849C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001125C; /* jne: not equal / not zero */

loc_00011384: ;
    eax = MEM32(0x758498);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000113AC; /* je: equal / zero */

loc_0001138D: ;
    eax = MEM32(0x758C50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000113A2; /* je: equal / zero */

loc_00011396: ;
    PUSH32(esp, 0x470170);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000113A2u); RECOMP_ABI_CALL(0x00332093u, sub_00332093); /* call 0x00332093 */

loc_000113A2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000113A7u); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_000113A7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000113ACu); RECOMP_ABI_CALL(0x000121A0u, sub_000121A0); /* call 0x000121A0 */

loc_000113AC: ;
    ecx = MEM32(esp + 0xC2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000113BAu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000113BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000112BE
 * Original: 0x000112BE - 0x000113C1 (259 bytes, 62 insns)
 * Folder: unsorted (none)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000112BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000112BE: ;
    PUSH32(esp, 0x000112C3u); RECOMP_ABI_CALL(0x000D8E70u, sub_000D8E70); /* call 0x000D8E70 */

loc_000112C3: ;
    PUSH32(esp, 0x000112C8u); RECOMP_ABI_CALL(0x00011010u, sub_00011010); /* call 0x00011010 */

loc_000112C8: ;
    ebx = 1;
    MEM32(0x758490) = 0x1F990;
    MEM32(0x7584BC) = ebx;
    PUSH32(esp, 0x000112E2u); RECOMP_ABI_CALL(0x0001EE20u, sub_0001EE20); /* call 0x0001EE20 */

loc_000112E2: ;
    PUSH32(esp, 0x000112E7u); RECOMP_ABI_CALL(0x000DF110u, sub_000DF110); /* call 0x000DF110 */

loc_000112E7: ;
    PUSH32(esp, 0x000112ECu); RECOMP_ABI_CALL(0x000DB900u, sub_000DB900); /* call 0x000DB900 */

loc_000112EC: ;
    PUSH32(esp, 0x000112F1u); RECOMP_ABI_CALL(0x000DBB50u, sub_000DBB50); /* call 0x000DBB50 */

loc_000112F1: ;
    MEM8(0x44AA44) = 0xFE;
    PUSH32(esp, 0x000112FDu); RECOMP_ABI_CALL(0x000DCA10u, sub_000DCA10); /* call 0x000DCA10 */

loc_000112FD: ;
    PUSH32(esp, 0x00011302u); RECOMP_ABI_CALL(0x000DA040u, sub_000DA040); /* call 0x000DA040 */

loc_00011302: ;
    PUSH32(esp, 0x00011307u); RECOMP_ABI_CALL(0x00014870u, sub_00014870); /* call 0x00014870 */

loc_00011307: ;
    esi = eax;
    PUSH32(esp, 0x0001130Eu); RECOMP_ABI_CALL(0x000148A0u, sub_000148A0); /* call 0x000148A0 */

loc_0001130E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00011315u); RECOMP_ABI_CALL(0x0037E294u, sub_0037E294); /* call 0x0037E294 */

loc_00011315: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001132A; /* jl: less (signed <) */

loc_00011319: ;
    eax = esi;
    PUSH32(esp, 0x00011320u); RECOMP_ABI_CALL(0x00014910u, sub_00014910); /* call 0x00014910 */

loc_00011320: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001132A; /* je: equal / zero */

loc_00011324: ;
    MEM32(esi + 0x298) = ebx;

loc_0001132A: ;
    esi = 0x7596E4;
    PUSH32(esp, 0x00011334u); RECOMP_ABI_CALL(0x000CAAC0u, sub_000CAAC0); /* call 0x000CAAC0 */

loc_00011334: ;
    PUSH32(esp, 0x00011339u); RECOMP_ABI_CALL(0x000167C0u, sub_000167C0); /* call 0x000167C0 */

loc_00011339: ;
    PUSH32(esp, 0x0001133Eu); RECOMP_ABI_CALL(0x00031E90u, sub_00031E90); /* call 0x00031E90 */

loc_0001133E: ;
    ebx = MEM32(0x44AA24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001135C; /* je: equal / zero */

loc_00011348: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001134Fu); RECOMP_ABI_CALL(0x000E8130u, sub_000E8130); /* call 0x000E8130 */

loc_0001134F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x44AA24) = 0;

loc_0001135C: ;
    MEM32(0x44A514) = 0;
    MEM8(0x44AA44) = 0xFE;
    PUSH32(esp, 0x00011372u); RECOMP_ABI_CALL(0x00015460u, sub_00015460); /* call 0x00015460 */

loc_00011372: ;
    PUSH32(esp, 0x00011377u); RECOMP_ABI_CALL(0x0036B440u, sub_0036B440); /* call 0x0036B440 */

loc_00011377: ;
    eax = MEM32(0x75849C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001125C(); return; } /* jne: not equal / not zero */

loc_00011384: ;
    eax = MEM32(0x758498);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000113AC; /* je: equal / zero */

loc_0001138D: ;
    eax = MEM32(0x758C50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000113A2; /* je: equal / zero */

loc_00011396: ;
    PUSH32(esp, 0x470170);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000113A2u); RECOMP_ABI_CALL(0x00332093u, sub_00332093); /* call 0x00332093 */

loc_000113A2: ;
    PUSH32(esp, 0x000113A7u); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_000113A7: ;
    PUSH32(esp, 0x000113ACu); RECOMP_ABI_CALL(0x000121A0u, sub_000121A0); /* call 0x000121A0 */

loc_000113AC: ;
    ecx = MEM32(esp + 0xC2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000113BAu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000113BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00011339
 * Original: 0x00011339 - 0x000113C1 (136 bytes, 35 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011339(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011339: ;
    PUSH32(esp, 0x0001133Eu); RECOMP_ABI_CALL(0x00031E90u, sub_00031E90); /* call 0x00031E90 */

loc_0001133E: ;
    ebx = MEM32(0x44AA24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001135C; /* je: equal / zero */

loc_00011348: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001134Fu); RECOMP_ABI_CALL(0x000E8130u, sub_000E8130); /* call 0x000E8130 */

loc_0001134F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x44AA24) = 0;

loc_0001135C: ;
    MEM32(0x44A514) = 0;
    MEM8(0x44AA44) = 0xFE;
    PUSH32(esp, 0x00011372u); RECOMP_ABI_CALL(0x00015460u, sub_00015460); /* call 0x00015460 */

loc_00011372: ;
    PUSH32(esp, 0x00011377u); RECOMP_ABI_CALL(0x0036B440u, sub_0036B440); /* call 0x0036B440 */

loc_00011377: ;
    eax = MEM32(0x75849C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0001125C(); return; } /* jne: not equal / not zero */

loc_00011384: ;
    eax = MEM32(0x758498);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000113AC; /* je: equal / zero */

loc_0001138D: ;
    eax = MEM32(0x758C50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000113A2; /* je: equal / zero */

loc_00011396: ;
    PUSH32(esp, 0x470170);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000113A2u); RECOMP_ABI_CALL(0x00332093u, sub_00332093); /* call 0x00332093 */

loc_000113A2: ;
    PUSH32(esp, 0x000113A7u); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_000113A7: ;
    PUSH32(esp, 0x000113ACu); RECOMP_ABI_CALL(0x000121A0u, sub_000121A0); /* call 0x000121A0 */

loc_000113AC: ;
    ecx = MEM32(esp + 0xC2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000113BAu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000113BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000113D0
 * Original: 0x000113D0 - 0x00011409 (57 bytes, 19 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000113D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000113D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000113F2; /* je: equal / zero */

loc_000113D8: ;
    ecx = MEM32(esp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000113E5u); RECOMP_ABI_CALL(0x00011430u, sub_00011430); /* call 0x00011430 */

loc_000113E5: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000113EEu); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000113EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_000113F2: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00011410
 * Original: 0x00011410 - 0x00011429 (25 bytes, 9 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011410(void)
{

loc_00011410: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0001141Du); RECOMP_ABI_CALL(0x000114F0u, sub_000114F0); /* call 0x000114F0 */

loc_0001141D: ;
    MEM32(esi) = 0x41F374;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011430
 * Original: 0x00011430 - 0x00011469 (57 bytes, 22 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011430: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011467; /* je: equal / zero */

loc_00011437: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00011440: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011452; /* jb: below (unsigned <) */

loc_00011446: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001144Fu); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0001144F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011452: ;
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 4) = LO8(ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011440; /* jne: not equal / not zero */

loc_00011466: ;
    POP32(esp, ebx);

loc_00011467: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011470
 * Original: 0x00011470 - 0x00011492 (34 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011470: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00011482; /* jb: below (unsigned <) */

loc_00011476: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001147Fu); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0001147F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011482: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 4) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000114A0
 * Original: 0x000114A0 - 0x000114AE (14 bytes, 6 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000114A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000114A0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000114AA; /* jb: below (unsigned <) */

loc_000114A6: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

loc_000114AA: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0002D0C0
 * Original: 0x0002D0C0 - 0x0002D1F4 (308 bytes, 114 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D0C0: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D0E9; /* je: equal / zero */

loc_0002D0CB: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D0D9; /* jne: not equal / not zero */

loc_0002D0D4: ;
    PUSH32(esp, 0x0002D0D9u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002D0D9: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D0E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D0E6u); } /* indirect call */
    }

loc_0002D0E9: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D10F; /* je: equal / zero */

loc_0002D0F3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D101; /* jne: not equal / not zero */

loc_0002D0FC: ;
    PUSH32(esp, 0x0002D101u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002D101: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D10Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D10Cu); } /* indirect call */
    }

loc_0002D10F: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D138; /* je: equal / zero */

loc_0002D11A: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D128; /* jne: not equal / not zero */

loc_0002D123: ;
    PUSH32(esp, 0x0002D128u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002D128: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D138u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D135u); } /* indirect call */
    }

loc_0002D138: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D15E; /* je: equal / zero */

loc_0002D142: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D150; /* jne: not equal / not zero */

loc_0002D14B: ;
    PUSH32(esp, 0x0002D150u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002D150: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D15Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D15Bu); } /* indirect call */
    }

loc_0002D15E: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D187; /* je: equal / zero */

loc_0002D169: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D177; /* jne: not equal / not zero */

loc_0002D172: ;
    PUSH32(esp, 0x0002D177u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002D177: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D187u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D184u); } /* indirect call */
    }

loc_0002D187: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D1AD; /* je: equal / zero */

loc_0002D191: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D19F; /* jne: not equal / not zero */

loc_0002D19A: ;
    PUSH32(esp, 0x0002D19Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002D19F: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D1ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D1AAu); } /* indirect call */
    }

loc_0002D1AD: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D1D3; /* je: equal / zero */

loc_0002D1B7: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D1C5; /* jne: not equal / not zero */

loc_0002D1C0: ;
    PUSH32(esp, 0x0002D1C5u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002D1C5: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D1D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D1D0u); } /* indirect call */
    }

loc_0002D1D3: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D1F3; /* je: equal / zero */

loc_0002D1DA: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D1E8; /* jne: not equal / not zero */

loc_0002D1E3: ;
    PUSH32(esp, 0x0002D1E8u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002D1E8: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D1F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D1F0u); } /* indirect call */
    }

loc_0002D1F3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002D200
 * Original: 0x0002D200 - 0x0002D238 (56 bytes, 22 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0002D200: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0002D234; /* jge: greater or equal (signed >=) */

loc_0002D206: ;
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D234; /* je: equal / zero */

loc_0002D20E: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D234; /* je: equal / zero */

loc_0002D217: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D234; /* je: equal / zero */

loc_0002D220: ;
    PUSH32(esp, 0x0002D225u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002D225: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002D234; /* je: equal / zero */

loc_0002D22D: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002D234: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D240
 * Original: 0x0002D240 - 0x0002D271 (49 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D240: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D24E; /* jne: not equal / not zero */

loc_0002D249: ;
    PUSH32(esp, 0x0002D24Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002D24E: ;
    edx = 0x5C;
    ecx = eax;
    PUSH32(esp, 0x0002D25Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0002D25A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D269; /* je: equal / zero */

loc_0002D25E: ;
    PUSH32(esp, 0x0002D263u); RECOMP_ABI_CALL(0x0002D280u, sub_0002D280); /* call 0x0002D280 */

loc_0002D263: ;
    MEM32(0x75852C) = eax;
    esp += 4; return; /* ret */

loc_0002D269: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x75852C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0002D280
 * Original: 0x0002D280 - 0x0002D2D1 (81 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D280: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    edx = 7;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x38) = esi;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x2C) = esi;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D2E0
 * Original: 0x0002D2E0 - 0x0002D52B (587 bytes, 200 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D2E0: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D2FB; /* je: equal / zero */

loc_0002D2F0: ;
    MEM32(edi + 0x3C) = ebp;
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002D2FB: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0002D344; /* jge: greater or equal (signed >=) */

loc_0002D302: ;
    esi = MEM32(edi + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D344; /* je: equal / zero */

loc_0002D30A: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D344; /* je: equal / zero */

loc_0002D313: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D344; /* je: equal / zero */

loc_0002D31C: ;
    PUSH32(esp, 0x0002D321u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002D321: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002D344; /* je: equal / zero */

loc_0002D329: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D338; /* je: equal / zero */

loc_0002D32E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D338; /* je: equal / zero */

loc_0002D333: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D344; /* jne: not equal / not zero */

loc_0002D338: ;
    MEM32(edi + 0x3C) = ebp;

loc_0002D33B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002D344: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = edi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D377; /* je: equal / zero */

loc_0002D34E: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D361; /* jne: not equal / not zero */

loc_0002D358: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D35Eu); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002D35E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002D361: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70130 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D377; /* jne: not equal / not zero */

loc_0002D368: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D33B; /* je: equal / zero */

loc_0002D36D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D33B; /* je: equal / zero */

loc_0002D372: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D33B; /* je: equal / zero */

loc_0002D377: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D393; /* jne: not equal / not zero */

loc_0002D37B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D387; /* je: equal / zero */

loc_0002D382: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D393; /* jne: not equal / not zero */

loc_0002D387: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 0x0002D38Fu); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0002D38F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D33B; /* jne: not equal / not zero */

loc_0002D393: ;
    eax = MEM32(edi + ebp * 4 + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D523; /* je: equal / zero */

loc_0002D39F: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D3B3; /* jne: not equal / not zero */

loc_0002D3A4: ;
    eax = esi;
    PUSH32(esp, 0x0002D3ABu); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002D3AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D523; /* jne: not equal / not zero */

loc_0002D3B3: ;
    eax = edi;
    PUSH32(esp, 0x0002D3BAu); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002D3BA: ;
    eax = edi + 0x30;
    PUSH32(esp, 0x0002D3C2u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002D3C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D4FD; /* jne: not equal / not zero */

loc_0002D3CA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D3E2; /* jne: not equal / not zero */

loc_0002D3CE: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D3E2; /* jne: not equal / not zero */

loc_0002D3D3: ;
    eax = esi;
    PUSH32(esp, 0x0002D3DAu); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002D3DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D4FD; /* jne: not equal / not zero */

loc_0002D3E2: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D487; /* je: equal / zero */

loc_0002D3EB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D487; /* je: equal / zero */

loc_0002D3F4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D487; /* je: equal / zero */

loc_0002D3FD: ;
    eax = esi;
    PUSH32(esp, 0x0002D404u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002D404: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D4FD; /* jne: not equal / not zero */

loc_0002D40C: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + ebp * 4 + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D4BB; /* je: equal / zero */

loc_0002D41E: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D4BB; /* je: equal / zero */

loc_0002D42B: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D4BB; /* je: equal / zero */

loc_0002D439: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D448; /* je: equal / zero */

loc_0002D443: ;
    PUSH32(esp, 0x0002D448u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002D448: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D4BB; /* je: equal / zero */

loc_0002D44C: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002D463u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002D463: ;
    ebx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D523; /* je: equal / zero */

loc_0002D471: ;
    ecx = MEM32(edi + ebp * 4 + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002D47Fu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002D47F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002D487: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + ebp * 4 + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D4BB; /* je: equal / zero */

loc_0002D495: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D4BB; /* je: equal / zero */

loc_0002D49E: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D4BB; /* je: equal / zero */

loc_0002D4A8: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D4B7; /* je: equal / zero */

loc_0002D4B2: ;
    PUSH32(esp, 0x0002D4B7u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002D4B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D4C6; /* jne: not equal / not zero */

loc_0002D4BB: ;
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002D4C6: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002D4DDu); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002D4DD: ;
    ebx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D523; /* je: equal / zero */

loc_0002D4E7: ;
    edx = MEM32(edi + ebp * 4 + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002D4F5u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002D4F5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002D4FD: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002D50Au); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002D50A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 1;
    eax = MEM32(edi + ebp * 4 + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002D523u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002D523: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002D530
 * Original: 0x0002D530 - 0x0002D75B (555 bytes, 189 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D530: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002D62B; /* jne: not equal / not zero */

loc_0002D54D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002D587; /* jge: greater or equal (signed >=) */

loc_0002D553: ;
    esi = MEM32(ebp + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D587; /* je: equal / zero */

loc_0002D55B: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D587; /* je: equal / zero */

loc_0002D564: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D587; /* je: equal / zero */

loc_0002D56D: ;
    PUSH32(esp, 0x0002D572u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002D572: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002D587; /* je: equal / zero */

loc_0002D57A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002D587: ;
    eax = ebp;
    PUSH32(esp, 0x0002D58Eu); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002D58E: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 0x30) = 6;
    MEM32(ebp + 0x34) = edi;
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5E6; /* je: equal / zero */

loc_0002D5A4: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5E6; /* je: equal / zero */

loc_0002D5AD: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5E6; /* je: equal / zero */

loc_0002D5B7: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5C6; /* je: equal / zero */

loc_0002D5C1: ;
    PUSH32(esp, 0x0002D5C6u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002D5C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5E6; /* je: equal / zero */

loc_0002D5CA: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002D5E1u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002D5E1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002D5E9;

loc_0002D5E6: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002D5E9: ;
    MEM32(ebp + 0x38) = eax;
    eax = MEM32(0x758478);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5FE; /* je: equal / zero */

loc_0002D5F5: ;
    eax = edi;
    PUSH32(esp, 0x0002D5FCu); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002D5FC: ;
    edi = eax;

loc_0002D5FE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D61E; /* je: equal / zero */

loc_0002D602: ;
    ebx = 1;
    esi = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x0002D614u); RECOMP_ABI_CALL(0x000A1600u, sub_000A1600); /* call 0x000A1600 */

loc_0002D614: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D61E; /* jne: not equal / not zero */

loc_0002D61B: ;
    MEM32(ebp + 8) = ebx;

loc_0002D61E: ;
    eax = MEM32(ebp + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002D62B: ;
    eax = MEM32(0x758478);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D638; /* je: equal / zero */

loc_0002D634: ;
    eax = edi;
    goto loc_0002D641;

loc_0002D638: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002D63Eu); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002D63E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002D641: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D747; /* jne: not equal / not zero */

loc_0002D64C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D747; /* jne: not equal / not zero */

loc_0002D654: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebp + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D67C; /* je: equal / zero */

loc_0002D65F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D668; /* jne: not equal / not zero */

loc_0002D663: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x40) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D67C; /* jne: not equal / not zero */

loc_0002D668: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70130 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D747; /* jne: not equal / not zero */

loc_0002D673: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D747; /* je: equal / zero */

loc_0002D67C: ;
    eax = ebp;
    PUSH32(esp, 0x0002D683u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002D683: ;
    eax = MEM32(0x7584F4);
    eax = MEM32(eax + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6CE; /* je: equal / zero */

loc_0002D690: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6CE; /* je: equal / zero */

loc_0002D695: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6CE; /* je: equal / zero */

loc_0002D69A: ;
    eax = esi;
    PUSH32(esp, 0x0002D6A1u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002D6A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6D2; /* je: equal / zero */

loc_0002D6A5: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6B7; /* je: equal / zero */

loc_0002D6AB: ;
    eax = ebp + 0x30;
    PUSH32(esp, 0x0002D6B3u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002D6B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6D2; /* je: equal / zero */

loc_0002D6B7: ;
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002D6C4u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002D6C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 4) = 1;

loc_0002D6CE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    goto loc_0002D73D;

loc_0002D6D2: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D704; /* je: equal / zero */

loc_0002D6DE: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D704; /* je: equal / zero */

loc_0002D6E7: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D704; /* je: equal / zero */

loc_0002D6F1: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D700; /* je: equal / zero */

loc_0002D6FB: ;
    PUSH32(esp, 0x0002D700u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002D700: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002D71B; /* jne: not equal / not zero */

loc_0002D704: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebp + ecx * 4 + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002D71B: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002D732u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002D732: ;
    ebx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D747; /* je: equal / zero */

loc_0002D73C: ;
    PUSH32(esp, ebx);

loc_0002D73D: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002D747u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002D747: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebp + ecx * 4 + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002D576
 * Original: 0x0002D576 - 0x0002D75B (485 bytes, 165 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D576(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D576: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002D587; /* je: equal / zero */

loc_0002D57A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002D587: ;
    eax = ebp;
    PUSH32(esp, 0x0002D58Eu); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002D58E: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(ebp + 0x30) = 6;
    MEM32(ebp + 0x34) = edi;
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5E6; /* je: equal / zero */

loc_0002D5A4: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5E6; /* je: equal / zero */

loc_0002D5AD: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5E6; /* je: equal / zero */

loc_0002D5B7: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5C6; /* je: equal / zero */

loc_0002D5C1: ;
    PUSH32(esp, 0x0002D5C6u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002D5C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5E6; /* je: equal / zero */

loc_0002D5CA: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002D5E1u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002D5E1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002D5E9;

loc_0002D5E6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002D5E9: ;
    MEM32(ebp + 0x38) = eax;
    eax = MEM32(0x758478);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5FE; /* je: equal / zero */

loc_0002D5F5: ;
    eax = edi;
    PUSH32(esp, 0x0002D5FCu); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002D5FC: ;
    edi = eax;

loc_0002D5FE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D61E; /* je: equal / zero */

loc_0002D602: ;
    ebx = 1;
    esi = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x0002D614u); RECOMP_ABI_CALL(0x000A1600u, sub_000A1600); /* call 0x000A1600 */

loc_0002D614: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D61E; /* jne: not equal / not zero */

loc_0002D61B: ;
    MEM32(ebp + 8) = ebx;

loc_0002D61E: ;
    eax = MEM32(ebp + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    eax = edi;
    goto loc_0002D641;

loc_0002D638: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002D63Eu); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002D63E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002D641: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D747; /* jne: not equal / not zero */

loc_0002D64C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D747; /* jne: not equal / not zero */

loc_0002D654: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    esi = ebp + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D67C; /* je: equal / zero */

loc_0002D65F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D668; /* jne: not equal / not zero */

loc_0002D663: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x40) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D67C; /* jne: not equal / not zero */

loc_0002D668: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70130 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D747; /* jne: not equal / not zero */

loc_0002D673: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D747; /* je: equal / zero */

loc_0002D67C: ;
    eax = ebp;
    PUSH32(esp, 0x0002D683u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002D683: ;
    eax = MEM32(0x7584F4);
    eax = MEM32(eax + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6CE; /* je: equal / zero */

loc_0002D690: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6CE; /* je: equal / zero */

loc_0002D695: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6CE; /* je: equal / zero */

loc_0002D69A: ;
    eax = esi;
    PUSH32(esp, 0x0002D6A1u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002D6A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6D2; /* je: equal / zero */

loc_0002D6A5: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6B7; /* je: equal / zero */

loc_0002D6AB: ;
    eax = ebp + 0x30;
    PUSH32(esp, 0x0002D6B3u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002D6B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6D2; /* je: equal / zero */

loc_0002D6B7: ;
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002D6C4u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002D6C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 4) = 1;

loc_0002D6CE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    goto loc_0002D73D;

loc_0002D6D2: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D704; /* je: equal / zero */

loc_0002D6DE: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D704; /* je: equal / zero */

loc_0002D6E7: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D704; /* je: equal / zero */

loc_0002D6F1: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D700; /* je: equal / zero */

loc_0002D6FB: ;
    PUSH32(esp, 0x0002D700u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002D700: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D71B; /* jne: not equal / not zero */

loc_0002D704: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebp + ecx * 4 + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002D71B: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002D732u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002D732: ;
    ebx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D747; /* je: equal / zero */

loc_0002D73C: ;
    PUSH32(esp, ebx);

loc_0002D73D: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002D747u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002D747: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebp + ecx * 4 + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002D6BF
 * Original: 0x0002D6BF - 0x0002D75B (156 bytes, 56 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D6BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D6BF: ;
    PUSH32(esp, 0x0002D6C4u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002D6C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 4) = 1;
    PUSH32(esp, 0xFFFFFFFFu);
    goto loc_0002D73D;

    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D704; /* je: equal / zero */

loc_0002D6DE: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D704; /* je: equal / zero */

loc_0002D6E7: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D704; /* je: equal / zero */

loc_0002D6F1: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D700; /* je: equal / zero */

loc_0002D6FB: ;
    PUSH32(esp, 0x0002D700u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002D700: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D71B; /* jne: not equal / not zero */

loc_0002D704: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebp + ecx * 4 + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0002D71B: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002D732u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002D732: ;
    ebx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D747; /* je: equal / zero */

loc_0002D73C: ;
    PUSH32(esp, ebx);

loc_0002D73D: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002D747u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002D747: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebp + ecx * 4 + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002D71B
 * Original: 0x0002D71B - 0x0002D75B (64 bytes, 26 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D71B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D71B: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002D732u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002D732: ;
    ebx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D747; /* je: equal / zero */

loc_0002D73C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002D747u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002D747: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebp + ecx * 4 + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002D75E
 * Original: 0x0002D75E - 0x0002D760 (2 bytes, 2 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D75E(void)
{

loc_0002D75E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0002D760
 * Original: 0x0002D760 - 0x0002D80A (170 bytes, 60 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D760: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = edi;
    PUSH32(esp, 0x0002D76Bu); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002D76B: ;
    eax = edi + 0x18;
    edx = eax;
    ebx = MEM32(edx);
    ecx = edi + 0x24;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = edx;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(eax) = 7;
    MEM32(edi + 0x1C) = 0;
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D801; /* je: equal / zero */

loc_0002D79C: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D801; /* je: equal / zero */

loc_0002D7A5: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D801; /* je: equal / zero */

loc_0002D7AF: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D7DD; /* je: equal / zero */

loc_0002D7B9: ;
    eax = MEM32(0x758694);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D801; /* je: equal / zero */

loc_0002D7C2: ;
    eax = MEM32(0x4313D4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0002D7D6; /* je: equal / zero */

loc_0002D7CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002D801; /* jne: not equal / not zero */

loc_0002D7CF: ;
    PUSH32(esp, 0x0002D7D4u); RECOMP_ABI_CALL(0x000A5AB0u, sub_000A5AB0); /* call 0x000A5AB0 */

loc_0002D7D4: ;
    goto loc_0002D7DD;

loc_0002D7D6: ;
    ebx = esi;
    PUSH32(esp, 0x0002D7DDu); RECOMP_ABI_CALL(0x0009C970u, sub_0009C970); /* call 0x0009C970 */

loc_0002D7DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D801; /* je: equal / zero */

loc_0002D7E1: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002D7F8u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002D7F8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi + 0x20) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002D801: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edi + 0x20) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D810
 * Original: 0x0002D810 - 0x0002D861 (81 bytes, 31 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D810(void)
{

loc_0002D810: ;
    PUSH32(esp, esi);
    ecx = eax + 0x18;
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi);
    edx = eax + 0x24;
    MEM32(edx) = edi;
    edi = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = esi;
    edx = eax + 0xC;
    esi = edx;
    edi = MEM32(esi);
    MEM32(ecx) = edi;
    edi = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(ecx + 4) = edi;
    MEM32(ecx + 8) = esi;
    ecx = MEM32(edx);
    ecx = MEM32(eax + ecx * 4 + 0x40);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002D870
 * Original: 0x0002D870 - 0x0002D8D0 (96 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0002D870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x20)) >> 32) & 1);
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 2;
    /* nop */

loc_0002D880: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D8C6; /* je: equal / zero */

loc_0002D887: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D8C6; /* je: equal / zero */

loc_0002D890: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D8C6; /* je: equal / zero */

loc_0002D899: ;
    PUSH32(esp, 0x0002D89Eu); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002D89E: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002D8C6; /* je: equal / zero */

loc_0002D8A6: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D8C6; /* je: equal / zero */

loc_0002D8AF: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D8C6; /* je: equal / zero */

loc_0002D8B8: ;
    esi = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002D8C3u); RECOMP_ABI_CALL(0x000A1430u, sub_000A1430); /* call 0x000A1430 */

loc_0002D8C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002D8C6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002D880; /* jne: not equal / not zero */

loc_0002D8CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D8D0
 * Original: 0x0002D8D0 - 0x0002D954 (132 bytes, 47 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D8D0: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D953; /* je: equal / zero */

loc_0002D8D8: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + eax * 4 + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + eax * 4 + 0x40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D953; /* je: equal / zero */

loc_0002D8E1: ;
    eax = edi;
    PUSH32(esp, 0x0002D8E8u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002D8E8: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = MEM32(edi + 0xC);
    eax = MEM32(edi + edx * 4 + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D953; /* je: equal / zero */

loc_0002D8F9: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D953; /* je: equal / zero */

loc_0002D902: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D953; /* je: equal / zero */

loc_0002D90C: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D91B; /* je: equal / zero */

loc_0002D916: ;
    PUSH32(esp, 0x0002D91Bu); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002D91B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D953; /* je: equal / zero */

loc_0002D91F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x430E6C);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002D938u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002D938: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D953; /* je: equal / zero */

loc_0002D942: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(edi + ecx * 4 + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0x0002D953u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002D953: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002D960
 * Original: 0x0002D960 - 0x0002DA01 (161 bytes, 50 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0002D960: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0002D9C8; /* jne: not equal / not zero */

loc_0002D966: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002D9FF; /* jge: greater or equal (signed >=) */

loc_0002D970: ;
    esi = MEM32(edi + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D9FF; /* je: equal / zero */

loc_0002D97C: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D9FF; /* je: equal / zero */

loc_0002D985: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D9FF; /* je: equal / zero */

loc_0002D98E: ;
    PUSH32(esp, 0x0002D993u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002D993: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002D9FF; /* je: equal / zero */

loc_0002D99B: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D9BF; /* je: equal / zero */

loc_0002D9A4: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D9BF; /* je: equal / zero */

loc_0002D9AD: ;
    esi = MEM32(edi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002D9BCu); RECOMP_ABI_CALL(0x000A1430u, sub_000A1430); /* call 0x000A1430 */

loc_0002D9BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002D9BF: ;
    MEM32(edi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002D9C8: ;
    edx = MEM32(edi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edi + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_0002D9FF; /* jne: not equal / not zero */

loc_0002D9D2: ;
    PUSH32(esp, 0x0002D9D7u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002D9D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D9FF; /* je: equal / zero */

loc_0002D9DB: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D9FF; /* je: equal / zero */

loc_0002D9E4: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D9FF; /* je: equal / zero */

loc_0002D9ED: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002D9FCu); RECOMP_ABI_CALL(0x000A1430u, sub_000A1430); /* call 0x000A1430 */

loc_0002D9FC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002D9FF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DA10
 * Original: 0x0002DA10 - 0x0002E20A (2042 bytes, 609 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DA10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x34);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEEE; /* je: equal / zero */

loc_0002DA24: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = edi + 0x30;
    if (CMP_GE(_fas, _fbs)) goto loc_0002DA5C; /* jge: greater or equal (signed >=) */

loc_0002DA2F: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DA5C; /* je: equal / zero */

loc_0002DA37: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DA5C; /* je: equal / zero */

loc_0002DA40: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DA5C; /* je: equal / zero */

loc_0002DA49: ;
    PUSH32(esp, 0x0002DA4Eu); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002DA4E: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DEEE; /* jne: not equal / not zero */

loc_0002DA5C: ;
    MEM32(ebp) = 7;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = 0xFFFFFFFFu;
    eax = MEM32(edi + 0x3C);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 8) = ebx;
    if ((_fa == 0)) goto loc_0002DEE0; /* je: equal / zero */

loc_0002DA7C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002DDC2; /* je: equal / zero */

loc_0002DA83: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002DC8C; /* je: equal / zero */

loc_0002DA8A: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = edi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DA9D; /* je: equal / zero */

loc_0002DA94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DEE7; /* jne: not equal / not zero */

loc_0002DA9D: ;
    eax = ebx;
    PUSH32(esp, 0x0002DAA4u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DAA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEE7; /* jne: not equal / not zero */

loc_0002DAAC: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DABF; /* je: equal / zero */

loc_0002DAB3: ;
    MEM32(edi + 0x3C) = 0;
    goto loc_0002DEE7;

loc_0002DABF: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002DAE4; /* jge: greater or equal (signed >=) */

loc_0002DAC5: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DAE4; /* je: equal / zero */

loc_0002DACD: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DAE4; /* je: equal / zero */

loc_0002DAD6: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DAE4; /* je: equal / zero */

loc_0002DADF: ;
    PUSH32(esp, 0x0002DAE4u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002DAE4: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DAFE; /* je: equal / zero */

loc_0002DAEB: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DAFE; /* jne: not equal / not zero */

loc_0002DAF5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DAFBu); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002DAFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DAFE: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DB0A; /* je: equal / zero */

loc_0002DB05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DB1A; /* jne: not equal / not zero */

loc_0002DB0A: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 0x0002DB12u); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0002DB12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEE7; /* jne: not equal / not zero */

loc_0002DB1A: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DB25: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DB39; /* jne: not equal / not zero */

loc_0002DB2A: ;
    eax = ebx;
    PUSH32(esp, 0x0002DB31u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DB31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEE7; /* jne: not equal / not zero */

loc_0002DB39: ;
    eax = edi;
    PUSH32(esp, 0x0002DB40u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002DB40: ;
    eax = ebp;
    PUSH32(esp, 0x0002DB47u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DB47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DB6F; /* jne: not equal / not zero */

loc_0002DB4B: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DB5B; /* jne: not equal / not zero */

loc_0002DB50: ;
    eax = ebx;
    PUSH32(esp, 0x0002DB57u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DB57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DB6F; /* jne: not equal / not zero */

loc_0002DB5B: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DC13; /* je: equal / zero */

loc_0002DB64: ;
    eax = ebx;
    PUSH32(esp, 0x0002DB6Bu); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DB6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DB9A; /* je: equal / zero */

loc_0002DB6F: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002DB7Cu); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002DB7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 1;
    eax = MEM32(edi + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0x0002DB95u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DB95: ;
    goto loc_0002DEE7;

loc_0002DB9A: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DBAB: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DBB8: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DBC6: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DBD5; /* je: equal / zero */

loc_0002DBD0: ;
    PUSH32(esp, 0x0002DBD5u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002DBD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DBDD: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002DBF4u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002DBF4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC00: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0x0002DC0Eu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DC0E: ;
    goto loc_0002DEE7;

loc_0002DC13: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC24: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC31: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC3F: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DC4E; /* je: equal / zero */

loc_0002DC49: ;
    PUSH32(esp, 0x0002DC4Eu); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002DC4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC56: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002DC6Du); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002DC6D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC79: ;
    edx = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0x0002DC87u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DC87: ;
    goto loc_0002DEE7;

loc_0002DC8C: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002DCC7; /* jge: greater or equal (signed >=) */

loc_0002DC92: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCC7; /* je: equal / zero */

loc_0002DC9A: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCC7; /* je: equal / zero */

loc_0002DCA3: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCC7; /* je: equal / zero */

loc_0002DCAC: ;
    PUSH32(esp, 0x0002DCB1u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002DCB1: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCC7; /* je: equal / zero */

loc_0002DCBB: ;
    MEM32(edi + 0x3C) = 5;
    goto loc_0002DEE7;

loc_0002DCC7: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCED; /* je: equal / zero */

loc_0002DCD1: ;
    _fa = (uint32_t)(MEM32(0x758478)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758478), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DCE2; /* jne: not equal / not zero */

loc_0002DCD9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DCDFu); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002DCDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DCE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70130 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DCED: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DCF8: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DD0C; /* jne: not equal / not zero */

loc_0002DCFD: ;
    eax = esi;
    PUSH32(esp, 0x0002DD04u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DD04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEE7; /* jne: not equal / not zero */

loc_0002DD0C: ;
    eax = edi;
    PUSH32(esp, 0x0002DD13u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002DD13: ;
    eax = ebp;
    PUSH32(esp, 0x0002DD1Au); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DD1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DD97; /* jne: not equal / not zero */

loc_0002DD1E: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x54);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD2F: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD3C: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD4A: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD59; /* je: equal / zero */

loc_0002DD54: ;
    PUSH32(esp, 0x0002DD59u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002DD59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD61: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002DD78u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002DD78: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD84: ;
    ecx = MEM32(edi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    eax = edi;
    PUSH32(esp, 0x0002DD92u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DD92: ;
    goto loc_0002DEE7;

loc_0002DD97: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002DDA4u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002DDA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 1;
    edx = MEM32(edi + 0x54);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    eax = edi;
    PUSH32(esp, 0x0002DDBDu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DDBD: ;
    goto loc_0002DEE7;

loc_0002DDC2: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002DDFD; /* jge: greater or equal (signed >=) */

loc_0002DDC8: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDD0: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDD9: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDE2: ;
    PUSH32(esp, 0x0002DDE7u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002DDE7: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDF1: ;
    MEM32(edi + 0x3C) = 4;
    goto loc_0002DEE7;

loc_0002DDFD: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE23; /* je: equal / zero */

loc_0002DE07: ;
    _fa = (uint32_t)(MEM32(0x758478)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758478), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DE18; /* jne: not equal / not zero */

loc_0002DE0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DE15u); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002DE15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DE18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70130 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE23: ;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE2E: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DE42; /* jne: not equal / not zero */

loc_0002DE33: ;
    eax = esi;
    PUSH32(esp, 0x0002DE3Au); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DE3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEE7; /* jne: not equal / not zero */

loc_0002DE42: ;
    eax = edi;
    PUSH32(esp, 0x0002DE49u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002DE49: ;
    eax = ebp;
    PUSH32(esp, 0x0002DE50u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DE50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEB8; /* jne: not equal / not zero */

loc_0002DE54: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x50);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE65: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE6E: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE78: ;
    _fa = (uint32_t)(MEM32(0x758478)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758478), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE85; /* je: equal / zero */

loc_0002DE80: ;
    PUSH32(esp, 0x0002DE85u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002DE85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE89: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002DEA0u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002DEA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DEA8: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = edi;
    PUSH32(esp, 0x0002DEB6u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DEB6: ;
    goto loc_0002DEE7;

loc_0002DEB8: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002DEC5u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002DEC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 1;
    ecx = MEM32(edi + 0x50);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    eax = edi;
    PUSH32(esp, 0x0002DEDEu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DEDE: ;
    goto loc_0002DEE7;

loc_0002DEE0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0002DEE7u); RECOMP_ABI_CALL(0x0002D2E0u, sub_0002D2E0); /* call 0x0002D2E0 */

loc_0002DEE7: ;
    MEM32(edi + 0x3C) = 7;

loc_0002DEEE: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E204; /* jne: not equal / not zero */

loc_0002DEF9: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = edi + 0xC;
    if (CMP_L(_fas, _fbs)) goto loc_0002E11C; /* jl: less (signed <) */

loc_0002DF08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0002DF45; /* jle: less or equal (signed <=) */

loc_0002DF0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DF16: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002DF22: ;
    PUSH32(esp, 0x0002DF27u); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0002DF27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DF2F: ;
    MEM32(ebp) = 7;
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = 0xFFFFFFFFu;
    goto loc_0002E11C;

loc_0002DF45: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002DF51: ;
    PUSH32(esp, 0x0002DF56u); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0002DF56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DF5E: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF71; /* je: equal / zero */

loc_0002DF65: ;
    MEM32(edi + 0x3C) = 0;
    goto loc_0002E11C;

loc_0002DF71: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = edi + 0x30;
    if (CMP_GE(_fas, _fbs)) goto loc_0002DF9B; /* jge: greater or equal (signed >=) */

loc_0002DF7C: ;
    esi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF9B; /* je: equal / zero */

loc_0002DF84: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF9B; /* je: equal / zero */

loc_0002DF8D: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF9B; /* je: equal / zero */

loc_0002DF96: ;
    PUSH32(esp, 0x0002DF9Bu); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002DF9B: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DFB5; /* je: equal / zero */

loc_0002DFA2: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DFB5; /* jne: not equal / not zero */

loc_0002DFAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DFB2u); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002DFB2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DFB5: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DFC2; /* je: equal / zero */

loc_0002DFBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DFD2; /* jne: not equal / not zero */

loc_0002DFC2: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 0x0002DFCAu); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0002DFCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DFD2: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002DFDD: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DFF1; /* jne: not equal / not zero */

loc_0002DFE2: ;
    eax = ebp;
    PUSH32(esp, 0x0002DFE9u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DFE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DFF1: ;
    eax = edi;
    PUSH32(esp, 0x0002DFF8u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002DFF8: ;
    eax = ebx;
    PUSH32(esp, 0x0002DFFFu); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DFFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E0F6; /* jne: not equal / not zero */

loc_0002E007: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002E01C; /* jne: not equal / not zero */

loc_0002E00D: ;
    eax = ebp;
    PUSH32(esp, 0x0002E014u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002E014: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E0F6; /* jne: not equal / not zero */

loc_0002E01C: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E09D; /* je: equal / zero */

loc_0002E021: ;
    eax = ebp;
    PUSH32(esp, 0x0002E028u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002E028: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E0F6; /* jne: not equal / not zero */

loc_0002E030: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E041: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E04E: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E05C: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E06B; /* je: equal / zero */

loc_0002E066: ;
    PUSH32(esp, 0x0002E06Bu); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E06B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E073: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E08Au); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E08A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E096: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    goto loc_0002E113;

loc_0002E09D: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0AA: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0B3: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0BD: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E0CC; /* je: equal / zero */

loc_0002E0C7: ;
    PUSH32(esp, 0x0002E0CCu); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E0CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0D0: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E0E7u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E0E7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0EF: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_0002E113;

loc_0002E0F6: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002E103u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002E103: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 1;
    edx = MEM32(edi + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);

loc_0002E113: ;
    eax = edi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002E11Cu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002E11C: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + 0x20;
    MEM32(esp + 0x10) = 2;
    /* nop */

loc_0002E130: ;
    _fa = (uint32_t)(MEM32(ebx + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + -8), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E163; /* jge: greater or equal (signed >=) */

loc_0002E136: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E163; /* je: equal / zero */

loc_0002E13D: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E163; /* je: equal / zero */

loc_0002E146: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E163; /* je: equal / zero */

loc_0002E14F: ;
    PUSH32(esp, 0x0002E154u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E154: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002E163; /* je: equal / zero */

loc_0002E15C: ;
    ebp = 1;
    goto loc_0002E169;

loc_0002E163: ;
    MEM32(ebx) = 0xFFFFFFFFu;

loc_0002E169: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0002E130; /* jne: not equal / not zero */

loc_0002E177: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E204; /* je: equal / zero */

loc_0002E182: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edi + 0xC;
    if (CMP_GE(_fas, _fbs)) goto loc_0002E204; /* jge: greater or equal (signed >=) */

loc_0002E18D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E204; /* jne: not equal / not zero */

loc_0002E191: ;
    PUSH32(esp, 0x0002E196u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002E196: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E204; /* jne: not equal / not zero */

loc_0002E19A: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1A7: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1B0: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1BA: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1C9; /* je: equal / zero */

loc_0002E1C4: ;
    PUSH32(esp, 0x0002E1C9u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E1C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1CD: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E1E4u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E1E4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002E1F7: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 4) = 0;

loc_0002E204: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DBE9
 * Original: 0x0002DBE9 - 0x0002E20A (1569 bytes, 468 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DBE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DBE9: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002DBF4u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002DBF4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC00: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0x0002DC0Eu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DC0E: ;
    goto loc_0002DEE7;

    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC24: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC31: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC3F: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DC4E; /* je: equal / zero */

loc_0002DC49: ;
    PUSH32(esp, 0x0002DC4Eu); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002DC4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC56: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002DC6Du); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002DC6D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DC79: ;
    edx = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0x0002DC87u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DC87: ;
    goto loc_0002DEE7;

    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002DCC7; /* jge: greater or equal (signed >=) */

loc_0002DC92: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCC7; /* je: equal / zero */

loc_0002DC9A: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCC7; /* je: equal / zero */

loc_0002DCA3: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCC7; /* je: equal / zero */

loc_0002DCAC: ;
    PUSH32(esp, 0x0002DCB1u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002DCB1: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCC7; /* je: equal / zero */

loc_0002DCBB: ;
    MEM32(edi + 0x3C) = 5;
    goto loc_0002DEE7;

loc_0002DCC7: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCED; /* je: equal / zero */

loc_0002DCD1: ;
    _fa = (uint32_t)(MEM32(0x758478)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758478), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DCE2; /* jne: not equal / not zero */

loc_0002DCD9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DCDFu); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002DCDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DCE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70130 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DCED: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DCF8: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DD0C; /* jne: not equal / not zero */

loc_0002DCFD: ;
    eax = esi;
    PUSH32(esp, 0x0002DD04u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DD04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEE7; /* jne: not equal / not zero */

loc_0002DD0C: ;
    eax = edi;
    PUSH32(esp, 0x0002DD13u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002DD13: ;
    eax = ebp;
    PUSH32(esp, 0x0002DD1Au); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DD1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DD97; /* jne: not equal / not zero */

loc_0002DD1E: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x54);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD2F: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD3C: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD4A: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD59; /* je: equal / zero */

loc_0002DD54: ;
    PUSH32(esp, 0x0002DD59u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002DD59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD61: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002DD78u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002DD78: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD84: ;
    ecx = MEM32(edi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    eax = edi;
    PUSH32(esp, 0x0002DD92u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DD92: ;
    goto loc_0002DEE7;

loc_0002DD97: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002DDA4u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002DDA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 1;
    edx = MEM32(edi + 0x54);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    eax = edi;
    PUSH32(esp, 0x0002DDBDu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DDBD: ;
    goto loc_0002DEE7;

    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002DDFD; /* jge: greater or equal (signed >=) */

loc_0002DDC8: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDD0: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDD9: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDE2: ;
    PUSH32(esp, 0x0002DDE7u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002DDE7: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDF1: ;
    MEM32(edi + 0x3C) = 4;
    goto loc_0002DEE7;

loc_0002DDFD: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE23; /* je: equal / zero */

loc_0002DE07: ;
    _fa = (uint32_t)(MEM32(0x758478)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758478), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DE18; /* jne: not equal / not zero */

loc_0002DE0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DE15u); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002DE15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DE18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70130 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE23: ;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE2E: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DE42; /* jne: not equal / not zero */

loc_0002DE33: ;
    eax = esi;
    PUSH32(esp, 0x0002DE3Au); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DE3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEE7; /* jne: not equal / not zero */

loc_0002DE42: ;
    eax = edi;
    PUSH32(esp, 0x0002DE49u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002DE49: ;
    eax = ebp;
    PUSH32(esp, 0x0002DE50u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DE50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEB8; /* jne: not equal / not zero */

loc_0002DE54: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x50);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE65: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE6E: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE78: ;
    _fa = (uint32_t)(MEM32(0x758478)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758478), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE85; /* je: equal / zero */

loc_0002DE80: ;
    PUSH32(esp, 0x0002DE85u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002DE85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE89: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002DEA0u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002DEA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DEA8: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = edi;
    PUSH32(esp, 0x0002DEB6u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DEB6: ;
    goto loc_0002DEE7;

loc_0002DEB8: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002DEC5u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002DEC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 1;
    ecx = MEM32(edi + 0x50);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    eax = edi;
    PUSH32(esp, 0x0002DEDEu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DEDE: ;
    goto loc_0002DEE7;

    PUSH32(esp, 3);
    PUSH32(esp, 0x0002DEE7u); RECOMP_ABI_CALL(0x0002D2E0u, sub_0002D2E0); /* call 0x0002D2E0 */

loc_0002DEE7: ;
    MEM32(edi + 0x3C) = 7;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E204; /* jne: not equal / not zero */

loc_0002DEF9: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = edi + 0xC;
    if (CMP_L(_fas, _fbs)) goto loc_0002E11C; /* jl: less (signed <) */

loc_0002DF08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0002DF45; /* jle: less or equal (signed <=) */

loc_0002DF0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DF16: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002DF22: ;
    PUSH32(esp, 0x0002DF27u); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0002DF27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DF2F: ;
    MEM32(ebp) = 7;
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = 0xFFFFFFFFu;
    goto loc_0002E11C;

loc_0002DF45: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002DF51: ;
    PUSH32(esp, 0x0002DF56u); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0002DF56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DF5E: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF71; /* je: equal / zero */

loc_0002DF65: ;
    MEM32(edi + 0x3C) = 0;
    goto loc_0002E11C;

loc_0002DF71: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = edi + 0x30;
    if (CMP_GE(_fas, _fbs)) goto loc_0002DF9B; /* jge: greater or equal (signed >=) */

loc_0002DF7C: ;
    esi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF9B; /* je: equal / zero */

loc_0002DF84: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF9B; /* je: equal / zero */

loc_0002DF8D: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF9B; /* je: equal / zero */

loc_0002DF96: ;
    PUSH32(esp, 0x0002DF9Bu); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002DF9B: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DFB5; /* je: equal / zero */

loc_0002DFA2: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DFB5; /* jne: not equal / not zero */

loc_0002DFAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DFB2u); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002DFB2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DFB5: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DFC2; /* je: equal / zero */

loc_0002DFBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DFD2; /* jne: not equal / not zero */

loc_0002DFC2: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 0x0002DFCAu); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0002DFCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DFD2: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002DFDD: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DFF1; /* jne: not equal / not zero */

loc_0002DFE2: ;
    eax = ebp;
    PUSH32(esp, 0x0002DFE9u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DFE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DFF1: ;
    eax = edi;
    PUSH32(esp, 0x0002DFF8u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002DFF8: ;
    eax = ebx;
    PUSH32(esp, 0x0002DFFFu); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DFFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E0F6; /* jne: not equal / not zero */

loc_0002E007: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002E01C; /* jne: not equal / not zero */

loc_0002E00D: ;
    eax = ebp;
    PUSH32(esp, 0x0002E014u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002E014: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E0F6; /* jne: not equal / not zero */

loc_0002E01C: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E09D; /* je: equal / zero */

loc_0002E021: ;
    eax = ebp;
    PUSH32(esp, 0x0002E028u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002E028: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E0F6; /* jne: not equal / not zero */

loc_0002E030: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E041: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E04E: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E05C: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E06B; /* je: equal / zero */

loc_0002E066: ;
    PUSH32(esp, 0x0002E06Bu); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E06B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E073: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E08Au); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E08A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E096: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    goto loc_0002E113;

loc_0002E09D: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0AA: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0B3: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0BD: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E0CC; /* je: equal / zero */

loc_0002E0C7: ;
    PUSH32(esp, 0x0002E0CCu); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E0CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0D0: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E0E7u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E0E7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0EF: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_0002E113;

loc_0002E0F6: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002E103u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002E103: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 1;
    edx = MEM32(edi + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);

loc_0002E113: ;
    eax = edi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002E11Cu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002E11C: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + 0x20;
    MEM32(esp + 0x10) = 2;
    /* nop */

loc_0002E130: ;
    _fa = (uint32_t)(MEM32(ebx + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + -8), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E163; /* jge: greater or equal (signed >=) */

loc_0002E136: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E163; /* je: equal / zero */

loc_0002E13D: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E163; /* je: equal / zero */

loc_0002E146: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E163; /* je: equal / zero */

loc_0002E14F: ;
    PUSH32(esp, 0x0002E154u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E154: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002E163; /* je: equal / zero */

loc_0002E15C: ;
    ebp = 1;
    goto loc_0002E169;

loc_0002E163: ;
    MEM32(ebx) = 0xFFFFFFFFu;

loc_0002E169: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0002E130; /* jne: not equal / not zero */

loc_0002E177: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E204; /* je: equal / zero */

loc_0002E182: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edi + 0xC;
    if (CMP_GE(_fas, _fbs)) goto loc_0002E204; /* jge: greater or equal (signed >=) */

loc_0002E18D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E204; /* jne: not equal / not zero */

loc_0002E191: ;
    PUSH32(esp, 0x0002E196u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002E196: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E204; /* jne: not equal / not zero */

loc_0002E19A: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1A7: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1B0: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1BA: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1C9; /* je: equal / zero */

loc_0002E1C4: ;
    PUSH32(esp, 0x0002E1C9u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E1C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1CD: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E1E4u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E1E4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002E1F7: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 4) = 0;

loc_0002E204: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DD1C
 * Original: 0x0002DD1C - 0x0002E20A (1262 bytes, 378 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DD1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DD1C: ;
    if (_flags /* jne: not equal / not zero */) goto loc_0002DD97;

loc_0002DD1E: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x54);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD2F: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD3C: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD4A: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD59; /* je: equal / zero */

loc_0002DD54: ;
    PUSH32(esp, 0x0002DD59u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002DD59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD61: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002DD78u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002DD78: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DD84: ;
    ecx = MEM32(edi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    eax = edi;
    PUSH32(esp, 0x0002DD92u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DD92: ;
    goto loc_0002DEE7;

loc_0002DD97: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002DDA4u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002DDA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 1;
    edx = MEM32(edi + 0x54);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    eax = edi;
    PUSH32(esp, 0x0002DDBDu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DDBD: ;
    goto loc_0002DEE7;

    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002DDFD; /* jge: greater or equal (signed >=) */

loc_0002DDC8: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDD0: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDD9: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDE2: ;
    PUSH32(esp, 0x0002DDE7u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002DDE7: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDFD; /* je: equal / zero */

loc_0002DDF1: ;
    MEM32(edi + 0x3C) = 4;
    goto loc_0002DEE7;

loc_0002DDFD: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE23; /* je: equal / zero */

loc_0002DE07: ;
    _fa = (uint32_t)(MEM32(0x758478)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758478), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DE18; /* jne: not equal / not zero */

loc_0002DE0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DE15u); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002DE15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DE18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70130 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE23: ;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE2E: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DE42; /* jne: not equal / not zero */

loc_0002DE33: ;
    eax = esi;
    PUSH32(esp, 0x0002DE3Au); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DE3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEE7; /* jne: not equal / not zero */

loc_0002DE42: ;
    eax = edi;
    PUSH32(esp, 0x0002DE49u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002DE49: ;
    eax = ebp;
    PUSH32(esp, 0x0002DE50u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DE50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEB8; /* jne: not equal / not zero */

loc_0002DE54: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x50);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE65: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE6E: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE78: ;
    _fa = (uint32_t)(MEM32(0x758478)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758478), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE85; /* je: equal / zero */

loc_0002DE80: ;
    PUSH32(esp, 0x0002DE85u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002DE85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DE89: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002DEA0u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002DEA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE7; /* je: equal / zero */

loc_0002DEA8: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = edi;
    PUSH32(esp, 0x0002DEB6u); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DEB6: ;
    goto loc_0002DEE7;

loc_0002DEB8: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002DEC5u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002DEC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 1;
    ecx = MEM32(edi + 0x50);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    eax = edi;
    PUSH32(esp, 0x0002DEDEu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002DEDE: ;
    goto loc_0002DEE7;

    PUSH32(esp, 3);
    PUSH32(esp, 0x0002DEE7u); RECOMP_ABI_CALL(0x0002D2E0u, sub_0002D2E0); /* call 0x0002D2E0 */

loc_0002DEE7: ;
    MEM32(edi + 0x3C) = 7;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E204; /* jne: not equal / not zero */

loc_0002DEF9: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = edi + 0xC;
    if (CMP_L(_fas, _fbs)) goto loc_0002E11C; /* jl: less (signed <) */

loc_0002DF08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0002DF45; /* jle: less or equal (signed <=) */

loc_0002DF0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DF16: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002DF22: ;
    PUSH32(esp, 0x0002DF27u); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0002DF27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DF2F: ;
    MEM32(ebp) = 7;
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = 0xFFFFFFFFu;
    goto loc_0002E11C;

loc_0002DF45: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002DF51: ;
    PUSH32(esp, 0x0002DF56u); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0002DF56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DF5E: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF71; /* je: equal / zero */

loc_0002DF65: ;
    MEM32(edi + 0x3C) = 0;
    goto loc_0002E11C;

loc_0002DF71: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = edi + 0x30;
    if (CMP_GE(_fas, _fbs)) goto loc_0002DF9B; /* jge: greater or equal (signed >=) */

loc_0002DF7C: ;
    esi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF9B; /* je: equal / zero */

loc_0002DF84: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF9B; /* je: equal / zero */

loc_0002DF8D: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF9B; /* je: equal / zero */

loc_0002DF96: ;
    PUSH32(esp, 0x0002DF9Bu); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002DF9B: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DFB5; /* je: equal / zero */

loc_0002DFA2: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002DFB5; /* jne: not equal / not zero */

loc_0002DFAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DFB2u); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_0002DFB2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DFB5: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002DFC2; /* je: equal / zero */

loc_0002DFBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DFD2; /* jne: not equal / not zero */

loc_0002DFC2: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 0x0002DFCAu); RECOMP_ABI_CALL(0x0001A880u, sub_0001A880); /* call 0x0001A880 */

loc_0002DFCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DFD2: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002DFDD: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002DFF1; /* jne: not equal / not zero */

loc_0002DFE2: ;
    eax = ebp;
    PUSH32(esp, 0x0002DFE9u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DFE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E11C; /* jne: not equal / not zero */

loc_0002DFF1: ;
    eax = edi;
    PUSH32(esp, 0x0002DFF8u); RECOMP_ABI_CALL(0x0002D870u, sub_0002D870); /* call 0x0002D870 */

loc_0002DFF8: ;
    eax = ebx;
    PUSH32(esp, 0x0002DFFFu); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002DFFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E0F6; /* jne: not equal / not zero */

loc_0002E007: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002E01C; /* jne: not equal / not zero */

loc_0002E00D: ;
    eax = ebp;
    PUSH32(esp, 0x0002E014u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002E014: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E0F6; /* jne: not equal / not zero */

loc_0002E01C: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E09D; /* je: equal / zero */

loc_0002E021: ;
    eax = ebp;
    PUSH32(esp, 0x0002E028u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002E028: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E0F6; /* jne: not equal / not zero */

loc_0002E030: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E041: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E04E: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E05C: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E06B; /* je: equal / zero */

loc_0002E066: ;
    PUSH32(esp, 0x0002E06Bu); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E06B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E073: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E08Au); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E08A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E096: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    goto loc_0002E113;

loc_0002E09D: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0AA: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0B3: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0BD: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E0CC; /* je: equal / zero */

loc_0002E0C7: ;
    PUSH32(esp, 0x0002E0CCu); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E0CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0D0: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E0E7u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E0E7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E11C; /* je: equal / zero */

loc_0002E0EF: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_0002E113;

loc_0002E0F6: ;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002E103u); RECOMP_ABI_CALL(0x0001A8B0u, sub_0001A8B0); /* call 0x0001A8B0 */

loc_0002E103: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 1;
    edx = MEM32(edi + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);

loc_0002E113: ;
    eax = edi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002E11Cu); RECOMP_ABI_CALL(0x0002D810u, sub_0002D810); /* call 0x0002D810 */

loc_0002E11C: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + 0x20;
    MEM32(esp + 0x10) = 2;
    /* nop */

loc_0002E130: ;
    _fa = (uint32_t)(MEM32(ebx + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + -8), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E163; /* jge: greater or equal (signed >=) */

loc_0002E136: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E163; /* je: equal / zero */

loc_0002E13D: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E163; /* je: equal / zero */

loc_0002E146: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E163; /* je: equal / zero */

loc_0002E14F: ;
    PUSH32(esp, 0x0002E154u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E154: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002E163; /* je: equal / zero */

loc_0002E15C: ;
    ebp = 1;
    goto loc_0002E169;

loc_0002E163: ;
    MEM32(ebx) = 0xFFFFFFFFu;

loc_0002E169: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0002E130; /* jne: not equal / not zero */

loc_0002E177: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E204; /* je: equal / zero */

loc_0002E182: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edi + 0xC;
    if (CMP_GE(_fas, _fbs)) goto loc_0002E204; /* jge: greater or equal (signed >=) */

loc_0002E18D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E204; /* jne: not equal / not zero */

loc_0002E191: ;
    PUSH32(esp, 0x0002E196u); RECOMP_ABI_CALL(0x0002D200u, sub_0002D200); /* call 0x0002D200 */

loc_0002E196: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E204; /* jne: not equal / not zero */

loc_0002E19A: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1A7: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1B0: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1BA: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1C9; /* je: equal / zero */

loc_0002E1C4: ;
    PUSH32(esp, 0x0002E1C9u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E1C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1CD: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E1E4u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E1E4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002E1F7: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 4) = 0;

loc_0002E204: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E1A2
 * Original: 0x0002E1A2 - 0x0002E20A (104 bytes, 39 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E1A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E1A2: ;
    eax = MEM32(edi + 0x10);
    if (_flags /* je: equal / zero */) goto loc_0002E1F7;

loc_0002E1A7: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1B0: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1BA: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1C9; /* je: equal / zero */

loc_0002E1C4: ;
    PUSH32(esp, 0x0002E1C9u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E1C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1CD: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E1E4u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E1E4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002E1F7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E1B0
 * Original: 0x0002E1B0 - 0x0002E20A (90 bytes, 35 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E1B0: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1BA: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1C9; /* je: equal / zero */

loc_0002E1C4: ;
    PUSH32(esp, 0x0002E1C9u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E1C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E1F7; /* je: equal / zero */

loc_0002E1CD: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E1E4u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E1E4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002E1F7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E1F3
 * Original: 0x0002E1F3 - 0x0002E20A (23 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E1F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E1F3: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E210
 * Original: 0x0002E210 - 0x0002E2BC (172 bytes, 66 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x30);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E24C; /* jge: greater or equal (signed >=) */

loc_0002E220: ;
    esi = MEM32(edi + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E24C; /* je: equal / zero */

loc_0002E228: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E24C; /* je: equal / zero */

loc_0002E231: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E24C; /* je: equal / zero */

loc_0002E23A: ;
    PUSH32(esp, 0x0002E23Fu); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E23F: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002E24C; /* je: equal / zero */

loc_0002E247: ;
    ebp = 1;

loc_0002E24C: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E27A; /* jge: greater or equal (signed >=) */

loc_0002E252: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E25A: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E263: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E26C: ;
    PUSH32(esp, 0x0002E271u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E271: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E279: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E27A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x20)) >> 32) & 1);
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 2;

loc_0002E282: ;
    _fa = (uint32_t)(MEM32(edi + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + -8), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E2AF; /* jge: greater or equal (signed >=) */

loc_0002E288: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E28F: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E298: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E2A1: ;
    PUSH32(esp, 0x0002E2A6u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E2A6: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E2AE: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E2AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002E282; /* jne: not equal / not zero */

loc_0002E2B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E243
 * Original: 0x0002E243 - 0x0002E2BC (121 bytes, 46 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E243(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E243: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002E24C; /* je: equal / zero */

loc_0002E247: ;
    ebp = 1;

loc_0002E24C: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E27A; /* jge: greater or equal (signed >=) */

loc_0002E252: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E25A: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E263: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E26C: ;
    PUSH32(esp, 0x0002E271u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E271: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E279: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E27A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x20)) >> 32) & 1);
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 2;

loc_0002E282: ;
    _fa = (uint32_t)(MEM32(edi + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + -8), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E2AF; /* jge: greater or equal (signed >=) */

loc_0002E288: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E28F: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E298: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E2A1: ;
    PUSH32(esp, 0x0002E2A6u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E2A6: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E2AE: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E2AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002E282; /* jne: not equal / not zero */

loc_0002E2B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E245
 * Original: 0x0002E245 - 0x0002E2BC (119 bytes, 45 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E245(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E245: ;
    if (_flags /* je: equal / zero */) goto loc_0002E24C;

loc_0002E247: ;
    ebp = 1;

loc_0002E24C: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E27A; /* jge: greater or equal (signed >=) */

loc_0002E252: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E25A: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E263: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E26C: ;
    PUSH32(esp, 0x0002E271u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E271: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002E27A; /* je: equal / zero */

loc_0002E279: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E27A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x20)) >> 32) & 1);
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 2;

loc_0002E282: ;
    _fa = (uint32_t)(MEM32(edi + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + -8), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E2AF; /* jge: greater or equal (signed >=) */

loc_0002E288: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E28F: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E298: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E2A1: ;
    PUSH32(esp, 0x0002E2A6u); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E2A6: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002E2AF; /* je: equal / zero */

loc_0002E2AE: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E2AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002E282; /* jne: not equal / not zero */

loc_0002E2B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E2C0
 * Original: 0x0002E2C0 - 0x0002E347 (135 bytes, 51 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0002E2C0: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002E346; /* jne: not equal / not zero */

loc_0002E2C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 1);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E2F6; /* jge: greater or equal (signed >=) */

loc_0002E2D0: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2F6; /* je: equal / zero */

loc_0002E2D8: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2F6; /* je: equal / zero */

loc_0002E2E1: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E2F6; /* je: equal / zero */

loc_0002E2E9: ;
    PUSH32(esp, 0x0002E2EEu); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E2EE: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa != 0)) goto loc_0002E344; /* jne: not equal / not zero */

loc_0002E2F6: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E33E; /* je: equal / zero */

loc_0002E303: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E33E; /* je: equal / zero */

loc_0002E30B: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E31A; /* je: equal / zero */

loc_0002E315: ;
    PUSH32(esp, 0x0002E31Au); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E31A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E33E; /* je: equal / zero */

loc_0002E31E: ;
    ebx = MEM32(0x430E6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E335u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E335: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi + 0x14) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002E33E: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x14) = eax;

loc_0002E344: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0002E346: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E4FC
 * Original: 0x0002E4FC - 0x0002E535 (57 bytes, 18 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E4FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E4FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0002E4F4(); return; } /* jb: below (unsigned <) */

loc_0002E501: ;
    ecx = MEM32(0x64506C);
    MEM32(edx) = ecx;
    eax = MEM32(0x645070);
    MEM32(edx + 4) = eax;
    ecx = MEM32(0x645074);
    MEM32(edx + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E4FF
 * Original: 0x0002E4FF - 0x0002E535 (54 bytes, 17 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E4FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E4FF: ;
    if (_flags /* jb: below (unsigned <) */) { g_seh_ebp = ebp; sub_0002E4F4(); return; }

loc_0002E501: ;
    ecx = MEM32(0x64506C);
    MEM32(edx) = ecx;
    eax = MEM32(0x645070);
    MEM32(edx + 4) = eax;
    ecx = MEM32(0x645074);
    MEM32(edx + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E540
 * Original: 0x0002E540 - 0x0002E58D (77 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002E540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0002E540: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 4;
    /* nop */

loc_0002E550: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E576; /* je: equal / zero */

loc_0002E55B: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E576; /* je: equal / zero */

loc_0002E564: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E576; /* je: equal / zero */

loc_0002E569: ;
    PUSH32(esp, 0x0002E56Eu); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002E56E: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa != 0)) goto loc_0002E583; /* jne: not equal / not zero */

loc_0002E576: ;
    MEM32(edi) = 0xFFFFFFFFu;
    MEM32(edi + -4) = 0;

loc_0002E583: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x14)) >> 32) & 1);
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002E550; /* jne: not equal / not zero */

loc_0002E589: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E590
 * Original: 0x0002E590 - 0x0002E5CB (59 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E590: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002E5C9; /* jbe: below or equal (unsigned <=) */

loc_0002E59A: ;
    PUSH32(esp, esi);
    esi = ebx + 8;
    edi = edi;

loc_0002E5A0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E5BD; /* je: equal / zero */

loc_0002E5A5: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E5B3; /* jne: not equal / not zero */

loc_0002E5AE: ;
    PUSH32(esp, 0x0002E5B3u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002E5B3: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002E5BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E5BAu); } /* indirect call */
    }

loc_0002E5BD: ;
    eax = MEM32(ebx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002E5A0; /* jb: below (unsigned <) */

loc_0002E5C8: ;
    POP32(esp, esi);

loc_0002E5C9: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E59E
 * Original: 0x0002E59E - 0x0002E5CB (45 bytes, 20 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E59E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E59E: ;
    edi = edi;

loc_0002E5A0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E5BD; /* je: equal / zero */

loc_0002E5A5: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E5B3; /* jne: not equal / not zero */

loc_0002E5AE: ;
    PUSH32(esp, 0x0002E5B3u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002E5B3: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002E5BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E5BAu); } /* indirect call */
    }

loc_0002E5BD: ;
    eax = MEM32(ebx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002E5A0; /* jb: below (unsigned <) */

loc_0002E5C8: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E5D0
 * Original: 0x0002E5D0 - 0x0002E620 (80 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E5D0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E5DE; /* jne: not equal / not zero */

loc_0002E5D9: ;
    PUSH32(esp, 0x0002E5DEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002E5DE: ;
    edx = 0x154;
    ecx = eax;
    PUSH32(esp, 0x0002E5EAu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0002E5EA: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E61A; /* je: equal / zero */

loc_0002E5F2: ;
    PUSH32(esp, edi);
    MEM32(edx + 4) = eax;
    ecx = 0x14;
    edi = edx + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0x5C) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x60) = eax;
    MEM32(edx + 0x58) = eax;
    MEM32(edx) = 0;
    MEM32(0x758534) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0002E61A: ;
    MEM32(0x758534) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E620
 * Original: 0x0002E620 - 0x0002E67E (94 bytes, 34 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E620: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002E65F; /* jbe: below or equal (unsigned <=) */

loc_0002E62A: ;
    PUSH32(esp, esi);
    esi = edi + 8;
    edi = edi;

loc_0002E630: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E653; /* je: equal / zero */

loc_0002E635: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E643; /* jne: not equal / not zero */

loc_0002E63E: ;
    PUSH32(esp, 0x0002E643u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002E643: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002E64Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E64Au); } /* indirect call */
    }

loc_0002E64D: ;
    MEM32(esi) = 0;

loc_0002E653: ;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002E630; /* jb: below (unsigned <) */

loc_0002E65E: ;
    POP32(esp, esi);

loc_0002E65F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 4) = 0;
    MEM32(edi + 0x5C) = 0;
    MEM32(edi + 0x60) = eax;
    MEM32(edi + 0x58) = eax;
    MEM32(edi) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E64D
 * Original: 0x0002E64D - 0x0002E67E (49 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E64D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E64D: ;
    MEM32(esi) = 0;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0002E630(); return; } /* jb: below (unsigned <) */

loc_0002E65E: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 4) = 0;
    MEM32(edi + 0x5C) = 0;
    MEM32(edi + 0x60) = eax;
    MEM32(edi + 0x58) = eax;
    MEM32(edi) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E680
 * Original: 0x0002E680 - 0x0002E8AA (554 bytes, 170 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E680(void)
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

loc_0002E680: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_0002E6D9; /* jbe: below or equal (unsigned <=) */

loc_0002E68C: ;
    ebx = edi + 8;
    /* nop */

loc_0002E690: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E6B0; /* jne: not equal / not zero */

loc_0002E698: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002E6A1u); RECOMP_ABI_CALL(0x0009CD30u, sub_0009CD30); /* call 0x0009CD30 */

loc_0002E6A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E6B0; /* jne: not equal / not zero */

loc_0002E6A9: ;
    MEM32(esi + 0x10) = 4;

loc_0002E6B0: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E6CE; /* jne: not equal / not zero */

loc_0002E6B6: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002E6BFu); RECOMP_ABI_CALL(0x0009CE00u, sub_0009CE00); /* call 0x0009CE00 */

loc_0002E6BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E6CE; /* jne: not equal / not zero */

loc_0002E6C7: ;
    MEM32(esi + 0x10) = 1;

loc_0002E6CE: ;
    eax = MEM32(edi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002E690; /* jb: below (unsigned <) */

loc_0002E6D9: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E8A6; /* jne: not equal / not zero */

loc_0002E6E2: ;
    ecx = edi;
    PUSH32(esp, 0x0002E6E9u); RECOMP_ABI_CALL(0x0002EC80u, sub_0002EC80); /* call 0x0002EC80 */

loc_0002E6E9: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0002E7D2; /* je: equal / zero */

loc_0002E6F2: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0002E840; /* jne: not equal / not zero */

loc_0002E6FB: ;
    eax = MEM32(edi + 0x58);
    edx = eax + eax * 2;
    MEM32(edi + edx * 8 + 0x6C) = 0xFFFFFFFFu;
    eax = MEM32(edi + 0x58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(edi + 0x58) = edx;
    edx = MEM32(0x75852C);
    MEM32(edx) = 0;
    eax = MEM32(edi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x60) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E840; /* je: equal / zero */

loc_0002E731: ;
    eax = eax + eax * 2;
    xmm0 = XMM_SCALAR(MEMF(edi + eax * 8 + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x758C80); /* addss */
    ebp = edi + eax * 8 + 0x64;
    ecx = edi;
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0002E752u); RECOMP_ABI_CALL(0x0002EC80u, sub_0002EC80); /* call 0x0002EC80 */

loc_0002E752: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E840; /* jne: not equal / not zero */

loc_0002E75B: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(ebp + 4);
    esi = MEM32(ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7BE; /* je: equal / zero */

loc_0002E76B: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7BE; /* je: equal / zero */

loc_0002E774: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7BE; /* je: equal / zero */

loc_0002E77E: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E78D; /* je: equal / zero */

loc_0002E788: ;
    PUSH32(esp, 0x0002E78Du); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E78D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7BE; /* je: equal / zero */

loc_0002E791: ;
    ebx = MEM32(0x430E68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E7A7u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E7A7: ;
    ecx = MEM32(0x75852C);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 1;
    goto loc_0002E840;

loc_0002E7BE: ;
    ecx = MEM32(0x75852C);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 8) = eax;
    MEM32(ecx) = 1;
    goto loc_0002E840;

loc_0002E7D2: ;
    eax = MEM32(edi + 0x58);
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = eax + eax * 2;
    eax = MEM32(edi + edx * 8 + 0x68);
    esi = MEM32(edi + edx * 8 + 0x64);
    ebp = edi + edx * 8 + 0x64;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E82F; /* je: equal / zero */

loc_0002E7EE: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E82F; /* je: equal / zero */

loc_0002E7F7: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E82F; /* je: equal / zero */

loc_0002E801: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E810; /* je: equal / zero */

loc_0002E80B: ;
    PUSH32(esp, 0x0002E810u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E810: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E82F; /* je: equal / zero */

loc_0002E814: ;
    ebx = MEM32(0x430E68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E82Au); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E82A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002E832;

loc_0002E82F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002E832: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(0x75852C);
    MEM32(eax) = 1;

loc_0002E840: ;
    esi = MEM32(edi + 0x60);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8A6; /* je: equal / zero */

loc_0002E84A: ;
    ecx = MEM32(edi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x58) (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x429B84); /* subss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8A6; /* je: equal / zero */

loc_0002E862: ;
    edx = ecx + ecx * 2 + 0xF;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + edx * 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002E880; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + edx * 8)) */

loc_0002E86C: ;
    eax = MEM32(edi + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(edi + 0x5C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E899; /* je: equal / zero */

loc_0002E880: ;
    eax = ecx + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(edi + 0x58);
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E862; /* jne: not equal / not zero */

loc_0002E895: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002E899: ;
    MEM32(edi + 0x5C) = 0;
    MEM32(edi + 0x60) = ebx;
    MEM32(edi + 0x58) = ebx;

loc_0002E8A6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E696
 * Original: 0x0002E696 - 0x0002E8AA (532 bytes, 159 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E696(void)
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

loc_0002E696: ;
    if (_flags /* jne: not equal / not zero */) goto loc_0002E6B0;

loc_0002E698: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002E6A1u); RECOMP_ABI_CALL(0x0009CD30u, sub_0009CD30); /* call 0x0009CD30 */

loc_0002E6A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E6B0; /* jne: not equal / not zero */

loc_0002E6A9: ;
    MEM32(esi + 0x10) = 4;

loc_0002E6B0: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E6CE; /* jne: not equal / not zero */

loc_0002E6B6: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002E6BFu); RECOMP_ABI_CALL(0x0009CE00u, sub_0009CE00); /* call 0x0009CE00 */

loc_0002E6BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E6CE; /* jne: not equal / not zero */

loc_0002E6C7: ;
    MEM32(esi + 0x10) = 1;

loc_0002E6CE: ;
    eax = MEM32(edi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_0002E690(); return; } /* jb: below (unsigned <) */

loc_0002E6D9: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E8A6; /* jne: not equal / not zero */

loc_0002E6E2: ;
    ecx = edi;
    PUSH32(esp, 0x0002E6E9u); RECOMP_ABI_CALL(0x0002EC80u, sub_0002EC80); /* call 0x0002EC80 */

loc_0002E6E9: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0002E7D2; /* je: equal / zero */

loc_0002E6F2: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0002E840; /* jne: not equal / not zero */

loc_0002E6FB: ;
    eax = MEM32(edi + 0x58);
    edx = eax + eax * 2;
    MEM32(edi + edx * 8 + 0x6C) = 0xFFFFFFFFu;
    eax = MEM32(edi + 0x58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(edi + 0x58) = edx;
    edx = MEM32(0x75852C);
    MEM32(edx) = 0;
    eax = MEM32(edi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x60) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E840; /* je: equal / zero */

loc_0002E731: ;
    eax = eax + eax * 2;
    xmm0 = XMM_SCALAR(MEMF(edi + eax * 8 + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x758C80); /* addss */
    ebp = edi + eax * 8 + 0x64;
    ecx = edi;
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0002E752u); RECOMP_ABI_CALL(0x0002EC80u, sub_0002EC80); /* call 0x0002EC80 */

loc_0002E752: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E840; /* jne: not equal / not zero */

loc_0002E75B: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(ebp + 4);
    esi = MEM32(ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7BE; /* je: equal / zero */

loc_0002E76B: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7BE; /* je: equal / zero */

loc_0002E774: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7BE; /* je: equal / zero */

loc_0002E77E: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E78D; /* je: equal / zero */

loc_0002E788: ;
    PUSH32(esp, 0x0002E78Du); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E78D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7BE; /* je: equal / zero */

loc_0002E791: ;
    ebx = MEM32(0x430E68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E7A7u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E7A7: ;
    ecx = MEM32(0x75852C);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 1;
    goto loc_0002E840;

loc_0002E7BE: ;
    ecx = MEM32(0x75852C);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 8) = eax;
    MEM32(ecx) = 1;
    goto loc_0002E840;

loc_0002E7D2: ;
    eax = MEM32(edi + 0x58);
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = eax + eax * 2;
    eax = MEM32(edi + edx * 8 + 0x68);
    esi = MEM32(edi + edx * 8 + 0x64);
    ebp = edi + edx * 8 + 0x64;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E82F; /* je: equal / zero */

loc_0002E7EE: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E82F; /* je: equal / zero */

loc_0002E7F7: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E82F; /* je: equal / zero */

loc_0002E801: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E810; /* je: equal / zero */

loc_0002E80B: ;
    PUSH32(esp, 0x0002E810u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002E810: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E82F; /* je: equal / zero */

loc_0002E814: ;
    ebx = MEM32(0x430E68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E82Au); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E82A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002E832;

loc_0002E82F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002E832: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(0x75852C);
    MEM32(eax) = 1;

loc_0002E840: ;
    esi = MEM32(edi + 0x60);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8A6; /* je: equal / zero */

loc_0002E84A: ;
    ecx = MEM32(edi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x58) (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x429B84); /* subss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8A6; /* je: equal / zero */

loc_0002E862: ;
    edx = ecx + ecx * 2 + 0xF;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + edx * 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002E880; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + edx * 8)) */

loc_0002E86C: ;
    eax = MEM32(edi + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(edi + 0x5C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E899; /* je: equal / zero */

loc_0002E880: ;
    eax = ecx + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(edi + 0x58);
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E862; /* jne: not equal / not zero */

loc_0002E895: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002E899: ;
    MEM32(edi + 0x5C) = 0;
    MEM32(edi + 0x60) = ebx;
    MEM32(edi + 0x58) = ebx;

loc_0002E8A6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E812
 * Original: 0x0002E812 - 0x0002E8AA (152 bytes, 54 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E812(void)
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

loc_0002E812: ;
    if (_flags /* je: equal / zero */) goto loc_0002E82F;

loc_0002E814: ;
    ebx = MEM32(0x430E68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E82Au); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E82A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002E832;

loc_0002E82F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002E832: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(0x75852C);
    MEM32(eax) = 1;
    esi = MEM32(edi + 0x60);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8A6; /* je: equal / zero */

loc_0002E84A: ;
    ecx = MEM32(edi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x58) (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x429B84); /* subss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8A6; /* je: equal / zero */

loc_0002E862: ;
    edx = ecx + ecx * 2 + 0xF;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + edx * 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002E880; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + edx * 8)) */

loc_0002E86C: ;
    eax = MEM32(edi + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(edi + 0x5C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E899; /* je: equal / zero */

loc_0002E880: ;
    eax = ecx + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(edi + 0x58);
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E862; /* jne: not equal / not zero */

loc_0002E895: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002E899: ;
    MEM32(edi + 0x5C) = 0;
    MEM32(edi + 0x60) = ebx;
    MEM32(edi + 0x58) = ebx;

loc_0002E8A6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E81C
 * Original: 0x0002E81C - 0x0002E8AA (142 bytes, 51 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E81C(void)
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

loc_0002E81C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002E82Au); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002E82A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002E832;

    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002E832: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(0x75852C);
    MEM32(eax) = 1;
    esi = MEM32(edi + 0x60);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8A6; /* je: equal / zero */

loc_0002E84A: ;
    ecx = MEM32(edi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x58) (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x429B84); /* subss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8A6; /* je: equal / zero */

loc_0002E862: ;
    edx = ecx + ecx * 2 + 0xF;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + edx * 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002E880; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + edx * 8)) */

loc_0002E86C: ;
    eax = MEM32(edi + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(edi + 0x5C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E899; /* je: equal / zero */

loc_0002E880: ;
    eax = ecx + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(edi + 0x58);
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E862; /* jne: not equal / not zero */

loc_0002E895: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002E899: ;
    MEM32(edi + 0x5C) = 0;
    MEM32(edi + 0x60) = ebx;
    MEM32(edi + 0x58) = ebx;

loc_0002E8A6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E8B0
 * Original: 0x0002E8B0 - 0x0002E90B (91 bytes, 39 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E8B0: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002E8D1; /* jbe: below or equal (unsigned <=) */

loc_0002E8B9: ;
    PUSH32(esp, esi);
    esi = ecx + 8;
    PUSH32(esp, ebp);
    edi = edi;

loc_0002E8C0: ;
    ebp = MEM32(esi);
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8CF; /* je: equal / zero */

loc_0002E8C7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002E8C0; /* jb: below (unsigned <) */

loc_0002E8CF: ;
    POP32(esp, ebp);
    POP32(esp, esi);

loc_0002E8D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002E908; /* jae: above or equal (unsigned >=) */

loc_0002E8D5: ;
    eax = MEM32(ecx + eax * 4 + 8);
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8E5; /* je: equal / zero */

loc_0002E8E0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E908; /* jne: not equal / not zero */

loc_0002E8E5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002E908; /* jae: above or equal (unsigned >=) */

loc_0002E8EA: ;
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E908; /* je: equal / zero */

loc_0002E8F4: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x0002E908u); RECOMP_ABI_CALL(0x0002E910u, sub_0002E910); /* call 0x0002E910 */

loc_0002E908: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002E910
 * Original: 0x0002E910 - 0x0002EB3D (557 bytes, 180 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E910: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0002EB39; /* ja: above (unsigned >) */

loc_0002E91C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x2EB40); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0002E926u) goto loc_0002E926;
    if (_jt == 0x0002E92Fu) goto loc_0002E92F;
    if (_jt == 0x0002E95Au) goto loc_0002E95A;
    if (_jt == 0x0002E970u) goto loc_0002E970;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002E926: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002E92Du); RECOMP_ABI_CALL(0x0002ED60u, sub_0002ED60); /* call 0x0002ED60 */

loc_0002E92D: ;
    goto loc_0002E95A;

loc_0002E92F: ;
    ecx = edi;
    PUSH32(esp, 0x0002E936u); RECOMP_ABI_CALL(0x0002EC80u, sub_0002EC80); /* call 0x0002EC80 */

loc_0002E936: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E94A; /* je: equal / zero */

loc_0002E93B: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0002E95A; /* jle: less or equal (signed <=) */

loc_0002E93D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0002E95A; /* jg: greater (signed >) */

loc_0002E942: ;
    eax = MEM32(edi + 0x58);
    MEM32(edi + 0x60) = eax;
    goto loc_0002E95A;

loc_0002E94A: ;
    eax = MEM32(edi + 0x58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(edi + 0x60) = edx;

loc_0002E95A: ;
    ecx = edi;
    PUSH32(esp, 0x0002E961u); RECOMP_ABI_CALL(0x0002F250u, sub_0002F250); /* call 0x0002F250 */

loc_0002E961: ;
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    ecx = eax;
    goto loc_0002EB02;

loc_0002E970: ;
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, 0x0002E979u); RECOMP_ABI_CALL(0x0002ED10u, sub_0002ED10); /* call 0x0002ED10 */

loc_0002E979: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(edi + 0x60);
    if ((_fa == 0)) goto loc_0002EA6B; /* je: equal / zero */

loc_0002E983: ;
    ebx = MEM32(edi + 0x58);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E9B0; /* jne: not equal / not zero */

loc_0002E98A: ;
    esi = MEM32(edi + 0x5C);
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    edx = esi + esi * 2;
    ecx = edi + edx * 8 + 0x64;
    eax = esi + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    MEM32(edi + 0x58) = esi;
    goto loc_0002EAFF;

loc_0002E9B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x5C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EB36; /* je: equal / zero */

loc_0002E9B9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    eax = esi + 9;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EA2D; /* je: equal / zero */

loc_0002E9D3: ;
    edx = esi + esi * 2;
    eax = edi + edx * 8;
    edx = ecx + ecx * 2;
    edx = edi + edx * 8 + 0x64;
    ebp = MEM32(edx);
    ebx = eax + 0x64;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(edx + 0xC);
    MEM32(ebx + 0xC) = ebp;
    ebp = MEM32(edx + 0x10);
    MEM32(ebx + 0x10) = ebp;
    edx = MEM32(edx + 0x14);
    MEM32(ebx + 0x14) = edx;
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    eax = esi + 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = ecx + 9;
    ecx = 0xA;
    esi = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(edi + 0x58);
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E9D3; /* jne: not equal / not zero */

loc_0002EA2D: ;
    eax = esi + esi * 2;
    edx = ecx + ecx * 2;
    ecx = edi + edx * 8 + 0x64;
    eax = edi + eax * 8;
    esi = ecx;
    ebx = MEM32(esi);
    edx = eax + 0x64;
    MEM32(edx) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edx + 8) = ebx;
    ebx = MEM32(esi + 0xC);
    MEM32(edx + 0xC) = ebx;
    ebx = MEM32(esi + 0x10);
    MEM32(edx + 0x10) = ebx;
    esi = MEM32(esi + 0x14);
    MEM32(edx + 0x14) = esi;
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    goto loc_0002EAF2;

loc_0002EA6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x5C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EB36; /* je: equal / zero */

loc_0002EA74: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    eax = esi + 9;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(edi + 0x58);
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EAEB; /* je: equal / zero */

loc_0002EA91: ;
    edx = esi + esi * 2;
    eax = edi + edx * 8;
    edx = ecx + ecx * 2;
    edx = edi + edx * 8 + 0x64;
    ebp = MEM32(edx);
    ebx = eax + 0x64;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(edx + 0xC);
    MEM32(ebx + 0xC) = ebp;
    ebp = MEM32(edx + 0x10);
    MEM32(ebx + 0x10) = ebp;
    edx = MEM32(edx + 0x14);
    MEM32(ebx + 0x14) = edx;
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    eax = esi + 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = ecx + 9;
    ecx = 0xA;
    esi = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(edi + 0x58);
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EA91; /* jne: not equal / not zero */

loc_0002EAEB: ;
    edx = esi + esi * 2;
    ecx = edi + edx * 8 + 0x64;

loc_0002EAF2: ;
    eax = MEM32(edi + 0x60);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0xA;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }

loc_0002EAFF: ;
    MEM32(edi + 0x60) = edx;

loc_0002EB02: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EB36; /* je: equal / zero */

loc_0002EB06: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = 0xFFFFFFFFu;
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */

loc_0002EB36: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0002EB39: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002EB50
 * Original: 0x0002EB50 - 0x0002EBE5 (149 bytes, 56 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002EB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EB50: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002EBE0; /* jae: above or equal (unsigned >=) */

loc_0002EB61: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EB6F; /* jne: not equal / not zero */

loc_0002EB6A: ;
    PUSH32(esp, 0x0002EB6Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002EB6F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edx = 0x18;
    ecx = eax;
    PUSH32(esp, 0x0002EB7Du); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0002EB7D: ;
    edx = MEM32(esp + 0x24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(esp + 0x18);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebx = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 0x10) = ecx;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EBAB; /* jne: not equal / not zero */

loc_0002EBA6: ;
    PUSH32(esp, 0x0002EBABu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002EBAB: ;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = esi;
    ecx = eax;
    PUSH32(esp, 0x0002EBB7u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0002EBB7: ;
    ecx = esi;
    esi = MEM32(esp + 0x20);
    MEM32(ebx + 0xC) = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = MEM32(ebp + 4);
    MEM32(ebp + eax * 4 + 8) = ebx;
    eax = MEM32(ebp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(ebp + 4) = eax;
    POP32(esp, ebx);

loc_0002EBE0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0002EBF0
 * Original: 0x0002EBF0 - 0x0002EC72 (130 bytes, 52 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EBF0: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002EC13; /* jbe: below or equal (unsigned <=) */

loc_0002EBFA: ;
    PUSH32(esp, ebx);
    eax = edi + 8;
    edi = edi;

loc_0002EC00: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EC12; /* je: equal / zero */

loc_0002EC07: ;
    ebx = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002EC00; /* jb: below (unsigned <) */

loc_0002EC12: ;
    POP32(esp, ebx);

loc_0002EC13: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002EC70; /* jae: above or equal (unsigned >=) */

loc_0002EC17: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 4) = ecx;
    eax = MEM32(edi + esi * 4 + 8);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EC43; /* je: equal / zero */

loc_0002EC26: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EC34; /* jne: not equal / not zero */

loc_0002EC2F: ;
    PUSH32(esp, 0x0002EC34u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002EC34: ;
    ecx = MEM32(edi + esi * 4 + 8);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002EC43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EC40u); } /* indirect call */
    }

loc_0002EC43: ;
    eax = MEM32(edi + esi * 4 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EC65; /* je: equal / zero */

loc_0002EC4B: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EC59; /* jne: not equal / not zero */

loc_0002EC54: ;
    PUSH32(esp, 0x0002EC59u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0002EC59: ;
    ecx = MEM32(edi + esi * 4 + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002EC65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EC62u); } /* indirect call */
    }

loc_0002EC65: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edi + edx * 4 + 8);
    MEM32(edi + esi * 4 + 8) = eax;

loc_0002EC70: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002EC80
 * Original: 0x0002EC80 - 0x0002ED04 (132 bytes, 46 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0002EC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0002EC80: ;
    eax = MEM32(ecx + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x60) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002ED01; /* je: equal / zero */

loc_0002EC88: ;
    eax = eax + eax * 2;
    eax = ecx + eax * 8 + 0x64;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002ECCF; /* jne: not equal / not zero */

loc_0002EC98: ;
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002ECC8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_0002ECA6: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x0002ECAEu); RECOMP_ABI_CALL(0x0001AFF0u, sub_0001AFF0); /* call 0x0001AFF0 */

loc_0002ECAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002ECC1; /* je: equal / zero */

loc_0002ECB2: ;
    eax = MEM32(0x75852C);
    PUSH32(esp, 0x0002ECBCu); RECOMP_ABI_CALL(0x0002E210u, sub_0002E210); /* call 0x0002E210 */

loc_0002ECBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0002ECC8; /* ja: above (unsigned >) */

loc_0002ECC1: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002ECC8: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002ECCF: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002ECFA; /* je: equal / zero */

loc_0002ECD8: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002ECFA; /* je: equal / zero */

loc_0002ECE1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002ECFA; /* je: equal / zero */

loc_0002ECE6: ;
    PUSH32(esp, 0x0002ECEBu); RECOMP_ABI_CALL(0x000A2FA0u, sub_000A2FA0); /* call 0x000A2FA0 */

loc_0002ECEB: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_0002ECFA; /* je: equal / zero */

loc_0002ECF3: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002ECFA: ;
    eax = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002ED01: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002ED10
 * Original: 0x0002ED10 - 0x0002ED5C (76 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ED10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002ED10: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002ED1Bu); RECOMP_ABI_CALL(0x0002EC80u, sub_0002EC80); /* call 0x0002EC80 */

loc_0002ED1B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002ED55; /* jne: not equal / not zero */

loc_0002ED22: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002ED55; /* je: equal / zero */

loc_0002ED2A: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002ED55; /* je: equal / zero */

loc_0002ED33: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002ED55; /* je: equal / zero */

loc_0002ED3C: ;
    eax = MEM32(esi + 0x58);
    eax = eax + eax * 2;
    esi = MEM32(esi + eax * 8 + 0x6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CF5C28F);
    PUSH32(esp, 0x0002ED52u); RECOMP_ABI_CALL(0x000A1430u, sub_000A1430); /* call 0x000A1430 */

loc_0002ED52: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002ED55: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002ED60
 * Original: 0x0002ED60 - 0x0002EDCD (109 bytes, 40 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ED60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002ED60: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0002ED68u); RECOMP_ABI_CALL(0x0002EC80u, sub_0002EC80); /* call 0x0002EC80 */

loc_0002ED68: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002ED82; /* je: equal / zero */

loc_0002ED6F: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0002EDC7; /* jle: less or equal (signed <=) */

loc_0002ED71: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0002EDC7; /* jg: greater (signed >) */

loc_0002ED76: ;
    eax = MEM32(edi + 0x58);
    MEM32(edi + 0x60) = eax;
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002ED82: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EDB7; /* je: equal / zero */

loc_0002ED8A: ;
    SET_LO8(eax, MEM8(0x758484));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EDB7; /* je: equal / zero */

loc_0002ED93: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EDB7; /* je: equal / zero */

loc_0002ED9C: ;
    eax = MEM32(edi + 0x58);
    PUSH32(esp, esi);
    ecx = eax + eax * 2;
    esi = MEM32(edi + ecx * 8 + 0x6C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CF5C28F);
    PUSH32(esp, 0x0002EDB3u); RECOMP_ABI_CALL(0x000A1430u, sub_000A1430); /* call 0x000A1430 */

loc_0002EDB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_0002EDB7: ;
    eax = MEM32(edi + 0x58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(edi + 0x60) = edx;

loc_0002EDC7: ;
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002EDD0
 * Original: 0x0002EDD0 - 0x0002EE53 (131 bytes, 48 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EDD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002EE00; /* jbe: below or equal (unsigned <=) */

loc_0002EDE8: ;
    PUSH32(esp, ebx);
    edx = esi + 8;
    /* nop */

loc_0002EDF0: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EDFF; /* je: equal / zero */

loc_0002EDF7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002EDF0; /* jb: below (unsigned <) */

loc_0002EDFF: ;
    POP32(esp, ebx);

loc_0002EE00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002EE45; /* jae: above or equal (unsigned >=) */

loc_0002EE04: ;
    esi = MEM32(esi + eax * 4 + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EE45; /* je: equal / zero */

loc_0002EE0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EE45; /* je: equal / zero */

loc_0002EE14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EE45; /* je: equal / zero */

loc_0002EE19: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x41F69C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002EE2Cu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_0002EE2C: ;
    edx = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002EE38u); RECOMP_ABI_CALL(0x0009CCC0u, sub_0009CCC0); /* call 0x0009CCC0 */

loc_0002EE38: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = 2;

loc_0002EE45: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    PUSH32(esp, 0x0002EE4Fu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_0002EE4F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002EE60
 * Original: 0x0002EE60 - 0x0002EED8 (120 bytes, 43 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EE60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002EE90; /* jbe: below or equal (unsigned <=) */

loc_0002EE78: ;
    PUSH32(esp, ebx);
    edx = esi + 8;
    /* nop */

loc_0002EE80: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EE8F; /* je: equal / zero */

loc_0002EE87: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002EE80; /* jb: below (unsigned <) */

loc_0002EE8F: ;
    POP32(esp, ebx);

loc_0002EE90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002EECA; /* jae: above or equal (unsigned >=) */

loc_0002EE94: ;
    esi = MEM32(esi + eax * 4 + 8);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EECA; /* jne: not equal / not zero */

loc_0002EE9E: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x41F69C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002EEB1u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_0002EEB1: ;
    edx = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002EEBDu); RECOMP_ABI_CALL(0x0009CD90u, sub_0009CD90); /* call 0x0009CD90 */

loc_0002EEBD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = 3;

loc_0002EECA: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    PUSH32(esp, 0x0002EED4u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_0002EED4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002EEE0
 * Original: 0x0002EEE0 - 0x0002EFC1 (225 bytes, 80 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002EEE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002EF46; /* jbe: below or equal (unsigned <=) */

loc_0002EEF8: ;
    ebp = ebx + 8;
    goto loc_0002EF00;

    /* nop */

loc_0002EF00: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EF3B; /* jne: not equal / not zero */

loc_0002EF09: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EF3B; /* je: equal / zero */

loc_0002EF12: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, 0x41F69C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002EF22u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_0002EF22: ;
    ecx = esp + 0x18;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002EF2Eu); RECOMP_ABI_CALL(0x0009CD90u, sub_0009CD90); /* call 0x0009CD90 */

loc_0002EF2E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = 3;

loc_0002EF3B: ;
    eax = MEM32(ebx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002EF00; /* jb: below (unsigned <) */

loc_0002EF46: ;
    ecx = MEM32(ebx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002EF65; /* jbe: below or equal (unsigned <=) */

loc_0002EF4F: ;
    edx = ebx + 8;

loc_0002EF52: ;
    esi = MEM32(edx);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EF65; /* je: equal / zero */

loc_0002EF5D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002EF52; /* jb: below (unsigned <) */

loc_0002EF65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002EFAA; /* jae: above or equal (unsigned >=) */

loc_0002EF69: ;
    esi = MEM32(ebx + eax * 4 + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EFAA; /* je: equal / zero */

loc_0002EF74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EFAA; /* je: equal / zero */

loc_0002EF79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EFAA; /* je: equal / zero */

loc_0002EF7E: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0x41F69C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002EF91u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_0002EF91: ;
    ecx = esp + 0x18;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002EF9Du); RECOMP_ABI_CALL(0x0009CCC0u, sub_0009CCC0); /* call 0x0009CCC0 */

loc_0002EF9D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = 2;

loc_0002EFAA: ;
    PUSH32(esp, 0x0002EFAFu); RECOMP_ABI_CALL(0x0009BBE0u, sub_0009BBE0); /* call 0x0009BBE0 */

loc_0002EFAF: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x0002EFBBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_0002EFBB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002EFB4
 * Original: 0x0002EFB4 - 0x0002EFC1 (13 bytes, 5 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EFB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002EFB4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x0002EFBBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_0002EFBB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002EFD0
 * Original: 0x0002EFD0 - 0x0002F00C (60 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EFD0: ;
    edx = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002EFF0; /* jbe: below or equal (unsigned <=) */

loc_0002EFD9: ;
    PUSH32(esp, ebx);
    eax = esi + 8;
    /* nop */

loc_0002EFE0: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EFEF; /* je: equal / zero */

loc_0002EFE7: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002EFE0; /* jb: below (unsigned <) */

loc_0002EFEF: ;
    POP32(esp, ebx);

loc_0002EFF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002F00B; /* jae: above or equal (unsigned >=) */

loc_0002EFF6: ;
    ecx = MEM32(esi + ecx * 4 + 8);
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F006; /* je: equal / zero */

loc_0002F001: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F00B; /* jne: not equal / not zero */

loc_0002F006: ;
    eax = 1;

loc_0002F00B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002F010
 * Original: 0x0002F010 - 0x0002F244 (564 bytes, 187 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F010(void)
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

loc_0002F010: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push((double)SMEM64(0x7654D8)); /* fild */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x42958C)); /* fmul dword ptr [0x42958c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F23F; /* je: equal / zero */

loc_0002F032: ;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ebx = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002F130; /* je: equal / zero */

loc_0002F05A: ;
    PUSH32(esp, ebp);
    goto loc_0002F060;

    /* nop */

loc_0002F060: ;
    edx = ebx + ebx * 2 + 0xF;
    xmm0 = XMM_SCALAR(MEMF(esi + edx * 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002F119; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_0002F074: ;
    ebp = MEM32(esi + 0x60);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + 9;
    edi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F116; /* je: equal / zero */

loc_0002F08B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x5C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F119; /* je: equal / zero */

loc_0002F094: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    eax = ebx + 1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = ebx;
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F103; /* je: equal / zero */

loc_0002F0A8: ;
    goto loc_0002F0B0;

    /* nop */

loc_0002F0B0: ;
    edx = ecx + ecx * 2;
    eax = esi + edx * 8 + 0x64;
    ebp = MEM32(eax);
    edx = edi + edi * 2;
    edx = esi + edx * 8 + 0x64;
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;
    ebp = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ebp;
    ebp = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = ebp;
    eax = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = eax;
    eax = edi + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    eax = ecx + 1;
    ecx = 0xA;
    edi = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esi + 0x60);
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F0B0; /* jne: not equal / not zero */

loc_0002F103: ;
    eax = MEM32(esi + 0x60);
    ecx = 0xA;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(esp + 0x14);

loc_0002F116: ;
    MEM32(esi + 0x60) = edx;

loc_0002F119: ;
    eax = ebx + 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ebx = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F060; /* jne: not equal / not zero */

loc_0002F12F: ;
    POP32(esp, ebp);

loc_0002F130: ;
    edi = MEM32(esi + 0x5C);
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F151; /* jne: not equal / not zero */

loc_0002F13A: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    MEM32(esi + 0x5C) = 0;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x58) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F151: ;
    MEM32(esi + 0x58) = eax;
    goto loc_0002F160;

    /* nop */
    /* nop */

loc_0002F160: ;
    edx = edi + edi * 2;
    xmm0 = XMM_SCALAR(MEMF(esi + edx * 8 + 0x70)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    ebx = esi + edx * 8 + 0x64;
    if ((_fca > _fcb)) goto loc_0002F1AC; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0002F174: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x0002F17Cu); RECOMP_ABI_CALL(0x0001AFA0u, sub_0001AFA0); /* call 0x0001AFA0 */

loc_0002F17C: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429330); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0xC); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_0002F1B6; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0002F190: ;
    eax = edi + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esi + 0x60);
    edi = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F160; /* jne: not equal / not zero */

loc_0002F1A5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F1AC: ;
    MEM32(esi + 0x58) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F1B6: ;
    MEM32(esi + 0x58) = edi;
    edx = edi + edi * 2;
    eax = MEM32(esi + edx * 8 + 0x68);
    edi = esi + edx * 8 + 0x64;
    PUSH32(esp, 0x0002F1C9u); RECOMP_ABI_CALL(0x0001AFF0u, sub_0001AFF0); /* call 0x0001AFF0 */

loc_0002F1C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F1DC; /* je: equal / zero */

loc_0002F1CD: ;
    eax = MEM32(0x75852C);
    PUSH32(esp, 0x0002F1D7u); RECOMP_ABI_CALL(0x0002E210u, sub_0002E210); /* call 0x0002E210 */

loc_0002F1D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002F23D; /* ja: above (unsigned >) */

loc_0002F1DC: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(edi + 4);
    esi = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F1EB: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F1F4: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F1FE: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F20D; /* je: equal / zero */

loc_0002F208: ;
    PUSH32(esp, 0x0002F20Du); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002F20D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F211: ;
    ebx = MEM32(0x430E68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002F227u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002F227: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F22F;

loc_0002F22C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002F22F: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(0x75852C);
    MEM32(eax) = 1;

loc_0002F23D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0002F23F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002F0AA
 * Original: 0x0002F0AA - 0x0002F244 (410 bytes, 138 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F0AA(void)
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

loc_0002F0AA: ;
    /* nop */

loc_0002F0B0: ;
    edx = ecx + ecx * 2;
    eax = esi + edx * 8 + 0x64;
    ebp = MEM32(eax);
    edx = edi + edi * 2;
    edx = esi + edx * 8 + 0x64;
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;
    ebp = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ebp;
    ebp = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = ebp;
    eax = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = eax;
    eax = edi + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    eax = ecx + 1;
    ecx = 0xA;
    edi = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esi + 0x60);
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F0B0; /* jne: not equal / not zero */

loc_0002F103: ;
    eax = MEM32(esi + 0x60);
    ecx = 0xA;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x60) = edx;
    eax = ebx + 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ebx = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0002F060(); return; } /* jne: not equal / not zero */

loc_0002F12F: ;
    POP32(esp, ebp);
    edi = MEM32(esi + 0x5C);
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F151; /* jne: not equal / not zero */

loc_0002F13A: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    MEM32(esi + 0x5C) = 0;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x58) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F151: ;
    MEM32(esi + 0x58) = eax;
    goto loc_0002F160;

    /* nop */
    /* nop */

loc_0002F160: ;
    edx = edi + edi * 2;
    xmm0 = XMM_SCALAR(MEMF(esi + edx * 8 + 0x70)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    ebx = esi + edx * 8 + 0x64;
    if ((_fca > _fcb)) goto loc_0002F1AC; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0002F174: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x0002F17Cu); RECOMP_ABI_CALL(0x0001AFA0u, sub_0001AFA0); /* call 0x0001AFA0 */

loc_0002F17C: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429330); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0xC); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_0002F1B6; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0002F190: ;
    eax = edi + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esi + 0x60);
    edi = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F160; /* jne: not equal / not zero */

loc_0002F1A5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F1AC: ;
    MEM32(esi + 0x58) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F1B6: ;
    MEM32(esi + 0x58) = edi;
    edx = edi + edi * 2;
    eax = MEM32(esi + edx * 8 + 0x68);
    edi = esi + edx * 8 + 0x64;
    PUSH32(esp, 0x0002F1C9u); RECOMP_ABI_CALL(0x0001AFF0u, sub_0001AFF0); /* call 0x0001AFF0 */

loc_0002F1C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F1DC; /* je: equal / zero */

loc_0002F1CD: ;
    eax = MEM32(0x75852C);
    PUSH32(esp, 0x0002F1D7u); RECOMP_ABI_CALL(0x0002E210u, sub_0002E210); /* call 0x0002E210 */

loc_0002F1D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002F23D; /* ja: above (unsigned >) */

loc_0002F1DC: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(edi + 4);
    esi = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F1EB: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F1F4: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F1FE: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F20D; /* je: equal / zero */

loc_0002F208: ;
    PUSH32(esp, 0x0002F20Du); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002F20D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F211: ;
    ebx = MEM32(0x430E68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002F227u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002F227: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F22F;

loc_0002F22C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002F22F: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(0x75852C);
    MEM32(eax) = 1;

loc_0002F23D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002F169
 * Original: 0x0002F169 - 0x0002F244 (219 bytes, 74 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F169(void)
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

loc_0002F169: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    ebx = esi + edx * 8 + 0x64;
    if ((_fca > _fcb)) goto loc_0002F1AC; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0002F174: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x0002F17Cu); RECOMP_ABI_CALL(0x0001AFA0u, sub_0001AFA0); /* call 0x0001AFA0 */

loc_0002F17C: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429330); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0xC); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_0002F1B6; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0002F190: ;
    eax = edi + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esi + 0x60);
    edi = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0002F160(); return; } /* jne: not equal / not zero */

loc_0002F1A5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F1AC: ;
    MEM32(esi + 0x58) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002F1B6: ;
    MEM32(esi + 0x58) = edi;
    edx = edi + edi * 2;
    eax = MEM32(esi + edx * 8 + 0x68);
    edi = esi + edx * 8 + 0x64;
    PUSH32(esp, 0x0002F1C9u); RECOMP_ABI_CALL(0x0001AFF0u, sub_0001AFF0); /* call 0x0001AFF0 */

loc_0002F1C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F1DC; /* je: equal / zero */

loc_0002F1CD: ;
    eax = MEM32(0x75852C);
    PUSH32(esp, 0x0002F1D7u); RECOMP_ABI_CALL(0x0002E210u, sub_0002E210); /* call 0x0002E210 */

loc_0002F1D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002F23D; /* ja: above (unsigned >) */

loc_0002F1DC: ;
    SET_LO8(ecx, MEM8(0x758484));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(edi + 4);
    esi = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F1EB: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F1F4: ;
    SET_LO8(ecx, MEM8(0x430E9C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F1FE: ;
    ecx = MEM32(0x758478);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F20D; /* je: equal / zero */

loc_0002F208: ;
    PUSH32(esp, 0x0002F20Du); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_0002F20D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F22C; /* je: equal / zero */

loc_0002F211: ;
    ebx = MEM32(0x430E68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, 0x0002F227u); RECOMP_ABI_CALL(0x000A14C0u, sub_000A14C0); /* call 0x000A14C0 */

loc_0002F227: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002F22F;

loc_0002F22C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002F22F: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(0x75852C);
    MEM32(eax) = 1;

loc_0002F23D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002F23F
 * Original: 0x0002F23F - 0x0002F244 (5 bytes, 3 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F23F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F23F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002F250
 * Original: 0x0002F250 - 0x0002F2A1 (81 bytes, 35 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F250: ;
    edx = MEM32(ecx + 0x60);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x58);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0002F281; /* jne: not equal / not zero */

loc_0002F25E: ;
    esi = MEM32(ecx + 0x5C);
    eax = esi + esi * 2;
    PUSH32(esp, ebx);
    edi = ecx + eax * 8 + 0x64;
    eax = esi + 1;
    ebx = 0xA;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    MEM32(ecx + 0x58) = esi;
    POP32(esp, esi);
    MEM32(ecx + 0x60) = edx;
    esp += 4; return; /* ret */

loc_0002F281: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x5C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F29E; /* je: equal / zero */

loc_0002F286: ;
    eax = edx + edx * 2;
    esi = ecx + eax * 8 + 0x64;
    eax = edx + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    eax = esi;
    MEM32(ecx + 0x60) = edx;

loc_0002F29E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F28D
 * Original: 0x0002F28D - 0x0002F2A1 (20 bytes, 9 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F28D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F28D: ;
    eax = edx + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    eax = esi;
    MEM32(ecx + 0x60) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F2B0
 * Original: 0x0002F2B0 - 0x0002F3BB (267 bytes, 92 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F2B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0002F3B7; /* je: equal / zero */

loc_0002F2C4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F39E; /* je: equal / zero */

loc_0002F2D0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0002F2D3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x58) (32-bit) */
    eax = ebx + ebx * 2;
    eax = ecx + eax * 8 + 0x64;
    if (CMP_NE(_fa, _fb)) goto loc_0002F2E7; /* jne: not equal / not zero */

loc_0002F2DF: ;
    MEM32(esp + 0x10) = 1;

loc_0002F2E7: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    esi = 0xA;
    eax = ebx + 1;
    if (CMP_NE(_fa, _fb)) goto loc_0002F38C; /* jne: not equal / not zero */

loc_0002F2FB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = MEM32(ecx + 0x60);
    edi = ebx;
    esi = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F363; /* je: equal / zero */

loc_0002F30A: ;
    /* nop */

loc_0002F310: ;
    eax = esi + esi * 2;
    edx = ecx + eax * 8 + 0x64;
    ebp = MEM32(edx);
    eax = edi + edi * 2;
    eax = ecx + eax * 8 + 0x64;
    MEM32(eax) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(eax + 8) = ebp;
    ebp = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = ebp;
    ebp = MEM32(edx + 0x10);
    MEM32(eax + 0x10) = ebp;
    edx = MEM32(edx + 0x14);
    MEM32(eax + 0x14) = edx;
    eax = edi + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    eax = esi + 1;
    esi = 0xA;
    edi = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = MEM32(ecx + 0x60);
    esi = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F310; /* jne: not equal / not zero */

loc_0002F363: ;
    eax = MEM32(ecx + 0x60);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x60) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0002F392; /* jne: not equal / not zero */

loc_0002F37D: ;
    eax = MEM32(ecx + 0x58);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(ecx + 0x58) = edx;
    goto loc_0002F392;

loc_0002F38C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    ebx = edx;

loc_0002F392: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x60) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F2D3; /* jne: not equal / not zero */

loc_0002F39B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0002F39E: ;
    eax = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x60) (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0002F3B7; /* jne: not equal / not zero */

loc_0002F3A7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x5C) = 0;
    MEM32(ecx + 0x60) = eax;
    MEM32(ecx + 0x58) = eax;

loc_0002F3B7: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F3C0
 * Original: 0x0002F3C0 - 0x0002F450 (144 bytes, 35 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F3C0: ;
    edx = 0x758550;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(0x75853C) = 1;
    MEM32(0x758538) = 1;
    MEM32(0x75854C) = 0;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0002F3E8: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F3E8; /* jne: not equal / not zero */

loc_0002F3F2: ;
    eax = MEM32(esp + 8);
    MEM32(0x758548) = eax;
    eax = MEM32(0x44A9D8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x758544) = esi;
    MEM32(0x758590) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002F422; /* je: equal / zero */

loc_0002F418: ;
    MEM32(0x758548) = 1;

loc_0002F422: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F449; /* je: equal / zero */

loc_0002F42B: ;
    eax = MEM32(0x440B20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F449; /* jne: not equal / not zero */

loc_0002F434: ;
    esi = MEM32(0x451B4C);
    MEM32(esi + 0x404C) = 0;
    PUSH32(esp, 0x0002F449u); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_0002F449: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034450
 * Original: 0x00034450 - 0x00034452 (2 bytes, 2 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034450(void)
{

loc_00034450: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034460
 * Original: 0x00034460 - 0x0003446E (14 bytes, 6 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034460(void)
{

loc_00034460: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003446Du); RECOMP_ABI_CALL(0x003371ECu, sub_003371EC); /* call 0x003371EC */

loc_0003446D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00034470
 * Original: 0x00034470 - 0x00034599 (297 bytes, 129 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034470: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00034497; /* jne: not equal / not zero */

loc_00034483: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003448Du); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_0003448D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00034497: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000344C2; /* jne: not equal / not zero */

loc_000344A2: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003457E; /* jae: above or equal (unsigned >=) */

loc_000344AD: ;
    PUSH32(esp, ebx);

loc_000344AE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000344B7u); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_000344B7: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000344C2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000344E9; /* jne: not equal / not zero */

loc_000344C6: ;
    eax = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003457E; /* jae: above or equal (unsigned >=) */

loc_000344D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000344DEu); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_000344DE: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000344E9: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00034527; /* jae: above or equal (unsigned >=) */

loc_000344F0: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x000344FDu); RECOMP_ABI_CALL(0x000CEA70u, sub_000CEA70); /* call 0x000CEA70 */

loc_000344FD: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00034527; /* jae: above or equal (unsigned >=) */

loc_00034508: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000344AE; /* je: equal / zero */

loc_00034513: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003451Cu); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_0003451C: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00034527: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003457E; /* jae: above or equal (unsigned >=) */

loc_0003452E: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x0003453Bu); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_0003453B: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003454B; /* je: equal / zero */

loc_00034544: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003457E; /* jae: above or equal (unsigned >=) */

loc_0003454B: ;
    edx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0003456A; /* je: equal / zero */

loc_00034556: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003455Fu); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_0003455F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0003456A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00034573u); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_00034573: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0003457E: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x0003458Au); RECOMP_ABI_CALL(0x000F8D50u, sub_000F8D50); /* call 0x000F8D50 */

loc_0003458A: ;
    ecx = MEM32(eax);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(esi) = ecx;
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0003459C
 * Original: 0x0003459C - 0x000345A0 (4 bytes, 4 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003459C(void)
{

loc_0003459C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000348F0
 * Original: 0x000348F0 - 0x00034905 (21 bytes, 8 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000348F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000348F0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034902; /* je: equal / zero */

loc_000348F8: ;
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00034902: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00034910
 * Original: 0x00034910 - 0x00034925 (21 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034910: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    esi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034922; /* je: equal / zero */

loc_0003491B: ;
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

loc_00034922: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00092B80
 * Original: 0x00092B80 - 0x00092B87 (7 bytes, 2 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092B80(void)
{

loc_00092B80: ;
    MEM32(ecx) = 0x41FA2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00092B90
 * Original: 0x00092B90 - 0x00092BBC (44 bytes, 16 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092B90: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41FA2C;
    if (TEST_Z(_fa, _fb)) goto loc_00092BB6; /* je: equal / zero */

loc_00092BA0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092BAE; /* jne: not equal / not zero */

loc_00092BA9: ;
    PUSH32(esp, 0x00092BAEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00092BAE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00092BB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092BB3u); } /* indirect call */
    }

loc_00092BB6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098C90
 * Original: 0x00098C90 - 0x00098D38 (168 bytes, 54 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098C90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368E76);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x18) = 1;
    eax = MEM32(0x758634);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098CC3u); RECOMP_ABI_CALL(0x00095B50u, sub_00095B50); /* call 0x00095B50 */

loc_00098CC3: ;
    ebx = esi + 0x34;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x00098CD0u); RECOMP_ABI_CALL(0x00032470u, sub_00032470); /* call 0x00032470 */

loc_00098CD0: ;
    edi = MEM32(ebx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098CED; /* je: equal / zero */

loc_00098CD7: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098CE5; /* jne: not equal / not zero */

loc_00098CE0: ;
    PUSH32(esp, 0x00098CE5u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00098CE5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00098CEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098CEAu); } /* indirect call */
    }

loc_00098CED: ;
    MEM32(ebx + 4) = 0;
    ebx = esi + 0x28;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00098D04u); RECOMP_ABI_CALL(0x00032470u, sub_00032470); /* call 0x00032470 */

loc_00098D04: ;
    esi = MEM32(ebx + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098D23; /* je: equal / zero */

loc_00098D0D: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098D1B; /* jne: not equal / not zero */

loc_00098D16: ;
    PUSH32(esp, 0x00098D1Bu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00098D1B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00098D23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098D20u); } /* indirect call */
    }

loc_00098D23: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 4) = edi;
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
 * sub_00098E7C
 * Original: 0x00098E7C - 0x00098EB0 (52 bytes, 43 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098E7C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098E7C: ;
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(6) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 6);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xCCCCCCCCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xCCCCCCCCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00098EA0
 * Original: 0x00098EA0 - 0x00098EB0 (16 bytes, 12 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098EA0(void)
{

loc_00098EA0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A8B0
 * Original: 0x0009A8B0 - 0x0009A9D9 (297 bytes, 129 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A8B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0009A8D7; /* jne: not equal / not zero */

loc_0009A8C3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A8CDu); RECOMP_ABI_CALL(0x000D6790u, sub_000D6790); /* call 0x000D6790 */

loc_0009A8CD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009A8D7: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A902; /* jne: not equal / not zero */

loc_0009A8E2: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009A9BE; /* jae: above or equal (unsigned >=) */

loc_0009A8ED: ;
    PUSH32(esp, ebx);

loc_0009A8EE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A8F7u); RECOMP_ABI_CALL(0x000D6790u, sub_000D6790); /* call 0x000D6790 */

loc_0009A8F7: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009A902: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A929; /* jne: not equal / not zero */

loc_0009A906: ;
    eax = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009A9BE; /* jae: above or equal (unsigned >=) */

loc_0009A914: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A91Eu); RECOMP_ABI_CALL(0x000D6790u, sub_000D6790); /* call 0x000D6790 */

loc_0009A91E: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009A929: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009A967; /* jae: above or equal (unsigned >=) */

loc_0009A930: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x0009A93Du); RECOMP_ABI_CALL(0x000CEA70u, sub_000CEA70); /* call 0x000CEA70 */

loc_0009A93D: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009A967; /* jae: above or equal (unsigned >=) */

loc_0009A948: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0009A8EE; /* je: equal / zero */

loc_0009A953: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A95Cu); RECOMP_ABI_CALL(0x000D6790u, sub_000D6790); /* call 0x000D6790 */

loc_0009A95C: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009A967: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009A9BE; /* jae: above or equal (unsigned >=) */

loc_0009A96E: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x0009A97Bu); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_0009A97B: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A98B; /* je: equal / zero */

loc_0009A984: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009A9BE; /* jae: above or equal (unsigned >=) */

loc_0009A98B: ;
    edx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0009A9AA; /* je: equal / zero */

loc_0009A996: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A99Fu); RECOMP_ABI_CALL(0x000D6790u, sub_000D6790); /* call 0x000D6790 */

loc_0009A99F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009A9AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A9B3u); RECOMP_ABI_CALL(0x000D6790u, sub_000D6790); /* call 0x000D6790 */

loc_0009A9B3: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009A9BE: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x0009A9CAu); RECOMP_ABI_CALL(0x000CB230u, sub_000CB230); /* call 0x000CB230 */

loc_0009A9CA: ;
    ecx = MEM32(eax);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(esi) = ecx;
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A9E0
 * Original: 0x0009A9E0 - 0x0009AA5A (122 bytes, 48 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A9E0: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0009AA2B; /* jne: not equal / not zero */

loc_0009A9F5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009AA2B; /* jne: not equal / not zero */

loc_0009A9F9: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009AA04u); RECOMP_ABI_CALL(0x0009ADB0u, sub_0009ADB0); /* call 0x0009ADB0 */

loc_0009AA04: ;
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

loc_0009AA2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AA50; /* je: equal / zero */

loc_0009AA2F: ;
    PUSH32(esp, edi);

loc_0009AA30: ;
    edx = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x0009AA3Bu); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_0009AA3B: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009AA47u); RECOMP_ABI_CALL(0x0009AA90u, sub_0009AA90); /* call 0x0009AA90 */

loc_0009AA47: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009AA30; /* jne: not equal / not zero */

loc_0009AA4F: ;
    POP32(esp, edi);

loc_0009AA50: ;
    MEM32(ebp) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0009AA60
 * Original: 0x0009AA60 - 0x0009AA8D (45 bytes, 19 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009AA60: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009AA8A; /* jne: not equal / not zero */

loc_0009AA6D: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    PUSH32(esp, ebx);

loc_0009AA74: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009AA7E; /* jae: above or equal (unsigned >=) */

loc_0009AA79: ;
    ecx = MEM32(ecx + 8);
    goto loc_0009AA82;

loc_0009AA7E: ;
    eax = ecx;
    ecx = MEM32(ecx);

loc_0009AA82: ;
    SET_LO8(ebx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AA74; /* je: equal / zero */

loc_0009AA89: ;
    POP32(esp, ebx);

loc_0009AA8A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009ADB0
 * Original: 0x0009ADB0 - 0x0009ADE7 (55 bytes, 25 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ADB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009ADB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0009ADE1; /* jne: not equal / not zero */

loc_0009ADC2: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0009ADCDu); RECOMP_ABI_CALL(0x0009ADB0u, sub_0009ADB0); /* call 0x0009ADB0 */

loc_0009ADCD: ;
    esi = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009ADD5u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0009ADD5: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009ADC2; /* je: equal / zero */

loc_0009ADE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009ADF0
 * Original: 0x0009ADF0 - 0x0009AEE8 (248 bytes, 97 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ADF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009ADF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7596A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0009AE48; /* je: equal / zero */

loc_0009ADFF: ;
    /* nop */

loc_0009AE00: ;
    eax = ebp;
    eax = MEM32(eax + 8);
    ebp = MEM32(ebp);
    esi = eax + 0xC;
    edi = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0009AE10: ;
    SET_LO8(edx, MEM8(edi + esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x41 (8-bit) */
    SET_LO8(ecx, MEM8(esi));
    if (CMP_L(_fas, _fbs)) goto loc_0009AE22; /* jl: less (signed <) */

loc_0009AE1A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0009AE22; /* jg: greater (signed >) */

loc_0009AE1F: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x20);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0009AE22: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009AE2F; /* jl: less (signed <) */

loc_0009AE27: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0009AE2F; /* jg: greater (signed >) */

loc_0009AE2C: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0009AE2F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009AE3A; /* jne: not equal / not zero */

loc_0009AE33: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AE3A; /* je: equal / zero */

loc_0009AE37: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0009AE10;

loc_0009AE3A: ;
    ecx = SX8(LO8(ecx));
    edx = SX8(LO8(edx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0009AE91; /* je: equal / zero */

loc_0009AE44: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009AE00; /* jne: not equal / not zero */

loc_0009AE48: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AE8F; /* je: equal / zero */

loc_0009AE50: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009AE5E; /* jne: not equal / not zero */

loc_0009AE59: ;
    PUSH32(esp, 0x0009AE5Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009AE5E: ;
    edx = 0x30;
    ecx = eax;
    PUSH32(esp, 0x0009AE6Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0009AE6A: ;
    esi = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0009AE96; /* jne: not equal / not zero */

loc_0009AE76: ;
    _fa = (uint32_t)(MEM32(0x758998)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758998), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AE8F; /* je: equal / zero */

loc_0009AE7E: ;
    eax = MEM32(0x7587F4);
    PUSH32(esp, eax);
    MEM32(0x7587F8) = ebp;
    PUSH32(esp, 0x0009AE8Fu); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_0009AE8F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009AE91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0009AE96: ;
    PUSH32(esp, 0xB);
    edi = esi + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM8(edi + 0xA) = 0;
    PUSH32(esp, 0x0009AEA6u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_0009AEA6: ;
    SET_LO8(eax, MEM8(edi + 0xA));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AEB4; /* je: equal / zero */

loc_0009AEB0: ;
    MEM8(edi + 0xA) = 0;

loc_0009AEB4: ;
    MEM32(esi) = ebp;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 0x2C) = 8;
    MEM32(esi + 0x18) = ebp;
    MEM32(esi + 0x28) = ebp;
    ecx = esp + 0xC;
    MEM32(esi + 0x20) = ebp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x24) = ebp;
    ecx = 0x7596A0;
    MEM32(esi + 0x1C) = ebp;
    PUSH32(esp, 0x0009AEE1u); RECOMP_ABI_CALL(0x0009CFC0u, sub_0009CFC0); /* call 0x0009CFC0 */

loc_0009AEE1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0009AEF0
 * Original: 0x0009AEF0 - 0x0009AF33 (67 bytes, 32 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009AEF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x46B1C8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x46B1C4);
    if (CMP_LE(_fas, _fbs)) goto loc_0009AF25; /* jle: less or equal (signed <=) */

loc_0009AF0A: ;
    /* nop */

loc_0009AF10: ;
    eax = edi;
    edx = ebp;
    PUSH32(esp, 0x0009AF19u); RECOMP_ABI_CALL(0x000AD500u, sub_000AD500); /* call 0x000AD500 */

loc_0009AF19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009AF2C; /* je: equal / zero */

loc_0009AF1D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009AF10; /* jl: less (signed <) */

loc_0009AF25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009AF2C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9E40
 * Original: 0x000C9E40 - 0x000C9E5F (31 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C9E40: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C9E52; /* jne: not equal / not zero */

loc_000C9E47: ;
    MEM32(esp + 4) = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000C9CF0(); return; /* tail jmp 0x000C9CF0 */

loc_000C9E52: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x000C9E5Bu); RECOMP_ABI_CALL(0x000C9C00u, sub_000C9C00); /* call 0x000C9C00 */

loc_000C9E5B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C9E60
 * Original: 0x000C9E60 - 0x000C9E7F (31 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9E60: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x427014;
    if (TEST_Z(_fa, _fb)) goto loc_000C9E79; /* je: equal / zero */

loc_000C9E70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C9E76u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000C9E76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9E79: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C9E80
 * Original: 0x000C9E80 - 0x000C9E93 (19 bytes, 4 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9E80(void)
{

loc_000C9E80: ;
    MEM32(eax) = 0x427024;
    MEM32(eax + 4) = 0;
    MEM32(0x46DDE0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000C9EA0
 * Original: 0x000C9EA0 - 0x000C9EBE (30 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C9EA8u); RECOMP_ABI_CALL(0x000C9EC0u, sub_000C9EC0); /* call 0x000C9EC0 */

loc_000C9EA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C9EB8; /* je: equal / zero */

loc_000C9EAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C9EB5u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000C9EB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C9EB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C9EC0
 * Original: 0x000C9EC0 - 0x000C9EE5 (37 bytes, 12 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x427024;
    if (CMP_EQ(_fa, _fb)) goto loc_000C9EDD; /* je: equal / zero */

loc_000C9ED0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C9ED6u); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_000C9ED6: ;
    MEM32(esi + 4) = 0;

loc_000C9EDD: ;
    MEM32(esi) = 0x427014;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9EF0
 * Original: 0x000C9EF0 - 0x000C9EFC (12 bytes, 3 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9EF0(void)
{

loc_000C9EF0: ;
    eax = MEM32(0x758E34);
    eax = MEM32(eax + 0xA4);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9F00
 * Original: 0x000C9F00 - 0x000C9F0C (12 bytes, 3 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9F00(void)
{

loc_000C9F00: ;
    eax = MEM32(0x758E34);
    eax = MEM32(eax + 0xA8);
    esp += 4; return; /* ret */

}

/**
 * sub_000C9F10
 * Original: 0x000C9F10 - 0x000CA31A (1034 bytes, 290 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C9F10(void)
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

loc_000C9F10: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x7659C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000C9FE6; /* jne: not equal / not zero */

loc_000C9F2A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x000C9F43u); RECOMP_ABI_CALL(0x00378CE0u, sub_00378CE0); /* call 0x00378CE0 */

loc_000C9F43: ;
    PUSH32(esp, 0);
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C9F5Au); RECOMP_ABI_CALL(0x00378E00u, sub_00378E00); /* call 0x00378E00 */

loc_000C9F5A: ;
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x000C9F64u); RECOMP_ABI_CALL(0x00346DF4u, sub_00346DF4); /* call 0x00346DF4 */

loc_000C9F64: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x436BE0;
    edx = ebp;
    MEM32(esp + 0x10) = 0x50;
    goto loc_000C9F80;

    /* nop */

loc_000C9F80: ;
    esi = ebx;
    edi = edx;
    ecx = 0x34;
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0xD0;
    ecx = 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xD0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000C9F80; /* jne: not equal / not zero */

loc_000C9FB1: ;
    PUSH32(esp, 1);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    edi = edx;
    PUSH32(esp, 0x100);
    ecx = 0xC00;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C9FD6u); RECOMP_ABI_CALL(0x003C50E8u, sub_003C50E8); /* call 0x003C50E8 */

loc_000C9FD6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000C9FDCu); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000C9FDC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x7659C0) = 1;

loc_000C9FE6: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x2C); /* cvtsi2ss */
    xmm2 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x30); /* cvtsi2ss */
    eax = MEM32(esp + 0x34);
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x429398); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x429528); /* addss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ecx = eax + 1;

loc_000CA031: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA031; /* jne: not equal / not zero */

loc_000CA038: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000CA04F; /* jge: greater or equal (signed >=) */

loc_000CA049: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_000CA04F: ;
    ecx = MEM32(esp + 0x40);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx * 4 + 0x441B10);
    eax = MEM32(esp + 0x44);
    ebx = MEM32(eax * 4 + 0x441B10);
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x000CA074u); RECOMP_ABI_CALL(0x0036DDC0u, sub_0036DDC0); /* call 0x0036DDC0 */

loc_000CA074: ;
    edi = MEM32(0x37B1A8);
    PUSH32(esp, 0);
    edi = edi | 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    MEM32(0x37B1A8) = edi;
    MEM32(0x37B1DC) = 4;
    PUSH32(esp, 0x000CA096u); RECOMP_ABI_CALL(0x0036AC30u, sub_0036AC30); /* call 0x0036AC30 */

loc_000CA096: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000CA0A1u); RECOMP_ABI_CALL(0x0036EC50u, sub_0036EC50); /* call 0x0036EC50 */

loc_000CA0A1: ;
    PUSH32(esp, 0x44);
    MEM32(0x765448) = 6;
    PUSH32(esp, 0x000CA0B2u); RECOMP_ABI_CALL(0x0036F000u, sub_0036F000); /* call 0x0036F000 */

loc_000CA0B2: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000CA0BEu); RECOMP_ABI_CALL(0x00375E50u, sub_00375E50); /* call 0x00375E50 */

loc_000CA0BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x441850;
    PUSH32(esp, 0x000CA0CEu); RECOMP_ABI_CALL(0x000D1910u, sub_000D1910); /* call 0x000D1910 */

loc_000CA0CE: ;
    PUSH32(esp, 0x800);
    PUSH32(esp, 0x000CA0D8u); RECOMP_ABI_CALL(0x000D1AC0u, sub_000D1AC0); /* call 0x000D1AC0 */

loc_000CA0D8: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x000CA0DFu); RECOMP_ABI_CALL(0x00375EA0u, sub_00375EA0); /* call 0x00375EA0 */

loc_000CA0DF: ;
    ebp = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000CA0FAu); RECOMP_ABI_CALL(0x00375DF0u, sub_00375DF0); /* call 0x00375DF0 */

loc_000CA0FA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x48);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000CA123u); RECOMP_ABI_CALL(0x00375DF0u, sub_00375DF0); /* call 0x00375DF0 */

loc_000CA123: ;
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000CA13Au); RECOMP_ABI_CALL(0x00375DF0u, sub_00375DF0); /* call 0x00375DF0 */

loc_000CA13A: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000CA14Du); RECOMP_ABI_CALL(0x00375DF0u, sub_00375DF0); /* call 0x00375DF0 */

loc_000CA14D: ;
    PUSH32(esp, 0x000CA152u); RECOMP_ABI_CALL(0x00375EE0u, sub_00375EE0); /* call 0x00375EE0 */

loc_000CA152: ;
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x441850;
    PUSH32(esp, 0x000CA166u); RECOMP_ABI_CALL(0x000D1910u, sub_000D1910); /* call 0x000D1910 */

loc_000CA166: ;
    PUSH32(esp, 0x800);
    PUSH32(esp, 0x000CA170u); RECOMP_ABI_CALL(0x000D1AC0u, sub_000D1AC0); /* call 0x000D1AC0 */

loc_000CA170: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000CA17Fu); RECOMP_ABI_CALL(0x0036AC30u, sub_0036AC30); /* call 0x0036AC30 */

loc_000CA17F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000CA18Au); RECOMP_ABI_CALL(0x0036EC50u, sub_0036EC50); /* call 0x0036EC50 */

loc_000CA18A: ;
    PUSH32(esp, 0x144);
    MEM32(0x765448) = 6;
    PUSH32(esp, 0x000CA19Eu); RECOMP_ABI_CALL(0x0036F000u, sub_0036F000); /* call 0x0036F000 */

loc_000CA19E: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000CA1AAu); RECOMP_ABI_CALL(0x00375E50u, sub_00375E50); /* call 0x00375E50 */

loc_000CA1AA: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x000CA1B1u); RECOMP_ABI_CALL(0x00375EA0u, sub_00375EA0); /* call 0x00375EA0 */

loc_000CA1B1: ;
    eax = MEM32(esp + 0x34);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax + 1;
    /* nop */

loc_000CA1C0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA1C0; /* jne: not equal / not zero */

loc_000CA1C7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x40) = eax;
    if ((_fa == 0)) goto loc_000CA2E1; /* je: equal / zero */

loc_000CA1D3: ;
    goto loc_000CA1E0;

loc_000CA1D5: ;
    edi = MEM32(esp + 0x10);
    /* nop */

loc_000CA1E0: ;
    edx = MEM32(esp + 0x34);
    esi = (uint32_t)(int32_t)SMEM8(ebx + edx);
    eax = MEM32(esi * 4 + 0x4367E0);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000CA1FDu); RECOMP_ABI_CALL(0x00375DB0u, sub_00375DB0); /* call 0x00375DB0 */

loc_000CA1FD: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000CA210u); RECOMP_ABI_CALL(0x00375DF0u, sub_00375DF0); /* call 0x00375DF0 */

loc_000CA210: ;
    eax = MEM32(esi * 4 + 0x4367E0);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000CA226u); RECOMP_ABI_CALL(0x00375DB0u, sub_00375DB0); /* call 0x00375DB0 */

loc_000CA226: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000CA23Du); RECOMP_ABI_CALL(0x00375DF0u, sub_00375DF0); /* call 0x00375DF0 */

loc_000CA23D: ;
    eax = MEM32(esi * 4 + 0x4367E0);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000CA253u); RECOMP_ABI_CALL(0x00375DB0u, sub_00375DB0); /* call 0x00375DB0 */

loc_000CA253: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000CA26Eu); RECOMP_ABI_CALL(0x00375DF0u, sub_00375DF0); /* call 0x00375DF0 */

loc_000CA26E: ;
    esi = MEM32(esi * 4 + 0x4367E0);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000CA284u); RECOMP_ABI_CALL(0x00375DB0u, sub_00375DB0); /* call 0x00375DB0 */

loc_000CA284: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000CA29Bu); RECOMP_ABI_CALL(0x00375DF0u, sub_00375DF0); /* call 0x00375DF0 */

loc_000CA29B: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429398)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax + 1;
    goto loc_000CA2D0;

    /* nop */

loc_000CA2D0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA2D0; /* jne: not equal / not zero */

loc_000CA2D7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000CA1D5; /* jb: below (unsigned <) */

loc_000CA2E1: ;
    PUSH32(esp, 0x000CA2E6u); RECOMP_ABI_CALL(0x00375EE0u, sub_00375EE0); /* call 0x00375EE0 */

loc_000CA2E6: ;
    ecx = MEM32(0x37B1A8);
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    MEM32(0x37B1A8) = ecx;
    MEM32(0x37B1DC) = 0;
    PUSH32(esp, 0x000CA306u); RECOMP_ABI_CALL(0x0036DDC0u, sub_0036DDC0); /* call 0x0036DDC0 */

loc_000CA306: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x440BA4) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CA320
 * Original: 0x000CA320 - 0x000CA32C (12 bytes, 5 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA320(void)
{

loc_000CA320: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x000CA32Au); RECOMP_ABI_CALL(0x000CA330u, sub_000CA330); /* call 0x000CA330 */

loc_000CA32A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA330
 * Original: 0x000CA330 - 0x000CA41E (238 bytes, 75 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA330: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000CA391; /* jne: not equal / not zero */

loc_000CA33B: ;
    esi = 1;

loc_000CA340: ;
    _fa = (uint32_t)(MEM32(edi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x68), ebx (32-bit) */
    eax = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CA352; /* je: equal / zero */

loc_000CA347: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA386; /* je: equal / zero */

loc_000CA34B: ;
    PUSH32(esp, 0x000CA350u); RECOMP_ABI_CALL(0x0002F540u, sub_0002F540); /* call 0x0002F540 */

loc_000CA350: ;
    goto loc_000CA386;

loc_000CA352: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA35B; /* je: equal / zero */

loc_000CA356: ;
    PUSH32(esp, 0x000CA35Bu); RECOMP_ABI_CALL(0x0002F540u, sub_0002F540); /* call 0x0002F540 */

loc_000CA35B: ;
    _fa = (uint32_t)(MEM32(edi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x5C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA386; /* je: equal / zero */

loc_000CA360: ;
    _fa = (uint32_t)(MEM32(0x758538)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758538), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA386; /* jne: not equal / not zero */

loc_000CA368: ;
    eax = MEM32(edi + 0x70);
    MEM32(0x44AA1C) = eax;
    PUSH32(esp, ebx);
    ecx = esi;
    eax = 0x42708C;
    MEM32(edi + 0x5C) = ebx;
    MEM32(edi + 0x60) = esi;
    PUSH32(esp, 0x000CA383u); RECOMP_ABI_CALL(0x0002F3C0u, sub_0002F3C0); /* call 0x0002F3C0 */

loc_000CA383: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CA386: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CA38Cu); RECOMP_ABI_CALL(0x003373CCu, sub_003373CC); /* call 0x003373CC */

loc_000CA38C: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA340; /* je: equal / zero */

loc_000CA391: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA3AF; /* je: equal / zero */

loc_000CA396: ;
    _fa = (uint32_t)(MEM32(0x758BBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758BBC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA3AF; /* je: equal / zero */

loc_000CA39E: ;
    esi = MEM32(0x451B4C);
    MEM32(esi + 0x404C) = ebx;
    PUSH32(esp, 0x000CA3AFu); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_000CA3AF: ;
    _fa = (uint32_t)(MEM32(edi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x68), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA41B; /* jne: not equal / not zero */

loc_000CA3B4: ;
    _fa = (uint32_t)(MEM32(0x758538)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758538), ebx (32-bit) */
    MEM32(0x758544) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000CA3D3; /* je: equal / zero */

loc_000CA3C2: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA3CB; /* je: equal / zero */

loc_000CA3C6: ;
    PUSH32(esp, 0x000CA3CBu); RECOMP_ABI_CALL(0x0002F540u, sub_0002F540); /* call 0x0002F540 */

loc_000CA3CB: ;
    _fa = (uint32_t)(MEM32(0x758538)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758538), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA3C2; /* jne: not equal / not zero */

loc_000CA3D3: ;
    ecx = MEM32(edi + 0x74);
    MEM32(0x44AA1C) = ecx;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x427080;
    MEM32(edi + 0x60) = ebx;
    MEM8(0x7584FC) = LO8(ebx);
    PUSH32(esp, 0x000CA3F2u); RECOMP_ABI_CALL(0x0002F3C0u, sub_0002F3C0); /* call 0x0002F3C0 */

loc_000CA3F2: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA400; /* je: equal / zero */

loc_000CA3FB: ;
    PUSH32(esp, 0x000CA400u); RECOMP_ABI_CALL(0x0002F540u, sub_0002F540); /* call 0x0002F540 */

loc_000CA400: ;
    _fa = (uint32_t)(MEM32(0x758538)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758538), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA419; /* je: equal / zero */

loc_000CA408: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA411; /* je: equal / zero */

loc_000CA40C: ;
    PUSH32(esp, 0x000CA411u); RECOMP_ABI_CALL(0x0002F540u, sub_0002F540); /* call 0x0002F540 */

loc_000CA411: ;
    _fa = (uint32_t)(MEM32(0x758538)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758538), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA408; /* jne: not equal / not zero */

loc_000CA419: ;
    MEM32(edi) = ebx;

loc_000CA41B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA420
 * Original: 0x000CA420 - 0x000CA45C (60 bytes, 18 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA420: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = 0x103;
    MEM32(esi + 0x14) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000CA453; /* je: equal / zero */

loc_000CA436: ;
    ecx = MEM32(esi + 0xC);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CA443u); RECOMP_ABI_CALL(0x00331D1Eu, sub_00331D1E); /* call 0x00331D1E */

loc_000CA443: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000CA44Au); RECOMP_ABI_CALL(0x003373CCu, sub_003373CC); /* call 0x003373CC */

loc_000CA44A: ;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp), 0x103 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA436; /* je: equal / zero */

loc_000CA453: ;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CA460
 * Original: 0x000CA460 - 0x000CA546 (230 bytes, 71 insns)
 * Folder: unsorted (none)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA460: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000CA472u); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_000CA472: ;
    eax = MEM32(eax);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax);
    ebx = 1;
    MEM32(esi) = ebx;
    MEM8(0x7584FE) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000CA4BE; /* je: equal / zero */

loc_000CA48A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), HI8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CA4BE; /* jne: not equal / not zero */

loc_000CA48E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_000CA4BE; /* js: sign (negative) */

loc_000CA492: ;
    ecx = MEM32(esi + 0x6C);
    MEM32(0x44AA1C) = ecx;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x427074;
    MEM8(0x7584FC) = LO8(ebx);
    PUSH32(esp, 0x000CA4AFu); RECOMP_ABI_CALL(0x0002F3C0u, sub_0002F3C0); /* call 0x0002F3C0 */

loc_000CA4AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 8) = 0;
    goto loc_000CA50E;

loc_000CA4BE: ;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 8) = 0;
    edx = MEM32(0x758F24);
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, 0x427064);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CA4DEu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000CA4DE: ;
    PUSH32(esp, 0);
    ecx = ebx;
    eax = esp + 0x14;
    PUSH32(esp, 0x000CA4EBu); RECOMP_ABI_CALL(0x0002F3C0u, sub_0002F3C0); /* call 0x0002F3C0 */

loc_000CA4EB: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA4F9; /* je: equal / zero */

loc_000CA4F4: ;
    PUSH32(esp, 0x000CA4F9u); RECOMP_ABI_CALL(0x0002F540u, sub_0002F540); /* call 0x0002F540 */

loc_000CA4F9: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA50E; /* je: equal / zero */

loc_000CA500: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CA50E; /* jne: not equal / not zero */

loc_000CA507: ;
    ebx = esi;
    PUSH32(esp, 0x000CA50Eu); RECOMP_ABI_CALL(0x000CA600u, sub_000CA600); /* call 0x000CA600 */

loc_000CA50E: ;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA320);
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0);
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x000CA52Du); RECOMP_ABI_CALL(0x00331E99u, sub_00331E99); /* call 0x00331E99 */

loc_000CA52D: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000CA538u); RECOMP_ABI_CALL(0x00331C3Eu, sub_00331C3E); /* call 0x00331C3E */

loc_000CA538: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, ebx);
    PUSH32(esp, 0x000CA542u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000CA542: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CA550
 * Original: 0x000CA550 - 0x000CA59D (77 bytes, 22 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CA550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CA550: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA59B; /* je: equal / zero */

loc_000CA558: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA582; /* je: equal / zero */

loc_000CA55F: ;
    PUSH32(esp, 0x000CA564u); RECOMP_ABI_CALL(0x000CA420u, sub_000CA420); /* call 0x000CA420 */

loc_000CA564: ;
    PUSH32(esp, 0x000CA569u); RECOMP_ABI_CALL(0x0001ED10u, sub_0001ED10); /* call 0x0001ED10 */

loc_000CA569: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CA58E; /* je: equal / zero */

loc_000CA56E: ;
    PUSH32(esp, 0x000CA573u); RECOMP_ABI_CALL(0x0002F540u, sub_0002F540); /* call 0x0002F540 */

loc_000CA573: ;
    MEM32(esi) = 0;
    MEM8(0x7584FE) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000CA582: ;
    PUSH32(esp, 0x000CA587u); RECOMP_ABI_CALL(0x000CA420u, sub_000CA420); /* call 0x000CA420 */

loc_000CA587: ;
    MEM32(esi + 0x68) = 1;

loc_000CA58E: ;
    MEM8(0x7584FE) = 0;
    MEM32(esi) = 0;

loc_000CA59B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D69B0
 * Original: 0x000D69B0 - 0x000D6A58 (168 bytes, 44 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D69B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D69B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    ecx = 0x11;
    edi = esi + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 1;
    edi = 2;
    MEM32(esi + 0x18) = 6;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = 0x2A;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x38) = 0x100;
    MEM32(esi + 0x40) = edi;
    PUSH32(esp, 0x000D6A09u); RECOMP_ABI_CALL(0x00351695u, sub_00351695); /* call 0x00351695 */

loc_000D6A09: ;
    ebx = eax;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6A14; /* je: equal / zero */

loc_000D6A10: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) | 0x40;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000D6A14: ;
    PUSH32(esp, 0x000D6A19u); RECOMP_ABI_CALL(0x003516DEu, sub_003516DE); /* call 0x003516DE */

loc_000D6A19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x429370)); /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_000D6A42; /* jbe: below or equal (unsigned <=) */

loc_000D6A25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000D6A3D; /* jbe: below or equal (unsigned <=) */

loc_000D6A29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6A42; /* jne: not equal / not zero */

loc_000D6A2E: ;
    xmm1 = XMM_SCALAR(MEMF(0x429380)); /* movss */
    MEMF(esi + 0x54) = xmm1.f[0]; /* movss */
    goto loc_000D6A42;

loc_000D6A3D: ;
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */

loc_000D6A42: ;
    POP32(esp, edi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    POP32(esp, ebx);
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000D6A57; /* je: equal / zero */

loc_000D6A4B: ;
    MEM32(esi + 0x3C) = 0x3C;
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */

loc_000D6A57: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6A60
 * Original: 0x000D6A60 - 0x000D6DDA (890 bytes, 218 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6A60(void)
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

loc_000D6A60: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0xA4);
    PUSH32(esp, edi);
    edi = esi + 0x10;
    MEM32(edi) = ecx;
    edx = MEM32(eax + 0xA8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    MEM32(esi + 0x14) = edx;
    PUSH32(esp, 0x000D6A84u); RECOMP_ABI_CALL(0x00379080u, sub_00379080); /* call 0x00379080 */

loc_000D6A84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AB1; /* je: equal / zero */

loc_000D6A8A: ;
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0x100000);
    PUSH32(esp, 0x000D6A99u); RECOMP_ABI_CALL(0x00379090u, sub_00379090); /* call 0x00379090 */

loc_000D6A99: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebp);
    edi = 1;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D6AADu); RECOMP_ABI_CALL(0x003790B0u, sub_003790B0); /* call 0x003790B0 */

loc_000D6AAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D6ABD; /* jge: greater or equal (signed >=) */

loc_000D6AB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x80004005u;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D6ABD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x000D6AC5u); RECOMP_ABI_CALL(0x0036ED90u, sub_0036ED90); /* call 0x0036ED90 */

loc_000D6AC5: ;
    PUSH32(esp, 0x000D6ACAu); RECOMP_ABI_CALL(0x0036A9B0u, sub_0036A9B0); /* call 0x0036A9B0 */

loc_000D6ACA: ;
    PUSH32(esp, ebp);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000D6AD3u); RECOMP_ABI_CALL(0x0036A610u, sub_0036A610); /* call 0x0036A610 */

loc_000D6AD3: ;
    ebx = MEM32(0x37B1A8);
    MEM32(esi + 8) = eax;
    ebx = ebx | 0x1200;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edi;
    ecx = 0x40310;
    MEM32(0x37B1A8) = ebx;
    MEM32(0x37B548) = ebp;
    PUSH32(esp, 0x000D6AFAu); RECOMP_ABI_CALL(0x0036CB70u, sub_0036CB70); /* call 0x0036CB70 */

loc_000D6AFA: ;
    PUSH32(esp, 0x901);
    MEM32(0x37B4B4) = edi;
    PUSH32(esp, 0x000D6B0Au); RECOMP_ABI_CALL(0x0036CFB0u, sub_0036CFB0); /* call 0x0036CFB0 */

loc_000D6B0A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D6B10u); RECOMP_ABI_CALL(0x0036CF40u, sub_0036CF40); /* call 0x0036CF40 */

loc_000D6B10: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0x000D6B1Fu); RECOMP_ABI_CALL(0x0036CB70u, sub_0036CB70); /* call 0x0036CB70 */

loc_000D6B1F: ;
    ecx = MEM32(0x37B1A8);
    eax = 2;
    ecx = ecx | 0x801;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x46E1A0);
    MEM32(0x37B494) = 0x203;
    MEM32(0x37B1C4) = ebp;
    MEM32(0x37B1E0) = 5;
    MEM32(0x37B1E8) = eax;
    MEM32(0x37B1EC) = ebp;
    MEM32(0x37B260) = edi;
    MEM32(0x37B1F0) = 4;
    MEM32(0x37B1F8) = eax;
    MEM32(0x37B1A8) = ecx;
    MEM32(0x37B1FC) = ebp;
    PUSH32(esp, 0x000D6B80u); RECOMP_ABI_CALL(0x00369DF0u, sub_00369DF0); /* call 0x00369DF0 */

loc_000D6B80: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4293B0); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000D6BEC; /* jnp: not parity */

loc_000D6BAD: ;
    _fca = xmm0.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] / xmm1.f[0]; /* divss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000D6BC9; /* jnp: not parity */

loc_000D6BC1: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(0x429448); /* addss */

loc_000D6BC9: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x429370); /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D6BFD; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_000D6BDC: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(0x429510); /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_000D6BFD;

loc_000D6BEC: ;
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */
    xmm2 = xmm3; /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_000D6BFD: ;
    ecx = MEM32(esp + 0x10);
    xmm2.f[0] = xmm2.f[0] * MEMF(0x429520); /* mulss */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm2.f[0]; /* movss */
    PUSH32(esp, edx);
    esi = esp + 0x1C;
    edi = esp + 0x20;
    ebx = esp + 0x34;
    PUSH32(esp, 0x000D6C26u); RECOMP_ABI_CALL(0x000D6DE0u, sub_000D6DE0); /* call 0x000D6DE0 */

loc_000D6C26: ;
    xmm2 = XMM_SCALAR(MEMF(0x42951C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x429518)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429340)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D6C88; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D6C80: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_000D6C9C;

loc_000D6C88: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000D6C9C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D6C96: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_000D6C9C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, 0x000D6CA5u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_000D6CA5: ;
    xmm1 = XMM_SCALAR(MEMF(0x429340)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM8(ebp + 0x46E4A0) = LO8(eax);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D6CCA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D6CC2: ;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    goto loc_000D6CDE;

loc_000D6CCA: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000D6CDE; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D6CD8: ;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_000D6CDE: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, 0x000D6CE7u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_000D6CE7: ;
    xmm1 = XMM_SCALAR(MEMF(0x429340)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM8(ebp + 0x46E5A0) = LO8(eax);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D6D0C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D6D04: ;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    goto loc_000D6D20;

loc_000D6D0C: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000D6D20; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D6D1A: ;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_000D6D20: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, 0x000D6D29u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_000D6D29: ;
    MEM8(ebp + 0x46E6A0) = LO8(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D6B80; /* jl: less (signed <) */

loc_000D6D3C: ;
    SET_LO8(eax, MEM8(0x46E4B3));
    SET_LO8(ecx, MEM8(0x46E5B3));
    SET_LO8(edx, MEM8(0x46E6B3));
    eax = ZX8(LO8(eax));
    ecx = ZX8(LO8(ecx));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = ZX8(LO8(edx));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEM32(esp + 0x28) = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    goto loc_000D6D80;

    /* nop */

loc_000D6D80: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429514)); /* fmul dword ptr [0x429514] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x000D6D95u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_000D6D95: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM8(esi + 0x46E4A0) = LO8(eax);
    PUSH32(esp, 0x000D6DA6u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_000D6DA6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEM8(esi + 0x46E5A0) = LO8(eax);
    PUSH32(esp, 0x000D6DB5u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_000D6DB5: ;
    MEM8(esi + 0x46E6A0) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    MEM32(esp + 0x24) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000D6D80; /* jl: less (signed <) */

loc_000D6DC5: ;
    PUSH32(esp, 0x46E4A0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000D6DD1u); RECOMP_ABI_CALL(0x00369D60u, sub_00369D60); /* call 0x00369D60 */

loc_000D6DD1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
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
 * sub_000D6DE0
 * Original: 0x000D6DE0 - 0x000D6EE0 (256 bytes, 66 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6DE0(void)
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

loc_000D6DE0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D6E06; /* jp: parity */

loc_000D6DF3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000D6E06: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x42936C); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D6E29u); RECOMP_ABI_CALL(0x00348BE7u, sub_00348BE7); /* call 0x00348BE7 */

loc_000D6E29: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D6E31u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_000D6E31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    if (CMP_A(_fa, _fb)) goto loc_000D6ED3; /* ja: above (unsigned >) */

loc_000D6E8B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD6EE0); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000D6E92u) goto loc_000D6E92;
    if (_jt == 0x000D6E9Fu) goto loc_000D6E9F;
    if (_jt == 0x000D6EACu) goto loc_000D6EAC;
    if (_jt == 0x000D6EB9u) goto loc_000D6EB9;
    if (_jt == 0x000D6EC6u) goto loc_000D6EC6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D6E92: ;
    MEMF(ebx) = xmm2.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000D6E9F: ;
    MEMF(ebx) = xmm3.f[0]; /* movss */
    MEMF(edi) = xmm2.f[0]; /* movss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000D6EAC: ;
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEMF(edi) = xmm2.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000D6EB9: ;
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEMF(edi) = xmm3.f[0]; /* movss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000D6EC6: ;
    MEMF(ebx) = xmm0.f[0]; /* movss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000D6ED3: ;
    MEMF(ebx) = xmm2.f[0]; /* movss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D6F00
 * Original: 0x000D6F00 - 0x000D6F18 (24 bytes, 7 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6F00(void)
{

loc_000D6F00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0x000D6F0Cu); RECOMP_ABI_CALL(0x00376D70u, sub_00376D70); /* call 0x00376D70 */

loc_000D6F0C: ;
    PUSH32(esp, eax);
    MEM32(0x758B94) = eax;
    PUSH32(esp, 0x000D6F17u); RECOMP_ABI_CALL(0x00376E00u, sub_00376E00); /* call 0x00376E00 */

loc_000D6F17: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6F20
 * Original: 0x000D6F20 - 0x000D6F8B (107 bytes, 40 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6F20: ;
    eax = MEM32(0x758B94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6F2C; /* jne: not equal / not zero */

loc_000D6F29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D6F2C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D6F35u); RECOMP_ABI_CALL(0x00376E70u, sub_00376E70); /* call 0x00376E70 */

loc_000D6F35: ;
    eax = MEM32(0x758B94);
    ebp = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D6F45u); RECOMP_ABI_CALL(0x00376D70u, sub_00376D70); /* call 0x00376D70 */

loc_000D6F45: ;
    edx = MEM32(0x758B94);
    esi = MEM32(edx + 4);
    ebx = eax;
    edi = MEM32(ebx + 4);
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
    PUSH32(esp, 0);
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
    PUSH32(esp, ebx);
    MEM32(ebx + 0xC) = ebp;
    PUSH32(esp, 0x000D6F6Eu); RECOMP_ABI_CALL(0x00376FB0u, sub_00376FB0); /* call 0x00376FB0 */

loc_000D6F6E: ;
    ecx = MEM32(0x758B94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D6F7Au); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_000D6F7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    MEM32(0x758B94) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6F90
 * Original: 0x000D6F90 - 0x000D6FD0 (64 bytes, 12 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6F90: ;
    eax = 1;
    MEM8(ecx + 0x40) = LO8(eax);
    _fa = (uint32_t)(MEM8(0x440BAA)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x440BAA), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D6FAC; /* jne: not equal / not zero */

loc_000D6FA0: ;
    _fa = (uint32_t)(MEM32(0x440BA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x440BA8), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D6FBC; /* je: equal / zero */

loc_000D6FAC: ;
    MEM32(0x440BA8) = MEM32(0x440BA8) & 0xFFFCFFFFu;
    _fa = (uint32_t)(MEM32(0x440BA8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x440BA4) = MEM32(0x440BA4) | eax;
    _fa = (uint32_t)(MEM32(0x440BA4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000D6FBC: ;
    eax = MEM32(0x758E34);
    MEM32(eax + 0x28) = 0xD1040;
    MEM32(eax + 0x30) = 0xD1080;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6FD0
 * Original: 0x000D6FD0 - 0x000D7078 (168 bytes, 51 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6FD0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(ebx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_000D7070; /* je: equal / zero */

loc_000D6FE6: ;
    eax = MEM32(0x758E34);
    MEM8(ebx + 0x40) = 0;
    ecx = MEM32(eax + 0x74);
    MEM32(0x441850) = ecx;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D7015; /* je: equal / zero */

loc_000D7000: ;
    esi = 0x440BA0;
    PUSH32(esp, 0x000D700Au); RECOMP_ABI_CALL(0x000CD230u, sub_000CD230); /* call 0x000CD230 */

loc_000D700A: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D7015u); RECOMP_ABI_CALL(0x00376AD0u, sub_00376AD0); /* call 0x00376AD0 */

loc_000D7015: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D7067; /* jne: not equal / not zero */

loc_000D701B: ;
    eax = MEM32(0x441850);
    ecx = MEM32(0x441854);
    edx = MEM32(0x441858);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x44185C);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x441860);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x441864);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    ecx = 6;
    edi = esp + 0x10;
    esi = ebx + 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = edx;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_000D706E; /* je: equal / zero */

loc_000D7067: ;
    edi = ebp;
    PUSH32(esp, 0x000D706Eu); RECOMP_ABI_CALL(0x000D72A0u, sub_000D72A0); /* call 0x000D72A0 */

loc_000D706E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000D7070: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7080
 * Original: 0x000D7080 - 0x000D70D9 (89 bytes, 20 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7080: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(0x441850) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x441854) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x441858) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x44185C) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x441860) = ecx;
    edx = MEM32(eax + 0x14);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x441868) = eax;
    MEM32(0x441850) = eax;
    eax = MEM32(0x758E34);
    MEM32(0x441864) = edx;
    MEM32(eax + 0x28) = 0xD0090;
    MEM32(eax + 0x30) = 0xD0570;
    esp += 4; return; /* ret */

}

/**
 * sub_000D70E0
 * Original: 0x000D70E0 - 0x000D710B (43 bytes, 10 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D70E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D70E0: ;
    MEM32(eax + 4) = 1;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x441868) = eax;
    MEM32(0x441850) = eax;
    PUSH32(esp, 0x000D70FDu); RECOMP_ABI_CALL(0x0036AC30u, sub_0036AC30); /* call 0x0036AC30 */

loc_000D70FD: ;
    ecx = MEM32(0x758E34);
    MEM32(ecx + 0x28) = 0xD1060;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7110
 * Original: 0x000D7110 - 0x000D7219 (265 bytes, 74 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7110: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x440BA8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D71D7; /* jne: not equal / not zero */

loc_000D7124: ;
    _fa = (uint32_t)(MEM8(0x440BAA)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x440BAA), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D71D7; /* jne: not equal / not zero */

loc_000D7131: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D71D7; /* jne: not equal / not zero */

loc_000D713C: ;
    ecx = 0x441850;
    PUSH32(esp, 0x000D7146u); RECOMP_ABI_CALL(0x000D2200u, sub_000D2200); /* call 0x000D2200 */

loc_000D7146: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D71D7; /* jne: not equal / not zero */

loc_000D714E: ;
    eax = MEM32(0x758B94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D71CA; /* jne: not equal / not zero */

loc_000D7157: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D7162u); RECOMP_ABI_CALL(0x0036ADE0u, sub_0036ADE0); /* call 0x0036ADE0 */

loc_000D7162: ;
    esi = 0x440BA0;
    PUSH32(esp, 0x000D716Cu); RECOMP_ABI_CALL(0x000CD230u, sub_000CD230); /* call 0x000CD230 */

loc_000D716C: ;
    PUSH32(esp, 0x000D7171u); RECOMP_ABI_CALL(0x000D6F00u, sub_000D6F00); /* call 0x000D6F00 */

loc_000D7171: ;
    PUSH32(esp, 0x000D7176u); RECOMP_ABI_CALL(0x000D18D0u, sub_000D18D0); /* call 0x000D18D0 */

loc_000D7176: ;
    ebx = MEM32(0x441864);
    eax = MEM32(0x441850);
    ecx = MEM32(0x441854);
    esi = MEM32(0x44185C);
    ebp = MEM32(0x441860);
    edx = MEM32(0x441858);
    MEM32(esp + 0x24) = ebx;
    ebx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(ebx + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebx + 8) = edx;
    MEM32(ebx + 0xC) = esi;
    POP32(esp, esi);
    MEM32(ebx + 0x10) = ebp;
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = edi;
    POP32(esp, edi);
    MEM32(ebx + 0x14) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D71CA: ;
    PUSH32(esp, 0x000D71CFu); RECOMP_ABI_CALL(0x000D18D0u, sub_000D18D0); /* call 0x000D18D0 */

loc_000D71CF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D71D7: ;
    eax = MEM32(0x758B94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7208; /* je: equal / zero */

loc_000D71E0: ;
    PUSH32(esp, 0x000D71E5u); RECOMP_ABI_CALL(0x00376E70u, sub_00376E70); /* call 0x00376E70 */

loc_000D71E5: ;
    edx = MEM32(0x758B94);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D71F3u); RECOMP_ABI_CALL(0x00376AD0u, sub_00376AD0); /* call 0x00376AD0 */

loc_000D71F3: ;
    eax = MEM32(0x758B94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D71FEu); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_000D71FE: ;
    MEM32(0x758B94) = 0;

loc_000D7208: ;
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, 0x000D7211u); RECOMP_ABI_CALL(0x000D72A0u, sub_000D72A0); /* call 0x000D72A0 */

loc_000D7211: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7187
 * Original: 0x000D7187 - 0x000D7219 (146 bytes, 44 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7187(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7187: ;
    esi = MEM32(0x44185C);
    ebp = MEM32(0x441860);
    edx = MEM32(0x441858);
    MEM32(esp + 0x24) = ebx;
    ebx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(ebx + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebx + 8) = edx;
    MEM32(ebx + 0xC) = esi;
    POP32(esp, esi);
    MEM32(ebx + 0x10) = ebp;
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = edi;
    POP32(esp, edi);
    MEM32(ebx + 0x14) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    PUSH32(esp, 0x000D71E5u); RECOMP_ABI_CALL(0x00376E70u, sub_00376E70); /* call 0x00376E70 */

loc_000D71E5: ;
    edx = MEM32(0x758B94);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D71F3u); RECOMP_ABI_CALL(0x00376AD0u, sub_00376AD0); /* call 0x00376AD0 */

loc_000D71F3: ;
    eax = MEM32(0x758B94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D71FEu); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_000D71FE: ;
    MEM32(0x758B94) = 0;

loc_000D7208: ;
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, 0x000D7211u); RECOMP_ABI_CALL(0x000D72A0u, sub_000D72A0); /* call 0x000D72A0 */

loc_000D7211: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7220
 * Original: 0x000D7220 - 0x000D7293 (115 bytes, 35 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 4) = 2;
    PUSH32(esp, 0x000D7234u); RECOMP_ABI_CALL(0x000D6F20u, sub_000D6F20); /* call 0x000D6F20 */

loc_000D7234: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000D7240; /* jne: not equal / not zero */

loc_000D723B: ;
    MEM32(ebp) = eax;
    goto loc_000D7248;

loc_000D7240: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7248u); RECOMP_ABI_CALL(0x00376AD0u, sub_00376AD0); /* call 0x00376AD0 */

loc_000D7248: ;
    eax = MEM32(0x441850);
    esi = MEM32(0x44185C);
    edi = MEM32(0x441860);
    ebx = MEM32(0x441864);
    ecx = MEM32(0x441854);
    edx = MEM32(0x441858);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    eax = MEM32(0x758E34);
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = edx;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 0x10) = edi;
    POP32(esp, edi);
    MEM32(ebp + 0x14) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x28) = 0xD0090;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D72A0
 * Original: 0x000D72A0 - 0x000D7300 (96 bytes, 25 insns)
 * Folder: unsorted (none)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D72A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D72A0: ;
    PUSH32(esp, esi);
    esi = 0x440BA0;
    MEM32(ebx) = 0;
    PUSH32(esp, 0x000D72B1u); RECOMP_ABI_CALL(0x000CD230u, sub_000CD230); /* call 0x000CD230 */

loc_000D72B1: ;
    eax = MEM32(0x758E34);
    ecx = MEM32(eax + 0x74);
    PUSH32(esp, ecx);
    esi = 0x441850;
    PUSH32(esp, 0x000D72C4u); RECOMP_ABI_CALL(0x000D1AC0u, sub_000D1AC0); /* call 0x000D1AC0 */

loc_000D72C4: ;
    eax = MEM32(edi + 4);
    eax = eax + eax * 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_000D72DB; /* jbe: below or equal (unsigned <=) */

loc_000D72CF: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000D72DBu); RECOMP_ABI_CALL(0x00375B50u, sub_00375B50); /* call 0x00375B50 */

loc_000D72DB: ;
    eax = MEM32(0x758E34);
    MEM32(eax + 0x28) = 0xD0090;
    MEM32(eax + 0x30) = 0xD0570;
    MEM32(ebx + 4) = 3;
    MEM32(0x758B98) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7300
 * Original: 0x000D7300 - 0x000D733E (62 bytes, 15 insns)
 * Folder: unsorted (none)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7300: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esp + 0x408);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D732Bu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D732B: ;
    ecx = MEM32(esp + 0x414);
    PUSH32(esp, 0x000D7337u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D7337: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D8510
 * Original: 0x000D8510 - 0x000D8582 (114 bytes, 32 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8510: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7654A8);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000D851Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8515u); } /* indirect call */
    }

loc_000D851B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D856C; /* je: equal / zero */

loc_000D851F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D856C; /* je: equal / zero */

loc_000D8524: ;
    ecx = MEM32(0x758BB8);
    edx = MEM32(0x43B0E0);
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 4);
    MEM32(eax + 8) = edx;
    SET_LO8(edx, MEM8(esp + 8));
    MEM32(0x758BB0) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    MEM8(eax + 0xC) = LO8(edx);
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1388;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7654A8);
    MEM32(0x758BB8) = edx;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000D856Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8565u); } /* indirect call */
    }

loc_000D856B: ;
    esp += 4; return; /* ret */

loc_000D856C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8576; /* je: equal / zero */

loc_000D8570: ;
    MEM32(edi) = 0;

loc_000D8576: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7654A8);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000D8581u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D857Bu); } /* indirect call */
    }

loc_000D8581: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8590
 * Original: 0x000D8590 - 0x000D8736 (422 bytes, 102 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D8590: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF800000u (32-bit) */
    ebp = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000D85C5; /* je: equal / zero */

loc_000D85A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF400000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF400000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D85C5; /* je: equal / zero */

loc_000D85AC: ;
    eax = eax & 0xFF000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFD000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFD000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D85C5; /* je: equal / zero */

loc_000D85B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE000000u (32-bit) */
    MEM32(0x758BAC) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000D85CB; /* jne: not equal / not zero */

loc_000D85C5: ;
    MEM32(0x758BAC) = ebx;

loc_000D85CB: ;
    _fa = (uint32_t)(MEM32(0x758BBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758BBC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8732; /* je: equal / zero */

loc_000D85D7: ;
    eax = MEM32(0x758BA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D860C; /* jne: not equal / not zero */

loc_000D85E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF800000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8732; /* je: equal / zero */

loc_000D85EC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF400000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF400000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8732; /* je: equal / zero */

loc_000D85F8: ;
    ecx = esi;
    ecx = ecx & 0xFF000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFE000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8732; /* je: equal / zero */

loc_000D860C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF400000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF400000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D868A; /* je: equal / zero */

loc_000D8614: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF800000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8678; /* je: equal / zero */

loc_000D861C: ;
    eax = esi;
    eax = eax & 0xFF000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8632; /* jne: not equal / not zero */

loc_000D862A: ;
    MEM32(0x43B0DC) = ebp;
    goto loc_000D869C;

loc_000D8632: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFD000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFD000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8641; /* jne: not equal / not zero */

loc_000D8639: ;
    MEM32(0x43B0DC) = ebp;
    goto loc_000D869C;

loc_000D8641: ;
    eax = MEM32(esp + 0x10);
    edx = esi;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D866A; /* je: equal / zero */

loc_000D8664: ;
    esi = esi | 0x100000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000D866A: ;
    MEM32(0x43B0DC) = ebp;
    MEM32(0x758BAC) = ebp;
    goto loc_000D86A2;

loc_000D8678: ;
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFF800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x43B0DC) = ebp;
    goto loc_000D869A;

loc_000D868A: ;
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFF400000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x43B0DC) = ebx;

loc_000D869A: ;
    esi = eax;

loc_000D869C: ;
    MEM32(0x758BAC) = ebx;

loc_000D86A2: ;
    PUSH32(esp, edi);
    MEM32(0x758BA8) = esi;
    MEM32(0x758CE4) = ebx;
    MEM32(0x758CD8) = ebx;
    MEM32(0x758CEC) = ebx;
    MEM32(0x758CDC) = ebx;
    MEM32(0x758CD4) = ebx;
    PUSH32(esp, 0x000D86CCu); RECOMP_ABI_CALL(0x000E08E0u, sub_000E08E0); /* call 0x000E08E0 */

loc_000D86CC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8731; /* je: equal / zero */

loc_000D86D3: ;
    PUSH32(esp, esi);
    eax = 0x46FFF8;
    MEM32(0x758CE0) = edi;
    MEM32(0x758CD4) = 2;
    MEM32(0x758CDC) = 0x100000;
    MEM32(0x758CE4) = ebx;
    MEM32(0x758CE8) = ebx;
    PUSH32(esp, 0x000D8704u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000D8704: ;
    edx = MEM32(0x758634);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(0x470008) = eax;
    eax = MEM32(0x758D04);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000D8720u); RECOMP_ABI_CALL(0x00095940u, sub_00095940); /* call 0x00095940 */

loc_000D8720: ;
    ecx = MEM32(0x758634);
    PUSH32(esp, 0x000D872Bu); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000D872B: ;
    MEM32(0x758478) = ebp;

loc_000D8731: ;
    POP32(esp, edi);

loc_000D8732: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D8740
 * Original: 0x000D8740 - 0x000D878F (79 bytes, 19 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8740: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D878E; /* je: equal / zero */

loc_000D8749: ;
    eax = MEM32(0x758CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8784; /* je: equal / zero */

loc_000D8752: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8784; /* jne: not equal / not zero */

loc_000D875B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x758634);
    PUSH32(esp, edi);
    edi = MEM32(0x758D04);
    MEM32(0x758CD8) = 0;
    MEM32(0x758CEC) = 0;
    PUSH32(esp, 0x000D8782u); RECOMP_ABI_CALL(0x00095A30u, sub_00095A30); /* call 0x00095A30 */

loc_000D8782: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000D8784: ;
    MEM32(0x758CD4) = 0;

loc_000D878E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D8790
 * Original: 0x000D8790 - 0x000D8915 (389 bytes, 123 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D8790: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7654A8);
    MEM32(esp + 0x68) = eax;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000D87A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D87A1u); } /* indirect call */
    }

loc_000D87A7: ;
    eax = MEM32(0x758BB4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1388;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x758BB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x758BB8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D88EE; /* je: equal / zero */

loc_000D87C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_000D87D0;

    /* nop */
    /* nop */

loc_000D87D0: ;
    edi = MEM32(0x758BB4);
    ebp = MEM32(0x43B0E0);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(edi + ebp);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000D87EFu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000D87EF: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8805; /* je: equal / zero */

loc_000D87FC: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D880F; /* je: equal / zero */

loc_000D8805: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8816; /* je: equal / zero */

loc_000D880F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ebx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D8818; /* je: equal / zero */

loc_000D8816: ;
    ebx = eax;

loc_000D8818: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D883E; /* jne: not equal / not zero */

loc_000D881D: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D88A9; /* je: equal / zero */

loc_000D8827: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x428E90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D8839u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000D8839: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D88A9;

loc_000D883E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D88A9; /* je: equal / zero */

loc_000D8843: ;
    ecx = ebx;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi = ZX8(LO8(ecx));
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + 0x46EFE8;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x000D885Eu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000D885E: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D88A0; /* jne: not equal / not zero */

loc_000D8868: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D8872; /* je: equal / zero */

loc_000D886E: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000D88A0;

loc_000D8872: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x000D8876u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8873u); } /* indirect call */
    }

loc_000D8876: ;
    ebp = eax;
    SET_LO8(eax, MEM8(edi + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D88A0; /* jne: not equal / not zero */

loc_000D8882: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D88A0; /* je: equal / zero */

loc_000D8886: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D88A0; /* je: equal / zero */

loc_000D888A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D8891u); RECOMP_ABI_CALL(0x000E0030u, sub_000E0030); /* call 0x000E0030 */

loc_000D8891: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    esi = 0x46EFD4;
    PUSH32(esp, 0x000D889Du); RECOMP_ABI_CALL(0x000E0030u, sub_000E0030); /* call 0x000E0030 */

loc_000D889D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D88A0: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D88A9; /* je: equal / zero */

loc_000D88A7: ;
    MEM32(edi) = ebp;

loc_000D88A9: ;
    eax = MEM32(0x758BB4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1388;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758BB4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D88D1; /* je: equal / zero */

loc_000D88C6: ;
    esi = MEM32(0x451B4C);
    PUSH32(esp, 0x000D88D1u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000D88D1: ;
    eax = MEM32(0x758BB4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1388;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x758BB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x758BB8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D87D0; /* jne: not equal / not zero */

loc_000D88EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000D88EE: ;
    PUSH32(esp, 0x441894);
    PUSH32(esp, 0x000D88F8u); RECOMP_ABI_CALL(0x000E0A90u, sub_000E0A90); /* call 0x000E0A90 */

loc_000D88F8: ;
    PUSH32(esp, 0x000D88FDu); RECOMP_ABI_CALL(0x000DF0A0u, sub_000DF0A0); /* call 0x000DF0A0 */

loc_000D88FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7654A8);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000D8908u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8902u); } /* indirect call */
    }

loc_000D8908: ;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 0x000D8911u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000D8911: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D8920
 * Original: 0x000D8920 - 0x000D893C (28 bytes, 10 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8920: ;
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
    PUSH32(esp, 0x000D8938u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000D8938: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E47D0
 * Original: 0x000E47D0 - 0x000E4A10 (576 bytes, 236 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E47D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000E47D0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebx) = 0;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x11 (8-bit) */
    _cf = (int)(_fa < _fb);
    ebp = esi + eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_000E480B; /* jbe: below or equal (unsigned <=) */

loc_000E47E9: ;
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x11));
    ecx = ecx - 0x11;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000E48C0; /* jb: below (unsigned <) */

loc_000E47F9: ;
    /* nop */

loc_000E4800: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E4800; /* jne: not equal / not zero */

loc_000E4809: ;
    goto loc_000E487A;

loc_000E480B: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000E48CD; /* jae: above or equal (unsigned >=) */

loc_000E4818: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E4837; /* jne: not equal / not zero */

loc_000E481C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E482F; /* jne: not equal / not zero */

loc_000E4821: ;
    SET_LO8(edx, MEM8(esi + 1));
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFF)) >> 32) & 1);
    ecx = ecx + 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4821; /* je: equal / zero */

loc_000E482F: ;
    edx = ZX8(MEM8(esi));
    ecx = ecx + edx + 0xF;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E4837: ;
    edx = MEM32(esi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E487A; /* je: equal / zero */

loc_000E4844: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000E4871; /* jb: below (unsigned <) */

loc_000E4849: ;
    /* nop */

loc_000E4850: ;
    edx = MEM32(esi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000E4850; /* jae: above or equal (unsigned >=) */

loc_000E4862: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000E487A; /* jbe: below or equal (unsigned <=) */

loc_000E4866: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E4866; /* jne: not equal / not zero */

loc_000E486F: ;
    goto loc_000E487A;

loc_000E4871: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E4871; /* jne: not equal / not zero */

loc_000E487A: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000E48CD; /* jae: above or equal (unsigned >=) */

loc_000E4883: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(esi));
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(edx + -2049));
    _fb = (uint32_t)(0x801) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x801));
    edx = edx - 0x801;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E48A3: ;
    SET_LO8(ecx, MEM8(edx));
    MEM8(eax) = LO8(ecx);
    SET_LO8(edx, MEM8(edx + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E48AE: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + -2));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000E480B; /* je: equal / zero */

loc_000E48BC: ;
    /* nop */

loc_000E48C0: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E48C0; /* jne: not equal / not zero */

loc_000E48C9: ;
    ecx = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E48CD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000E490B; /* jb: below (unsigned <) */

loc_000E48D2: ;
    edx = ecx;
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ZX8(MEM8(esi));
    if (3) _cf = (int)(((edx) >> (32 - (3))) & 1);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (5) _cf = (int)(((ecx) >> ((5) - 1)) & 1);
    ecx = ecx >> 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E48EC: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(edi + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_000E4900: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E4900; /* jne: not equal / not zero */

loc_000E4909: ;
    goto loc_000E48AE;

loc_000E490B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000E4946; /* jb: below (unsigned <) */

loc_000E4910: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_000E4936; /* jne: not equal / not zero */

loc_000E4915: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E492E; /* jne: not equal / not zero */

loc_000E491A: ;
    /* nop */

loc_000E4920: ;
    SET_LO8(edx, MEM8(esi + 1));
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFF)) >> 32) & 1);
    ecx = ecx + 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4920; /* je: equal / zero */

loc_000E492E: ;
    edx = ZX8(MEM8(esi));
    ecx = ecx + edx + 0x1F;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E4936: ;
    edx = ZX16(MEM16(esi));
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E4990;

loc_000E4946: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000E49DE; /* jb: below (unsigned <) */

loc_000E494F: ;
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx & 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0xB) _cf = (int)(((edx) >> (32 - (0xB))) & 1);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_000E497B; /* jne: not equal / not zero */

loc_000E4960: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E4973; /* jne: not equal / not zero */

loc_000E4965: ;
    SET_LO8(edx, MEM8(esi + 1));
    _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFF)) >> 32) & 1);
    ecx = ecx + 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4965; /* je: equal / zero */

loc_000E4973: ;
    edx = ZX8(MEM8(esi));
    ecx = ecx + edx + 7;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E497B: ;
    edx = ZX16(MEM16(esi));
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E49F4; /* je: equal / zero */

loc_000E498A: ;
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(0x4000));
    edi = edi - 0x4000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000E4990: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000E48EC; /* jb: below (unsigned <) */

loc_000E4999: ;
    edx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E48EC; /* jl: less (signed <) */

loc_000E49A6: ;
    edx = MEM32(edi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(2));
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000E49B3: ;
    edx = MEM32(edi);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000E49B3; /* jae: above or equal (unsigned >=) */

loc_000E49C5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000E48AE; /* jbe: below or equal (unsigned <=) */

loc_000E49CD: ;
    /* nop */

loc_000E49D0: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E49D0; /* jne: not equal / not zero */

loc_000E49D9: ;
    goto loc_000E48AE;

loc_000E49DE: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(esi));
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000E48A3;

loc_000E49F4: ;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x10)));
    eax = eax - MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E4A04; /* jne: not equal / not zero */

loc_000E49FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000E4A04: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4A10
 * Original: 0x000E4A10 - 0x000E4A50 (64 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4A10: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x7584F0);
    PUSH32(esp, eax);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x000E4A3Au); RECOMP_ABI_CALL(0x00017960u, sub_00017960); /* call 0x00017960 */

loc_000E4A3A: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4A50
 * Original: 0x000E4A50 - 0x000E4AC3 (115 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4A50: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x7584F0);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E4A7C; /* je: equal / zero */

loc_000E4A76: ;
    esi = MEM32(eax + ecx * 4 + 0x6C);
    goto loc_000E4A7E;

loc_000E4A7C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E4A7E: ;
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
 * sub_000E4AD0
 * Original: 0x000E4AD0 - 0x000E4B2F (95 bytes, 23 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4AD0: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4AEF; /* je: equal / zero */

loc_000E4ADF: ;
    eax = MEM32(eax + ecx * 4 + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4AEF; /* je: equal / zero */

loc_000E4AE7: ;
    edx = MEM32(eax + 0x84);
    goto loc_000E4AF2;

loc_000E4AEF: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E4AF2: ;
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
 * sub_000E4B30
 * Original: 0x000E4B30 - 0x000E4B9A (106 bytes, 24 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4B30: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E4B52u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E4B52: ;
    ecx = MEM32(0x7584F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4B5Eu); RECOMP_ABI_CALL(0x00017DE0u, sub_00017DE0); /* call 0x00017DE0 */

loc_000E4B5E: ;
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
 * sub_000E4BA0
 * Original: 0x000E4BA0 - 0x000E4C0D (109 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4BA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E4BC3u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E4BC3: ;
    PUSH32(esp, esi);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E4BCDu); RECOMP_ABI_CALL(0x00018430u, sub_00018430); /* call 0x00018430 */

loc_000E4BCD: ;
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
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4C10
 * Original: 0x000E4C10 - 0x000E4C9C (140 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4C10: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x7584F0);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E4C32u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E4C32: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax + 0x90);
    eax = MEM32(esi + 0x44);
    esi = MEM32(esi + 0x48);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4C5C; /* je: equal / zero */

loc_000E4C4A: ;
    /* nop */

loc_000E4C50: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4C5E; /* je: equal / zero */

loc_000E4C54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4C50; /* jne: not equal / not zero */

loc_000E4C5C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E4C5E: ;
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
 * sub_000E4CA0
 * Original: 0x000E4CA0 - 0x000E4CCD (45 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4CA0: ;
    PUSH32(esp, 0x000E4CA5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E4CA5: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    eax = edx + eax * 4;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0xB4);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E4CC2u); RECOMP_ABI_CALL(0x000E6CB0u, sub_000E6CB0); /* call 0x000E6CB0 */

loc_000E4CC2: ;
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
 * sub_000E4CD0
 * Original: 0x000E4CD0 - 0x000E4D26 (86 bytes, 19 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4CD0: ;
    PUSH32(esp, 0x000E4CD5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E4CD5: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    ecx = edx + eax * 4;
    ecx = MEM32(ecx);
    edx = MEM32(0x758D48);
    ecx = MEM32(ecx + 0xBC);
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
 * sub_000E4D30
 * Original: 0x000E4D30 - 0x000E4D90 (96 bytes, 22 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4D30: ;
    PUSH32(esp, 0x000E4D35u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E4D35: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax + 0xBC);
    eax = MEM32(eax + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E4D53; /* jle: less or equal (signed <=) */

loc_000E4D51: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000E4D53: ;
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
 * sub_000E4D90
 * Original: 0x000E4D90 - 0x000E4DC0 (48 bytes, 25 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4D90: ;
    PUSH32(esp, 0x000E4D95u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E4D95: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    eax = edx + eax * 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E4DA9u); RECOMP_ABI_CALL(0x0003AB40u, sub_0003AB40); /* call 0x0003AB40 */

loc_000E4DA9: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E4DC0
 * Original: 0x000E4DC0 - 0x000E4E2D (109 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4DC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E4DE3u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E4DE3: ;
    PUSH32(esp, esi);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E4DEDu); RECOMP_ABI_CALL(0x000185C0u, sub_000185C0); /* call 0x000185C0 */

loc_000E4DED: ;
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
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4E30
 * Original: 0x000E4E30 - 0x000E4EB1 (129 bytes, 37 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4E30: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E4E55u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E4E55: ;
    edi = eax;
    PUSH32(esp, 0x000E4E5Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E4E5C: ;
    ebx = eax;
    PUSH32(esp, 0x000E4E63u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E4E63: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000E4E6Fu); RECOMP_ABI_CALL(0x000180D0u, sub_000180D0); /* call 0x000180D0 */

loc_000E4E6F: ;
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
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4EC0
 * Original: 0x000E4EC0 - 0x000E4F38 (120 bytes, 32 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4EC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4EC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E4EE4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E4EE4: ;
    edi = eax;
    PUSH32(esp, 0x000E4EEBu); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E4EEB: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x000E4EF7u); RECOMP_ABI_CALL(0x00018150u, sub_00018150); /* call 0x00018150 */

loc_000E4EF7: ;
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
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4F40
 * Original: 0x000E4F40 - 0x000E4FAD (109 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4F40: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E4F63u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E4F63: ;
    PUSH32(esp, esi);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E4F6Du); RECOMP_ABI_CALL(0x000181C0u, sub_000181C0); /* call 0x000181C0 */

loc_000E4F6D: ;
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
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4FB0
 * Original: 0x000E4FB0 - 0x000E503C (140 bytes, 42 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E4FB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E4FD6u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E4FD6: ;
    edi = eax;
    PUSH32(esp, 0x000E4FDDu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E4FDD: ;
    ebx = eax;
    PUSH32(esp, 0x000E4FE4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E4FE4: ;
    ebp = eax;
    PUSH32(esp, 0x000E4FEBu); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E4FEB: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0x000E4FF9u); RECOMP_ABI_CALL(0x00018220u, sub_00018220); /* call 0x00018220 */

loc_000E4FF9: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
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
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5040
 * Original: 0x000E5040 - 0x000E50CC (140 bytes, 42 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5040: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E5066u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5066: ;
    edi = eax;
    PUSH32(esp, 0x000E506Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E506D: ;
    ebx = eax;
    PUSH32(esp, 0x000E5074u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5074: ;
    ebp = eax;
    PUSH32(esp, 0x000E507Bu); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E507B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000E5089u); RECOMP_ABI_CALL(0x000182A0u, sub_000182A0); /* call 0x000182A0 */

loc_000E5089: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
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
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E50D0
 * Original: 0x000E50D0 - 0x000E5175 (165 bytes, 41 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E50D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E50D0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D68) = ecx;
    SET_LO16(ecx, MEM16(eax * 8 + 0x686428));
    MEM32(0x758D4C) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x000E511Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5114u); } /* indirect call */
    }

loc_000E511B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000E5127u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E5127: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000E5132u); RECOMP_ABI_CALL(0x00018310u, sub_00018310); /* call 0x00018310 */

loc_000E5132: ;
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
    eax = MEM32(esp + 0x48);
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
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
 * sub_000E5180
 * Original: 0x000E5180 - 0x000E5232 (178 bytes, 49 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5180: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D48);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D70);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D70) = eax;
    SET_LO8(eax, MEM8(0x758484));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E51D6; /* je: equal / zero */

loc_000E51C5: ;
    _fa = (uint32_t)(MEM8(0x758485)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758485), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E51D6; /* je: equal / zero */

loc_000E51CE: ;
    edi = MEM32(edx + 0x696528);
    goto loc_000E51D8;

loc_000E51D6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E51D8: ;
    PUSH32(esp, 0x000E51DDu); RECOMP_ABI_CALL(0x000E6C60u, sub_000E6C60); /* call 0x000E6C60 */

loc_000E51DD: ;
    esi = eax;
    PUSH32(esp, 0x000E51E4u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E51E4: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000E51F0u); RECOMP_ABI_CALL(0x00018370u, sub_00018370); /* call 0x00018370 */

loc_000E51F0: ;
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
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5240
 * Original: 0x000E5240 - 0x000E52B7 (119 bytes, 32 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5240: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E5264u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5264: ;
    edi = eax;
    PUSH32(esp, 0x000E526Bu); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E526B: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000E5276u); RECOMP_ABI_CALL(0x000183D0u, sub_000183D0); /* call 0x000183D0 */

loc_000E5276: ;
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
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E52C0
 * Original: 0x000E52C0 - 0x000E53ED (301 bytes, 77 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E52C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E52C0: ;
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D70);
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
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), LO16(edx) (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000E530B; /* jne: not equal / not zero */

loc_000E5301: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000E5313;

loc_000E530B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000E5313: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), LO16(edx) (16-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000E5331; /* jne: not equal / not zero */

loc_000E5327: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000E5339;

loc_000E5331: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000E5339: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), LO16(edx) (16-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E5362; /* jne: not equal / not zero */

loc_000E5358: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_000E536A;

loc_000E5362: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_000E536A: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E5375u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5375: ;
    esi = eax;
    PUSH32(esp, 0x000E537Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E537C: ;
    edi = eax;
    PUSH32(esp, 0x000E5383u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5383: ;
    ebx = eax;
    PUSH32(esp, 0x000E538Au); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E538A: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0x000E53A8u); RECOMP_ABI_CALL(0x000184C0u, sub_000184C0); /* call 0x000184C0 */

loc_000E53A8: ;
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
    eax = MEM32(esp + 0x1C);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
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
 * sub_000E53F0
 * Original: 0x000E53F0 - 0x000E5419 (41 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E53F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E53F0: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 4);
    eax = ecx + edx * 4;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5418; /* jne: not equal / not zero */

loc_000E5407: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000E5418u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5415u); } /* indirect call */
    }

loc_000E5418: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5420
 * Original: 0x000E5420 - 0x000E5461 (65 bytes, 24 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5420: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5427u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5427: ;
    esi = eax;
    PUSH32(esp, 0x000E542Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E542E: ;
    edi = eax;
    PUSH32(esp, 0x000E5435u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5435: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    eax = MEM32(ecx + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5457; /* jne: not equal / not zero */

loc_000E544E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000E5457u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5454u); } /* indirect call */
    }

loc_000E5457: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5470
 * Original: 0x000E5470 - 0x000E54AE (62 bytes, 22 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5470: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(0x7584F0);
    if (CMP_NE(_fa, _fb)) goto loc_000E548A; /* jne: not equal / not zero */

loc_000E547A: ;
    ecx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E54AD; /* je: equal / zero */

loc_000E5484: ;
    ecx = MEM32(eax + ecx * 4 + 0x6C);
    goto loc_000E5492;

loc_000E548A: ;
    eax = MEM32(eax + 4);
    eax = eax + ecx * 4;
    ecx = MEM32(eax);

loc_000E5492: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E54AD; /* je: equal / zero */

loc_000E5496: ;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x84), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E54AD; /* jne: not equal / not zero */

loc_000E549F: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E54ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E54AAu); } /* indirect call */
    }

loc_000E54AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E54B0
 * Original: 0x000E54B0 - 0x000E5500 (80 bytes, 28 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E54B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E54B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E54B6u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E54B6: ;
    esi = eax;
    PUSH32(esp, 0x000E54BDu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E54BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(0x7584F0);
    if (CMP_NE(_fa, _fb)) goto loc_000E54D8; /* jne: not equal / not zero */

loc_000E54C8: ;
    eax = MEM32(ecx + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E54F7; /* je: equal / zero */

loc_000E54D2: ;
    ecx = MEM32(ecx + eax * 4 + 0x6C);
    goto loc_000E54E0;

loc_000E54D8: ;
    ecx = MEM32(ecx + 4);
    eax = ecx + eax * 4;
    ecx = MEM32(eax);

loc_000E54E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E54F7; /* je: equal / zero */

loc_000E54E4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x84), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E54F7; /* jne: not equal / not zero */

loc_000E54ED: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E54F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E54F4u); } /* indirect call */
    }

loc_000E54F7: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5500
 * Original: 0x000E5500 - 0x000E553F (63 bytes, 24 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5500: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5508u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5508: ;
    esi = eax;
    PUSH32(esp, 0x000E550Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E550F: ;
    edi = eax;
    PUSH32(esp, 0x000E5516u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5516: ;
    ebx = eax;
    PUSH32(esp, 0x000E551Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E551D: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    eax = edx + eax * 4;
    PUSH32(esp, esi);
    edx = ebx;
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5534u); RECOMP_ABI_CALL(0x00019440u, sub_00019440); /* call 0x00019440 */

loc_000E5534: ;
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
 * sub_000E5540
 * Original: 0x000E5540 - 0x000E556C (44 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5540: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 0x24);
    ecx = ecx + edx * 4;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax + edx * 4;
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E556Au); RECOMP_ABI_CALL(0x00039000u, sub_00039000); /* call 0x00039000 */

loc_000E556A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5570
 * Original: 0x000E5570 - 0x000E55AF (63 bytes, 21 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5570: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5577u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5577: ;
    esi = eax;
    PUSH32(esp, 0x000E557Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E557E: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x24);
    ecx = ecx + esi * 4;
    esi = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, 0x000E55A5u); RECOMP_ABI_CALL(0x00039000u, sub_00039000); /* call 0x00039000 */

loc_000E55A5: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E55B0
 * Original: 0x000E55B0 - 0x000E55FC (76 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E55B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E55B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E55B8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E55B8: ;
    esi = eax;
    PUSH32(esp, 0x000E55BFu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E55BF: ;
    edi = eax;
    PUSH32(esp, 0x000E55C6u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E55C6: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x54);
    eax = edx + eax * 4;
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(eax);
    ecx = ecx + edi * 4;
    MEM32(esp + 8) = edx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + eax + 0x44;
    edx = esp + 8;
    PUSH32(esp, 0x000E55F1u); RECOMP_ABI_CALL(0x00039000u, sub_00039000); /* call 0x00039000 */

loc_000E55F1: ;
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
 * sub_000E5600
 * Original: 0x000E5600 - 0x000E562C (44 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5600: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 0x44);
    eax = MEM32(eax + 0x24);
    ecx = ecx + edx * 4;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax + edx * 4;
    eax = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E562Au); RECOMP_ABI_CALL(0x00039000u, sub_00039000); /* call 0x00039000 */

loc_000E562A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5630
 * Original: 0x000E5630 - 0x000E566F (63 bytes, 21 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5630: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5637u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5637: ;
    esi = eax;
    PUSH32(esp, 0x000E563Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E563E: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x24);
    ecx = ecx + esi * 4;
    esi = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, 0x000E5665u); RECOMP_ABI_CALL(0x00039000u, sub_00039000); /* call 0x00039000 */

loc_000E5665: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5670
 * Original: 0x000E5670 - 0x000E56BC (76 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5670: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5678u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5678: ;
    esi = eax;
    PUSH32(esp, 0x000E567Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E567F: ;
    edi = eax;
    PUSH32(esp, 0x000E5686u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5686: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x54);
    eax = edx + eax * 4;
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(eax);
    ecx = ecx + edi * 4;
    MEM32(esp + 8) = edx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + eax + 0x18;
    edx = esp + 8;
    PUSH32(esp, 0x000E56B1u); RECOMP_ABI_CALL(0x00039000u, sub_00039000); /* call 0x00039000 */

loc_000E56B1: ;
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
 * sub_000E56C0
 * Original: 0x000E56C0 - 0x000E56F3 (51 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E56C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E56C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E56C6u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E56C6: ;
    esi = eax;
    PUSH32(esp, 0x000E56CDu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E56CD: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x64);
    eax = edx + eax * 4;
    edx = MEM32(eax);
    eax = MEM32(ecx + esi * 4);
    ecx = ecx + esi * 4;
    MEM32(edx + 0x9C) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5700
 * Original: 0x000E5700 - 0x000E5733 (51 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5700: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5706u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5706: ;
    esi = eax;
    PUSH32(esp, 0x000E570Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E570D: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x64);
    eax = edx + eax * 4;
    edx = MEM32(eax);
    eax = MEM32(ecx + esi * 4);
    ecx = ecx + esi * 4;
    MEM32(edx + 0xA0) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5740
 * Original: 0x000E5740 - 0x000E576B (43 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5740: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5746u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5746: ;
    esi = eax;
    PUSH32(esp, 0x000E574Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E574D: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + eax * 4);
    edx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000E5762u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E575Fu); } /* indirect call */
    }

loc_000E5762: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5770
 * Original: 0x000E5770 - 0x000E579C (44 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5770: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x14);
    ecx = ecx + edx * 4;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax + edx * 4;
    eax = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000E579Au); RECOMP_ABI_CALL(0x00039000u, sub_00039000); /* call 0x00039000 */

loc_000E579A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E57A0
 * Original: 0x000E57A0 - 0x000E57DF (63 bytes, 21 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E57A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E57A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E57A7u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E57A7: ;
    esi = eax;
    PUSH32(esp, 0x000E57AEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E57AE: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0x14);
    ecx = ecx + esi * 4;
    esi = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, 0x000E57D5u); RECOMP_ABI_CALL(0x00039000u, sub_00039000); /* call 0x00039000 */

loc_000E57D5: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E57E0
 * Original: 0x000E57E0 - 0x000E5856 (118 bytes, 31 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E57E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E57E0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E5803u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5803: ;
    edi = eax;
    PUSH32(esp, 0x000E580Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E580A: ;
    ecx = MEM32(0x7584F0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E5819u); RECOMP_ABI_CALL(0x00017E90u, sub_00017E90); /* call 0x00017E90 */

loc_000E5819: ;
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
 * sub_000E5860
 * Original: 0x000E5860 - 0x000E58D6 (118 bytes, 31 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5860: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E5883u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5883: ;
    edi = eax;
    PUSH32(esp, 0x000E588Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E588A: ;
    ecx = MEM32(0x7584F0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E5899u); RECOMP_ABI_CALL(0x00017F30u, sub_00017F30); /* call 0x00017F30 */

loc_000E5899: ;
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
 * sub_000E58E0
 * Original: 0x000E58E0 - 0x000E5960 (128 bytes, 36 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E58E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E58E0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E5904u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5904: ;
    edi = eax;
    PUSH32(esp, 0x000E590Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E590B: ;
    ebx = eax;
    PUSH32(esp, 0x000E5912u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5912: ;
    ecx = MEM32(0x7584F0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E5922u); RECOMP_ABI_CALL(0x00017FD0u, sub_00017FD0); /* call 0x00017FD0 */

loc_000E5922: ;
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
 * sub_000E5960
 * Original: 0x000E5960 - 0x000E59A2 (66 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5960(void)
{

loc_000E5960: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 0x64);
    eax = ecx + edx * 4;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E59A0u); RECOMP_ABI_CALL(0x00038F50u, sub_00038F50); /* call 0x00038F50 */

loc_000E59A0: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E59B0
 * Original: 0x000E59B0 - 0x000E5A77 (199 bytes, 59 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E59B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E59B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D4C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = ebx;
    MEM32(0x758D68) = ecx;
    MEM32(0x758D48) = eax;
    ebx = eax + 0x696528;
    PUSH32(esp, 0x000E5A03u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5A03: ;
    ebp = eax;
    PUSH32(esp, 0x000E5A0Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5A0A: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000E5A13u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5A13: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000E5A1Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5A1C: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000E5A25u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5A25: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000E5A2Eu); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E5A2E: ;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000E5A37u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5A37: ;
    edx = MEM32(0x7584F0);
    ecx = MEM32(edx + 0x64);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    eax = ecx + eax * 4;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5A68u); RECOMP_ABI_CALL(0x00038F50u, sub_00038F50); /* call 0x00038F50 */

loc_000E5A68: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_000E5A80
 * Original: 0x000E5A80 - 0x000E5AC0 (64 bytes, 24 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5A80(void)
{

loc_000E5A80: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 0x64);
    eax = ecx + edx * 4;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x000E5ABFu); RECOMP_ABI_CALL(0x00038E80u, sub_00038E80); /* call 0x00038E80 */

loc_000E5ABF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5AC0
 * Original: 0x000E5AC0 - 0x000E5BA1 (225 bytes, 65 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5AC0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D4C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = ebx;
    MEM32(0x758D68) = ecx;
    MEM32(0x758D48) = eax;
    ebx = eax + 0x696528;
    PUSH32(esp, 0x000E5B13u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5B13: ;
    ebp = eax;
    PUSH32(esp, 0x000E5B1Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5B1A: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000E5B23u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5B23: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000E5B2Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5B2C: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000E5B35u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5B35: ;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = eax + 0x696528;
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x000E5B62u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5B62: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 0x64);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    eax = edx + eax * 4;
    edx = MEM32(esp + 0x24);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0x000E5B92u); RECOMP_ABI_CALL(0x00038E80u, sub_00038E80); /* call 0x00038E80 */

loc_000E5B92: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_000E5BB0
 * Original: 0x000E5BB0 - 0x000E5C08 (88 bytes, 32 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5BB0: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 0x44);
    eax = ecx + edx * 4;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000E5BF8; /* jne: not equal / not zero */

loc_000E5BC9: ;
    esi = MEM32(eax + 0xA0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5BEC; /* jne: not equal / not zero */

loc_000E5BD3: ;
    edx = MEM32(eax + 0x8C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5BEC; /* je: equal / zero */

loc_000E5BDD: ;
    ecx = MEM32(eax + 0x90);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5BF8; /* jne: not equal / not zero */

loc_000E5BEC: ;
    eax = esi;
    edi = eax;
    PUSH32(esp, 0x000E5BF5u); RECOMP_ABI_CALL(0x00038F00u, sub_00038F00); /* call 0x00038F00 */

loc_000E5BF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E5BF8: ;
    eax = MEM32(eax + 0x9C);
    edi = eax;
    PUSH32(esp, 0x000E5C05u); RECOMP_ABI_CALL(0x00038F00u, sub_00038F00); /* call 0x00038F00 */

loc_000E5C05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5C10
 * Original: 0x000E5C10 - 0x000E5C68 (88 bytes, 23 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5C10: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(esp) = eax;
    eax = MEM32(0x758D48);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM32(0x758D68) = edx;
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    ebx = eax + 0x696528;
    PUSH32(esp, 0x000E5C57u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5C57: ;
    edx = eax;
    PUSH32(esp, 0x000E5C5Eu); RECOMP_ABI_CALL(0x000E5BB0u, sub_000E5BB0); /* call 0x000E5BB0 */

loc_000E5C5E: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5C70
 * Original: 0x000E5C70 - 0x000E5CA6 (54 bytes, 18 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5C70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5C77u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5C77: ;
    esi = eax;
    PUSH32(esp, 0x000E5C7Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5C7E: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 0x64);
    eax = edx + eax * 4;
    MEM32(esp + 4) = esi;
    esi = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, 0x000E5C9Cu); RECOMP_ABI_CALL(0x00039060u, sub_00039060); /* call 0x00039060 */

loc_000E5C9C: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5CB0
 * Original: 0x000E5CB0 - 0x000E5CF7 (71 bytes, 28 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5CB0: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 0x64);
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5CF5; /* je: equal / zero */

loc_000E5CC9: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E5CF5; /* jae: above or equal (unsigned >=) */

loc_000E5CD5: ;
    eax = ecx + edx * 4;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5CF5; /* je: equal / zero */

loc_000E5CDE: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E5CE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5CE5u); } /* indirect call */
    }

loc_000E5CE8: ;
    ecx = esi;
    eax = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00038DD0(); return; /* tail jmp 0x00038DD0 */

loc_000E5CF5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5D00
 * Original: 0x000E5D00 - 0x000E5D2B (43 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5D00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5D07u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E5D07: ;
    esi = eax;
    PUSH32(esp, 0x000E5D0Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5D0E: ;
    edi = eax;
    PUSH32(esp, 0x000E5D15u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5D15: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0x000E5D1Eu); RECOMP_ABI_CALL(0x000E5CB0u, sub_000E5CB0); /* call 0x000E5CB0 */

loc_000E5D1E: ;
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
 * sub_000E5D30
 * Original: 0x000E5D30 - 0x000E5D5E (46 bytes, 18 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5D30: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 4);
    ecx = ecx + esi * 4;
    ecx = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000E5D51; /* je: equal / zero */

loc_000E5D42: ;
    eax = MEM32(eax + 0x44);
    eax = eax + edx * 4;
    eax = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000E5D50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5D4Du); } /* indirect call */
    }

loc_000E5D50: ;
    esp += 4; return; /* ret */

loc_000E5D51: ;
    eax = MEM32(ecx + 0x8C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000E5D5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5D5Au); } /* indirect call */
    }

loc_000E5D5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5D60
 * Original: 0x000E5D60 - 0x000E5DAC (76 bytes, 28 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5D60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5D66u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5D66: ;
    esi = eax;
    PUSH32(esp, 0x000E5D6Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5D6D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(0x7584F0);
    ecx = MEM32(edx + 4);
    eax = ecx + eax * 4;
    ecx = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E5D97; /* je: equal / zero */

loc_000E5D80: ;
    edx = MEM32(edx + 0x44);
    eax = edx + esi * 4;
    eax = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000E5D8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5D8Bu); } /* indirect call */
    }

loc_000E5D8E: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E5D97: ;
    eax = MEM32(ecx + 0x8C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000E5DA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5DA0u); } /* indirect call */
    }

loc_000E5DA3: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5DB0
 * Original: 0x000E5DB0 - 0x000E5DFB (75 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5DB0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(0x7584F0);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edx = edx + esi * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000E5DD0; /* je: equal / zero */

loc_000E5DC6: ;
    eax = MEM32(eax + 0x44);
    eax = eax + ecx * 4;
    eax = MEM32(eax);
    goto loc_000E5DD8;

loc_000E5DD0: ;
    ecx = MEM32(edx);
    eax = MEM32(ecx + 0x8C);

loc_000E5DD8: ;
    edi = MEM32(eax + 0x9C);
    esi = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5DF8; /* je: equal / zero */

loc_000E5DE6: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E5DEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5DEBu); } /* indirect call */
    }

loc_000E5DEE: ;
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5DE6; /* jne: not equal / not zero */

loc_000E5DF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5E00
 * Original: 0x000E5E00 - 0x000E5E2A (42 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5E00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5E07u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5E07: ;
    ebx = eax;
    PUSH32(esp, 0x000E5E0Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5E0E: ;
    esi = eax;
    PUSH32(esp, 0x000E5E15u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5E15: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E5E1Du); RECOMP_ABI_CALL(0x000E5DB0u, sub_000E5DB0); /* call 0x000E5DB0 */

loc_000E5E1D: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5E30
 * Original: 0x000E5E30 - 0x000E5E7F (79 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5E30: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 0x44);
    eax = ecx + edx * 4;
    ecx = MEM32(esp + 4);
    eax = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    ecx = MEM32(eax + 0x9C);
    if (CMP_EQ(_fa, _fb)) goto loc_000E5E68; /* je: equal / zero */

loc_000E5E4D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5E7E; /* je: equal / zero */

loc_000E5E51: ;
    _fa = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x38), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5E7E; /* jne: not equal / not zero */

loc_000E5E56: ;
    MEM32(ecx + 0x38) = 1;
    MEM8(ecx + 0x3C) = 0xFF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00038DD0(); return; /* tail jmp 0x00038DD0 */

loc_000E5E68: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5E7E; /* je: equal / zero */

loc_000E5E6C: ;
    _fa = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x38), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5E7E; /* je: equal / zero */

loc_000E5E71: ;
    MEM32(ecx + 0x38) = edx;
    MEM8(ecx + 0x3C) = LO8(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00038DD0(); return; /* tail jmp 0x00038DD0 */

loc_000E5E7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5E80
 * Original: 0x000E5E80 - 0x000E5EA1 (33 bytes, 12 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5E86u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5E86: ;
    esi = eax;
    PUSH32(esp, 0x000E5E8Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5E8D: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0x000E5E95u); RECOMP_ABI_CALL(0x000E5E30u, sub_000E5E30); /* call 0x000E5E30 */

loc_000E5E95: ;
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
 * sub_000E5E9F
 * Original: 0x000E5E9F - 0x000E5EA1 (2 bytes, 2 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5E9F(void)
{

loc_000E5E9F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5EB0
 * Original: 0x000E5EB0 - 0x000E5EF6 (70 bytes, 21 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5EB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5EB7u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5EB7: ;
    esi = eax;
    PUSH32(esp, 0x000E5EBEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5EBE: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    ebx = MEM32(edx + esi * 4);
    edx = edx + esi * 4;
    edx = ecx + eax * 2 + 0x194;
    MEM32(ecx + eax * 4 + 0x104) = ebx;
    eax = eax + eax * 4;
    PUSH32(esp, edx);
    ecx = ecx + eax * 4 + 0x11C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E5EECu); RECOMP_ABI_CALL(0x0001A550u, sub_0001A550); /* call 0x0001A550 */

loc_000E5EEC: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5F00
 * Original: 0x000E5F00 - 0x000E5F81 (129 bytes, 43 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5F00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5F0Au); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E5F0A: ;
    esi = eax;
    PUSH32(esp, 0x000E5F11u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E5F11: ;
    edi = eax;
    PUSH32(esp, 0x000E5F18u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E5F18: ;
    ebx = eax;
    PUSH32(esp, 0x000E5F1Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5F1F: ;
    ebp = eax;
    PUSH32(esp, 0x000E5F26u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5F26: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000E5F2Fu); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E5F2F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E5F3Eu); RECOMP_ABI_CALL(0x000187F0u, sub_000187F0); /* call 0x000187F0 */

loc_000E5F3E: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
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
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5F90
 * Original: 0x000E5F90 - 0x000E5FD9 (73 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5F90: ;
    PUSH32(esp, 0x000E5F95u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5F95: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E5F9Bu); RECOMP_ABI_CALL(0x00018990u, sub_00018990); /* call 0x00018990 */

loc_000E5F9B: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000E5FE0
 * Original: 0x000E5FE0 - 0x000E6027 (71 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5FE0: ;
    PUSH32(esp, 0x000E5FE5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E5FE5: ;
    edx = eax;
    PUSH32(esp, 0x000E5FECu); RECOMP_ABI_CALL(0x00018BD0u, sub_00018BD0); /* call 0x00018BD0 */

loc_000E5FEC: ;
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
 * sub_000E6030
 * Original: 0x000E6030 - 0x000E60AE (126 bytes, 34 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6030: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E6054u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E6054: ;
    edi = eax;
    PUSH32(esp, 0x000E605Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E605B: ;
    ebx = eax;
    PUSH32(esp, 0x000E6062u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E6062: ;
    ecx = MEM32(0x7584F0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E6070u); RECOMP_ABI_CALL(0x00019010u, sub_00019010); /* call 0x00019010 */

loc_000E6070: ;
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
 * sub_000E60B0
 * Original: 0x000E60B0 - 0x000E611A (106 bytes, 24 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E60B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E60B0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x000E60D2u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E60D2: ;
    ecx = MEM32(0x7584F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E60DEu); RECOMP_ABI_CALL(0x000190C0u, sub_000190C0); /* call 0x000190C0 */

loc_000E60DE: ;
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
 * sub_000E6120
 * Original: 0x000E6120 - 0x000E6169 (73 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E6120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6129u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E6129: ;
    esi = eax;
    PUSH32(esp, 0x000E6130u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E6130: ;
    edi = eax;
    PUSH32(esp, 0x000E6137u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E6137: ;
    ebx = eax;
    PUSH32(esp, 0x000E613Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E613E: ;
    ebp = eax;
    PUSH32(esp, 0x000E6145u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E6145: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = edx + eax * 4;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    PUSH32(esp, ebx);
    edx = ebp;
    PUSH32(esp, 0x000E615Du); RECOMP_ABI_CALL(0x0003A490u, sub_0003A490); /* call 0x0003A490 */

loc_000E615D: ;
    eax = MEM32(esp + 0x14);
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
 * sub_000E6170
 * Original: 0x000E6170 - 0x000E61E4 (116 bytes, 43 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6170: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 4);
    eax = ecx + edx * 4;
    edx = MEM32(eax);
    eax = edi;
    esi = eax + 1;

loc_000E6188: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6188; /* jne: not equal / not zero */

loc_000E618F: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_000E61A8; /* jne: not equal / not zero */

loc_000E6197: ;
    eax = MEM32(0x758D38);
    MEM32(0x758D38) = 0;
    goto loc_000E61AA;

loc_000E61A8: ;
    eax = edi;

loc_000E61AA: ;
    esi = MEM32(edx + 0xAC);
    ecx = MEM32(esi + 4);
    ebx = edx + 0xA8;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E61C9u); RECOMP_ABI_CALL(0x0003AC70u, sub_0003AC70); /* call 0x0003AC70 */

loc_000E61C9: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0x000E61D7u); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_000E61D7: ;
    MEM32(esi + 4) = edi;
    edx = MEM32(edi + 4);
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E61F0
 * Original: 0x000E61F0 - 0x000E620F (31 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E61F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E61F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E61F6u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E61F6: ;
    esi = eax;
    PUSH32(esp, 0x000E61FDu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E61FD: ;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0x000E6206u); RECOMP_ABI_CALL(0x000E6170u, sub_000E6170); /* call 0x000E6170 */

loc_000E6206: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E6210
 * Original: 0x000E6210 - 0x000E623D (45 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E6217u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E6217: ;
    esi = eax;
    PUSH32(esp, 0x000E621Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E621E: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    ebx = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E6233u); RECOMP_ABI_CALL(0x0003A7C0u, sub_0003A7C0); /* call 0x0003A7C0 */

loc_000E6233: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E6240
 * Original: 0x000E6240 - 0x000E6296 (86 bytes, 19 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6240: ;
    PUSH32(esp, 0x000E6245u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E6245: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    ecx = edx + eax * 4;
    ecx = MEM32(ecx);
    edx = MEM32(0x758D48);
    ecx = MEM32(ecx + 0xB0);
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
 * sub_000E62A0
 * Original: 0x000E62A0 - 0x000E62D6 (54 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E62A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E62A0: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 4);
    eax = ecx + edx * 4;
    eax = MEM32(eax);
    MEM8(0x65F780) = 0;
    eax = MEM32(eax + 0xBC);
    PUSH32(esp, 0x2A);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x42905C);
    PUSH32(esp, 0x65F780);
    PUSH32(esp, 0x000E62CDu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000E62CD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x65F780;
    esp += 4; return; /* ret */

}

/**
 * sub_000E62E0
 * Original: 0x000E62E0 - 0x000E6328 (72 bytes, 19 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E62E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E62E0: ;
    PUSH32(esp, 0x000E62E5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E62E5: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    eax = edx + eax * 4;
    eax = MEM32(eax);
    MEM8(0x65F780) = 0;
    eax = MEM32(eax + 0xBC);
    PUSH32(esp, 0x2A);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x42905C);
    PUSH32(esp, 0x65F780);
    PUSH32(esp, 0x000E6313u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000E6313: ;
    PUSH32(esp, 0x65F780);
    PUSH32(esp, 0x000E631Du); RECOMP_ABI_CALL(0x000E6CB0u, sub_000E6CB0); /* call 0x000E6CB0 */

loc_000E631D: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6330
 * Original: 0x000E6330 - 0x000E635B (43 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6330: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E6336u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E6336: ;
    esi = eax;
    PUSH32(esp, 0x000E633Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E633D: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    eax = edx + eax * 4;
    edx = esi;
    esi = MEM32(eax);
    PUSH32(esp, 0x000E6352u); RECOMP_ABI_CALL(0x0003A870u, sub_0003A870); /* call 0x0003A870 */

loc_000E6352: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E6360
 * Original: 0x000E6360 - 0x000E6428 (200 bytes, 78 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6360: ;
    eax = MEM32(0x758D38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E637E; /* jne: not equal / not zero */

loc_000E6369: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x000E6373u); RECOMP_ABI_CALL(0x00346DF4u, sub_00346DF4); /* call 0x00346DF4 */

loc_000E6373: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D38) = eax;
    MEM8(eax) = 0;

loc_000E637E: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 1;

loc_000E6387: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6387; /* jne: not equal / not zero */

loc_000E638E: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x100;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E63C4; /* je: equal / zero */

loc_000E6399: ;
    /* nop */

loc_000E63A0: ;
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E63C4; /* je: equal / zero */

loc_000E63A6: ;
    ecx = ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ecx + 1;
    /* nop */

loc_000E63B0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E63B0; /* jne: not equal / not zero */

loc_000E63B7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x100;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E63A0; /* jb: below (unsigned <) */

loc_000E63C4: ;
    ecx = ebx;
    edi = ecx + 1;
    /* nop */

loc_000E63D0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E63D0; /* jne: not equal / not zero */

loc_000E63D7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x100;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E6425; /* jbe: below or equal (unsigned <=) */

loc_000E63E4: ;
    ecx = ebx;
    edi = ecx + 1;
    /* nop */

loc_000E63F0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E63F0; /* jne: not equal / not zero */

loc_000E63F7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E6403u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000E6403: ;
    eax = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    goto loc_000E6410;

    /* nop */

loc_000E6410: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6410; /* jne: not equal / not zero */

loc_000E6417: ;
    ecx = MEM32(0x758D38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + esi) = 0;

loc_000E6425: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E6430
 * Original: 0x000E6430 - 0x000E6446 (22 bytes, 8 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6430: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E6436u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E6436: ;
    ebx = eax;
    PUSH32(esp, 0x000E643Du); RECOMP_ABI_CALL(0x000E6360u, sub_000E6360); /* call 0x000E6360 */

loc_000E643D: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E6450
 * Original: 0x000E6450 - 0x000E6492 (66 bytes, 19 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6450: ;
    eax = MEM32(0x7584F0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    eax = ecx + edx * 4;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ebx = esi + 0xA8;
    PUSH32(esp, 0x000E646Au); RECOMP_ABI_CALL(0x00032470u, sub_00032470); /* call 0x00032470 */

loc_000E646A: ;
    edx = MEM32(esi + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xC0) = eax;
    eax = MEM32(esi + 0xAC);
    ecx = MEM32(eax);
    MEM32(esi + 0xB4) = ecx;
    MEM32(esi + 0xB8) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E64A0
 * Original: 0x000E64A0 - 0x000E64F0 (80 bytes, 22 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E64A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E64A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E64A7u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E64A7: ;
    ecx = MEM32(0x7584F0);
    edx = MEM32(ecx + 4);
    esi = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    ebx = esi + 0xA8;
    PUSH32(esp, 0x000E64C1u); RECOMP_ABI_CALL(0x00032470u, sub_00032470); /* call 0x00032470 */

loc_000E64C1: ;
    edx = MEM32(esi + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xC0) = eax;
    eax = MEM32(esi + 0xAC);
    ecx = MEM32(eax);
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xB4) = ecx;
    MEM32(esi + 0xB8) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E64F0
 * Original: 0x000E64F0 - 0x000E6530 (64 bytes, 24 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E64F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E64F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x4713A0) = eax;
    MEM32(0x4713A4) = eax;
    MEM32(0x4713A8) = eax;
    MEM32(0x4713AC) = eax;
    MEM32(0x4713B0) = eax;
    MEM16(0x4713B4) = LO16(eax);
    eax = MEM32(esp + 4);
    MEM32(0x758CC0) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6530
 * Original: 0x000E6530 - 0x000E6582 (82 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6530: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000E653Bu); RECOMP_ABI_CALL(0x000F84A0u, sub_000F84A0); /* call 0x000F84A0 */

loc_000E653B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6549; /* je: equal / zero */

loc_000E6540: ;
    SET_LO8(ecx, MEM8(esi + eax + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6540; /* jne: not equal / not zero */

loc_000E6549: ;
    SET_LO8(eax, MEM8(esi + eax + -1));
    PUSH32(esp, 1);
    ecx = esp + 0xB;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0x000E6562u); RECOMP_ABI_CALL(0x00349695u, sub_00349695); /* call 0x00349695 */

loc_000E6562: ;
    eax = MEM32(0x758CC0);
    SET_LO16(ecx, MEM16(esp + 0x14));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 2 + 0x4713A0) = LO16(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758CC0) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6590
 * Original: 0x000E6590 - 0x000E65BF (47 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6590: ;
    eax = MEM32(0x758D48);
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
    PUSH32(esp, 0x000E65B6u); RECOMP_ABI_CALL(0x000E6530u, sub_000E6530); /* call 0x000E6530 */

loc_000E65B6: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E65C0
 * Original: 0x000E65C0 - 0x000E661B (91 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E65C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E65C0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB);
    MEM32(esp + 0x20) = eax;
    eax = esp + 8;
    PUSH32(esp, 0x470160);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E65DEu); RECOMP_ABI_CALL(0x00347415u, sub_00347415); /* call 0x00347415 */

loc_000E65DE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esp + 4;
    PUSH32(esp, 0x000E65EAu); RECOMP_ABI_CALL(0x000DC9C0u, sub_000DC9C0); /* call 0x000DC9C0 */

loc_000E65EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000E6601; /* je: equal / zero */

loc_000E65EF: ;
    eax = 1;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x000E65FDu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000E65FD: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E6601: ;
    ecx = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), LO16(eax) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x000E6617u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000E6617: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6620
 * Original: 0x000E6620 - 0x000E6660 (64 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6620: ;
    PUSH32(esp, 0x000E6625u); RECOMP_ABI_CALL(0x000E65C0u, sub_000E65C0); /* call 0x000E65C0 */

loc_000E6625: ;
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
 * sub_000E6660
 * Original: 0x000E6660 - 0x000E66E9 (137 bytes, 43 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6660: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB);
    MEM32(esp + 0x20) = eax;
    eax = esp + 8;
    PUSH32(esp, 0x470160);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E667Eu); RECOMP_ABI_CALL(0x00347415u, sub_00347415); /* call 0x00347415 */

loc_000E667E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esp + 4;
    PUSH32(esp, 0x000E668Au); RECOMP_ABI_CALL(0x000DC9C0u, sub_000DC9C0); /* call 0x000DC9C0 */

loc_000E668A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E66A1; /* je: equal / zero */

loc_000E668E: ;
    eax = 1;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x000E669Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000E669D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E66A1: ;
    ebx = esp + 4;
    PUSH32(esp, 0x000E66AAu); RECOMP_ABI_CALL(0x000DC9C0u, sub_000DC9C0); /* call 0x000DC9C0 */

loc_000E66AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E66B7; /* je: equal / zero */

loc_000E66AE: ;
    PUSH32(esp, edi);
    edi = ebx;
    PUSH32(esp, 0x000E66B6u); RECOMP_ABI_CALL(0x000D9FD0u, sub_000D9FD0); /* call 0x000D9FD0 */

loc_000E66B6: ;
    POP32(esp, edi);

loc_000E66B7: ;
    _fa = (uint32_t)(MEM16(esp + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 4), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E66D2; /* jne: not equal / not zero */

loc_000E66BF: ;
    eax = 2;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x000E66CEu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000E66CE: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E66D2: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000E66DBu); RECOMP_ABI_CALL(0x000D9DE0u, sub_000D9DE0); /* call 0x000D9DE0 */

loc_000E66DB: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, ebx);
    PUSH32(esp, 0x000E66E5u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000E66E5: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E66F0
 * Original: 0x000E66F0 - 0x000E6730 (64 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E66F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E66F0: ;
    PUSH32(esp, 0x000E66F5u); RECOMP_ABI_CALL(0x000E6660u, sub_000E6660); /* call 0x000E6660 */

loc_000E66F5: ;
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
 * sub_000E6730
 * Original: 0x000E6730 - 0x000E6740 (16 bytes, 7 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6730: ;
    PUSH32(esp, 0x000E6735u); RECOMP_ABI_CALL(0x000D9610u, sub_000D9610); /* call 0x000D9610 */

loc_000E6735: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6740
 * Original: 0x000E6740 - 0x000E678E (78 bytes, 20 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6740: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E674Au); RECOMP_ABI_CALL(0x000D9770u, sub_000D9770); /* call 0x000D9770 */

loc_000E674A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E6750u); RECOMP_ABI_CALL(0x000D9840u, sub_000D9840); /* call 0x000D9840 */

loc_000E6750: ;
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
    eax = MEM32(esp + 0x10);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6790
 * Original: 0x000E6790 - 0x000E67D7 (71 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6790: ;
    PUSH32(esp, 0x000E6795u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E6795: ;
    ecx = eax;
    PUSH32(esp, 0x000E679Cu); RECOMP_ABI_CALL(0x000D98A0u, sub_000D98A0); /* call 0x000D98A0 */

loc_000E679C: ;
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
 * sub_000E67E0
 * Original: 0x000E67E0 - 0x000E6823 (67 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E67E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E67E0: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(0x765518);
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
 * sub_000E6830
 * Original: 0x000E6830 - 0x000E68A2 (114 bytes, 33 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6830: ;
    SET_LO8(edx, MEM8(0x76BAB0));
    ecx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E684C; /* jne: not equal / not zero */

loc_000E6841: ;
    MEM32(0x76BAB0) = MEM32(0x76BAB0) | ecx;
    _fa = (uint32_t)(MEM32(0x76BAB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x76BAAC) = eax;

loc_000E684C: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6860; /* je: equal / zero */

loc_000E6852: ;
    MEM32(0x76BAA8) = eax;
    eax = MEM32(0x765514);
    eax = MEM32(eax);
    goto loc_000E6873;

loc_000E6860: ;
    eax = MEM32(0x76BAA8);
    ecx = MEM32(0x76BAAC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x76BAA8) = eax;
    eax = MEM32(ecx);

loc_000E6873: ;
    MEM32(0x76BAAC) = eax;
    edx = MEM32(eax + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E6882u); RECOMP_ABI_CALL(0x00347558u, sub_00347558); /* call 0x00347558 */

loc_000E6882: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x000E688Cu); RECOMP_ABI_CALL(0x00346DF4u, sub_00346DF4); /* call 0x00346DF4 */

loc_000E688C: ;
    edi = eax;
    eax = MEM32(0x76BAAC);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E689Eu); RECOMP_ABI_CALL(0x002FC0A0u, sub_002FC0A0); /* call 0x002FC0A0 */

loc_000E689E: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E68B0
 * Original: 0x000E68B0 - 0x000E68CC (28 bytes, 9 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E68B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E68B0: ;
    PUSH32(esp, 0x000E68B5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E68B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E68BBu); RECOMP_ABI_CALL(0x000E6830u, sub_000E6830); /* call 0x000E6830 */

loc_000E68BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E68C1u); RECOMP_ABI_CALL(0x000E6CB0u, sub_000E6CB0); /* call 0x000E6CB0 */

loc_000E68C1: ;
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
 * sub_000E68D0
 * Original: 0x000E68D0 - 0x000E6914 (68 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E68D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E68D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E68FD; /* je: equal / zero */

loc_000E68DA: ;
    edx = eax + 1;
    /* nop */

loc_000E68E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E68E0; /* jne: not equal / not zero */

loc_000E68E7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E68F3u); RECOMP_ABI_CALL(0x00346DF4u, sub_00346DF4); /* call 0x00346DF4 */

loc_000E68F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x000E68FDu); RECOMP_ABI_CALL(0x002FC110u, sub_002FC110); /* call 0x002FC110 */

loc_000E68FD: ;
    eax = edi;
    PUSH32(esp, 0x000E6904u); RECOMP_ABI_CALL(0x000DCA90u, sub_000DCA90); /* call 0x000DCA90 */

loc_000E6904: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6911; /* je: equal / zero */

loc_000E6908: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E690Eu); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000E690E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E6911: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E6920
 * Original: 0x000E6920 - 0x000E6932 (18 bytes, 5 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6920: ;
    PUSH32(esp, 0x000E6925u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_000E6925: ;
    PUSH32(esp, 0x000E692Au); RECOMP_ABI_CALL(0x000E68D0u, sub_000E68D0); /* call 0x000E68D0 */

loc_000E692A: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6940
 * Original: 0x000E6940 - 0x000E695A (26 bytes, 7 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6940: ;
    PUSH32(esp, 0x000E6945u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_000E6945: ;
    PUSH32(esp, 0x470160);
    PUSH32(esp, 0x000E694Fu); RECOMP_ABI_CALL(0x000E6CB0u, sub_000E6CB0); /* call 0x000E6CB0 */

loc_000E694F: ;
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
 * sub_000E6960
 * Original: 0x000E6960 - 0x000E69AC (76 bytes, 33 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6960: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000E69AA; /* je: equal / zero */

loc_000E696C: ;
    eax = esi;
    edx = eax + 1;

loc_000E6971: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6971; /* jne: not equal / not zero */

loc_000E6978: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + eax + 2;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E6986u); RECOMP_ABI_CALL(0x00346DF4u, sub_00346DF4); /* call 0x00346DF4 */

loc_000E6986: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x000E6990u); RECOMP_ABI_CALL(0x002FC110u, sub_002FC110); /* call 0x002FC110 */

loc_000E6990: ;
    ebx = edi;
    PUSH32(esp, 0x000E6997u); RECOMP_ABI_CALL(0x000DA140u, sub_000DA140); /* call 0x000DA140 */

loc_000E6997: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E69A6; /* je: equal / zero */

loc_000E699D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E69A3u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000E69A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E69A6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);

loc_000E69AA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025C560
 * Original: 0x0025C560 - 0x0025C57F (31 bytes, 12 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C560: ;
    edx = MEM32(edx + 0x18);
    edx = MEM32(edx + 4);
    edx = MEM32(edx + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x230);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0025C57C; /* jge: greater or equal (signed >=) */

loc_0025C577: ;
    eax = 1;

loc_0025C57C: ;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C580
 * Original: 0x0025C580 - 0x0025C665 (229 bytes, 73 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C580: ;
    eax = MEM32(0x442058);
    PUSH32(esp, esi);
    esi = MEM32(0x75850C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C63C; /* je: equal / zero */

loc_0025C594: ;
    PUSH32(esp, 0xCC00008Eu);
    eax = 0x470148;
    PUSH32(esp, 0x0025C5A3u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025C5A3: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C5B9; /* je: equal / zero */

loc_0025C5B0: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C5C3; /* je: equal / zero */

loc_0025C5B9: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C5CF; /* je: equal / zero */

loc_0025C5C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C5CF; /* jne: not equal / not zero */

loc_0025C5C8: ;
    ecx = 0xCC00008Eu;
    goto loc_0025C5D6;

loc_0025C5CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025C5F3; /* je: equal / zero */

loc_0025C5D6: ;
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
    PUSH32(esp, 0x0025C5EEu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025C5EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025C5F8;

loc_0025C5F3: ;
    eax = 0xCC00008Eu;

loc_0025C5F8: ;
    ecx = MEM32(0x44AA24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(0x767210) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0025C60B; /* jne: not equal / not zero */

loc_0025C607: ;
    eax = ecx;
    goto loc_0025C627;

loc_0025C60B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C617; /* jne: not equal / not zero */

loc_0025C610: ;
    eax = MEM32(0x67B6A0);
    goto loc_0025C621;

loc_0025C617: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C621; /* jne: not equal / not zero */

loc_0025C61C: ;
    eax = MEM32(0x67B6A4);

loc_0025C621: ;
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx + 4);

loc_0025C627: ;
    eax = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x94;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6A3F3C) = eax;
    MEM32(0x442058) = esi;
    goto loc_0025C641;

loc_0025C63C: ;
    eax = MEM32(0x6A3F3C);

loc_0025C641: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    edx = 1;
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0025C65C; /* jne: not equal / not zero */

loc_0025C651: ;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0025C65C: ;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax);
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C670
 * Original: 0x0025C670 - 0x0025C6B3 (67 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025C670: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x44);
    ecx = MEM32(eax + 0x310);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C68E; /* jne: not equal / not zero */

loc_0025C683: ;
    MEM32(eax + 0x304) = 0;
    esp += 4; return; /* ret */

loc_0025C68E: ;
    ecx = MEM32(eax + 0x304);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025C6A8; /* je: equal / zero */

loc_0025C698: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025C6B2; /* jne: not equal / not zero */

loc_0025C69D: ;
    MEM32(eax + 0x304) = 2;
    esp += 4; return; /* ret */

loc_0025C6A8: ;
    MEM32(eax + 0x304) = 1;

loc_0025C6B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0025C6C0
 * Original: 0x0025C6C0 - 0x0025C73F (127 bytes, 36 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025C6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025C6C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x758D68);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D6C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D64);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(edx + 4);
    esi = MEM32(ecx + 0x44);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D6C) = eax;
    eax = MEM32(esi + 0x230);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D64) = ecx;
    MEM32(0x758D68) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0025C71E; /* jle: less or equal (signed <=) */

loc_0025C70A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x230) = eax;
    if ((_fa != 0)) goto loc_0025C71E; /* jne: not equal / not zero */

loc_0025C713: ;
    PUSH32(esp, 0x0025C718u); RECOMP_ABI_CALL(0x000F8CC0u, sub_000F8CC0); /* call 0x000F8CC0 */

loc_0025C718: ;
    MEM32(esi + 0x230) = MEM32(esi + 0x230) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x230)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0025C71E: ;
    eax = MEM32(esp + 0x10);
    MEM32(0x758D70) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x758D64) = ebp;
    POP32(esp, ebp);
    MEM32(0x758D6C) = ebx;
    MEM32(0x758D68) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025CF40
 * Original: 0x0025CF40 - 0x0025D3B0 (1136 bytes, 306 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0025CF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025CF40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x758D70);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x758D68);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edi + 0x18);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(0x44204C);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x44);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758D64) = eax;
    MEM32(0x758D68) = eax;
    eax = MEM32(0x75850C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(0x758D70) = edi;
    MEM32(0x758D6C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0025D1EA; /* je: equal / zero */

loc_0025CFE7: ;
    PUSH32(esp, 0xCC00008Eu);
    eax = 0x470148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025CFF6u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025CFF6: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D00C; /* je: equal / zero */

loc_0025D003: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D014; /* je: equal / zero */

loc_0025D00C: ;
    _fa = (uint32_t)(MEM32(0x43B174)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B174), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D020; /* je: equal / zero */

loc_0025D014: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D020; /* jne: not equal / not zero */

loc_0025D019: ;
    ecx = 0xCC00008Eu;
    goto loc_0025D027;

loc_0025D020: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025D044; /* je: equal / zero */

loc_0025D027: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D03Fu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D03F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025D049;

loc_0025D044: ;
    eax = 0xCC00008Eu;

loc_0025D049: ;
    edx = MEM32(0x44AA24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ebx = MEM32(0x67B6A4);
    esi = MEM32(0x67B6A0);
    MEM32(0x7671F8) = eax;
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0025D06A; /* jne: not equal / not zero */

loc_0025D066: ;
    ecx = edx;
    goto loc_0025D080;

loc_0025D06A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D073; /* jne: not equal / not zero */

loc_0025D06F: ;
    ecx = esi;
    goto loc_0025D07A;

loc_0025D073: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D07A; /* jne: not equal / not zero */

loc_0025D078: ;
    ecx = ebx;

loc_0025D07A: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 4);

loc_0025D080: ;
    ecx = MEM32(ecx + 0x44);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x118;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(0x76BEE0) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0025D097; /* jne: not equal / not zero */

loc_0025D093: ;
    eax = edx;
    goto loc_0025D0AD;

loc_0025D097: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D0A0; /* jne: not equal / not zero */

loc_0025D09C: ;
    eax = esi;
    goto loc_0025D0A7;

loc_0025D0A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D0A7; /* jne: not equal / not zero */

loc_0025D0A5: ;
    eax = ebx;

loc_0025D0A7: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);

loc_0025D0AD: ;
    eax = MEM32(eax + 0x44);
    MEM32(0x76BEDC) = eax;
    PUSH32(esp, 0xE0001F6);
    eax = 0x470148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D0C4u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D0C4: ;
    esi = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D0DA; /* je: equal / zero */

loc_0025D0D1: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D108; /* je: equal / zero */

loc_0025D0DA: ;
    ebx = MEM32(0x43B174);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D10E; /* jne: not equal / not zero */

loc_0025D0E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025D11A; /* je: equal / zero */

loc_0025D0EB: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D103u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D103: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025D11F;

loc_0025D108: ;
    ebx = MEM32(0x43B174);

loc_0025D10E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D0E4; /* jne: not equal / not zero */

loc_0025D113: ;
    ecx = 0xE0001F6;
    goto loc_0025D0EB;

loc_0025D11A: ;
    eax = 0xE0001F6;

loc_0025D11F: ;
    MEM32(0x7671F4) = eax;
    PUSH32(esp, 0xE00027F);
    eax = 0x470148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D133u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D133: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D143; /* je: equal / zero */

loc_0025D13A: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D147; /* je: equal / zero */

loc_0025D143: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D153; /* je: equal / zero */

loc_0025D147: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D153; /* jne: not equal / not zero */

loc_0025D14C: ;
    ecx = 0xE00027F;
    goto loc_0025D15A;

loc_0025D153: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025D177; /* je: equal / zero */

loc_0025D15A: ;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D172u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D172: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025D17C;

loc_0025D177: ;
    eax = 0xE00027F;

loc_0025D17C: ;
    MEM32(0x7671EC) = eax;
    PUSH32(esp, 0xBB00003Bu);
    eax = 0x470148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D190u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D190: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D1A0; /* je: equal / zero */

loc_0025D197: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D1A4; /* je: equal / zero */

loc_0025D1A0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D1B0; /* je: equal / zero */

loc_0025D1A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D1B0; /* jne: not equal / not zero */

loc_0025D1A9: ;
    ecx = 0xBB00003Bu;
    goto loc_0025D1B7;

loc_0025D1B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025D1D4; /* je: equal / zero */

loc_0025D1B7: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D1CFu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D1CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025D1D9;

loc_0025D1D4: ;
    eax = 0xBB00003Bu;

loc_0025D1D9: ;
    MEM32(0x7671F0) = eax;
    eax = MEM32(0x75850C);
    MEM32(0x44204C) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025D1EA: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(0x76BEE0);
    eax = MEM32(ebp + 0xC);
    MEM32(edx) = ecx;
    ecx = MEM32(0x76BEDC);
    MEM32(ecx) = eax;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D207u); RECOMP_ABI_CALL(0x0025C140u, sub_0025C140); /* call 0x0025C140 */

loc_0025D207: ;
    _fa = (uint32_t)(MEM32(0x43B140)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B140), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D259; /* je: equal / zero */

loc_0025D20F: ;
    eax = MEM32(0x43B14C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D236; /* je: equal / zero */

loc_0025D219: ;
    _fa = (uint32_t)(MEM32(0x43B144)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B144), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D236; /* je: equal / zero */

loc_0025D221: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    MEM32(eax * 4 + 0x471390) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D231u); RECOMP_ABI_CALL(0x000DC6A0u, sub_000DC6A0); /* call 0x000DC6A0 */

loc_0025D231: ;
    eax = MEM32(0x43B14C);

loc_0025D236: ;
    _fa = (uint32_t)(MEM32(0x43B140)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B140), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D259; /* je: equal / zero */

loc_0025D23E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D259; /* je: equal / zero */

loc_0025D243: ;
    _fa = (uint32_t)(MEM32(0x43B144)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B144), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D259; /* je: equal / zero */

loc_0025D24B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax * 4 + 0x471380) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D259u); RECOMP_ABI_CALL(0x000DC700u, sub_000DC700); /* call 0x000DC700 */

loc_0025D259: ;
    eax = MEM32(0x7671F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edx = MEM32(0x758D6C);
    MEM32(0x758C8C) = ebx;
    MEM32(esp + 0x54) = 0x6F;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0025D286; /* jne: not equal / not zero */

loc_0025D27F: ;
    eax = MEM32(0x67B6A0);
    goto loc_0025D290;

loc_0025D286: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D290; /* jne: not equal / not zero */

loc_0025D28B: ;
    eax = MEM32(0x67B6A4);

loc_0025D290: ;
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D299u); RECOMP_ABI_CALL(0x00101320u, sub_00101320); /* call 0x00101320 */

loc_0025D299: ;
    eax = MEM32(0x7671EC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D2A3u); RECOMP_ABI_CALL(0x001A0200u, sub_001A0200); /* call 0x001A0200 */

loc_0025D2A3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D2ACu); RECOMP_ABI_CALL(0x000E7770u, sub_000E7770); /* call 0x000E7770 */

loc_0025D2AC: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(0x44AA20);
    ecx = ecx & 0xFBFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = edi;
    MEM32(edi + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D2C6u); RECOMP_ABI_CALL(0x00028160u, sub_00028160); /* call 0x00028160 */

loc_0025D2C6: ;
    ecx = MEM32(0x44AA20);
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    eax = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] - MEMF(0x758D3C); /* subss */
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    _fb = (uint32_t)(0x478) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x478;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x19);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, ecx);
    MEMF(eax + 0x308) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D300u); RECOMP_ABI_CALL(0x002FCD80u, sub_002FCD80); /* call 0x002FCD80 */

loc_0025D300: ;
    eax = MEM32(0x44AA20);
    eax = MEM32(eax + 0x478);
    ecx = 0xFF000000u;
    edi = 0x620C;
    edx = 0xD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D31Fu); RECOMP_ABI_CALL(0x002FD490u, sub_002FD490); /* call 0x002FD490 */

loc_0025D31F: ;
    edi = MEM32(0x44AA20);
    eax = MEM32(edi + 0x478);
    PUSH32(esp, 0x3F000000);
    esi = 0x61A8;
    edx = 0xD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D33Fu); RECOMP_ABI_CALL(0x002FD640u, sub_002FD640); /* call 0x002FD640 */

loc_0025D33F: ;
    eax = MEM32(edi + 0x478);
    PUSH32(esp, ebx);
    esi = 0x61AA;
    edx = 0xD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D355u); RECOMP_ABI_CALL(0x002FD640u, sub_002FD640); /* call 0x002FD640 */

loc_0025D355: ;
    eax = MEM32(edi + 0x478);
    PUSH32(esp, 0x49742400);
    esi = 0x61A9;
    edx = 0xD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D36Fu); RECOMP_ABI_CALL(0x002FD640u, sub_002FD640); /* call 0x002FD640 */

loc_0025D36F: ;
    edx = MEM32(0x7671F0);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025D382u); RECOMP_ABI_CALL(0x002DF060u, sub_002DF060); /* call 0x002DF060 */

loc_0025D382: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(0x758D64) = eax;
    MEM32(0x758D68) = ecx;
    MEM32(0x758D6C) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0025CF86
 * Original: 0x0025CF86 - 0x0025D3B0 (1066 bytes, 285 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025CF86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025CF86: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758D64) = eax;
    MEM32(0x758D68) = eax;
    eax = MEM32(0x75850C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(0x758D70) = edi;
    MEM32(0x758D6C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0025D1EA; /* je: equal / zero */

loc_0025CFE7: ;
    PUSH32(esp, 0xCC00008Eu);
    eax = 0x470148;
    PUSH32(esp, 0x0025CFF6u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025CFF6: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D00C; /* je: equal / zero */

loc_0025D003: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D014; /* je: equal / zero */

loc_0025D00C: ;
    _fa = (uint32_t)(MEM32(0x43B174)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B174), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D020; /* je: equal / zero */

loc_0025D014: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D020; /* jne: not equal / not zero */

loc_0025D019: ;
    ecx = 0xCC00008Eu;
    goto loc_0025D027;

loc_0025D020: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025D044; /* je: equal / zero */

loc_0025D027: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025D03Fu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D03F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025D049;

loc_0025D044: ;
    eax = 0xCC00008Eu;

loc_0025D049: ;
    edx = MEM32(0x44AA24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ebx = MEM32(0x67B6A4);
    esi = MEM32(0x67B6A0);
    MEM32(0x7671F8) = eax;
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0025D06A; /* jne: not equal / not zero */

loc_0025D066: ;
    ecx = edx;
    goto loc_0025D080;

loc_0025D06A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D073; /* jne: not equal / not zero */

loc_0025D06F: ;
    ecx = esi;
    goto loc_0025D07A;

loc_0025D073: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D07A; /* jne: not equal / not zero */

loc_0025D078: ;
    ecx = ebx;

loc_0025D07A: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 4);

loc_0025D080: ;
    ecx = MEM32(ecx + 0x44);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x118;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(0x76BEE0) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0025D097; /* jne: not equal / not zero */

loc_0025D093: ;
    eax = edx;
    goto loc_0025D0AD;

loc_0025D097: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D0A0; /* jne: not equal / not zero */

loc_0025D09C: ;
    eax = esi;
    goto loc_0025D0A7;

loc_0025D0A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D0A7; /* jne: not equal / not zero */

loc_0025D0A5: ;
    eax = ebx;

loc_0025D0A7: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);

loc_0025D0AD: ;
    eax = MEM32(eax + 0x44);
    MEM32(0x76BEDC) = eax;
    PUSH32(esp, 0xE0001F6);
    eax = 0x470148;
    PUSH32(esp, 0x0025D0C4u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D0C4: ;
    esi = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D0DA; /* je: equal / zero */

loc_0025D0D1: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D108; /* je: equal / zero */

loc_0025D0DA: ;
    ebx = MEM32(0x43B174);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D10E; /* jne: not equal / not zero */

loc_0025D0E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025D11A; /* je: equal / zero */

loc_0025D0EB: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025D103u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D103: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025D11F;

loc_0025D108: ;
    ebx = MEM32(0x43B174);

loc_0025D10E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D0E4; /* jne: not equal / not zero */

loc_0025D113: ;
    ecx = 0xE0001F6;
    goto loc_0025D0EB;

loc_0025D11A: ;
    eax = 0xE0001F6;

loc_0025D11F: ;
    MEM32(0x7671F4) = eax;
    PUSH32(esp, 0xE00027F);
    eax = 0x470148;
    PUSH32(esp, 0x0025D133u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D133: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D143; /* je: equal / zero */

loc_0025D13A: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D147; /* je: equal / zero */

loc_0025D143: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D153; /* je: equal / zero */

loc_0025D147: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D153; /* jne: not equal / not zero */

loc_0025D14C: ;
    ecx = 0xE00027F;
    goto loc_0025D15A;

loc_0025D153: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025D177; /* je: equal / zero */

loc_0025D15A: ;
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
    PUSH32(esp, 0x0025D172u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D172: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025D17C;

loc_0025D177: ;
    eax = 0xE00027F;

loc_0025D17C: ;
    MEM32(0x7671EC) = eax;
    PUSH32(esp, 0xBB00003Bu);
    eax = 0x470148;
    PUSH32(esp, 0x0025D190u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D190: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D1A0; /* je: equal / zero */

loc_0025D197: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D1A4; /* je: equal / zero */

loc_0025D1A0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D1B0; /* je: equal / zero */

loc_0025D1A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D1B0; /* jne: not equal / not zero */

loc_0025D1A9: ;
    ecx = 0xBB00003Bu;
    goto loc_0025D1B7;

loc_0025D1B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025D1D4; /* je: equal / zero */

loc_0025D1B7: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025D1CFu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0025D1CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0025D1D9;

loc_0025D1D4: ;
    eax = 0xBB00003Bu;

loc_0025D1D9: ;
    MEM32(0x7671F0) = eax;
    eax = MEM32(0x75850C);
    MEM32(0x44204C) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025D1EA: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(0x76BEE0);
    eax = MEM32(ebp + 0xC);
    MEM32(edx) = ecx;
    ecx = MEM32(0x76BEDC);
    MEM32(ecx) = eax;
    eax = edi;
    PUSH32(esp, 0x0025D207u); RECOMP_ABI_CALL(0x0025C140u, sub_0025C140); /* call 0x0025C140 */

loc_0025D207: ;
    _fa = (uint32_t)(MEM32(0x43B140)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B140), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D259; /* je: equal / zero */

loc_0025D20F: ;
    eax = MEM32(0x43B14C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D236; /* je: equal / zero */

loc_0025D219: ;
    _fa = (uint32_t)(MEM32(0x43B144)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B144), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D236; /* je: equal / zero */

loc_0025D221: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    MEM32(eax * 4 + 0x471390) = ebx;
    PUSH32(esp, 0x0025D231u); RECOMP_ABI_CALL(0x000DC6A0u, sub_000DC6A0); /* call 0x000DC6A0 */

loc_0025D231: ;
    eax = MEM32(0x43B14C);

loc_0025D236: ;
    _fa = (uint32_t)(MEM32(0x43B140)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B140), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D259; /* je: equal / zero */

loc_0025D23E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D259; /* je: equal / zero */

loc_0025D243: ;
    _fa = (uint32_t)(MEM32(0x43B144)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B144), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025D259; /* je: equal / zero */

loc_0025D24B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax * 4 + 0x471380) = ebx;
    PUSH32(esp, 0x0025D259u); RECOMP_ABI_CALL(0x000DC700u, sub_000DC700); /* call 0x000DC700 */

loc_0025D259: ;
    eax = MEM32(0x7671F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edx = MEM32(0x758D6C);
    MEM32(0x758C8C) = ebx;
    MEM32(esp + 0x54) = 0x6F;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0025D286; /* jne: not equal / not zero */

loc_0025D27F: ;
    eax = MEM32(0x67B6A0);
    goto loc_0025D290;

loc_0025D286: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025D290; /* jne: not equal / not zero */

loc_0025D28B: ;
    eax = MEM32(0x67B6A4);

loc_0025D290: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0025D299u); RECOMP_ABI_CALL(0x00101320u, sub_00101320); /* call 0x00101320 */

loc_0025D299: ;
    eax = MEM32(0x7671EC);
    PUSH32(esp, 0x0025D2A3u); RECOMP_ABI_CALL(0x001A0200u, sub_001A0200); /* call 0x001A0200 */

loc_0025D2A3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0025D2ACu); RECOMP_ABI_CALL(0x000E7770u, sub_000E7770); /* call 0x000E7770 */

loc_0025D2AC: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(0x44AA20);
    ecx = ecx & 0xFBFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = edi;
    MEM32(edi + 4) = ecx;
    PUSH32(esp, 0x0025D2C6u); RECOMP_ABI_CALL(0x00028160u, sub_00028160); /* call 0x00028160 */

loc_0025D2C6: ;
    ecx = MEM32(0x44AA20);
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    eax = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] - MEMF(0x758D3C); /* subss */
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    _fb = (uint32_t)(0x478) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x478;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x19);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, ecx);
    MEMF(eax + 0x308) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0025D300u); RECOMP_ABI_CALL(0x002FCD80u, sub_002FCD80); /* call 0x002FCD80 */

loc_0025D300: ;
    eax = MEM32(0x44AA20);
    eax = MEM32(eax + 0x478);
    ecx = 0xFF000000u;
    edi = 0x620C;
    edx = 0xD;
    PUSH32(esp, 0x0025D31Fu); RECOMP_ABI_CALL(0x002FD490u, sub_002FD490); /* call 0x002FD490 */

loc_0025D31F: ;
    edi = MEM32(0x44AA20);
    eax = MEM32(edi + 0x478);
    PUSH32(esp, 0x3F000000);
    esi = 0x61A8;
    edx = 0xD;
    PUSH32(esp, 0x0025D33Fu); RECOMP_ABI_CALL(0x002FD640u, sub_002FD640); /* call 0x002FD640 */

loc_0025D33F: ;
    eax = MEM32(edi + 0x478);
    PUSH32(esp, ebx);
    esi = 0x61AA;
    edx = 0xD;
    PUSH32(esp, 0x0025D355u); RECOMP_ABI_CALL(0x002FD640u, sub_002FD640); /* call 0x002FD640 */

loc_0025D355: ;
    eax = MEM32(edi + 0x478);
    PUSH32(esp, 0x49742400);
    esi = 0x61A9;
    edx = 0xD;
    PUSH32(esp, 0x0025D36Fu); RECOMP_ABI_CALL(0x002FD640u, sub_002FD640); /* call 0x002FD640 */

loc_0025D36F: ;
    edx = MEM32(0x7671F0);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 2;
    PUSH32(esp, 0x0025D382u); RECOMP_ABI_CALL(0x002DF060u, sub_002DF060); /* call 0x002DF060 */

loc_0025D382: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(0x758D64) = eax;
    MEM32(0x758D68) = ecx;
    MEM32(0x758D6C) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7B40
 * Original: 0x002F7B40 - 0x002F7B84 (68 bytes, 28 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7B40: ;
    eax = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F7B67; /* je: equal / zero */

loc_002F7B49: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002F7B64; /* je: equal / zero */

loc_002F7B51: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x19 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F7B5D; /* jne: not equal / not zero */

loc_002F7B58: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F7B66; /* je: equal / zero */

loc_002F7B5C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002F7B5D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F7B51; /* jne: not equal / not zero */

loc_002F7B64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F7B66: ;
    POP32(esp, esi);

loc_002F7B67: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0xF0);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002F7B90
 * Original: 0x002F7B90 - 0x002F7C09 (121 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7B90: ;
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(0x758D70) = ecx;
    PUSH32(esp, 0x002F7BB8u); RECOMP_ABI_CALL(0x002F7B40u, sub_002F7B40); /* call 0x002F7B40 */

loc_002F7BB8: ;
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
 * sub_002F7C10
 * Original: 0x002F7C10 - 0x002F7C75 (101 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7C10: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(0x758D64);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(0x758D68);
    ecx = MEM32(ecx + 0x54);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D6C);
    MEM32(0x758D70) = edx;
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM32(0x758D48) = eax;
    eax = eax + 0x696528;
    SET_LO8(edx, LO8(edx) | 8);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x20) = LO8(edx);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F7C80
 * Original: 0x002F7C80 - 0x002F7CE5 (101 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7C80: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(0x758D64);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(0x758D68);
    ecx = MEM32(ecx + 0x54);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D6C);
    MEM32(0x758D70) = edx;
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM32(0x758D48) = eax;
    eax = eax + 0x696528;
    SET_LO8(edx, LO8(edx) | 0x10);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x20) = LO8(edx);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F7CF0
 * Original: 0x002F7CF0 - 0x002F7D1C (44 bytes, 10 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7CF0: ;
    eax = MEM32(0x758D68);
    ecx = MEM32(0x758D64);
    eax = MEM32(eax + 0x54);
    edx = MEM32(0x758D6C);
    MEM32(0x758D68) = ecx;
    MEM8(eax + 0x20) = MEM8(eax + 0x20) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(esp + 4);
    MEM32(0x758D70) = edx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002F7D20
 * Original: 0x002F7D20 - 0x002F7D5A (58 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7D20: ;
    PUSH32(esp, 0x002F7D25u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F7D25: ;
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D68);
    ecx = MEM32(ecx + 0x54);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D6C);
    MEM32(0x758D70) = edx;
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(esp + 4);
    SET_LO8(edx, LO8(edx) | 0x20);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x20) = LO8(edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F7D60
 * Original: 0x002F7D60 - 0x002F7D9B (59 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7D60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F7D66u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F7D66: ;
    esi = eax;
    PUSH32(esp, 0x002F7D6Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F7D6D: ;
    ecx = MEM32(0x758D68);
    edx = MEM32(0x758D64);
    ecx = MEM32(ecx + 0x54);
    MEM32(ecx + eax * 4 + 4) = esi;
    eax = MEM32(esp + 8);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D6C);
    MEM32(0x758D70) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7DA0
 * Original: 0x002F7DA0 - 0x002F7E15 (117 bytes, 28 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7DA0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002F7DD0; /* jne: not equal / not zero */

loc_002F7DC6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002F7DD8;

loc_002F7DD0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002F7DD8: ;
    eax = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    esi = MEM32(0x758D68);
    MEM32(0x758D68) = eax;
    MEM32(0x758D70) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002F7E00u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F7E00: ;
    edx = MEM32(esi + 0x54);
    ecx = MEM32(esp + 4);
    MEM32(edx + eax * 4 + 4) = ecx;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F7E20
 * Original: 0x002F7E20 - 0x002F7E55 (53 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7E20: ;
    ecx = MEM32(0x758D68);
    ecx = MEM32(ecx + 0x54);
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D6C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D70) = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002F7E60
 * Original: 0x002F7E60 - 0x002F7ED2 (114 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7E60: ;
    eax = MEM32(0x758D68);
    eax = MEM32(eax + 0x54);
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D6C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D70) = edx;
    edx = MEM32(eax + 4);
    esi = MEM32(eax + 8);
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
 * sub_002F7EE0
 * Original: 0x002F7EE0 - 0x002F7F15 (53 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7EE0: ;
    ecx = MEM32(0x758D68);
    ecx = MEM32(ecx + 0x54);
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D6C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D70) = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002F7F20
 * Original: 0x002F7F20 - 0x002F7F92 (114 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7F20: ;
    eax = MEM32(0x758D68);
    eax = MEM32(eax + 0x54);
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D6C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D70) = edx;
    edx = MEM32(eax + 4);
    esi = MEM32(eax + 8);
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
 * sub_002F7FA0
 * Original: 0x002F7FA0 - 0x002F7FC4 (36 bytes, 8 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7FA0(void)
{

loc_002F7FA0: ;
    eax = MEM32(0x758D68);
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x54);
    eax = MEM32(eax + 0x1C);
    MEM32(0x758D68) = ecx;
    MEM32(0x758D70) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002F7FD0
 * Original: 0x002F7FD0 - 0x002F802F (95 bytes, 20 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F7FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F7FD0: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D68);
    ecx = MEM32(ecx + 0x54);
    eax = MEM32(0x758D64);
    ecx = MEM32(ecx + 0x1C);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D68) = eax;
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
 * sub_002F8030
 * Original: 0x002F8030 - 0x002F8095 (101 bytes, 23 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8030: ;
    eax = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    esi = MEM32(0x758D68);
    MEM32(0x758D68) = eax;
    MEM32(0x758D70) = ecx;
    PUSH32(esp, 0x002F8052u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F8052: ;
    edx = MEM32(esi + 0x54);
    eax = MEM32(edx + eax * 4 + 4);
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
 * sub_002F80A0
 * Original: 0x002F80A0 - 0x002F810B (107 bytes, 23 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F80A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F80A0: ;
    eax = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    esi = MEM32(0x758D68);
    MEM32(0x758D68) = eax;
    MEM32(0x758D70) = ecx;
    PUSH32(esp, 0x002F80C2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F80C2: ;
    edx = MEM32(esi + 0x54);
    xmm0 = XMM_SCALAR(MEMF(edx + eax * 4 + 4)); /* movss */
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
 * sub_002F8110
 * Original: 0x002F8110 - 0x002F8140 (48 bytes, 12 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8110: ;
    eax = MEM32(0x758D68);
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D6C);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    MEM32(0x758D68) = ecx;
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002F813Cu); RECOMP_ABI_CALL(0x000F89D0u, sub_000F89D0); /* call 0x000F89D0 */

loc_002F813C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F8140
 * Original: 0x002F8140 - 0x002F81B0 (112 bytes, 28 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8140: ;
    PUSH32(esp, 0x002F8145u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F8145: ;
    ecx = MEM32(0x758D68);
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D6C);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002F816Eu); RECOMP_ABI_CALL(0x000F89D0u, sub_000F89D0); /* call 0x000F89D0 */

loc_002F816E: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_002F81B0
 * Original: 0x002F81B0 - 0x002F81EA (58 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002F81B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F81B0: ;
    eax = MEM32(0x758D68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D6C);
    MEM32(0x758D68) = ecx;
    MEM32(0x758D70) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F81E7; /* je: equal / zero */

loc_002F81D1: ;
    eax = MEM32(eax + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F81E7; /* je: equal / zero */

loc_002F81D8: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x20), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F81E7; /* je: equal / zero */

loc_002F81E1: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_002F81E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F81F0
 * Original: 0x002F81F0 - 0x002F8269 (121 bytes, 29 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F81F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F81F0: ;
    PUSH32(esp, 0x002F81F5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F81F5: ;
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D6C);
    MEM32(0x758D70) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F822A; /* je: equal / zero */

loc_002F8217: ;
    ecx = MEM32(ecx + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F822A; /* je: equal / zero */

loc_002F821E: ;
    _fa = (uint32_t)(MEM8(ecx + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x20), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F822A; /* je: equal / zero */

loc_002F8223: ;
    edx = 1;
    goto loc_002F822C;

loc_002F822A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F822C: ;
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
 * sub_002F8270
 * Original: 0x002F8270 - 0x002F82A0 (48 bytes, 12 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8270: ;
    eax = MEM32(0x758D68);
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D6C);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    MEM32(0x758D68) = ecx;
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002F829Cu); RECOMP_ABI_CALL(0x000F89D0u, sub_000F89D0); /* call 0x000F89D0 */

loc_002F829C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F82A0
 * Original: 0x002F82A0 - 0x002F82E0 (64 bytes, 21 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F82A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F82A0: ;
    PUSH32(esp, 0x002F82A5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F82A5: ;
    ecx = MEM32(0x758D68);
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D6C);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002F82CEu); RECOMP_ABI_CALL(0x000F89D0u, sub_000F89D0); /* call 0x000F89D0 */

loc_002F82CE: ;
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
 * sub_002F82E0
 * Original: 0x002F82E0 - 0x002F82ED (13 bytes, 4 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F82E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F82E0: ;
    PUSH32(esp, 0x002F82E5u); RECOMP_ABI_CALL(0x000F8CC0u, sub_000F8CC0); /* call 0x000F8CC0 */

loc_002F82E5: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F82F0
 * Original: 0x002F82F0 - 0x002F8302 (18 bytes, 6 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F82F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F82F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002F82F7u); RECOMP_ABI_CALL(0x000F8B30u, sub_000F8B30); /* call 0x000F8B30 */

loc_002F82F7: ;
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
 * sub_002F8310
 * Original: 0x002F8310 - 0x002F831D (13 bytes, 4 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8310: ;
    PUSH32(esp, 0x002F8315u); RECOMP_ABI_CALL(0x000F8C70u, sub_000F8C70); /* call 0x000F8C70 */

loc_002F8315: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F8320
 * Original: 0x002F8320 - 0x002F837D (93 bytes, 26 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8320: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002F8327u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F8327: ;
    esi = eax;
    PUSH32(esp, 0x002F832Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F832E: ;
    edi = eax;
    PUSH32(esp, 0x002F8335u); RECOMP_ABI_CALL(0x000E6DB0u, sub_000E6DB0); /* call 0x000E6DB0 */

loc_002F8335: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002F833Du); RECOMP_ABI_CALL(0x0002F3C0u, sub_0002F3C0); /* call 0x0002F3C0 */

loc_002F833D: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
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
 * sub_002F8380
 * Original: 0x002F8380 - 0x002F83E8 (104 bytes, 31 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8380: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002F8388u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F8388: ;
    esi = eax;
    PUSH32(esp, 0x002F838Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F838F: ;
    edi = eax;
    PUSH32(esp, 0x002F8396u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F8396: ;
    ebx = eax;
    PUSH32(esp, 0x002F839Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F839D: ;
    PUSH32(esp, edi);
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0x002F83A7u); RECOMP_ABI_CALL(0x0002F450u, sub_0002F450); /* call 0x0002F450 */

loc_002F83A7: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_002F83F0
 * Original: 0x002F83F0 - 0x002F8439 (73 bytes, 23 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F83F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F83F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5A);
    esi = esp + 0xC;
    edi = 0xB008C4E;
    PUSH32(esp, 0x002F8405u); RECOMP_ABI_CALL(0x000F8830u, sub_000F8830); /* call 0x000F8830 */

loc_002F8405: ;
    edi = esi;
    PUSH32(esp, 0x002F840Cu); RECOMP_ABI_CALL(0x000F84A0u, sub_000F84A0); /* call 0x000F84A0 */

loc_002F840C: ;
    PUSH32(esp, 0x41F4A8);
    PUSH32(esp, 0x41F4A8);
    PUSH32(esp, 0x41F4A8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F8425u); RECOMP_ABI_CALL(0x000187F0u, sub_000187F0); /* call 0x000187F0 */

loc_002F8425: ;
    edi = MEM32(0x7584F0);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002F8433u); RECOMP_ABI_CALL(0x00017D10u, sub_00017D10); /* call 0x00017D10 */

loc_002F8433: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F8440
 * Original: 0x002F8440 - 0x002F8501 (193 bytes, 56 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F8440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC08) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC08;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC0C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F845Fu); RECOMP_ABI_CALL(0x002F83F0u, sub_002F83F0); /* call 0x002F83F0 */

loc_002F845F: ;
    edx = MEM32(0x758CBC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x300;
    edi = esp + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x43B14C);
    ecx = MEM32(0x758CC4);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    esi = 0x100;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F8499u); RECOMP_ABI_CALL(0x00347A43u, sub_00347A43); /* call 0x00347A43 */

loc_002F8499: ;
    eax = MEM32(0x758CBC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x224;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_002F84B0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F84B0; /* jne: not equal / not zero */

loc_002F84BA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F84BFu); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_002F84BF: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    MEM32(0x758498) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_002F84DA; /* jne: not equal / not zero */

loc_002F84D5: ;
    MEM32(eax + 0xC) = ecx;
    goto loc_002F84E1;

loc_002F84DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F84E1; /* jne: not equal / not zero */

loc_002F84DE: ;
    MEM32(eax + 0xC) = esi;

loc_002F84E1: ;
    edi = eax + 0x10;
    ecx = 0x300;
    esi = esp + 8;
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
    ecx = MEM32(esp + 0xC0C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F84FBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_002F84FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8510
 * Original: 0x002F8510 - 0x002F851D (13 bytes, 4 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8510: ;
    PUSH32(esp, 0x002F8515u); RECOMP_ABI_CALL(0x002F8440u, sub_002F8440); /* call 0x002F8440 */

loc_002F8515: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F8520
 * Original: 0x002F8520 - 0x002F85E1 (193 bytes, 56 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F8520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC08) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC08;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC0C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F853Fu); RECOMP_ABI_CALL(0x002F83F0u, sub_002F83F0); /* call 0x002F83F0 */

loc_002F853F: ;
    edx = MEM32(0x758CBC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x300;
    edi = esp + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x43B14C);
    ecx = MEM32(0x758CC4);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    esi = 0x80;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F8579u); RECOMP_ABI_CALL(0x00347A43u, sub_00347A43); /* call 0x00347A43 */

loc_002F8579: ;
    eax = MEM32(0x758CBC);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x224;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_002F8590: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F8590; /* jne: not equal / not zero */

loc_002F859A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F859Fu); RECOMP_ABI_CALL(0x00011AF0u, sub_00011AF0); /* call 0x00011AF0 */

loc_002F859F: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x758498) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_002F85B6; /* jne: not equal / not zero */

loc_002F85B1: ;
    MEM32(eax + 0xC) = esi;
    goto loc_002F85C1;

loc_002F85B6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F85C1; /* jne: not equal / not zero */

loc_002F85BE: ;
    MEM32(eax + 0xC) = ecx;

loc_002F85C1: ;
    edi = eax + 0x10;
    ecx = 0x300;
    esi = esp + 8;
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
    ecx = MEM32(esp + 0xC0C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F85DBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_002F85DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F85F0
 * Original: 0x002F85F0 - 0x002F85FD (13 bytes, 4 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F85F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F85F0: ;
    PUSH32(esp, 0x002F85F5u); RECOMP_ABI_CALL(0x002F8520u, sub_002F8520); /* call 0x002F8520 */

loc_002F85F5: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F8600
 * Original: 0x002F8600 - 0x002F8614 (20 bytes, 7 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8600: ;
    PUSH32(esp, esi);
    esi = 0x440B20;
    PUSH32(esp, 0x002F860Bu); RECOMP_ABI_CALL(0x000CA460u, sub_000CA460); /* call 0x000CA460 */

loc_002F860B: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8620
 * Original: 0x002F8620 - 0x002F8642 (34 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8620: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F8626u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F8626: ;
    esi = eax;
    PUSH32(esp, 0x002F862Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F862D: ;
    ecx = esi;
    esi = 0x440B20;
    PUSH32(esp, 0x002F8639u); RECOMP_ABI_CALL(0x000CA5A0u, sub_000CA5A0); /* call 0x000CA5A0 */

loc_002F8639: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F8650
 * Original: 0x002F8650 - 0x002F8662 (18 bytes, 5 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8650: ;
    PUSH32(esp, 0x002F8655u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F8655: ;
    PUSH32(esp, 0x002F865Au); RECOMP_ABI_CALL(0x00014870u, sub_00014870); /* call 0x00014870 */

loc_002F865A: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F8670
 * Original: 0x002F8670 - 0x002F86B6 (70 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F8670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F8670: ;
    PUSH32(esp, 0x002F8675u); RECOMP_ABI_CALL(0x00014870u, sub_00014870); /* call 0x00014870 */

loc_002F8675: ;
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
 * sub_002F86C0
 * Original: 0x002F86C0 - 0x002F86DC (28 bytes, 9 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F86C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F86C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F86C6u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002F86C6: ;
    esi = eax;
    PUSH32(esp, 0x002F86CDu); RECOMP_ABI_CALL(0x00014870u, sub_00014870); /* call 0x00014870 */

loc_002F86CD: ;
    MEM32(eax + 0x2B0) = esi;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
