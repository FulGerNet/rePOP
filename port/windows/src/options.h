#ifndef RESOT_OPTIONS_H
#define RESOT_OPTIONS_H

#include <stdint.h>

/* Initialize once before starting the framebuffer window. Settings are
 * portable: resot-options.ini is kept beside the executable. */
void resot_options_init(void);
/* Create the bundled INI only when absent, before the Windows launcher. */
void resot_options_prepare_config(void);
/* One line with the graphics settings, for the diagnostics panel. */
void resot_options_summary(char *out, unsigned size);

/* The F6 diagnostics panel (diag.c): the overlay surface while it is open,
 * and its keys and clicks (nonzero when the message was taken). */
int resot_diag_panel(const uint32_t **pixels, uint32_t *width, uint32_t *height);
int resot_diag_event(void *window, unsigned message, uintptr_t wp, intptr_t lp);

/* The same settings for the game's own menu pages (target_hooks.c). Pages:
 * Graphics (items 0-3: FPS limit, VSync, resolution, graphics preset) and
 * Controls (item 0: Look sensitivity), and the keyboard and joystick
 * bindings (item = action, 0-24). Activating a setting cycles it; a binding waits for the next key or
 * joystick input. Everything is saved to resot-options.ini at once. */
enum { RESOT_NATIVE_GRAPHICS, RESOT_NATIVE_KEYS, RESOT_NATIVE_JOY, RESOT_NATIVE_CONTROLS };
#define RESOT_NATIVE_GRAPHICS_ITEMS 4
#define RESOT_NATIVE_ACTIONS 25
/* v0.3.2 migration: old High/Mid become Standard; glow becomes Full.
 * Off is retained for debugging, and is excluded from the in-game cycle. */
static inline int resot_graphics_preset(int configured,int legacy,int glow)
{
    if(configured==-1)configured=legacy==0?0:glow?3:legacy==1?1:2;
    return configured<0 || configured>3 ? 2 : configured;
}
/* Shared by the hosts and target hooks. Apply sensitivity to normalized
 * camera floats, after the title's deadzone, so 200% also speeds full-stick
 * and digital keyboard look without overflowing the Xbox int16 input. */
static inline int resot_look_percent(int percent)
{
    return percent < 25 ? 25 : percent > 200 ? 200 : ((percent + 12) / 25) * 25;
}
static inline float resot_look_value(float axis, int percent)
{
    return axis * ((float)resot_look_percent(percent) / 100.0f);
}
void resot_scale_look(float *axes);
void resot_native_label(int page, int item, char *out, unsigned size);
void resot_native_activate(int page, int item);
void resot_native_reset_bindings(void);
/* Changes whenever a native label may read differently. */
long resot_native_revision(void);
/* Game behavior (the F7 panel's section), applied by the target hooks:
 * tutorials 1 on / 0 off (saved); Dagger of time -1 as the game has it,
 * 0 off, 1 on. */
int resot_game_tutorials(void);
int resot_game_dagger(void);
/* Cheats On/Off in the same section: a change asked for there (1 on, 0 off,
 * -1 none; taking it clears it), and the switch as the game has it (-1 not
 * readable), reported back for the panel. */
int resot_game_cheats_request(void);
void resot_game_cheats_report(int on);

#endif
