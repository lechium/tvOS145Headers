/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTLCommandQueueSPI.h>

@protocol MTLCommandQueue;
@class CMMTLDevice, InterceptConfig, NSString;

@interface CMMTLCommandQueue : NSObject <MTLCommandQueueSPI> {

	CMMTLDevice* _cmDevice;
	id<MTLCommandQueue> _commandQueue;
	InterceptConfig* _interceptConfig;

}

@property (assign) int backgroundTrackingPID; 
@property (readonly) unsigned long long maxCommandBufferCount; 
@property (readonly) unsigned long long qosLevel; 
@property (readonly) NSObject*<OS_dispatch_queue> commitQueue; 
@property (readonly) BOOL commitSynchronously; 
@property (readonly) NSObject*<OS_dispatch_queue> completionQueue; 
@property (readonly) BOOL disableCrossQueueHazardTracking; 
@property (assign) BOOL skipRender; 
@property (assign) BOOL executionEnabled; 
@property (readonly) BOOL isOpenGLQueue; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) BOOL StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id<MTLDevice>)device;
-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(id)initWithCMMTLDevice:(id)arg1 ;
-(id)initWithCMMTLDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2 ;
-(id)initWithCMMTLDevice:(id)arg1 descriptor:(id)arg2 ;
@end

