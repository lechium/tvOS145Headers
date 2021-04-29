/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTSchedulingDelegate.h>

@class NSString;

@interface MTXPCScheduler : NSObject <MTSchedulingDelegate> {

	NSString* _eventName;

}

@property (nonatomic,copy) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
+(id)xpcSchedulerWithEvent:(id)arg1 ;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(void)scheduleTimerForSeconds:(double)arg1 ;
-(void)unscheduleTimer;
-(void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(/*^block*/id)arg2 performImmediately:(BOOL)arg3 ;
-(void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(/*^block*/id)arg2 ;
-(void)unscheduleActivity;
@end

