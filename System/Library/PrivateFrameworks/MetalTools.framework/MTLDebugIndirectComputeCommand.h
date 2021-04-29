/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsIndirectComputeCommand.h>

@protocol MTLIndirectCommandBufferSPI;
@class MTLIndirectCommandBufferDescriptor;

@interface MTLDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand {

	MTLIndirectCommandBufferDescriptor* _desc;
	unsigned long long _index;
	id<MTLIndirectCommandBufferSPI> _iCB;

}

@property (readonly) unsigned long long index; 
@property (readonly) id<MTLIndirectCommandBuffer> indirectCommandBuffer; 
-(void)dealloc;
-(unsigned long long)index;
-(void)setComputePipelineState:(id)arg1 ;
-(void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)concurrentDispatchThreadgroups:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(void)concurrentDispatchThreads:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(id)initWithBaseObject:(id)arg1 descriptor:(id)arg2 indexCount:(unsigned long long)arg3 indirectCommandBuffer:(id)arg4 ;
-(id<MTLIndirectCommandBuffer>)indirectCommandBuffer;
@end
