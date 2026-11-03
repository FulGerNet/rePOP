#ifndef RESOT_ANDROID_RETAIL_IMAGE_H
#define RESOT_ANDROID_RETAIL_IMAGE_H
#include <stddef.h>
/* Owned malloc buffer in/out. 1: original NTSC; 2: EU replaced by the checked
 * runtime image; 0: unsupported disc, bad runtime image or allocation failure.
 * Failure leaves the original buffer untouched for the caller to release. */
int resot_retail_select_image(void **data, size_t *size,
                             const void *runtime, size_t runtime_size);
#endif
