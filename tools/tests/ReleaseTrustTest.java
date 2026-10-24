package com.fulger.resot;

import java.io.File;

public final class ReleaseTrustTest {
    public static void main(String[] args) {
        File original=new File(args[0]),tampered=new File(args[1]),resigned=new File(args[2]);
        for(int api=29;api<=36;api++) {
            require(ReleaseTrust.verify(original,api)==ReleaseTrust.Status.TRUSTED,"official API "+api);
            require(ReleaseTrust.verify(tampered,api)==ReleaseTrust.Status.MODIFIED,"tampered API "+api);
            require(ReleaseTrust.verify(resigned,api)==ReleaseTrust.Status.MODIFIED,"resigned API "+api);
        }
        require(ReleaseTrust.verify(new File(original.getParentFile(),"missing.apk"),29)==ReleaseTrust.Status.UNAVAILABLE,"I/O error is not tampering");
        String[][] cases={{"v0.3.2","0.3.1"},{"v0.3.10","0.3.9"},{"1.0.0","0.99.99"},{"reSOTv0.3.3","0.3.2"}};
        for(String[] c:cases)require(ReleaseVersion.newer(c[0],c[1]),"new version");
        for(String tag:new String[]{"0.3.2","v0.3.1","v0.3.2-beta","v0.3.2/evil","v9999999.0.0","garbage","v0.3"})
            require(!ReleaseVersion.newer(tag,"0.3.2"),"reject old/equal/nonstable "+tag);
        System.out.println("PASS: official, modified and re-signed APKs on API 29-36, I/O status and release versions");
    }
    private static void require(boolean condition,String label) {if(!condition)throw new AssertionError(label);}
}
