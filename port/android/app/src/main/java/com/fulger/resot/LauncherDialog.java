package com.fulger.resot;

import android.app.Activity;
import android.app.Dialog;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PixelFormat;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.view.Gravity;
import android.view.Window;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;

/** Night-blue plates, gold edges, cyan rule and Atlantis headings like the launcher. */
final class LauncherDialog {
    static void show(Activity activity, String title, String message,
            String positive, Runnable accept, String negative, Runnable close, boolean cancelable) {
        Dialog dialog=new Dialog(activity);
        dialog.requestWindowFeature(Window.FEATURE_NO_TITLE);
        LinearLayout panel=new LinearLayout(activity);
        panel.setOrientation(LinearLayout.VERTICAL);
        int pad=dp(activity,24); panel.setPadding(pad,pad,pad,pad);
        GradientDrawable background=new GradientDrawable(GradientDrawable.Orientation.TL_BR,
            new int[]{0xff142b46,0xff070f20});
        background.setStroke(dp(activity,1),0xffc8a666); panel.setBackground(background);
        Typeface display=Typeface.create(Typeface.SERIF,Typeface.BOLD);
        try { display=Typeface.createFromAsset(activity.getAssets(),"AtlantisMF.ttf"); }
        catch(RuntimeException ignored) {}
        TextView heading=new TextView(activity); heading.setText(title); heading.setTextSize(24);
        heading.setTextColor(0xfff6e2a6); heading.setTypeface(display); heading.setGravity(Gravity.CENTER);
        panel.addView(heading);
        TextView rule=new TextView(activity); rule.setText("◇ ───────────────── ◇");
        rule.setTextColor(0xff50c8fa); rule.setGravity(Gravity.CENTER); panel.addView(rule);
        TextView body=new TextView(activity); body.setText(message); body.setTextColor(0xffd4deeb);
        body.setTextSize(16); body.setGravity(Gravity.CENTER); body.setPadding(0,dp(activity,12),0,dp(activity,22));
        panel.addView(body);
        LinearLayout buttons=new LinearLayout(activity); buttons.setGravity(Gravity.CENTER);
        panel.addView(buttons);
        if(positive!=null) addButton(activity,buttons,positive,display,()->{dialog.dismiss();if(accept!=null)accept.run();});
        Button dismiss=addButton(activity,buttons,negative,display,()->{dialog.dismiss();if(close!=null)close.run();});
        dialog.setContentView(panel); dialog.setCancelable(cancelable);
        dialog.setOnCancelListener(d->{if(close!=null)close.run();});
        Window window=dialog.getWindow();
        if(window!=null) {
            window.setBackgroundDrawableResource(android.R.color.transparent);
            window.addFlags(android.view.WindowManager.LayoutParams.FLAG_DIM_BEHIND);
            window.setDimAmount(0.7f);
        }
        dialog.show();
        if(window!=null) window.setLayout(Math.min(dp(activity,600),
            activity.getResources().getDisplayMetrics().widthPixels-dp(activity,40)), -2);
        dismiss.requestFocus(); // Enter defaults to Close; updating is optional.
    }
    private static Button addButton(Activity a,LinearLayout row,String text,Typeface font,Runnable action) {
        Button button=new Button(a); button.setText(text); button.setAllCaps(false);
        button.setTextSize(20); button.setTypeface(font); button.setTextColor(0xfff6e2a6);
        button.setBackground(new Plate());
        LinearLayout.LayoutParams lp=new LinearLayout.LayoutParams(0,dp(a,50),1);
        lp.setMargins(dp(a,5),0,dp(a,5),0); row.addView(button,lp);
        button.setOnClickListener(v->action.run()); return button;
    }
    private static int dp(Activity a,int value){return Math.round(value*a.getResources().getDisplayMetrics().density);}
    private static final class Plate extends Drawable {
        private final Paint paint=new Paint(Paint.ANTI_ALIAS_FLAG);
        @Override public void draw(Canvas canvas) {
            android.graphics.Rect r=getBounds();float edge=Math.min(16,r.height()/3f);
            Path p=new Path();p.moveTo(r.left+edge,r.top+1);p.lineTo(r.right-edge,r.top+1);
            p.lineTo(r.right-1,r.exactCenterY());p.lineTo(r.right-edge,r.bottom-1);
            p.lineTo(r.left+edge,r.bottom-1);p.lineTo(r.left+1,r.exactCenterY());p.close();
            boolean lit=android.util.StateSet.stateSetMatches(new int[]{android.R.attr.state_pressed},getState())
                || android.util.StateSet.stateSetMatches(new int[]{android.R.attr.state_focused},getState());
            paint.setStyle(Paint.Style.FILL);paint.setColor(lit?0xff385271:0xff12263f);canvas.drawPath(p,paint);
            paint.setStyle(Paint.Style.STROKE);paint.setStrokeWidth(2);paint.setColor(lit?0xfff6e2a6:0xffc8a666);canvas.drawPath(p,paint);
        }
        @Override public boolean isStateful(){return true;}
        @Override protected boolean onStateChange(int[] state){invalidateSelf();return true;}
        @Override public void setAlpha(int a){paint.setAlpha(a);}
        @Override public void setColorFilter(ColorFilter f){paint.setColorFilter(f);}
        @Override public int getOpacity(){return PixelFormat.TRANSLUCENT;}
    }
    private LauncherDialog() {}
}
