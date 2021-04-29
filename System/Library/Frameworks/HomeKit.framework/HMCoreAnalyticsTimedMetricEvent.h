/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMCoreAnalyticsMetricEvent.h>

@class NSDate, NSNumber;

@interface HMCoreAnalyticsTimedMetricEvent : HMCoreAnalyticsMetricEvent {

	NSDate* _startedDate;
	NSDate* _finishedDate;

}

@property (copy) NSDate * startedDate;                 //@synthesize startedDate=_startedDate - In the implementation block
@property (copy) NSDate * finishedDate;                //@synthesize finishedDate=_finishedDate - In the implementation block
@property (readonly) NSNumber * duration; 
-(void)start;
-(NSNumber *)duration;
-(void)finish;
-(NSDate *)startedDate;
-(NSDate *)finishedDate;
-(void)setStartedDate:(NSDate *)arg1 ;
-(void)setFinishedDate:(NSDate *)arg1 ;
-(id)eventPayload;
-(id)durationData;
@end

