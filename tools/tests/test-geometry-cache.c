/* RE-SoT: stale GPU geometry is never admitted by a hash or partial sample. */
#include "../../port/third_party/xboxrecomp/src/kernel/resot_geometry_cache.h"
#include <stdio.h>
#define CHECK(x) do { if(!(x)) { fprintf(stderr,"line %d: %s\n",__LINE__,#x); return 1; } } while(0)
static ResotGeometryCache cache;
int main(void)
{
    uint8_t memory[256]; uint16_t indices[]={7,3,5,3,8,7};
    ResotGeometryKey key={0},different;
    key.indices=6; key.inputs=2; key.stride=32; key.primitive=5;
    for(uint32_t i=0;i<sizeof memory;i++) memory[i]=(uint8_t)i;
    CHECK(resot_geometry_span(&key,32,64));
    CHECK(resot_geometry_span(&key,48,64));
    CHECK(resot_geometry_span(&key,16,24));
    CHECK(key.spans==1 && key.span[0].offset==16 && key.span[0].bytes==96);
    CHECK(resot_geometry_span(&key,160,16));
    ResotGeometryEntry *e=resot_geometry_slot(&cache,&key,indices);
    CHECK(!resot_geometry_match(e,&key,indices,memory,1));
    CHECK(resot_geometry_store(&cache,e,&key,indices,memory)); e->generation=1;
    CHECK(resot_geometry_match(e,&key,indices,memory,1));
    CHECK(!resot_geometry_match(e,&key,indices,memory,2)); // Ring cycling invalidates every old range.
    memory[73]^=1; CHECK(!resot_geometry_match(e,&key,indices,memory,1)); memory[73]^=1;
    memory[170]^=1; CHECK(!resot_geometry_match(e,&key,indices,memory,1)); memory[170]^=1;
    memory[200]^=1; CHECK(resot_geometry_match(e,&key,indices,memory,1)); // Outside source union.
    indices[4]^=1; CHECK(!resot_geometry_match(e,&key,indices,memory,1)); indices[4]^=1;
    different=key; different.current[0][0]=0x80000000u;
    CHECK(!resot_geometry_match(e,&different,indices,memory,1)); // Signed zero/current attributes are exact.
    different=key; different.attributes[0][4]=24;
    CHECK(!resot_geometry_match(e,&different,indices,memory,1));
    different=key; different.primitive++;
    CHECK(!resot_geometry_match(e,&different,indices,memory,1));
    different=key; different.span[0].bytes=RESOT_GEOMETRY_MAX_SOURCE;
    CHECK(!resot_geometry_source_bytes(&different));
    CHECK(!resot_geometry_span(&different,UINT32_MAX-1,4));
    uint32_t original=cache.bytes;
    CHECK(resot_geometry_store(&cache,e,&key,indices,memory));
    CHECK(cache.bytes==original); // Replacing snapshots does not leak budget.
    resot_geometry_destroy(&cache); CHECK(cache.bytes==0);
    puts("PASS: exact geometry source/index/layout/current-value validation, span union, ring generations and bounded ownership");
    return 0;
}
