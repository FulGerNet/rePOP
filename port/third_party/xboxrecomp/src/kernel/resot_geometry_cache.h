/* RE-SoT: exact, bounded native geometry reuse. GPU ranges belong to one
 * append-ring generation. Every index, layout/current value and source byte
 * is checked before reuse; hashes only select slots, never prove equality. */
#ifndef RESOT_GEOMETRY_CACHE_H
#define RESOT_GEOMETRY_CACHE_H
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#define RESOT_GEOMETRY_ENTRIES 2048
#define RESOT_GEOMETRY_BYTES (16u<<20)
#define RESOT_GEOMETRY_MAX_SOURCE (256u<<10)
typedef struct { uint32_t offset,bytes; } ResotGeometrySpan;
typedef struct {
    uint32_t primitive,inputs,stride,indices;
    uint32_t attributes[8][5],current[8][4];
    uint32_t spans;
    ResotGeometrySpan span[8];
} ResotGeometryKey;
typedef struct {
    ResotGeometryKey key;
    uint8_t *source;
    uint32_t bytes,generation,vertex_offset,index_offset,vertices,indices;
} ResotGeometryEntry;
typedef struct {
    ResotGeometryEntry entry[RESOT_GEOMETRY_ENTRIES];
    uint32_t bytes;
    uint64_t hits,misses,bypasses,saved_vertices,saved_bytes;
} ResotGeometryCache;
/* Merge interleaved streams so validation copies/compares their union once. */
static inline int resot_geometry_span(ResotGeometryKey *key,uint32_t offset,uint32_t bytes)
{
    uint64_t end=(uint64_t)offset+bytes;
    if(!bytes || end>UINT32_MAX) return 0;
    for(uint32_t i=0;i<key->spans;) {
        ResotGeometrySpan *s=&key->span[i];
        uint64_t other=(uint64_t)s->offset+s->bytes;
        if(offset<=other && s->offset<=end) {
            if(s->offset<offset) offset=s->offset;
            if(other>end) end=other;
            key->span[i]=key->span[--key->spans];
            continue;
        }
        i++;
    }
    if(key->spans==8) return 0;
    key->span[key->spans++]=(ResotGeometrySpan){offset,(uint32_t)(end-offset)};
    /* Stable ordering is part of full key comparison. */
    for(uint32_t i=1;i<key->spans;i++) for(uint32_t j=i;j && key->span[j].offset<key->span[j-1].offset;j--) {
        ResotGeometrySpan tmp=key->span[j]; key->span[j]=key->span[j-1]; key->span[j-1]=tmp;
    }
    for(uint32_t i=key->spans;i<8;i++) memset(&key->span[i],0,sizeof key->span[i]);
    return 1;
}
static inline uint32_t resot_geometry_source_bytes(const ResotGeometryKey *key)
{
    uint64_t bytes=(uint64_t)key->indices*2;
    for(uint32_t i=0;i<key->spans;i++) bytes+=key->span[i].bytes;
    return bytes<=RESOT_GEOMETRY_MAX_SOURCE?(uint32_t)bytes:0;
}
static inline ResotGeometryEntry *resot_geometry_slot(ResotGeometryCache *cache,const ResotGeometryKey *key,const uint16_t *indices)
{
    uint32_t hash=2166136261u;
    const unsigned char *p=(const unsigned char*)key;
    for(uint32_t i=0;i<sizeof *key;i++) hash=(hash^p[i])*16777619u;
    for(uint32_t i=0;i<key->indices;i++) hash=(hash^indices[i])*16777619u;
    return &cache->entry[hash&(RESOT_GEOMETRY_ENTRIES-1)];
}
static inline int resot_geometry_match(const ResotGeometryEntry *entry,const ResotGeometryKey *key,
                                      const uint16_t *indices,const uint8_t *memory,uint32_t generation)
{
    uint32_t at=key->indices*2;
    if(!entry->source || entry->generation!=generation || memcmp(&entry->key,key,sizeof *key) ||
       memcmp(entry->source,indices,at)) return 0;
    for(uint32_t i=0;i<key->spans;i++) {
        if(memcmp(entry->source+at,memory+key->span[i].offset,key->span[i].bytes)) return 0;
        at+=key->span[i].bytes;
    }
    return 1;
}
static inline int resot_geometry_store(ResotGeometryCache *cache,ResotGeometryEntry *entry,const ResotGeometryKey *key,
                                      const uint16_t *indices,const uint8_t *memory)
{
    uint32_t bytes=resot_geometry_source_bytes(key),at=key->indices*2;
    if(!bytes || cache->bytes-entry->bytes+bytes>RESOT_GEOMETRY_BYTES) return 0;
    if(entry->bytes!=bytes) {
        uint8_t *source=(uint8_t*)realloc(entry->source,bytes);
        if(!source) return 0;
        cache->bytes=cache->bytes-entry->bytes+bytes;
        entry->source=source; entry->bytes=bytes;
    }
    entry->key=*key;
    memcpy(entry->source,indices,at);
    for(uint32_t i=0;i<key->spans;i++) {
        memcpy(entry->source+at,memory+key->span[i].offset,key->span[i].bytes);
        at+=key->span[i].bytes;
    }
    return 1;
}
static inline void resot_geometry_destroy(ResotGeometryCache *cache)
{
    for(uint32_t i=0;i<RESOT_GEOMETRY_ENTRIES;i++) free(cache->entry[i].source);
    memset(cache,0,sizeof *cache);
}
#endif
