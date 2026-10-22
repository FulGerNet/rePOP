package com.fulger.resot;

/** Visibility policy and toggle-only fade, independent of Android drawing. */
final class TouchOverlayState {
    static final long FADE_MS = 450;
    private boolean gameplayVisible, sceneOverride;
    private int scene = 2;
    private long fadeStarted;

    TouchOverlayState(boolean visible, long now) {
        gameplayVisible = visible;
        fadeStarted = now;
    }

    boolean gameplayVisible() { return gameplayVisible; }
    boolean controlsVisible() { return scene == 0 ? gameplayVisible : sceneOverride; }
    boolean navigationVisible() { return scene != 0 && !controlsVisible(); }

    void sceneChanged(int next, long now) {
        scene = next;
        sceneOverride = false;
        fadeStarted = controlsVisible() ? -1 : now;
    }

    void toggle(long now) {
        if (scene == 0) gameplayVisible = !gameplayVisible;
        else sceneOverride = !sceneOverride;
        fadeStarted = now;
    }

    void setGameplayVisible(boolean visible, long now) {
        gameplayVisible = visible;
        if (!visible) sceneOverride = false;
        fadeStarted = controlsVisible() ? -1 : now;
    }

    void showForEditing() {
        gameplayVisible = true;
        sceneOverride = true;
        fadeStarted = -1;
    }

    float toggleAlpha(long now) {
        return fadeStarted < 0 ? 1f
            : Math.max(0f, 1f - Math.max(0, now - fadeStarted) / (float) FADE_MS);
    }

    boolean fading(long now) { return fadeStarted >= 0 && now - fadeStarted < FADE_MS; }
}
