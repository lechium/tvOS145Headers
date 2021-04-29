/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLParallelRenderCommandEncoder.h>

@protocol MTLDevice, MTLCommandQueue, MTLCommandBuffer, MTLFence;
@class _MTLCommandBuffer, MTLRenderPassDescriptor, NSMutableArray, NSString;

@interface _MTLParallelRenderCommandEncoder : _MTLObjectWithLabel <MTLParallelRenderCommandEncoder> {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _queue;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;
	MTLRenderPassDescriptor* _renderPassDescriptor;
	opaque_pthread_mutex_t _lock;
	unsigned long long _commandBuffersSize;
	unsigned long long _commandBuffersCount;
	id* _commandBuffers;
	BOOL _retainedReferences;
	BOOL _StatEnabled;
	unsigned long long _numThisEncoder;
	id<MTLFence> _progressFence;
	BOOL _needsFrameworkAssistedErrorTracking;
	NSMutableArray* _debugSignposts;

}

@property (readonly) unsigned long long globalTraceObjectID;                        //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (getter=getType,nonatomic,readonly) unsigned long long type; 
@property (readonly) id<MTLDevice> device;                                          //@synthesize device=_device - In the implementation block
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(unsigned long long)globalTraceObjectID;
-(id<MTLDevice>)device;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)initializeEnhancedCommandBufferErrors;
-(void)endEncoding;
-(id)commandBuffer;
-(id)_renderCommandEncoderCommon;
-(id)renderCommandEncoder;
-(unsigned long long)getDriverUniqueID;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2 ;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2 ;
-(void)preEndEncoding;
-(BOOL)isMemorylessRender;
@end

