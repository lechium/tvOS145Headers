/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSObject;

@interface REUpNextScheduler : NSObject {

	BOOL _updateScheduled;
	os_unfair_lock_s _scheduledLock;
	NSObject*<OS_dispatch_queue> _originalQueue;
	NSObject*<OS_dispatch_queue> _queue;
	double _delay;
	/*^block*/id _updateBlock;
	/*^block*/id _updateCompletionBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) double delay;                                    //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy,readonly) id updateBlock;                             //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy,readonly) id updateCompletionBlock;                   //@synthesize updateCompletionBlock=_updateCompletionBlock - In the implementation block
@property (nonatomic,readonly) BOOL isScheduled; 
+(id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(/*^block*/id)arg3 ;
+(id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateCompletionBlock:(/*^block*/id)arg3 ;
+(id)schedulerWithQueue:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)delay;
-(void)schedule;
-(BOOL)isScheduled;
-(id)updateBlock;
-(BOOL)performImmediately;
-(id)initWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(/*^block*/id)arg3 updateCompletionBlock:(/*^block*/id)arg4 ;
-(void)_queue_performUpdate;
-(id)updateCompletionBlock;
@end

