/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface GEOPlaceDailyNormalizedHours : NSObject {

	long long _weekday;
	NSArray* _localTimeIntervals;
	double _closingSoonThresholdSeconds;
	double _openingSoonThresholdSeconds;
	BOOL _openToMidnight;
	BOOL _openFromMidnight;

}

@property (nonatomic,readonly) long long weekday;                             //@synthesize weekday=_weekday - In the implementation block
@property (nonatomic,readonly) NSArray * localTimeIntervals;                  //@synthesize localTimeIntervals=_localTimeIntervals - In the implementation block
@property (assign,nonatomic) double closingSoonThresholdSeconds;              //@synthesize closingSoonThresholdSeconds=_closingSoonThresholdSeconds - In the implementation block
@property (assign,nonatomic) double openingSoonThresholdSeconds;              //@synthesize openingSoonThresholdSeconds=_openingSoonThresholdSeconds - In the implementation block
@property (nonatomic,readonly) BOOL openToMidnight;                           //@synthesize openToMidnight=_openToMidnight - In the implementation block
@property (nonatomic,readonly) BOOL openFromMidnight;                         //@synthesize openFromMidnight=_openFromMidnight - In the implementation block
+(long long)todaysWeekday:(long long)arg1 yesterdaysWeekday:(long long)arg2 containsTimeFromMidnight:(double)arg3 inNormalizedHours:(id)arg4 ;
+(id)dailyNormalizedHoursForWeekday:(long long)arg1 timeIntervals:(id)arg2 closingThreshold:(double)arg3 openingThreshold:(double)arg4 openToMidnight:(BOOL)arg5 openFromMidnight:(BOOL)arg6 ;
+(long long)getWeekdayForDate:(id)arg1 inNormalizedHours:(id)arg2 timeZone:(id)arg3 ;
-(id)description;
-(long long)weekday;
-(BOOL)openFromMidnight;
-(BOOL)openToMidnight;
-(NSArray *)localTimeIntervals;
-(double)closingSoonThresholdSeconds;
-(void)setClosingSoonThresholdSeconds:(double)arg1 ;
-(double)openingSoonThresholdSeconds;
-(void)setOpeningSoonThresholdSeconds:(double)arg1 ;
@end

