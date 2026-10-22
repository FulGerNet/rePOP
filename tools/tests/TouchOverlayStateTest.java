package com.fulger.resot;

/** Exercise visibility transitions without an Android device or game files. */
public final class TouchOverlayStateTest {
    private static void check(boolean value, String message) {
        if (!value) throw new AssertionError(message);
    }

    public static void main(String[] args) {
        TouchOverlayState state = new TouchOverlayState(true, 1000);
        check(!state.controlsVisible() && state.navigationVisible(), "startup hides pad, keeps navigation");
        check(state.toggleAlpha(1000) == 1 && state.fading(1000), "automatic hide begins fade");
        check(state.toggleAlpha(1225) > .4f && state.toggleAlpha(1225) < .6f, "fade is gradual");
        check(state.toggleAlpha(1450) == 0 && !state.fading(1450), "toggle becomes fully transparent");

        state.toggle(1500); // The same toggle remains actionable at alpha zero.
        check(state.controlsVisible() && !state.navigationVisible(), "invisible toggle reopens cinematic pad");
        check(state.gameplayVisible(), "cinematic toggle preserves gameplay preference");
        check(state.toggleAlpha(1950) == 0 && state.controlsVisible(), "fade affects icon only");
        state.toggle(2000);
        check(!state.controlsVisible() && state.navigationVisible(), "hide restores corner navigation");

        state.sceneChanged(1, 2500);
        check(!state.controlsVisible() && state.navigationVisible(), "new menu hides pad");
        state.toggle(2600);
        check(state.controlsVisible() && !state.navigationVisible(), "menu pad can be reopened");
        state.sceneChanged(2, 3000);
        check(!state.controlsVisible() && state.navigationVisible(), "cutscene clears menu override");
        state.sceneChanged(0, 3500);
        check(state.controlsVisible() && !state.navigationVisible(), "gameplay restores original pad preference");
        check(state.toggleAlpha(5000) == 1, "return to visible gameplay restores discoverable toggle");

        state.toggle(5100);
        check(!state.controlsVisible() && !state.navigationVisible(), "manual gameplay hide has no menu buttons");
        state.sceneChanged(1, 6000);
        state.toggle(6100);
        check(state.controlsVisible() && !state.gameplayVisible(), "temporary menu override preserves hidden gameplay preference");
        state.sceneChanged(0, 7000);
        check(!state.controlsVisible(), "hidden gameplay preference survives menus");

        state.sceneChanged(1, 8000);
        state.showForEditing();
        check(state.controlsVisible() && !state.navigationVisible() && state.toggleAlpha(9000) == 1,
            "layout editor keeps controls and toggle visible");
        state.setGameplayVisible(false, 10000);
        check(!state.controlsVisible() && state.navigationVisible(), "controller auto-hide clears scene override");
        System.out.println("PASS: startup, fade, invisible toggle, menu/cutscene overrides, preference restoration and editing");
    }
}
