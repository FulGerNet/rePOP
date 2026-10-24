# Android APK verifier

Android release builds depend on `com.android.tools.build:apksig:9.0.1`
from Google's Maven repository, under Apache-2.0. The jar remains in the
ignored dependency cache; Gradle packages its verifier into the APK.
`LICENSE` is copied unchanged from that jar and included in APK notices.

`ReleaseTrust.java` validates the installed APK's complete v2/v3 signature
and pins the current signer's SHA-256 certificate to the existing publisher
identity. Network, installer, phone/GPU, game data, user settings and custom
GPU drivers do not influence the decision. I/O errors offer Retry, rather
than claim modification. Developer builds using their own signing key must
explicitly replace the public fingerprint in their source fork; no key is
published here. Private signing keys must stay outside the repository.

This raises the cost of repackaging; a local self-check cannot guarantee
resistance to an attacker who rewrites the checker itself or controls the OS.
GitHub remains the distribution authority; users can also compare the
published APK SHA-256 and publisher certificate independently.
