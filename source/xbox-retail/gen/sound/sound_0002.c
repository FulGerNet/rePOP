/**
 * PoP SoT xbox-retail - sound, chunk 2
 * Ubisoft Dare sound engine and Jade's glue to it
 * Functions: 250 (0x000B1580 - 0x000BA360)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000B1580
 * Original: 0x000B1580 - 0x000B15CF (79 bytes, 17 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1580: ;
    PUSH32(esp, 0x000B1585u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1585: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1599u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1599: ;
    edx = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x758988) = 0x30C;
    if (CMP_EQ(_fa, _fb)) goto loc_000B15B9; /* je: equal / zero */

loc_000B15B0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x000B15B9u); RECOMP_ABI_CALL(0x000B43E0u, sub_000B43E0); /* call 0x000B43E0 */

loc_000B15B9: ;
    eax = MEM32(0x75898C);
    PUSH32(esp, eax);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B15CEu); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B15CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B15D0
 * Original: 0x000B15D0 - 0x000B162D (93 bytes, 24 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B15D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B15D0: ;
    eax = MEM32(0x46DD84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B162A; /* je: equal / zero */

loc_000B15D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B15DFu); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B15DF: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B15F3u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B15F3: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758988) = 0x317;
    PUSH32(esp, 0x000B160Fu); RECOMP_ABI_CALL(0x000B45A0u, sub_000B45A0); /* call 0x000B45A0 */

loc_000B160F: ;
    esi = eax;
    eax = MEM32(0x75898C);
    PUSH32(esp, eax);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1626u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1626: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B162A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1630
 * Original: 0x000B1630 - 0x000B1691 (97 bytes, 25 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B1630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1630: ;
    eax = MEM32(0x46DD84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B168E; /* je: equal / zero */

loc_000B1639: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B163Fu); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B163F: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1653u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1653: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x14);
    edx = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758988) = 0x325;
    PUSH32(esp, 0x000B1673u); RECOMP_ABI_CALL(0x000B4640u, sub_000B4640); /* call 0x000B4640 */

loc_000B1673: ;
    esi = eax;
    eax = MEM32(0x75898C);
    PUSH32(esp, eax);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B168Au); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B168A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B168E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B16A0
 * Original: 0x000B16A0 - 0x000B1701 (97 bytes, 25 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B16A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B16A0: ;
    eax = MEM32(0x46DD84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B16FB; /* je: equal / zero */

loc_000B16A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B16AFu); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B16AF: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B16C3u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B16C3: ;
    eax = MEM32(0x46DD84);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(0x758988) = 0x333;
    PUSH32(esp, 0x000B16DFu); RECOMP_ABI_CALL(0x000B44D0u, sub_000B44D0); /* call 0x000B44D0 */

loc_000B16DF: ;
    ecx = MEM32(0x75898C);
    PUSH32(esp, ecx);
    esi = eax;
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B16F7u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B16F7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B16FB: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1710
 * Original: 0x000B1710 - 0x000B179B (139 bytes, 37 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1710: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x404) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B174F; /* jne: not equal / not zero */

loc_000B172E: ;
    PUSH32(esp, 0x34F);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B174Cu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B174C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B174F: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1776; /* je: equal / zero */

loc_000B1755: ;
    PUSH32(esp, 0x350);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x4236E8);
    ecx = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B1773u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B1773: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B1776: ;
    ecx = esi;
    PUSH32(esp, 0x000B177Du); RECOMP_ABI_CALL(0x000B56C0u, sub_000B56C0); /* call 0x000B56C0 */

loc_000B177D: ;
    ecx = MEM32(esp + 0x404);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    PUSH32(esp, 0x000B1794u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B1794: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B17A0
 * Original: 0x000B17A0 - 0x000B1848 (168 bytes, 43 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B17A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B17A0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x404) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B17DF; /* jne: not equal / not zero */

loc_000B17BE: ;
    PUSH32(esp, 0x375);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B17DCu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B17DC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B17DF: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1806; /* je: equal / zero */

loc_000B17E5: ;
    PUSH32(esp, 0x376);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x4236E8);
    ecx = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B1803u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B1803: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B1806: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B182B; /* jne: not equal / not zero */

loc_000B180A: ;
    PUSH32(esp, 0x377);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x4208F4);
    edx = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B1828u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B1828: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B182B: ;
    ecx = edi;
    edx = esi;
    PUSH32(esp, 0x000B1834u); RECOMP_ABI_CALL(0x000B5770u, sub_000B5770); /* call 0x000B5770 */

loc_000B1834: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, esi);
    PUSH32(esp, 0x000B1841u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B1841: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1850
 * Original: 0x000B1850 - 0x000B18B9 (105 bytes, 29 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1850: ;
    eax = MEM32(0x46DD84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B18B5; /* je: equal / zero */

loc_000B1859: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B185Fu); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B185F: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1873u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1873: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x46DD84);
    PUSH32(esp, edx);
    MEM32(0x758988) = 0x380;
    PUSH32(esp, 0x000B189Au); RECOMP_ABI_CALL(0x000B3E60u, sub_000B3E60); /* call 0x000B3E60 */

loc_000B189A: ;
    esi = eax;
    eax = MEM32(0x75898C);
    PUSH32(esp, eax);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B18B1u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B18B1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B18B5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B18C0
 * Original: 0x000B18C0 - 0x000B1911 (81 bytes, 19 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B18C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B18C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B18C6u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B18C6: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B18DAu); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B18DA: ;
    edi = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x758988) = 0x390;
    if (CMP_EQ(_fa, _fb)) goto loc_000B18FA; /* je: equal / zero */

loc_000B18F1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000B18FAu); RECOMP_ABI_CALL(0x000B4260u, sub_000B4260); /* call 0x000B4260 */

loc_000B18FA: ;
    eax = MEM32(0x75898C);
    PUSH32(esp, eax);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B190Fu); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B190F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1920
 * Original: 0x000B1920 - 0x000B1971 (81 bytes, 19 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1920: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B1926u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1926: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B193Au); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B193A: ;
    edi = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x758988) = 0x398;
    if (CMP_EQ(_fa, _fb)) goto loc_000B195A; /* je: equal / zero */

loc_000B1951: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000B195Au); RECOMP_ABI_CALL(0x000B4320u, sub_000B4320); /* call 0x000B4320 */

loc_000B195A: ;
    eax = MEM32(0x75898C);
    PUSH32(esp, eax);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B196Fu); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B196F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1980
 * Original: 0x000B1980 - 0x000B19CF (79 bytes, 17 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1980: ;
    PUSH32(esp, 0x000B1985u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1985: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1999u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1999: ;
    edx = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x758988) = 0x3A0;
    if (CMP_EQ(_fa, _fb)) goto loc_000B19B9; /* je: equal / zero */

loc_000B19B0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x000B19B9u); RECOMP_ABI_CALL(0x000B43E0u, sub_000B43E0); /* call 0x000B43E0 */

loc_000B19B9: ;
    eax = MEM32(0x75898C);
    PUSH32(esp, eax);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B19CEu); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B19CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B19D0
 * Original: 0x000B19D0 - 0x000B1A2D (93 bytes, 24 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B19D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B19D0: ;
    eax = MEM32(0x46DD84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1A2A; /* je: equal / zero */

loc_000B19D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B19DFu); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B19DF: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B19F3u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B19F3: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758988) = 0x3AD;
    PUSH32(esp, 0x000B1A0Fu); RECOMP_ABI_CALL(0x000B45A0u, sub_000B45A0); /* call 0x000B45A0 */

loc_000B1A0F: ;
    esi = eax;
    eax = MEM32(0x75898C);
    PUSH32(esp, eax);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1A26u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1A26: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B1A2A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1A30
 * Original: 0x000B1A30 - 0x000B1A91 (97 bytes, 25 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B1A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1A30: ;
    eax = MEM32(0x46DD84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1A8E; /* je: equal / zero */

loc_000B1A39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B1A3Fu); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1A3F: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1A53u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1A53: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x14);
    edx = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758988) = 0x3BB;
    PUSH32(esp, 0x000B1A73u); RECOMP_ABI_CALL(0x000B4640u, sub_000B4640); /* call 0x000B4640 */

loc_000B1A73: ;
    esi = eax;
    eax = MEM32(0x75898C);
    PUSH32(esp, eax);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1A8Au); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1A8A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B1A8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1AA0
 * Original: 0x000B1AA0 - 0x000B1B01 (97 bytes, 25 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1AA0: ;
    eax = MEM32(0x46DD84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1AFB; /* je: equal / zero */

loc_000B1AA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B1AAFu); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1AAF: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1AC3u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1AC3: ;
    eax = MEM32(0x46DD84);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(0x758988) = 0x3C9;
    PUSH32(esp, 0x000B1ADFu); RECOMP_ABI_CALL(0x000B44D0u, sub_000B44D0); /* call 0x000B44D0 */

loc_000B1ADF: ;
    ecx = MEM32(0x75898C);
    PUSH32(esp, ecx);
    esi = eax;
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1AF7u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1AF7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B1AFB: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1B10
 * Original: 0x000B1B10 - 0x000B1B6B (91 bytes, 23 insns)
 * Folder: sound (between: 0x000B1AA0 and 0x000B1B15)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1B10: ;
    PUSH32(esp, 0x000B1B15u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1B15: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1B29u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1B29: ;
    eax = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758988) = 0x435;
    if (CMP_EQ(_fa, _fb)) goto loc_000B1B54; /* je: equal / zero */

loc_000B1B3F: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B1B54u); RECOMP_ABI_CALL(0x000B5870u, sub_000B5870); /* call 0x000B5870 */

loc_000B1B54: ;
    edx = MEM32(0x75898C);
    PUSH32(esp, edx);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1B6Au); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1B6A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1B15
 * Original: 0x000B1B15 - 0x000B1B6B (86 bytes, 22 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1B15(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1B15: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1B29u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1B29: ;
    eax = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758988) = 0x435;
    if (CMP_EQ(_fa, _fb)) goto loc_000B1B54; /* je: equal / zero */

loc_000B1B3F: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B1B54u); RECOMP_ABI_CALL(0x000B5870u, sub_000B5870); /* call 0x000B5870 */

loc_000B1B54: ;
    edx = MEM32(0x75898C);
    PUSH32(esp, edx);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1B6Au); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1B6A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1B70
 * Original: 0x000B1B70 - 0x000B1BBD (77 bytes, 19 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1B70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B1B76u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1B76: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1B8Au); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1B8A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    MEM32(0x758988) = 0x44C;
    PUSH32(esp, 0x000B1B9Eu); RECOMP_ABI_CALL(0x000A72C0u, sub_000A72C0); /* call 0x000A72C0 */

loc_000B1B9E: ;
    ecx = MEM32(0x75898C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    esi = eax;
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1BB9u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1BB9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1BC0
 * Original: 0x000B1BC0 - 0x000B1C0E (78 bytes, 19 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1BC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B1BC6u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1BC6: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1BDAu); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1BDA: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    MEM32(0x758988) = 0x455;
    PUSH32(esp, 0x000B1BEEu); RECOMP_ABI_CALL(0x000A70E0u, sub_000A70E0); /* call 0x000A70E0 */

loc_000B1BEE: ;
    ecx = MEM32(0x75898C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(0x758990) = 0;
    esi = eax;
    PUSH32(esp, 0x000B1C09u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1C09: ;
    SET_LO16(eax, LO16(esi));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1C10
 * Original: 0x000B1C10 - 0x000B1C51 (65 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1C10: ;
    PUSH32(esp, 0x000B1C15u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1C15: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1C29u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1C29: ;
    eax = MEM32(0x75898C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(0x758988) = 0x45E;
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1C4Bu); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1C4B: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1C60
 * Original: 0x000B1C60 - 0x000B1CA8 (72 bytes, 17 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B1C66u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1C66: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1C7Au); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1C7A: ;
    ecx = MEM32(0x75898C);
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(0x758988) = 0x467;
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1CA4u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1CA4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1CB0
 * Original: 0x000B1CB0 - 0x000B1CFD (77 bytes, 19 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1CB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B1CB6u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1CB6: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1CCAu); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1CCA: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    MEM32(0x758988) = 0x475;
    PUSH32(esp, 0x000B1CDEu); RECOMP_ABI_CALL(0x000B5030u, sub_000B5030); /* call 0x000B5030 */

loc_000B1CDE: ;
    ecx = MEM32(0x75898C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    esi = eax;
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1CF9u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1CF9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1D00
 * Original: 0x000B1D00 - 0x000B1D41 (65 bytes, 13 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1D00: ;
    PUSH32(esp, 0x000B1D05u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1D05: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1D19u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1D19: ;
    eax = MEM32(0x75898C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(0x758988) = 0x47E;
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1D3Bu); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1D3B: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1D50
 * Original: 0x000B1D50 - 0x000B1D9C (76 bytes, 18 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1D50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B1D56u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1D56: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1D6Au); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1D6A: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758988) = 0x487;
    PUSH32(esp, 0x000B1D80u); RECOMP_ABI_CALL(0x000B51D0u, sub_000B51D0); /* call 0x000B51D0 */

loc_000B1D80: ;
    MEM32(0x758990) = 0;
    esi = eax;
    eax = MEM32(0x75898C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B1D97u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1D97: ;
    SET_LO16(eax, LO16(esi));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1DA0
 * Original: 0x000B1DA0 - 0x000B1DFE (94 bytes, 25 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1DA0: ;
    eax = MEM32(0x46DD84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1DF8; /* je: equal / zero */

loc_000B1DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B1DB0u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1DB0: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1DC4u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1DC4: ;
    edi = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758988) = 0x4D0;
    PUSH32(esp, 0x000B1DDCu); RECOMP_ABI_CALL(0x000B59A0u, sub_000B59A0); /* call 0x000B59A0 */

loc_000B1DDC: ;
    esi = eax;
    eax = MEM32(0x75898C);
    PUSH32(esp, eax);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1DF3u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1DF3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B1DF8: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1E00
 * Original: 0x000B1E00 - 0x000B1E55 (85 bytes, 20 insns)
 * Folder: sound (source: sndxdtool.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1E00: ;
    PUSH32(esp, 0x000B1E05u); RECOMP_ABI_CALL(0x000ACF70u, sub_000ACF70); /* call 0x000ACF70 */

loc_000B1E05: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423758);
    PUSH32(esp, 0x758888);
    PUSH32(esp, 0x000B1E19u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B1E19: ;
    eax = MEM32(0x46DD84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758988) = 0x4E6;
    if (CMP_EQ(_fa, _fb)) goto loc_000B1E3E; /* je: equal / zero */

loc_000B1E2F: ;
    ecx = MEM32(0x758A74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1E3E; /* je: equal / zero */

loc_000B1E39: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x000B1E3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B1E3Bu); } /* indirect call */
    }

loc_000B1E3E: ;
    ecx = MEM32(0x75898C);
    PUSH32(esp, ecx);
    MEM32(0x758990) = 0;
    PUSH32(esp, 0x000B1E54u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B1E54: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1E60
 * Original: 0x000B1E60 - 0x000B1E9B (59 bytes, 18 insns)
 * Folder: sound (between: 0x000B1E00 and 0x000B1EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1E60: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1E6E; /* jne: not equal / not zero */

loc_000B1E69: ;
    PUSH32(esp, 0x000B1E6Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B1E6E: ;
    edx = 0x14;
    ecx = eax;
    PUSH32(esp, 0x000B1E7Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B1E7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1E7F; /* jne: not equal / not zero */

loc_000B1E7E: ;
    esp += 4; return; /* ret */

loc_000B1E7F: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x112233;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1EA0
 * Original: 0x000B1EA0 - 0x000B1EDE (62 bytes, 24 insns)
 * Folder: sound (between: 0x000B1E00 and 0x000B1EE0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B1EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1EA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1EDB; /* je: equal / zero */

loc_000B1EA4: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x112233) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0x112233 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1EDB; /* jne: not equal / not zero */

loc_000B1EAD: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
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
    esi = eax;
    MEM32(eax + 0xC) = 0x44556677;
    PUSH32(esp, 0x000B1ED3u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B1ED3: ;
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B1EDB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1EE0
 * Original: 0x000B1EE0 - 0x000B1F73 (147 bytes, 34 insns)
 * Folder: sound (source: sndsubblock.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1EE0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esp + 0x410);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B1F3D; /* ja: above (unsigned >) */

loc_000B1EFE: ;
    edi = edi;

loc_000B1F00: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xB1F74); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000B1F07u) goto loc_000B1F07;
    if (_jt == 0x000B1F0Eu) goto loc_000B1F0E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B1F07: ;
    eax = 1;
    goto loc_000B1F00;

loc_000B1F0E: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1F1C; /* jne: not equal / not zero */

loc_000B1F17: ;
    PUSH32(esp, 0x000B1F1Cu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B1F1C: ;
    edx = MEM32(esp + 0x408);
    ecx = eax;
    PUSH32(esp, 0x000B1F2Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B1F2A: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B1F36u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B1F36: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B1F3D: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, 0x4237A8);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B1F5Bu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B1F5B: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000B1F6Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B1F6C: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1F90
 * Original: 0x000B1F90 - 0x000B2017 (135 bytes, 32 insns)
 * Folder: sound (source: sndsubblock.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1F90: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esp + 0x40C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B1FE3; /* ja: above (unsigned >) */

loc_000B1FAE: ;
    edi = edi;

loc_000B1FB0: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xB2018); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000B1FB7u) goto loc_000B1FB7;
    if (_jt == 0x000B1FBEu) goto loc_000B1FBE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B1FB7: ;
    eax = 1;
    goto loc_000B1FB0;

loc_000B1FBE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1FCF; /* je: equal / zero */

loc_000B1FCA: ;
    PUSH32(esp, 0x000B1FCFu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B1FCF: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B1FDCu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B1FDC: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B1FE3: ;
    PUSH32(esp, 0xAC);
    PUSH32(esp, 0x4237A8);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2001u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2001: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B2010u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2010: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B2030
 * Original: 0x000B2030 - 0x000B20F7 (199 bytes, 58 insns)
 * Folder: sound (source: sndsubblock.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B2030: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40C);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000B2059; /* jne: not equal / not zero */

loc_000B2054: ;
    PUSH32(esp, 0x000B2059u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B2059: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x000B2065u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B2065: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B20E0; /* je: equal / zero */

loc_000B206B: ;
    eax = MEM32(esp + 0x414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esi) = 0x11223344;
    MEM32(esi + 4) = eax;
    if (CMP_A(_fa, _fb)) goto loc_000B20BA; /* ja: above (unsigned >) */

loc_000B2080: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xB20F8); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000B2087u) goto loc_000B2087;
    if (_jt == 0x000B2091u) goto loc_000B2091;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B2087: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B208Fu); RECOMP_ABI_CALL(0x000B22D0u, sub_000B22D0); /* call 0x000B22D0 */

loc_000B208F: ;
    goto loc_000B2099;

loc_000B2091: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B2099u); RECOMP_ABI_CALL(0x000B1E60u, sub_000B1E60); /* call 0x000B1E60 */

loc_000B2099: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B20DB; /* je: equal / zero */

loc_000B20A3: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B20B3u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B20B3: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B20BA: ;
    PUSH32(esp, 0xDF);
    PUSH32(esp, 0x4237A8);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B20D8u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B20D8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B20DB: ;
    PUSH32(esp, 0x000B20E0u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B20E0: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    PUSH32(esp, 0x000B20F0u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B20F0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B2110
 * Original: 0x000B2110 - 0x000B218E (126 bytes, 44 insns)
 * Folder: sound (source: sndsubblock.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B2110: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B218A; /* je: equal / zero */

loc_000B2117: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11223344) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x11223344 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B218A; /* jne: not equal / not zero */

loc_000B211F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_000B2161; /* ja: above (unsigned >) */

loc_000B2128: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xB2190); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000B212Fu) goto loc_000B212F;
    if (_jt == 0x000B2157u) goto loc_000B2157;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B212F: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0x000B2137u); RECOMP_ABI_CALL(0x000B2350u, sub_000B2350); /* call 0x000B2350 */

loc_000B2137: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2147; /* je: equal / zero */

loc_000B213E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2147; /* je: equal / zero */

loc_000B2142: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2152; /* jne: not equal / not zero */

loc_000B2147: ;
    MEM32(esi) = 0x55667788;
    PUSH32(esp, 0x000B2152u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B2152: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B2157: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0x000B215Fu); RECOMP_ABI_CALL(0x000B1EA0u, sub_000B1EA0); /* call 0x000B1EA0 */

loc_000B215F: ;
    goto loc_000B2137;

loc_000B2161: ;
    PUSH32(esp, 0x11D);
    ecx = 0x4237A8;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B2175u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B2175: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x55667788;
    PUSH32(esp, 0x000B2185u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B2185: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B218A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B218E
 * Original: 0x000B218E - 0x000B21A0 (18 bytes, 9 insns)
 * Folder: sound (between: 0x000B2110 and 0x000B21A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B218E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B218E: ;
    edi = edi;
    RECOMP_UNIMPL("das", 0x000B2190u); /* TODO: das */
    MEM32(ebx) = MEM32(ebx) & ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + 0x21) = MEM8(edi + 0x21) + LO8(edx);
    _fa = (uint32_t)(MEM8(edi + 0x21)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    RECOMP_UNIMPL("das", 0x000B2198u); /* TODO: das */
    MEM32(ebx) = MEM32(ebx) & ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(ebx) = MEM32(ebx) & ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_000B21A0(); return; /* fallthrough 0x000B21A0 */

}

/**
 * sub_000B21A0
 * Original: 0x000B21A0 - 0x000B2266 (198 bytes, 45 insns)
 * Folder: sound (source: sndsubblock.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B21A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B21A0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esp + 0x414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B2230; /* ja: above (unsigned >) */

loc_000B21BE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xB2268); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000B21C5u) goto loc_000B21C5;
    if (_jt == 0x000B21FAu) goto loc_000B21FA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B21C5: ;
    eax = MEM32(esp + 0x410);
    ecx = MEM32(esp + 0x40C);
    edx = MEM32(esp + 0x408);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B21E4u); RECOMP_ABI_CALL(0x000B21A0u, sub_000B21A0); /* call 0x000B21A0 */

loc_000B21E4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B21F3u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B21F3: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B21FA: ;
    ecx = MEM32(esp + 0x408);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2251; /* je: equal / zero */

loc_000B2206: ;
    eax = MEM32(esp + 0x40C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x414);
    PUSH32(esp, 0x000B221Au); RECOMP_ABI_CALL(0x000D7780u, sub_000D7780); /* call 0x000D7780 */

loc_000B221A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B2229u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2229: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B2230: ;
    PUSH32(esp, 0x150);
    PUSH32(esp, 0x4237A8);
    PUSH32(esp, 0x41FFC0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B224Eu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B224E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2251: ;
    ecx = MEM32(esp + 0x400);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000B225Fu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B225F: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B2266
 * Original: 0x000B2266 - 0x000B2280 (26 bytes, 17 insns)
 * Folder: sound (between: 0x000B21A0 and 0x000B2280)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2266(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2266: ;
    edi = edi;
    RECOMP_UNIMPL("lds esp, ptr [ecx]", 0x000B2268u); /* TODO: lds esp, ptr [ecx] */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    RECOMP_UNIMPL("cli", 0x000B226Cu); /* TODO: cli */
    MEM32(ebx) = MEM32(ebx) & ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ecx, HI8(ecx) + LO8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(ebx) = MEM32(ebx) & ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ecx, HI8(ecx) + LO8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(ebx) = MEM32(ebx) & ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000B2280
 * Original: 0x000B2280 - 0x000B22CE (78 bytes, 30 insns)
 * Folder: sound (source: sndsubblockhw.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2280: ;
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B22B6; /* je: equal / zero */

loc_000B2286: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B22A5; /* je: equal / zero */

loc_000B228B: ;
    PUSH32(esp, 0x2C);

loc_000B228D: ;
    ecx = 0x4237F0;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B229Cu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B229C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_000B22A5: ;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B22B0; /* je: equal / zero */

loc_000B22AC: ;
    PUSH32(esp, 0x26);
    goto loc_000B228D;

loc_000B22B0: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000B22B6: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B22C1; /* je: equal / zero */

loc_000B22BD: ;
    PUSH32(esp, 0x1A);
    goto loc_000B228D;

loc_000B22C1: ;
    edx = MEM32(eax + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B22D0
 * Original: 0x000B22D0 - 0x000B2344 (116 bytes, 38 insns)
 * Folder: sound (between: 0x000B2280 and 0x000B2390)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B22D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B22D0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B22DE; /* jne: not equal / not zero */

loc_000B22D9: ;
    PUSH32(esp, 0x000B22DEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B22DE: ;
    PUSH32(esp, esi);
    edx = 8;
    ecx = eax;
    PUSH32(esp, 0x000B22EBu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B22EB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B233C; /* je: equal / zero */

loc_000B22F1: ;
    MEM32(esi) = 0x11223344;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2305; /* jne: not equal / not zero */

loc_000B2300: ;
    PUSH32(esp, 0x000B2305u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B2305: ;
    edx = 0x14;
    ecx = eax;
    PUSH32(esp, 0x000B2311u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B2311: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2330; /* je: equal / zero */

loc_000B2315: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x112233;

loc_000B2330: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B2340; /* jne: not equal / not zero */

loc_000B2337: ;
    PUSH32(esp, 0x000B233Cu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B233C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B2340: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2350
 * Original: 0x000B2350 - 0x000B238C (60 bytes, 25 insns)
 * Folder: sound (between: 0x000B2280 and 0x000B2390)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2350: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2388; /* je: equal / zero */

loc_000B2357: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11223344) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x11223344 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2388; /* jne: not equal / not zero */

loc_000B235F: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B2368u); RECOMP_ABI_CALL(0x000B1EA0u, sub_000B1EA0); /* call 0x000B1EA0 */

loc_000B2368: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2378; /* je: equal / zero */

loc_000B236F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2378; /* je: equal / zero */

loc_000B2373: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2383; /* jne: not equal / not zero */

loc_000B2378: ;
    MEM32(esi) = 0x55667788;
    PUSH32(esp, 0x000B2383u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B2383: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B2388: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2390
 * Original: 0x000B2390 - 0x000B23BA (42 bytes, 13 insns)
 * Folder: sound (match: xbox-demo 0x000D72A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2390: ;
    xmm0 = XMM_SCALAR(MEMF(0x4293C8)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x28) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 4) = ecx;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B23C0
 * Original: 0x000B23C0 - 0x000B2437 (119 bytes, 33 insns)
 * Folder: sound (source: DSBufferEx.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B23C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B23C0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B2401; /* je: equal / zero */

loc_000B23D6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B2401; /* jbe: below or equal (unsigned <=) */

loc_000B23DA: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2401; /* je: equal / zero */

loc_000B23E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = esi;
    PUSH32(esp, 0x000B23EEu); RECOMP_ABI_CALL(0x003E73ACu, sub_003E73AC); /* call 0x003E73AC */

loc_000B23EE: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B23FAu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B23FA: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B2401: ;
    PUSH32(esp, 0x4B);
    PUSH32(esp, 0x423848);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B241Cu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B241C: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x80004005u;
    PUSH32(esp, 0x000B2430u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2430: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B2440
 * Original: 0x000B2440 - 0x000B24CD (141 bytes, 43 insns)
 * Folder: sound (source: DSBufferEx.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2440: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x404) = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2496; /* je: equal / zero */

loc_000B245A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B2496; /* jbe: below or equal (unsigned <=) */

loc_000B2461: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2496; /* je: equal / zero */

loc_000B2468: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2472u); RECOMP_ABI_CALL(0x003E73ACu, sub_003E73AC); /* call 0x003E73AC */

loc_000B2472: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    esi = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B2482u); RECOMP_ABI_CALL(0x003E73ACu, sub_003E73AC); /* call 0x003E73AC */

loc_000B2482: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B248Fu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B248F: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B2496: ;
    PUSH32(esp, 0x59);
    PUSH32(esp, 0x423848);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B24B1u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B24B1: ;
    ecx = MEM32(esp + 0x418);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x80004005u;
    POP32(esp, esi);
    PUSH32(esp, 0x000B24C6u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B24C6: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B24D0
 * Original: 0x000B24D0 - 0x000B25A0 (208 bytes, 73 insns)
 * Folder: sound (source: DSBufferEx.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B24D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B24D0: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x418);
    MEM32(esp + 0x410) = eax;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_000B2564; /* ja: above (unsigned >) */

loc_000B24F8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B2564; /* jbe: below or equal (unsigned <=) */

loc_000B24FC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B2564; /* ja: above (unsigned >) */

loc_000B2500: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2564; /* je: equal / zero */

loc_000B2507: ;
    esi = MEM32(esi);
    edi = esi + ecx;
    MEM32(esp + 0x10) = edi;
    edi = ecx + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B2521; /* jbe: below or equal (unsigned <=) */

loc_000B2517: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = esi;
    ebp = edx;
    goto loc_000B2523;

loc_000B2521: ;
    eax = edx;

loc_000B2523: ;
    edx = MEM32(esp + 0x424);
    edi = MEM32(esp + 0x10);
    ecx = eax;
    eax = MEM32(esp + 0x420);
    esi = eax + edx;
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
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
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
    if (CMP_EQ(_fa, _fb)) goto loc_000B2560; /* je: equal / zero */

loc_000B254C: ;
    ecx = ebp;
    esi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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

loc_000B2560: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B2587;

loc_000B2564: ;
    PUSH32(esp, 0x7D);
    PUSH32(esp, 0x423848);
    PUSH32(esp, 0x41FFC0);
    ecx = esp + 0x20;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B257Fu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B257F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x80004005u;

loc_000B2587: ;
    ecx = MEM32(esp + 0x414);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B2597u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2597: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B25A0
 * Original: 0x000B25A0 - 0x000B262A (138 bytes, 36 insns)
 * Folder: sound (between: 0x000B24D0 and 0x000B2630)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B25A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B25A0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, eax);
    edi = esp + 0x10;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000B25B5u); RECOMP_ABI_CALL(0x000AF8C0u, sub_000AF8C0); /* call 0x000AF8C0 */

loc_000B25B5: ;
    xmm0 = XMM_SCALAR(MEMF(0x4293E0)); /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x4293E4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    edx = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    ecx = esp + 0x1C;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = edx;
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    edx = esp + 0x10;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 2;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x000B2622u); RECOMP_ABI_CALL(0x003E64E2u, sub_003E64E2); /* call 0x003E64E2 */

loc_000B2622: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2630
 * Original: 0x000B2630 - 0x000B2683 (83 bytes, 25 insns)
 * Folder: sound (match: xbox-demo 0x000D7490, between)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B2630: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x10) = ecx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esp + 0x14) = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x251C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFD8F0u)) >> 32) & 1);
    eax = eax + 0xFFFFD8F0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x2C);
    edx = esp + 4;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B267Du); RECOMP_ABI_CALL(0x003E6E76u, sub_003E6E76); /* call 0x003E6E76 */

loc_000B267D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2680
 * Original: 0x000B2680 - 0x000B2683 (3 bytes, 1 insns)
 * Folder: sound (between: 0x000B2630 and 0x000B2690)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2680(void)
{

loc_000B2680: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2690
 * Original: 0x000B2690 - 0x000B278C (252 bytes, 64 insns)
 * Folder: sound (source: DSBufferEx.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2690: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2758; /* je: equal / zero */

loc_000B269D: ;
    eax = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B272B; /* je: equal / zero */

loc_000B26A6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B26DA; /* je: equal / zero */

loc_000B26A9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B277B; /* jbe: below or equal (unsigned <=) */

loc_000B26B2: ;
    PUSH32(esp, 0xD5);
    ecx = 0x423848;
    edx = 0x423838;
    PUSH32(esp, 0x000B26C6u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B26C6: ;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B26D6u); RECOMP_ABI_CALL(0x003E6DA8u, sub_003E6DA8); /* call 0x003E6DA8 */

loc_000B26D6: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B26DA: ;
    eax = esp + 0x30;
    edx = esp;
    MEM32(esp + 4) = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 8) = 4;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = 1;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = 0xA;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = 0x18;
    MEM32(esp + 0x54) = 0xFFFFD8F0u;
    PUSH32(esp, 0x000B2727u); RECOMP_ABI_CALL(0x003E6DA8u, sub_003E6DA8); /* call 0x003E6DA8 */

loc_000B2727: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B272B: ;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp) = 3;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x28) = 0xA;
    ecx = esp + 0x18;
    goto loc_000B2777;

loc_000B2758: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp) = 2;
    MEM32(esp + 0x10) = 1;
    ecx = esp + 8;

loc_000B2777: ;
    MEM32(esp + 4) = ecx;

loc_000B277B: ;
    eax = MEM32(esi + 0x28);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2788u); RECOMP_ABI_CALL(0x003E6DA8u, sub_003E6DA8); /* call 0x003E6DA8 */

loc_000B2788: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B2790
 * Original: 0x000B2790 - 0x000B2801 (113 bytes, 37 insns)
 * Folder: sound (match: xbox-demo 0x000D75D0, between)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2790: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca >= _fcb)) goto loc_000B27D5; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_000B279C: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x4293C8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B27D5; /* jnp: not parity */

loc_000B27A9: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B27B8u); RECOMP_ABI_CALL(0x003E6DC4u, sub_003E6DC4); /* call 0x003E6DC4 */

loc_000B27B8: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B27C7u); RECOMP_ABI_CALL(0x003E6DE8u, sub_003E6DE8); /* call 0x003E6DE8 */

loc_000B27C7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000B27D5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B27E4u); RECOMP_ABI_CALL(0x003E6DE8u, sub_003E6DE8); /* call 0x003E6DE8 */

loc_000B27E4: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B27F3u); RECOMP_ABI_CALL(0x003E6DC4u, sub_003E6DC4); /* call 0x003E6DC4 */

loc_000B27F3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B2810
 * Original: 0x000B2810 - 0x000B2A17 (519 bytes, 138 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B2810: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x404) = eax;
    _fa = (uint32_t)(MEM32(0x758A70)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758A70), 1 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x46DD88);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B2853; /* je: equal / zero */

loc_000B2835: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x4239B0);
    eax = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2850u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2850: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2853: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B288D; /* jne: not equal / not zero */

loc_000B2857: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x4239A8);
    ecx = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B2872u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2872: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000B2886u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2886: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B288D: ;
    eax = MEM32(edi);
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(0x4293E0)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    xmm4.f[0] = (float)(int32_t)MEM32(esi + 0x20); /* cvtsi2ss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(edi + 8);
    edi = MEM32(esi + 8);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = (float)(int32_t)MEM32(esi + 0x18); /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = (float)(int32_t)MEM32(esi + 0x28); /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = (float)(int32_t)MEM32(esi + 0x2C); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = (float)(int32_t)MEM32(esi + 0x24); /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B2961; /* jp: parity */

loc_000B292D: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B296F; /* jnp: not parity */

loc_000B2936: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B294E; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm5.f[0]) */

loc_000B293B: ;
    xmm0 = XMM_SCALAR(MEMF(0x4293DC)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000B29FC;

loc_000B294E: ;
    xmm0 = XMM_SCALAR(MEMF(0x4293D8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000B29FC;

loc_000B2961: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B298A; /* jp: parity */

loc_000B296A: ;
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B297A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_000B296F: ;
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    goto loc_000B29FC;

loc_000B297A: ;
    xmm0 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000B29FC;

loc_000B298A: ;
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, 0x000B2996u); RECOMP_ABI_CALL(0x000B85E0u, sub_000B85E0); /* call 0x000B85E0 */

loc_000B2996: ;
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B29B4; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm0.f[0]) */

loc_000B29A9: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B29C3; /* ja: above (unsigned >) (xmm4.f[0] vs xmm5.f[0]) */

loc_000B29AE: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_000B29CB;

loc_000B29B4: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B29BE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_000B29B9: ;
    _fca = xmm5.f[0]; _fcb = xmm4.f[0]; /* comiss */
    goto loc_000B29C1;

loc_000B29BE: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */

loc_000B29C1: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B29D1; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm4.f[0]) */

loc_000B29C3: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x429354); /* addss */

loc_000B29CB: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000B29D1: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B29DB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm5.f[0]) */

loc_000B29D6: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B29FC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B29DB: ;
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x423984);
    edx = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B29F9u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B29F9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B29FC: ;
    ecx = MEM32(esp + 0x40C);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000B2A10u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2A10: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B2A20
 * Original: 0x000B2A20 - 0x000B2B35 (277 bytes, 78 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2A20: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x408) = eax;
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000B2A5D; /* jne: not equal / not zero */

loc_000B2A3C: ;
    PUSH32(esp, 0xBE);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x423970);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2A5Au); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2A5A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2A5D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2A82; /* jne: not equal / not zero */

loc_000B2A61: ;
    PUSH32(esp, 0xBF);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x423958);
    ecx = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B2A7Fu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2A7F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2A82: ;
    eax = MEM32(esp + 0x410);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B2AC9; /* je: equal / zero */

loc_000B2A8E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B2AC0; /* je: equal / zero */

loc_000B2A91: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B2AB7; /* je: equal / zero */

loc_000B2A94: ;
    PUSH32(esp, 0xCE);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x41FFC0);
    edx = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B2AB2u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2AB2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B2AD0;

loc_000B2AB7: ;
    MEM32(esi + 8) = 2;
    goto loc_000B2AD0;

loc_000B2AC0: ;
    MEM32(esi + 8) = 1;
    goto loc_000B2AD0;

loc_000B2AC9: ;
    MEM32(esi + 8) = 0;

loc_000B2AD0: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x24), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2AF0; /* je: equal / zero */

loc_000B2AD6: ;
    PUSH32(esp, 0x000B2ADBu); RECOMP_ABI_CALL(0x000B2C20u, sub_000B2C20); /* call 0x000B2C20 */

loc_000B2ADB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B2AE9u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2AE9: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B2AF0: ;
    eax = MEM32(0x758A70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2B17; /* jne: not equal / not zero */

loc_000B2AF9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B2AFFu); RECOMP_ABI_CALL(0x000B2D40u, sub_000B2D40); /* call 0x000B2D40 */

loc_000B2AFF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B2B10u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2B10: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B2B17: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B2B1Du); RECOMP_ABI_CALL(0x000B2E70u, sub_000B2E70); /* call 0x000B2E70 */

loc_000B2B1D: ;
    ecx = MEM32(esp + 0x40C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000B2B2Eu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2B2E: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B2B40
 * Original: 0x000B2B40 - 0x000B2C1E (222 bytes, 64 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B2B40: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x408) = eax;
    edi = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000B2B82; /* jne: not equal / not zero */

loc_000B2B61: ;
    PUSH32(esp, 0x113);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x423944);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2B7Fu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2B7F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2B82: ;
    eax = MEM32(esp + 0x414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2BAE; /* jne: not equal / not zero */

loc_000B2B8D: ;
    PUSH32(esp, 0x114);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x423930);
    ecx = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B2BABu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2BAB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2BAE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2BC7; /* je: equal / zero */

loc_000B2BB2: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2BC7; /* jne: not equal / not zero */

loc_000B2BB8: ;
    ecx = esi;
    PUSH32(esp, 0x000B2BBFu); RECOMP_ABI_CALL(0x000AEC40u, sub_000AEC40); /* call 0x000AEC40 */

loc_000B2BBF: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B2BC7; /* jbe: below or equal (unsigned <=) */

loc_000B2BC5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B2BC7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2BD4; /* jne: not equal / not zero */

loc_000B2BCC: ;
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2BD4; /* je: equal / zero */

loc_000B2BD2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B2BD4: ;
    ecx = MEM32(esp + 0x414);
    PUSH32(esp, edi);
    edx = ebp;
    PUSH32(esp, 0x000B2BE3u); RECOMP_ABI_CALL(0x000B2A20u, sub_000B2A20); /* call 0x000B2A20 */

loc_000B2BE3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000B2C0B; /* je: equal / zero */

loc_000B2BEC: ;
    ecx = esi;
    PUSH32(esp, 0x000B2BF3u); RECOMP_ABI_CALL(0x000AEC40u, sub_000AEC40); /* call 0x000AEC40 */

loc_000B2BF3: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B2C0B; /* jbe: below or equal (unsigned <=) */

loc_000B2BF9: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2C0B; /* jne: not equal / not zero */

loc_000B2C00: ;
    edx = MEM32(esp + 0x40C);
    MEM8(edx + 0xC) = 0x40;

loc_000B2C0B: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B2C17u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2C17: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B2C20
 * Original: 0x000B2C20 - 0x000B2D3F (287 bytes, 74 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2C20: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B2C57; /* jne: not equal / not zero */

loc_000B2C36: ;
    PUSH32(esp, 0x20A);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x423970);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2C54u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2C54: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2C57: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2C7C; /* jne: not equal / not zero */

loc_000B2C5B: ;
    PUSH32(esp, 0x20B);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x423958);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B2C79u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2C79: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2C7C: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x24), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B2CA3; /* jne: not equal / not zero */

loc_000B2C82: ;
    PUSH32(esp, 0x20C);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x4238F8);
    edx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B2CA0u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2CA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2CA3: ;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi);
    MEM32(esi) = ecx;
    if ((_fa == 0)) goto loc_000B2D26; /* je: equal / zero */

loc_000B2CB5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B2D09; /* je: equal / zero */

loc_000B2CB8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B2CEF; /* je: equal / zero */

loc_000B2CBB: ;
    PUSH32(esp, 0x21E);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x41FFC0);
    edx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B2CD9u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2CD9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B2CE8u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2CE8: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B2CEF: ;
    MEM32(esi + 0xC) = 0;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B2D02u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2D02: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B2D09: ;
    SET_LO8(eax, MEM8(edi + 8));
    MEM8(esi + 0xC) = LO8(eax);
    MEM8(esi + 0xD) = 0;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B2D1Fu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2D1F: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B2D26: ;
    SET_LO8(ecx, MEM8(edi + 8));
    MEM8(esi + 0xC) = LO8(ecx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B2D38u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2D38: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B2D40
 * Original: 0x000B2D40 - 0x000B2E64 (292 bytes, 71 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2D40: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esp + 0x408);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2D7E; /* jne: not equal / not zero */

loc_000B2D5D: ;
    PUSH32(esp, 0x23B);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x423970);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2D7Bu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2D7B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2D7E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2DA3; /* jne: not equal / not zero */

loc_000B2D82: ;
    PUSH32(esp, 0x23C);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x423958);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B2DA0u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2DA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2DA3: ;
    eax = MEM32(0x758A70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2DCD; /* je: equal / zero */

loc_000B2DAC: ;
    PUSH32(esp, 0x23D);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x4238E8);
    edx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B2DCAu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2DCA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2DCD: ;
    eax = MEM32(0x7659B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x10000;
    if (CMP_NE(_fa, _fb)) goto loc_000B2DED; /* jne: not equal / not zero */

loc_000B2DE3: ;
    MEM32(0x7659B4) = 1;

loc_000B2DED: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B2E4D; /* je: equal / zero */

loc_000B2DF5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B2E49; /* je: equal / zero */

loc_000B2DF8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B2E2F; /* je: equal / zero */

loc_000B2DFB: ;
    PUSH32(esp, 0x256);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2E19u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2E19: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B2E28u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2E28: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B2E2F: ;
    MEM32(esi + 0xC) = 0;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B2E42u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2E42: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B2E49: ;
    MEM8(esi + 0xD) = 0;

loc_000B2E4D: ;
    ecx = MEM32(esp + 0x400);
    MEM8(esi + 0xC) = 0x40;
    PUSH32(esp, 0x000B2E5Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B2E5D: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B2E70
 * Original: 0x000B2E70 - 0x000B3141 (721 bytes, 216 insns)
 * Folder: sound (source: sndxdmic.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B2E70: ;
    _fb = (uint32_t)(0x420) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x420;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x424) = eax;
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000B2EAC; /* jne: not equal / not zero */

loc_000B2E8B: ;
    PUSH32(esp, 0x273);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x423970);
    eax = esp + 0x34;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2EA9u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2EA9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2EAC: ;
    esi = MEM32(esp + 0x430);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2ED8; /* jne: not equal / not zero */

loc_000B2EB7: ;
    PUSH32(esp, 0x274);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x423958);
    ecx = esp + 0x34;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B2ED5u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2ED5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2ED8: ;
    eax = MEM32(0x758A70);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2F07; /* je: equal / zero */

loc_000B2EE6: ;
    PUSH32(esp, 0x275);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x4239B0);
    edx = esp + 0x34;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B2F04u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2F04: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2F07: ;
    _fa = (uint32_t)(MEM32(0x46DD90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x46DD90), ebx (32-bit) */
    MEM8(esp + 0xE) = 0x40;
    MEM8(esp + 0xF) = 0;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = 0x10000;
    MEM32(esp + 0x18) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000B2F4A; /* jle: less or equal (signed <=) */

loc_000B2F29: ;
    PUSH32(esp, 0x280);
    PUSH32(esp, 0x4239C8);
    PUSH32(esp, 0x4238A8);
    eax = esp + 0x34;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2F47u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B2F47: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2F4A: ;
    ebx = MEM32(0x46DD88);
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x30), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B307B; /* jne: not equal / not zero */

loc_000B2F59: ;
    ecx = MEM32(edi + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B2F71; /* jle: less or equal (signed <=) */

loc_000B2F62: ;
    edx = edi + 0x2C;

loc_000B2F65: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2F71; /* je: equal / zero */

loc_000B2F69: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B2F65; /* jl: less (signed <) */

loc_000B2F71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B307B; /* jge: greater or equal (signed >=) */

loc_000B2F79: ;
    _fa = (uint32_t)(MEM32(edi + eax * 8 + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 8 + 0x30), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B307B; /* je: equal / zero */

loc_000B2F83: ;
    esi = MEM32(ebx + 4);
    edx = MEM32(edi + 0x10);
    eax = MEM32(ebx);
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = edi + 0xC;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x14);
    MEM32(esp + 0x20) = edx;
    _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp + 0x1C;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000B2FB0u); RECOMP_ABI_CALL(0x000B5E80u, sub_000B5E80); /* call 0x000B5E80 */

loc_000B2FB0: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x24), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2FC5; /* je: equal / zero */

loc_000B2FB6: ;
    ecx = edi + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2FC0u); RECOMP_ABI_CALL(0x000AF480u, sub_000AF480); /* call 0x000AF480 */

loc_000B2FC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B2FCE;

loc_000B2FC5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2FCBu); RECOMP_ABI_CALL(0x000AF370u, sub_000AF370); /* call 0x000AF370 */

loc_000B2FCB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B2FCE: ;
    edx = MEM32(esp + 0x430);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B3040; /* je: equal / zero */

loc_000B2FE1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B3019; /* je: equal / zero */

loc_000B2FE4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B3000; /* je: equal / zero */

loc_000B2FE7: ;
    PUSH32(esp, 0x2AC);
    ecx = 0x4239C8;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B2FFBu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B2FFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B3056;

loc_000B3000: ;
    ecx = ebp;
    PUSH32(esp, 0x000B3007u); RECOMP_ABI_CALL(0x000B2810u, sub_000B2810); /* call 0x000B2810 */

loc_000B3007: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429510); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x18) = eax;
    goto loc_000B3056;

loc_000B3019: ;
    ecx = ebx + 0x24;
    PUSH32(esp, ecx);
    esi = ebx + 0x18;
    PUSH32(esp, ebp);
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0x000B302Au); RECOMP_ABI_CALL(0x000AF680u, sub_000AF680); /* call 0x000AF680 */

loc_000B302A: ;
    MEM8(esp + 0x16) = LO8(eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0x000B3037u); RECOMP_ABI_CALL(0x000AF7B0u, sub_000AF7B0); /* call 0x000AF7B0 */

loc_000B3037: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xF) = LO8(eax);
    goto loc_000B3056;

loc_000B3040: ;
    edx = ebx + 0x24;
    PUSH32(esp, edx);
    eax = ebx + 0x18;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000B304Fu); RECOMP_ABI_CALL(0x000AF680u, sub_000AF680); /* call 0x000AF680 */

loc_000B304F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xE) = LO8(eax);

loc_000B3056: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x24), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B3074; /* jne: not equal / not zero */

loc_000B305C: ;
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    ecx = edi + 0x18;
    PUSH32(esp, ecx);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0x000B306Du); RECOMP_ABI_CALL(0x000AF5C0u, sub_000AF5C0); /* call 0x000AF5C0 */

loc_000B306D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;

loc_000B3074: ;
    esi = MEM32(esp + 0x430);

loc_000B307B: ;
    edx = MEM32(edi);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3088u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B3088: ;
    edx = MEM32(esp + 0x18);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    eax = ecx + edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000B30A8; /* jge: greater or equal (signed >=) */

loc_000B30A1: ;
    MEM32(esi + 4) = 0xFFA00000u;

loc_000B30A8: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B3124; /* je: equal / zero */

loc_000B30B0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B3100; /* je: equal / zero */

loc_000B30B3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B30E3; /* je: equal / zero */

loc_000B30B6: ;
    PUSH32(esp, 0x2CA);
    ecx = 0x4239C8;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B30CAu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B30CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x41C);
    PUSH32(esp, 0x000B30DCu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B30DC: ;
    _fb = (uint32_t)(0x420) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x420;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B30E3: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x41C);
    PUSH32(esp, 0x000B30F9u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B30F9: ;
    _fb = (uint32_t)(0x420) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x420;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B3100: ;
    SET_LO8(ecx, MEM8(esp + 0xE));
    SET_LO8(edx, MEM8(esp + 0xF));
    MEM8(esi + 0xC) = LO8(ecx);
    MEM8(esi + 0xD) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x41C);
    PUSH32(esp, 0x000B311Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B311D: ;
    _fb = (uint32_t)(0x420) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x420;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B3124: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    ecx = MEM32(esp + 0x428);
    MEM8(esi + 0xC) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B313Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B313A: ;
    _fb = (uint32_t)(0x420) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x420;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3150
 * Original: 0x000B3150 - 0x000B3240 (240 bytes, 81 insns)
 * Folder: sound (between: 0x000B2E70 and 0x000B3430)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3150: ;
    SET_LO8(eax, MEM8(edi + 0x24));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, ebx);
    ebx = 0xFFA00000u;
    if (TEST_Z(_fa, _fb)) goto loc_000B3167; /* je: equal / zero */

loc_000B3160: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B3167: ;
    eax = MEM32(0x758A70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3239; /* je: equal / zero */

loc_000B3174: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x46DD88);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3238; /* je: equal / zero */

loc_000B3183: ;
    PUSH32(esp, esi);

loc_000B3184: ;
    ecx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 0xFFA00000u;
    if (CMP_NE(_fa, _fb)) goto loc_000B3227; /* jne: not equal / not zero */

loc_000B3194: ;
    edx = MEM32(edi + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B31AC; /* jle: less or equal (signed <=) */

loc_000B319D: ;
    esi = edi + 0x2C;

loc_000B31A0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B31AC; /* je: equal / zero */

loc_000B31A4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B31A0; /* jl: less (signed <) */

loc_000B31AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B3227; /* jge: greater or equal (signed >=) */

loc_000B31B0: ;
    edx = MEM32(edi + ecx * 8 + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3227; /* je: equal / zero */

loc_000B31B8: ;
    ecx = MEM32(ebp);
    eax = MEM32(edi + 0xC);
    esi = MEM32(ebp + 8);
    edx = MEM32(edi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 0x10);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp + 0xC;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000B31E5u); RECOMP_ABI_CALL(0x000B5E80u, sub_000B5E80); /* call 0x000B5E80 */

loc_000B31E5: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x24), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B31F1; /* je: equal / zero */

loc_000B31EB: ;
    ecx = edi + 0x3C;
    PUSH32(esp, ecx);
    goto loc_000B321E;

loc_000B31F1: ;
    edx = MEM32(0x431B7C);
    ecx = MEM32(0x431B80);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x431B84);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x431B88);
    MEM32(esp + 0x20) = edx;
    edx = esp + 0x18;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edx);

loc_000B321E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3224u); RECOMP_ABI_CALL(0x000AF480u, sub_000AF480); /* call 0x000AF480 */

loc_000B3224: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B3227: ;
    ebp = MEM32(ebp + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) ebx = eax; /* cmovl */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3184; /* jne: not equal / not zero */

loc_000B3237: ;
    POP32(esp, esi);

loc_000B3238: ;
    POP32(esp, ebp);

loc_000B3239: ;
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3237
 * Original: 0x000B3237 - 0x000B3240 (9 bytes, 6 insns)
 * Folder: sound (between: 0x000B2E70 and 0x000B3430)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3237(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3237: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3240
 * Original: 0x000B3240 - 0x000B3324 (228 bytes, 74 insns)
 * Folder: sound (between: 0x000B2E70 and 0x000B3430)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3240: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = MEM32(0x46B1A4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3254; /* jne: not equal / not zero */

loc_000B324F: ;
    PUSH32(esp, 0x000B3254u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B3254: ;
    edx = 0x44;
    ecx = eax;
    PUSH32(esp, 0x000B3260u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B3260: ;
    MEM32(eax + 0x3C) = edi;
    MEM32(eax + 0x40) = edi;
    MEM32(eax + 0x38) = edi;
    ecx = MEM32(0x46DD8C);
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = 0x46DD88;
    _fa = (uint32_t)(MEM32(0x46DD88)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x46DD88), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3288; /* jne: not equal / not zero */

loc_000B3281: ;
    MEM32(0x46DD88) = eax;
    goto loc_000B3291;

loc_000B3288: ;
    edx = MEM32(0x46DD8C);
    MEM32(edx + 0x38) = eax;

loc_000B3291: ;
    edx = MEM32(0x46DD90);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x46DD8C) = eax;
    MEM32(0x46DD90) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000B32BE; /* jne: not equal / not zero */

loc_000B32A7: ;
    ecx = MEM32(0x758A70);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x30) = 1;
    MEM32(0x758A70) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B32BE: ;
    ecx = esi;
    edi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = esi + 0xC;
    edi = MEM32(edx);
    ecx = eax + 0xC;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = esi + 0x18;
    edi = MEM32(ecx);
    edx = eax + 0x18;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi);
    edx = eax + 0x24;
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(0x758A70);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758A70) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3330
 * Original: 0x000B3330 - 0x000B33B2 (130 bytes, 50 insns)
 * Folder: sound (between: 0x000B2E70 and 0x000B3430)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3330: ;
    eax = MEM32(0x46DD88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B33B1; /* je: equal / zero */

loc_000B3339: ;
    /* nop */

loc_000B3340: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B334C; /* je: equal / zero */

loc_000B3344: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3340; /* jne: not equal / not zero */

loc_000B334B: ;
    esp += 4; return; /* ret */

loc_000B334C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B33B1; /* je: equal / zero */

loc_000B3350: ;
    MEM32(eax + 0x30) = 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx;
    edi = MEM32(edx);
    esi = eax;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = ecx + 0xC;
    edi = MEM32(edx);
    esi = eax + 0xC;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = ecx + 0x18;
    edi = MEM32(edx);
    esi = eax + 0x18;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    POP32(esp, edi);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);

loc_000B33B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B33C0
 * Original: 0x000B33C0 - 0x000B341D (93 bytes, 36 insns)
 * Folder: sound (between: 0x000B2E70 and 0x000B3430)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B33C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B33C0: ;
    PUSH32(esp, esi);
    esi = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B341B; /* je: equal / zero */

loc_000B33C9: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B33D6; /* je: equal / zero */

loc_000B33D0: ;
    edx = MEM32(esi + 0x3C);
    MEM32(eax + 0x3C) = edx;

loc_000B33D6: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B33E3; /* je: equal / zero */

loc_000B33DD: ;
    edx = MEM32(esi + 0x38);
    MEM32(eax + 0x38) = edx;

loc_000B33E3: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3407; /* je: equal / zero */

loc_000B33EA: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B33F9; /* jne: not equal / not zero */

loc_000B33F4: ;
    edx = MEM32(esi + 0x38);
    MEM32(eax) = edx;

loc_000B33F9: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3407; /* jne: not equal / not zero */

loc_000B3401: ;
    edx = MEM32(esi + 0x3C);
    MEM32(eax + 4) = edx;

loc_000B3407: ;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x40) = ecx;
    PUSH32(esp, 0x000B3415u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B3415: ;
    MEM32(0x758A70) = MEM32(0x758A70) - 1;
    _fa = (uint32_t)(MEM32(0x758A70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B341B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3420
 * Original: 0x000B3420 - 0x000B3427 (7 bytes, 2 insns)
 * Folder: sound (between: 0x000B2E70 and 0x000B3430)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3420(void)
{

loc_000B3420: ;
    MEM32(eax) = 0x423A10;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3430
 * Original: 0x000B3430 - 0x000B3474 (68 bytes, 15 insns)
 * Folder: sound (source: CRenderer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3430: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x423A88);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B345Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B345D: ;
    ecx = MEM32(esp + 0x414);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000B346Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B346B: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3480
 * Original: 0x000B3480 - 0x000B34C4 (68 bytes, 15 insns)
 * Folder: sound (source: CRenderer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3480: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x423A88);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B34ADu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B34AD: ;
    ecx = MEM32(esp + 0x414);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000B34BBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B34BB: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B34D0
 * Original: 0x000B34D0 - 0x000B3515 (69 bytes, 15 insns)
 * Folder: sound (source: CRenderer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B34D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B34D0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x56);
    PUSH32(esp, 0x423A88);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B34FDu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B34FD: ;
    ecx = MEM32(esp + 0x414);
    eax = 1;
    PUSH32(esp, 0x000B350Eu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B350E: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3520
 * Original: 0x000B3520 - 0x000B3564 (68 bytes, 23 insns)
 * Folder: sound (between: 0x000B34D0 and 0x000B3570)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3520: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3544; /* je: equal / zero */

loc_000B3528: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3544; /* je: equal / zero */

loc_000B352D: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3544; /* jne: not equal / not zero */

loc_000B3534: ;
    SET_LO16(edx, MEM16(eax + 6));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3549; /* je: equal / zero */

loc_000B353E: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3549; /* je: equal / zero */

loc_000B3544: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B3549: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3570
 * Original: 0x000B3570 - 0x000B35A9 (57 bytes, 22 insns)
 * Folder: sound (match: xbox-demo 0x000D8170, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3570: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3583; /* je: equal / zero */

loc_000B357A: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x000B3580u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B357Du); } /* indirect call */
    }

loc_000B3580: ;
    MEM32(esi + 0x1C) = edi;

loc_000B3583: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3598; /* je: equal / zero */

loc_000B358B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3591u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_000B3591: ;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;

loc_000B3598: ;
    MEM32(esi + 0x10) = edi;
    edi = MEM32(esi + 0x28);
    ecx = 0x2000;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B35B0
 * Original: 0x000B35B0 - 0x000B368B (219 bytes, 85 insns)
 * Folder: sound (between: 0x000B3570 and 0x000B3690)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B35B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B35B0: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B3682; /* je: equal / zero */

loc_000B35C1: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x000B35C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B35C4u); } /* indirect call */
    }

loc_000B35C7: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    edi = esi + 0xC;
    if (TEST_NZ(_fa, _fb)) goto loc_000B35F4; /* jne: not equal / not zero */

loc_000B35D1: ;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B35DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B35D8u); } /* indirect call */
    }

loc_000B35DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B35EB; /* jge: greater or equal (signed >=) */

loc_000B35DF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0x80004005u;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B35EB: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B3682; /* je: equal / zero */

loc_000B35F4: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3682; /* jne: not equal / not zero */

loc_000B35FE: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3682; /* je: equal / zero */

loc_000B3605: ;
    ebp = esi + 0x2C;
    goto loc_000B3610;

    /* nop */

loc_000B3610: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp;

loc_000B3614: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8000000Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B362E; /* jne: not equal / not zero */

loc_000B361C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B3614; /* jb: below (unsigned <) */

loc_000B3625: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B362E: ;
    eax = MEM32(esi + ebx * 8 + 0x30);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B364C; /* jne: not equal / not zero */

loc_000B363B: ;
    edi = esp + 0xC;
    eax = esi;
    PUSH32(esp, 0x000B3646u); RECOMP_ABI_CALL(0x000B3690u, sub_000B3690); /* call 0x000B3690 */

loc_000B3646: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B3684; /* jl: less (signed <) */

loc_000B364A: ;
    goto loc_000B367B;

loc_000B364C: ;
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x1C) = ecx;
    eax = esi + ebx * 8 + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x20);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0;
    edx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B3673u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3670u); } /* indirect call */
    }

loc_000B3673: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B3684; /* jl: less (signed <) */

loc_000B3677: ;
    MEM32(esi + ebx * 8 + 0x30) = edi;

loc_000B367B: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3610; /* jne: not equal / not zero */

loc_000B3682: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B3684: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3690
 * Original: 0x000B3690 - 0x000B3736 (166 bytes, 61 insns)
 * Folder: sound (match: xbox-demo 0x000D8280, between)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3690: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esi + 0x28);
    edx = ebx;
    edx = edx << 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + ebx * 8 + 0x2C;
    MEM32(edi + 0xC) = ecx;
    eax = esp + 4;
    MEM32(edi) = edx;
    MEM32(edi + 4) = 0x2000;
    MEM32(edi + 8) = eax;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000B36DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B36D7u); } /* indirect call */
    }

loc_000B36DA: ;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B36E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B36E3u); } /* indirect call */
    }

loc_000B36E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B3731; /* jl: less (signed <) */

loc_000B36EA: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + ebx * 8 + 0x30) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000B3728; /* jne: not equal / not zero */

loc_000B36FA: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x000B3703u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3700u); } /* indirect call */
    }

loc_000B3703: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B3712u); RECOMP_ABI_CALL(0x003E65E2u, sub_003E65E2); /* call 0x003E65E2 */

loc_000B3712: ;
    PUSH32(esp, 0x000B3717u); RECOMP_ABI_CALL(0x000B3570u, sub_000B3570); /* call 0x000B3570 */

loc_000B3717: ;
    eax = MEM32(esi + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = 0;
    MEM32(esi + 0x24) = eax;

loc_000B3728: ;
    ecx = MEM32(esp + 4);
    MEM32(edi + 4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B3731: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3740
 * Original: 0x000B3740 - 0x000B37B3 (115 bytes, 46 insns)
 * Folder: sound (between: 0x000B3690 and 0x000B3900)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3740: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B374C; /* jne: not equal / not zero */

loc_000B3747: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B374C: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B375A; /* jne: not equal / not zero */

loc_000B3755: ;
    PUSH32(esp, 0x000B375Au); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B375A: ;
    PUSH32(esp, edi);
    edx = 0xA0;
    ecx = eax;
    PUSH32(esp, 0x000B3767u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B3767: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B37A2; /* je: equal / zero */

loc_000B376B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3771u); RECOMP_ABI_CALL(0x000B37C0u, sub_000B37C0); /* call 0x000B37C0 */

loc_000B3771: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B37A2; /* je: equal / zero */

loc_000B3777: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = edi;
    PUSH32(esp, 0x000B3784u); RECOMP_ABI_CALL(0x000B3A10u, sub_000B3A10); /* call 0x000B3A10 */

loc_000B3784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B37A8; /* je: equal / zero */

loc_000B3788: ;
    esi = MEM32(edi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B379B; /* je: equal / zero */

loc_000B378F: ;
    PUSH32(esp, 0x000B3794u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B3794: ;
    MEM32(edi + 0x1C) = 0;

loc_000B379B: ;
    esi = edi;
    PUSH32(esp, 0x000B37A2u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B37A2: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B37A8: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B37C0
 * Original: 0x000B37C0 - 0x000B3884 (196 bytes, 43 insns)
 * Folder: sound (between: 0x000B3690 and 0x000B3900)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B37C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B37C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x42D758);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    eax = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(0x758A74) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x88) = ecx;
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0x9C) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(0x758A78) = ecx;
    ecx = 1;
    MEM32(0x435544) = ecx;
    MEM32(0x435540) = ecx;
    ecx = MEM32(esp);
    MEM32(eax + 0x60) = 0x10000;
    MEM32(eax + 0x24) = 0xA7980;
    MEM32(eax + 0x28) = 0xA7DF0;
    MEM32(eax + 0x2C) = 0xA7C60;
    MEM32(eax + 0x30) = 0xA7C90;
    MEM32(eax + 0x34) = 0xA7BF0;
    MEM32(eax + 0x38) = 0xA7CE0;
    MEM32(eax + 0x3C) = 0xA81C0;
    MEM32(eax + 0x40) = 0x6B1D0;
    PUSH32(esp, 0x000B3880u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B3880: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3890
 * Original: 0x000B3890 - 0x000B38A6 (22 bytes, 8 insns)
 * Folder: sound (between: 0x000B3690 and 0x000B3900)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3890: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B38A4; /* je: equal / zero */

loc_000B3898: ;
    PUSH32(esp, 0x000B389Du); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B389D: ;
    MEM32(edi + 0x1C) = 0;

loc_000B38A4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B38B0
 * Original: 0x000B38B0 - 0x000B38F3 (67 bytes, 23 insns)
 * Folder: sound (between: 0x000B3690 and 0x000B3900)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B38B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B38B0: ;
    eax = MEM32(0x758A74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B38E0; /* je: equal / zero */

loc_000B38B9: ;
    PUSH32(esp, 0x000B38BEu); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000B38BE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B38C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B38C3u); } /* indirect call */
    }

loc_000B38C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B38E0; /* je: equal / zero */

loc_000B38CA: ;
    PUSH32(esp, 0x000B38CFu); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000B38CF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B38D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B38D3u); } /* indirect call */
    }

loc_000B38D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B38DCu); RECOMP_ABI_CALL(0x000B3900u, sub_000B3900); /* call 0x000B3900 */

loc_000B38DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B38E5; /* jne: not equal / not zero */

loc_000B38E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B38E5: ;
    MEM32(0x435540) = esi;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3900
 * Original: 0x000B3900 - 0x000B39A7 (167 bytes, 33 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3900: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esp + 0x408);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B397E; /* je: equal / zero */

loc_000B391C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B3950; /* je: equal / zero */

loc_000B3921: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B393Fu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B393F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x435544) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B3988;

loc_000B3950: ;
    MEM32(0x758A78) = 2;
    MEM32(0x435544) = 3;
    eax = 1;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B3975u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B3975: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000B397E: ;
    eax = 1;
    MEM32(0x435544) = eax;

loc_000B3988: ;
    ecx = MEM32(esp + 0x400);
    MEM32(0x758A78) = 0;
    PUSH32(esp, 0x000B399Eu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B399E: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B39B0
 * Original: 0x000B39B0 - 0x000B3A04 (84 bytes, 19 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B39B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B39B0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(0x758A74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B39F1; /* jne: not equal / not zero */

loc_000B39CB: ;
    PUSH32(esp, 0x1D3);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423DEC);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B39E9u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B39E9: ;
    eax = MEM32(0x758A74);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B39F1: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B39FDu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B39FD: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3A10
 * Original: 0x000B3A10 - 0x000B3BE3 (467 bytes, 167 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3A10: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    _fa = (uint32_t)(MEM32(0x758A74)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758A74), ebx (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B3A5B; /* jne: not equal / not zero */

loc_000B3A39: ;
    PUSH32(esp, 0x758A74);
    edi = ebp;
    PUSH32(esp, 0x000B3A45u); RECOMP_ABI_CALL(0x000A5F40u, sub_000A5F40); /* call 0x000A5F40 */

loc_000B3A45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3A5B; /* je: equal / zero */

loc_000B3A4C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x758A74) = ebx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000B3A5B: ;
    ecx = MEM32(0x758A74);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3A73; /* je: equal / zero */

loc_000B3A67: ;
    PUSH32(esp, 0x000B3A6Cu); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000B3A6C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B3A73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3A70u); } /* indirect call */
    }

loc_000B3A73: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    ebx = 1;
    edi = esi;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000B3A8Du); RECOMP_ABI_CALL(0x000B96A0u, sub_000B96A0); /* call 0x000B96A0 */

loc_000B3A8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3B18; /* je: equal / zero */

loc_000B3A95: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x5C) = eax;
    PUSH32(esp, 0x000B3AA0u); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000B3AA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    ebp = esi + 0x64;
    ecx = ebp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    edi = esi + 0x50;
    PUSH32(esp, edi);
    MEM32(ecx + 8) = eax;
    PUSH32(esp, 0x000B3AC1u); RECOMP_ABI_CALL(0x000BC790u, sub_000BC790); /* call 0x000BC790 */

loc_000B3AC1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3B05; /* jne: not equal / not zero */

loc_000B3AC8: ;
    ebx = MEM32(edi);
    edx = MEM32(ebx);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B3AD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3ACFu); } /* indirect call */
    }

loc_000B3AD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3AE1; /* jne: not equal / not zero */

loc_000B3AD6: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000B3ADFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3ADCu); } /* indirect call */
    }

loc_000B3ADF: ;
    goto loc_000B3B05;

loc_000B3AE1: ;
    ebx = esi + 0x48;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B3AEBu); RECOMP_ABI_CALL(0x000BB3B0u, sub_000BB3B0); /* call 0x000BB3B0 */

loc_000B3AEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3B2B; /* je: equal / zero */

loc_000B3AF2: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3B05; /* je: equal / zero */

loc_000B3AF8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000B3AFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3AFCu); } /* indirect call */
    }

loc_000B3AFF: ;
    MEM32(ebx) = 0;

loc_000B3B05: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3B18; /* je: equal / zero */

loc_000B3B0B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000B3B12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3B0Fu); } /* indirect call */
    }

loc_000B3B12: ;
    MEM32(edi) = 0;

loc_000B3B18: ;
    ebx = 0x758A74;
    PUSH32(esp, 0x000B3B22u); RECOMP_ABI_CALL(0x000A5FB0u, sub_000A5FB0); /* call 0x000A5FB0 */

loc_000B3B22: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000B3B2B: ;
    eax = MEM32(0x758A74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3B3E; /* je: equal / zero */

loc_000B3B34: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3B3E; /* je: equal / zero */

loc_000B3B39: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3B55; /* jne: not equal / not zero */

loc_000B3B3E: ;
    PUSH32(esp, 0x208);
    ecx = 0x423DF8;
    edx = 0x423DBC;
    PUSH32(esp, 0x000B3B52u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B3B52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B3B55: ;
    PUSH32(esp, 0x000B3B5Au); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000B3B5A: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B3B63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3B61u); } /* indirect call */
    }

loc_000B3B63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x44) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B3B93; /* je: equal / zero */

loc_000B3B6B: ;
    ecx = MEM32(edi);
    eax = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B3B74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3B72u); } /* indirect call */
    }

loc_000B3B74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3B93; /* je: equal / zero */

loc_000B3B79: ;
    PUSH32(esp, 0x000B3B7Eu); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000B3B7E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B3B85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3B82u); } /* indirect call */
    }

loc_000B3B85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3B8Bu); RECOMP_ABI_CALL(0x000B3900u, sub_000B3900); /* call 0x000B3900 */

loc_000B3B8B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000B3B93: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3BA6; /* je: equal / zero */

loc_000B3B99: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000B3BA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3B9Du); } /* indirect call */
    }

loc_000B3BA0: ;
    MEM32(ebx) = 0;

loc_000B3BA6: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3BB9; /* je: equal / zero */

loc_000B3BAC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000B3BB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3BB0u); } /* indirect call */
    }

loc_000B3BB3: ;
    MEM32(edi) = 0;

loc_000B3BB9: ;
    ebx = 0x758A74;
    PUSH32(esp, 0x000B3BC3u); RECOMP_ABI_CALL(0x000A5FB0u, sub_000A5FB0); /* call 0x000A5FB0 */

loc_000B3BC3: ;
    PUSH32(esp, 0x211);
    ecx = 0x423DF8;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B3BD7u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B3BD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3BF0
 * Original: 0x000B3BF0 - 0x000B3C37 (71 bytes, 25 insns)
 * Folder: sound (between: 0x000B3A10 and 0x000B3C40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3BF0: ;
    PUSH32(esp, 0x000B3BF5u); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000B3BF5: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B3C00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3BFDu); } /* indirect call */
    }

loc_000B3C00: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3C15; /* je: equal / zero */

loc_000B3C07: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000B3C0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3C0Bu); } /* indirect call */
    }

loc_000B3C0E: ;
    MEM32(esi + 0x48) = 0;

loc_000B3C15: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3C2A; /* je: equal / zero */

loc_000B3C1C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000B3C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3C20u); } /* indirect call */
    }

loc_000B3C23: ;
    MEM32(esi + 0x50) = 0;

loc_000B3C2A: ;
    PUSH32(esp, ebx);
    ebx = 0x758A74;
    PUSH32(esp, 0x000B3C35u); RECOMP_ABI_CALL(0x000A5FB0u, sub_000A5FB0); /* call 0x000A5FB0 */

loc_000B3C35: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3BFB
 * Original: 0x000B3BFB - 0x000B3C37 (60 bytes, 21 insns)
 * Folder: sound (between: 0x000B3A10 and 0x000B3C40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3BFB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3BFB: ;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B3C00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3BFDu); } /* indirect call */
    }

loc_000B3C00: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3C15; /* je: equal / zero */

loc_000B3C07: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000B3C0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3C0Bu); } /* indirect call */
    }

loc_000B3C0E: ;
    MEM32(esi + 0x48) = 0;

loc_000B3C15: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3C2A; /* je: equal / zero */

loc_000B3C1C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000B3C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3C20u); } /* indirect call */
    }

loc_000B3C23: ;
    MEM32(esi + 0x50) = 0;

loc_000B3C2A: ;
    PUSH32(esp, ebx);
    ebx = 0x758A74;
    PUSH32(esp, 0x000B3C35u); RECOMP_ABI_CALL(0x000A5FB0u, sub_000A5FB0); /* call 0x000A5FB0 */

loc_000B3C35: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3C40
 * Original: 0x000B3C40 - 0x000B3CC4 (132 bytes, 33 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3C40: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B3CAE; /* je: equal / zero */

loc_000B3C58: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B3C98; /* je: equal / zero */

loc_000B3C5D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B3C83; /* je: equal / zero */

loc_000B3C62: ;
    PUSH32(esp, 0x28D);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3C80u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B3C80: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B3C83: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B3C91u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B3C91: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B3C98: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B3CA7u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B3CA7: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B3CAE: ;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B3CBDu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B3CBD: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3CD0
 * Original: 0x000B3CD0 - 0x000B3D54 (132 bytes, 33 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3CD0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B3D3E; /* je: equal / zero */

loc_000B3CE8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B3D28; /* je: equal / zero */

loc_000B3CED: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B3D13; /* je: equal / zero */

loc_000B3CF2: ;
    PUSH32(esp, 0x2A6);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3D10u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B3D10: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B3D13: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B3D21u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B3D21: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B3D28: ;
    eax = ecx + 0x24;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B3D37u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B3D37: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B3D3E: ;
    eax = ecx + 0x34;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B3D4Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B3D4D: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3D60
 * Original: 0x000B3D60 - 0x000B3DFF (159 bytes, 51 insns)
 * Folder: sound (between: 0x000B3CD0 and 0x000B3E60)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3D60: ;
    eax = MEM32(0x46B1A4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3D77; /* jne: not equal / not zero */

loc_000B3D72: ;
    PUSH32(esp, 0x000B3D77u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B3D77: ;
    edx = 0x28;
    ecx = eax;
    PUSH32(esp, 0x000B3D83u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B3D83: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3DF7; /* je: equal / zero */

loc_000B3D89: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = ebp;
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B3DB4; /* je: equal / zero */

loc_000B3D96: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x000B3DA5u); RECOMP_ABI_CALL(0x000B3C40u, sub_000B3C40); /* call 0x000B3C40 */

loc_000B3DA5: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    MEM32(esi + 0x14) = edi;
    goto loc_000B3DBB;

loc_000B3DB4: ;
    MEM32(esi + 8) = 0xFFFFFFFFu;

loc_000B3DBB: ;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x1C) = edi;
    ecx = MEM32(ebx + 0x80);
    eax = ebx + 0x7C;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3DDB; /* jne: not equal / not zero */

loc_000B3DD7: ;
    MEM32(eax) = esi;
    goto loc_000B3DE4;

loc_000B3DDB: ;
    edx = MEM32(ebx + 0x80);
    MEM32(edx + 0x1C) = esi;

loc_000B3DE4: ;
    eax = MEM32(ebx + 0x84);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x80) = esi;
    MEM32(ebx + 0x84) = eax;

loc_000B3DF7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B3E00
 * Original: 0x000B3E00 - 0x000B3E53 (83 bytes, 33 insns)
 * Folder: sound (between: 0x000B3CD0 and 0x000B3E60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3E00: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3E12; /* je: equal / zero */

loc_000B3E0C: ;
    edx = MEM32(esi + 0x20);
    MEM32(eax + 0x20) = edx;

loc_000B3E12: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3E1F; /* je: equal / zero */

loc_000B3E19: ;
    edx = MEM32(esi + 0x1C);
    MEM32(eax + 0x1C) = edx;

loc_000B3E1F: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3E43; /* je: equal / zero */

loc_000B3E26: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3E35; /* jne: not equal / not zero */

loc_000B3E30: ;
    edx = MEM32(esi + 0x1C);
    MEM32(eax) = edx;

loc_000B3E35: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3E43; /* jne: not equal / not zero */

loc_000B3E3D: ;
    edx = MEM32(esi + 0x20);
    MEM32(eax + 4) = edx;

loc_000B3E43: ;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = ecx;
    PUSH32(esp, 0x000B3E51u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B3E51: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3E60
 * Original: 0x000B3E60 - 0x000B3F87 (295 bytes, 96 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3E60: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x408));
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x418);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x418);
    MEM32(esp + 0x410) = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000B3EAE; /* jne: not equal / not zero */

loc_000B3E8D: ;
    PUSH32(esp, 0x2F2);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423DA4);
    eax = esp + 0x20;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3EABu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B3EAB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B3EAE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000B3ED3; /* jne: not equal / not zero */

loc_000B3EB2: ;
    PUSH32(esp, 0x2F5);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423D9C);
    ecx = esp + 0x20;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B3ED0u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B3ED0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B3ED3: ;
    ecx = esi;
    PUSH32(esp, 0x000B3EDAu); RECOMP_ABI_CALL(0x000A7360u, sub_000A7360); /* call 0x000A7360 */

loc_000B3EDA: ;
    PUSH32(esp, esi);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x000B3EE4u); RECOMP_ABI_CALL(0x000B56C0u, sub_000B56C0); /* call 0x000B56C0 */

loc_000B3EE4: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B3EF1u); RECOMP_ABI_CALL(0x000B3D60u, sub_000B3D60); /* call 0x000B3D60 */

loc_000B3EF1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B3F67; /* je: equal / zero */

loc_000B3EFB: ;
    SET_LO8(ecx, MEM8(ebp + 0x24));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000B3F20; /* jne: not equal / not zero */

loc_000B3F07: ;
    ecx = MEM32(0x758A70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000B3F20; /* jne: not equal / not zero */

loc_000B3F11: ;
    ecx = MEM32(0x7659B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000B3F20; /* jne: not equal / not zero */

loc_000B3F1B: ;
    MEM32(0x7659B8) = eax;

loc_000B3F20: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3F46; /* je: equal / zero */

loc_000B3F27: ;
    ecx = esi;
    PUSH32(esp, 0x000B3F2Eu); RECOMP_ABI_CALL(0x000B56C0u, sub_000B56C0); /* call 0x000B56C0 */

loc_000B3F2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B3F3D; /* jne: not equal / not zero */

loc_000B3F35: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B3F3Bu); RECOMP_ABI_CALL(0x000B3F90u, sub_000B3F90); /* call 0x000B3F90 */

loc_000B3F3B: ;
    goto loc_000B3F59;

loc_000B3F3D: ;
    ecx = ebx;
    PUSH32(esp, 0x000B3F44u); RECOMP_ABI_CALL(0x000B40F0u, sub_000B40F0); /* call 0x000B40F0 */

loc_000B3F44: ;
    goto loc_000B3F59;

loc_000B3F46: ;
    edx = MEM32(esp + 0x424);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B3F56u); RECOMP_ABI_CALL(0x000B9A50u, sub_000B9A50); /* call 0x000B9A50 */

loc_000B3F56: ;
    MEM32(edi + 8) = eax;

loc_000B3F59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B3F6C; /* jne: not equal / not zero */

loc_000B3F5E: ;
    eax = esp + 0x10;
    PUSH32(esp, 0x000B3F67u); RECOMP_ABI_CALL(0x000B3E00u, sub_000B3E00); /* call 0x000B3E00 */

loc_000B3F67: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B3F6E;

loc_000B3F6C: ;
    eax = edi;

loc_000B3F6E: ;
    ecx = MEM32(esp + 0x414);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B3F7Eu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B3F7E: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x408)) >> 32) & 1);
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B3F90
 * Original: 0x000B3F90 - 0x000B40EF (351 bytes, 100 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3F90: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x418);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x420);
    MEM32(esp + 0x410) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B3FDD; /* je: equal / zero */

loc_000B3FBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3FDD; /* je: equal / zero */

loc_000B3FC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3FDD; /* je: equal / zero */

loc_000B3FC6: ;
    PUSH32(esp, 0x33B);
    ecx = 0x423DF8;
    edx = 0x423D28;
    PUSH32(esp, 0x000B3FDAu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B3FDA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B3FDD: ;
    ecx = esi;
    PUSH32(esp, 0x000B3FE4u); RECOMP_ABI_CALL(0x000B56C0u, sub_000B56C0); /* call 0x000B56C0 */

loc_000B3FE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4009; /* je: equal / zero */

loc_000B3FE8: ;
    PUSH32(esp, 0x33C);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423D08);
    eax = esp + 0x20;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4006u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4006: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4009: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4031; /* jne: not equal / not zero */

loc_000B4010: ;
    PUSH32(esp, 0x33D);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423CF4);
    ecx = esp + 0x20;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B402Eu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B402E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4031: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000B4040u); RECOMP_ABI_CALL(0x000B3CD0u, sub_000B3CD0); /* call 0x000B3CD0 */

loc_000B4040: ;
    edx = MEM32(esp + 0x41C);
    ecx = MEM32(esp + 0x428);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x64;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    esi = esp + 0x14;
    PUSH32(esp, 0x000B405Du); RECOMP_ABI_CALL(0x000BBF40u, sub_000BBF40); /* call 0x000BBF40 */

loc_000B405D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B40B9; /* jne: not equal / not zero */

loc_000B4064: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x41C);
    ebx = ebp + 0x14;
    esi = ebp;
    MEM32(ebx) = edx;
    MEM32(ebp + 8) = 1;
    PUSH32(esp, 0x000B4082u); RECOMP_ABI_CALL(0x000B54C0u, sub_000B54C0); /* call 0x000B54C0 */

loc_000B4082: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B40B9; /* jne: not equal / not zero */

loc_000B4086: ;
    PUSH32(esp, 0x34A);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0x20;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B40A4u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B40A4: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B40B4; /* je: equal / zero */

loc_000B40AD: ;
    esi = ebx;
    PUSH32(esp, 0x000B40B4u); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B40B4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B40D6;

loc_000B40B9: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B40D4; /* jne: not equal / not zero */

loc_000B40C0: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ebp + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_000B40CF; /* je: equal / zero */

loc_000B40CA: ;
    PUSH32(esp, 0x000B40CFu); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B40CF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B40D6;

loc_000B40D4: ;
    eax = ebp;

loc_000B40D6: ;
    ecx = MEM32(esp + 0x414);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B40E6u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B40E6: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B40F0
 * Original: 0x000B40F0 - 0x000B425C (364 bytes, 107 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B40F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B40F0: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x414);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x41C);
    MEM32(esp + 0x410) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B413A; /* je: equal / zero */

loc_000B411E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B413A; /* je: equal / zero */

loc_000B4123: ;
    PUSH32(esp, 0x36E);
    ecx = 0x423DF8;
    edx = 0x423CA8;
    PUSH32(esp, 0x000B4137u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B4137: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B413A: ;
    ecx = esi;
    PUSH32(esp, 0x000B4141u); RECOMP_ABI_CALL(0x000B56C0u, sub_000B56C0); /* call 0x000B56C0 */

loc_000B4141: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4166; /* jne: not equal / not zero */

loc_000B4145: ;
    PUSH32(esp, 0x36F);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C84);
    eax = esp + 0x20;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4163u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4163: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4166: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B418E; /* jne: not equal / not zero */

loc_000B416D: ;
    PUSH32(esp, 0x370);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423CF4);
    ecx = esp + 0x20;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B418Bu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B418B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B418E: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000B419Du); RECOMP_ABI_CALL(0x000B3CD0u, sub_000B3CD0); /* call 0x000B3CD0 */

loc_000B419D: ;
    edx = MEM32(esp + 0x424);
    ecx = eax;
    PUSH32(esp, edx);
    eax = edi + 0x64;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x000B41B7u); RECOMP_ABI_CALL(0x000BA9C0u, sub_000BA9C0); /* call 0x000BA9C0 */

loc_000B41B7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B420A; /* jne: not equal / not zero */

loc_000B41BE: ;
    eax = MEM32(esp + 0x10);
    ebx = ebp + 0x14;
    esi = ebp;
    MEM32(ebx) = eax;
    MEM32(ebp + 8) = 1;
    PUSH32(esp, 0x000B41D5u); RECOMP_ABI_CALL(0x000B54C0u, sub_000B54C0); /* call 0x000B54C0 */

loc_000B41D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B420A; /* jne: not equal / not zero */

loc_000B41D9: ;
    PUSH32(esp, 0x37D);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    ecx = esp + 0x20;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B41F7u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B41F7: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4205; /* je: equal / zero */

loc_000B4200: ;
    PUSH32(esp, 0x000B4205u); RECOMP_ABI_CALL(0x000BAA80u, sub_000BAA80); /* call 0x000BAA80 */

loc_000B4205: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B4243;

loc_000B420A: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4241; /* jne: not equal / not zero */

loc_000B4211: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B423C; /* je: equal / zero */

loc_000B4218: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B423C; /* je: equal / zero */

loc_000B421E: ;
    PUSH32(esp, 0x000B4223u); RECOMP_ABI_CALL(0x000BACA0u, sub_000BACA0); /* call 0x000BACA0 */

loc_000B4223: ;
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4235; /* je: equal / zero */

loc_000B422A: ;
    MEM32(esi) = 0x424A28;
    PUSH32(esp, 0x000B4235u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B4235: ;
    MEM32(ebp + 0x14) = 0;

loc_000B423C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B4243;

loc_000B4241: ;
    eax = ebp;

loc_000B4243: ;
    ecx = MEM32(esp + 0x414);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B4253u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4253: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B4260
 * Original: 0x000B4260 - 0x000B4316 (182 bytes, 49 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4260: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x404) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B42AE; /* jne: not equal / not zero */

loc_000B4279: ;
    PUSH32(esp, 0x3BD);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4297u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4297: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B42A7u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B42A7: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B42AE: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B42FA; /* je: equal / zero */

loc_000B42B5: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B42D3; /* jne: not equal / not zero */

loc_000B42BC: ;
    PUSH32(esp, 0x3C3);
    ecx = 0x423DF8;
    edx = 0x423C58;
    PUSH32(esp, 0x000B42D0u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B42D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B42D3: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4302; /* je: equal / zero */

loc_000B42DA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B42DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B42DCu); } /* indirect call */
    }

loc_000B42DF: ;
    MEM32(esi + 0xC) = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B42F3u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B42F3: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B42FA: ;
    esi = MEM32(esi + 8);
    PUSH32(esp, 0x000B4302u); RECOMP_ABI_CALL(0x000B9EB0u, sub_000B9EB0); /* call 0x000B9EB0 */

loc_000B4302: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, esi);
    PUSH32(esp, 0x000B430Fu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B430F: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B4320
 * Original: 0x000B4320 - 0x000B43D6 (182 bytes, 49 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4320: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x404) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B436E; /* jne: not equal / not zero */

loc_000B4339: ;
    PUSH32(esp, 0x3DF);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4357u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4357: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B4367u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4367: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B436E: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B43BA; /* je: equal / zero */

loc_000B4375: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4393; /* jne: not equal / not zero */

loc_000B437C: ;
    PUSH32(esp, 0x3E5);
    ecx = 0x423DF8;
    edx = 0x423C58;
    PUSH32(esp, 0x000B4390u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B4390: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4393: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B43C2; /* je: equal / zero */

loc_000B439A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B439Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B439Cu); } /* indirect call */
    }

loc_000B439F: ;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B43B3u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B43B3: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B43BA: ;
    esi = MEM32(esi + 8);
    PUSH32(esp, 0x000B43C2u); RECOMP_ABI_CALL(0x000B9F20u, sub_000B9F20); /* call 0x000B9F20 */

loc_000B43C2: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, esi);
    PUSH32(esp, 0x000B43CFu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B43CF: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B43E0
 * Original: 0x000B43E0 - 0x000B44C6 (230 bytes, 69 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B43E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B43E0: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x40C) = eax;
    edi = edx;
    MEM32(esp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000B4436; /* jne: not equal / not zero */

loc_000B4400: ;
    PUSH32(esp, 0x401);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B441Eu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B441E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000B442Fu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B442F: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B4436: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000B449D; /* je: equal / zero */

loc_000B443E: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = esi + 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_000B4465; /* jne: not equal / not zero */

loc_000B4448: ;
    PUSH32(esp, 0x407);
    ecx = 0x423DF8;
    edx = 0x423C58;
    PUSH32(esp, 0x000B445Cu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B445C: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B44A7; /* je: equal / zero */

loc_000B4465: ;
    PUSH32(esp, 0x000B446Au); RECOMP_ABI_CALL(0x000B55C0u, sub_000B55C0); /* call 0x000B55C0 */

loc_000B446A: ;
    esi = MEM32(esi);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B4494; /* je: equal / zero */

loc_000B4471: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B448D; /* je: equal / zero */

loc_000B4474: ;
    PUSH32(esp, 0x410);
    ecx = 0x423DF8;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B4488u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B4488: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B44A7;

loc_000B448D: ;
    PUSH32(esp, 0x000B4492u); RECOMP_ABI_CALL(0x000BAA80u, sub_000BAA80); /* call 0x000BAA80 */

loc_000B4492: ;
    goto loc_000B44A7;

loc_000B4494: ;
    esi = ebx;
    PUSH32(esp, 0x000B449Bu); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B449B: ;
    goto loc_000B44A7;

loc_000B449D: ;
    ecx = MEM32(esi + 8);
    edx = edi;
    PUSH32(esp, 0x000B44A7u); RECOMP_ABI_CALL(0x000B9E40u, sub_000B9E40); /* call 0x000B9E40 */

loc_000B44A7: ;
    eax = esp + 0xC;
    PUSH32(esp, 0x000B44B0u); RECOMP_ABI_CALL(0x000B3E00u, sub_000B3E00); /* call 0x000B3E00 */

loc_000B44B0: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000B44BFu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B44BF: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B44D0
 * Original: 0x000B44D0 - 0x000B4595 (197 bytes, 52 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B44D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B44D0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x404) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B4525; /* jne: not equal / not zero */

loc_000B44E9: ;
    PUSH32(esp, 0x485);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4507u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4507: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B450A: ;
    eax = 0xFFFF0000u;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B451Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B451C: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000B4525: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B456F; /* je: equal / zero */

loc_000B452C: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4551; /* jne: not equal / not zero */

loc_000B4533: ;
    PUSH32(esp, 0x48B);
    ecx = 0x423DF8;
    edx = 0x423C58;
    PUSH32(esp, 0x000B4547u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B4547: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B450A; /* je: equal / zero */

loc_000B4551: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000B4559u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4556u); } /* indirect call */
    }

loc_000B4559: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B4566u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4566: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000B456F: ;
    eax = MEM32(esi + 8);
    esi = MEM32(esp + 0x40C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B457Fu); RECOMP_ABI_CALL(0x000B9F90u, sub_000B9F90); /* call 0x000B9F90 */

loc_000B457F: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, esi);
    PUSH32(esp, 0x000B458Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B458C: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B45A0
 * Original: 0x000B45A0 - 0x000B4631 (145 bytes, 42 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B45A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B45A0: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x42D758);
    PUSH32(esp, edi);
    MEM32(esp + 0x408) = eax;
    edi = edx;
    MEM32(esp + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000B45F4; /* jne: not equal / not zero */

loc_000B45BD: ;
    PUSH32(esp, 0x4A7);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B45DBu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B45DB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000B45EDu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B45ED: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B45F4: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B4603; /* je: equal / zero */

loc_000B45FC: ;
    PUSH32(esp, 0x000B4601u); RECOMP_ABI_CALL(0x000B53A0u, sub_000B53A0); /* call 0x000B53A0 */

loc_000B4601: ;
    goto loc_000B460B;

loc_000B4603: ;
    esi = MEM32(ecx + 8);
    PUSH32(esp, 0x000B460Bu); RECOMP_ABI_CALL(0x000B9D70u, sub_000B9D70); /* call 0x000B9D70 */

loc_000B460B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B461A; /* jne: not equal / not zero */

loc_000B4611: ;
    eax = esp + 8;
    PUSH32(esp, 0x000B461Au); RECOMP_ABI_CALL(0x000B3E00u, sub_000B3E00); /* call 0x000B3E00 */

loc_000B461A: ;
    ecx = MEM32(esp + 0x40C);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    PUSH32(esp, 0x000B462Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B462A: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B4640
 * Original: 0x000B4640 - 0x000B46E7 (167 bytes, 54 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4640: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x40C) = eax;
    ebx = ecx;
    edi = edx;
    MEM32(esp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000B4698; /* jne: not equal / not zero */

loc_000B4660: ;
    PUSH32(esp, 0x4C9);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B467Eu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B467E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000B4691u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4691: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B4698: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B46B7; /* je: equal / zero */

loc_000B469F: ;
    ecx = esi;
    PUSH32(esp, 0x000B46A6u); RECOMP_ABI_CALL(0x000B53A0u, sub_000B53A0); /* call 0x000B53A0 */

loc_000B46A6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B46C7; /* je: equal / zero */

loc_000B46AC: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B46B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B46B2u); } /* indirect call */
    }

loc_000B46B5: ;
    goto loc_000B46C3;

loc_000B46B7: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B46C1u); RECOMP_ABI_CALL(0x000B9C40u, sub_000B9C40); /* call 0x000B9C40 */

loc_000B46C1: ;
    edi = eax;

loc_000B46C3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B46D0; /* jne: not equal / not zero */

loc_000B46C7: ;
    eax = esp + 8;
    PUSH32(esp, 0x000B46D0u); RECOMP_ABI_CALL(0x000B3E00u, sub_000B3E00); /* call 0x000B3E00 */

loc_000B46D0: ;
    ecx = MEM32(esp + 0x40C);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B46E0u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B46E0: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B46C1
 * Original: 0x000B46C1 - 0x000B46E7 (38 bytes, 12 insns)
 * Folder: sound (between: 0x000B4640 and 0x000B46F0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B46C1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B46C1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B46D0; /* jne: not equal / not zero */

loc_000B46C7: ;
    eax = esp + 8;
    PUSH32(esp, 0x000B46D0u); RECOMP_ABI_CALL(0x000B3E00u, sub_000B3E00); /* call 0x000B3E00 */

loc_000B46D0: ;
    ecx = MEM32(esp + 0x40C);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B46E0u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B46E0: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B46F0
 * Original: 0x000B46F0 - 0x000B478D (157 bytes, 38 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B46F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B46F0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B4727; /* jne: not equal / not zero */

loc_000B4706: ;
    PUSH32(esp, 0x50E);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C4C);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4724u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4724: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4727: ;
    ecx = MEM32(0x758A74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4755; /* je: equal / zero */

loc_000B4731: ;
    eax = MEM32(esp + 0x408);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000B473Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B473Bu); } /* indirect call */
    }

loc_000B473E: ;
    eax = esi;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B474Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B474C: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000B4755: ;
    PUSH32(esp, 0x513);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4773u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4773: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x000B4784u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4784: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B4790
 * Original: 0x000B4790 - 0x000B4817 (135 bytes, 37 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4790: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000B4798u); RECOMP_ABI_CALL(0x000ACD50u, sub_000ACD50); /* call 0x000ACD50 */

loc_000B4798: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x758800);
    PUSH32(esp, 0x000B47ACu); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B47AC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758880) = 0x5A9;
    PUSH32(esp, 0x000B47BEu); RECOMP_ABI_CALL(0x00331F07u, sub_00331F07); /* call 0x00331F07 */

loc_000B47BE: ;
    MEM32(0x758884) = eax;
    eax = MEM32(0x7596D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B47F4; /* je: equal / zero */

loc_000B47CC: ;
    PUSH32(esp, edi);
    /* nop */

loc_000B47D0: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    edi = 0x7596D0;
    PUSH32(esp, 0x000B47DFu); RECOMP_ABI_CALL(0x0009D040u, sub_0009D040); /* call 0x0009D040 */

loc_000B47DF: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x000B47E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B47E5u); } /* indirect call */
    }

loc_000B47E7: ;
    eax = MEM32(0x7596D8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B47D0; /* jne: not equal / not zero */

loc_000B47F3: ;
    POP32(esp, edi);

loc_000B47F4: ;
    eax = MEM32(0x758998);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4813; /* je: equal / zero */

loc_000B47FD: ;
    ecx = MEM32(0x7587F4);
    PUSH32(esp, ecx);
    MEM32(0x7587F8) = 0;
    PUSH32(esp, 0x000B4813u); RECOMP_ABI_CALL(0x0033726Au, sub_0033726A); /* call 0x0033726A */

loc_000B4813: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B4820
 * Original: 0x000B4820 - 0x000B4856 (54 bytes, 22 insns)
 * Folder: sound (between: 0x000B4790 and 0x000B4860)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4820: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x7596D0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4851; /* je: equal / zero */

loc_000B482E: ;
    PUSH32(esp, edi);
    /* nop */

loc_000B4830: ;
    eax = esi;
    edx = MEM32(eax + 8);
    MEM32(esp + 8) = edx;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebx (32-bit) */
    ecx = esi;
    esi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_000B484C; /* jne: not equal / not zero */

loc_000B4842: ;
    edi = 0x7596D0;
    PUSH32(esp, 0x000B484Cu); RECOMP_ABI_CALL(0x000C3290u, sub_000C3290); /* call 0x000C3290 */

loc_000B484C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4830; /* jne: not equal / not zero */

loc_000B4850: ;
    POP32(esp, edi);

loc_000B4851: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B4860
 * Original: 0x000B4860 - 0x000B49E8 (392 bytes, 125 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4860: ;
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x418);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x410) = eax;
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B48B5; /* je: equal / zero */

loc_000B4881: ;
    ecx = MEM32(edi + 4);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B48CF; /* jne: not equal / not zero */

loc_000B488D: ;
    ecx = MEM32(edi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B48CF; /* jne: not equal / not zero */

loc_000B4894: ;
    edi = MEM32(edi);
    eax = edi;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x423BC8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B48B2u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B48B2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B48B5: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x408);
    PUSH32(esp, 0x000B48C6u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B48C6: ;
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_000B48CF: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x420);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4924; /* je: equal / zero */

loc_000B48DB: ;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4924; /* jne: not equal / not zero */

loc_000B48E0: ;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4924; /* jne: not equal / not zero */

loc_000B48E7: ;
    ebp = MEM32(ebp);
    edx = ebp;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    ebp = ebp & 0xFFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, 0x423B40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4906u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4906: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x408);
    PUSH32(esp, 0x000B491Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B491B: ;
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_000B4924: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B492Eu); RECOMP_ABI_CALL(0x000B3D60u, sub_000B3D60); /* call 0x000B3D60 */

loc_000B492E: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B49A2; /* je: equal / zero */

loc_000B493A: ;
    ecx = MEM32(esp + 0x428);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    edx = ebx + 0x64;
    MEM32(esi + 0x10) = eax;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4958u); RECOMP_ABI_CALL(0x000B89E0u, sub_000B89E0); /* call 0x000B89E0 */

loc_000B4958: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B49A7; /* jne: not equal / not zero */

loc_000B495F: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x430);
    MEM32(eax + 0x28) = ecx;
    MEM32(esi + 0x14) = eax;
    edi = ebx;
    MEM32(esi + 8) = 1;
    PUSH32(esp, 0x000B497Eu); RECOMP_ABI_CALL(0x000B54C0u, sub_000B54C0); /* call 0x000B54C0 */

loc_000B497E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B49A7; /* jne: not equal / not zero */

loc_000B4982: ;
    PUSH32(esp, 0x613);
    ecx = 0x423DF8;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B4996u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B4996: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, 0x000B49A2u); RECOMP_ABI_CALL(0x000B3E00u, sub_000B3E00); /* call 0x000B3E00 */

loc_000B49A2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B49CF;

loc_000B49A7: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B49CD; /* jne: not equal / not zero */

loc_000B49AE: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B49BF; /* je: equal / zero */

loc_000B49B8: ;
    ebx = esi;
    PUSH32(esp, 0x000B49BFu); RECOMP_ABI_CALL(0x000B8A60u, sub_000B8A60); /* call 0x000B8A60 */

loc_000B49BF: ;
    eax = esp + 0x10;
    PUSH32(esp, 0x000B49C8u); RECOMP_ABI_CALL(0x000B3E00u, sub_000B3E00); /* call 0x000B3E00 */

loc_000B49C8: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B49CF;

loc_000B49CD: ;
    eax = esi;

loc_000B49CF: ;
    ecx = MEM32(esp + 0x418);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B49DFu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B49DF: ;
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B49F0
 * Original: 0x000B49F0 - 0x000B4AC8 (216 bytes, 62 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B49F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B49F0: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x408) = eax;
    MEM32(esp + 4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000B4A46; /* jne: not equal / not zero */

loc_000B4A0D: ;
    PUSH32(esp, 0x635);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4A2Bu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4A2B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000B4A3Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4A3D: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000B4A46: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4A6E; /* jne: not equal / not zero */

loc_000B4A4D: ;
    PUSH32(esp, 0x638);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423CF4);
    ecx = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4A6Bu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4A6B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4A6E: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x414);
    ecx = esi;
    PUSH32(esp, 0x000B4A7Du); RECOMP_ABI_CALL(0x000B53A0u, sub_000B53A0); /* call 0x000B53A0 */

loc_000B4A7D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4A95; /* je: equal / zero */

loc_000B4A83: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esp + 0x418);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B4A93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4A90u); } /* indirect call */
    }

loc_000B4A93: ;
    goto loc_000B4AAF;

loc_000B4A95: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4AA6; /* je: equal / zero */

loc_000B4A9C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x28);
    PUSH32(esp, 0x000B4AA5u); RECOMP_ABI_CALL(0x000B4820u, sub_000B4820); /* call 0x000B4820 */

loc_000B4AA5: ;
    POP32(esp, ebx);

loc_000B4AA6: ;
    eax = esp + 8;
    PUSH32(esp, 0x000B4AAFu); RECOMP_ABI_CALL(0x000B3E00u, sub_000B3E00); /* call 0x000B3E00 */

loc_000B4AAF: ;
    ecx = MEM32(esp + 0x40C);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000B4ABFu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4ABF: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B4ACB
 * Original: 0x000B4ACB - 0x000B4AD0 (5 bytes, 5 insns)
 * Folder: sound (between: 0x000B49F0 and 0x000B4AD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4ACB(void)
{

loc_000B4ACB: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000B4AD0
 * Original: 0x000B4AD0 - 0x000B4B68 (152 bytes, 39 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4AD0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B4B1F; /* jne: not equal / not zero */

loc_000B4AE6: ;
    PUSH32(esp, 0x675);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4B04u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4B04: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4B07: ;
    eax = 0xFFFF0000u;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B4B18u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4B18: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B4B1F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4B47; /* jne: not equal / not zero */

loc_000B4B26: ;
    PUSH32(esp, 0x678);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423CF4);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4B44u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4B44: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4B47: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4B07; /* je: equal / zero */

loc_000B4B4E: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000B4B55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4B52u); } /* indirect call */
    }

loc_000B4B55: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B4B61u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4B61: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B4B70
 * Original: 0x000B4B70 - 0x000B4CA4 (308 bytes, 81 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4B70: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B4BC1; /* jne: not equal / not zero */

loc_000B4B86: ;
    PUSH32(esp, 0x690);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4BA4u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4BA4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFF0000u;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B4BB8u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4BB8: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000B4BC1: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4BE9; /* jne: not equal / not zero */

loc_000B4BC8: ;
    PUSH32(esp, 0x693);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423CF4);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4BE6u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4BE6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4BE9: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4C0F; /* je: equal / zero */

loc_000B4BEE: ;
    PUSH32(esp, 0x694);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423B20);
    edx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B4C0Cu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4C0C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4C0F: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4C37; /* jne: not equal / not zero */

loc_000B4C16: ;
    PUSH32(esp, 0x695);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C58);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4C34u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4C34: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4C37: ;
    ecx = MEM32(esp + 0x408);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4C82; /* jne: not equal / not zero */

loc_000B4C44: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4C82; /* jne: not equal / not zero */

loc_000B4C4B: ;
    eax = MEM32(ecx);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, 0x423B40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B4C68u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4C68: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4C6B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B4C79u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4C79: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000B4C82: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4C6B; /* je: equal / zero */

loc_000B4C89: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4C8Fu); RECOMP_ABI_CALL(0x000B8EE0u, sub_000B8EE0); /* call 0x000B8EE0 */

loc_000B4C8F: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B4C9Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4C9B: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B4CB0
 * Original: 0x000B4CB0 - 0x000B4DE2 (306 bytes, 82 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4CB0: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x414);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x408) = eax;
    MEM32(esp + 4) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000B4D09; /* jne: not equal / not zero */

loc_000B4CD2: ;
    PUSH32(esp, 0x6D5);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4CF0u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4CF0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000B4D00u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4D00: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000B4D09: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4D31; /* jne: not equal / not zero */

loc_000B4D10: ;
    PUSH32(esp, 0x6D8);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423CF4);
    ecx = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4D2Eu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4D2E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4D31: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4D58; /* je: equal / zero */

loc_000B4D37: ;
    PUSH32(esp, 0x6D9);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423B20);
    edx = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B4D55u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4D55: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4D58: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4D80; /* jne: not equal / not zero */

loc_000B4D5F: ;
    PUSH32(esp, 0x6DA);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C58);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4D7Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4D7D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4D80: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4DC3; /* je: equal / zero */

loc_000B4D87: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B4D92u); RECOMP_ABI_CALL(0x000B4820u, sub_000B4820); /* call 0x000B4820 */

loc_000B4D92: ;
    edi = MEM32(esp + 0x41C);
    esi = ebp;
    PUSH32(esp, 0x000B4DA0u); RECOMP_ABI_CALL(0x000B55C0u, sub_000B55C0); /* call 0x000B55C0 */

loc_000B4DA0: ;
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4DC0; /* je: equal / zero */

loc_000B4DA7: ;
    edi = esi;
    PUSH32(esp, 0x000B4DAEu); RECOMP_ABI_CALL(0x000B91B0u, sub_000B91B0); /* call 0x000B91B0 */

loc_000B4DAE: ;
    MEM32(esi) = 0x4244D8;
    PUSH32(esp, 0x000B4DB9u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B4DB9: ;
    MEM32(ebp + 0x14) = 0;

loc_000B4DC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000B4DC3: ;
    eax = esp + 4;
    PUSH32(esp, 0x000B4DCCu); RECOMP_ABI_CALL(0x000B3E00u, sub_000B3E00); /* call 0x000B3E00 */

loc_000B4DCC: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, ebp);
    PUSH32(esp, 0x000B4DD9u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4DD9: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B4DF0
 * Original: 0x000B4DF0 - 0x000B4ED2 (226 bytes, 59 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4DF0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B4E3A; /* jne: not equal / not zero */

loc_000B4E06: ;
    PUSH32(esp, 0x6F7);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4E24u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4E24: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B4E33u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4E33: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B4E3A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4E62; /* jne: not equal / not zero */

loc_000B4E41: ;
    PUSH32(esp, 0x6FA);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423CF4);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4E5Fu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4E5F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4E62: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4E88; /* je: equal / zero */

loc_000B4E67: ;
    PUSH32(esp, 0x6FB);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423B20);
    edx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B4E85u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4E85: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4E88: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4EB7; /* jne: not equal / not zero */

loc_000B4E8F: ;
    PUSH32(esp, 0x6FC);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C58);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4EADu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4EAD: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4EBF; /* je: equal / zero */

loc_000B4EB7: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B4EBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4EBCu); } /* indirect call */
    }

loc_000B4EBF: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B4ECBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4ECB: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B4EE0
 * Original: 0x000B4EE0 - 0x000B4FC2 (226 bytes, 59 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4EE0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B4F2A; /* jne: not equal / not zero */

loc_000B4EF6: ;
    PUSH32(esp, 0x711);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4F14u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4F14: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B4F23u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4F23: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B4F2A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4F52; /* jne: not equal / not zero */

loc_000B4F31: ;
    PUSH32(esp, 0x714);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423CF4);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4F4Fu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4F4F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4F52: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4F78; /* je: equal / zero */

loc_000B4F57: ;
    PUSH32(esp, 0x715);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423B20);
    edx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B4F75u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4F75: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4F78: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4FA7; /* jne: not equal / not zero */

loc_000B4F7F: ;
    PUSH32(esp, 0x716);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C58);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4F9Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B4F9D: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4FAF; /* je: equal / zero */

loc_000B4FA7: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B4FAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4FACu); } /* indirect call */
    }

loc_000B4FAF: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B4FBBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B4FBB: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B4FD0
 * Original: 0x000B4FD0 - 0x000B5023 (83 bytes, 21 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4FD0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x404) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B500A; /* jne: not equal / not zero */

loc_000B4FE9: ;
    PUSH32(esp, 0x73C);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x4208F4);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5007u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5007: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B500A: ;
    PUSH32(esp, 0x000B500Fu); RECOMP_ABI_CALL(0x000A7180u, sub_000A7180); /* call 0x000A7180 */

loc_000B500F: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, esi);
    PUSH32(esp, 0x000B501Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B501C: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B5030
 * Original: 0x000B5030 - 0x000B50BA (138 bytes, 33 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5030: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esp + 0x408);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5068; /* jne: not equal / not zero */

loc_000B504D: ;
    PUSH32(esp, 0x74A);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    PUSH32(esp, 0x428D10);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    goto loc_000B509D;

loc_000B5068: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5084; /* jne: not equal / not zero */

loc_000B506E: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B507Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B507D: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5084: ;
    PUSH32(esp, 0x754);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    PUSH32(esp, 0x428D10);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);

loc_000B509D: ;
    PUSH32(esp, 0x000B50A2u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B50A2: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000B50B3u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B50B3: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B50C0
 * Original: 0x000B50C0 - 0x000B51D0 (272 bytes, 73 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B50C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B50C0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B50F7; /* jne: not equal / not zero */

loc_000B50D6: ;
    PUSH32(esp, 0x75B);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x4208F4);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B50F4u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B50F4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B50F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5138; /* jne: not equal / not zero */

loc_000B50FB: ;
    PUSH32(esp, 0x75F);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5119u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5119: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0x4C4B400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B5131u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5131: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5138: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B515F; /* je: equal / zero */

loc_000B513E: ;
    PUSH32(esp, 0x764);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423AFC);
    edx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B515Cu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B515C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B515F: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5197; /* jne: not equal / not zero */

loc_000B5166: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x421C10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5178u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5178: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0x4C4B400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B5190u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5190: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5197: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B51B8; /* je: equal / zero */

loc_000B51A0: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B51B1u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B51B1: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B51B8: ;
    ecx = MEM32(esp + 0x400);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    PUSH32(esp, 0x000B51C9u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B51C9: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B51D0
 * Original: 0x000B51D0 - 0x000B527C (172 bytes, 48 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B51D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B51D0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B5201; /* jne: not equal / not zero */

loc_000B51E6: ;
    PUSH32(esp, 0x77A);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    PUSH32(esp, 0x428D10);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    goto loc_000B525E;

loc_000B5201: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5245; /* jne: not equal / not zero */

loc_000B5207: ;
    edx = MEM32(ecx + 0x60);
    ecx = MEM32(ecx + 0x64);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B5269; /* jle: less or equal (signed <=) */

loc_000B5213: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx;
    /* nop */

loc_000B5220: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B5220; /* jne: not equal / not zero */

loc_000B5231: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B523Eu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B523E: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5245: ;
    PUSH32(esp, 0x78C);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    PUSH32(esp, 0x428D10);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);

loc_000B525E: ;
    PUSH32(esp, 0x000B5263u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5263: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */

loc_000B5269: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B5275u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5275: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B5280
 * Original: 0x000B5280 - 0x000B52CB (75 bytes, 31 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5280: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B52C9; /* je: equal / zero */

loc_000B5287: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B52B8; /* je: equal / zero */

loc_000B528D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B52B0; /* je: equal / zero */

loc_000B5292: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B52B3; /* je: equal / zero */

loc_000B5297: ;
    PUSH32(esp, 0x840);
    ecx = 0x423DF8;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B52ABu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B52AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000B52B0: ;
    MEM32(esi + 0x28) = edi;

loc_000B52B3: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000B52B8: ;
    PUSH32(esp, 0x000B52BDu); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000B52BD: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000B52C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B52C3u); } /* indirect call */
    }

loc_000B52C6: ;
    MEM32(esi + 0x38) = edi;

loc_000B52C9: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B52D0
 * Original: 0x000B52D0 - 0x000B539E (206 bytes, 59 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B52D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B52D0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5309; /* je: equal / zero */

loc_000B52E8: ;
    PUSH32(esp, 0x88A);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423AD8);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5306u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5306: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B5309: ;
    ecx = MEM32(esi);
    MEM32(edi) = ecx;
    edx = MEM32(esi + 4);
    MEM32(edi + 4) = edx;
    eax = MEM32(esi + 0x14);
    MEM32(edi + 8) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM32(edi + 0x14) = edx;
    eax = MEM32(esi + 0x20);
    MEM32(edi + 0x18) = eax;
    ecx = MEM32(esi + 0x24);
    MEM32(edi + 0x1C) = ecx;
    edx = MEM32(esi + 0x28);
    MEM32(edi + 0x20) = edx;
    eax = MEM32(esi + 0x60);
    MEM32(edi + 0x58) = eax;
    ecx = MEM32(esi + 0x64);
    MEM32(edi + 0x5C) = ecx;
    edx = MEM32(esi + 0x2C);
    MEM32(edi + 0x24) = edx;
    eax = MEM32(esi + 0x1C);
    MEM32(edi + 0x54) = eax;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5381; /* je: equal / zero */

loc_000B5356: ;
    PUSH32(esp, 0x25);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    edx = edi + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B5365u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_000B5365: ;
    eax = MEM32(esi + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x50) = eax;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B537Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B537A: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5381: ;
    ecx = MEM32(esp + 0x408);
    MEM32(edi + 0x28) = ecx;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B5397u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5397: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B53A0
 * Original: 0x000B53A0 - 0x000B54BC (284 bytes, 89 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B53A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B53A0: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x40C) = eax;
    MEM32(esp + 8) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000B53FC; /* jne: not equal / not zero */

loc_000B53C4: ;
    PUSH32(esp, 0x8BD);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B53E2u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B53E2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B53E5: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x404);
    PUSH32(esp, 0x000B53F5u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B53F5: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B53FC: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5429; /* jne: not equal / not zero */

loc_000B5401: ;
    PUSH32(esp, 0x8C0);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423CF4);
    ecx = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B541Fu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B541F: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B53E5; /* je: equal / zero */

loc_000B5429: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5440; /* je: equal / zero */

loc_000B542E: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5440; /* je: equal / zero */

loc_000B5435: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000B543Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B5439u); } /* indirect call */
    }

loc_000B543C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B54A3; /* je: equal / zero */

loc_000B5440: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebp);
    ebp = esi + 0x14;
    MEM32(esp + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B54A2; /* je: equal / zero */

loc_000B544F: ;
    PUSH32(esp, 0x000B5454u); RECOMP_ABI_CALL(0x000B55C0u, sub_000B55C0); /* call 0x000B55C0 */

loc_000B5454: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B54A2; /* je: equal / zero */

loc_000B5459: ;
    esi = MEM32(esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B549B; /* je: equal / zero */

loc_000B545F: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B5492; /* je: equal / zero */

loc_000B5462: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B547E; /* je: equal / zero */

loc_000B5465: ;
    PUSH32(esp, 0x8DC);
    ecx = 0x423DF8;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B5479u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B5479: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B54A2;

loc_000B547E: ;
    eax = MEM32(ebp);
    ebx = MEM32(eax + 0x28);
    PUSH32(esp, 0x000B5489u); RECOMP_ABI_CALL(0x000B4820u, sub_000B4820); /* call 0x000B4820 */

loc_000B5489: ;
    ebx = ebp;
    PUSH32(esp, 0x000B5490u); RECOMP_ABI_CALL(0x000B8A60u, sub_000B8A60); /* call 0x000B8A60 */

loc_000B5490: ;
    goto loc_000B54A2;

loc_000B5492: ;
    ebx = ebp;
    PUSH32(esp, 0x000B5499u); RECOMP_ABI_CALL(0x000BAA80u, sub_000BAA80); /* call 0x000BAA80 */

loc_000B5499: ;
    goto loc_000B54A2;

loc_000B549B: ;
    esi = ebp;
    PUSH32(esp, 0x000B54A2u); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B54A2: ;
    POP32(esp, ebp);

loc_000B54A3: ;
    ecx = MEM32(esp + 0x40C);
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B54B5u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B54B5: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B54C0
 * Original: 0x000B54C0 - 0x000B55B4 (244 bytes, 67 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B54C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B54C0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B550C; /* jne: not equal / not zero */

loc_000B54D6: ;
    PUSH32(esp, 0x8E9);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B54F4u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B54F4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B5505u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5505: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B550C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B553B; /* jne: not equal / not zero */

loc_000B5513: ;
    PUSH32(esp, 0x8EC);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423CF4);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5531u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5531: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B559F; /* je: equal / zero */

loc_000B553B: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B5543u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B5540u); } /* indirect call */
    }

loc_000B5543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5588; /* je: equal / zero */

loc_000B5547: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5560; /* je: equal / zero */

loc_000B554E: ;
    ecx = MEM32(edi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5560; /* je: equal / zero */

loc_000B5558: ;
    ecx = MEM32(edi + 0x90);
    goto loc_000B5563;

loc_000B5560: ;
    ecx = MEM32(edi + 0x48);

loc_000B5563: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B5568u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B5566u); } /* indirect call */
    }

loc_000B5568: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B5588; /* je: equal / zero */

loc_000B5570: ;
    eax = 1;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B5581u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5581: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5588: ;
    PUSH32(esp, 0x902);
    ecx = 0x423DF8;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B559Cu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B559C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B559F: ;
    ecx = MEM32(esp + 0x400);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000B55ADu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B55AD: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B55C0
 * Original: 0x000B55C0 - 0x000B56B4 (244 bytes, 67 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B55C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B55C0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B560C; /* jne: not equal / not zero */

loc_000B55D6: ;
    PUSH32(esp, 0x90B);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423C7C);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B55F4u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B55F4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B5605u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5605: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B560C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B563B; /* jne: not equal / not zero */

loc_000B5613: ;
    PUSH32(esp, 0x90E);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x423CF4);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5631u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5631: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B569F; /* je: equal / zero */

loc_000B563B: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B5643u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B5640u); } /* indirect call */
    }

loc_000B5643: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5688; /* je: equal / zero */

loc_000B5647: ;
    eax = MEM32(edi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5660; /* je: equal / zero */

loc_000B5651: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5660; /* je: equal / zero */

loc_000B5658: ;
    ecx = MEM32(edi + 0x90);
    goto loc_000B5663;

loc_000B5660: ;
    ecx = MEM32(edi + 0x48);

loc_000B5663: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B566Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B5669u); } /* indirect call */
    }

loc_000B566C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5688; /* je: equal / zero */

loc_000B5670: ;
    eax = 1;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B5681u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5681: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5688: ;
    PUSH32(esp, 0x921);
    ecx = 0x423DF8;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B569Cu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B569C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B569F: ;
    ecx = MEM32(esp + 0x400);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000B56ADu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B56AD: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B56C0
 * Original: 0x000B56C0 - 0x000B576C (172 bytes, 48 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B56C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B56C0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B574F; /* je: equal / zero */

loc_000B56DB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B5732; /* je: equal / zero */

loc_000B56E0: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B571C; /* je: equal / zero */

loc_000B56E5: ;
    PUSH32(esp, 0x92D);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5703u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5703: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B5715u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5715: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B571C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B572Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B572B: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5732: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5738u); RECOMP_ABI_CALL(0x000B5030u, sub_000B5030); /* call 0x000B5030 */

loc_000B5738: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B5748u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5748: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B574F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5755u); RECOMP_ABI_CALL(0x000A72C0u, sub_000A72C0); /* call 0x000A72C0 */

loc_000B5755: ;
    ecx = MEM32(esp + 0x408);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    PUSH32(esp, 0x000B5765u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5765: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B5770
 * Original: 0x000B5770 - 0x000B5862 (242 bytes, 72 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5770: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x408) = eax;
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000B57AD; /* jne: not equal / not zero */

loc_000B578C: ;
    PUSH32(esp, 0x934);
    PUSH32(esp, 0x423DF8);
    PUSH32(esp, 0x4208F4);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B57AAu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B57AA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B57AD: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B57E7; /* jne: not equal / not zero */

loc_000B57B4: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x421C10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B57C6u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B57C6: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0x4C4B400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B57E0u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B57E0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B57E7: ;
    eax = MEM32(edi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B5846; /* je: equal / zero */

loc_000B57ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B582C; /* je: equal / zero */

loc_000B57F2: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B584D; /* je: equal / zero */

loc_000B57F7: ;
    PUSH32(esp, 0x94D);
    ecx = 0x423DF8;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B580Bu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B580B: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0x4C4B400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B5825u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5825: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B582C: ;
    PUSH32(esp, 0x000B5831u); RECOMP_ABI_CALL(0x000B50C0u, sub_000B50C0); /* call 0x000B50C0 */

loc_000B5831: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B583Fu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B583F: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5846: ;
    ecx = esi;
    PUSH32(esp, 0x000B584Du); RECOMP_ABI_CALL(0x000B4FD0u, sub_000B4FD0); /* call 0x000B4FD0 */

loc_000B584D: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000B585Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B585B: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B5870
 * Original: 0x000B5870 - 0x000B58BE (78 bytes, 34 insns)
 * Folder: sound (between: 0x000B5770 and 0x000B58C0)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B5870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5870: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0x000B587Fu); RECOMP_ABI_CALL(0x000B5900u, sub_000B5900); /* call 0x000B5900 */

loc_000B587F: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax + 0x7C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B58B9; /* je: equal / zero */

loc_000B588A: ;
    /* nop */

loc_000B5890: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B58B2; /* je: equal / zero */

loc_000B5897: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B58B2; /* je: equal / zero */

loc_000B589E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000B58B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B58AFu); } /* indirect call */
    }

loc_000B58B2: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5890; /* jne: not equal / not zero */

loc_000B58B9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B58C0
 * Original: 0x000B58C0 - 0x000B58FE (62 bytes, 29 insns)
 * Folder: sound (match: xbox-demo 0x000D9DA0, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B58C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B58C0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x7C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B58F9; /* je: equal / zero */

loc_000B58CD: ;
    /* nop */

loc_000B58D0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B58F2; /* je: equal / zero */

loc_000B58D7: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B58F2; /* je: equal / zero */

loc_000B58DE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    eax = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B58F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B58EFu); } /* indirect call */
    }

loc_000B58F2: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B58D0; /* jne: not equal / not zero */

loc_000B58F9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B5900
 * Original: 0x000B5900 - 0x000B5992 (146 bytes, 58 insns)
 * Folder: sound (between: 0x000B58C0 and 0x000B5A10)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B5900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5900: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x000B590Eu); RECOMP_ABI_CALL(0x000AF070u, sub_000AF070); /* call 0x000AF070 */

loc_000B590E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B598C; /* je: equal / zero */

loc_000B5914: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B598C; /* jl: less (signed <) */

loc_000B5918: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B5982; /* jl: less (signed <) */

loc_000B5920: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ebp + 1;
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B594C; /* jne: not equal / not zero */

loc_000B592C: ;
    edi = eax * 4;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5941; /* jne: not equal / not zero */

loc_000B593C: ;
    PUSH32(esp, 0x000B5941u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B5941: ;
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x000B594Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B594A: ;
    goto loc_000B5959;

loc_000B594C: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5956u); RECOMP_ABI_CALL(0x000D7530u, sub_000D7530); /* call 0x000D7530 */

loc_000B5956: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B5959: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esi) = eax;
    eax = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_000B5982; /* jae: above or equal (unsigned >=) */

loc_000B5965: ;
    goto loc_000B5970;

    /* nop */
    edi = edi;

loc_000B5970: ;
    edx = MEM32(esi);
    MEM32(edx + eax * 4) = 0;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B5970; /* jb: below (unsigned <) */

loc_000B5982: ;
    edx = MEM32(esi);
    eax = MEM32(esp + 0x14);
    MEM32(edx + ebp * 4) = eax;
    POP32(esp, ebx);

loc_000B598C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B59A0
 * Original: 0x000B59A0 - 0x000B5A10 (112 bytes, 39 insns)
 * Folder: sound (between: 0x000B58C0 and 0x000B5A10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B59A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B59A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = 0;
    PUSH32(esp, 0x000B59AFu); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000B59AF: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000B59C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B59BDu); } /* indirect call */
    }

loc_000B59C0: ;
    ecx = MEM32(0x758A74);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B59D8; /* je: equal / zero */

loc_000B59CC: ;
    PUSH32(esp, 0x000B59D1u); RECOMP_ABI_CALL(0x000B39B0u, sub_000B39B0); /* call 0x000B39B0 */

loc_000B59D1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B59D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B59D5u); } /* indirect call */
    }

loc_000B59D8: ;
    ecx = MEM32(esp);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B59E7u); RECOMP_ABI_CALL(0x000B9890u, sub_000B9890); /* call 0x000B9890 */

loc_000B59E7: ;
    PUSH32(esp, 0x000B59ECu); RECOMP_ABI_CALL(0x000AEDD0u, sub_000AEDD0); /* call 0x000AEDD0 */

loc_000B59EC: ;
    PUSH32(esp, 0x000B59F1u); RECOMP_ABI_CALL(0x000AEE70u, sub_000AEE70); /* call 0x000AEE70 */

loc_000B59F1: ;
    ecx = MEM32(0x758A74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000B5A0A; /* je: equal / zero */

loc_000B59FC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000B5A01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B59FEu); } /* indirect call */
    }

loc_000B5A01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5A0A; /* jne: not equal / not zero */

loc_000B5A06: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5A0A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B5A10
 * Original: 0x000B5A10 - 0x000B5A8F (127 bytes, 35 insns)
 * Folder: sound (source: sndclist.hpp)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5A10: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x404) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B5A4A; /* jne: not equal / not zero */

loc_000B5A29: ;
    PUSH32(esp, 0xF1);
    PUSH32(esp, 0x41FE08);
    PUSH32(esp, 0x41FDDC);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5A47u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5A47: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B5A4A: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5A55u); RECOMP_ABI_CALL(0x0009D1D0u, sub_0009D1D0); /* call 0x0009D1D0 */

loc_000B5A55: ;
    ecx = MEM32(esp + 0x410);
    edx = MEM32(esp + 0x40C);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5A74; /* je: equal / zero */

loc_000B5A70: ;
    MEM32(ecx) = eax;
    goto loc_000B5A76;

loc_000B5A74: ;
    MEM32(edi) = eax;

loc_000B5A76: ;
    ecx = MEM32(esp + 0x404);
    MEM32(edi + 4) = eax;
    POP32(esp, edi);
    PUSH32(esp, 0x000B5A86u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5A86: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B5A90
 * Original: 0x000B5A90 - 0x000B5AD2 (66 bytes, 14 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5A90: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x72);
    PUSH32(esp, 0x423F30);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5ABDu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5ABD: ;
    ecx = MEM32(esp + 0x414);
    PUSH32(esp, 0x000B5AC9u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5AC9: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B5AE0
 * Original: 0x000B5AE0 - 0x000B5B22 (66 bytes, 14 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5AE0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x76);
    PUSH32(esp, 0x423F30);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5B0Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5B0D: ;
    ecx = MEM32(esp + 0x414);
    PUSH32(esp, 0x000B5B19u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5B19: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B5B30
 * Original: 0x000B5B30 - 0x000B5B75 (69 bytes, 15 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5B30: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x423F30);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5B5Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5B5D: ;
    ecx = MEM32(esp + 0x414);
    eax = 0xFFFF0000u;
    PUSH32(esp, 0x000B5B6Eu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5B6E: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B5B80
 * Original: 0x000B5B80 - 0x000B5BC2 (66 bytes, 14 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5B80: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x7A);
    PUSH32(esp, 0x423F30);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5BADu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5BAD: ;
    ecx = MEM32(esp + 0x414);
    PUSH32(esp, 0x000B5BB9u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5BB9: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B5BD0
 * Original: 0x000B5BD0 - 0x000B5C15 (69 bytes, 15 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5BD0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x423F30);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5BFDu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5BFD: ;
    ecx = MEM32(esp + 0x414);
    eax = 0xFFFF0000u;
    PUSH32(esp, 0x000B5C0Eu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5C0E: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B5C20
 * Original: 0x000B5C20 - 0x000B5C68 (72 bytes, 15 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5C20: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x89);
    PUSH32(esp, 0x423F30);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5C50u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5C50: ;
    ecx = MEM32(esp + 0x414);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000B5C5Fu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5C5F: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B5C70
 * Original: 0x000B5C70 - 0x000B5CB8 (72 bytes, 15 insns)
 * Folder: sound (source: CTool.hpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5C70: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x8B);
    PUSH32(esp, 0x423F30);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5CA0u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5CA0: ;
    ecx = MEM32(esp + 0x414);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000B5CAFu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5CAF: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B5CC0
 * Original: 0x000B5CC0 - 0x000B5CC8 (8 bytes, 2 insns)
 * Folder: sound (between: 0x000B5C70 and 0x000B5EE0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5CC0(void)
{

loc_000B5CC0: ;
    MEM32(ecx + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000B5CD0
 * Original: 0x000B5CD0 - 0x000B5DAB (219 bytes, 76 insns)
 * Folder: sound (between: 0x000B5C70 and 0x000B5EE0)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B5CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x808) = eax;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp + 8) = 0;
    ecx = 0xFF;
    edi = esp + 0xA;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5D64; /* je: equal / zero */

loc_000B5D06: ;
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B5D1D; /* je: equal / zero */

loc_000B5D0C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000B5D41; /* jne: not equal / not zero */

loc_000B5D11: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5D41; /* je: equal / zero */

loc_000B5D18: ;
    ecx = eax + 0x28;
    goto loc_000B5D2A;

loc_000B5D1D: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5D41; /* je: equal / zero */

loc_000B5D24: ;
    eax = MEM32(esi + 4);
    ecx = eax + 0x38;

loc_000B5D2A: ;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, 0x423EFC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5D3Eu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5D3E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B5D41: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5D77; /* jne: not equal / not zero */

loc_000B5D49: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, 0x423ED0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5D5Fu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5D5F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B5D77;

loc_000B5D64: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x423E9C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5D74u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5D74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B5D77: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x414;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5D95u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5D95: ;
    ecx = MEM32(esp + 0x820);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B5DA4u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B5DA4: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B5DB0
 * Original: 0x000B5DB0 - 0x000B5DB5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x000B5C70 and 0x000B5EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B5DB0: ;
    g_seh_ebp = ebp; sub_000D7550(); return; /* tail jmp 0x000D7550 */

}

/**
 * sub_000B5DC0
 * Original: 0x000B5DC0 - 0x000B5DDB (27 bytes, 9 insns)
 * Folder: sound (between: 0x000B5C70 and 0x000B5EE0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5DC0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x423E58;
    if (TEST_Z(_fa, _fb)) goto loc_000B5DD5; /* je: equal / zero */

loc_000B5DD0: ;
    PUSH32(esp, 0x000B5DD5u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B5DD5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B5DE0
 * Original: 0x000B5DE0 - 0x000B5DE7 (7 bytes, 2 insns)
 * Folder: sound (between: 0x000B5C70 and 0x000B5EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5DE0(void)
{

loc_000B5DE0: ;
    MEM32(ecx) = 0x423E58;
    esp += 4; return; /* ret */

}

/**
 * sub_000B5DF0
 * Original: 0x000B5DF0 - 0x000B5E24 (52 bytes, 23 insns)
 * Folder: sound (between: 0x000B5C70 and 0x000B5EE0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5DF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B5DFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B5DFBu); } /* indirect call */
    }

loc_000B5DFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5E07; /* jne: not equal / not zero */

loc_000B5E02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B5E07: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B5E30
 * Original: 0x000B5E30 - 0x000B5E61 (49 bytes, 16 insns)
 * Folder: sound (between: 0x000B5C70 and 0x000B5EE0)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5E30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5E54; /* je: equal / zero */

loc_000B5E38: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5E54; /* je: equal / zero */

loc_000B5E3D: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x10 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5E54; /* jne: not equal / not zero */

loc_000B5E44: ;
    SET_LO16(eax, MEM16(eax + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5E59; /* je: equal / zero */

loc_000B5E4E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5E59; /* je: equal / zero */

loc_000B5E54: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B5E59: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B5E70
 * Original: 0x000B5E70 - 0x000B5E7C (12 bytes, 5 insns)
 * Folder: sound (between: 0x000B5C70 and 0x000B5EE0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5E70: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000B5E80
 * Original: 0x000B5E80 - 0x000B5ED6 (86 bytes, 43 insns)
 * Folder: sound (between: 0x000B5C70 and 0x000B5EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5E80: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5E88; /* jge: greater or equal (signed >=) */

loc_000B5E86: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000B5E88: ;
    edx = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5E93; /* jge: greater or equal (signed >=) */

loc_000B5E91: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000B5E93: ;
    ecx = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5E9E; /* jge: greater or equal (signed >=) */

loc_000B5E9C: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000B5E9E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5EA4; /* jge: greater or equal (signed >=) */

loc_000B5EA2: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000B5EA4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5EAA; /* jge: greater or equal (signed >=) */

loc_000B5EA8: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000B5EAA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5EB6; /* jge: greater or equal (signed >=) */

loc_000B5EAE: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    goto loc_000B5EBA;

loc_000B5EB6: ;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B5EBA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5EC0; /* jge: greater or equal (signed >=) */

loc_000B5EBE: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000B5EC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5EC6; /* jge: greater or equal (signed >=) */

loc_000B5EC4: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000B5EC6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5ED1; /* jge: greater or equal (signed >=) */

loc_000B5ECA: ;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 4; return; /* ret */

loc_000B5ED1: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B5EE0
 * Original: 0x000B5EE0 - 0x000B5F11 (49 bytes, 22 insns)
 * Folder: sound (match: xbox-demo 0x000DA370, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5EE0: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5EEEu); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B5EEE: ;
    edx = MEM32(esi + 4);
    ebx = eax;
    eax = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5EFDu); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B5EFD: ;
    ecx = MEM32(esi);
    edx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B5F0Au); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B5F0A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B5F20
 * Original: 0x000B5F20 - 0x000B604D (301 bytes, 94 insns)
 * Folder: sound (source: sndseq.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5F20: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5F5A; /* jne: not equal / not zero */

loc_000B5F39: ;
    PUSH32(esp, 0x8C);
    PUSH32(esp, 0x4240B0);
    PUSH32(esp, 0x424098);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5F57u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B5F57: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B5F5A: ;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    ecx = eax;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5FFD; /* je: equal / zero */

loc_000B5F70: ;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5FFD; /* jne: not equal / not zero */

loc_000B5F7B: ;
    edx = MEM32(eax + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B5F9A; /* jbe: below or equal (unsigned <=) */

loc_000B5F83: ;
    PUSH32(esp, 0x94);
    ecx = 0x4240B0;
    edx = 0x424040;
    PUSH32(esp, 0x000B5F97u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B5F97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B5F9A: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(esi + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6002; /* jne: not equal / not zero */

loc_000B5FA7: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5FB1; /* je: equal / zero */

loc_000B5FAE: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B5FB1: ;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(esi + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B5FD3; /* jbe: below or equal (unsigned <=) */

loc_000B5FBC: ;
    PUSH32(esp, 0x9D);
    ecx = 0x4240B0;
    edx = 0x423FE8;
    PUSH32(esp, 0x000B5FD0u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B5FD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B5FD3: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(esi + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5FEF; /* jne: not equal / not zero */

loc_000B5FE0: ;
    edx = MEM32(esi + 0xC);
    MEM32(esi + 0x14) = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x20) (32-bit) */
    goto loc_000B6000;

loc_000B5FEF: ;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(esi + 0x74) = edx;
    goto loc_000B6002;

loc_000B5FFD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x20) (32-bit) */

loc_000B6000: ;
    if (CMP_AE(_fa, _fb)) goto loc_000B602C; /* jae: above or equal (unsigned >=) */

loc_000B6002: ;
    edx = MEM32(eax + 0x2C);
    ecx = MEM32(esi + 0xC);
    eax = edx + ecx * 4;
    ecx = MEM32(esi + 4);
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B601Fu); RECOMP_ABI_CALL(0x000ADF90u, sub_000ADF90); /* call 0x000ADF90 */

loc_000B601F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B603A; /* jne: not equal / not zero */

loc_000B602A: ;
    goto loc_000B6033;

loc_000B602C: ;
    MEM32(esi + 8) = 0xFFFFFFFFu;

loc_000B6033: ;
    MEM32(esi + 0x18) = 0;

loc_000B603A: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B6046u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6046: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6050
 * Original: 0x000B6050 - 0x000B609F (79 bytes, 18 insns)
 * Folder: sound (source: sndseq.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6050: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(0x46DD9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B608C; /* je: equal / zero */

loc_000B606B: ;
    PUSH32(esp, 0x102);
    PUSH32(esp, 0x4240B0);
    PUSH32(esp, 0x423FA4);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6089u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6089: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B608C: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B6098u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6098: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B60A0
 * Original: 0x000B60A0 - 0x000B6125 (133 bytes, 35 insns)
 * Folder: sound (source: sndseq.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B60A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B60A0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x404) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B60DF; /* jne: not equal / not zero */

loc_000B60BE: ;
    PUSH32(esp, 0x118);
    PUSH32(esp, 0x4240B0);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B60DCu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B60DC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B60DF: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6106; /* je: equal / zero */

loc_000B60E5: ;
    PUSH32(esp, 0x119);
    PUSH32(esp, 0x4240B0);
    PUSH32(esp, 0x423F80);
    ecx = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B6103u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6103: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6106: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x404);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000B611Eu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B611E: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6130
 * Original: 0x000B6130 - 0x000B61DE (174 bytes, 53 insns)
 * Folder: sound (source: sndseq.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6130: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x414);
    PUSH32(esp, esi);
    MEM32(esp + 0x40C) = eax;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B6179; /* jne: not equal / not zero */

loc_000B6158: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, 0x4240B0);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6176u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6176: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6179: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B61A0; /* je: equal / zero */

loc_000B617F: ;
    PUSH32(esp, 0x141);
    PUSH32(esp, 0x4240B0);
    PUSH32(esp, 0x423F80);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B619Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B619D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B61A0: ;
    eax = MEM32(ebx + 0x30);
    edi = MEM32(ebx + 0x2C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B61C7; /* jle: less or equal (signed <=) */

loc_000B61AC: ;
    /* nop */

loc_000B61B0: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B61B9u); RECOMP_ABI_CALL(0x000ADD80u, sub_000ADD80); /* call 0x000ADD80 */

loc_000B61B9: ;
    eax = MEM32(ebx + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B61B0; /* jl: less (signed <) */

loc_000B61C7: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B61D7u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B61D7: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B617F
 * Original: 0x000B617F - 0x000B61DE (95 bytes, 32 insns)
 * Folder: sound (source: sndseq.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B617F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B617F: ;
    PUSH32(esp, 0x141);
    PUSH32(esp, 0x4240B0);
    PUSH32(esp, 0x423F80);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B619Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B619D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x30);
    edi = MEM32(ebx + 0x2C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B61C7; /* jle: less or equal (signed <=) */

loc_000B61AC: ;
    /* nop */

loc_000B61B0: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B61B9u); RECOMP_ABI_CALL(0x000ADD80u, sub_000ADD80); /* call 0x000ADD80 */

loc_000B61B9: ;
    eax = MEM32(ebx + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B61B0; /* jl: less (signed <) */

loc_000B61C7: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B61D7u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B61D7: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B61E0
 * Original: 0x000B61E0 - 0x000B6347 (359 bytes, 117 insns)
 * Folder: sound (between: 0x000B617F and 0x000B6540)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B61E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B61E0: ;
    eax = MEM32(0x46B1A4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B61F5; /* jne: not equal / not zero */

loc_000B61F0: ;
    PUSH32(esp, 0x000B61F5u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B61F5: ;
    edx = 0x84;
    ecx = eax;
    PUSH32(esp, 0x000B6201u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B6201: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6210; /* jne: not equal / not zero */

loc_000B6207: ;
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6210: ;
    MEM32(ebx + 0x7C) = ebp;
    MEM32(ebx + 0x80) = ebp;
    MEM32(ebx + 0x78) = ebp;
    eax = MEM32(0x46DD98);
    MEM32(ebx + 0x7C) = eax;
    MEM32(ebx + 0x80) = 0x46DD94;
    _fa = (uint32_t)(MEM32(0x46DD94)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x46DD94), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B623E; /* jne: not equal / not zero */

loc_000B6236: ;
    MEM32(0x46DD94) = ebx;
    goto loc_000B6247;

loc_000B623E: ;
    ecx = MEM32(0x46DD98);
    MEM32(ecx + 0x78) = ebx;

loc_000B6247: ;
    eax = MEM32(esp + 0x64);
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x6C);
    MEM32(0x46DD98) = ebx;
    PUSH32(esp, edi);
    MEM32(0x46DD9C) = MEM32(0x46DD9C) + 1;
    _fa = (uint32_t)(MEM32(0x46DD9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 0xC) = ebp;
    MEM32(ebx + 0x10) = ebp;
    MEM32(ebx + 0x14) = ebp;
    MEM32(ebx + 8) = 0xFFFFFFFFu;
    MEM32(ebx + 0x74) = ebp;
    edx = MEM32(eax + 0x2C);
    ecx = 0x16;
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
    ecx = MEM32(ebx);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000B62A3; /* jge: greater or equal (signed >=) */

loc_000B629B: ;
    MEM32(esp + 0x14) = 0xFFA00000u;

loc_000B62A3: ;
    eax = MEM32(esp + 0x74);
    PUSH32(esp, ebp);
    ecx = 0x16;
    esi = esp + 0x14;
    edi = ebx + 0x1C;
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
    edx = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B62C6u); RECOMP_ABI_CALL(0x000ADF90u, sub_000ADF90); /* call 0x000ADF90 */

loc_000B62C6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebx + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B6336; /* jne: not equal / not zero */

loc_000B62D1: ;
    eax = MEM32(ebx + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B62DE; /* je: equal / zero */

loc_000B62D8: ;
    ecx = MEM32(ebx + 0x7C);
    MEM32(eax + 0x7C) = ecx;

loc_000B62DE: ;
    eax = MEM32(ebx + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B62EB; /* je: equal / zero */

loc_000B62E5: ;
    edx = MEM32(ebx + 0x78);
    MEM32(eax + 0x78) = edx;

loc_000B62EB: ;
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6318; /* je: equal / zero */

loc_000B62F5: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6307; /* jne: not equal / not zero */

loc_000B6302: ;
    ecx = MEM32(ebx + 0x78);
    MEM32(eax) = ecx;

loc_000B6307: ;
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6318; /* jne: not equal / not zero */

loc_000B6312: ;
    edx = MEM32(ebx + 0x7C);
    MEM32(eax + 4) = edx;

loc_000B6318: ;
    esi = ebx;
    MEM32(ebx + 0x78) = ebp;
    MEM32(ebx + 0x7C) = ebp;
    MEM32(ebx + 0x80) = ebp;
    PUSH32(esp, 0x000B632Bu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B632B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6336: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x18) = 1;
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6350
 * Original: 0x000B6350 - 0x000B64A5 (341 bytes, 118 insns)
 * Folder: sound (between: 0x000B617F and 0x000B6540)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6350: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x60);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B63C4; /* je: equal / zero */

loc_000B6363: ;
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, edi);
    ecx = 0x16;
    esi = edx;
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
    ecx = MEM32(ebx);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000B6391; /* jge: greater or equal (signed >=) */

loc_000B6389: ;
    MEM32(esp + 0x14) = 0xFFA00000u;

loc_000B6391: ;
    _fa = (uint32_t)(MEM32(ebx + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x68), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B63B0; /* je: equal / zero */

loc_000B6396: ;
    _fa = (uint32_t)(MEM32(edx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x4C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B63B0; /* jne: not equal / not zero */

loc_000B639B: ;
    edx = MEM32(ebx + 0x68);
    eax = MEM32(ebx + 0x6C);
    ecx = MEM32(ebx + 0x70);
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = ecx;

loc_000B63B0: ;
    ecx = 0x16;
    esi = esp + 0x10;
    edi = ebx + 0x1C;
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
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), ebp (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B6411; /* jne: not equal / not zero */

loc_000B63C4: ;
    eax = MEM32(ebx + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B63D1; /* je: equal / zero */

loc_000B63CB: ;
    edx = MEM32(ebx + 0x7C);
    MEM32(eax + 0x7C) = edx;

loc_000B63D1: ;
    eax = MEM32(ebx + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B63DE; /* je: equal / zero */

loc_000B63D8: ;
    ecx = MEM32(ebx + 0x78);
    MEM32(eax + 0x78) = ecx;

loc_000B63DE: ;
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B647D; /* je: equal / zero */

loc_000B63EC: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B63FE; /* jne: not equal / not zero */

loc_000B63F9: ;
    edx = MEM32(ebx + 0x78);
    MEM32(eax) = edx;

loc_000B63FE: ;
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B647D; /* jne: not equal / not zero */

loc_000B6409: ;
    ecx = MEM32(ebx + 0x7C);
    MEM32(eax + 4) = ecx;
    goto loc_000B647D;

loc_000B6411: ;
    edx = MEM32(esp + 0x70);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6423u); RECOMP_ABI_CALL(0x000AE130u, sub_000AE130); /* call 0x000AE130 */

loc_000B6423: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6499; /* jne: not equal / not zero */

loc_000B642A: ;
    esi = ebx;
    PUSH32(esp, 0x000B6431u); RECOMP_ABI_CALL(0x000B5F20u, sub_000B5F20); /* call 0x000B5F20 */

loc_000B6431: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6499; /* jne: not equal / not zero */

loc_000B6436: ;
    eax = MEM32(ebx + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6443; /* je: equal / zero */

loc_000B643D: ;
    ecx = MEM32(ebx + 0x7C);
    MEM32(eax + 0x7C) = ecx;

loc_000B6443: ;
    eax = MEM32(ebx + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6450; /* je: equal / zero */

loc_000B644A: ;
    edx = MEM32(ebx + 0x78);
    MEM32(eax + 0x78) = edx;

loc_000B6450: ;
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B647D; /* je: equal / zero */

loc_000B645A: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B646C; /* jne: not equal / not zero */

loc_000B6467: ;
    ecx = MEM32(ebx + 0x78);
    MEM32(eax) = ecx;

loc_000B646C: ;
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B647D; /* jne: not equal / not zero */

loc_000B6477: ;
    edx = MEM32(ebx + 0x7C);
    MEM32(eax + 4) = edx;

loc_000B647D: ;
    esi = ebx;
    MEM32(ebx + 0x78) = ebp;
    MEM32(ebx + 0x7C) = ebp;
    MEM32(ebx + 0x80) = ebp;
    PUSH32(esp, 0x000B6490u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B6490: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6499: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B64B0
 * Original: 0x000B64B0 - 0x000B653E (142 bytes, 45 insns)
 * Folder: sound (between: 0x000B617F and 0x000B6540)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B64B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B64B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);

loc_000B64B5: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B64CF; /* je: equal / zero */

loc_000B64BC: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x000B64C4u); RECOMP_ABI_CALL(0x000AE1E0u, sub_000AE1E0); /* call 0x000AE1E0 */

loc_000B64C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6537; /* jne: not equal / not zero */

loc_000B64C8: ;
    PUSH32(esp, 0x000B64CDu); RECOMP_ABI_CALL(0x000B5F20u, sub_000B5F20); /* call 0x000B5F20 */

loc_000B64CD: ;
    goto loc_000B64B5;

loc_000B64CF: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B64DC; /* je: equal / zero */

loc_000B64D6: ;
    ecx = MEM32(esi + 0x7C);
    MEM32(eax + 0x7C) = ecx;

loc_000B64DC: ;
    eax = MEM32(esi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B64E9; /* je: equal / zero */

loc_000B64E3: ;
    edx = MEM32(esi + 0x78);
    MEM32(eax + 0x78) = edx;

loc_000B64E9: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6516; /* je: equal / zero */

loc_000B64F3: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6505; /* jne: not equal / not zero */

loc_000B6500: ;
    ecx = MEM32(esi + 0x78);
    MEM32(eax) = ecx;

loc_000B6505: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6516; /* jne: not equal / not zero */

loc_000B6510: ;
    edx = MEM32(esi + 0x7C);
    MEM32(eax + 4) = edx;

loc_000B6516: ;
    MEM32(esi + 0x78) = 0;
    MEM32(esi + 0x7C) = 0;
    MEM32(esi + 0x80) = 0;
    PUSH32(esp, 0x000B6533u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B6533: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B6537: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6540
 * Original: 0x000B6540 - 0x000B65FD (189 bytes, 55 insns)
 * Folder: sound (source: sndseq.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6540: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40C);
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6585; /* jne: not equal / not zero */

loc_000B6564: ;
    PUSH32(esp, 0x203);
    PUSH32(esp, 0x4240B0);
    PUSH32(esp, 0x424098);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6582u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6582: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6585: ;
    ecx = MEM32(esi + 8);
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, 0x000B6590u); RECOMP_ABI_CALL(0x000AE280u, sub_000AE280); /* call 0x000AE280 */

loc_000B6590: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B659D; /* je: equal / zero */

loc_000B6597: ;
    ecx = MEM32(esi + 0x7C);
    MEM32(eax + 0x7C) = ecx;

loc_000B659D: ;
    eax = MEM32(esi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B65AA; /* je: equal / zero */

loc_000B65A4: ;
    edx = MEM32(esi + 0x78);
    MEM32(eax + 0x78) = edx;

loc_000B65AA: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B65D7; /* je: equal / zero */

loc_000B65B4: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B65C6; /* jne: not equal / not zero */

loc_000B65C1: ;
    ecx = MEM32(esi + 0x78);
    MEM32(eax) = ecx;

loc_000B65C6: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B65D7; /* jne: not equal / not zero */

loc_000B65D1: ;
    edx = MEM32(esi + 0x7C);
    MEM32(eax + 4) = edx;

loc_000B65D7: ;
    MEM32(esi + 0x78) = edi;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x80) = edi;
    PUSH32(esp, 0x000B65E8u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B65E8: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000B65F6u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B65F6: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6600
 * Original: 0x000B6600 - 0x000B6662 (98 bytes, 25 insns)
 * Folder: sound (source: sndseq.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6600: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40C);
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6642; /* jne: not equal / not zero */

loc_000B6621: ;
    PUSH32(esp, 0x221);
    PUSH32(esp, 0x4240B0);
    PUSH32(esp, 0x424098);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B663Fu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B663F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6642: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B664Bu); RECOMP_ABI_CALL(0x000AE310u, sub_000AE310); /* call 0x000AE310 */

loc_000B664B: ;
    ecx = MEM32(esp + 0x408);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    PUSH32(esp, 0x000B665Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B665B: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6670
 * Original: 0x000B6670 - 0x000B66D2 (98 bytes, 25 insns)
 * Folder: sound (source: sndseq.c)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6670: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40C);
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B66B2; /* jne: not equal / not zero */

loc_000B6691: ;
    PUSH32(esp, 0x238);
    PUSH32(esp, 0x4240B0);
    PUSH32(esp, 0x424098);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B66AFu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B66AF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B66B2: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B66BBu); RECOMP_ABI_CALL(0x000AE3A0u, sub_000AE3A0); /* call 0x000AE3A0 */

loc_000B66BB: ;
    ecx = MEM32(esp + 0x408);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    PUSH32(esp, 0x000B66CBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B66CB: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B66E0
 * Original: 0x000B66E0 - 0x000B66E6 (6 bytes, 2 insns)
 * Folder: sound (between: 0x000B6670 and 0x000B68B0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B66E0(void)
{

loc_000B66E0: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000B66F0
 * Original: 0x000B66F0 - 0x000B67A5 (181 bytes, 69 insns)
 * Folder: sound (between: 0x000B6670 and 0x000B68B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B66F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B66F0: ;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(ebx + 0x28);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    MEM32(esi + 0x30) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000B6763; /* jle: less or equal (signed <=) */

loc_000B6709: ;
    edx = MEM32(0x758658);
    /* nop */

loc_000B6710: ;
    ecx = MEM32(0x758694);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B6754; /* je: equal / zero */

loc_000B671C: ;
    ecx = MEM32(0x4313D4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B673B; /* je: equal / zero */

loc_000B6727: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6754; /* jne: not equal / not zero */

loc_000B672A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6730u); RECOMP_ABI_CALL(0x000A5D90u, sub_000A5D90); /* call 0x000A5D90 */

loc_000B6730: ;
    edx = MEM32(0x758658);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B6756;

loc_000B673B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6754; /* je: equal / zero */

loc_000B673F: ;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6754; /* je: equal / zero */

loc_000B6746: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6754; /* je: equal / zero */

loc_000B674D: ;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B6756;

loc_000B6754: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B6756: ;
    MEM32(edi) = eax;
    eax = MEM32(esi + 0x30);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B6710; /* jl: less (signed <) */

loc_000B6763: ;
    ecx = MEM32(ebx);
    MEM32(esi) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(ebx + 0x14);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ebx + 0x18);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(ebx + 0x1C);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(ebx + 0x20);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(ebx + 0x24);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(ebx + 0x28);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(ebx + 0x2C);
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(ebx + 0x30);
    POP32(esp, edi);
    MEM32(esi + 0x28) = ecx;
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B67B0
 * Original: 0x000B67B0 - 0x000B68AA (250 bytes, 87 insns)
 * Folder: sound (between: 0x000B6670 and 0x000B68B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B67B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B67B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 4) = eax;
    eax = 0xFFFFFFFEu;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = eax;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_000B67E8; /* jl: less (signed <) */

loc_000B67D6: ;
    edx = MEM32(ebx + 0x24);
    ecx = eax + eax * 2;
    esi = MEM32(edx + ecx * 4 + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B67E8; /* jne: not equal / not zero */

loc_000B67E4: ;
    MEM32(esp + 8) = eax;

loc_000B67E8: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B6803; /* jl: less (signed <) */

loc_000B67EF: ;
    edx = MEM32(ebx + 0x24);
    ecx = eax + eax * 2;
    esi = MEM32(edx + ecx * 4 + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6817; /* jne: not equal / not zero */

loc_000B67FD: ;
    MEM32(esp + 0x14) = eax;
    goto loc_000B6817;

loc_000B6803: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6817; /* jne: not equal / not zero */

loc_000B6808: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6817; /* jne: not equal / not zero */

loc_000B680F: ;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;

loc_000B6817: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B681Eu); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_000B681E: ;
    ecx = MEM32(ebx + 0x14);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4293CC); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B684A; /* jge: greater or equal (signed >=) */

loc_000B6843: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B688A; /* jne: not equal / not zero */

loc_000B684A: ;
    esi = MEM32(ebx + 0x28);
    ebp = MEM32(ebx + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000B6877; /* jle: less or equal (signed <=) */

loc_000B685A: ;
    /* nop */

loc_000B6860: ;
    edi = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B686D; /* jg: greater (signed >) */

loc_000B6867: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6886; /* jne: not equal / not zero */

loc_000B686D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B6860; /* jl: less (signed <) */

loc_000B6877: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B688A; /* je: equal / zero */

loc_000B687F: ;
    eax = MEM32(ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B688F;

loc_000B6886: ;
    eax = MEM32(edx);
    goto loc_000B688F;

loc_000B688A: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B688F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    POP32(esp, edi);
    MEM32(ebx + 0x1C) = ecx;
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000B689C; /* je: equal / zero */

loc_000B6899: ;
    MEM32(ebx + 0x20) = ecx;

loc_000B689C: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00367A66(); return; /* tail jmp 0x00367A66 */

}

/**
 * sub_000B68B0
 * Original: 0x000B68B0 - 0x000B699D (237 bytes, 77 insns)
 * Folder: sound (source: sndrndom.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B68B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B68B0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x414);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x40C) = eax;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B68F4; /* jne: not equal / not zero */

loc_000B68D3: ;
    PUSH32(esp, 0xA6);
    PUSH32(esp, 0x424118);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B68F1u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B68F1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B68F4: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B691B; /* je: equal / zero */

loc_000B68FA: ;
    PUSH32(esp, 0xA7);
    PUSH32(esp, 0x424118);
    PUSH32(esp, 0x4240F4);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B6918u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6918: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B691B: ;
    eax = MEM32(esi + 0x28);
    ebx = MEM32(esi + 0x24);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B6981; /* jle: less or equal (signed <=) */

loc_000B6927: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B692Fu); RECOMP_ABI_CALL(0x000ADBD0u, sub_000ADBD0); /* call 0x000ADBD0 */

loc_000B692F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B693D; /* je: equal / zero */

loc_000B6935: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B6965; /* je: equal / zero */

loc_000B6938: ;
    ebp = 1;

loc_000B693D: ;
    eax = MEM32(esi + 0x28);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B6927; /* jl: less (signed <) */

loc_000B6948: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6981; /* je: equal / zero */

loc_000B694C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B695Eu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B695E: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6965: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B697Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B697A: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6981: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    PUSH32(esp, 0x000B6996u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6996: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B69A0
 * Original: 0x000B69A0 - 0x000B6A4E (174 bytes, 53 insns)
 * Folder: sound (source: sndrndom.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B69A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B69A0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x414);
    PUSH32(esp, esi);
    MEM32(esp + 0x40C) = eax;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B69E9; /* jne: not equal / not zero */

loc_000B69C8: ;
    PUSH32(esp, 0xE4);
    PUSH32(esp, 0x424118);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B69E6u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B69E6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B69E9: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6A10; /* je: equal / zero */

loc_000B69EF: ;
    PUSH32(esp, 0xE5);
    PUSH32(esp, 0x424118);
    PUSH32(esp, 0x4240F4);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B6A0Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6A0D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6A10: ;
    eax = MEM32(ebx + 0x28);
    edi = MEM32(ebx + 0x24);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B6A37; /* jle: less or equal (signed <=) */

loc_000B6A1C: ;
    /* nop */

loc_000B6A20: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B6A29u); RECOMP_ABI_CALL(0x000ADD80u, sub_000ADD80); /* call 0x000ADD80 */

loc_000B6A29: ;
    eax = MEM32(ebx + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B6A20; /* jl: less (signed <) */

loc_000B6A37: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B6A47u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6A47: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6A50
 * Original: 0x000B6A50 - 0x000B6B18 (200 bytes, 71 insns)
 * Folder: sound (between: 0x000B69A0 and 0x000B6CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6A50: ;
    eax = MEM32(0x46B1A4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6A61; /* jne: not equal / not zero */

loc_000B6A5C: ;
    PUSH32(esp, 0x000B6A61u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B6A61: ;
    PUSH32(esp, ebx);
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x000B6A6Eu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B6A6E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6A7C; /* jne: not equal / not zero */

loc_000B6A74: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6A7C: ;
    eax = MEM32(esp + 0x64);
    PUSH32(esp, eax);
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = 0;
    PUSH32(esp, 0x000B6A90u); RECOMP_ABI_CALL(0x000B67B0u, sub_000B67B0); /* call 0x000B67B0 */

loc_000B6A90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6B04; /* je: equal / zero */

loc_000B6A97: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x6C);
    PUSH32(esp, edi);
    ecx = 0x16;
    edi = esp + 0xC;
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
    edx = MEM32(ebx + 4);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFA00000u (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000B6AC6; /* jge: greater or equal (signed >=) */

loc_000B6ABE: ;
    MEM32(esp + 0x10) = 0xFFA00000u;

loc_000B6AC6: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x70);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6AE0u); RECOMP_ABI_CALL(0x000ADF90u, sub_000ADF90); /* call 0x000ADF90 */

loc_000B6AE0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B6AF3; /* je: equal / zero */

loc_000B6AEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6AF3: ;
    esi = ebx;
    PUSH32(esp, 0x000B6AFAu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B6AFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6B04: ;
    MEM32(ebx) = 0xFFFFFFFFu;
    MEM32(ebx + 8) = 1;
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6B20
 * Original: 0x000B6B20 - 0x000B6B90 (112 bytes, 41 insns)
 * Folder: sound (between: 0x000B69A0 and 0x000B6CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6B20: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x60);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000B6B81; /* jne: not equal / not zero */

loc_000B6B30: ;
    esi = MEM32(esp + 0x68);
    PUSH32(esp, edi);
    ecx = 0x16;
    edi = esp + 0xC;
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
    ecx = MEM32(ebx + 4);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(esp + 0x10) = eax;
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000B6B5E; /* jge: greater or equal (signed >=) */

loc_000B6B56: ;
    MEM32(esp + 0xC) = 0xFFA00000u;

loc_000B6B5E: ;
    edx = MEM32(esp + 0x6C);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6B6Fu); RECOMP_ABI_CALL(0x000AE130u, sub_000AE130); /* call 0x000AE130 */

loc_000B6B6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6B81; /* je: equal / zero */

loc_000B6B76: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6B81: ;
    esi = ebx;
    PUSH32(esp, 0x000B6B88u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B6B88: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6B90
 * Original: 0x000B6B90 - 0x000B6BB7 (39 bytes, 16 insns)
 * Folder: sound (between: 0x000B69A0 and 0x000B6CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6B90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6BAE; /* jne: not equal / not zero */

loc_000B6B9C: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x000B6BA3u); RECOMP_ABI_CALL(0x000AE1E0u, sub_000AE1E0); /* call 0x000AE1E0 */

loc_000B6BA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6BAE; /* je: equal / zero */

loc_000B6BA7: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B6BAE: ;
    PUSH32(esp, 0x000B6BB3u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B6BB3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6BC0
 * Original: 0x000B6BC0 - 0x000B6BDA (26 bytes, 10 insns)
 * Folder: sound (between: 0x000B69A0 and 0x000B6CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6BC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6BD3; /* jne: not equal / not zero */

loc_000B6BCC: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x000B6BD3u); RECOMP_ABI_CALL(0x000AE280u, sub_000AE280); /* call 0x000AE280 */

loc_000B6BD3: ;
    PUSH32(esp, 0x000B6BD8u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B6BD8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6BE0
 * Original: 0x000B6BE0 - 0x000B6BF7 (23 bytes, 8 insns)
 * Folder: sound (between: 0x000B69A0 and 0x000B6CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6BE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6BF6; /* jne: not equal / not zero */

loc_000B6BEB: ;
    eax = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000AE310(); return; /* tail jmp 0x000AE310 */

loc_000B6BF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6C00
 * Original: 0x000B6C00 - 0x000B6C17 (23 bytes, 8 insns)
 * Folder: sound (between: 0x000B69A0 and 0x000B6CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6C00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6C16; /* jne: not equal / not zero */

loc_000B6C0B: ;
    eax = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000AE3A0(); return; /* tail jmp 0x000AE3A0 */

loc_000B6C16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6C20
 * Original: 0x000B6C20 - 0x000B6C38 (24 bytes, 8 insns)
 * Folder: sound (between: 0x000B69A0 and 0x000B6CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6C20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6C32; /* jne: not equal / not zero */

loc_000B6C2B: ;
    ecx = MEM32(eax);
    g_seh_ebp = ebp; sub_000AEA00(); return; /* tail jmp 0x000AEA00 */

loc_000B6C32: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6C40
 * Original: 0x000B6C40 - 0x000B6CEE (174 bytes, 66 insns)
 * Folder: sound (between: 0x000B69A0 and 0x000B6CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6C40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ebp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    MEM32(esi + 0x28) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000B6CB7; /* jle: less or equal (signed <=) */

loc_000B6C5E: ;
    edx = MEM32(0x758658);

loc_000B6C64: ;
    ecx = MEM32(0x758694);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B6CA8; /* je: equal / zero */

loc_000B6C70: ;
    ecx = MEM32(0x4313D4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B6C8F; /* je: equal / zero */

loc_000B6C7B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B6CA8; /* jne: not equal / not zero */

loc_000B6C7E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6C84u); RECOMP_ABI_CALL(0x000A5D90u, sub_000A5D90); /* call 0x000A5D90 */

loc_000B6C84: ;
    edx = MEM32(0x758658);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B6CAA;

loc_000B6C8F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6CA8; /* je: equal / zero */

loc_000B6C93: ;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6CA8; /* je: equal / zero */

loc_000B6C9A: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6CA8; /* je: equal / zero */

loc_000B6CA1: ;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B6CAA;

loc_000B6CA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B6CAA: ;
    MEM32(edi) = eax;
    eax = MEM32(esi + 0x28);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B6C64; /* jl: less (signed <) */

loc_000B6CB7: ;
    ecx = MEM32(ebp);
    MEM32(esi) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ebp + 0x18);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(ebp + 0x1C);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(ebp + 0x20);
    MEM32(esi + 0x18) = eax;
    eax = 0xFFFFFFFEu;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6CF0
 * Original: 0x000B6CF0 - 0x000B6E6E (382 bytes, 120 insns)
 * Folder: sound (source: sndtheme.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6CF0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esp + 0x408);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6D29; /* je: equal / zero */

loc_000B6D10: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B6D3E; /* jb: below (unsigned <) */

loc_000B6D15: ;
    PUSH32(esp, 0x44);
    ecx = 0x424198;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B6D26u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B6D26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6D29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B6D37u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6D37: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6D3E: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6D70; /* je: equal / zero */

loc_000B6D46: ;
    PUSH32(esp, 0x4B);
    ecx = 0x424198;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B6D57u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B6D57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B6D69u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6D69: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6D70: ;
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B6E53; /* jle: less or equal (signed <=) */

loc_000B6D81: ;
    eax = MEM32(ecx);
    ebx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6DB5; /* je: equal / zero */

loc_000B6D8A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6D9C; /* je: equal / zero */

loc_000B6D92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6D9C; /* je: equal / zero */

loc_000B6D97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6DE3; /* jne: not equal / not zero */

loc_000B6D9C: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6DA4; /* je: equal / zero */

loc_000B6DA3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B6DA4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B6DFB; /* jg: greater (signed >) */

loc_000B6DA9: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6DB1; /* je: equal / zero */

loc_000B6DB0: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B6DB1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B6E27; /* jl: less (signed <) */

loc_000B6DB5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B6D81; /* jl: less (signed <) */

loc_000B6DBD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6E53; /* je: equal / zero */

loc_000B6DC5: ;
    PUSH32(esp, 0x76);
    PUSH32(esp, 0x424198);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6DE0u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6DE0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6DE3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B6DF4u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6DF4: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6DFB: ;
    PUSH32(esp, 0x65);
    ecx = 0x424198;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B6E0Cu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B6E0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B6E20u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6E20: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6E27: ;
    PUSH32(esp, 0x6E);
    ecx = 0x424198;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B6E38u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B6E38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B6E4Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6E4C: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6E53: ;
    ecx = MEM32(esp + 0x40C);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    PUSH32(esp, 0x000B6E67u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6E67: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6E70
 * Original: 0x000B6E70 - 0x000B6EFA (138 bytes, 34 insns)
 * Folder: sound (source: sndtheme.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6E70: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6E90; /* jne: not equal / not zero */

loc_000B6E8B: ;
    PUSH32(esp, 0x000B6E90u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B6E90: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x000B6E9Cu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B6E9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6EA7; /* je: equal / zero */

loc_000B6EA0: ;
    PUSH32(esp, 0x000B6EA5u); RECOMP_ABI_CALL(0x000BC000u, sub_000BC000); /* call 0x000BC000 */

loc_000B6EA5: ;
    goto loc_000B6EA9;

loc_000B6EA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B6EA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758A7C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B6ED3; /* jne: not equal / not zero */

loc_000B6EB2: ;
    PUSH32(esp, 0xA6);
    PUSH32(esp, 0x424198);
    PUSH32(esp, 0x42417C);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6ED0u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6ED0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6ED3: ;
    PUSH32(esp, 0xBC020);
    PUSH32(esp, 0x000B6EDDu); RECOMP_ABI_CALL(0x000B0ED0u, sub_000B0ED0); /* call 0x000B0ED0 */

loc_000B6EDD: ;
    PUSH32(esp, 0xBC030);
    PUSH32(esp, 0x000B6EE7u); RECOMP_ABI_CALL(0x000B0F20u, sub_000B0F20); /* call 0x000B0F20 */

loc_000B6EE7: ;
    ecx = MEM32(esp + 0x408);
    PUSH32(esp, 0x000B6EF3u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6EF3: ;
    _fb = (uint32_t)(0x40C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6F00
 * Original: 0x000B6F00 - 0x000B6F85 (133 bytes, 35 insns)
 * Folder: sound (source: sndtheme.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6F00: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x404) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B6F3F; /* jne: not equal / not zero */

loc_000B6F1E: ;
    PUSH32(esp, 0xC6);
    PUSH32(esp, 0x424198);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6F3Cu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6F3C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6F3F: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6F66; /* je: equal / zero */

loc_000B6F45: ;
    PUSH32(esp, 0xC7);
    PUSH32(esp, 0x424198);
    PUSH32(esp, 0x42415C);
    ecx = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B6F63u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6F63: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6F66: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 0x404);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000B6F7Eu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B6F7E: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6F90
 * Original: 0x000B6F90 - 0x000B705F (207 bytes, 62 insns)
 * Folder: sound (source: sndtheme.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6F90: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x414);
    PUSH32(esp, esi);
    MEM32(esp + 0x40C) = eax;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B6FD9; /* jne: not equal / not zero */

loc_000B6FB8: ;
    PUSH32(esp, 0xF4);
    PUSH32(esp, 0x424198);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B6FD6u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6FD6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6FD9: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7000; /* je: equal / zero */

loc_000B6FDF: ;
    PUSH32(esp, 0xF5);
    PUSH32(esp, 0x424198);
    PUSH32(esp, 0x42415C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B6FFDu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B6FFD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B7000: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7025; /* jne: not equal / not zero */

loc_000B7004: ;
    PUSH32(esp, 0xF6);
    PUSH32(esp, 0x424198);
    PUSH32(esp, 0x4208F4);
    edx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B7022u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B7022: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B7025: ;
    eax = MEM32(ebx + 0x48);
    edi = MEM32(ebx + 0x44);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B7048; /* jle: less or equal (signed <=) */

loc_000B7031: ;
    eax = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B703Au); RECOMP_ABI_CALL(0x000ADD80u, sub_000ADD80); /* call 0x000ADD80 */

loc_000B703A: ;
    eax = MEM32(ebx + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7031; /* jl: less (signed <) */

loc_000B7048: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B7058u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7058: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B7060
 * Original: 0x000B7060 - 0x000B70AD (77 bytes, 36 insns)
 * Folder: sound (between: 0x000B6F90 and 0x000B7330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7060: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x48);
    edx = MEM32(esi + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000B7084; /* jle: less or equal (signed <=) */

loc_000B7073: ;
    edi = MEM32(edx);
    ebx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B70A6; /* je: equal / zero */

loc_000B707C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7073; /* jl: less (signed <) */

loc_000B7084: ;
    edx = MEM32(0x758A7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B70A6; /* je: equal / zero */

loc_000B708E: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B70A2u); RECOMP_ABI_CALL(0x000BC040u, sub_000BC040); /* call 0x000BC040 */

loc_000B70A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000B70A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B70B0
 * Original: 0x000B70B0 - 0x000B70D4 (36 bytes, 15 insns)
 * Folder: sound (between: 0x000B6F90 and 0x000B7330)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B70B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B70B0: ;
    PUSH32(esp, edi);
    edi = MEM32(0x758A7C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B70D0; /* je: equal / zero */

loc_000B70BB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x000B70CEu); RECOMP_ABI_CALL(0x000BC530u, sub_000BC530); /* call 0x000BC530 */

loc_000B70CE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000B70D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B70E0
 * Original: 0x000B70E0 - 0x000B70FA (26 bytes, 11 insns)
 * Folder: sound (between: 0x000B6F90 and 0x000B7330)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B70E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B70E0: ;
    PUSH32(esp, edi);
    edi = MEM32(0x758A7C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B70F6; /* je: equal / zero */

loc_000B70EB: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000B70F4u); RECOMP_ABI_CALL(0x000BC3D0u, sub_000BC3D0); /* call 0x000BC3D0 */

loc_000B70F4: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000B70F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7100
 * Original: 0x000B7100 - 0x000B7114 (20 bytes, 6 insns)
 * Folder: sound (between: 0x000B6F90 and 0x000B7330)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7100: ;
    edx = MEM32(0x758A7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7113; /* je: equal / zero */

loc_000B710A: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000BC190(); return; /* tail jmp 0x000BC190 */

loc_000B7113: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7120
 * Original: 0x000B7120 - 0x000B7136 (22 bytes, 9 insns)
 * Folder: sound (between: 0x000B6F90 and 0x000B7330)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7120: ;
    eax = MEM32(0x758A7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7135; /* je: equal / zero */

loc_000B7129: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7134u); RECOMP_ABI_CALL(0x000BC270u, sub_000BC270); /* call 0x000BC270 */

loc_000B7134: ;
    POP32(esp, esi);

loc_000B7135: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7140
 * Original: 0x000B7140 - 0x000B7154 (20 bytes, 7 insns)
 * Folder: sound (between: 0x000B6F90 and 0x000B7330)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7140: ;
    eax = MEM32(0x758A7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7153; /* je: equal / zero */

loc_000B7149: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7153u); RECOMP_ABI_CALL(0x000BC320u, sub_000BC320); /* call 0x000BC320 */

loc_000B7153: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7160
 * Original: 0x000B7160 - 0x000B717C (28 bytes, 11 insns)
 * Folder: sound (between: 0x000B6F90 and 0x000B7330)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7160: ;
    eax = MEM32(0x758A7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7176; /* je: equal / zero */

loc_000B7169: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7174u); RECOMP_ABI_CALL(0x000BC650u, sub_000BC650); /* call 0x000BC650 */

loc_000B7174: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000B7176: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000B716E
 * Original: 0x000B716E - 0x000B717C (14 bytes, 6 insns)
 * Folder: sound (between: 0x000B6F90 and 0x000B7330)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B716E(void)
{

loc_000B716E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7174u); RECOMP_ABI_CALL(0x000BC650u, sub_000BC650); /* call 0x000BC650 */

loc_000B7174: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7180
 * Original: 0x000B7180 - 0x000B7212 (146 bytes, 44 insns)
 * Folder: sound (between: 0x000B6F90 and 0x000B7330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7180: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = 1;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF0000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B71D1; /* jne: not equal / not zero */

loc_000B71C0: ;
    edx = MEM32(0x758A40);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(0x758A58);
    goto loc_000B71D7;

loc_000B71D1: ;
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);

loc_000B71D7: ;
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF0000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B71F6; /* jne: not equal / not zero */

loc_000B71E5: ;
    edx = MEM32(0x758A44);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(0x758A5C);
    goto loc_000B71FC;

loc_000B71F6: ;
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x3C);

loc_000B71FC: ;
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(eax + 0x2C) = edx;
    ecx = MEM32(ecx + 0x44);
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7220
 * Original: 0x000B7220 - 0x000B7325 (261 bytes, 100 insns)
 * Folder: sound (between: 0x000B6F90 and 0x000B7330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7220: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x758658);
    MEM32(ebp + 0x44) = edi;
    eax = MEM32(eax + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x48) = eax;
    esi = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_000B72A3; /* jle: less or equal (signed <=) */

loc_000B7248: ;
    goto loc_000B7250;

    /* nop */

loc_000B7250: ;
    ecx = MEM32(0x758694);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7294; /* je: equal / zero */

loc_000B725C: ;
    ecx = MEM32(0x4313D4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B727B; /* je: equal / zero */

loc_000B7267: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B7294; /* jne: not equal / not zero */

loc_000B726A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7270u); RECOMP_ABI_CALL(0x000A5D90u, sub_000A5D90); /* call 0x000A5D90 */

loc_000B7270: ;
    edx = MEM32(0x758658);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B7296;

loc_000B727B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7294; /* je: equal / zero */

loc_000B727F: ;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7294; /* je: equal / zero */

loc_000B7286: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7294; /* je: equal / zero */

loc_000B728D: ;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B7296;

loc_000B7294: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B7296: ;
    MEM32(esi) = eax;
    eax = MEM32(ebp + 0x48);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7250; /* jl: less (signed <) */

loc_000B72A3: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7305; /* je: equal / zero */

loc_000B72AF: ;
    ecx = MEM32(0x758694);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000B72FC; /* je: equal / zero */

loc_000B72C0: ;
    ecx = MEM32(0x4313D4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B72DE; /* je: equal / zero */

loc_000B72CB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B72FC; /* jne: not equal / not zero */

loc_000B72CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B72D4u); RECOMP_ABI_CALL(0x000A5D90u, sub_000A5D90); /* call 0x000A5D90 */

loc_000B72D4: ;
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    goto loc_000B730C;

loc_000B72DE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B72FC; /* je: equal / zero */

loc_000B72E2: ;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B72FC; /* je: equal / zero */

loc_000B72E9: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B72FC; /* je: equal / zero */

loc_000B72F0: ;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    goto loc_000B730C;

loc_000B72FC: ;
    ecx = MEM32(ebp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    goto loc_000B730C;

loc_000B7305: ;
    MEM32(ebp + 0x18) = 0;

loc_000B730C: ;
    ecx = MEM32(esp + 0x14);
    eax = ebp;
    PUSH32(esp, 0x000B7317u); RECOMP_ABI_CALL(0x000B7180u, sub_000B7180); /* call 0x000B7180 */

loc_000B7317: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B731Du); RECOMP_ABI_CALL(0x000B6CF0u, sub_000B6CF0); /* call 0x000B6CF0 */

loc_000B731D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7330
 * Original: 0x000B7330 - 0x000B7479 (329 bytes, 109 insns)
 * Folder: sound (source: sndswtch.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7330: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x414);
    ebp = MEM32(esi + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFA00000u (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x410) = eax;
    edi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000B735F; /* jge: greater or equal (signed >=) */

loc_000B735A: ;
    ebp = 0xFFA00000u;

loc_000B735F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7381; /* jne: not equal / not zero */

loc_000B7363: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x424298);
    PUSH32(esp, 0x424294);
    eax = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B737Eu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B737E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B7381: ;
    eax = MEM32(edi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B73A6; /* jne: not equal / not zero */

loc_000B7388: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x424298);
    PUSH32(esp, 0x42426C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B73A3u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B73A3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B73A6: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B73B2; /* jge: greater or equal (signed >=) */

loc_000B73AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B73D0; /* jge: greater or equal (signed >=) */

loc_000B73B2: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x424298);
    PUSH32(esp, 0x424200);
    edx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B73CDu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B73CD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B73D0: ;
    eax = MEM32(esi + 0x1C);
    ebx = MEM32(edi + eax * 4 + 0x50);
    eax = MEM32(esi + 0x14);
    edi = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_000B73F2; /* jle: less or equal (signed <=) */

loc_000B73E5: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7431; /* je: equal / zero */

loc_000B73EA: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B73E5; /* jl: less (signed <) */

loc_000B73F2: ;
    esi = MEM32(esi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7457; /* je: equal / zero */

loc_000B73FA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_000B740F; /* jle: less or equal (signed <=) */

loc_000B7402: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7453; /* je: equal / zero */

loc_000B7407: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7402; /* jl: less (signed <) */

loc_000B740F: ;
    ecx = MEM32(esp + 0x41C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = ebp;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B742Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B742A: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7431: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 0x41C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B744Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B744C: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7453: ;
    eax = MEM32(ecx);
    goto loc_000B7459;

loc_000B7457: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B7459: ;
    edx = MEM32(esp + 0x41C);
    ecx = MEM32(esp + 0x410);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B7472u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7472: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B7480
 * Original: 0x000B7480 - 0x000B7546 (198 bytes, 70 insns)
 * Folder: sound (between: 0x000B7330 and 0x000B7550)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7480: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x6C);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B749B; /* jne: not equal / not zero */

loc_000B7496: ;
    PUSH32(esp, 0x000B749Bu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B749B: ;
    edx = 0x18;
    ecx = eax;
    PUSH32(esp, 0x000B74A7u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B74A7: ;
    edi = MEM32(esp + 0x70);
    ebx = eax;
    eax = esp + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000B74BAu); RECOMP_ABI_CALL(0x000B7330u, sub_000B7330); /* call 0x000B7330 */

loc_000B74BA: ;
    edx = MEM32(esp + 0x7C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x10) = edx;
    MEM32(ebx + 8) = edi;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 0xC) = ebp;
    MEM32(ebx + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000B752F; /* je: equal / zero */

loc_000B74D8: ;
    ecx = 0x16;
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
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFA00000u (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000B74FD; /* jge: greater or equal (signed >=) */

loc_000B74F5: ;
    MEM32(esp + 0x14) = 0xFFA00000u;

loc_000B74FD: ;
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, ebp);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7513u); RECOMP_ABI_CALL(0x000ADF90u, sub_000ADF90); /* call 0x000ADF90 */

loc_000B7513: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B753C; /* jne: not equal / not zero */

loc_000B751D: ;
    esi = ebx;
    PUSH32(esp, 0x000B7524u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B7524: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B752F: ;
    MEM32(ebx) = 0xFFFFFFFFu;
    MEM32(ebx + 0x14) = 1;

loc_000B753C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B7550
 * Original: 0x000B7550 - 0x000B763D (237 bytes, 77 insns)
 * Folder: sound (source: sndswtch.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7550: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x414);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x40C) = eax;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B7594; /* jne: not equal / not zero */

loc_000B7573: ;
    PUSH32(esp, 0xAF);
    PUSH32(esp, 0x424298);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7591u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B7591: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B7594: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B75BB; /* je: equal / zero */

loc_000B759A: ;
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x424298);
    PUSH32(esp, 0x4241DC);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B75B8u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B75B8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B75BB: ;
    eax = MEM32(esi + 0x14);
    ebx = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B7621; /* jle: less or equal (signed <=) */

loc_000B75C7: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B75CFu); RECOMP_ABI_CALL(0x000ADBD0u, sub_000ADBD0); /* call 0x000ADBD0 */

loc_000B75CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B75DD; /* je: equal / zero */

loc_000B75D5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B7605; /* je: equal / zero */

loc_000B75D8: ;
    ebp = 1;

loc_000B75DD: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B75C7; /* jl: less (signed <) */

loc_000B75E8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7621; /* je: equal / zero */

loc_000B75EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B75FEu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B75FE: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7605: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B761Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B761A: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7621: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    PUSH32(esp, 0x000B7636u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7636: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B7640
 * Original: 0x000B7640 - 0x000B770F (207 bytes, 62 insns)
 * Folder: sound (source: sndswtch.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7640: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x414);
    PUSH32(esp, esi);
    MEM32(esp + 0x40C) = eax;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B7689; /* jne: not equal / not zero */

loc_000B7668: ;
    PUSH32(esp, 0xED);
    PUSH32(esp, 0x424298);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7686u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B7686: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B7689: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B76B0; /* je: equal / zero */

loc_000B768F: ;
    PUSH32(esp, 0xEE);
    PUSH32(esp, 0x424298);
    PUSH32(esp, 0x4241DC);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B76ADu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B76AD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B76B0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B76D5; /* jne: not equal / not zero */

loc_000B76B4: ;
    PUSH32(esp, 0xEF);
    PUSH32(esp, 0x424298);
    PUSH32(esp, 0x4208F4);
    edx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B76D2u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B76D2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B76D5: ;
    eax = MEM32(ebx + 0x14);
    edi = MEM32(ebx + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B76F8; /* jle: less or equal (signed <=) */

loc_000B76E1: ;
    eax = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B76EAu); RECOMP_ABI_CALL(0x000ADD80u, sub_000ADD80); /* call 0x000ADD80 */

loc_000B76EA: ;
    eax = MEM32(ebx + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B76E1; /* jl: less (signed <) */

loc_000B76F8: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B7708u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7708: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B7710
 * Original: 0x000B7710 - 0x000B7826 (278 bytes, 100 insns)
 * Folder: sound (between: 0x000B7640 and 0x000B7990)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7710: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000B7737; /* je: equal / zero */

loc_000B7728: ;
    esi = ebx;
    PUSH32(esp, 0x000B772Fu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B772F: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7737: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esp + 0x6C);
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000B775C; /* je: equal / zero */

loc_000B7746: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B7755u); RECOMP_ABI_CALL(0x000B7330u, sub_000B7330); /* call 0x000B7330 */

loc_000B7755: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    goto loc_000B775F;

loc_000B775C: ;
    ebp = MEM32(ebx + 4);

loc_000B775F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 4) (32-bit) */
    PUSH32(esp, edi);
    ecx = 0x16;
    edi = esp + 0x14;
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
    if (CMP_NE(_fa, _fb)) goto loc_000B77AF; /* jne: not equal / not zero */

loc_000B7771: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000B778B; /* jge: greater or equal (signed >=) */

loc_000B7783: ;
    MEM32(esp + 0x14) = 0xFFA00000u;

loc_000B778B: ;
    eax = MEM32(esp + 0x74);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, 0x000B779Cu); RECOMP_ABI_CALL(0x000AE130u, sub_000AE130); /* call 0x000AE130 */

loc_000B779C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */

loc_000B77A1: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B7816; /* je: equal / zero */

loc_000B77A3: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B77AF: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x000B77B6u); RECOMP_ABI_CALL(0x000AE280u, sub_000AE280); /* call 0x000AE280 */

loc_000B77B6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B77FF; /* je: equal / zero */

loc_000B77BA: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000B77D5; /* jge: greater or equal (signed >=) */

loc_000B77CD: ;
    MEM32(esp + 0x14) = 0xFFA00000u;

loc_000B77D5: ;
    edx = MEM32(esp + 0x74);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B77EBu); RECOMP_ABI_CALL(0x000ADF90u, sub_000ADF90); /* call 0x000ADF90 */

loc_000B77EB: ;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = ebp;
    MEM32(ebx + 0x10) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    goto loc_000B77A1;

loc_000B77FF: ;
    edx = MEM32(esp + 0xC);
    MEM32(ebx) = 0xFFFFFFFFu;
    eax = MEM32(ebx);
    MEM32(ebx + 4) = ebp;
    MEM32(ebx + 0x10) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    goto loc_000B77A1;

loc_000B7816: ;
    esi = ebx;
    PUSH32(esp, 0x000B781Du); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B781D: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B7830
 * Original: 0x000B7830 - 0x000B7857 (39 bytes, 16 insns)
 * Folder: sound (between: 0x000B7640 and 0x000B7990)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7830: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B784E; /* jne: not equal / not zero */

loc_000B783C: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x000B7843u); RECOMP_ABI_CALL(0x000AE1E0u, sub_000AE1E0); /* call 0x000AE1E0 */

loc_000B7843: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B784E; /* je: equal / zero */

loc_000B7847: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B784E: ;
    PUSH32(esp, 0x000B7853u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B7853: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7860
 * Original: 0x000B7860 - 0x000B787A (26 bytes, 10 insns)
 * Folder: sound (between: 0x000B7640 and 0x000B7990)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7860: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7873; /* jne: not equal / not zero */

loc_000B786C: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x000B7873u); RECOMP_ABI_CALL(0x000AE280u, sub_000AE280); /* call 0x000AE280 */

loc_000B7873: ;
    PUSH32(esp, 0x000B7878u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B7878: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7880
 * Original: 0x000B7880 - 0x000B7897 (23 bytes, 8 insns)
 * Folder: sound (between: 0x000B7640 and 0x000B7990)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7880: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7896; /* jne: not equal / not zero */

loc_000B788B: ;
    eax = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000AE310(); return; /* tail jmp 0x000AE310 */

loc_000B7896: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B78A0
 * Original: 0x000B78A0 - 0x000B78B7 (23 bytes, 8 insns)
 * Folder: sound (between: 0x000B7640 and 0x000B7990)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B78A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B78A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B78B6; /* jne: not equal / not zero */

loc_000B78AB: ;
    eax = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000AE3A0(); return; /* tail jmp 0x000AE3A0 */

loc_000B78B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B78C0
 * Original: 0x000B78C0 - 0x000B78D8 (24 bytes, 8 insns)
 * Folder: sound (between: 0x000B7640 and 0x000B7990)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B78C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B78C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B78D2; /* jne: not equal / not zero */

loc_000B78CB: ;
    ecx = MEM32(eax);
    g_seh_ebp = ebp; sub_000AEA00(); return; /* tail jmp 0x000AEA00 */

loc_000B78D2: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000B78E0
 * Original: 0x000B78E0 - 0x000B7989 (169 bytes, 65 insns)
 * Folder: sound (between: 0x000B7640 and 0x000B7990)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B78E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B78E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    MEM32(esi + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000B7957; /* jle: less or equal (signed <=) */

loc_000B78FE: ;
    edx = MEM32(0x758658);

loc_000B7904: ;
    ecx = MEM32(0x758694);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7948; /* je: equal / zero */

loc_000B7910: ;
    ecx = MEM32(0x4313D4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B792F; /* je: equal / zero */

loc_000B791B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B7948; /* jne: not equal / not zero */

loc_000B791E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7924u); RECOMP_ABI_CALL(0x000A5D90u, sub_000A5D90); /* call 0x000A5D90 */

loc_000B7924: ;
    edx = MEM32(0x758658);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B794A;

loc_000B792F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7948; /* je: equal / zero */

loc_000B7933: ;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7948; /* je: equal / zero */

loc_000B793A: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7948; /* je: equal / zero */

loc_000B7941: ;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B794A;

loc_000B7948: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B794A: ;
    MEM32(edi) = eax;
    eax = MEM32(esi + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7904; /* jl: less (signed <) */

loc_000B7957: ;
    ecx = MEM32(ebp);
    MEM32(esi) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ebp + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(ebp + 0x1C);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(ebp + 0x20);
    MEM32(esi + 0x20) = eax;
    ecx = MEM32(ebp + 0x24);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x24) = ecx;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7990
 * Original: 0x000B7990 - 0x000B7A77 (231 bytes, 77 insns)
 * Folder: sound (source: sndmultilayer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7990: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x414);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x40C) = eax;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B79D1; /* jne: not equal / not zero */

loc_000B79B3: ;
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B79CEu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B79CE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B79D1: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B79F5; /* je: equal / zero */

loc_000B79D7: ;
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x4243E8);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B79F2u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B79F2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B79F5: ;
    eax = MEM32(esi + 0x14);
    ebx = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B7A5B; /* jle: less or equal (signed <=) */

loc_000B7A01: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B7A09u); RECOMP_ABI_CALL(0x000ADBD0u, sub_000ADBD0); /* call 0x000ADBD0 */

loc_000B7A09: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B7A17; /* je: equal / zero */

loc_000B7A0F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B7A3F; /* je: equal / zero */

loc_000B7A12: ;
    ebp = 1;

loc_000B7A17: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7A01; /* jl: less (signed <) */

loc_000B7A22: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7A5B; /* je: equal / zero */

loc_000B7A26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B7A38u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7A38: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7A3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B7A54u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7A54: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7A5B: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    PUSH32(esp, 0x000B7A70u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7A70: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B7A80
 * Original: 0x000B7A80 - 0x000B7B24 (164 bytes, 52 insns)
 * Folder: sound (source: sndmultilayer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7A80: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x414);
    PUSH32(esp, esi);
    MEM32(esp + 0x40C) = eax;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B7AC6; /* jne: not equal / not zero */

loc_000B7AA8: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x4230BC);
    eax = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7AC3u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B7AC3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B7AC6: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7AEA; /* je: equal / zero */

loc_000B7ACC: ;
    PUSH32(esp, 0x7D);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x4243E8);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B7AE7u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B7AE7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B7AEA: ;
    eax = MEM32(ebx + 0x14);
    edi = MEM32(ebx + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B7B0D; /* jle: less or equal (signed <=) */

loc_000B7AF6: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B7AFFu); RECOMP_ABI_CALL(0x000ADD80u, sub_000ADD80); /* call 0x000ADD80 */

loc_000B7AFF: ;
    eax = MEM32(ebx + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7AF6; /* jl: less (signed <) */

loc_000B7B0D: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B7B1Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7B1D: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B7B30
 * Original: 0x000B7B30 - 0x000B7D46 (534 bytes, 169 insns)
 * Folder: sound (source: sndmultilayer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B7B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7B30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esp + 0x490) = eax;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7B79; /* je: equal / zero */

loc_000B7B58: ;
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x41FFC0);
    PUSH32(esp, 0x428D10);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    goto loc_000B7D1F;

loc_000B7B79: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B7D03; /* ja: above (unsigned >) */

loc_000B7B85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B7D27; /* jbe: below or equal (unsigned <=) */

loc_000B7B8D: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7B9B; /* jne: not equal / not zero */

loc_000B7B96: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7B9Bu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B7B9B: ;
    edx = 0xC;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7BA7u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B7BA7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7D27; /* je: equal / zero */

loc_000B7BB1: ;
    ecx = MEM32(esi + 0x18);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7BBDu); RECOMP_ABI_CALL(0x000D7510u, sub_000D7510); /* call 0x000D7510 */

loc_000B7BBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B7D27; /* je: equal / zero */

loc_000B7BCA: ;
    ecx = MEM32(esi + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B7BE4; /* jle: less or equal (signed <=) */

loc_000B7BD3: ;
    edx = MEM32(ebx);
    MEM32(edx + eax * 4) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7BD3; /* jl: less (signed <) */

loc_000B7BE4: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebx + 4) = esi;
    esi = MEM32(ebp + 0xC);
    MEM32(ebx + 8) = eax;
    ecx = 0x16;
    edi = esp + 0x20;
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
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(ecx + 0x10);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000B7CEE; /* jle: less or equal (signed <=) */

loc_000B7C18: ;
    edx = eax + 0xC;
    MEM32(esp + 0x18) = edx;
    /* nop */

loc_000B7C20: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B7CCC; /* je: equal / zero */

loc_000B7C2E: ;
    esi = MEM32(ebp + 0xC);
    ecx = 0x16;
    edi = esp + 0x20;
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
    ecx = MEM32(ebx + 4);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0xFFA00000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000B7C57; /* jge: greater or equal (signed >=) */

loc_000B7C53: ;
    MEM32(esp + 0x24) = edi;

loc_000B7C57: ;
    eax = MEM32(edx + 4);
    ecx = MEM32(edx);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7C68u); RECOMP_ABI_CALL(0x000B8460u, sub_000B8460); /* call 0x000B8460 */

loc_000B7C68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7C91; /* je: equal / zero */

loc_000B7C6F: ;
    ecx = MEM32(esp + 0x10);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7C84u); RECOMP_ABI_CALL(0x000B8200u, sub_000B8200); /* call 0x000B8200 */

loc_000B7C84: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7D27; /* je: equal / zero */

loc_000B7C8F: ;
    goto loc_000B7C95;

loc_000B7C91: ;
    MEM32(esp + 0x24) = edi;

loc_000B7C95: ;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7CABu); RECOMP_ABI_CALL(0x000ADF90u, sub_000ADF90); /* call 0x000ADF90 */

loc_000B7CAB: ;
    edx = MEM32(ebx);
    ecx = MEM32(esp + 0x28);
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(ebx);
    edx = MEM32(eax + ecx * 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7D27; /* je: equal / zero */

loc_000B7CC1: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);

loc_000B7CCC: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(ecx + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000B7C20; /* jl: less (signed <) */

loc_000B7CEE: ;
    eax = ebx;
    ecx = MEM32(esp + 0x494);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7CFCu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7CFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B7D03: ;
    PUSH32(esp, 0x9A);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x41FFC0);
    PUSH32(esp, 0x428D10);
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);

loc_000B7D1F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7D24u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B7D24: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B7D27: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7D2Du); RECOMP_ABI_CALL(0x000B7F60u, sub_000B7F60); /* call 0x000B7F60 */

loc_000B7D2D: ;
    ecx = MEM32(esp + 0x498);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7D3Fu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7D3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7D50
 * Original: 0x000B7D50 - 0x000B7EFB (427 bytes, 139 insns)
 * Folder: sound (between: 0x000B7B30 and 0x000B7D84)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B7D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B7D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x484) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x484));
    esp = esp - 0x484;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x480) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B7DC4; /* je: equal / zero */

loc_000B7D7F: ;
    PUSH32(esp, 0x135);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x41FFC0);
    ecx = esp + 0x94;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7DA0u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B7DA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B7DA3: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7DACu); RECOMP_ABI_CALL(0x000B7F60u, sub_000B7F60); /* call 0x000B7F60 */

loc_000B7DAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x48C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7DBDu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7DBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B7DC4: ;
    esi = MEM32(ebp + 0xC);
    ecx = 0x16;
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
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000B7DA3; /* jle: less or equal (signed <=) */

loc_000B7DDE: ;
    edx = ecx + 0xC;
    MEM32(esp + 0x14) = edx;

loc_000B7DE5: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebx * 4), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7EAF; /* je: equal / zero */

loc_000B7DF4: ;
    esi = MEM32(ebp + 0xC);
    ecx = 0x16;
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
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(eax + 8))) >> 32) & 1);
    ecx = ecx + MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0xFFA00000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000B7E1A; /* jge: greater or equal (signed >=) */

loc_000B7E16: ;
    MEM32(esp + 0x1C) = edi;

loc_000B7E1A: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(edx + 4);
    esi = MEM32(ebp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7E4F; /* je: equal / zero */

loc_000B7E27: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7E4F; /* je: equal / zero */

loc_000B7E2B: ;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7E4B; /* je: equal / zero */

loc_000B7E42: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;

loc_000B7E4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7E7E; /* je: equal / zero */

loc_000B7E4F: ;
    edx = MEM32(esp + 0xC);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7E64u); RECOMP_ABI_CALL(0x000B8200u, sub_000B8200); /* call 0x000B8200 */

loc_000B7E64: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000B7E82; /* jne: not equal / not zero */

loc_000B7E6B: ;
    esi = MEM32(ebp + 0xC);
    ecx = 0x16;
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
    esi = MEM32(ebp + 0x10);
    goto loc_000B7E82;

loc_000B7E7E: ;
    MEM32(esp + 0x1C) = edi;

loc_000B7E82: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi);
    ecx = MEM32(ecx + ebx * 4);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7E95u); RECOMP_ABI_CALL(0x000AE130u, sub_000AE130); /* call 0x000AE130 */

loc_000B7E95: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000B7EA7; /* jne: not equal / not zero */

loc_000B7E9C: ;
    edx = MEM32(esi);
    MEM32(edx + ebx * 4) = 0xFFFFFFFFu;
    goto loc_000B7EAF;

loc_000B7EA7: ;
    MEM32(esp + 0x10) = 1;

loc_000B7EAF: ;
    eax = MEM32(ebp + 8);
    edi = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x14);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1C)) >> 32) & 1);
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x1C)) >> 32) & 1);
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000B7DE5; /* jl: less (signed <) */

loc_000B7ED7: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7DA3; /* je: equal / zero */

loc_000B7EE3: ;
    ecx = MEM32(esp + 0x48C);
    eax = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7EF4u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7EF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7D84
 * Original: 0x000B7D84 - 0x000B7EFB (375 bytes, 122 insns)
 * Folder: sound (source: sndmultilayer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7D84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7D84: ;
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x41FFC0);
    ecx = esp + 0x94;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B7DA0u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B7DA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B7DA3: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B7DACu); RECOMP_ABI_CALL(0x000B7F60u, sub_000B7F60); /* call 0x000B7F60 */

loc_000B7DAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x48C);
    PUSH32(esp, 0x000B7DBDu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7DBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    edx = ecx + 0xC;
    MEM32(esp + 0x14) = edx;

loc_000B7DE5: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebx * 4), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7EAF; /* je: equal / zero */

loc_000B7DF4: ;
    esi = MEM32(ebp + 0xC);
    ecx = 0x16;
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
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(eax + 8))) >> 32) & 1);
    ecx = ecx + MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0xFFA00000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000B7E1A; /* jge: greater or equal (signed >=) */

loc_000B7E16: ;
    MEM32(esp + 0x1C) = edi;

loc_000B7E1A: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(edx + 4);
    esi = MEM32(ebp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7E4F; /* je: equal / zero */

loc_000B7E27: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7E4F; /* je: equal / zero */

loc_000B7E2B: ;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7E4B; /* je: equal / zero */

loc_000B7E42: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;

loc_000B7E4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7E7E; /* je: equal / zero */

loc_000B7E4F: ;
    edx = MEM32(esp + 0xC);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B7E64u); RECOMP_ABI_CALL(0x000B8200u, sub_000B8200); /* call 0x000B8200 */

loc_000B7E64: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000B7E82; /* jne: not equal / not zero */

loc_000B7E6B: ;
    esi = MEM32(ebp + 0xC);
    ecx = 0x16;
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
    esi = MEM32(ebp + 0x10);
    goto loc_000B7E82;

loc_000B7E7E: ;
    MEM32(esp + 0x1C) = edi;

loc_000B7E82: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi);
    ecx = MEM32(ecx + ebx * 4);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7E95u); RECOMP_ABI_CALL(0x000AE130u, sub_000AE130); /* call 0x000AE130 */

loc_000B7E95: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000B7EA7; /* jne: not equal / not zero */

loc_000B7E9C: ;
    edx = MEM32(esi);
    MEM32(edx + ebx * 4) = 0xFFFFFFFFu;
    goto loc_000B7EAF;

loc_000B7EA7: ;
    MEM32(esp + 0x10) = 1;

loc_000B7EAF: ;
    eax = MEM32(ebp + 8);
    edi = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x14);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1C)) >> 32) & 1);
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x1C)) >> 32) & 1);
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000B7DE5; /* jl: less (signed <) */

loc_000B7ED7: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7DA3; /* je: equal / zero */

loc_000B7EE3: ;
    ecx = MEM32(esp + 0x48C);
    eax = 1;
    PUSH32(esp, 0x000B7EF4u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B7EF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7F00
 * Original: 0x000B7F00 - 0x000B7F55 (85 bytes, 35 insns)
 * Folder: sound (between: 0x000B7D84 and 0x000B8040)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7F00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7F3F; /* je: equal / zero */

loc_000B7F0B: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B7F3F; /* jbe: below or equal (unsigned <=) */

loc_000B7F17: ;
    ecx = MEM32(edi);
    ecx = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7F34; /* je: equal / zero */

loc_000B7F21: ;
    PUSH32(esp, 0x000B7F26u); RECOMP_ABI_CALL(0x000AE1E0u, sub_000AE1E0); /* call 0x000AE1E0 */

loc_000B7F26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7F4D; /* je: equal / zero */

loc_000B7F2B: ;
    edx = MEM32(edi);
    MEM32(edx + esi * 4) = 0xFFFFFFFFu;

loc_000B7F34: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B7F17; /* jb: below (unsigned <) */

loc_000B7F3F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B7F45u); RECOMP_ABI_CALL(0x000B7F60u, sub_000B7F60); /* call 0x000B7F60 */

loc_000B7F45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B7F4D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7F60
 * Original: 0x000B7F60 - 0x000B7FB5 (85 bytes, 34 insns)
 * Folder: sound (between: 0x000B7D84 and 0x000B8040)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7F60: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7FB3; /* je: equal / zero */

loc_000B7F69: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7FAB; /* je: equal / zero */

loc_000B7F6F: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B7F9A; /* jbe: below or equal (unsigned <=) */

loc_000B7F7B: ;
    goto loc_000B7F80;

    /* nop */

loc_000B7F80: ;
    ecx = MEM32(edi);
    ecx = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7F8F; /* je: equal / zero */

loc_000B7F8A: ;
    PUSH32(esp, 0x000B7F8Fu); RECOMP_ABI_CALL(0x000AE280u, sub_000AE280); /* call 0x000AE280 */

loc_000B7F8F: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B7F80; /* jb: below (unsigned <) */

loc_000B7F9A: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7FAB; /* je: equal / zero */

loc_000B7FA0: ;
    PUSH32(esp, 0x000B7FA5u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B7FA5: ;
    MEM32(edi) = 0;

loc_000B7FAB: ;
    esi = edi;
    PUSH32(esp, 0x000B7FB2u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B7FB2: ;
    POP32(esp, esi);

loc_000B7FB3: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7FC0
 * Original: 0x000B7FC0 - 0x000B7FF3 (51 bytes, 23 insns)
 * Folder: sound (between: 0x000B7D84 and 0x000B8040)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7FC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B7FF0; /* jbe: below or equal (unsigned <=) */

loc_000B7FD2: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7FE5; /* je: equal / zero */

loc_000B7FDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7FE2u); RECOMP_ABI_CALL(0x000AE310u, sub_000AE310); /* call 0x000AE310 */

loc_000B7FE2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B7FE5: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B7FD2; /* jb: below (unsigned <) */

loc_000B7FF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8000
 * Original: 0x000B8000 - 0x000B8033 (51 bytes, 23 insns)
 * Folder: sound (between: 0x000B7D84 and 0x000B8040)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B8030; /* jbe: below or equal (unsigned <=) */

loc_000B8012: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8025; /* je: equal / zero */

loc_000B801C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8022u); RECOMP_ABI_CALL(0x000AE3A0u, sub_000AE3A0); /* call 0x000AE3A0 */

loc_000B8022: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8025: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8012; /* jb: below (unsigned <) */

loc_000B8030: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8040
 * Original: 0x000B8040 - 0x000B8061 (33 bytes, 11 insns)
 * Folder: sound (match: xbox-demo 0x000DCE70, between)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8040: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B805B; /* jne: not equal / not zero */

loc_000B804D: ;
    edx = MEM32(eax);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B805B; /* je: equal / zero */

loc_000B8056: ;
    g_seh_ebp = ebp; sub_000AEA00(); return; /* tail jmp 0x000AEA00 */

loc_000B805B: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8070
 * Original: 0x000B8070 - 0x000B808E (30 bytes, 9 insns)
 * Folder: sound (between: 0x000B8040 and 0x000B8090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8070: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8088; /* jne: not equal / not zero */

loc_000B807A: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000AEA90(); return; /* tail jmp 0x000AEA90 */

loc_000B8088: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8090
 * Original: 0x000B8090 - 0x000B80F2 (98 bytes, 25 insns)
 * Folder: sound (source: sndmultilayer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8090: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B80C9; /* je: equal / zero */

loc_000B80A8: ;
    PUSH32(esp, 0x21D);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x4243C8);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B80C6u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B80C6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B80C9: ;
    ecx = MEM32(esi);
    MEM32(edi) = ecx;
    edx = MEM32(esi + 4);
    MEM32(edi + 4) = edx;
    eax = MEM32(esi + 0x14);
    MEM32(edi + 8) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(edi + 0x18) = ecx;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B80EBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B80EB: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8100
 * Original: 0x000B8100 - 0x000B81BD (189 bytes, 60 insns)
 * Folder: sound (source: sndmultilayer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8100: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x414);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x414);
    MEM32(esp + 0x40C) = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xE (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B814D; /* je: equal / zero */

loc_000B812C: ;
    PUSH32(esp, 0x238);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x4243A4);
    eax = esp + 0x1C;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B814Au); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B814A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B814D: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x10) = ecx;
    eax = MEM32(esi + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x14) = eax;
    ebx = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000B8177; /* jle: less or equal (signed <=) */

loc_000B8163: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x000B816Au); RECOMP_ABI_CALL(0x000A3200u, sub_000A3200); /* call 0x000A3200 */

loc_000B816A: ;
    MEM32(ebx) = eax;
    eax = MEM32(edi + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B8163; /* jl: less (signed <) */

loc_000B8177: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B8195; /* jle: less or equal (signed <=) */

loc_000B8183: ;
    esi = ebp;
    PUSH32(esp, 0x000B818Au); RECOMP_ABI_CALL(0x000B81C0u, sub_000B81C0); /* call 0x000B81C0 */

loc_000B818A: ;
    eax = MEM32(edi + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B8183; /* jl: less (signed <) */

loc_000B8195: ;
    esi = MEM32(esp + 0x418);
    PUSH32(esp, 0x000B81A1u); RECOMP_ABI_CALL(0x000B8090u, sub_000B8090); /* call 0x000B8090 */

loc_000B81A1: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    PUSH32(esp, 0x000B81B6u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B81B6: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B81C0
 * Original: 0x000B81C0 - 0x000B81FA (58 bytes, 23 insns)
 * Folder: sound (between: 0x000B8100 and 0x000B8200)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B81C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B81C0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = eax + esi;
    eax = MEM32(ecx + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x14) = edi;
    MEM32(ecx + 0x18) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000B81F8; /* jle: less or equal (signed <=) */

loc_000B81D6: ;
    eax = edi + 0x10;
    /* nop */

loc_000B81E0: ;
    edi = MEM32(eax + -4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    edi = MEM32(eax + -8);
    MEM32(eax + 4) = edi;
    edi = MEM32(ecx + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B81E0; /* jl: less (signed <) */

loc_000B81F8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8200
 * Original: 0x000B8200 - 0x000B8456 (598 bytes, 176 insns)
 * Folder: sound (source: sndmultilayer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8200: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    MEM32(esp + 0x410) = eax;
    eax = MEM32(esp + 0x418);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x420);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000B8396; /* jle: less or equal (signed <=) */

loc_000B823C: ;
    /* nop */

loc_000B8240: ;
    ecx = MEM32(esp + 0x42C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B83B2; /* je: equal / zero */

loc_000B824F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B843D; /* jae: above or equal (unsigned >=) */

loc_000B825B: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B843D; /* jb: below (unsigned <) */

loc_000B8265: ;
    eax = MEM32(ecx + eax * 4);
    edi = esp + 0x18;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000B8275u); RECOMP_ABI_CALL(0x000B84A0u, sub_000B84A0); /* call 0x000B84A0 */

loc_000B8275: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x18);
    edi = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B829B; /* jle: less or equal (signed <=) */

loc_000B8284: ;
    edi = MEM32(esi + 8);

loc_000B8287: ;
    MEM32(esp + 0x10) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B83EC; /* jae: above or equal (unsigned >=) */

loc_000B8297: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B8287; /* jg: greater (signed >) */

loc_000B829B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B82BA; /* je: equal / zero */

loc_000B829F: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B82BA; /* je: equal / zero */

loc_000B82AB: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x000B82B3u); RECOMP_ABI_CALL(0x000B8540u, sub_000B8540); /* call 0x000B8540 */

loc_000B82B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    goto loc_000B82BD;

loc_000B82BA: ;
    ebx = MEM32(eax + 4);

loc_000B82BD: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B8333; /* je: equal / zero */

loc_000B82C4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B8310; /* je: equal / zero */

loc_000B82C7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B8426; /* jne: not equal / not zero */

loc_000B82CE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B82DA; /* jl: less (signed <) */

loc_000B82D2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B82F1; /* jle: less or equal (signed <=) */

loc_000B82DA: ;
    PUSH32(esp, 0x2DC);
    ecx = 0x424410;
    edx = 0x424314;
    PUSH32(esp, 0x000B82EEu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B82EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B82F1: ;
    eax = MEM32(esp + 0x430);
    MEM8(eax + 0x14) = LO8(ebx);
    ecx = 1;
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0x24);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(ebp + 8) = LO8(ebx);
    MEM32(ebp + 0x24) = eax;
    goto loc_000B8378;

loc_000B8310: ;
    eax = MEM32(esp + 0x430);
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 4) = 1;
    ecx = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B832Bu); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B832B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    goto loc_000B8378;

loc_000B8333: ;
    edi = 0xFFA00000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B8340; /* jl: less (signed <) */

loc_000B833C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B8357; /* jle: less or equal (signed <=) */

loc_000B8340: ;
    PUSH32(esp, 0x2CF);
    ecx = 0x424410;
    edx = 0x424350;
    PUSH32(esp, 0x000B8354u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8354: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8357: ;
    eax = MEM32(esp + 0x430);
    MEM32(eax + 0xC) = ebx;
    MEM32(eax) = 1;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000B8378; /* jge: greater or equal (signed >=) */

loc_000B8375: ;
    MEM32(ebp + 4) = edi;

loc_000B8378: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x424);
    ecx = MEM32(edx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B8240; /* jl: less (signed <) */

loc_000B8396: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40C);
    PUSH32(esp, 0x000B83ABu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B83AB: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B83B2: ;
    PUSH32(esp, 0x2A4);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0x28;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B83D0u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B83D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40C);
    PUSH32(esp, 0x000B83E5u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B83E5: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B83EC: ;
    PUSH32(esp, 0x2C0);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x41FFC0);
    ecx = esp + 0x28;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B840Au); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B840A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40C);
    PUSH32(esp, 0x000B841Fu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B841F: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B8426: ;
    PUSH32(esp, 0x2E3);
    ecx = 0x424410;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B843Au); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B843A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B843D: ;
    ecx = MEM32(esp + 0x41C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    PUSH32(esp, 0x000B844Fu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B844F: ;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8460
 * Original: 0x000B8460 - 0x000B8498 (56 bytes, 21 insns)
 * Folder: sound (match: xbox-demo 0x000DD200, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B8460: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8492; /* je: equal / zero */

loc_000B8469: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8492; /* je: equal / zero */

loc_000B846D: ;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(edx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esp + 8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8497; /* je: equal / zero */

loc_000B8488: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_000B8492: ;
    eax = 1;

loc_000B8497: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B84A0
 * Original: 0x000B84A0 - 0x000B853C (156 bytes, 43 insns)
 * Folder: sound (source: sndmultilayer.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B84A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B84A0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B84D7; /* jne: not equal / not zero */

loc_000B84B6: ;
    PUSH32(esp, 0x322);
    PUSH32(esp, 0x424410);
    PUSH32(esp, 0x4242FC);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B84D4u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B84D4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B84D7: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B8529; /* jbe: below or equal (unsigned <=) */

loc_000B84DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B84FA; /* jae: above or equal (unsigned >=) */

loc_000B84E3: ;
    PUSH32(esp, 0x327);
    ecx = 0x424410;
    edx = 0x4242DC;
    PUSH32(esp, 0x000B84F7u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B84F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B84FA: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 8);
    edx = eax + ecx * 8 + -8;
    ecx = MEM32(edi);
    eax = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B8521; /* jge: greater or equal (signed >=) */

loc_000B850C: ;
    MEM32(edi) = eax;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B851Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B851A: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B8521: ;
    edx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B8529; /* jle: less or equal (signed <=) */

loc_000B8527: ;
    MEM32(edi) = edx;

loc_000B8529: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B8535u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B8535: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8540
 * Original: 0x000B8540 - 0x000B85D3 (147 bytes, 65 insns)
 * Folder: sound (match: xbox-demo 0x000DD2D0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8540: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000B858D; /* jl: less (signed <) */

loc_000B854D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B858D; /* jg: greater (signed >) */

loc_000B8552: ;
    esi = MEM32(eax);
    edx = MEM32(edi);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8567u); RECOMP_ABI_CALL(0x000AFC70u, sub_000AFC70); /* call 0x000AFC70 */

loc_000B8567: ;
    ecx = MEM32(edi);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B8575u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B8575: ;
    edi = MEM32(edi + 4);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000B8584u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B8584: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000B858D: ;
    esi = MEM32(eax);
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(edi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B85A3u); RECOMP_ABI_CALL(0x000AFC70u, sub_000AFC70); /* call 0x000AFC70 */

loc_000B85A3: ;
    esi = eax;
    eax = MEM32(edi);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B85B1u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B85B1: ;
    ecx = MEM32(edi + 4);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000B85C5u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B85C5: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B85E0
 * Original: 0x000B85E0 - 0x000B8673 (147 bytes, 47 insns)
 * Folder: sound (match: xbox-demo 0x000DD370, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B85E0(void)
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

loc_000B85E0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B85F2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B85E9: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    goto loc_000B85F5;

loc_000B85F2: ;
    xmm1 = xmm2; /* movaps */

loc_000B85F5: ;
    xmm3 = XMM_SCALAR(MEMF(0x43554C)); /* movss */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    ecx = 0x5A;
    if ((_fca >= _fcb)) goto loc_000B8659; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm1.f[0]) */

loc_000B8612: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x43581C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B8622; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x43581C)) */

loc_000B861B: ;
    eax = 0x5A;
    goto loc_000B8659;

loc_000B8622: ;
    PUSH32(esp, edi);

loc_000B8623: ;
    edi = eax;
    eax = ecx + esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fca = xmm1.f[0]; _fcb = MEMF(eax * 8 + 0x43554C); /* comiss */
    if ((_fca > _fcb)) esi = eax; /* cmova */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) ecx = eax; /* cmovbe */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8623; /* jne: not equal / not zero */

loc_000B863F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B8659; /* jne: not equal / not zero */

loc_000B8644: ;
    fp_push(MEMD(0x4293D0)); /* fld double */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000B8659; /* jbe: below or equal (unsigned <=) */

loc_000B8654: ;
    eax = 1;

loc_000B8659: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax * 8 + 0x435548); /* subss */
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_000B8671; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B8668: ;
    xmm0 = XMM_SCALAR(MEMF(eax * 8 + 0x435548)); /* movss */

loc_000B8671: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B8680
 * Original: 0x000B8680 - 0x000B86DD (93 bytes, 38 insns)
 * Folder: sound (between: 0x000B85E0 and 0x000B86E0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8680: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B868Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B868Bu); } /* indirect call */
    }

loc_000B868E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8697; /* jne: not equal / not zero */

loc_000B8692: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B8697: ;
    ecx = edi;
    eax = MEM32(ecx);
    edx = esi + 0x10;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0x10 (16-bit) */
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000B86CD; /* jne: not equal / not zero */

loc_000B86B8: ;
    edx = ZX16(MEM16(edi + 6));
    MEM32(esi + 0x28) = edx;
    ecx = ZX16(MEM16(edi + 6));
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(esi + 0x40) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B86CD: ;
    ecx = ZX16(MEM16(edi + 6));
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(esi + 0x40) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B86E0
 * Original: 0x000B86E0 - 0x000B871F (63 bytes, 30 insns)
 * Folder: sound (match: xbox-demo 0x000DD500, between)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B86E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B86E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B86F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B86F0u); } /* indirect call */
    }

loc_000B86F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B870E; /* je: equal / zero */

loc_000B86F7: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B8702u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8700u); } /* indirect call */
    }

loc_000B8702: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8715; /* jne: not equal / not zero */

loc_000B8707: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B870Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B870Cu); } /* indirect call */
    }

loc_000B870E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000B8715: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B8720
 * Original: 0x000B8720 - 0x000B8747 (39 bytes, 13 insns)
 * Folder: sound (match: xbox-demo 0x000DD540, between)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B8720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8720: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8742; /* je: equal / zero */

loc_000B8727: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8742; /* jne: not equal / not zero */

loc_000B872F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x34) = 0;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000B8742: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8750
 * Original: 0x000B8750 - 0x000B8761 (17 bytes, 7 insns)
 * Folder: sound (between: 0x000B8720 and 0x000B8790)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8750: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B875E; /* je: equal / zero */

loc_000B8757: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

loc_000B875E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8770
 * Original: 0x000B8770 - 0x000B8784 (20 bytes, 8 insns)
 * Folder: sound (between: 0x000B8720 and 0x000B8790)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8770: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B877E; /* je: equal / zero */

loc_000B8777: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

loc_000B877E: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8790
 * Original: 0x000B8790 - 0x000B87BF (47 bytes, 17 insns)
 * Folder: sound (match: xbox-demo 0x000DD5B0, between)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B8790: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000B879D; /* jne: not equal / not zero */

loc_000B8798: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B879D: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B8798; /* jne: not equal / not zero */

loc_000B87A4: ;
    SET_LO16(edx, MEM16(eax + 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x14)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x14) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B8798; /* jne: not equal / not zero */

loc_000B87AE: ;
    SET_LO16(eax, MEM16(eax + 6));
    _fb = (uint32_t)(MEM16(ecx + 0x16)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO16(eax)) < (uint32_t)(MEM16(ecx + 0x16)));
    SET_LO16(eax, LO16(eax) - MEM16(ecx + 0x16));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B87C0
 * Original: 0x000B87C0 - 0x000B880E (78 bytes, 21 insns)
 * Folder: sound (match: xbox-demo 0x000DD5E0, between)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B87C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B87C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8803; /* jne: not equal / not zero */

loc_000B87C9: ;
    eax = MEM32(ecx + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x1C));
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B87F4; /* je: equal / zero */

loc_000B87DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B87F4; /* je: equal / zero */

loc_000B87E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFF (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B87F4; /* je: equal / zero */

loc_000B87E8: ;
    MEM32(ecx + 0x30) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B87F4: ;
    MEM32(ecx + 0x30) = 1;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_000B8803: ;
    MEM32(ecx + 0x30) = eax;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8810
 * Original: 0x000B8810 - 0x000B881A (10 bytes, 3 insns)
 * Folder: sound (between: 0x000B87C0 and 0x000B8820)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8810(void)
{

loc_000B8810: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x44) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8820
 * Original: 0x000B8820 - 0x000B88E4 (196 bytes, 45 insns)
 * Folder: sound (source: TPitch.cpp)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8820(void)
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

loc_000B8820: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x40C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4293E0); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429364); /* comiss */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    MEM32(esp + 0x408) = eax;
    esi = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_000B8862; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x429364)) */

loc_000B8855: ;
    xmm1 = XMM_SCALAR(MEMF(0x429538)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B8870; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B8862: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_000B8870: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429438)); /* fmul dword ptr [0x429438] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x429530)); /* fadd qword ptr [0x429530] */
    PUSH32(esp, 0x000B8885u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_000B8885: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x000B8892u); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B8892: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B88BD; /* jne: not equal / not zero */

loc_000B889C: ;
    PUSH32(esp, 0xE4);
    PUSH32(esp, 0x424480);
    PUSH32(esp, 0x424468);
    edx = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B88BAu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B88BA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B88BD: ;
    eax = MEM32(esi + 0x1C);
    eax = eax ^ 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_000B88CE; /* je: equal / zero */

loc_000B88C7: ;
    MEM32(esi + 0x30) = 0;

loc_000B88CE: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, esi);
    PUSH32(esp, 0x000B88DBu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B88DB: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B88F0
 * Original: 0x000B88F0 - 0x000B89DA (234 bytes, 79 insns)
 * Folder: sound (source: TPitch.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B88F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B88F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8907; /* je: equal / zero */

loc_000B88FD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000B8907: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = esi + 0x10;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = eax;
    eax = esp + 8;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B892Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B892Cu); } /* indirect call */
    }

loc_000B892F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B893E; /* jne: not equal / not zero */

loc_000B8933: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000B893E: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x34) = esi;
    esi = MEM32(edi + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(edi + 0xC) = eax;
    PUSH32(esp, 0x000B8955u); RECOMP_ABI_CALL(0x000AFC70u, sub_000AFC70); /* call 0x000AFC70 */

loc_000B8955: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B8976; /* jne: not equal / not zero */

loc_000B895F: ;
    PUSH32(esp, 0xFD);
    ecx = 0x424480;
    edx = 0x424458;
    PUSH32(esp, 0x000B8973u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8973: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8976: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B899E; /* je: equal / zero */

loc_000B8980: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B899E; /* je: equal / zero */

loc_000B8987: ;
    edx = eax;
    edx = edx & 0xFFFF0000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B899E; /* je: equal / zero */

loc_000B8995: ;
    MEM32(edi + 0x30) = 0;
    goto loc_000B89A5;

loc_000B899E: ;
    MEM32(edi + 0x30) = 1;

loc_000B89A5: ;
    edx = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B89AFu); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B89AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B89D0; /* jne: not equal / not zero */

loc_000B89B9: ;
    PUSH32(esp, 0x105);
    ecx = 0x424480;
    edx = 0x424468;
    PUSH32(esp, 0x000B89CDu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B89CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B89D0: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B89E0
 * Original: 0x000B89E0 - 0x000B8A5D (125 bytes, 48 insns)
 * Folder: sound (between: 0x000B88F0 and 0x000B8AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B89E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B89E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B89E8; /* jne: not equal / not zero */

loc_000B89E4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000B89E8: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B89F6; /* jne: not equal / not zero */

loc_000B89F1: ;
    PUSH32(esp, 0x000B89F6u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B89F6: ;
    PUSH32(esp, esi);
    edx = 0xB4;
    ecx = eax;
    PUSH32(esp, 0x000B8A03u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B8A03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8A3C; /* je: equal / zero */

loc_000B8A07: ;
    edx = eax;
    PUSH32(esp, 0x000B8A0Eu); RECOMP_ABI_CALL(0x000B8A90u, sub_000B8A90); /* call 0x000B8A90 */

loc_000B8A0E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8A3C; /* je: equal / zero */

loc_000B8A14: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    MEM32(esi + 0x40) = eax;
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 4) = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B8A2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8A2Au); } /* indirect call */
    }

loc_000B8A2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8A41; /* jne: not equal / not zero */

loc_000B8A31: ;
    MEM32(esi) = 0x4244D8;
    PUSH32(esp, 0x000B8A3Cu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B8A3C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B8A41: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0x000B8A4Eu); RECOMP_ABI_CALL(0x000B90B0u, sub_000B90B0); /* call 0x000B90B0 */

loc_000B8A4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8A31; /* je: equal / zero */

loc_000B8A53: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8A60
 * Original: 0x000B8A60 - 0x000B8A83 (35 bytes, 13 insns)
 * Folder: sound (between: 0x000B88F0 and 0x000B8AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8A60: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8A81; /* je: equal / zero */

loc_000B8A67: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x000B8A6Fu); RECOMP_ABI_CALL(0x000B91B0u, sub_000B91B0); /* call 0x000B91B0 */

loc_000B8A6F: ;
    MEM32(esi) = 0x4244D8;
    PUSH32(esp, 0x000B8A7Au); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B8A7A: ;
    MEM32(ebx) = 0;
    POP32(esp, edi);

loc_000B8A81: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8A90
 * Original: 0x000B8A90 - 0x000B8AEB (91 bytes, 30 insns)
 * Folder: sound (between: 0x000B88F0 and 0x000B8AF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8A90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebx = edx + 0x5C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    MEM32(edx + 0x50) = esi;
    MEM32(edx + 0x2C) = esi;
    MEM32(edx + 0x34) = esi;
    MEM32(edx + 0x38) = esi;
    MEM32(edx + 0x40) = esi;
    MEM32(edx + 0x3C) = esi;
    MEM32(edx + 0x44) = esi;
    MEM32(edx + 0x48) = esi;
    MEM32(edx + 0x4C) = esi;
    MEM32(edx + 4) = esi;
    ecx = 0x16;
    MEM32(edx) = 0x4244D8;
    MEM32(edx + 0x30) = 0xFFFFFFFFu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(edx + 0x60) = esi;
    POP32(esp, esi);
    MEM32(ebx) = 0x10000;
    MEM8(edx + 0x64) = 0x40;
    MEM32(edx + 0x80) = 1;
    eax = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8AF0
 * Original: 0x000B8AF0 - 0x000B8B1F (47 bytes, 18 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8AF0: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B8B1B; /* je: equal / zero */

loc_000B8AF6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B8B17; /* je: equal / zero */

loc_000B8AFB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B8B14; /* je: equal / zero */

loc_000B8B00: ;
    PUSH32(esp, 0x7A);
    ecx = 0x424658;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B8B11u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8B11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8B14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000B8B17: ;
    eax = ecx + 0x24;
    esp += 4; return; /* ret */

loc_000B8B1B: ;
    eax = ecx + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8B20
 * Original: 0x000B8B20 - 0x000B8C9E (382 bytes, 128 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8B20: ;
    _fb = (uint32_t)(0x414) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x414;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x420);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x418) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B8B77; /* jne: not equal / not zero */

loc_000B8B41: ;
    PUSH32(esp, 0x85);
    PUSH32(esp, 0x424658);
    PUSH32(esp, 0x424648);
    eax = esp + 0x24;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8B5Fu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B8B5F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x410);
    PUSH32(esp, 0x000B8B70u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B8B70: ;
    _fb = (uint32_t)(0x414) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x414;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B8B77: ;
    eax = MEM32(edi + 0x40);
    ecx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    eax = MEM32(edi + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8C4E; /* je: equal / zero */

loc_000B8B8A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B8B8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8B8Cu); } /* indirect call */
    }

loc_000B8B8F: ;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8BCF; /* je: equal / zero */

loc_000B8B94: ;
    _fa = (uint32_t)(MEM32(edi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x4C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8BB3; /* je: equal / zero */

loc_000B8B99: ;
    ecx = MEM32(edi + 0x34);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000B8BA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8BA3u); } /* indirect call */
    }

loc_000B8BA6: ;
    ecx = MEM32(edi + 0x38);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000B8BB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8BB0u); } /* indirect call */
    }

loc_000B8BB3: ;
    ecx = MEM32(edi + 0x34);
    edx = MEM32(edi + 0x38);
    eax = MEM32(ecx + 0x68);
    esi = edi + 0x34;
    MEM32(edx + 0x68) = eax;
    PUSH32(esp, 0x000B8BC7u); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B8BC7: ;
    ecx = MEM32(edi + 0x38);
    MEM32(esi) = ecx;
    MEM32(edi + 0x38) = ebx;

loc_000B8BCF: ;
    eax = MEM32(edi + 0x40);
    edx = MEM32(edi + 0x44);
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 4) = eax;
    MEM32(edi + 0x40) = edx;
    MEM32(edi + 0x44) = ebx;
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B8C0E; /* je: equal / zero */

loc_000B8BE7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B8C09; /* je: equal / zero */

loc_000B8BEC: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B8C05; /* je: equal / zero */

loc_000B8BF1: ;
    PUSH32(esp, 0x7A);
    ecx = 0x424658;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B8C02u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8C02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8C05: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B8C11;

loc_000B8C09: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B8C11;

loc_000B8C0E: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8C11: ;
    esi = MEM32(edi + 0x3C);
    ecx = MEM32(edi + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000B8C1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8C1Bu); } /* indirect call */
    }

loc_000B8C1E: ;
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000B8C26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8C23u); } /* indirect call */
    }

loc_000B8C26: ;
    ecx = MEM32(edi + 0x34);
    edx = MEM32(edi + 0x2C);
    eax = MEM32(ecx);
    esi = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000B8C33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8C30u); } /* indirect call */
    }

loc_000B8C33: ;
    ecx = MEM32(edi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi); PUSH32(esp, 0x000B8C39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8C37u); } /* indirect call */
    }

loc_000B8C39: ;
    ecx = MEM32(edi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(edi + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8C85; /* je: equal / zero */

loc_000B8C43: ;
    edx = MEM32(ecx);
    eax = edi + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B8C4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8C49u); } /* indirect call */
    }

loc_000B8C4C: ;
    goto loc_000B8C85;

loc_000B8C4E: ;
    MEM32(edi + 0x44) = ebx;
    MEM32(edi + 0x40) = ebx;
    MEM32(edi + 0x3C) = ebx;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B8C5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8C5Cu); } /* indirect call */
    }

loc_000B8C5F: ;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8C7B; /* je: equal / zero */

loc_000B8C64: ;
    PUSH32(esp, 0xC2);
    ecx = 0x424658;
    edx = 0x424620;
    PUSH32(esp, 0x000B8C78u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8C78: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8C7B: ;
    esi = edi + 0x34;
    PUSH32(esp, 0x000B8C83u); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B8C83: ;
    MEM32(esi) = ebx;

loc_000B8C85: ;
    ecx = MEM32(esp + 0x41C);
    POP32(esp, esi);
    MEM32(edi + 0x48) = ebx;
    POP32(esp, edi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B8C97u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B8C97: ;
    _fb = (uint32_t)(0x414) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x414;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8CA0
 * Original: 0x000B8CA0 - 0x000B8D1C (124 bytes, 48 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8D19; /* je: equal / zero */

loc_000B8CAC: ;
    _fa = (uint32_t)(MEM32(edi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x4C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8CC8; /* jne: not equal / not zero */

loc_000B8CB1: ;
    PUSH32(esp, 0xD2);
    ecx = 0x424658;
    edx = 0x424608;
    PUSH32(esp, 0x000B8CC5u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8CC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8CC8: ;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(edi + 0x30);
    PUSH32(esp, esi);
    MEM32(edi + 0x4C) = ebx;
    MEM32(edi + 0x48) = ebx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B8CDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8CD8u); } /* indirect call */
    }

loc_000B8CDB: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = edi + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8CEC; /* je: equal / zero */

loc_000B8CE5: ;
    PUSH32(esp, 0x000B8CEAu); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B8CEA: ;
    MEM32(esi) = ebx;

loc_000B8CEC: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = edi + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8CFD; /* je: equal / zero */

loc_000B8CF6: ;
    PUSH32(esp, 0x000B8CFBu); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B8CFB: ;
    MEM32(esi) = ebx;

loc_000B8CFD: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi + 0x3C) = ebx;
    MEM32(edi + 0x40) = ebx;
    MEM32(edi + 0x44) = ebx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8D19; /* je: equal / zero */

loc_000B8D0E: ;
    ecx = MEM32(edi + 0x58);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_000B8D19: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8D20
 * Original: 0x000B8D20 - 0x000B8E5C (316 bytes, 96 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8D20: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x404) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B8D73; /* jne: not equal / not zero */

loc_000B8D3E: ;
    PUSH32(esp, 0xF1);
    PUSH32(esp, 0x424658);
    PUSH32(esp, 0x424648);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8D5Cu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B8D5C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B8D6Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B8D6C: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B8D73: ;
    ecx = MEM32(ebx + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E1C; /* je: equal / zero */

loc_000B8D7F: ;
    edx = MEM32(ebx + 0x3C);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8DEF; /* je: equal / zero */

loc_000B8D8A: ;
    eax = MEM32(ebx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8DEF; /* jne: not equal / not zero */

loc_000B8D91: ;
    eax = MEM32(ebx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ebx + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8DB2; /* je: equal / zero */

loc_000B8D9B: ;
    PUSH32(esp, 0xF9);
    ecx = 0x424658;
    edx = 0x424620;
    PUSH32(esp, 0x000B8DAFu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8DAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8DB2: ;
    ecx = MEM32(ebx + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = ebx + 0x5C;
    ebp = ebx + 8;
    PUSH32(esp, 0x000B8DC3u); RECOMP_ABI_CALL(0x000B8AF0u, sub_000B8AF0); /* call 0x000B8AF0 */

loc_000B8DC3: ;
    ecx = edi;
    edx = ebp;
    edi = eax;
    PUSH32(esp, 0x000B8DCEu); RECOMP_ABI_CALL(0x000BBF40u, sub_000BBF40); /* call 0x000BBF40 */

loc_000B8DCE: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_000B8E1C; /* jne: not equal / not zero */

loc_000B8DD9: ;
    PUSH32(esp, 0xFB);
    ecx = 0x424658;
    edx = 0x4245E0;
    PUSH32(esp, 0x000B8DEDu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8DED: ;
    goto loc_000B8E19;

loc_000B8DEF: ;
    edx = MEM32(ebx + 0x34);
    esi = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B8DFAu); RECOMP_ABI_CALL(0x000B8AF0u, sub_000B8AF0); /* call 0x000B8AF0 */

loc_000B8DFA: ;
    ecx = MEM32(ebx + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x40); PUSH32(esp, 0x000B8E01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8DFEu); } /* indirect call */
    }

loc_000B8E01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8E1C; /* jne: not equal / not zero */

loc_000B8E05: ;
    PUSH32(esp, 0x103);
    ecx = 0x424658;
    edx = 0x4245D8;
    PUSH32(esp, 0x000B8E19u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8E19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8E1C: ;
    ecx = MEM32(0x758A84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8E44; /* je: equal / zero */

loc_000B8E2B: ;
    eax = MEM32(ebx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8E44; /* jne: not equal / not zero */

loc_000B8E32: ;
    eax = MEM32(ebx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x7596D0;
    MEM32(ebx + 0x48) = esi;
    PUSH32(esp, 0x000B8E44u); RECOMP_ABI_CALL(0x000B5A10u, sub_000B5A10); /* call 0x000B5A10 */

loc_000B8E44: ;
    ecx = MEM32(esp + 0x408);
    MEM32(ebx + 0x48) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B8E55u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B8E55: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8E60
 * Original: 0x000B8E60 - 0x000B8EDD (125 bytes, 30 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8E60: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esp + 0x408);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8EB1; /* jne: not equal / not zero */

loc_000B8E7D: ;
    PUSH32(esp, 0x116);
    PUSH32(esp, 0x424658);
    PUSH32(esp, 0x424648);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8E9Bu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B8E9B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B8EAAu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B8EAA: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B8EB1: ;
    ecx = MEM32(0x758A80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8ECA; /* je: equal / zero */

loc_000B8EBB: ;
    eax = MEM32(eax + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x7596D0;
    PUSH32(esp, 0x000B8ECAu); RECOMP_ABI_CALL(0x000B5A10u, sub_000B5A10); /* call 0x000B5A10 */

loc_000B8ECA: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B8ED6u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B8ED6: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B8EE0
 * Original: 0x000B8EE0 - 0x000B90AA (458 bytes, 154 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8EE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebx + 0x3C);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B8FCD; /* je: equal / zero */

loc_000B8EF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8F13; /* jne: not equal / not zero */

loc_000B8EFC: ;
    PUSH32(esp, 0x137);
    ecx = 0x424658;
    edx = 0x4245CC;
    PUSH32(esp, 0x000B8F10u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8F10: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8F13: ;
    eax = MEM32(ebx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8F29; /* je: equal / zero */

loc_000B8F1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x44) = ebp;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B8F29: ;
    eax = MEM32(ebx + 0x3C);
    MEM32(ebx + 0x40) = ebp;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8F8E; /* je: equal / zero */

loc_000B8F37: ;
    eax = MEM32(ebx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ebx + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8F58; /* je: equal / zero */

loc_000B8F41: ;
    PUSH32(esp, 0x141);
    ecx = 0x424658;
    edx = 0x4245B0;
    PUSH32(esp, 0x000B8F55u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8F55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8F58: ;
    ecx = MEM32(ebx + 0x40);
    edi = ebx + 0x5C;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B8F67u); RECOMP_ABI_CALL(0x000B8AF0u, sub_000B8AF0); /* call 0x000B8AF0 */

loc_000B8F67: ;
    ecx = edi;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0x000B8F72u); RECOMP_ABI_CALL(0x000BBF40u, sub_000BBF40); /* call 0x000BBF40 */

loc_000B8F72: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B909E; /* jne: not equal / not zero */

loc_000B8F7F: ;
    PUSH32(esp, 0x143);
    edx = 0x424594;
    goto loc_000B9091;

loc_000B8F8E: ;
    edx = MEM32(ebx + 0x34);
    esi = MEM32(edx);
    PUSH32(esp, ebp);
    ecx = ebp;
    PUSH32(esp, 0x000B8F9Bu); RECOMP_ABI_CALL(0x000B8AF0u, sub_000B8AF0); /* call 0x000B8AF0 */

loc_000B8F9B: ;
    ecx = MEM32(ebx + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x40); PUSH32(esp, 0x000B8FA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8F9Fu); } /* indirect call */
    }

loc_000B8FA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B909E; /* jne: not equal / not zero */

loc_000B8FAA: ;
    PUSH32(esp, 0x14B);
    ecx = 0x424658;
    edx = 0x4245D8;
    PUSH32(esp, 0x000B8FBEu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B8FBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B8FCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8FEE; /* je: equal / zero */

loc_000B8FD1: ;
    eax = MEM32(ebx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x40) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000B909E; /* je: equal / zero */

loc_000B8FDF: ;
    PUSH32(esp, 0x155);
    edx = 0x424580;
    goto loc_000B9091;

loc_000B8FEE: ;
    eax = MEM32(ebp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B901B; /* je: equal / zero */

loc_000B8FF4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B9016; /* je: equal / zero */

loc_000B8FF9: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B9012; /* je: equal / zero */

loc_000B8FFE: ;
    PUSH32(esp, 0x7A);
    ecx = 0x424658;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B900Fu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B900F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9012: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B901E;

loc_000B9016: ;
    edi = ebp + 0x24;
    goto loc_000B901E;

loc_000B901B: ;
    edi = ebp + 0x34;

loc_000B901E: ;
    esi = ebx + 0x34;
    ecx = ebx + 0x5C;
    PUSH32(esp, ebp);
    edx = ebx + 8;
    PUSH32(esp, 0x000B902Du); RECOMP_ABI_CALL(0x000BBF40u, sub_000BBF40); /* call 0x000BBF40 */

loc_000B902D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9053; /* jne: not equal / not zero */

loc_000B9034: ;
    ecx = MEM32(esi);
    eax = MEM32(ebx + 0x2C);
    edx = MEM32(ecx);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B9040u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B903Du); } /* indirect call */
    }

loc_000B9040: ;
    ecx = MEM32(ebx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi); PUSH32(esp, 0x000B9046u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9044u); } /* indirect call */
    }

loc_000B9046: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebx + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B905C; /* jne: not equal / not zero */

loc_000B904E: ;
    PUSH32(esp, 0x000B9053u); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B9053: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B905C: ;
    eax = MEM32(ebx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x3C) = ebp;
    MEM32(ebx + 4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9080; /* je: equal / zero */

loc_000B9069: ;
    PUSH32(esp, 0x164);
    ecx = 0x424658;
    edx = 0x424580;
    PUSH32(esp, 0x000B907Du); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B907D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9080: ;
    eax = MEM32(ebx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B909E; /* je: equal / zero */

loc_000B9087: ;
    PUSH32(esp, 0x165);
    edx = 0x42456C;

loc_000B9091: ;
    ecx = 0x424658;
    PUSH32(esp, 0x000B909Bu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B909B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B909E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9000
 * Original: 0x000B9000 - 0x000B90AA (170 bytes, 59 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9000: ;
    ecx = 0x424658;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B900Fu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B900F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B901E;

    edi = ebp + 0x24;
    goto loc_000B901E;

    edi = ebp + 0x34;

loc_000B901E: ;
    esi = ebx + 0x34;
    ecx = ebx + 0x5C;
    PUSH32(esp, ebp);
    edx = ebx + 8;
    PUSH32(esp, 0x000B902Du); RECOMP_ABI_CALL(0x000BBF40u, sub_000BBF40); /* call 0x000BBF40 */

loc_000B902D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9053; /* jne: not equal / not zero */

loc_000B9034: ;
    ecx = MEM32(esi);
    eax = MEM32(ebx + 0x2C);
    edx = MEM32(ecx);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B9040u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B903Du); } /* indirect call */
    }

loc_000B9040: ;
    ecx = MEM32(ebx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi); PUSH32(esp, 0x000B9046u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9044u); } /* indirect call */
    }

loc_000B9046: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebx + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B905C; /* jne: not equal / not zero */

loc_000B904E: ;
    PUSH32(esp, 0x000B9053u); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B9053: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000B905C: ;
    eax = MEM32(ebx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x3C) = ebp;
    MEM32(ebx + 4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9080; /* je: equal / zero */

loc_000B9069: ;
    PUSH32(esp, 0x164);
    ecx = 0x424658;
    edx = 0x424580;
    PUSH32(esp, 0x000B907Du); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B907D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9080: ;
    eax = MEM32(ebx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B909E; /* je: equal / zero */

loc_000B9087: ;
    PUSH32(esp, 0x165);
    edx = 0x42456C;
    ecx = 0x424658;
    PUSH32(esp, 0x000B909Bu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B909B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B909E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B90B0
 * Original: 0x000B90B0 - 0x000B91B0 (256 bytes, 92 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B90B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B90B0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 8;
    ebp = ebx + 0x2C;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B90C0u); RECOMP_ABI_CALL(0x000BDDB0u, sub_000BDDB0); /* call 0x000BDDB0 */

loc_000B90C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9167; /* jne: not equal / not zero */

loc_000B90CB: ;
    eax = MEM32(ebp);
    MEM32(eax + 0x2C) = 0xB8D20;
    MEM32(eax + 0x3C) = ebx;
    eax = MEM32(ebp);
    MEM32(eax + 0x24) = 0xB8B20;
    MEM32(eax + 0x34) = ebx;
    eax = MEM32(ebp);
    MEM32(eax + 0x28) = 0xB8CA0;
    MEM32(eax + 0x38) = ebx;
    eax = MEM32(ebp);
    MEM32(eax + 0x30) = 0xB8E60;
    MEM32(eax + 0x40) = ebx;
    eax = MEM32(ebx + 0x3C);
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B912F; /* je: equal / zero */

loc_000B9108: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B912A; /* je: equal / zero */

loc_000B910D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B9126; /* je: equal / zero */

loc_000B9112: ;
    PUSH32(esp, 0x7A);
    ecx = 0x424658;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B9123u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B9123: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9126: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B9132;

loc_000B912A: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B9132;

loc_000B912F: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9132: ;
    ecx = MEM32(ebx + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = edi;
    esi = ebx + 0x34;
    edi = eax;
    PUSH32(esp, 0x000B9146u); RECOMP_ABI_CALL(0x000BBF40u, sub_000BBF40); /* call 0x000BBF40 */

loc_000B9146: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9167; /* jne: not equal / not zero */

loc_000B914D: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp);
    eax = MEM32(ecx);
    edi = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000B9159u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9156u); } /* indirect call */
    }

loc_000B9159: ;
    ecx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi); PUSH32(esp, 0x000B915Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B915Du); } /* indirect call */
    }

loc_000B915F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebx + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B9199; /* jne: not equal / not zero */

loc_000B9167: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9182; /* je: equal / zero */

loc_000B916E: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9182; /* je: equal / zero */

loc_000B9174: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000B917Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9178u); } /* indirect call */
    }

loc_000B917B: ;
    MEM32(ebp) = 0;

loc_000B9182: ;
    eax = MEM32(ebx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ebx + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9191; /* je: equal / zero */

loc_000B918C: ;
    PUSH32(esp, 0x000B9191u); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B9191: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000B9199: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000B91A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B91A2u); } /* indirect call */
    }

loc_000B91A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B91B0
 * Original: 0x000B91B0 - 0x000B91EC (60 bytes, 23 insns)
 * Folder: sound (between: 0x000B90B0 and 0x000B91F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B91B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B91B0: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = edi + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_000B91C0; /* je: equal / zero */

loc_000B91BB: ;
    PUSH32(esp, 0x000B91C0u); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B91C0: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_000B91CF; /* je: equal / zero */

loc_000B91CA: ;
    PUSH32(esp, 0x000B91CFu); RECOMP_ABI_CALL(0x000BBFA0u, sub_000BBFA0); /* call 0x000BBFA0 */

loc_000B91CF: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B91EB; /* je: equal / zero */

loc_000B91D7: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B91EB; /* je: equal / zero */

loc_000B91DD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000B91E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B91E1u); } /* indirect call */
    }

loc_000B91E4: ;
    MEM32(edi + 0x2C) = 0;

loc_000B91EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B91F0
 * Original: 0x000B91F0 - 0x000B9249 (89 bytes, 24 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B91F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B91F0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B922D; /* jne: not equal / not zero */

loc_000B920C: ;
    PUSH32(esp, 0x19A);
    PUSH32(esp, 0x424658);
    PUSH32(esp, 0x42455C);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B922Au); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B922A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B922D: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000B9235u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B9232u); } /* indirect call */
    }

loc_000B9235: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, esi);
    PUSH32(esp, 0x000B9242u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9242: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9250
 * Original: 0x000B9250 - 0x000B92B3 (99 bytes, 26 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9250: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B928D; /* jne: not equal / not zero */

loc_000B926C: ;
    PUSH32(esp, 0x1A1);
    PUSH32(esp, 0x424658);
    PUSH32(esp, 0x42454C);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B928Au); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B928A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B928D: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esp + 0x40C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B929Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B929Au); } /* indirect call */
    }

loc_000B929D: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, esi);
    PUSH32(esp, 0x000B92AAu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B92AA: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B92C0
 * Original: 0x000B92C0 - 0x000B92E5 (37 bytes, 11 insns)
 * Folder: sound (match: xbox-demo 0x000DDF40, between)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B92C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B92C0: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B92CE; /* je: equal / zero */

loc_000B92C7: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

loc_000B92CE: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B92F0
 * Original: 0x000B92F0 - 0x000B93DC (236 bytes, 63 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B92F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B92F0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    MEM32(esp + 0x404) = eax;
    _fa = (uint32_t)(MEM32(esp + 0x414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x414), 0xFFA00000u (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9335; /* je: equal / zero */

loc_000B9314: ;
    PUSH32(esp, 0x1B5);
    PUSH32(esp, 0x424658);
    PUSH32(esp, 0x42452C);
    eax = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9332u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9332: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9335: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B935D; /* jne: not equal / not zero */

loc_000B933C: ;
    PUSH32(esp, 0x1B6);
    PUSH32(esp, 0x424658);
    PUSH32(esp, 0x42455C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B935Au); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B935A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B935D: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 0x420);
    eax = MEM32(esp + 0x424);
    edi = MEM32(esp + 0x418);
    ebx = MEM32(esp + 0x414);
    MEM32(esi + 0x4C) = 1;
    MEM32(esi + 0x54) = edx;
    MEM32(esi + 0x58) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B93A0; /* je: equal / zero */

loc_000B938D: ;
    eax = MEM32(esp + 0x41C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B93A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B939Du); } /* indirect call */
    }

loc_000B93A0: ;
    esi = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esi + 0x44) = 1;
    MEM32(esi + 0x50) = 0;
    PUSH32(esp, 0x000B93BBu); RECOMP_ABI_CALL(0x000AFAB0u, sub_000AFAB0); /* call 0x000AFAB0 */

loc_000B93BB: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x4C) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x48) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B93D3u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B93D3: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B93E0
 * Original: 0x000B93E0 - 0x000B9425 (69 bytes, 14 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B93E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B93E0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x1C6);
    PUSH32(esp, 0x424658);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9410u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9410: ;
    ecx = MEM32(esp + 0x414);
    PUSH32(esp, 0x000B941Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B941C: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9430
 * Original: 0x000B9430 - 0x000B9458 (40 bytes, 17 insns)
 * Folder: sound (between: 0x000B93E0 and 0x000B9490)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9430: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9441; /* je: equal / zero */

loc_000B943A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B9441u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B943Eu); } /* indirect call */
    }

loc_000B9441: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B9457; /* je: equal / zero */

loc_000B9449: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9457; /* jne: not equal / not zero */

loc_000B9450: ;
    MEM32(eax + 8) = 1;

loc_000B9457: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9460
 * Original: 0x000B9460 - 0x000B9487 (39 bytes, 16 insns)
 * Folder: sound (between: 0x000B93E0 and 0x000B9490)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9460: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9471; /* je: equal / zero */

loc_000B946A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000B9471u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B946Eu); } /* indirect call */
    }

loc_000B9471: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B9486; /* je: equal / zero */

loc_000B9479: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9486; /* jne: not equal / not zero */

loc_000B947F: ;
    MEM32(eax + 8) = 0;

loc_000B9486: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9490
 * Original: 0x000B9490 - 0x000B94DF (79 bytes, 19 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9490: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B94CC; /* jne: not equal / not zero */

loc_000B94A9: ;
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x424658);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B94C7u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B94C7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B94CC: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B94D8u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B94D8: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B94E0
 * Original: 0x000B94E0 - 0x000B9554 (116 bytes, 35 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B94E0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x410);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x408) = eax;
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000B9522; /* jne: not equal / not zero */

loc_000B9501: ;
    PUSH32(esp, 0x1EE);
    PUSH32(esp, 0x424658);
    PUSH32(esp, 0x424518);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B951Fu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B951F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9522: ;
    PUSH32(esp, edi);
    eax = ebx + 0x5C;
    ecx = 0x16;
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
    ecx = MEM32(ebx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B953D; /* je: equal / zero */

loc_000B9537: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B953Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B953Au); } /* indirect call */
    }

loc_000B953D: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B954Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B954B: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9560
 * Original: 0x000B9560 - 0x000B95AF (79 bytes, 39 insns)
 * Folder: sound (match: xbox-demo 0x000DE100, between)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9560: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_000B958D; /* je: equal / zero */

loc_000B9579: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000B958Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B958Au); } /* indirect call */
    }

loc_000B958D: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B95A8; /* je: equal / zero */

loc_000B9594: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000B95A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B95A5u); } /* indirect call */
    }

loc_000B95A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B95B0
 * Original: 0x000B95B0 - 0x000B95FF (79 bytes, 39 insns)
 * Folder: sound (match: xbox-demo 0x000DE150, between)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B95B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B95B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_000B95DD; /* je: equal / zero */

loc_000B95C9: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000B95DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B95DAu); } /* indirect call */
    }

loc_000B95DD: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B95F8; /* je: equal / zero */

loc_000B95E4: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000B95F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B95F5u); } /* indirect call */
    }

loc_000B95F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B9600
 * Original: 0x000B9600 - 0x000B9645 (69 bytes, 14 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9600: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x205);
    PUSH32(esp, 0x424658);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9630u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9630: ;
    ecx = MEM32(esp + 0x414);
    PUSH32(esp, 0x000B963Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B963C: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9650
 * Original: 0x000B9650 - 0x000B9695 (69 bytes, 14 insns)
 * Folder: sound (source: ThemePath.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9650: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, 0x20B);
    PUSH32(esp, 0x424658);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9680u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9680: ;
    ecx = MEM32(esp + 0x414);
    PUSH32(esp, 0x000B968Cu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B968C: ;
    _fb = (uint32_t)(0x418) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x418;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B96A0
 * Original: 0x000B96A0 - 0x000B988C (492 bytes, 136 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B96A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B96A0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40C);
    if (CMP_EQ(_fa, _fb)) goto loc_000B96DD; /* je: equal / zero */

loc_000B96BF: ;
    PUSH32(esp, 0x6E);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x424968);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B96DAu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B96DA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B96DD: ;
    eax = MEM32(esp + 0x414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9706; /* jne: not equal / not zero */

loc_000B96E8: ;
    PUSH32(esp, 0x6F);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x424958);
    ecx = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B9703u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9703: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9706: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B972A; /* jne: not equal / not zero */

loc_000B970A: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x424940);
    edx = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B9725u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9725: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B972F;

loc_000B972A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9759; /* je: equal / zero */

loc_000B972F: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B973B; /* je: equal / zero */

loc_000B9736: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B9759; /* jae: above or equal (unsigned >=) */

loc_000B973B: ;
    PUSH32(esp, 0x71);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4248E0);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9756u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9756: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9759: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9856; /* je: equal / zero */

loc_000B9763: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9856; /* je: equal / zero */

loc_000B976E: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9856; /* je: equal / zero */

loc_000B9779: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9856; /* je: equal / zero */

loc_000B9784: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9856; /* je: equal / zero */

loc_000B978F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9856; /* je: equal / zero */

loc_000B979A: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9856; /* je: equal / zero */

loc_000B97A5: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B97BA; /* je: equal / zero */

loc_000B97AD: ;
    PUSH32(esp, 0x000B97B2u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B97B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0x20) = eax;

loc_000B97BA: ;
    ecx = ebx * 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B97C7u); RECOMP_ABI_CALL(0x000D7510u, sub_000D7510); /* call 0x000D7510 */

loc_000B97C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x1C) = eax;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000B9801; /* jne: not equal / not zero */

loc_000B97D2: ;
    PUSH32(esp, 0x8F);
    ecx = 0x424978;
    edx = 0x41FFC0;
    PUSH32(esp, 0x000B97E6u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B97E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B97F8u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B97F8: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9801: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B9825; /* jbe: below or equal (unsigned <=) */

loc_000B9807: ;
    goto loc_000B9810;

    /* nop */

loc_000B9810: ;
    ecx = MEM32(esp + 0x414);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(edi + 0x1C);
    MEM32(edx + eax * 8) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9810; /* jb: below (unsigned <) */

loc_000B9825: ;
    edx = MEM32(esp + 0x410);
    MEM32(edi + 0x18) = ebp;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi) = 1;
    MEM32(edi + 0x14) = edx;
    eax = 1;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B984Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B984D: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9856: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9871u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9871: ;
    ecx = MEM32(esp + 0x418);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    PUSH32(esp, 0x000B9883u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9883: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B9890
 * Original: 0x000B9890 - 0x000B9A4C (444 bytes, 117 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9890: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B98C8; /* jne: not equal / not zero */

loc_000B98A7: ;
    PUSH32(esp, 0xBD);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4248CC);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B98C5u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B98C5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B98C8: ;
    eax = MEM32(esp + 0x40C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B98F4; /* jne: not equal / not zero */

loc_000B98D3: ;
    PUSH32(esp, 0xBE);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x424958);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B98F1u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B98F1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B98F4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B991B; /* jne: not equal / not zero */

loc_000B98F8: ;
    PUSH32(esp, 0xBF);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x424940);
    edx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B9916u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9916: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B9920;

loc_000B991B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9950; /* je: equal / zero */

loc_000B9920: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B992F; /* je: equal / zero */

loc_000B992A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B9950; /* jae: above or equal (unsigned >=) */

loc_000B992F: ;
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x424868);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B994Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B994D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9950: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B998F; /* jle: less or equal (signed <=) */

loc_000B9957: ;
    PUSH32(esp, 0xC4);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x41FFC0);
    edx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B9975u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9975: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B9986u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9986: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000B998F: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B99AA; /* je: equal / zero */

loc_000B9997: ;
    PUSH32(esp, 0x000B999Cu); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000B999C: ;
    MEM32(edi + 0x1C) = 0;
    MEM32(edi + 0x20) = 0;

loc_000B99AA: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000B99B9; /* jne: not equal / not zero */

loc_000B99B4: ;
    PUSH32(esp, 0x000B99B9u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B99B9: ;
    edx = ebx * 8;
    ecx = eax;
    PUSH32(esp, 0x000B99C7u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B99C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000B9A06; /* jne: not equal / not zero */

loc_000B99CE: ;
    PUSH32(esp, 0xD4);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x41FFC0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B99ECu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B99EC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B99FDu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B99FD: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000B9A06: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B9A25; /* jbe: below or equal (unsigned <=) */

loc_000B9A0C: ;
    /* nop */

loc_000B9A10: ;
    edx = MEM32(esp + 0x40C);
    edx = MEM32(edx + eax * 4);
    ecx = MEM32(edi + 0x1C);
    MEM32(ecx + eax * 8) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9A10; /* jb: below (unsigned <) */

loc_000B9A25: ;
    eax = MEM32(esp + 0x408);
    ecx = MEM32(esp + 0x400);
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 0x20) = ebx;
    eax = 1;
    PUSH32(esp, 0x000B9A43u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9A43: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B9A50
 * Original: 0x000B9A50 - 0x000B9C3E (494 bytes, 146 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9A50: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x410);
    MEM32(esp + 0x408) = eax;
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9A96; /* jne: not equal / not zero */

loc_000B9A75: ;
    PUSH32(esp, 0xF6);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4248CC);
    eax = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9A93u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9A93: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9A96: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9AA4; /* jne: not equal / not zero */

loc_000B9A9F: ;
    PUSH32(esp, 0x000B9AA4u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000B9AA4: ;
    edx = 0x88;
    ecx = eax;
    PUSH32(esp, 0x000B9AB0u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000B9AB0: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9AF2; /* jne: not equal / not zero */

loc_000B9AB6: ;
    PUSH32(esp, 0xFE);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x41FFC0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B9AD4u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9AD4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B9AE9u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9AE9: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_000B9AF2: ;
    MEM32(ebx + 0x80) = edi;
    MEM32(ebx + 0x84) = edi;
    MEM32(ebx + 0x7C) = edi;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ebp + 4;
    MEM32(ebx + 0x80) = edx;
    MEM32(ebx + 0x84) = esi;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9B1C; /* jne: not equal / not zero */

loc_000B9B18: ;
    MEM32(esi) = ebx;
    goto loc_000B9B22;

loc_000B9B1C: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x7C) = ebx;

loc_000B9B22: ;
    ecx = MEM32(ebp + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ecx;
    MEM32(ebx + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B9B38u); RECOMP_ABI_CALL(0x000B1C10u, sub_000B1C10); /* call 0x000B1C10 */

loc_000B9B38: ;
    edi = MEM32(esp + 0x420);
    MEM32(ebx) = eax;
    PUSH32(esp, 0x000B9B46u); RECOMP_ABI_CALL(0x000B3150u, sub_000B3150); /* call 0x000B3150 */

loc_000B9B46: ;
    MEM32(ebx + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x10000000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B9B76; /* jl: less (signed <) */

loc_000B9B52: ;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9B6F; /* je: equal / zero */

loc_000B9B5A: ;
    edx = 0xF8000000u;
    /* nop */

loc_000B9B60: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + edx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_000B9B68; /* jns: not sign (positive) */

loc_000B9B65: ;
    MEM32(eax + 0x10) = ecx;

loc_000B9B68: ;
    eax = MEM32(eax + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9B60; /* jne: not equal / not zero */

loc_000B9B6F: ;
    MEM32(ebp + 0x10) = 0x8000000;

loc_000B9B76: ;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(esp + 0x420);
    MEM32(ebx + 0x10) = ecx;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x424);
    MEM32(ebx + 0xC) = edx;
    edx = MEM32(esp + 0x41C);
    MEM32(ebx + 0x14) = edx;
    edi = ebx + 0x18;
    ecx = 0x16;
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
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x74) = esi;
    MEM32(ebx + 0x78) = esi;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9BBA; /* jne: not equal / not zero */

loc_000B9BB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B9BC0;

loc_000B9BBA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000B9BBDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000B9BBBu); } /* indirect call */
    }

loc_000B9BBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9BC0: ;
    MEM32(ebx + 0x70) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B9BDF; /* jb: below (unsigned <) */

loc_000B9BC8: ;
    PUSH32(esp, 0x11C);
    ecx = 0x424978;
    edx = 0x42483C;
    PUSH32(esp, 0x000B9BDCu); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B9BDC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9BDF: ;
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0x000B9BE7u); RECOMP_ABI_CALL(0x000BA360u, sub_000BA360); /* call 0x000BA360 */

loc_000B9BE7: ;
    edi = ebp;
    PUSH32(esp, 0x000B9BEEu); RECOMP_ABI_CALL(0x000BA550u, sub_000BA550); /* call 0x000BA550 */

loc_000B9BEE: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9C10; /* jne: not equal / not zero */

loc_000B9BF4: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B9BFDu); RECOMP_ABI_CALL(0x000B1B70u, sub_000B1B70); /* call 0x000B1B70 */

loc_000B9BFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9C10; /* jne: not equal / not zero */

loc_000B9C04: ;
    _fa = (uint32_t)(MEM32(ebx + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x78), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9C32; /* jne: not equal / not zero */

loc_000B9C09: ;
    MEM32(ebx + 0x78) = 1;

loc_000B9C10: ;
    edi = ebp;
    PUSH32(esp, 0x000B9C17u); RECOMP_ABI_CALL(0x000BA070u, sub_000BA070); /* call 0x000BA070 */

loc_000B9C17: ;
    eax = ebx;

loc_000B9C19: ;
    ecx = MEM32(esp + 0x410);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B9C29u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9C29: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_000B9C32: ;
    ecx = ebx;
    PUSH32(esp, 0x000B9C39u); RECOMP_ABI_CALL(0x000BA190u, sub_000BA190); /* call 0x000BA190 */

loc_000B9C39: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B9C19;

}

/**
 * sub_000B9C40
 * Original: 0x000B9C40 - 0x000B9D6E (302 bytes, 87 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9C40: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x410);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x410);
    MEM32(esp + 0x408) = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9C88; /* jne: not equal / not zero */

loc_000B9C67: ;
    PUSH32(esp, 0x14D);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4248CC);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9C85u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9C85: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9C88: ;
    eax = MEM32(ebx + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9CCC; /* je: equal / zero */

loc_000B9C8F: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9CAC; /* je: equal / zero */

loc_000B9C95: ;
    PUSH32(esp, 0x153);
    ecx = 0x424978;
    edx = 0x424818;
    PUSH32(esp, 0x000B9CA9u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B9CA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9CAC: ;
    ecx = ebx;
    PUSH32(esp, 0x000B9CB3u); RECOMP_ABI_CALL(0x000BA190u, sub_000BA190); /* call 0x000BA190 */

loc_000B9CB3: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B9CC3u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9CC3: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000B9CCC: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B9CF5; /* jne: not equal / not zero */

loc_000B9CD5: ;
    edi = ebx + 0x18;
    ecx = 0x16;
    esi = ebp;
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
    edi = ebp;
    PUSH32(esp, 0x000B9CE8u); RECOMP_ABI_CALL(0x000B3150u, sub_000B3150); /* call 0x000B3150 */

loc_000B9CE8: ;
    ecx = MEM32(esp + 0x414);
    MEM32(ebx + 8) = eax;
    PUSH32(esp, ecx);
    goto loc_000B9D4A;

loc_000B9CF5: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B9CFDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000B9CFAu); } /* indirect call */
    }

loc_000B9CFD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9D2C; /* jne: not equal / not zero */

loc_000B9D04: ;
    ecx = ebx;
    MEM32(ebx + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B9D12u); RECOMP_ABI_CALL(0x000BA190u, sub_000BA190); /* call 0x000BA190 */

loc_000B9D12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B9D23u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9D23: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000B9D2C: ;
    edi = ebx + 0x18;
    ecx = 0x16;
    esi = ebp;
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
    edi = ebp;
    PUSH32(esp, 0x000B9D3Fu); RECOMP_ABI_CALL(0x000B3150u, sub_000B3150); /* call 0x000B3150 */

loc_000B9D3F: ;
    MEM32(ebx + 8) = eax;
    eax = MEM32(esp + 0x414);
    PUSH32(esp, eax);

loc_000B9D4A: ;
    eax = ebx;
    PUSH32(esp, 0x000B9D51u); RECOMP_ABI_CALL(0x000BA360u, sub_000BA360); /* call 0x000BA360 */

loc_000B9D51: ;
    ecx = MEM32(esp + 0x40C);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    PUSH32(esp, 0x000B9D65u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9D65: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B9D70
 * Original: 0x000B9D70 - 0x000B9E39 (201 bytes, 52 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9D70: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9DA8; /* jne: not equal / not zero */

loc_000B9D87: ;
    PUSH32(esp, 0x187);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4248CC);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9DA5u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9DA5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9DA8: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9DE8; /* je: equal / zero */

loc_000B9DAF: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9DCC; /* je: equal / zero */

loc_000B9DB5: ;
    PUSH32(esp, 0x18D);
    ecx = 0x424978;
    edx = 0x424818;
    PUSH32(esp, 0x000B9DC9u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000B9DC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9DCC: ;
    ecx = esi;
    PUSH32(esp, 0x000B9DD3u); RECOMP_ABI_CALL(0x000BA190u, sub_000BA190); /* call 0x000BA190 */

loc_000B9DD3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B9DE1u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9DE1: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B9DE8: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9E21; /* je: equal / zero */

loc_000B9DF0: ;
    ecx = MEM32(edi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x000B9DF7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000B9DF4u); } /* indirect call */
    }

loc_000B9DF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9E21; /* jne: not equal / not zero */

loc_000B9DFE: ;
    ecx = esi;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B9E0Cu); RECOMP_ABI_CALL(0x000BA190u, sub_000BA190); /* call 0x000BA190 */

loc_000B9E0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B9E1Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9E1A: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B9E21: ;
    ecx = MEM32(esp + 0x400);
    eax = 1;
    PUSH32(esp, 0x000B9E32u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9E32: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9E0E
 * Original: 0x000B9E0E - 0x000B9E39 (43 bytes, 9 insns)
 * Folder: sound (between: 0x000B9D70 and 0x000B9E40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9E0E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9E0E: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B9E1Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9E1A: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9E40
 * Original: 0x000B9E40 - 0x000B9EAB (107 bytes, 30 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9E40: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    MEM32(esp + 0x408) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000B9E7E; /* jne: not equal / not zero */

loc_000B9E5D: ;
    PUSH32(esp, 0x1B6);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4248CC);
    eax = esp + 0x14;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9E7Bu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9E7B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9E7E: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9E8A; /* je: equal / zero */

loc_000B9E84: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B9E8Au); RECOMP_ABI_CALL(0x000BA2F0u, sub_000BA2F0); /* call 0x000BA2F0 */

loc_000B9E8A: ;
    ecx = esi;
    PUSH32(esp, 0x000B9E91u); RECOMP_ABI_CALL(0x000BA190u, sub_000BA190); /* call 0x000BA190 */

loc_000B9E91: ;
    PUSH32(esp, 0x000B9E96u); RECOMP_ABI_CALL(0x000BA070u, sub_000BA070); /* call 0x000BA070 */

loc_000B9E96: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x000B9EA4u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9EA4: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9EB0
 * Original: 0x000B9EB0 - 0x000B9F14 (100 bytes, 25 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9EB0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9EE8; /* jne: not equal / not zero */

loc_000B9EC7: ;
    PUSH32(esp, 0x1D1);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4248CC);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9EE5u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9EE5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9EE8: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x74) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9F01; /* je: equal / zero */

loc_000B9EF7: ;
    ecx = MEM32(edi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x000B9EFEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000B9EFBu); } /* indirect call */
    }

loc_000B9EFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9F01: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B9F0Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9F0D: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9F20
 * Original: 0x000B9F20 - 0x000B9F84 (100 bytes, 25 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9F20: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9F58; /* jne: not equal / not zero */

loc_000B9F37: ;
    PUSH32(esp, 0x1E9);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4248CC);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9F55u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9F55: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9F58: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x74) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9F71; /* je: equal / zero */

loc_000B9F67: ;
    ecx = MEM32(edi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x000B9F6Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000B9F6Bu); } /* indirect call */
    }

loc_000B9F6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9F71: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B9F7Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9F7D: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9F90
 * Original: 0x000B9F90 - 0x000BA010 (128 bytes, 30 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9F90: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9FC8; /* jne: not equal / not zero */

loc_000B9FA7: ;
    PUSH32(esp, 0x201);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4248CC);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9FC5u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000B9FC5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9FC8: ;
    ecx = MEM32(esp + 0x408);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9FF6; /* je: equal / zero */

loc_000B9FD7: ;
    edx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B9FDEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000B9FDBu); } /* indirect call */
    }

loc_000B9FDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000B9FEDu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000B9FED: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000B9FF6: ;
    ecx = MEM32(esp + 0x400);
    eax = 0xFFFF0000u;
    PUSH32(esp, 0x000BA007u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000BA007: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA010
 * Original: 0x000BA010 - 0x000BA069 (89 bytes, 22 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA010: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x404) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA04B; /* jne: not equal / not zero */

loc_000BA02A: ;
    PUSH32(esp, 0x218);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4248CC);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA048u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000BA048: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BA04B: ;
    PUSH32(esp, 0x000BA050u); RECOMP_ABI_CALL(0x000BA550u, sub_000BA550); /* call 0x000BA550 */

loc_000BA050: ;
    PUSH32(esp, 0x000BA055u); RECOMP_ABI_CALL(0x000BA070u, sub_000BA070); /* call 0x000BA070 */

loc_000BA055: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, edi);
    PUSH32(esp, 0x000BA062u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000BA062: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BA070
 * Original: 0x000BA070 - 0x000BA188 (280 bytes, 90 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA070: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x408) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_000BA0A1; /* jbe: below or equal (unsigned <=) */

loc_000BA092: ;
    ecx = MEM32(edi + 0x1C);
    MEM32(ecx + eax * 8 + 4) = ebx;
    ecx = MEM32(edi + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BA092; /* jb: below (unsigned <) */

loc_000BA0A1: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA0F0; /* je: equal / zero */

loc_000BA0A8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BA0CE; /* jl: less (signed <) */

loc_000BA0AD: ;
    PUSH32(esp, 0x260);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4247D0);
    edx = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BA0CBu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000BA0CB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BA0CE: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA0E8; /* je: equal / zero */

loc_000BA0D4: ;
    edx = MEM32(edi + 0x1C);
    ecx = MEM32(esi + 0x70);
    eax = MEM32(esi);
    ecx = edx + ecx * 8 + 4;
    edx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;

loc_000BA0E8: ;
    esi = MEM32(esi + 0x7C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA0A8; /* jne: not equal / not zero */

loc_000BA0F0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA116; /* je: equal / zero */

loc_000BA0F5: ;
    PUSH32(esp, 0x269);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x424788);
    eax = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA113u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000BA113: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BA116: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0x14) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BA13C; /* jbe: below or equal (unsigned <=) */

loc_000BA11B: ;
    PUSH32(esp, 0x26A);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x42475C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BA139u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000BA139: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BA13C: ;
    eax = MEM32(edi + 0x20);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BA172; /* jbe: below or equal (unsigned <=) */

loc_000BA145: ;
    edx = MEM32(edi + 0x1C);
    ecx = MEM32(edx + esi * 8 + 4);
    eax = edx + esi * 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000BA16A; /* jbe: below or equal (unsigned <=) */

loc_000BA153: ;
    PUSH32(esp, 0x26F);
    ecx = 0x424978;
    edx = 0x424708;
    PUSH32(esp, 0x000BA167u); RECOMP_ABI_CALL(0x000D7300u, sub_000D7300); /* call 0x000D7300 */

loc_000BA167: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BA16A: ;
    eax = MEM32(edi + 0x20);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BA145; /* jb: below (unsigned <) */

loc_000BA172: ;
    ecx = MEM32(esp + 0x40C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000BA181u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000BA181: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BA190
 * Original: 0x000BA190 - 0x000BA249 (185 bytes, 49 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA190: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esi + 0x7C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA1BA; /* je: equal / zero */

loc_000BA1AE: ;
    edx = MEM32(esi + 0x80);
    MEM32(eax + 0x80) = edx;

loc_000BA1BA: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA1CA; /* je: equal / zero */

loc_000BA1C4: ;
    edx = MEM32(esi + 0x7C);
    MEM32(eax + 0x7C) = edx;

loc_000BA1CA: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA1FA; /* je: equal / zero */

loc_000BA1D4: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA1E6; /* jne: not equal / not zero */

loc_000BA1E1: ;
    edx = MEM32(esi + 0x7C);
    MEM32(eax) = edx;

loc_000BA1E6: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA1FA; /* jne: not equal / not zero */

loc_000BA1F1: ;
    edx = MEM32(esi + 0x80);
    MEM32(eax + 4) = edx;

loc_000BA1FA: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x7C) = ecx;
    MEM32(esi + 0x80) = ecx;
    MEM32(esi + 0x84) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA230; /* je: equal / zero */

loc_000BA20F: ;
    PUSH32(esp, 0x284);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x424818);
    eax = esp + 0x10;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA22Du); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000BA22D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BA230: ;
    PUSH32(esp, 0x000BA235u); RECOMP_ABI_CALL(0x000D7550u, sub_000D7550); /* call 0x000D7550 */

loc_000BA235: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, esi);
    PUSH32(esp, 0x000BA242u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000BA242: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BA250
 * Original: 0x000BA250 - 0x000BA2F0 (160 bytes, 42 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA250: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA28A; /* je: equal / zero */

loc_000BA269: ;
    PUSH32(esp, 0x297);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4246F8);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA287u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000BA287: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BA28A: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA2B1; /* je: equal / zero */

loc_000BA290: ;
    PUSH32(esp, 0x298);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4246D4);
    ecx = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BA2AEu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000BA2AE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BA2B1: ;
    edx = MEM32(esp + 0x408);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BA2C9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000BA2C7u); } /* indirect call */
    }

loc_000BA2C9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000BA2DB; /* jne: not equal / not zero */

loc_000BA2D4: ;
    MEM32(esi + 0x78) = 1;

loc_000BA2DB: ;
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x000BA2E7u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000BA2E7: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA2F0
 * Original: 0x000BA2F0 - 0x000BA356 (102 bytes, 23 insns)
 * Folder: sound (source: virtplayer.cpp)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA2F0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x400) = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA329; /* jne: not equal / not zero */

loc_000BA308: ;
    PUSH32(esp, 0x2B1);
    PUSH32(esp, 0x424978);
    PUSH32(esp, 0x4246B0);
    eax = esp + 0xC;
    PUSH32(esp, 0x428D10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA326u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000BA326: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BA329: ;
    ecx = MEM32(esp + 0x408);
    eax = MEM32(esi + 4);
    edx = MEM32(ecx + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000BA33Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BA337u); } /* indirect call */
    }

loc_000BA33A: ;
    ecx = MEM32(esp + 0x404);
    MEM32(esi + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000BA34Du); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000BA34D: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA360
 * Original: 0x000BA360 - 0x000BA544 (484 bytes, 152 insns)
 * Folder: sound (match: xbox-demo 0x000DEB70, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA360: ;
    ecx = MEM32(eax + 0x7C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BA379; /* je: equal / zero */

loc_000BA36D: ;
    edx = MEM32(eax + 0x80);
    MEM32(ecx + 0x80) = edx;

loc_000BA379: ;
    ecx = MEM32(eax + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA389; /* je: equal / zero */

loc_000BA383: ;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx + 0x7C) = edx;

loc_000BA389: ;
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA3B9; /* je: equal / zero */

loc_000BA393: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA3A5; /* jne: not equal / not zero */

loc_000BA3A0: ;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx) = edx;

loc_000BA3A5: ;
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA3B9; /* jne: not equal / not zero */

loc_000BA3B0: ;
    edx = MEM32(eax + 0x80);
    MEM32(ecx + 4) = edx;

loc_000BA3B9: ;
    esi = MEM32(esp + 0x14);
    ebx = esi + 4;
    MEM32(eax + 0x7C) = ebp;
    MEM32(eax + 0x80) = ebp;
    MEM32(eax + 0x84) = ebp;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA446; /* je: equal / zero */

loc_000BA3D5: ;
    edx = MEM32(eax + 0xC);

loc_000BA3D8: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BA3E6; /* jle: less or equal (signed <=) */

loc_000BA3DD: ;
    ecx = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA3D8; /* jne: not equal / not zero */

loc_000BA3E4: ;
    goto loc_000BA446;

loc_000BA3E6: ;
    if (CMP_NE(_fa, _fb)) goto loc_000BA4C2; /* jne: not equal / not zero */

loc_000BA3EC: ;
    edi = MEM32(eax + 8);
    /* nop */

loc_000BA3F0: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BA403; /* jle: less or equal (signed <=) */

loc_000BA3F5: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA403; /* jne: not equal / not zero */

loc_000BA3FA: ;
    ecx = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA3F0; /* jne: not equal / not zero */

loc_000BA401: ;
    goto loc_000BA446;

loc_000BA403: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA4C2; /* jne: not equal / not zero */

loc_000BA40C: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA4C2; /* jne: not equal / not zero */

loc_000BA415: ;
    esi = MEM32(eax + 0x10);
    goto loc_000BA420;

    /* nop */

loc_000BA420: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BA4C2; /* jle: less or equal (signed <=) */

loc_000BA429: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA4C2; /* jne: not equal / not zero */

loc_000BA432: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA4C2; /* jne: not equal / not zero */

loc_000BA43B: ;
    ecx = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA420; /* jne: not equal / not zero */

loc_000BA442: ;
    esi = MEM32(esp + 0x14);

loc_000BA446: ;
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA476; /* je: equal / zero */

loc_000BA450: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA462; /* jne: not equal / not zero */

loc_000BA45D: ;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx) = edx;

loc_000BA462: ;
    ecx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA476; /* jne: not equal / not zero */

loc_000BA46D: ;
    edx = MEM32(eax + 0x80);
    MEM32(ecx + 4) = edx;

loc_000BA476: ;
    MEM32(eax + 0x80) = ebp;
    MEM32(eax + 0x84) = ebp;
    MEM32(eax + 0x7C) = ebp;
    ecx = MEM32(esi + 8);
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0x84) = ebx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA4AB; /* jne: not equal / not zero */

loc_000BA498: ;
    MEM32(ebx) = eax;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0xC);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000BA4AB: ;
    edx = MEM32(esi + 8);
    MEM32(edx + 0x7C) = eax;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0xC);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000BA4C2: ;
    edx = MEM32(eax + 0x84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    esi = MEM32(ecx + 0x80);
    if (CMP_EQ(_fa, _fb)) goto loc_000BA4F8; /* je: equal / zero */

loc_000BA4D2: ;
    MEM32(edx + 8) = MEM32(edx + 8) - 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA4E4; /* jne: not equal / not zero */

loc_000BA4DF: ;
    edi = MEM32(eax + 0x7C);
    MEM32(edx) = edi;

loc_000BA4E4: ;
    edx = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA4F8; /* jne: not equal / not zero */

loc_000BA4EF: ;
    edi = MEM32(eax + 0x80);
    MEM32(edx + 4) = edi;

loc_000BA4F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(eax + 0x84) = ebp;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA51C; /* je: equal / zero */

loc_000BA50B: ;
    edx = MEM32(esi + 0x84);
    MEM32(esi + 0x7C) = eax;
    MEM32(eax + 0x84) = edx;
    goto loc_000BA524;

loc_000BA51C: ;
    edx = MEM32(ecx + 0x84);
    MEM32(edx) = eax;

loc_000BA524: ;
    MEM32(ecx + 0x80) = eax;
    ecx = MEM32(ecx + 0x84);
    POP32(esp, edi);
    MEM32(eax + 0x84) = ecx;
    eax = MEM32(ecx + 8);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(ecx + 8) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
