#ifndef RESOT_OPTIONS_H
#define RESOT_OPTIONS_H

/* Initialize once before starting the framebuffer window. Settings are
 * portable: resot-options.ini is kept beside the executable. */
void resot_options_init(void);
int resot_options_blocks_input(void);

#endif
