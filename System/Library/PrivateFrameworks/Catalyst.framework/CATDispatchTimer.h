/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CATTimer.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface CATDispatchTimer : NSObject <CATTimer> {

	NSObject*<OS_dispatch_queue> mQueue;
	NSObject*<OS_dispatch_queue> mTargetQueue;
	double mTimeInterval;
	/*^block*/id mFireHandler;
	NSObject*<OS_dispatch_source> mTimerSource;

}
+(id)scheduledTimerWithTimerInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(id)initWithTimeInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)timerDidFire;
@end

