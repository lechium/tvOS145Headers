/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsDevice.h>

@interface MTLCountersDevice : MTLToolsDevice {

	BOOL _APITimingEnabled;

}

@property (nonatomic,readonly) BOOL APITimingEnabled;              //@synthesize APITimingEnabled=_APITimingEnabled - In the implementation block
-(void)dealloc;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(id)newDynamicLibrary:(id)arg1 error:(id*)arg2 ;
-(id)newTextureWithDescriptor:(id)arg1 iosurface:(IOSurfaceRef)arg2 plane:(unsigned long long)arg3 ;
-(id)newDynamicLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT47*)arg2 error:(id*)arg3 ;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(id)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned long long)arg2 ;
-(id)newFunctionWithGLIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3 ;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)newDefaultLibrary;
-(id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newDynamicLibraryFromURL:(id)arg1 error:(id*)arg2 ;
-(id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id*)arg3 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT47*)arg2 error:(id*)arg3 ;
-(id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id*)arg3 ;
-(id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT47*)arg2 error:(id*)arg3 ;
-(id)newCommandQueue;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newHeapWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)newDepthStencilStateWithDescriptor:(id)arg1 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newSamplerStateWithDescriptor:(id)arg1 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newFence;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newBufferWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT47*)arg2 error:(id*)arg3 ;
-(id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(BOOL)APITimingEnabled;
-(id)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

