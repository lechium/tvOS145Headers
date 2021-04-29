/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKSerializableObject.h>

@class EKRecurrenceEnd, NSArray;

@interface EKSerializableRecurrenceRule : EKSerializableObject {

	long long _frequency;
	long long _interval;
	EKRecurrenceEnd* _recurrenceEnd;
	long long _firstDayOfTheWeek;
	NSArray* _daysOfTheWeek;
	NSArray* _daysOfTheMonth;
	NSArray* _daysOfTheYear;
	NSArray* _weeksOfTheYear;
	NSArray* _monthsOfTheYear;
	NSArray* _setPositions;

}

@property (nonatomic,readonly) long long frequency;                      //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) long long interval;                       //@synthesize interval=_interval - In the implementation block
@property (nonatomic,copy) EKRecurrenceEnd * recurrenceEnd;              //@synthesize recurrenceEnd=_recurrenceEnd - In the implementation block
@property (nonatomic,readonly) long long firstDayOfTheWeek;              //@synthesize firstDayOfTheWeek=_firstDayOfTheWeek - In the implementation block
@property (nonatomic,readonly) NSArray * daysOfTheWeek;                  //@synthesize daysOfTheWeek=_daysOfTheWeek - In the implementation block
@property (nonatomic,readonly) NSArray * daysOfTheMonth;                 //@synthesize daysOfTheMonth=_daysOfTheMonth - In the implementation block
@property (nonatomic,readonly) NSArray * daysOfTheYear;                  //@synthesize daysOfTheYear=_daysOfTheYear - In the implementation block
@property (nonatomic,readonly) NSArray * weeksOfTheYear;                 //@synthesize weeksOfTheYear=_weeksOfTheYear - In the implementation block
@property (nonatomic,readonly) NSArray * monthsOfTheYear;                //@synthesize monthsOfTheYear=_monthsOfTheYear - In the implementation block
@property (nonatomic,readonly) NSArray * setPositions;                   //@synthesize setPositions=_setPositions - In the implementation block
+(id)classesForKey;
-(long long)interval;
-(long long)frequency;
-(NSArray *)daysOfTheWeek;
-(NSArray *)daysOfTheMonth;
-(NSArray *)daysOfTheYear;
-(NSArray *)monthsOfTheYear;
-(NSArray *)weeksOfTheYear;
-(NSArray *)setPositions;
-(void)setRecurrenceEnd:(EKRecurrenceEnd *)arg1 ;
-(EKRecurrenceEnd *)recurrenceEnd;
-(long long)firstDayOfTheWeek;
-(id)initWithRecurrenceRule:(id)arg1 ;
-(id)createRecurrenceRule:(id*)arg1 ;
@end

