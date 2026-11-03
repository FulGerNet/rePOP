/* The disc identifies the data edition; executable addresses remain NTSC. */
#include "retail_image.h"
#include "sha256.h"
#include "../../../source/xbox-retail/target.h"
#include "../../../source/xbox-retail/disc_variants.h"
#include <stdlib.h>
#include <string.h>

static int matches(const void *data, size_t size, const char *expected)
{
    ResotSha256 sha;
    char hash[65];
    resot_sha256_init(&sha);
    resot_sha256_update(&sha, data, size);
    resot_sha256_hex(&sha, hash);
    return strcmp(hash, expected) == 0;
}

int resot_retail_select_image(void **data, size_t *size,
                             const void *runtime, size_t runtime_size)
{
    void *copy;
    if (!data || !*data || !size || !*size) return 0;
    if (matches(*data, *size, RESOT_XBE_SHA256)) return 1;
    if (!matches(*data, *size, RESOT_RETAIL_EU_DISC_SHA256)
        || !runtime || !runtime_size
        || !matches(runtime, runtime_size, RESOT_XBE_SHA256)) return 0;
    copy = malloc(runtime_size);
    if (!copy) return 0;
    memcpy(copy, runtime, runtime_size);
    free(*data);
    *data = copy;
    *size = runtime_size;
    return 2;
}
