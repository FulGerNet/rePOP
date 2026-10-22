/* Host events are normalized to the displayed game surface. */
#ifndef RESOT_MENU_POINTER_H
#define RESOT_MENU_POINTER_H
#include <stdint.h>
void resot_menu_pointer_event(float x, float y, int action);
int resot_menu_scene(void); /* 0 gameplay, 1 menu, 2 movie/loading */
void resot_menu_pointer_viewport(float aspect);
/* Called only by the title thread, after XInputGetState filled 22 bytes. */
void resot_menu_pointer_pad(uint8_t *state);
void resot_menu_movie(int active);
int resot_menu_movie_tap(void);
void resot_menu_camera_viewport(uint32_t top, uint32_t height, uint32_t full_height);
#endif
