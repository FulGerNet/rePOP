#ifndef RESOT_NATIVE_VSH_H
#define RESOT_NATIVE_VSH_H
#include <stdint.h>
#include <string.h>

/* RE-SoT: match the native shader's operand-use guards, including output
 * writes without a MAC/ILU opcode. Unused encoded operands are not reads. */
static inline uint32_t resot_native_vsh_operands(uint32_t instruction)
{
    uint32_t mac = instruction & 15, ilu = (instruction >> 4) & 7;
    uint32_t output = (instruction >> 19) & 15;
    int output_ilu = (instruction & 0x800000) != 0;
    return ((mac || (output && !output_ilu)) ? 1u : 0u) |
           ((mac == 2 || (mac >= 4 && mac <= 12)) ? 2u : 0u) |
           ((ilu || mac == 3 || mac == 4 || (output && output_ilu)) ? 4u : 0u);
}

/* RE-SoT: the smaller native interpreter omits R4..R11. Writes to those
 * registers are dead only when no instruction reads them. R12 remains the
 * position alias; invalid R13..R15 retain the generic interpreter's R0 read. */
static inline int resot_native_small_vsh(const uint32_t *words, uint32_t count)
{
    if (!count || count > 136) return 0;
    for (uint32_t instruction = 0; instruction < count; instruction++) {
        const uint32_t *packed = words + instruction * 4;
        uint32_t sources[3] = {packed[2] & 65535, packed[2] >> 16, packed[3] & 65535};
        uint32_t needed = resot_native_vsh_operands(packed[0]);
        for (uint32_t operand = 0; operand < 3; operand++) {
            uint32_t reg = (sources[operand] >> 2) & 15;
            if ((needed & (1u << operand)) && (sources[operand] & 3) == 1 && reg >= 4 && reg < 12) return 0;
        }
    }
    return 1;
}

/* RE-SoT: compact arbitrary live temporaries into R0/R2/R3, preserving R1
 * for the paired ILU destination and R12 for position. Unread writes die. */
static inline int resot_native_pack_small_vsh(const uint32_t *words, uint32_t count, uint32_t *result)
{
    uint32_t live = 0, next = 0;
    uint8_t mapping[16];
    if (!count || count > 136) return 0;
    memset(mapping,13,sizeof mapping);
    mapping[1] = 1; mapping[12] = 12;
    for (uint32_t instruction = 0; instruction < count; instruction++) {
        const uint32_t *packed = words + instruction * 4;
        uint32_t sources[3] = {packed[2] & 65535, packed[2] >> 16, packed[3] & 65535};
        uint32_t needed = resot_native_vsh_operands(packed[0]);
        for (uint32_t operand = 0; operand < 3; operand++) {
            uint32_t reg = (sources[operand] >> 2) & 15;
            if (reg >= 13) reg = 0;
            if ((needed & (1u << operand)) && (sources[operand] & 3) == 1 && reg < 12)
                live |= 1u << reg;
        }
    }
    for (uint32_t reg = 0; reg < 12; reg++) {
        if (reg == 1 || !(live & (1u << reg))) continue;
        if (next == 1) next++;
        if (next >= 4) return 0;
        mapping[reg] = (uint8_t)next++;
    }
    memcpy(result,words,count*16);
    for (uint32_t instruction = 0; instruction < count; instruction++) {
        uint32_t *packed = result + instruction * 4;
        uint32_t sources[3] = {packed[2] & 65535, packed[2] >> 16, packed[3] & 65535};
        uint32_t destination = (packed[0] >> 15) & 15;
        packed[0] = (packed[0] & ~(15u << 15)) | ((uint32_t)mapping[destination] << 15);
        for (uint32_t operand = 0; operand < 3; operand++) {
            if ((sources[operand] & 3) == 1) {
                uint32_t reg = (sources[operand] >> 2) & 15;
                if (reg >= 13) reg = 0;
                reg = mapping[reg] < 4 || mapping[reg] == 12 ? mapping[reg] : 0;
                sources[operand] = (sources[operand] & ~60u) | (reg << 2);
            }
        }
        packed[2] = sources[0] | (sources[1] << 16); packed[3] = sources[2];
        /* RE-SoT: the small fragment path consumes only position/d0/fog/t0.
         * Drop unobservable writes before interpreting each vertex, then
         * disable ALU lanes with no destination. Keep ARL's address side
         * effect and the paired ILU's implicit R1 destination intact. */
        {
            uint32_t op = packed[0], mac = op & 15, ilu = (op >> 4) & 7;
            uint32_t target = (op >> 15) & 15, output = packed[1] & 255;
            int output_ilu = (op & 0x800000) != 0;
            if (!(op & 0x1000000) ||
                (output != 0 && output != 3 && output != 5 && output != 9))
                op &= ~(15u << 19);
            if (target > 12) op &= ~(15u << 7);
            if (!mac && target > 12) op &= ~(15u << 11);
            if (mac != 13 && !(op & (15u << 7)) &&
                (!(op & (15u << 19)) || output_ilu)) {
                op &= ~15u;
                if (mac && ilu && (op & (15u << 11)))
                    op = (op & ~(15u << 15)) | (1u << 15);
            }
            if (!(op & (15u << 11)) &&
                (!(op & (15u << 19)) || !output_ilu))
                op &= ~(7u << 4);
            packed[0] = op;
        }
    }
    return 1;
}
/* RE-SoT: disabled lanes need no interpreter iteration. Preserve the first
 * END boundary, including an END-only instruction and an empty program. */
static inline uint32_t resot_native_trim_small_vsh(uint32_t *words, uint32_t count)
{
    uint32_t written = 0;
    for (uint32_t i = 0; i < count; i++) {
        uint32_t op = words[i*4], end = op & 0x4000000;
        if ((op & 127) || (op & (15u << 19))) {
            memmove(words + written*4, words + i*4, 16);
            words[written*4] &= ~0x4000000u;
            written++;
        }
        if (end) break;
    }
    if (!written) { memset(words,0,16); written = 1; }
    words[(written-1)*4] |= 0x4000000;
    return written;
}
#endif
