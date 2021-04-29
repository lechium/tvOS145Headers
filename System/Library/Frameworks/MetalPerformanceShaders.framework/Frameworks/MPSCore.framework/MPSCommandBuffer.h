/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSCore-Structs.h>
#import <libobjc.A.dylib/MTLCommandBuffer.h>

@protocol MTLBuffer, MTLCommandBuffer;
@class NSString, NSError, MPSPredicate;

@interface MPSCommandBuffer : NSObject <MTLCommandBuffer> {

	id<MTLBuffer> _currentDispatchBuffer;
	unsigned long long _offsetToCurrentFree;
	MPSDevice* _mpsDevice;
	MPSPredicate* _predicate;
	id<MTLCommandBuffer> _commandBuffer;

}

@property (nonatomic,retain,readonly) id<MTLCommandBuffer> commandBuffer;                  //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (nonatomic,retain,readonly) id<MTLCommandBuffer> rootCommandBuffer; 
@property (nonatomic,retain) MPSPredicate * predicate;                                     //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) id<MPSHeapProvider> heapProvider; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) BOOL retainedReferences; 
@property (readonly) unsigned long long errorOptions; 
@property (copy) NSString * label; 
@property (readonly) double kernelStartTime; 
@property (readonly) double kernelEndTime; 
@property (readonly) id<MTLLogContainer> logs; 
@property (readonly) double GPUStartTime; 
@property (readonly) double GPUEndTime; 
@property (readonly) unsigned long long status; 
@property (readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandBufferWithCommandBuffer:(id)arg1 ;
+(id)commandBufferFromCommandQueue:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(MPSPredicate *)predicate;
-(void)setPredicate:(MPSPredicate *)arg1 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(id<MTLCommandBuffer>)commandBuffer;
-(id)initWithCommandBuffer:(id)arg1 ;
-(id<MPSHeapProvider>)heapProvider;
-(void)setHeapProvider:(id<MPSHeapProvider>)arg1 ;
-(id)dispatchBufferWithOffset:(unsigned long long*)arg1 ;
-(id<MTLCommandBuffer>)rootCommandBuffer;
-(void)commitAndContinue;
-(void)prefetchHeapForWorkloadSize:(unsigned long long)arg1 ;
@end

