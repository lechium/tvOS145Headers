/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <NanoRegistry/NanoRegistry-Structs.h>
@class NSObject;

@interface NRBypassQueue : NSObject {

	NSObject*<OS_dispatch_queue> _suspendableQueue;
	NSObject*<OS_dispatch_queue> _bypassQueue;
	BOOL _suspended;
	os_unfair_lock_s _lock;

}
-(id)init;
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)enqueueBlockAsync:(/*^block*/id)arg1 ;
-(void)enqueueBypassBlock:(/*^block*/id)arg1 ;
-(void)enqueueBypassBlockAsync:(/*^block*/id)arg1 ;
@end

