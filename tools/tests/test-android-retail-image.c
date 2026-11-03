/* Exercise the Android loader's production image selection on the host. */
#include "retail_image.h"
#include "sha256.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CHECK(x) do { if (!(x)) { fprintf(stderr, "FAIL %d: %s\n", __LINE__, #x); exit(1); } } while (0)
static void *read_file(const char *path, size_t *size) {
    FILE *f = fopen(path, "rb"); void *p; long n;
    CHECK(f && fseek(f, 0, SEEK_END) == 0); n = ftell(f); CHECK(n > 0);
    CHECK(fseek(f, 0, SEEK_SET) == 0); *size = (size_t)n;
    p = malloc(*size); CHECK(p && fread(p, 1, *size, f) == *size);
    CHECK(fclose(f) == 0); return p;
}
int main(int argc, char **argv) {
    size_t us_size, eu_size, size;
    void *us, *eu, *data, *original;
    CHECK(argc == 3);
    us = read_file(argv[1], &us_size); eu = read_file(argv[2], &eu_size);
    data = malloc(us_size); CHECK(data); memcpy(data, us, us_size); size = us_size;
    original = data;
    CHECK(resot_retail_select_image(&data, &size, NULL, 0) == 1);
    CHECK(data == original && size == us_size); free(data);
    data = malloc(eu_size); CHECK(data); memcpy(data, eu, eu_size); size = eu_size;
    original = data;
    CHECK(resot_retail_select_image(&data, &size, eu, eu_size) == 0);
    CHECK(data == original && size == eu_size && !memcmp(data, eu, eu_size));
    CHECK(resot_retail_select_image(&data, &size, us, us_size) == 2);
    CHECK(data != us && size == us_size && !memcmp(data, us, us_size));
    free(data);
    data = malloc(eu_size); CHECK(data); memcpy(data, eu, eu_size); size = eu_size;
    ((unsigned char *)data)[0] ^= 1; original = data;
    CHECK(resot_retail_select_image(&data, &size, us, us_size) == 0);
    CHECK(data == original && size == eu_size); free(data);
    CHECK(resot_retail_select_image(NULL, &size, us, us_size) == 0);
    free(eu); free(us);
    puts("PASS: NTSC retained, EU mapped to a verified runtime copy, invalid disc/runtime rejected");
    return 0;
}
