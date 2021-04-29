/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSDateInterval, NSArray;

@interface _HKSampleQueryResult : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSDateInterval* _dateInterval;
	NSArray* _samples;

}

@property (nonatomic,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSArray * samples;                     //@synthesize samples=_samples - In the implementation block
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSArray *)samples;
-(NSDateInterval *)dateInterval;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 samples:(id)arg3 ;
@end
