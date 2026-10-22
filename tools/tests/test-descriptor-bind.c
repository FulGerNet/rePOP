/* RE-SoT: API-contract checks for partial set ranges/dynamic-offset indexing. */
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
typedef uint32_t Uint32;
typedef uint64_t VkDescriptorSet;
#define VK_PIPELINE_BIND_POINT_GRAPHICS 0
typedef struct { uint64_t pipelineLayout; Uint32 vertexUniformBufferCount,fragmentUniformBufferCount; } VulkanGraphicsPipelineResourceLayout;
typedef struct {
    VulkanGraphicsPipelineResourceLayout *resotBoundGraphicsLayout;
    bool needNewVertexUniformOffsets,needNewFragmentUniformOffsets;
    void *commandBuffer;
} VulkanCommandBuffer;
static unsigned calls,first,number,nOffsets;
static uint32_t savedOffsets[8];
static void capture(void *cmd,int point,uint64_t layout,Uint32 f,Uint32 n,
                    const VkDescriptorSet *sets,Uint32 count,const Uint32 *offsets) {
    (void)cmd;(void)point;(void)layout;(void)sets;
    calls++;first=f;number=n;nOffsets=count;
    for (unsigned i=0;i<count;i++) savedOffsets[i]=offsets[i];
}
typedef struct { void (*vkCmdBindDescriptorSets)(void*,int,uint64_t,Uint32,Uint32,const VkDescriptorSet*,Uint32,const Uint32*); } VulkanRenderer;
#include "../../port/third_party/sdl-gpu-query/resot_descriptor_bind_vulkan.inc"
#define CHECK(c) do { if (!(c)) { printf("line %d: %s\n",__LINE__,#c); return 1; } } while(0)
int main(void) {
    VulkanRenderer renderer={capture}; VulkanCommandBuffer cmd={0};
    VulkanGraphicsPipelineResourceLayout a={1,3,1},b={2,2,1};
    VkDescriptorSet old[4]={10,20,30,40},sets[4]={10,20,30,40};
    Uint32 offsets[4]={100,200,300,400};
    resot_bind_changed_graphics_sets(&renderer,&cmd,&a,old,sets,offsets);
    CHECK(calls==1 && first==0 && number==4 && nOffsets==4 && savedOffsets[3]==400);
    resot_bind_changed_graphics_sets(&renderer,&cmd,&a,old,sets,offsets); CHECK(calls==1);
    cmd.needNewFragmentUniformOffsets=true;
    resot_bind_changed_graphics_sets(&renderer,&cmd,&a,old,sets,offsets);
    CHECK(calls==2 && first==3 && number==1 && nOffsets==1 && savedOffsets[0]==400);
    cmd.needNewFragmentUniformOffsets=false; cmd.needNewVertexUniformOffsets=true;
    resot_bind_changed_graphics_sets(&renderer,&cmd,&a,old,sets,offsets);
    CHECK(first==1 && number==1 && nOffsets==3 && savedOffsets[2]==300);
    cmd.needNewVertexUniformOffsets=false; sets[2]=31;
    resot_bind_changed_graphics_sets(&renderer,&cmd,&a,old,sets,offsets);
    CHECK(first==2 && number==1 && nOffsets==0);
    cmd.needNewVertexUniformOffsets=true; cmd.needNewFragmentUniformOffsets=true;
    resot_bind_changed_graphics_sets(&renderer,&cmd,&a,old,sets,offsets);
    CHECK(first==1 && number==3 && nOffsets==4);
    resot_bind_changed_graphics_sets(&renderer,&cmd,&b,old,sets,offsets);
    CHECK(first==0 && number==4 && nOffsets==3 && cmd.resotBoundGraphicsLayout==&b);
    puts("Descriptor ranges, offset subsets, no-op and layout invalidation pass");
    return 0;
}
