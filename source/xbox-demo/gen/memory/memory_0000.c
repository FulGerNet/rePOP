/**
 * PoP SoT xbox-demo - memory, chunk 0
 * Memory allocators (Ubisoft Base memory)
 * Functions: 156 (0x00272D70 - 0x0027D230)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00272D70
 * Original: 0x00272D70 - 0x00272E1E (174 bytes, 52 insns)
 * Folder: memory (source: allocator.cpp)
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
 * sub_00277480
 * Original: 0x00277480 - 0x00277783 (771 bytes, 249 insns)
 * Folder: memory (source: poolallocator.cpp)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (between: 0x00277480 and 0x00278310)
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
 * Folder: memory (source: packedallocator.cpp)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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
 * Folder: memory (between: 0x00278310 and 0x0027B720)
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

/**
 * sub_0027B090
 * Original: 0x0027B090 - 0x0027B0A6 (22 bytes, 8 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B090(void)
{

loc_0027B090: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0027B098u); RECOMP_ABI_CALL(0x00276330u, sub_00276330); /* call 0x00276330 */

loc_0027B098: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B0B0
 * Original: 0x0027B0B0 - 0x0027B155 (165 bytes, 65 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B0B0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B150; /* je: equal / zero */

loc_0027B0C2: ;
    eax = MEM32(edx + 4);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027B13C; /* je: equal / zero */

loc_0027B0DB: ;
    goto loc_0027B0E0;

    /* nop */

loc_0027B0E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B14D; /* je: equal / zero */

loc_0027B0E4: ;
    edx = MEM32(esi + 8);
    edi = MEM32(ebx + 8);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027B132; /* jae: above or equal (unsigned >=) */

loc_0027B0F2: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(esi);
    ecx = 1;
    PUSH32(esp, 0x0027B102u); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_0027B102: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 4);
    MEM32(eax) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = ebx;
    edx = MEM32(ebx + 4);
    MEM32(edx) = esi;
    ecx = MEM32(edi + 4);
    eax = MEM32(ebx + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(esi + 4);
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 4) = edx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    esi = edi;
    goto loc_0027B134;

loc_0027B132: ;
    ebx = MEM32(ebx);

loc_0027B134: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B0E0; /* jne: not equal / not zero */

loc_0027B138: ;
    edx = MEM32(esp + 0x18);

loc_0027B13C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B14D; /* je: equal / zero */

loc_0027B140: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = ebp;
    PUSH32(esp, 0x0027B14Du); RECOMP_ABI_CALL(0x0027B2B0u, sub_0027B2B0); /* call 0x0027B2B0 */

loc_0027B14D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0027B150: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027B160
 * Original: 0x0027B160 - 0x0027B255 (245 bytes, 98 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B160: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, 1);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0027B1B5; /* jne: not equal / not zero */

loc_0027B17E: ;
    ecx = MEM32(esp + 0x1C);
    ebp = MEM32(ecx);
    edi = MEM32(ebp);

loc_0027B187: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0027B198; /* jne: not equal / not zero */

loc_0027B192: ;
    edx = MEM32(ebp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */

loc_0027B198: ;
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(esp + 0x10) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0027B1A7; /* je: equal / zero */

loc_0027B1A3: ;
    eax = MEM32(eax);
    goto loc_0027B1AA;

loc_0027B1A7: ;
    eax = MEM32(eax + 8);

loc_0027B1AA: ;
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B187; /* je: equal / zero */

loc_0027B1B1: ;
    edx = MEM32(esp + 0x18);

loc_0027B1B5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edi = esi;
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027B1FA; /* je: equal / zero */

loc_0027B1BF: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B1ED; /* jne: not equal / not zero */

loc_0027B1C6: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edi = edx;
    PUSH32(esp, 0x0027B1DAu); RECOMP_ABI_CALL(0x0002E1A0u, sub_0002E1A0); /* call 0x0002E1A0 */

loc_0027B1DA: ;
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = ecx;
    MEM8(ebx + 4) = 1;
    eax = ebx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0027B1ED: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x0027B1F6u); RECOMP_ABI_CALL(0x0027B390u, sub_0027B390); /* call 0x0027B390 */

loc_0027B1F6: ;
    edi = MEM32(esp + 0xC);

loc_0027B1FA: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx);
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    ebp = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B211; /* jne: not equal / not zero */

loc_0027B20B: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */

loc_0027B211: ;
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B244; /* je: equal / zero */

loc_0027B218: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027B231u); RECOMP_ABI_CALL(0x0002E1A0u, sub_0002E1A0); /* call 0x0002E1A0 */

loc_0027B231: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = edx;
    MEM8(ebx + 4) = 1;
    eax = ebx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0027B244: ;
    MEM32(ebx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 4) = 0;
    eax = ebx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027B260
 * Original: 0x0027B260 - 0x0027B2A4 (68 bytes, 31 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B260: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B2A1; /* jne: not equal / not zero */

loc_0027B26D: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);

loc_0027B278: ;
    edx = MEM32(ecx + 0xC);
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B287; /* jne: not equal / not zero */

loc_0027B281: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 4) (32-bit) */

loc_0027B287: ;
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B293; /* je: equal / zero */

loc_0027B28E: ;
    ecx = MEM32(ecx + 8);
    goto loc_0027B297;

loc_0027B293: ;
    eax = ecx;
    ecx = MEM32(ecx);

loc_0027B297: ;
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B278; /* je: equal / zero */

loc_0027B29E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0027B2A1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027B2B0
 * Original: 0x0027B2B0 - 0x0027B2F6 (70 bytes, 27 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B2B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027B2C4; /* je: equal / zero */

loc_0027B2BA: ;
    ecx = edi;
    PUSH32(esp, 0x0027B2C1u); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_0027B2C1: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) - edi;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0027B2C4: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x14);
    MEM32(edx) = ecx;
    esi = MEM32(ecx + 4);
    edx = MEM32(esp + 0xC);
    MEM32(esi) = edx;
    esi = MEM32(edx + 4);
    MEM32(esi) = eax;
    esi = MEM32(edx + 4);
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027B300
 * Original: 0x0027B300 - 0x0027B337 (55 bytes, 17 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B300: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B30E; /* jne: not equal / not zero */

loc_0027B309: ;
    PUSH32(esp, 0x0027B30Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0027B30E: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x0027B31Au); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027B31A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B334; /* je: equal / zero */

loc_0027B31E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;

loc_0027B334: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027B340
 * Original: 0x0027B340 - 0x0027B384 (68 bytes, 31 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B340: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B381; /* jne: not equal / not zero */

loc_0027B34D: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);

loc_0027B358: ;
    edx = MEM32(ecx + 0xC);
    esi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B367; /* jne: not equal / not zero */

loc_0027B361: ;
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 4) (32-bit) */

loc_0027B367: ;
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B374; /* je: equal / zero */

loc_0027B36E: ;
    eax = ecx;
    ecx = MEM32(ecx);
    goto loc_0027B377;

loc_0027B374: ;
    ecx = MEM32(ecx + 8);

loc_0027B377: ;
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B358; /* je: equal / zero */

loc_0027B37E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0027B381: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027B390
 * Original: 0x0027B390 - 0x0027B3ED (93 bytes, 43 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B390: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B39F; /* je: equal / zero */

loc_0027B399: ;
    eax = MEM32(eax + 8);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_0027B39F: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B3C3; /* jne: not equal / not zero */

loc_0027B3A9: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B3BF; /* jne: not equal / not zero */

loc_0027B3B3: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B3B3; /* je: equal / zero */

loc_0027B3BF: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0027B3C3: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B3EB; /* jne: not equal / not zero */

loc_0027B3CD: ;
    /* nop */

loc_0027B3D0: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B3E2; /* jne: not equal / not zero */

loc_0027B3D6: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B3D0; /* je: equal / zero */

loc_0027B3E2: ;
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B3EB; /* jne: not equal / not zero */

loc_0027B3E9: ;
    MEM32(edx) = eax;

loc_0027B3EB: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B3F0
 * Original: 0x0027B3F0 - 0x0027B42C (60 bytes, 30 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027B3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B3F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B41F; /* je: equal / zero */

loc_0027B403: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);

loc_0027B408: ;
    eax = esi;
    esi = MEM32(esi);
    ecx = eax + 8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0027B411u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027B40Fu); } /* indirect call */
    }

loc_0027B411: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B408; /* jne: not equal / not zero */

loc_0027B415: ;
    MEM32(ebp) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027B41F: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(ebp) = eax;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B430
 * Original: 0x0027B430 - 0x0027B44F (31 bytes, 11 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B430: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x333214;
    if (TEST_Z(_fa, _fb)) goto loc_0027B449; /* je: equal / zero */

loc_0027B440: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027B446u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_0027B446: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027B449: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027B450
 * Original: 0x0027B450 - 0x0027B457 (7 bytes, 2 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B450(void)
{

loc_0027B450: ;
    MEM32(ecx) = 0x333214;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B460
 * Original: 0x0027B460 - 0x0027B4C1 (97 bytes, 30 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B460: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296F9B);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(esi) = ebx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ecx;
    MEM8(esi + 0x24) = LO8(ebx);
    PUSH32(esp, 0x0027B497u); RECOMP_ABI_CALL(0x00276330u, sub_00276330); /* call 0x00276330 */

loc_0027B497: ;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ebx;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x0027B4A6u); RECOMP_ABI_CALL(0x00276330u, sub_00276330); /* call 0x00276330 */

loc_0027B4A6: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = ebx;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027B4D0
 * Original: 0x0027B4D0 - 0x0027B4E7 (23 bytes, 5 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B4D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027B4DAu); RECOMP_ABI_CALL(0x0027F785u, sub_0027F785); /* call 0x0027F785 */

loc_0027B4DA: ;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_00281CC1(); return; /* tail jmp 0x00281CC1 */

}

/**
 * sub_0027B4F0
 * Original: 0x0027B4F0 - 0x0027B581 (145 bytes, 54 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B4F0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 1) = ecx;
    MEM32(esp + 5) = ecx;
    MEM32(esp + 9) = ecx;
    MEM32(esp + 0xD) = ecx;
    MEM32(esp + 0x11) = ecx;
    MEM32(esp + 0x15) = ecx;
    MEM32(esp + 0x19) = ecx;
    MEM16(esp + 0x1D) = LO16(ecx);
    MEM8(esp) = 0;
    MEM8(esp + 0x1F) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0027B53B; /* je: equal / zero */

loc_0027B522: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x333384);
    esi = 0x20;
    edx = esp + 0xC;
    PUSH32(esp, 0x0027B537u); RECOMP_ABI_CALL(0x00276E40u, sub_00276E40); /* call 0x00276E40 */

loc_0027B537: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_0027B53B: ;
    eax = MEM32(edi + 4);
    edx = MEM32(edi);
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, edx);
    edx = eax;
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x20);
    eax = ecx;
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x333340);
    PUSH32(esp, 0x0027B57Du); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027B57D: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027B590
 * Original: 0x0027B590 - 0x0027B62A (154 bytes, 40 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B590: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 1) = ecx;
    MEM32(esp + 5) = ecx;
    MEM32(esp + 9) = ecx;
    MEM32(esp + 0xD) = ecx;
    MEM32(esp + 0x11) = ecx;
    MEM32(esp + 0x15) = ecx;
    MEM32(esp + 0x19) = ecx;
    MEM16(esp + 0x1D) = LO16(ecx);
    MEM8(esp) = 0;
    MEM8(esp + 0x1F) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0027B5DB; /* je: equal / zero */

loc_0027B5C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x333384);
    esi = 0x20;
    edx = esp + 0xC;
    PUSH32(esp, 0x0027B5D7u); RECOMP_ABI_CALL(0x00276E40u, sub_00276E40); /* call 0x00276E40 */

loc_0027B5D7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_0027B5DB: ;
    PUSH32(esp, 0x33332C);
    PUSH32(esp, 0x33331C);
    PUSH32(esp, 0x33330C);
    PUSH32(esp, 0x3332FC);
    PUSH32(esp, 0x3332EC);
    PUSH32(esp, 0x3332DC);
    PUSH32(esp, 0x3332C4);
    PUSH32(esp, 0x3332B4);
    PUSH32(esp, 0x3332A4);
    PUSH32(esp, 0x333294);
    PUSH32(esp, 0x333284);
    PUSH32(esp, 0x333274);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x333230);
    PUSH32(esp, 0x0027B626u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027B626: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027B630
 * Original: 0x0027B630 - 0x0027B64F (31 bytes, 10 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B630: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    PUSH32(esp, 0x33319C);
    PUSH32(esp, 0x333194);
    PUSH32(esp, 0x333184);
    PUSH32(esp, 0x0027B648u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027B648: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B650
 * Original: 0x0027B650 - 0x0027B670 (32 bytes, 12 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B650: ;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x333174);
    PUSH32(esp, 0x0027B667u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027B667: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027B670
 * Original: 0x0027B670 - 0x0027B693 (35 bytes, 13 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B670: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x14);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3334D0);
    PUSH32(esp, 0x0027B68Au); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027B68A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027B6A0
 * Original: 0x0027B6A0 - 0x0027B6D1 (49 bytes, 17 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B6A0: ;
    MEM32(ecx + 4) = 0;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B6CE; /* je: equal / zero */

loc_0027B6AE: ;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, 0x3334C8);
    PUSH32(esp, 0x333194);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x333478);
    PUSH32(esp, 0x0027B6CAu); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027B6CA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_0027B6CE: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B6E0
 * Original: 0x0027B6E0 - 0x0027B700 (32 bytes, 14 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B6E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B6E0: ;
    edx = MEM32(eax + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x333174);
    PUSH32(esp, 0x0027B6F9u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027B6F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B700
 * Original: 0x0027B700 - 0x0027B71F (31 bytes, 13 insns)
 * Folder: memory (between: 0x00278310 and 0x0027B720)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B700: ;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B71C; /* je: equal / zero */

loc_0027B707: ;
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x33345C);
    PUSH32(esp, 0x0027B718u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027B718: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_0027B71C: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B720
 * Original: 0x0027B720 - 0x0027B878 (344 bytes, 101 insns)
 * Folder: memory (source: poolallocatorpage.cpp)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B720: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296C48);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(0x64CF90);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027B74D; /* je: equal / zero */

loc_0027B747: ;
    MEM32(esp + 0xC) = ebp;
    goto loc_0027B758;

loc_0027B74D: ;
    PUSH32(esp, 0x0027B752u); RECOMP_ABI_CALL(0x00276360u, sub_00276360); /* call 0x00276360 */

loc_0027B752: ;
    MEM32(esp + 0xC) = eax;
    ebp = eax;

loc_0027B758: ;
    eax = MEM32(esp + 0x34);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027B864; /* je: equal / zero */

loc_0027B782: ;
    PUSH32(esp, ebx);
    goto loc_0027B790;

loc_0027B785: ;
    edi = MEM32(esp + 0x38);
    /* nop */

loc_0027B790: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    eax = edi;
    eax = eax & 0xFFFFF000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ecx + eax * 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B7DB; /* jne: not equal / not zero */

loc_0027B7AB: ;
    SET_LO8(ebx, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B7C1; /* je: equal / zero */

loc_0027B7B4: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027B7BEu); RECOMP_ABI_CALL(0x0027B880u, sub_0027B880); /* call 0x0027B880 */

loc_0027B7BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027B7C1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B854; /* je: equal / zero */

loc_0027B7CA: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    esi = edi;
    PUSH32(esp, 0x0027B7D6u); RECOMP_ABI_CALL(0x0027B9C0u, sub_0027B9C0); /* call 0x0027B9C0 */

loc_0027B7D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0027B854;

loc_0027B7DB: ;
    esi = MEM32(0x64CF98);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B7EC; /* jne: not equal / not zero */

loc_0027B7E5: ;
    PUSH32(esp, 0x0027B7EAu); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_0027B7EA: ;
    esi = eax;

loc_0027B7EC: ;
    ebp = esi + 0x2E04;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x48) = ebp;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027B7FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027B7F7u); } /* indirect call */
    }

loc_0027B7FD: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x324);
    PUSH32(esp, 0x333418);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3333A8);
    MEM32(esp + 0x48) = 0;
    PUSH32(esp, 0x0027B820u); RECOMP_ABI_CALL(0x002769D0u, sub_002769D0); /* call 0x002769D0 */

loc_0027B820: ;
    ecx = MEM32(0x343DF4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x650A74);
    ebx = eax;
    edi = esi;
    PUSH32(esp, 0x0027B837u); RECOMP_ABI_CALL(0x00276B60u, sub_00276B60); /* call 0x00276B60 */

loc_0027B837: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B83D; /* jne: not equal / not zero */

loc_0027B83C: ;
    /* int3: debug-trap slide byte, stepped over */

loc_0027B83D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027B84Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027B846u); } /* indirect call */
    }

loc_0027B84C: ;
    ebp = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x38);

loc_0027B854: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x38) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0027B785; /* jne: not equal / not zero */

loc_0027B863: ;
    POP32(esp, ebx);

loc_0027B864: ;
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0027B880
 * Original: 0x0027B880 - 0x0027B9BA (314 bytes, 110 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B880: ;
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027B8DB; /* je: equal / zero */

loc_0027B897: ;
    esi = edi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027B95D; /* ja: above (unsigned >) */

loc_0027B8A2: ;
    esi = edi + 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027B95D; /* jae: above or equal (unsigned >=) */

loc_0027B8B0: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B95D; /* je: equal / zero */

loc_0027B8BB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027B95D; /* jae: above or equal (unsigned >=) */

loc_0027B8C7: ;
    MEM32(esp + ecx * 4 + 0x10) = eax;
    ebx = MEM32(eax + 4);
    eax = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B897; /* jne: not equal / not zero */

loc_0027B8D7: ;
    MEM32(esp + 8) = ecx;

loc_0027B8DB: ;
    eax = MEM32(edi + 0x18);
    _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B961; /* jne: not equal / not zero */

loc_0027B8E5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027B906; /* jbe: below or equal (unsigned <=) */

loc_0027B8EA: ;
    eax = esp + ecx * 4 + 0x10;
    ecx = eax;
    edx = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027B903u); RECOMP_ABI_CALL(0x0027BAC0u, sub_0027BAC0); /* call 0x0027BAC0 */

loc_0027B903: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027B906: ;
    eax = MEM32(esp + 0x414);
    PUSH32(esp, 0x0027B912u); RECOMP_ABI_CALL(0x0027B630u, sub_0027B630); /* call 0x0027B630 */

loc_0027B912: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B961; /* je: equal / zero */

loc_0027B916: ;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x18);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    esi = edi + 0x20;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_0027B9A1; /* jae: above or equal (unsigned >=) */

loc_0027B92F: ;
    /* nop */

loc_0027B930: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027B97B; /* jae: above or equal (unsigned >=) */

loc_0027B936: ;
    ecx = MEM32(esp + ebx * 4 + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027B96C; /* jae: above or equal (unsigned >=) */

loc_0027B93E: ;
    ecx = MEM32(esp + 0x418);
    PUSH32(esp, ecx);
    edx = esi;
    eax = edi;
    PUSH32(esp, 0x0027B94Fu); RECOMP_ABI_CALL(0x0027B650u, sub_0027B650); /* call 0x0027B650 */

loc_0027B94F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B998; /* jne: not equal / not zero */

loc_0027B953: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027B95D: ;
    MEM32(esp + 8) = ecx;

loc_0027B961: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027B96C: ;
    esi = MEM32(ecx + 4);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebx;
    goto loc_0027B99D;

loc_0027B97B: ;
    edx = MEM32(esp + 0x418);
    ebx = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x333174);
    PUSH32(esp, 0x0027B991u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027B991: ;
    ebx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027B998: ;
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027B99D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027B930; /* jb: below (unsigned <) */

loc_0027B9A1: ;
    eax = MEM32(esp + 0x418);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x0027B9B0u); RECOMP_ABI_CALL(0x0027B670u, sub_0027B670); /* call 0x0027B670 */

loc_0027B9B0: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x408) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x408;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027B9C0
 * Original: 0x0027B9C0 - 0x0027BAB6 (246 bytes, 94 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B9C0: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0027BA03; /* je: equal / zero */

loc_0027B9D3: ;
    edx = esi + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027BA40; /* ja: above (unsigned >) */

loc_0027B9DA: ;
    edx = esi + 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BA40; /* jae: above or equal (unsigned >=) */

loc_0027B9E4: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027BA40; /* je: equal / zero */

loc_0027B9EB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BA40; /* jae: above or equal (unsigned >=) */

loc_0027B9F3: ;
    MEM32(esp + ebp * 4 + 8) = eax;
    edi = MEM32(eax + 4);
    eax = MEM32(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027B9D3; /* jne: not equal / not zero */

loc_0027BA03: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027BA40; /* jne: not equal / not zero */

loc_0027BA0D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027BA2E; /* jbe: below or equal (unsigned <=) */

loc_0027BA12: ;
    eax = esp + ebp * 4 + 8;
    ecx = eax;
    edx = esp + 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027BA2Bu); RECOMP_ABI_CALL(0x0027BAC0u, sub_0027BAC0); /* call 0x0027BAC0 */

loc_0027BA2B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027BA2E: ;
    ecx = MEM32(esp + 0x40C);
    eax = esi;
    PUSH32(esp, 0x0027BA3Cu); RECOMP_ABI_CALL(0x0027B6A0u, sub_0027B6A0); /* call 0x0027B6A0 */

loc_0027BA3C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027BA4B; /* jne: not equal / not zero */

loc_0027BA40: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027BA4B: ;
    eax = MEM32(esi + 0x10);
    edi = MEM32(esi + 0x18);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    ecx = esi + 0x20;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BA92; /* jae: above or equal (unsigned >=) */

loc_0027BA60: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BA8C; /* jae: above or equal (unsigned >=) */

loc_0027BA64: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + ebx * 4 + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + ebx * 4 + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027BA8C; /* jb: below (unsigned <) */

loc_0027BA6A: ;
    eax = MEM32(esp + 0x410);
    PUSH32(esp, 0x0027BA76u); RECOMP_ABI_CALL(0x0027B6E0u, sub_0027B6E0); /* call 0x0027B6E0 */

loc_0027BA76: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027BAAA; /* je: equal / zero */

loc_0027BA7A: ;
    edx = MEM32(esp + ebx * 4 + 0xC);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(edx + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0027BA8E;

loc_0027BA8C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027BA8E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027BA60; /* jb: below (unsigned <) */

loc_0027BA92: ;
    eax = MEM32(esp + 0x410);
    ecx = esi;
    PUSH32(esp, 0x0027BAA0u); RECOMP_ABI_CALL(0x0027B700u, sub_0027B700); /* call 0x0027B700 */

loc_0027BAA0: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027BAAA: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027BAC0
 * Original: 0x0027BAC0 - 0x0027BB78 (184 bytes, 82 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027BAC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027BB43; /* jle: less or equal (signed <=) */

loc_0027BADB: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_0027BAE0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027BB59; /* jle: less or equal (signed <=) */

loc_0027BAE4: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027BAF0u); RECOMP_ABI_CALL(0x0027BB80u, sub_0027BB80); /* call 0x0027BB80 */

loc_0027BAF0: ;
    ebp = MEM32(esp + 0x20);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x1C);
    ecx = ebx;
    edx = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0027BB29; /* jge: greater or equal (signed >=) */

loc_0027BB1E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027BB25u); RECOMP_ABI_CALL(0x0027BAC0u, sub_0027BAC0); /* call 0x0027BAC0 */

loc_0027BB25: ;
    edi = ebp;
    goto loc_0027BB34;

loc_0027BB29: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027BB30u); RECOMP_ABI_CALL(0x0027BAC0u, sub_0027BAC0); /* call 0x0027BAC0 */

loc_0027BB30: ;
    ebx = MEM32(esp + 0x1C);

loc_0027BB34: ;
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027BAE0; /* jg: greater (signed >) */

loc_0027BB43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027BB51; /* jle: less or equal (signed <=) */

loc_0027BB48: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027BB4Eu); RECOMP_ABI_CALL(0x0027BD40u, sub_0027BD40); /* call 0x0027BD40 */

loc_0027BB4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027BB51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027BB59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027BB43; /* jle: less or equal (signed <=) */

loc_0027BB5E: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x0027BB66u); RECOMP_ABI_CALL(0x0027BCC0u, sub_0027BCC0); /* call 0x0027BCC0 */

loc_0027BB66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    PUSH32(esp, 0x0027BB70u); RECOMP_ABI_CALL(0x0027BD00u, sub_0027BD00); /* call 0x0027BD00 */

loc_0027BB70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027BB80
 * Original: 0x0027BB80 - 0x0027BCB8 (312 bytes, 133 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027BB80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    esi = ebx + eax * 4;
    eax = ebp + -4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0027BBA7u); RECOMP_ABI_CALL(0x0027BDA0u, sub_0027BDA0); /* call 0x0027BDA0 */

loc_0027BBA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    eax = esi;
    edi = esi + 4;
    if (CMP_AE(_fa, _fb)) goto loc_0027BBC5; /* jae: above or equal (unsigned >=) */

loc_0027BBB3: ;
    ecx = MEM32(eax + -4);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027BBC5; /* ja: above (unsigned >) */

loc_0027BBBC: ;
    if (CMP_B(_fa, _fb)) goto loc_0027BBC5; /* jb: below (unsigned <) */

loc_0027BBBE: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027BBB3; /* jb: below (unsigned <) */

loc_0027BBC5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BBDF; /* jae: above or equal (unsigned >=) */

loc_0027BBC9: ;
    edx = MEM32(eax);
    goto loc_0027BBD0;

    /* nop */

loc_0027BBD0: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027BBDF; /* ja: above (unsigned >) */

loc_0027BBD6: ;
    if (CMP_B(_fa, _fb)) goto loc_0027BBDF; /* jb: below (unsigned <) */

loc_0027BBD8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027BBD0; /* jb: below (unsigned <) */

loc_0027BBDF: ;
    ecx = edi;
    edx = eax;

loc_0027BBE3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BC07; /* jae: above or equal (unsigned >=) */

loc_0027BBE7: ;
    ebx = MEM32(ecx);
    esi = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027BC00; /* ja: above (unsigned >) */

loc_0027BBEF: ;
    if (CMP_B(_fa, _fb)) goto loc_0027BC07; /* jb: below (unsigned <) */

loc_0027BBF1: ;
    esi = edi;
    ebp = MEM32(esi);
    MEM32(esi) = ebx;
    MEM32(ecx) = ebp;
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027BC00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027BBE7; /* jb: below (unsigned <) */

loc_0027BC07: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027BC38; /* jbe: below or equal (unsigned <=) */

loc_0027BC0D: ;
    /* nop */

loc_0027BC10: ;
    esi = MEM32(edx + -4);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027BC29; /* ja: above (unsigned >) */

loc_0027BC19: ;
    if (CMP_B(_fa, _fb)) goto loc_0027BC34; /* jb: below (unsigned <) */

loc_0027BC1B: ;
    ebx = MEM32(edx + -4);
    esi = MEM32(eax + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = ebx;
    MEM32(edx + -4) = esi;

loc_0027BC29: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027BC10; /* jb: below (unsigned <) */

loc_0027BC34: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x1C) (32-bit) */

loc_0027BC38: ;
    if (CMP_NE(_fa, _fb)) goto loc_0027BC70; /* jne: not equal / not zero */

loc_0027BC3A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027BCA7; /* je: equal / zero */

loc_0027BC3E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027BC4A; /* je: equal / zero */

loc_0027BC42: ;
    ebx = MEM32(edi);
    esi = MEM32(eax);
    MEM32(eax) = ebx;
    MEM32(edi) = esi;

loc_0027BC4A: ;
    ebx = eax;
    ebp = MEM32(ebx);
    esi = ecx;
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(esi);
    MEM32(ebx) = ebp;
    ebx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebx;
    goto loc_0027BBE3;

loc_0027BC70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027BC97; /* jne: not equal / not zero */

loc_0027BC77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027BC86; /* je: equal / zero */

loc_0027BC7E: ;
    ebx = MEM32(eax);
    esi = MEM32(edx);
    MEM32(edx) = ebx;
    MEM32(eax) = esi;

loc_0027BC86: ;
    ebx = MEM32(edi + -4);
    esi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = ebx;
    MEM32(edi) = esi;
    goto loc_0027BBE3;

loc_0027BC97: ;
    esi = MEM32(ecx);
    ebx = MEM32(edx);
    MEM32(ecx) = ebx;
    MEM32(edx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0027BBE3;

loc_0027BCA7: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BCC0
 * Original: 0x0027BCC0 - 0x0027BCFC (60 bytes, 31 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027BCC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027BCC0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027BCF9; /* jle: less or equal (signed <=) */

loc_0027BCD2: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027BCF8; /* jle: less or equal (signed <=) */

loc_0027BCE0: ;
    PUSH32(esp, ebx);

loc_0027BCE1: ;
    ebx = MEM32(ebp + esi * 4 + -4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    edx = edi;
    ecx = ebp;
    PUSH32(esp, 0x0027BCF0u); RECOMP_ABI_CALL(0x0027BEC0u, sub_0027BEC0); /* call 0x0027BEC0 */

loc_0027BCF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027BCE1; /* jg: greater (signed >) */

loc_0027BCF7: ;
    POP32(esp, ebx);

loc_0027BCF8: ;
    POP32(esp, esi);

loc_0027BCF9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BD00
 * Original: 0x0027BD00 - 0x0027BD3C (60 bytes, 25 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027BD00: ;
    PUSH32(esp, esi);
    esi = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027BD3A; /* jle: less or equal (signed <=) */

loc_0027BD0F: ;
    PUSH32(esp, ebx);

loc_0027BD10: ;
    eax = MEM32(edi);
    ebx = MEM32(edi + esi + -4);
    edx = esi + -4;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(edi + esi + -4) = eax;
    PUSH32(esp, 0x0027BD29u); RECOMP_ABI_CALL(0x0027BEC0u, sub_0027BEC0); /* call 0x0027BEC0 */

loc_0027BD29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027BD10; /* jg: greater (signed >) */

loc_0027BD39: ;
    POP32(esp, ebx);

loc_0027BD3A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BD40
 * Original: 0x0027BD40 - 0x0027BD9A (90 bytes, 43 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027BD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027BD40: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027BD98; /* je: equal / zero */

loc_0027BD49: ;
    PUSH32(esp, esi);
    esi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027BD97; /* je: equal / zero */

loc_0027BD51: ;
    PUSH32(esp, ebx);
    ebx = esi + 4;

loc_0027BD55: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BD66; /* jae: above or equal (unsigned >=) */

loc_0027BD5B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027BD8C; /* je: equal / zero */

loc_0027BD5F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027BD8C; /* je: equal / zero */

loc_0027BD63: ;
    PUSH32(esp, edi);
    goto loc_0027BD82;

loc_0027BD66: ;
    edx = MEM32(ebx + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = ebx + -8;
    if (CMP_AE(_fa, _fb)) goto loc_0027BD8C; /* jae: above or equal (unsigned >=) */

loc_0027BD70: ;
    edx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027BD70; /* jb: below (unsigned <) */

loc_0027BD79: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027BD8C; /* je: equal / zero */

loc_0027BD7D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027BD8C; /* je: equal / zero */

loc_0027BD81: ;
    PUSH32(esp, edx);

loc_0027BD82: ;
    eax = esi;
    PUSH32(esp, 0x0027BD89u); RECOMP_ABI_CALL(0x0027BF20u, sub_0027BF20); /* call 0x0027BF20 */

loc_0027BD89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027BD8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027BD55; /* jne: not equal / not zero */

loc_0027BD96: ;
    POP32(esp, ebx);

loc_0027BD97: ;
    POP32(esp, esi);

loc_0027BD98: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BDA0
 * Original: 0x0027BDA0 - 0x0027BEB5 (277 bytes, 125 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027BDA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027BE8E; /* jle: less or equal (signed <=) */

loc_0027BDB6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ebp);
    ebp = eax * 8;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BDDA; /* jae: above or equal (unsigned >=) */

loc_0027BDD5: ;
    MEM32(eax + ecx) = ebx;
    MEM32(ecx) = edx;

loc_0027BDDA: ;
    edx = MEM32(ecx + ebp);
    ebx = MEM32(eax + ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BDEA; /* jae: above or equal (unsigned >=) */

loc_0027BDE4: ;
    MEM32(ecx + ebp) = ebx;
    MEM32(eax + ecx) = edx;

loc_0027BDEA: ;
    edx = MEM32(eax + ecx);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BDF8; /* jae: above or equal (unsigned >=) */

loc_0027BDF3: ;
    MEM32(eax + ecx) = edi;
    MEM32(ecx) = edx;

loc_0027BDF8: ;
    ebx = MEM32(esi);
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BE08; /* jae: above or equal (unsigned >=) */

loc_0027BE04: ;
    MEM32(esi) = edi;
    MEM32(edx) = ebx;

loc_0027BE08: ;
    edi = MEM32(eax + esi);
    ebx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BE16; /* jae: above or equal (unsigned >=) */

loc_0027BE11: ;
    MEM32(eax + esi) = ebx;
    MEM32(esi) = edi;

loc_0027BE16: ;
    edi = MEM32(esi);
    ebx = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BE22; /* jae: above or equal (unsigned >=) */

loc_0027BE1E: ;
    MEM32(esi) = ebx;
    MEM32(edx) = edi;

loc_0027BE22: ;
    edi = MEM32(esp + 0x14);
    edx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(edx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BE38; /* jae: above or equal (unsigned >=) */

loc_0027BE34: ;
    MEM32(edx) = ebp;
    MEM32(edi) = ebx;

loc_0027BE38: ;
    ebx = MEM32(esp + 0x14);
    ebp = MEM32(ebx);
    ebx = MEM32(edx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0xC) = ebp;
    if (CMP_AE(_fa, _fb)) goto loc_0027BE55; /* jae: above or equal (unsigned >=) */

loc_0027BE48: ;
    ebp = MEM32(esp + 0x14);
    MEM32(ebp) = ebx;
    ebx = MEM32(esp + 0xC);
    MEM32(edx) = ebx;

loc_0027BE55: ;
    ebx = MEM32(edx);
    ebp = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BE61; /* jae: above or equal (unsigned >=) */

loc_0027BE5D: ;
    MEM32(edx) = ebp;
    MEM32(edi) = ebx;

loc_0027BE61: ;
    edi = MEM32(esi);
    ebx = MEM32(eax + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BE6F; /* jae: above or equal (unsigned >=) */

loc_0027BE6A: ;
    MEM32(esi) = ebx;
    MEM32(eax + ecx) = edi;

loc_0027BE6F: ;
    edi = MEM32(edx);
    ebx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BE7B; /* jae: above or equal (unsigned >=) */

loc_0027BE77: ;
    MEM32(edx) = ebx;
    MEM32(esi) = edi;

loc_0027BE7B: ;
    edx = MEM32(esi);
    edi = MEM32(eax + ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_0027BEB2; /* jae: above or equal (unsigned >=) */

loc_0027BE86: ;
    MEM32(esi) = edi;
    MEM32(eax + ecx) = edx;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0027BE8E: ;
    eax = MEM32(esi);
    edx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BE9A; /* jae: above or equal (unsigned >=) */

loc_0027BE96: ;
    MEM32(esi) = edx;
    MEM32(ecx) = eax;

loc_0027BE9A: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BEA6; /* jae: above or equal (unsigned >=) */

loc_0027BEA2: ;
    MEM32(edi) = edx;
    MEM32(esi) = eax;

loc_0027BEA6: ;
    eax = MEM32(esi);
    edx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BEB2; /* jae: above or equal (unsigned >=) */

loc_0027BEAE: ;
    MEM32(esi) = edx;
    MEM32(ecx) = eax;

loc_0027BEB2: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BEC0
 * Original: 0x0027BEC0 - 0x0027BF20 (96 bytes, 44 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027BEC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + esi + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, edi);
    edi = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0027BEEC; /* jge: greater or equal (signed >=) */

loc_0027BED0: ;
    PUSH32(esp, ebp);

loc_0027BED1: ;
    ebp = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 4 + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + eax * 4 + -4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BEDB; /* jae: above or equal (unsigned >=) */

loc_0027BEDA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0027BEDB: ;
    ebp = MEM32(ecx + eax * 4);
    MEM32(ecx + esi * 4) = ebp;
    esi = eax;
    eax = eax + eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027BED1; /* jl: less (signed <) */

loc_0027BEEB: ;
    POP32(esp, ebp);

loc_0027BEEC: ;
    if (CMP_NE(_fa, _fb)) goto loc_0027BEF8; /* jne: not equal / not zero */

loc_0027BEEE: ;
    eax = MEM32(ecx + edx * 4 + -4);
    MEM32(ecx + esi * 4) = eax;
    esi = edx + -1;

loc_0027BEF8: ;
    eax = esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027BF1A; /* jge: greater or equal (signed >=) */

loc_0027BF04: ;
    edx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027BF1A; /* jae: above or equal (unsigned >=) */

loc_0027BF0B: ;
    MEM32(ecx + esi * 4) = edx;
    esi = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027BF04; /* jl: less (signed <) */

loc_0027BF1A: ;
    POP32(esp, edi);
    MEM32(ecx + esi * 4) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BF20
 * Original: 0x0027BF20 - 0x0027BFB5 (149 bytes, 66 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027BF20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ecx;
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027BF4B; /* je: equal / zero */

loc_0027BF3E: ;
    edi = edi;

loc_0027BF40: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    esi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0027BF40; /* jne: not equal / not zero */

loc_0027BF4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027BFB0; /* jge: greater or equal (signed >=) */

loc_0027BF4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027BFB0; /* jle: less or equal (signed <=) */

loc_0027BF53: ;
    esi = ebp + eax * 4;
    MEM32(esp + 0x14) = eax;
    goto loc_0027BF60;

    /* nop */

loc_0027BF60: ;
    eax = MEM32(esi);
    ecx = esi + edi * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) ecx = ebp; /* cmove */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    edx = esi;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027BF9C; /* je: equal / zero */

loc_0027BF74: ;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    edx = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0027BF90; /* jge: greater or equal (signed >=) */

loc_0027BF85: ;
    eax = edi * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0027BF98;

loc_0027BF90: ;
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebp + ecx * 4;

loc_0027BF98: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027BF74; /* jne: not equal / not zero */

loc_0027BF9C: ;
    eax = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_0027BF60; /* jne: not equal / not zero */

loc_0027BFB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BFC0
 * Original: 0x0027BFC0 - 0x0027C1C3 (515 bytes, 179 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027BFC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ebx + 4;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C195; /* je: equal / zero */

loc_0027BFE7: ;
    ecx = MEM32(esp + 0x24);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    eax = esi;
    PUSH32(esp, 0x0027BFFCu); RECOMP_ABI_CALL(0x0027C960u, sub_0027C960); /* call 0x0027C960 */

loc_0027BFFC: ;
    edi = esp + 0x20;
    edx = esp + 0x2C;
    ecx = esi;
    PUSH32(esp, 0x0027C00Bu); RECOMP_ABI_CALL(0x0027C820u, sub_0027C820); /* call 0x0027C820 */

loc_0027C00B: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C195; /* je: equal / zero */

loc_0027C017: ;
    esi = MEM32(esp + 0x2C);
    ecx = edi;
    MEM8(esp + 0x12) = 0;
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x0027C030u); RECOMP_ABI_CALL(0x0027D500u, sub_0027D500); /* call 0x0027D500 */

loc_0027C030: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C05F; /* je: equal / zero */

loc_0027C03C: ;
    edx = MEM32(ebx);
    ecx = MEM32(eax + 0x20);
    ebx = MEM32(eax + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0027C05F; /* jne: not equal / not zero */

loc_0027C051: ;
    eax = esi;
    esi = ecx + eax;
    MEM8(esp + 0x12) = 1;
    MEM32(esp + 0x14) = esi;

loc_0027C05F: ;
    ecx = edi;
    PUSH32(esp, 0x0027C066u); RECOMP_ABI_CALL(0x0027C920u, sub_0027C920); /* call 0x0027C920 */

loc_0027C066: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C087; /* je: equal / zero */

loc_0027C06C: ;
    ecx = MEM32(esp + 0x24);
    ecx = MEM32(ecx);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0027C087; /* jne: not equal / not zero */

loc_0027C082: ;
    _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0027C0A2;

loc_0027C087: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax);
    eax = MEM32(edi + 0xC);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C0AB; /* jne: not equal / not zero */

loc_0027C09D: ;
    _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edi;

loc_0027C0A2: ;
    MEM8(esp + 0x13) = 1;
    MEM32(esp + 0x14) = esi;

loc_0027C0AB: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C0D5; /* jne: not equal / not zero */

loc_0027C0B3: ;
    eax = MEM32(edi + 0x20);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(edi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C14F; /* jne: not equal / not zero */

loc_0027C0C6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = esi;
    MEM8(esp + 0x12) = 1;
    esi = edi;
    goto loc_0027C0D9;

loc_0027C0D5: ;
    esi = MEM32(esp + 0x18);

loc_0027C0D9: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C121; /* je: equal / zero */

loc_0027C0E1: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0x0027C0F0u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027C0F0: ;
    edi = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027C100u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027C100: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0027C10Bu); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027C10B: ;
    PUSH32(esp, esi);
    ebx = esp + 0x18;
    esi = edi;
    PUSH32(esp, 0x0027C117u); RECOMP_ABI_CALL(0x0027C4C0u, sub_0027C4C0); /* call 0x0027C4C0 */

loc_0027C117: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027C121: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C191; /* je: equal / zero */

loc_0027C129: ;
    edi = esi + 0x14;
    esi = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0027C13Bu); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027C13B: ;
    PUSH32(esp, edi);
    ebx = esp + 0x18;
    PUSH32(esp, 0x0027C145u); RECOMP_ABI_CALL(0x0027C4C0u, sub_0027C4C0); /* call 0x0027C4C0 */

loc_0027C145: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027C14F: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C191; /* je: equal / zero */

loc_0027C157: ;
    esi = MEM32(esp + 0x24);
    ecx = ebx;
    eax = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = ebp;
    PUSH32(esp, 0x0027C16Au); RECOMP_ABI_CALL(0x0027C450u, sub_0027C450); /* call 0x0027C450 */

loc_0027C16A: ;
    esi = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027C17Au); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027C17A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esp + 0x14;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027C187u); RECOMP_ABI_CALL(0x0027C4C0u, sub_0027C4C0); /* call 0x0027C4C0 */

loc_0027C187: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0027C191: ;
    ebx = MEM32(esp + 0x24);

loc_0027C195: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    edx = esp + 0x30;
    edi = ebx + 4;
    PUSH32(esp, 0x0027C1A9u); RECOMP_ABI_CALL(0x0027C240u, sub_0027C240); /* call 0x0027C240 */

loc_0027C1A9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx + 0x28;
    ebx = esp + 0x2C;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027C1B9u); RECOMP_ABI_CALL(0x0027C4C0u, sub_0027C4C0); /* call 0x0027C4C0 */

loc_0027C1B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027C1D0
 * Original: 0x0027C1D0 - 0x0027C23C (108 bytes, 45 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C1D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = esi + 0x28;
    PUSH32(esp, eax);
    ecx = ebp;
    eax = ebx;
    PUSH32(esp, 0x0027C1E8u); RECOMP_ABI_CALL(0x0027C960u, sub_0027C960); /* call 0x0027C960 */

loc_0027C1E8: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = ecx;
    edi = eax + -20;
    PUSH32(esp, 0x0027C1F8u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027C1F8: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0x0027C203u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027C203: ;
    edx = MEM32(ebp);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x28 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027C22D; /* jb: below (unsigned <) */

loc_0027C218: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027C225u); RECOMP_ABI_CALL(0x0027BFC0u, sub_0027BFC0); /* call 0x0027BFC0 */

loc_0027C225: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0027C22D: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027C240
 * Original: 0x0027C240 - 0x0027C441 (513 bytes, 179 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C240: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 4);
    ebx = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_0027C415; /* je: equal / zero */

loc_0027C25D: ;
    ebp = ZX8(MEM8(eax + 0x11));
    MEM32(eax + ebp * 4 + 4) = ecx;
    ecx = ZX8(MEM8(eax + 0x11));
    ecx = MEM32(eax + ecx * 4 + 4);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM8(ecx + 0x10) = LO8(edx);
    MEM8(ecx + 0x11) = LO8(edx);
    edx = ZX8(MEM8(eax + 0x11));
    ecx = MEM32(eax + edx * 4 + 4);
    edx = MEM32(ebx);
    MEM32(ecx + 0xC) = edx;
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX8(MEM8(eax + 0x11));
    edx = ZX8(MEM8(esi + 0x11));
    eax = MEM32(eax + ecx * 4 + 4);
    ecx = MEM32(esi + edx * 4 + 4);
    edx = ZX8(MEM8(ecx + 0x11));
    edx = MEM32(ecx + edx * 4 + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x1C) = eax;
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C2CB; /* je: equal / zero */

loc_0027C2AD: ;
    /* nop */

loc_0027C2B0: ;
    SET_LO8(ebx, MEM8(esi + 0x11));
    MEM8(esp + 0xF) = LO8(ebx);
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0x10) = LO8(ebx);
    ebx = ZX8(MEM8(esp + 0xF));
    esi = MEM32(esi + ebx * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C2B0; /* jne: not equal / not zero */

loc_0027C2CB: ;
    ebp = ZX8(MEM8(ecx + 0x11));
    esi = ebp;
    esi = esi ^ 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ebx;
    ebx = esi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x14) = ebx;
    SET_LO8(ebx, MEM8(ecx + 0x10));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C30F; /* jne: not equal / not zero */

loc_0027C2EF: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(ecx + 0x10) = LO8(edx);
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C302; /* je: equal / zero */

loc_0027C2FD: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C305; /* jne: not equal / not zero */

loc_0027C302: ;
    MEM32(edi + 0x14) = eax;

loc_0027C305: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    goto loc_0027C402;

loc_0027C30F: ;
    eax = SX8(LO8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C339; /* jne: not equal / not zero */

loc_0027C318: ;
    eax = MEM32(esp + 0x1C);
    MEM8(ecx + 0x10) = 0;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C32C; /* je: equal / zero */

loc_0027C327: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C32F; /* jne: not equal / not zero */

loc_0027C32C: ;
    MEM32(edi + 0x14) = eax;

loc_0027C32F: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    goto loc_0027C402;

loc_0027C339: ;
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    eax = MEM32(edx + esi * 4 + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0027C361; /* jne: not equal / not zero */

loc_0027C347: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ecx + ebp * 4 + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C353; /* je: equal / zero */

loc_0027C351: ;
    MEM32(eax) = ecx;

loc_0027C353: ;
    MEM32(edx + esi * 4 + 4) = ecx;
    MEM32(ecx) = edx;
    MEM8(ecx + 0x10) = LO8(ebx);
    MEM8(edx + 0x10) = LO8(ebx);
    goto loc_0027C3CA;

loc_0027C361: ;
    ebx = MEM32(eax + ebp * 4 + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edx + esi * 4 + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C36F; /* je: equal / zero */

loc_0027C36D: ;
    MEM32(ebx) = edx;

loc_0027C36F: ;
    MEM32(eax + ebp * 4 + 4) = edx;
    MEM32(edx) = eax;
    ebx = MEM32(eax + esi * 4 + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ecx + ebp * 4 + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C383; /* je: equal / zero */

loc_0027C381: ;
    MEM32(ebx) = ecx;

loc_0027C383: ;
    MEM32(eax + esi * 4 + 4) = ecx;
    MEM32(ecx) = eax;
    SET_LO8(ebx, MEM8(eax + 0x10));
    esi = SX8(LO8(ebx));
    MEM8(esp + 0xF) = LO8(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C3A7; /* jne: not equal / not zero */

loc_0027C399: ;
    SET_LO8(ebx, MEM8(esp + 0x14));
    MEM8(ecx + 0x10) = LO8(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edx + 0x10) = LO8(ebx);
    goto loc_0027C3C5;

loc_0027C3A7: ;
    SET_LO8(ebx, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C3B9; /* jne: not equal / not zero */

loc_0027C3AF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x10) = LO8(ebx);
    MEM8(edx + 0x10) = LO8(ebx);
    goto loc_0027C3C5;

loc_0027C3B9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x10) = LO8(ebx);
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(edx + 0x10) = LO8(ecx);

loc_0027C3C5: ;
    MEM8(eax + 0x10) = LO8(ebx);
    edx = eax;

loc_0027C3CA: ;
    eax = MEM32(esp + 0x20);
    ecx = ZX8(MEM8(eax + 0x11));
    MEM32(eax + ecx * 4 + 4) = edx;
    edx = ZX8(MEM8(eax + 0x11));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C3EA; /* je: equal / zero */

loc_0027C3E0: ;
    ecx = ZX8(MEM8(eax + 0x11));
    edx = MEM32(eax + ecx * 4 + 4);
    MEM32(edx) = eax;

loc_0027C3EA: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    eax = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_0027C3FA; /* je: equal / zero */

loc_0027C3F5: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C3FD; /* jne: not equal / not zero */

loc_0027C3FA: ;
    MEM32(edi + 0x14) = eax;

loc_0027C3FD: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */

loc_0027C402: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C409; /* je: equal / zero */

loc_0027C404: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C438; /* jne: not equal / not zero */

loc_0027C409: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 0x18) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0027C415: ;
    MEM32(edi + 4) = ecx;
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM8(ecx + 0x10) = LO8(edx);
    MEM8(ecx + 0x11) = LO8(edx);
    eax = MEM32(ebx);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(edi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x14) = ecx;
    MEM32(edi + 0x18) = ecx;
    MEM32(edi + 0x1C) = eax;

loc_0027C438: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027C450
 * Original: 0x0027C450 - 0x0027C4B2 (98 bytes, 43 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C450: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = MEM32(edi);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = ebp;
    edi = MEM32(edi + 0x10);
    MEM32(ebx + 0x10) = edi;
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx);
    edi = MEM32(edx + 4);
    edx = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0027C48C; /* jne: not equal / not zero */

loc_0027C487: ;
    MEM32(edx + 4) = eax;
    goto loc_0027C48F;

loc_0027C48C: ;
    MEM32(edx + 8) = eax;

loc_0027C48F: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C498; /* je: equal / zero */

loc_0027C496: ;
    MEM32(edx) = eax;

loc_0027C498: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C4A1; /* je: equal / zero */

loc_0027C49F: ;
    MEM32(edx) = eax;

loc_0027C4A1: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C4A9; /* jne: not equal / not zero */

loc_0027C4A6: ;
    MEM32(esi + 0x14) = eax;

loc_0027C4A9: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C4B1; /* jne: not equal / not zero */

loc_0027C4AE: ;
    MEM32(esi + 0x18) = eax;

loc_0027C4B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C4C0
 * Original: 0x0027C4C0 - 0x0027C513 (83 bytes, 30 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027C4C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C4F5; /* je: equal / zero */

loc_0027C4D5: ;
    ecx = MEM32(esp + 0x10);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0x0027C4E8u); RECOMP_ABI_CALL(0x0027C960u, sub_0027C960); /* call 0x0027C960 */

loc_0027C4E8: ;
    edi = esp + 8;
    edx = ebx;
    ecx = esi;
    PUSH32(esp, 0x0027C4F5u); RECOMP_ABI_CALL(0x0027C820u, sub_0027C820); /* call 0x0027C820 */

loc_0027C4F5: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = ebx;
    edi = esi;
    PUSH32(esp, 0x0027C50Cu); RECOMP_ABI_CALL(0x0027C240u, sub_0027C240); /* call 0x0027C240 */

loc_0027C50C: ;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027C520
 * Original: 0x0027C520 - 0x0027C819 (761 bytes, 219 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C520: ;
    _fb = (uint32_t)(0x154) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x154;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x168);
    ecx = esp + 0x20;
    edx = esi;
    MEM32(esp + 0x160) = 0;
    PUSH32(esp, 0x0027C549u); RECOMP_ABI_CALL(0x0027C8B0u, sub_0027C8B0); /* call 0x0027C8B0 */

loc_0027C549: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C558; /* jne: not equal / not zero */

loc_0027C550: ;
    PUSH32(esp, 0x0027C555u); RECOMP_ABI_CALL(0x0027C920u, sub_0027C920); /* call 0x0027C920 */

loc_0027C555: ;
    MEM32(edi + 0x14) = eax;

loc_0027C558: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C567; /* jne: not equal / not zero */

loc_0027C55F: ;
    PUSH32(esp, 0x0027C564u); RECOMP_ABI_CALL(0x0027D500u, sub_0027D500); /* call 0x0027D500 */

loc_0027C564: ;
    MEM32(edi + 0x18) = eax;

loc_0027C567: ;
    ebx = MEM32(esp + 0x160);
    eax = ZX8(MEM8(esp + ebx + 0x11F));
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = MEM32(esp + ebx * 4 + 0x1C);
    edx = esp + ebx * 4 + 0x20;
    edi = ebp + eax * 4 + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C688; /* je: equal / zero */

loc_0027C58D: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C650; /* je: equal / zero */

loc_0027C598: ;
    MEM32(edx) = 0;
    edx = MEM32(esp + 0x160);
    MEM8(esp + edx + 0x120) = 0;
    edx = MEM32(esp + 0x160);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x160) = edx;
    MEM32(esp + edx * 4 + 0x20) = ecx;
    edx = MEM32(esp + 0x160);
    MEM8(esp + edx + 0x120) = 0;
    MEM32(esp + 0x160) = MEM32(esp + 0x160) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C60D; /* je: equal / zero */

loc_0027C5DD: ;
    /* nop */

loc_0027C5E0: ;
    edx = MEM32(esp + 0x160);
    ecx = eax;
    eax = MEM32(eax + 4);
    MEM32(esp + edx * 4 + 0x20) = ecx;
    edx = MEM32(esp + 0x160);
    MEM8(esp + edx + 0x120) = 0;
    MEM32(esp + 0x160) = MEM32(esp + 0x160) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C5E0; /* jne: not equal / not zero */

loc_0027C60D: ;
    MEM32(edi) = eax;
    MEM32(eax) = ebp;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + ebx * 4 + 0x20) = eax;
    MEM8(esp + ebx + 0x120) = 1;
    MEM32(eax + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C629; /* je: equal / zero */

loc_0027C627: ;
    MEM32(edx) = eax;

loc_0027C629: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C635; /* je: equal / zero */

loc_0027C633: ;
    MEM32(edx) = ecx;

loc_0027C635: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C641; /* je: equal / zero */

loc_0027C63F: ;
    MEM32(ecx) = eax;

loc_0027C641: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    ebx = MEM32(esp + 0x160);
    MEM8(eax + 0x10) = LO8(ecx);
    goto loc_0027C699;

loc_0027C650: ;
    MEM32(edi) = ecx;
    MEM32(ecx) = ebp;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C660; /* je: equal / zero */

loc_0027C65E: ;
    MEM32(eax) = ecx;

loc_0027C660: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    MEM32(edx) = ecx;
    MEM8(ecx + 0x10) = LO8(eax);
    ecx = MEM32(esp + 0x160);
    MEM8(esp + ecx + 0x120) = 1;
    ebx = MEM32(esp + 0x160);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x160) = ebx;
    goto loc_0027C699;

loc_0027C688: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C699; /* je: equal / zero */

loc_0027C691: ;
    MEM32(esi) = ebp;
    edx = MEM32(edi);
    MEM8(edx + 0x10) = 0;

loc_0027C699: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C7FE; /* je: equal / zero */

loc_0027C6A2: ;
    eax = esp + ebx * 4 + 0x1C;
    goto loc_0027C6B0;

loc_0027C6A8: ;
    eax = MEM32(esp + 0x18);
    /* nop */

loc_0027C6B0: ;
    ebp = ZX8(MEM8(esp + ebx + 0x11F));
    ecx = MEM32(eax);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ebp;
    esi = esi ^ 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + 0x10));
    MEM32(esp + 0x14) = edi;
    edx = ebp;
    edi = SX8(LO8(eax));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0027C6EA; /* jne: not equal / not zero */

loc_0027C6E1: ;
    MEM8(ecx + 0x10) = 0;
    goto loc_0027C7BD;

loc_0027C6EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C7C8; /* je: equal / zero */

loc_0027C6F2: ;
    eax = MEM32(ecx + esi * 4 + 4);
    SET_LO8(ebx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C7D1; /* je: equal / zero */

loc_0027C701: ;
    edi = SX8(LO8(ebx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C743; /* jne: not equal / not zero */

loc_0027C70A: ;
    MEM8(eax + 0x10) = 0;
    MEM8(ecx + 0x10) = 0;
    edx = MEM32(eax + ebp * 4 + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx + esi * 4 + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C720; /* je: equal / zero */

loc_0027C71E: ;
    MEM32(edx) = ecx;

loc_0027C720: ;
    ebx = MEM32(esp + 0x1C);
    edx = ZX8(MEM8(esp + ebx + 0x11F));
    MEM32(eax + ebp * 4 + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx);
    MEM32(ecx + edx * 4 + 4) = eax;
    MEM32(eax) = ecx;
    goto loc_0027C7BD;

loc_0027C743: ;
    edi = MEM32(eax + ebp * 4 + 4);
    ebx = MEM32(edi + esi * 4 + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(eax + ebp * 4 + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C755; /* je: equal / zero */

loc_0027C753: ;
    MEM32(ebx) = eax;

loc_0027C755: ;
    MEM32(edi + esi * 4 + 4) = eax;
    MEM32(eax) = edi;
    ebx = MEM32(edi + ebp * 4 + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ecx + esi * 4 + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C769; /* je: equal / zero */

loc_0027C767: ;
    MEM32(ebx) = ecx;

loc_0027C769: ;
    MEM32(edi + ebp * 4 + 4) = ecx;
    MEM32(ecx) = edi;
    SET_LO8(ebx, MEM8(edi + 0x10));
    esi = SX8(LO8(ebx));
    MEM8(esp + 0x13) = LO8(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C788; /* jne: not equal / not zero */

loc_0027C77F: ;
    MEM8(ecx + 0x10) = LO8(edx);
    MEM8(eax + 0x10) = 0;
    goto loc_0027C7A1;

loc_0027C788: ;
    SET_LO8(edx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM8(ecx + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0027C79A; /* jne: not equal / not zero */

loc_0027C794: ;
    MEM8(eax + 0x10) = 0;
    goto loc_0027C7A1;

loc_0027C79A: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(eax + 0x10) = LO8(ecx);

loc_0027C7A1: ;
    ebx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    ecx = ZX8(MEM8(esp + ebx + 0x11F));
    eax = MEM32(edx);
    MEM8(edi + 0x10) = 0;
    MEM32(eax + ecx * 4 + 4) = edi;
    MEM32(edi) = eax;

loc_0027C7BD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C6A8; /* jne: not equal / not zero */

loc_0027C7C6: ;
    goto loc_0027C7FE;

loc_0027C7C8: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(ecx + 0x10) = LO8(edx);
    goto loc_0027C7FE;

loc_0027C7D1: ;
    MEM8(eax + 0x10) = LO8(edx);
    edx = MEM32(eax + ebp * 4 + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx + esi * 4 + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C7E2; /* je: equal / zero */

loc_0027C7E0: ;
    MEM32(edx) = ecx;

loc_0027C7E2: ;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + ebp * 4 + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(esp + edx * 4 + 0x1C);
    edx = ZX8(MEM8(esp + edx + 0x11F));
    MEM32(ecx + edx * 4 + 4) = eax;
    MEM32(eax) = ecx;

loc_0027C7FE: ;
    eax = MEM32(esp + 0x168);
    ecx = MEM32(eax + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(eax + 0x1C) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x154) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x154;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027C820
 * Original: 0x0027C820 - 0x0027C8AC (140 bytes, 59 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027C820: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0027C82B; /* jne: not equal / not zero */

loc_0027C828: ;
    eax = MEM32(esi + 4);

loc_0027C82B: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C85B; /* je: equal / zero */

loc_0027C841: ;
    ebx = MEM32(edx);
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C841; /* jne: not equal / not zero */

loc_0027C85B: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    SET_LO8(ecx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C880; /* jne: not equal / not zero */

loc_0027C868: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C8A5; /* je: equal / zero */

loc_0027C86E: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C868; /* je: equal / zero */

loc_0027C880: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027C8A0; /* je: equal / zero */

loc_0027C893: ;
    esi = MEM32(edx);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(eax + 0x11) = LO8(edx);

loc_0027C8A0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0027C8A5: ;
    MEM32(edi) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027C8B0
 * Original: 0x0027C8B0 - 0x0027C913 (99 bytes, 29 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C8B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x140) = eax;
    MEM32(ecx) = edi;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x140);
    MEM8(ecx + esi + 0x100) = LO8(eax);
    eax = MEM32(ecx + 0x140);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x140) = eax;
    esi = eax;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C90D; /* je: equal / zero */

loc_0027C8DD: ;
    /* nop */

loc_0027C8E0: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    MEM32(ecx + esi * 4) = eax;
    esi = MEM32(ecx + 0x140);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ecx + esi + 0x100) = LO8(edx);
    edx = MEM32(ecx + 0x140);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x140) = edx;
    esi = edx;
    edx = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C8E0; /* jne: not equal / not zero */

loc_0027C90D: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0027D610(); return; /* tail jmp 0x0027D610 */

}

/**
 * sub_0027C920
 * Original: 0x0027C920 - 0x0027C956 (54 bytes, 25 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0027C920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027C920: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C93A; /* je: equal / zero */

loc_0027C927: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C955; /* je: equal / zero */

loc_0027C92E: ;
    edi = edi;

loc_0027C930: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C930; /* jne: not equal / not zero */

loc_0027C939: ;
    esp += 4; return; /* ret */

loc_0027C93A: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C953; /* je: equal / zero */

loc_0027C940: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C953; /* je: equal / zero */

loc_0027C945: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C955; /* jne: not equal / not zero */

loc_0027C94A: ;
    ecx = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C945; /* jne: not equal / not zero */

loc_0027C953: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027C955: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C960
 * Original: 0x0027C960 - 0x0027C9EA (138 bytes, 61 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027C960: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C9C3; /* je: equal / zero */

loc_0027C96B: ;
    esi = MEM32(ecx);
    /* nop */

loc_0027C970: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = ZX8(LO8(ecx));
    if (CMP_EQ(_fa, _fb)) edi = eax; /* cmove */
    eax = MEM32(eax + edx * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C970; /* jne: not equal / not zero */

loc_0027C986: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C9C3; /* je: equal / zero */

loc_0027C98A: ;
    ecx = edi;
    PUSH32(esp, 0x0027C991u); RECOMP_ABI_CALL(0x0027D500u, sub_0027D500); /* call 0x0027D500 */

loc_0027C991: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C9C3; /* je: equal / zero */

loc_0027C995: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C9C3; /* jne: not equal / not zero */

loc_0027C9A1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    ecx = MEM32(eax + 4);
    if (CMP_AE(_fa, _fb)) edi = eax; /* cmovae */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C9CA; /* je: equal / zero */

loc_0027C9AD: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C9BD; /* je: equal / zero */

loc_0027C9B4: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C9B4; /* jne: not equal / not zero */

loc_0027C9BD: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C995; /* jne: not equal / not zero */

loc_0027C9C3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0027C9CA: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C9C3; /* je: equal / zero */

loc_0027C9D0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C9C3; /* je: equal / zero */

loc_0027C9D5: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C9BD; /* jne: not equal / not zero */

loc_0027C9DA: ;
    eax = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C9D5; /* jne: not equal / not zero */

loc_0027C9E3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027C9F0
 * Original: 0x0027C9F0 - 0x0027CA09 (25 bytes, 10 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027C9F0: ;
    ecx = MEM32(eax + 0x68);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x333570);
    PUSH32(esp, 0x0027CA02u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027CA02: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027CA10
 * Original: 0x0027CA10 - 0x0027CA2C (28 bytes, 12 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027CA10: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CA29; /* je: equal / zero */

loc_0027CA17: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x33345C);
    PUSH32(esp, 0x0027CA25u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027CA25: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_0027CA29: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0027CA30
 * Original: 0x0027CA30 - 0x0027CA73 (67 bytes, 29 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027CA30: ;
    edx = MEM32(eax);
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CA4E; /* je: equal / zero */

loc_0027CA39: ;
    edx = ecx;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CA4B; /* je: equal / zero */

loc_0027CA42: ;
    edx = ecx;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027CA42; /* jne: not equal / not zero */

loc_0027CA4B: ;
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

loc_0027CA4E: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CA6E; /* je: equal / zero */

loc_0027CA54: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CA6E; /* je: equal / zero */

loc_0027CA59: ;
    /* nop */

loc_0027CA60: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027CA70; /* jne: not equal / not zero */

loc_0027CA65: ;
    edx = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027CA60; /* jne: not equal / not zero */

loc_0027CA6E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027CA70: ;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0027CA80
 * Original: 0x0027CA80 - 0x0027CBFC (380 bytes, 127 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027CA80: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x33319C);
    PUSH32(esp, 0x333194);
    PUSH32(esp, 0x333184);
    PUSH32(esp, 0x0027CAA2u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027CAA2: ;
    ebx = MEM32(esp + 0x40);
    ecx = MEM32(ebx + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebx + 0x6C);
    edx = eax + -1;
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx + 0x80;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + edx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x24) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027CAF8; /* je: equal / zero */

loc_0027CAE4: ;
    ebp = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CAF8; /* je: equal / zero */

loc_0027CAEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027CB4F; /* ja: above (unsigned >) */

loc_0027CAEF: ;
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027CB4F; /* jae: above or equal (unsigned >=) */

loc_0027CAF8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027CBC8; /* jae: above or equal (unsigned >=) */

loc_0027CB00: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027CB59; /* jb: below (unsigned <) */

loc_0027CB04: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CB59; /* je: equal / zero */

loc_0027CB08: ;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0027CB22u); RECOMP_ABI_CALL(0x0027CA30u, sub_0027CA30); /* call 0x0027CA30 */

loc_0027CB22: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CBB8; /* je: equal / zero */

loc_0027CB2E: ;
    ebp = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CBB8; /* je: equal / zero */

loc_0027CB39: ;
    eax = ebx + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027CB4F; /* ja: above (unsigned >) */

loc_0027CB43: ;
    edx = MEM32(ebx + 0x6C);
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027CBB8; /* jb: below (unsigned <) */

loc_0027CB4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027CB59: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(eax + 8);
    edi = esi + 0x10;
    eax = edi + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027CB84; /* je: equal / zero */

loc_0027CB6E: ;
    edx = ebx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027CBA2; /* ja: above (unsigned >) */

loc_0027CB78: ;
    edx = MEM32(ebx + 0x6C);
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027CBA2; /* jae: above or equal (unsigned >=) */

loc_0027CB84: ;
    eax = MEM32(eax + 4);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x333174);
    PUSH32(esp, 0x0027CB97u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027CB97: ;
    ebx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027CBA2: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + -12);
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027CBB8: ;
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027CB00; /* jb: below (unsigned <) */

loc_0027CBC4: ;
    edx = MEM32(esp + 0x28);

loc_0027CBC8: ;
    if (CMP_NE(_fa, _fb)) goto loc_0027CB4F; /* jne: not equal / not zero */

loc_0027CBCA: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027CB4F; /* jne: not equal / not zero */

loc_0027CBDC: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x68) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027CB4F; /* jne: not equal / not zero */

loc_0027CBE9: ;
    edx = MEM32(esp + 0x30);
    eax = ebx;
    PUSH32(esp, 0x0027CBF4u); RECOMP_ABI_CALL(0x0027C9F0u, sub_0027C9F0); /* call 0x0027C9F0 */

loc_0027CBF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027CC00
 * Original: 0x0027CC00 - 0x0027CD77 (375 bytes, 129 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027CC00: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    MEM32(ecx + 4) = esi;
    _fa = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x64), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CC3D; /* je: equal / zero */

loc_0027CC19: ;
    eax = MEM32(edi + 0x6C);
    ebx = MEM32(ecx);
    PUSH32(esp, 0x3334C8);
    PUSH32(esp, 0x333194);
    edx = eax;
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x333520);
    PUSH32(esp, 0x0027CC3Au); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027CC3A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027CC3D: ;
    eax = MEM32(edi + 0x6C);
    edx = MEM32(edi + 0x30);
    ecx = eax + -1;
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = esi;
    ebp = edi + 0x80;
    esi = ecx + ebp;
    MEM32(esp + 0x24) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0027CC92; /* je: equal / zero */

loc_0027CC76: ;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CC92; /* je: equal / zero */

loc_0027CC7D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027CD6D; /* ja: above (unsigned >) */

loc_0027CC85: ;
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027CD6D; /* jae: above or equal (unsigned >=) */

loc_0027CC92: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027CD26; /* jae: above or equal (unsigned >=) */

loc_0027CC9E: ;
    edi = edi;

loc_0027CCA0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027CD50; /* jb: below (unsigned <) */

loc_0027CCA8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CD50; /* je: equal / zero */

loc_0027CCB0: ;
    edi = MEM32(edx + 0x20);
    eax = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x10);
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ebx;
    ebx = MEM32(eax);
    PUSH32(esp, 0x33350C);
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x0027CCD6u); RECOMP_ABI_CALL(0x00272D20u, sub_00272D20); /* call 0x00272D20 */

loc_0027CCD6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x1C;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0027CCE6u); RECOMP_ABI_CALL(0x0027CA30u, sub_0027CA30); /* call 0x0027CA30 */

loc_0027CCE6: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CD12; /* je: equal / zero */

loc_0027CCEE: ;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CD12; /* je: equal / zero */

loc_0027CCF5: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027CD6D; /* ja: above (unsigned >) */

loc_0027CD02: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax + 0x6C);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027CD6D; /* jae: above or equal (unsigned >=) */

loc_0027CD12: ;
    edi = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x20);

loc_0027CD1A: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027CCA0; /* jb: below (unsigned <) */

loc_0027CD26: ;
    if (CMP_NE(_fa, _fb)) goto loc_0027CD6D; /* jne: not equal / not zero */

loc_0027CD28: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027CD6D; /* jne: not equal / not zero */

loc_0027CD36: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x68) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027CD6D; /* jne: not equal / not zero */

loc_0027CD3F: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x0027CD48u); RECOMP_ABI_CALL(0x0027CA10u, sub_0027CA10); /* call 0x0027CA10 */

loc_0027CD48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027CD50: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0027CD1A;

loc_0027CD6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027CD80
 * Original: 0x0027CD80 - 0x0027CE41 (193 bytes, 51 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027CD80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296BA6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x34A64C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0027CDA9; /* jne: not equal / not zero */

loc_0027CDA2: ;
    PUSH32(esp, 0x0027CDA7u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_0027CDA7: ;
    esi = eax;

loc_0027CDA9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027CDB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027CDAEu); } /* indirect call */
    }

loc_0027CDB4: ;
    MEM32(esp + 0x14) = 0;
    SET_LO8(ecx, MEM8(0x654200));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027CE05; /* jne: not equal / not zero */

loc_0027CDCB: ;
    MEM32(0x654200) = MEM32(0x654200) | eax;
    _fa = (uint32_t)(MEM32(0x654200)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esp + 0x14) = LO8(eax);
    MEM32(0x6541FC) = 0x64CFA0;
    PUSH32(esp, 0x0027CDE4u); RECOMP_ABI_CALL(0x00273430u, sub_00273430); /* call 0x00273430 */

loc_0027CDE4: ;
    edx = 0x14;
    ecx = eax;
    PUSH32(esp, 0x0027CDF0u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027CDF0: ;
    ecx = MEM32(0x6541FC);
    PUSH32(esp, 0x297920);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0027CE02u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_0027CE02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027CE05: ;
    eax = MEM32(0x64CFA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027CE21; /* jne: not equal / not zero */

loc_0027CE0E: ;
    SET_LO8(eax, MEM8(0x64CFB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CE21; /* je: equal / zero */

loc_0027CE17: ;
    ecx = 0x10;
    PUSH32(esp, 0x0027CE21u); RECOMP_ABI_CALL(0x00011700u, sub_00011700); /* call 0x00011700 */

loc_0027CE21: ;
    edi = MEM32(0x64CFA0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027CE2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027CE28u); } /* indirect call */
    }

loc_0027CE2E: ;
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
 * sub_0027CE50
 * Original: 0x0027CE50 - 0x0027CED0 (128 bytes, 41 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027CE50: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0027CE78; /* jne: not equal / not zero */

loc_0027CE71: ;
    PUSH32(esp, 0x0027CE76u); RECOMP_ABI_CALL(0x00011690u, sub_00011690); /* call 0x00011690 */

loc_0027CE76: ;
    esi = eax;

loc_0027CE78: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 8) = esi;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027CE83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027CE7Du); } /* indirect call */
    }

loc_0027CE83: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CEB7; /* je: equal / zero */

loc_0027CE97: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0027CEB6; /* je: equal / zero */

loc_0027CEA4: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0027CEABu); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_0027CEAB: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027CEB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027CEB3u); } /* indirect call */
    }

loc_0027CEB6: ;
    POP32(esp, edi);

loc_0027CEB7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x0027CEBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027CEB8u); } /* indirect call */
    }

loc_0027CEBE: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027CED0
 * Original: 0x0027CED0 - 0x0027CF1D (77 bytes, 33 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027CED0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = eax;
    MEM8(esp + 0xC) = 0;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0027CEF1u); RECOMP_ABI_CALL(0x0027D660u, sub_0027D660); /* call 0x0027D660 */

loc_0027CEF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CF14; /* je: equal / zero */

loc_0027CEF5: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027CF14; /* jb: below (unsigned <) */

loc_0027CEFF: ;
    ebx = MEM32(eax + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027CF14; /* jae: above or equal (unsigned >=) */

loc_0027CF06: ;
    edi = edi << 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027CF14; /* jbe: below or equal (unsigned <=) */

loc_0027CF10: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027CF16; /* jbe: below or equal (unsigned <=) */

loc_0027CF14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027CF16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027CF20
 * Original: 0x0027CF20 - 0x0027CFE2 (194 bytes, 53 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027CF20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax;
    ebx = esi + 0x34;
    ecx = 0x1000;
    eax = ebx;
    MEM32(esi + 0x28) = edi;
    PUSH32(esp, 0x0027CF3Bu); RECOMP_ABI_CALL(0x002780D0u, sub_002780D0); /* call 0x002780D0 */

loc_0027CF3B: ;
    ecx = MEM32(0x64D950);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = ecx;
    MEM32(esi + 0x80) = ebp;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;
    eax = edi + 0xFFF;
    eax = eax & 0xFFFFF000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x2C) = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 0xFFFFF000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = eax;
    eax = edi;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x84) = eax;
    edi = MEM32(esi + 0x90);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D950) = ecx;
    ecx = MEM32(esi + 0x9C);
    eax = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    MEM32(esi + 0x90) = edi;
    MEM32(esi + 0x9C) = eax;
    eax = MEM32(esi + 0x84);
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027CFDAu); RECOMP_ABI_CALL(0x0027BFC0u, sub_0027BFC0); /* call 0x0027BFC0 */

loc_0027CFDA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027CFF0
 * Original: 0x0027CFF0 - 0x0027D01A (42 bytes, 12 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027CFF0: ;
    eax = MEM32(0x64CFA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027CFFE; /* jne: not equal / not zero */

loc_0027CFF9: ;
    PUSH32(esp, 0x0027CFFEu); RECOMP_ABI_CALL(0x0027CD80u, sub_0027CD80); /* call 0x0027CD80 */

loc_0027CFFE: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027D012u); RECOMP_ABI_CALL(0x00295EEDu, sub_00295EED); /* call 0x00295EED */

loc_0027D012: ;
    PUSH32(esp, 0x0027D017u); RECOMP_ABI_CALL(0x00030280u, sub_00030280); /* call 0x00030280 */

loc_0027D017: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D020
 * Original: 0x0027D020 - 0x0027D06A (74 bytes, 31 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D020: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D069; /* je: equal / zero */

loc_0027D027: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edi + 0x24;
    /* nop */

loc_0027D030: ;
    esi = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0027D03Bu); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027D03B: ;
    eax = esi + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027D044u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027D044: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D060; /* je: equal / zero */

loc_0027D048: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027D04Eu); RECOMP_ABI_CALL(0x0027CFF0u, sub_0027CFF0); /* call 0x0027CFF0 */

loc_0027D04E: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0027D055u); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_0027D055: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027D060u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027D05Du); } /* indirect call */
    }

loc_0027D060: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D030; /* jne: not equal / not zero */

loc_0027D067: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0027D069: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D070
 * Original: 0x0027D070 - 0x0027D11C (172 bytes, 68 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x64CFA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D087; /* jne: not equal / not zero */

loc_0027D082: ;
    PUSH32(esp, 0x0027D087u); RECOMP_ABI_CALL(0x0027CD80u, sub_0027CD80); /* call 0x0027CD80 */

loc_0027D087: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027D096u); RECOMP_ABI_CALL(0x00295EBFu, sub_00295EBF); /* call 0x00295EBF */

loc_0027D096: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D0A2; /* jne: not equal / not zero */

loc_0027D09C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0027D0A2: ;
    eax = MEM32(0x64CF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D0B0; /* jne: not equal / not zero */

loc_0027D0AB: ;
    PUSH32(esp, 0x0027D0B0u); RECOMP_ABI_CALL(0x00273050u, sub_00273050); /* call 0x00273050 */

loc_0027D0B0: ;
    PUSH32(esp, esi);
    edx = 0xA8;
    ecx = eax;
    PUSH32(esp, 0x0027D0BDu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0027D0BD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D0F6; /* je: equal / zero */

loc_0027D0C3: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x0027D0CBu); RECOMP_ABI_CALL(0x0027CF20u, sub_0027CF20); /* call 0x0027CF20 */

loc_0027D0CB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D0F8; /* je: equal / zero */

loc_0027D0D1: ;
    PUSH32(esp, edi);
    ebx = esp + 0x18;
    esi = ebp;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x0027D0E1u); RECOMP_ABI_CALL(0x0027D390u, sub_0027D390); /* call 0x0027D390 */

loc_0027D0E1: ;
    eax = edi + 0x14;
    PUSH32(esp, eax);
    esi = ebp + 0x24;
    PUSH32(esp, 0x0027D0EDu); RECOMP_ABI_CALL(0x0027D3F0u, sub_0027D3F0); /* call 0x0027D3F0 */

loc_0027D0ED: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0027D0F6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027D0F8: ;
    eax = MEM32(0x64CFA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D106; /* jne: not equal / not zero */

loc_0027D101: ;
    PUSH32(esp, 0x0027D106u); RECOMP_ABI_CALL(0x0027CD80u, sub_0027CD80); /* call 0x0027CD80 */

loc_0027D106: ;
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027D113u); RECOMP_ABI_CALL(0x00295EEDu, sub_00295EED); /* call 0x00295EED */

loc_0027D113: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D120
 * Original: 0x0027D120 - 0x0027D1DE (190 bytes, 79 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D120: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    esi = MEM32(ebx + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0027D186; /* je: equal / zero */

loc_0027D12E: ;
    edi = edi;

loc_0027D130: ;
    eax = MEM32(esp + 0x18);
    edi = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D13Du); RECOMP_ABI_CALL(0x002795C0u, sub_002795C0); /* call 0x002795C0 */

loc_0027D13D: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D190; /* jne: not equal / not zero */

loc_0027D143: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D15E; /* je: equal / zero */

loc_0027D14A: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D15A; /* je: equal / zero */

loc_0027D151: ;
    ecx = eax;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D151; /* jne: not equal / not zero */

loc_0027D15A: ;
    eax = ecx;
    goto loc_0027D180;

loc_0027D15E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D17E; /* je: equal / zero */

loc_0027D164: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D17E; /* je: equal / zero */

loc_0027D169: ;
    /* nop */

loc_0027D170: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D180; /* jne: not equal / not zero */

loc_0027D175: ;
    esi = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D170; /* jne: not equal / not zero */

loc_0027D17E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0027D180: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0027D130; /* jne: not equal / not zero */

loc_0027D186: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0027D190: ;
    ecx = MEM32(edi + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x84) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D1D4; /* jne: not equal / not zero */

loc_0027D19E: ;
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0x0027D1A6u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027D1A6: ;
    edx = ebx + 0x24;
    eax = edi + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0027D1B6u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027D1B6: ;
    esi = ebx + 0x48;
    PUSH32(esp, edi);
    ebx = esp + 0x1C;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x0027D1C7u); RECOMP_ABI_CALL(0x0027D390u, sub_0027D390); /* call 0x0027D390 */

loc_0027D1C7: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0027D1D4u); RECOMP_ABI_CALL(0x0027D3F0u, sub_0027D3F0); /* call 0x0027D3F0 */

loc_0027D1D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D1E0
 * Original: 0x0027D1E0 - 0x0027D22D (77 bytes, 33 insns)
 * Folder: memory (between: 0x0027B720 and 0x0027D230)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D1E0: ;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D1F8; /* je: equal / zero */

loc_0027D1EB: ;
    goto loc_0027D1F0;

    /* nop */

loc_0027D1F0: ;
    ecx = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D1F0; /* jne: not equal / not zero */

loc_0027D1F8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027D201; /* je: equal / zero */

loc_0027D1FE: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027D201: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027D207u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027D207: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027D213u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027D213: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027D219u); RECOMP_ABI_CALL(0x0027CFF0u, sub_0027CFF0); /* call 0x0027CFF0 */

loc_0027D219: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0027D220u); RECOMP_ABI_CALL(0x000126D0u, sub_000126D0); /* call 0x000126D0 */

loc_0027D220: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0027D22Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027D228u); } /* indirect call */
    }

loc_0027D22B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027D230
 * Original: 0x0027D230 - 0x0027D387 (343 bytes, 107 insns)
 * Folder: memory (source: metapage.cpp)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D230: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x296B28);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0x0027D25Cu); RECOMP_ABI_CALL(0x0027CED0u, sub_0027CED0); /* call 0x0027CED0 */

loc_0027D25C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D29B; /* je: equal / zero */

loc_0027D262: ;
    edx = MEM32(edi + 0x98);
    ecx = MEM32(edi + 0x94);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x98) = edx;
    MEM32(edi + 0x94) = ecx;
    eax = MEM32(edi + 0x88);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    MEM32(edi + 0x88) = eax;
    PUSH32(esp, ebx);
    eax = edi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D296u); RECOMP_ABI_CALL(0x0027BFC0u, sub_0027BFC0); /* call 0x0027BFC0 */

loc_0027D296: ;
    goto loc_0027D370;

loc_0027D29B: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ebx = esi + 0x48;
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0x0027D2ABu); RECOMP_ABI_CALL(0x0027CED0u, sub_0027CED0); /* call 0x0027CED0 */

loc_0027D2AB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D313; /* jne: not equal / not zero */

loc_0027D2B1: ;
    esi = MEM32(0x64CF98);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D2C2; /* jne: not equal / not zero */

loc_0027D2BB: ;
    PUSH32(esp, 0x0027D2C0u); RECOMP_ABI_CALL(0x002767C0u, sub_002767C0); /* call 0x002767C0 */

loc_0027D2C0: ;
    esi = eax;

loc_0027D2C2: ;
    eax = esi + 0x2E04;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x0027D2D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027D2CDu); } /* indirect call */
    }

loc_0027D2D3: ;
    PUSH32(esp, 0x147);
    PUSH32(esp, 0x3335EC);
    MEM32(esp + 0x20) = 0;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x333590);
    PUSH32(esp, 0x0027D2F5u); RECOMP_ABI_CALL(0x002769D0u, sub_002769D0); /* call 0x002769D0 */

loc_0027D2F5: ;
    ecx = MEM32(0x343DF4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ebx = esi;
    PUSH32(esp, 0x0027D306u); RECOMP_ABI_CALL(0x00276A10u, sub_00276A10); /* call 0x00276A10 */

loc_0027D306: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D30C; /* jne: not equal / not zero */

loc_0027D30B: ;
    /* int3: debug-trap slide byte, stepped over */

loc_0027D30C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0027D313u); RECOMP_ABI_CALL(0x0028E1BDu, sub_0028E1BD); /* call 0x0028E1BD */

loc_0027D313: ;
    edx = MEM32(edi + 0x98);
    ecx = MEM32(edi + 0x94);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x94) = ecx;
    MEM32(edi + 0x98) = edx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi + 0x88) = MEM32(edi + 0x88) - ebp;
    _fa = (uint32_t)(MEM32(edi + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = edi + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027D343u); RECOMP_ABI_CALL(0x0027BFC0u, sub_0027BFC0); /* call 0x0027BFC0 */

loc_0027D343: ;
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0x0027D34Bu); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027D34B: ;
    ebp = edi + 0x14;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0x0027D359u); RECOMP_ABI_CALL(0x0027C520u, sub_0027C520); /* call 0x0027C520 */

loc_0027D359: ;
    PUSH32(esp, edi);
    ebx = esp + 0x24;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0x0027D367u); RECOMP_ABI_CALL(0x0027D390u, sub_0027D390); /* call 0x0027D390 */

loc_0027D367: ;
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0027D370u); RECOMP_ABI_CALL(0x0027D3F0u, sub_0027D3F0); /* call 0x0027D3F0 */

loc_0027D370: ;
    ecx = MEM32(esp + 0x10);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}
