/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface VECGCDCoalescer : NSObject {

	double _delay;
	NSObject*<OS_dispatch_source> _processingTimer;
	NSObject*<OS_dispatch_group> _processDoneGroup;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	BOOL _processingTimerActive;
	NSMutableArray* _keys;
	NSMutableArray* _blocks;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)coalescerWithDelay:(double)arg1 ;
+(id)sharedFiveSecondCoalescer;
-(id)init;
-(void)dealloc;
-(void)_applicationWillTerminate:(id)arg1 ;
-(void)_processImmediately;
-(void)_processTimer;
-(id)initWithQueue:(id)arg1 delay:(double)arg2 ;
-(void)_addBlock:(/*^block*/id)arg1 withKey:(id)arg2 ;
-(void)debugWaitUntilBlocksHaveBeenProcessed;
-(void)coalesceBlock:(/*^block*/id)arg1 withKey:(id)arg2 ;
@end

