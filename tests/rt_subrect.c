/* RE-WW: render-target rectangle addressing (reww_rt_subrect.h), with the
 * menu bloom addresses observed in logs/menu-trace2 (D3D11 frame trace). */
#include <stdio.h>
#include "reww_rt_subrect.h"

static int failures;
#define CHECK(c) do { if (!(c)) { fprintf(stderr, "FAIL %s:%d %s\n", __FILE__, __LINE__, #c); failures++; } } while (0)

int main(void)
{
    uint32_t x = 99, y = 99;
    /* 640-wide pyramid surface, pitch 2560, observed height up to 472. */
    CHECK(reww_rt_subrect(0x8078D000u, 640, 472, 0x8078D000u, 2560, 320, 240, &x, &y) && x == 0 && y == 0);
    CHECK(!reww_rt_subrect_is_whole(x, y, 320, 240, 640, 472));
    CHECK(reww_rt_subrect(0x8078D000u, 640, 472, 0x80823000u, 2560, 160, 120, &x, &y) && x == 0 && y == 240);
    CHECK(reww_rt_subrect(0x8078D000u, 640, 472, 0x8086E000u, 2560, 80, 60, &x, &y) && x == 0 && y == 360);
    CHECK(reww_rt_subrect(0x8078D000u, 640, 472, 0x80893800u, 2560, 40, 30, &x, &y) && x == 0 && y == 420);
    CHECK(reww_rt_subrect(0x8078D000u, 640, 472, 0x808A6400u, 2560, 20, 15, &x, &y) && x == 0 && y == 450);
    CHECK(reww_rt_subrect(0x8078D000u, 640, 472, 0x808AFA00u, 2560, 10, 7, &x, &y) && x == 0 && y == 465);
    /* Right half of the pyramid: 0x8086E500 = row 360, column 320. */
    CHECK(reww_rt_subrect(0x8078D000u, 640, 472, 0x8086E500u, 2560, 80, 60, &x, &y) && x == 320 && y == 360);
    /* The 1280-byte pitch alias at the same address is a different surface. */
    CHECK(!reww_rt_subrect(0x8078D000u, 640, 472, 0x8078D000u, 1280, 320, 240, &x, &y));
    CHECK(reww_rt_subrect(0x8078D000u, 320, 240, 0x8078D000u, 1280, 320, 240, &x, &y));
    CHECK(reww_rt_subrect_is_whole(x, y, 320, 240, 320, 240));
    /* Outside, beyond the surface's height, misaligned or overflowing. */
    CHECK(!reww_rt_subrect(0x8078D000u, 640, 472, 0x8078C000u, 2560, 10, 10, &x, &y));
    CHECK(!reww_rt_subrect(0x8078D000u, 640, 240, 0x8086E000u, 2560, 80, 60, &x, &y));
    CHECK(!reww_rt_subrect(0x8078D000u, 640, 472, 0x8078D002u, 2560, 10, 10, &x, &y));
    CHECK(!reww_rt_subrect(0x8078D000u, 640, 472, 0x8078D000u + 600 * 4, 2560, 80, 10, &x, &y));
    CHECK(!reww_rt_subrect(0x8078D000u, 640, 472, 0x808AFA00u, 2560, 10, 8, &x, &y));
    CHECK(!reww_rt_subrect(0x8078D000u, 0, 472, 0x8078D000u, 0, 10, 10, &x, &y));
    /* Gameplay: 80x60 drawn first at 0x0086E000 (own surface), later as
     * 80x60+0+360 of 0x0078D000; sampling 0x8086E000 must take the later. */
    {
        RewwWriteLog direct = {0}, pyramid = {0};
        uint64_t first, later;
        reww_write_log(&pyramid, reww_write_next(), 0, 0, 320, 240);
        first = reww_write_next();
        reww_write_log(&direct, first, 0, 0, 80, 60);
        later = reww_write_next();
        reww_write_log(&pyramid, later, 0, 360, 80, 60);
        reww_write_log(&pyramid, reww_write_next(), 0, 420, 40, 30);
        CHECK(reww_write_latest(&direct, 0, 0, 80, 60) == first);
        CHECK(reww_write_latest(&pyramid, 0, 360, 80, 60) == later);
        CHECK(reww_write_latest(&pyramid, 320, 360, 80, 60) == 0);
        CHECK(reww_write_latest(&pyramid, 0, 0, 10, 10) != 0);
        for (x = 0; x < REWW_WRITE_LOG; x++)
            reww_write_log(&direct, reww_write_next(), 600, 0, 10, 10);
        CHECK(reww_write_latest(&direct, 0, 0, 80, 60) == 0); /* evicted */
    }
    if (!failures) printf("rt_subrect: all checks passed\n");
    return failures != 0;
}
