#ifndef RESOT_SHA256_H
#define RESOT_SHA256_H

#include <stddef.h>
#include <stdint.h>

/* SHA-256 (FIPS 180-4) for the Android host: the game checks default.xbe
 * against RESOT_XBE_SHA256 before mapping it, and the launcher tells the demo
 * from the retail game by the same hashes (Windows uses BCrypt for both). */
typedef struct {
    uint32_t state[8];
    uint64_t bytes;
    uint8_t block[64];
    size_t used;
} ResotSha256;

void resot_sha256_init(ResotSha256 *c);
void resot_sha256_update(ResotSha256 *c, const void *data, size_t size);
/* Upper-case hexadecimal, as in target.h. */
void resot_sha256_hex(ResotSha256 *c, char hex[65]);
/* 1 and the digest of a whole file, 0 when it cannot be read. */
int resot_sha256_file(const char *path, char hex[65]);

#endif
