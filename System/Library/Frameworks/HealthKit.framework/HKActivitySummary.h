/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateComponents, HKQuantity, NSArray, NSDate;

@interface HKActivitySummary : NSObject <NSSecureCoding, NSCopying> {

	long long _activitySummaryIndex;
	NSDateComponents* _dateComponents;
	HKQuantity* _activeEnergyBurned;
	HKQuantity* _appleMoveTime;
	HKQuantity* _appleExerciseTime;
	HKQuantity* _appleStandHours;
	HKQuantity* _distanceWalkingRunning;
	HKQuantity* _stepCount;
	HKQuantity* _activeEnergyBurnedGoal;
	HKQuantity* _appleMoveTimeGoal;
	HKQuantity* _appleExerciseTimeGoal;
	HKQuantity* _appleStandHoursGoal;
	HKQuantity* _deepBreathingDuration;
	HKQuantity* _pushCount;
	HKQuantity* _flightsClimbed;
	long long _wheelchairUse;
	long long _activityMoveMode;
	NSArray* _dailyEnergyBurnedStatistics;
	NSArray* _dailyMoveTimeStatistics;
	NSArray* _dailyBriskMinutesStatistics;
	BOOL _dataLoading;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _creationDate;
	NSDate* _energyBurnedGoalDate;
	NSDate* _moveTimeGoalDate;
	NSDate* _briskMinutesGoalDate;
	NSDate* _activeHoursGoalDate;
	NSArray* _dailyMoveMinuteStatistics;

}

@property (setter=_setGregorianDateComponents:,getter=_gregorianDateComponents,nonatomic,copy) NSDateComponents * gregorianDateComponents; 
@property (assign,setter=_setActivitySummaryIndex:,getter=_activitySummaryIndex,nonatomic) long long activitySummaryIndex; 
@property (setter=_setStartDate:,getter=_startDate,nonatomic,retain) NSDate * startDate;                                                                     //@synthesize startDate=_startDate - In the implementation block
@property (setter=_setEndDate:,getter=_endDate,nonatomic,retain) NSDate * endDate;                                                                           //@synthesize endDate=_endDate - In the implementation block
@property (setter=_setCreationDate:,getter=_creationDate,nonatomic,retain) NSDate * creationDate;                                                            //@synthesize creationDate=_creationDate - In the implementation block
@property (getter=_activeEnergyCompletionPercentage,nonatomic,readonly) double activeEnergyCompletionPercentage; 
@property (getter=_moveMinutesCompletionPercentage,nonatomic,readonly) double moveMinutesCompletionPercentage; 
@property (getter=_exerciseTimeCompletionPercentage,nonatomic,readonly) double exerciseTimeCompletionPercentage; 
@property (getter=_standHoursCompletionPercentage,nonatomic,readonly) double standHoursCompletionPercentage; 
@property (setter=_setDeepBreathingDuration:,getter=_deepBreathingDuration,nonatomic,retain) HKQuantity * deepBreathingDuration; 
@property (setter=_setPushCount:,getter=_pushCount,nonatomic,retain) HKQuantity * pushCount; 
@property (assign,setter=_setWheelchairUse:,getter=_wheelchairUse,nonatomic) long long wheelchairUse; 
@property (setter=_setFlightsClimbed:,getter=_flightsClimbed,nonatomic,retain) HKQuantity * flightsClimbed; 
@property (setter=_setEnergyBurnedGoalDate:,getter=_energyBurnedGoalDate,nonatomic,retain) NSDate * energyBurnedGoalDate;                                    //@synthesize energyBurnedGoalDate=_energyBurnedGoalDate - In the implementation block
@property (setter=_setMoveTimeGoalDate:,getter=_moveTimeGoalDate,nonatomic,retain) NSDate * moveTimeGoalDate;                                                //@synthesize moveTimeGoalDate=_moveTimeGoalDate - In the implementation block
@property (setter=_setBriskMinutesGoalDate:,getter=_briskMinutesGoalDate,nonatomic,retain) NSDate * briskMinutesGoalDate;                                    //@synthesize briskMinutesGoalDate=_briskMinutesGoalDate - In the implementation block
@property (setter=_setActiveHoursGoalDate:,getter=_activeHoursGoalDate,nonatomic,retain) NSDate * activeHoursGoalDate;                                       //@synthesize activeHoursGoalDate=_activeHoursGoalDate - In the implementation block
@property (setter=_setDailyEnergyBurnedStatistics:,getter=_dailyEnergyBurnedStatistics,nonatomic,retain) NSArray * dailyEnergyBurnedStatistics;              //@synthesize dailyEnergyBurnedStatistics=_dailyEnergyBurnedStatistics - In the implementation block
@property (setter=_setDailyMoveMinutesStatistics:,getter=_dailyMoveMinutesStatistics,nonatomic,retain) NSArray * dailyMoveMinuteStatistics;                  //@synthesize dailyMoveMinuteStatistics=_dailyMoveMinuteStatistics - In the implementation block
@property (setter=_setDailyMoveTimeStatistics:,getter=_dailyMoveTimeStatistics,nonatomic,retain) NSArray * dailyMoveTimeStatistics;                          //@synthesize dailyMoveTimeStatistics=_dailyMoveTimeStatistics - In the implementation block
@property (setter=_setDailyBriskMinutesStatistics:,getter=_dailyBriskMinutesStatistics,nonatomic,retain) NSArray * dailyBriskMinutesStatistics;              //@synthesize dailyBriskMinutesStatistics=_dailyBriskMinutesStatistics - In the implementation block
@property (nonatomic,retain) HKQuantity * distanceWalkingRunning; 
@property (nonatomic,retain) HKQuantity * stepCount; 
@property (nonatomic,retain) HKQuantity * appleMoveMinutes; 
@property (nonatomic,retain) HKQuantity * appleMoveMinutesGoal; 
@property (assign,setter=_setDataLoading:,getter=_isDataLoading,nonatomic) BOOL dataLoading;                                                                 //@synthesize dataLoading=_dataLoading - In the implementation block
@property (getter=_hasMoveGoal,nonatomic,readonly) BOOL hasMoveGoal; 
@property (getter=_hasEnergyBurnedGoal,nonatomic,readonly) BOOL hasEnergyBurnedGoal; 
@property (getter=_hasAppleMoveMinutesGoal,nonatomic,readonly) BOOL hasAppleMoveMinutesGoal; 
@property (assign,nonatomic) long long activityMoveMode; 
@property (nonatomic,retain) HKQuantity * activeEnergyBurned; 
@property (nonatomic,retain) HKQuantity * appleMoveTime; 
@property (nonatomic,retain) HKQuantity * appleExerciseTime; 
@property (nonatomic,retain) HKQuantity * appleStandHours; 
@property (nonatomic,retain) HKQuantity * activeEnergyBurnedGoal; 
@property (nonatomic,retain) HKQuantity * appleMoveTimeGoal; 
@property (nonatomic,retain) HKQuantity * appleExerciseTimeGoal; 
@property (nonatomic,retain) HKQuantity * appleStandHoursGoal; 
+(BOOL)supportsSecureCoding;
+(BOOL)_validateActivitySummaryDateComponents:(id)arg1 errorMessage:(id*)arg2 ;
+(BOOL)_validateActivitySummaryDateComponentsRange:(id)arg1 endDateComponents:(id)arg2 errorMessage:(id*)arg3 ;
+(id)_mostRecentlyCreatedCacheAmongCaches:(id)arg1 ;
+(id)_mostSignificantCacheAmongCaches:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setCreationDate:(id)arg1 ;
-(id)_startDate;
-(id)_endDate;
-(id)_creationDate;
-(HKQuantity *)stepCount;
-(long long)_wheelchairUse;
-(long long)activityMoveMode;
-(long long)_activityMoveMode;
-(long long)_activitySummaryIndex;
-(HKQuantity *)appleMoveTime;
-(HKQuantity *)appleMoveTimeGoal;
-(HKQuantity *)activeEnergyBurned;
-(HKQuantity *)activeEnergyBurnedGoal;
-(HKQuantity *)appleExerciseTime;
-(HKQuantity *)appleExerciseTimeGoal;
-(HKQuantity *)appleStandHours;
-(HKQuantity *)appleStandHoursGoal;
-(void)setStepCount:(HKQuantity *)arg1 ;
-(HKQuantity *)distanceWalkingRunning;
-(id)_pushCount;
-(void)_setActivitySummaryIndex:(long long)arg1 ;
-(void)_setStartDate:(id)arg1 ;
-(void)_setEndDate:(id)arg1 ;
-(void)setActiveEnergyBurned:(HKQuantity *)arg1 ;
-(void)setActiveEnergyBurnedGoal:(HKQuantity *)arg1 ;
-(void)setAppleMoveTime:(HKQuantity *)arg1 ;
-(void)setAppleMoveTimeGoal:(HKQuantity *)arg1 ;
-(void)setActivityMoveMode:(long long)arg1 ;
-(void)setAppleExerciseTime:(HKQuantity *)arg1 ;
-(void)setAppleExerciseTimeGoal:(HKQuantity *)arg1 ;
-(void)setAppleStandHours:(HKQuantity *)arg1 ;
-(void)setAppleStandHoursGoal:(HKQuantity *)arg1 ;
-(void)setDistanceWalkingRunning:(HKQuantity *)arg1 ;
-(void)_setPushCount:(id)arg1 ;
-(void)_setWheelchairUse:(long long)arg1 ;
-(void)_setDeepBreathingDuration:(id)arg1 ;
-(void)_setFlightsClimbed:(id)arg1 ;
-(void)_setDailyEnergyBurnedStatistics:(id)arg1 ;
-(void)_setDailyMoveMinutesStatistics:(id)arg1 ;
-(void)_setDailyBriskMinutesStatistics:(id)arg1 ;
-(void)_setActivityMoveMode:(long long)arg1 ;
-(id)_deepBreathingDuration;
-(id)_energyBurnedGoalDate;
-(id)_briskMinutesGoalDate;
-(id)_activeHoursGoalDate;
-(id)_flightsClimbed;
-(id)_dailyEnergyBurnedStatistics;
-(id)_dailyMoveMinutesStatistics;
-(id)_dailyBriskMinutesStatistics;
-(id)_moveTimeGoalDate;
-(id)_decodeQuantityFromCoder:(id)arg1 forKey:(id)arg2 unit:(id)arg3 ;
-(void)_encodeQuantity:(id)arg1 withCoder:(id)arg2 key:(id)arg3 unit:(id)arg4 ;
-(id)dateComponentsForCalendar:(id)arg1 ;
-(id)_dailyMoveTimeStatistics;
-(BOOL)_hasEnergyBurnedGoal;
-(BOOL)_hasAppleMoveTimeGoal;
-(void)_validateQuantityAssignment:(id)arg1 expectedUnit:(id)arg2 propertyName:(id)arg3 ;
-(double)_percentageCompleteWithQuantity:(id)arg1 goalQuantity:(id)arg2 unit:(id)arg3 ;
-(void)_setEnergyBurnedGoalDate:(id)arg1 ;
-(void)_setMoveTimeGoalDate:(id)arg1 ;
-(void)_setBriskMinutesGoalDate:(id)arg1 ;
-(void)_setActiveHoursGoalDate:(id)arg1 ;
-(void)_setDailyMoveTimeStatistics:(id)arg1 ;
-(BOOL)_allFieldsAreEqual:(id)arg1 ;
-(id)_gregorianDateComponents;
-(HKQuantity *)appleMoveMinutes;
-(HKQuantity *)appleMoveMinutesGoal;
-(BOOL)_hasMoveGoal;
-(BOOL)_hasAppleMoveMinutesGoal;
-(BOOL)_hasExerciseGoal;
-(BOOL)_hasStandHoursGoal;
-(BOOL)_useHourlyGoalComparison;
-(void)setAppleMoveMinutes:(HKQuantity *)arg1 ;
-(void)setAppleMoveMinutesGoal:(HKQuantity *)arg1 ;
-(void)_setGregorianDateComponents:(id)arg1 ;
-(double)_activeEnergyCompletionPercentage;
-(double)_moveMinutesCompletionPercentage;
-(double)_exerciseTimeCompletionPercentage;
-(double)_standHoursCompletionPercentage;
-(id)_initWithActivityCache:(id)arg1 shouldIncludePrivateProperties:(BOOL)arg2 ;
-(BOOL)_isDataLoading;
-(void)_setDataLoading:(BOOL)arg1 ;
@end

