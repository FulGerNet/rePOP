#include "../../port/game/release_update.h"
#include <assert.h>
#include <stdio.h>
int main(void)
{
    char tag[32];
    assert(resot_release_newer("v0.3.10","0.3.9"));
    assert(resot_release_newer("reSOTv0.3.3","0.3.2"));
    assert(!resot_release_newer("reSOTv0.3.1","0.3.2"));
    assert(resot_release_newer("v1.0.0","0.99.99"));
    assert(!resot_release_newer("v0.3.2","0.3.2"));
    assert(!resot_release_newer("v0.3.1","0.3.2"));
    assert(!resot_release_newer("v0.3.3-beta","0.3.2"));
    assert(!resot_release_newer("v0.3.3/evil","0.3.2"));
    assert(!resot_release_newer("v9999999.0.0","0.3.2"));
    const char *valid="{\"body\":\"text \\\"tag_name\\\": \\\"v9.9.9\\\"\",\"assets\":[{\"tag_name\":\"nested\"}],\"tag_name\":\"v0.3.3\",\"draft\":false,\"prerelease\":false}";
    assert(resot_release_json(valid,tag));assert(!strcmp(tag,"v0.3.3"));
    const char *bad[]={"{}","[]","{\"tag_name\":\"v0.3.3\",\"draft\":true,\"prerelease\":false}",
        "{\"tag_name\":\"v0.3.3-beta\",\"draft\":false,\"prerelease\":false}",
        "{\"tag_name\":\"v0.3.3\",\"draft\":false,\"prerelease\":true}",
        "{\"tag_name\":\"v0.3.3\",\"draft\":false,\"prerelease\":false,}",
        "{\"tag_name\":\"v0.3.3\",\"draft\":false,\"prerelease\":false}junk",
        "{\"tag_name\":\"v0.3.3\",\"draft\":false,\"draft\":false,\"prerelease\":false}",
        "{\"tag_name\":\"v0.3.3\",\"draft\":\"false\",\"prerelease\":false}",
        "{\"tag_name\":\"v0.3.3\",\"draft\":false,\"prerelease\":false,\"bad\": [1,]}"};
    for(unsigned i=0;i<sizeof bad/sizeof *bad;i++)assert(!resot_release_json(bad[i],tag));
    /* Truncated Unicode escapes, every truncation of a valid payload. */
    assert(!resot_release_json("{\"bad\":\"\\u0",tag));
    char truncated[512];strcpy(truncated,valid);
    for(size_t n=0;n<strlen(valid);n++) {char saved=truncated[n];truncated[n]=0;assert(!resot_release_json(truncated,tag));truncated[n]=saved;}
    puts("PASS: strict stable tags, root-only JSON fields, invalid and truncated responses");
    return 0;
}
