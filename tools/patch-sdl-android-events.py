"""Prevent SDL's Android timed event wait from waking itself with poll sentinels."""
from pathlib import Path
import sys


def patch(root):
    path = root / "src/events/SDL_events.c"
    text = path.read_text(encoding="utf-8")
    marker = "RE-SoT: a poll sentinel wakes Android's lifecycle semaphore"
    if marker in text:
        return
    original = "#ifdef SDL_PLATFORM_ANDROID\n    for (;;) {\n        SDL_PumpEventsInternal(true);"
    replacement = """#ifdef SDL_PLATFORM_ANDROID
    for (;;) {
        /* RE-SoT: a poll sentinel wakes Android's lifecycle semaphore
         * through SDL_SendWakeupEvent. Recreating one on every wait loop
         * prevents sleeping and consumes a core. The initial pump above
         * retains PollEvent's sentinel semantics; wait iterations need none. */
        SDL_PumpEventsInternal(false);"""
    if text.count(original) != 1:
        raise RuntimeError("SDL Android event wait anchor changed")
    path.write_text(text.replace(original, replacement, 1), encoding="utf-8")


if __name__ == "__main__":
    patch(Path(sys.argv[1]))
