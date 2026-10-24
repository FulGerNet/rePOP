package com.fulger.resot;

import android.app.job.*;
import android.content.*;

/** Fallback expiry if the launcher is killed or the user stays in the receiving app. */
public final class LogShareCleanupService extends JobService {
    private static final int JOB_ID=0x524c47;
    private static final long EXPIRY=15*60_000L;
    static void schedule(Context context) {
        JobScheduler jobs=(JobScheduler)context.getSystemService(Context.JOB_SCHEDULER_SERVICE);
        if(jobs!=null) jobs.schedule(new JobInfo.Builder(JOB_ID,
            new ComponentName(context,LogShareCleanupService.class))
            .setMinimumLatency(EXPIRY).setOverrideDeadline(EXPIRY*2).build());
    }
    @Override public boolean onStartJob(JobParameters parameters) {
        LogShare.expireExports(this,System.currentTimeMillis()-EXPIRY);
        return false;
    }
    @Override public boolean onStopJob(JobParameters parameters) { return true; }
}
