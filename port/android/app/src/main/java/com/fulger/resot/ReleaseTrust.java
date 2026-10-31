package com.fulger.resot;

import com.android.apksig.ApkVerifier;
import java.io.File;
import java.security.MessageDigest;
import java.security.cert.X509Certificate;

/** Offline verification, shared with the release packaging regression test. */
public final class ReleaseTrust {
    // Local debug certificate fingerprint for the Spanish experiment. Do not
    // use this fork's pin for an official release or publisher update.
    public static final String CERT_SHA256 =
        "395a300d8e49ecff2b4f90d2f9138267925d77f5dbb4e5dfd7562375a632f8f3";
    public enum Status { TRUSTED, MODIFIED, UNAVAILABLE }

    public static Status verify(File apk, int platform) {
        try {
            ApkVerifier.Result result = new ApkVerifier.Builder(apk)
                .setMinCheckedPlatformVersion(platform)
                .setMaxCheckedPlatformVersion(platform).build().verify();
            if (!result.isVerified() || !result.isVerifiedUsingV2Scheme()
                    && !result.isVerifiedUsingV3Scheme()) return Status.MODIFIED;
            // Require the CURRENT signer. Signing history alone must not bless
            // an APK newly signed by a different publisher.
            if (result.getSignerCertificates().size() != 1) return Status.MODIFIED;
            X509Certificate cert = result.getSignerCertificates().get(0);
            byte[] hash = MessageDigest.getInstance("SHA-256").digest(cert.getEncoded());
            StringBuilder hex = new StringBuilder();
            for (byte b : hash) hex.append(String.format(java.util.Locale.ROOT,"%02x",b & 255));
            return CERT_SHA256.equals(hex.toString()) ? Status.TRUSTED : Status.MODIFIED;
        } catch (java.io.IOException | java.security.NoSuchAlgorithmException e) {
            // An I/O failure is not evidence of tampering. UI offers Retry.
            return Status.UNAVAILABLE;
        } catch (com.android.apksig.apk.ApkFormatException e) {
            return Status.MODIFIED;
        } catch (Exception e) {
            androidFreeLog(e);
            return Status.UNAVAILABLE;
        }
    }
    private static void androidFreeLog(Exception e) {
        System.err.println("[INTEGRITY] Verification unavailable: " + e.getClass().getSimpleName());
    }
    private ReleaseTrust() {}
}
