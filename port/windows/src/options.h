#ifndef RESOT_OPTIONS_H
#define RESOT_OPTIONS_H

#include <stdint.h>

/* Initialize once before starting the framebuffer window. Settings are
 * portable: resot-options.ini is kept beside the executable. */
void resot_options_init(void);
/* One line with the graphics settings, for the diagnostics panel. */
void resot_options_summary(char *out, unsigned size);

/* The F6 diagnostics panel (diag.c): the overlay surface while it is open,
 * and its keys and clicks (nonzero when the message was taken). */
int resot_diag_panel(const uint32_t **pixels, uint32_t *width, uint32_t *height);
int resot_diag_event(void *window, unsigned message, uintptr_t wp, intptr_t lp);

/* The same settings for the game's own menu pages (target_hooks.c). Pages:
 * Graphics (items 0-3: FPS limit, VSync, post-processing, resolution) and
 * the keyboard and joystick bindings (item = action, 0-24). Activating a
 * graphics item cycles it; activating a binding waits for the next key or
 * joystick input. Everything is saved to resot-options.ini at once. */
enum { RESOT_NATIVE_GRAPHICS, RESOT_NATIVE_KEYS, RESOT_NATIVE_JOY };
#define RESOT_NATIVE_GRAPHICS_ITEMS 4
#define RESOT_NATIVE_ACTIONS 25
void resot_native_label(int page, int item, char *out, unsigned size);
void resot_native_activate(int page, int item);
void resot_native_reset_bindings(void);
/* Changes whenever a native label may read differently. */
long resot_native_revision(void);

#endif
