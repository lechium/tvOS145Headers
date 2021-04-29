/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalAsyncBlockPerformer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CalDispatchQueueAsyncBlockPerformer : NSObject <CalAsyncBlockPerformer> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(id)performAsync:(/*^block*/id)arg1 ;
-(id)performAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
@end

