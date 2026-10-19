/* RE-SoT: Xbox full access includes append permission, not append-only I/O. */
#ifndef RESOT_FILE_ACCESS_H
#define RESOT_FILE_ACCESS_H
#include <stdint.h>
static int resot_append_only(uint32_t access)
{
    /* FILE_APPEND_DATA=4, FILE_WRITE_DATA=2, GENERIC_WRITE=0x40000000,
     * GENERIC_ALL=0x10000000: standard NT access bits, not XBE addresses. */
    return (access & 4u) && !(access & (2u | 0x40000000u | 0x10000000u));
}
#endif
