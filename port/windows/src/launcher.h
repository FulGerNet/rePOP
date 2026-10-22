#ifndef RESOT_LAUNCHER_H
#define RESOT_LAUNCHER_H

#include <stddef.h>

/* The reWW title screen and game installer (launcher.c).
 *
 * Shown before anything of the game is initialised. When the game folder
 * holds extracted game files it names what is installed there (demo or
 * retail) and offers Start Demo / Start Game; without game files it asks for
 * the game's Xbox ISO and extracts it with extract-xiso
 * (port/third_party/extract-xiso) into a folder beside the executable, which
 * becomes the game folder and is remembered in reww-options.ini. */

enum {
    RESOT_LAUNCH_HERE,        /* this executable starts its game from game_dir */
    RESOT_LAUNCH_QUIT,        /* the player closed the launcher */
    RESOT_LAUNCH_HANDED_OFF   /* the other target's executable was started */
};

/* Flags for resot_launcher_run. */
#define RESOT_LAUNCHER_NO_SCREEN 1  /* game files present: return at once (run.ps1) */
#define RESOT_LAUNCHER_ASK_ISO   2  /* the files are not usable: ask for an ISO first */

/* target_id is RESOT_TARGET_ID of this executable. game_dir holds the
 * folder to try first (beside the EXE, or REWW_ASSET_DIR) and receives the
 * chosen one. */
int resot_launcher_run(const char *target_id, char *game_dir, size_t game_dir_size,
                       int flags);

/* The command-line switch the launcher uses to run extract-xiso in a child
 * copy of this executable, and that child's entry point. */
#define RESOT_XISO_SWITCH "--resot-extract-xiso"
#define RESOT_XISO_SWITCH_W L"--resot-extract-xiso"
int resot_xiso_child(int argc, char **argv);

#endif
