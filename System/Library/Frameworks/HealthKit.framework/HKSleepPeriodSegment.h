/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSArray;

@interface HKSleepPeriodSegment : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	long long _category;
	NSArray* _samples;
	double _duration;

}

@property (nonatomic,copy,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) long long category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSArray * samples;               //@synthesize samples=_samples - In the implementation block
@property (nonatomic,readonly) double duration;                      //@synthesize duration=_duration - In the implementation block
-(long long)category;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(double)duration;
-(NSArray *)samples;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 category:(long long)arg3 samples:(id)arg4 duration:(double)arg5 ;
@end

