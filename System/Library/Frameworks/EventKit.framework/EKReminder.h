/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKCalendarItem.h>

@class NSDateComponents, EKObjectID, NSTimeZone, NSDate;

@interface EKReminder : EKCalendarItem {

	NSDateComponents* _startDateComponents;
	NSDateComponents* _dueDateComponents;
	EKObjectID* _parentID;

}

@property (nonatomic,readonly) NSTimeZone * dueDateTimeZone; 
@property (nonatomic,retain) EKObjectID * parentID;                             //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,copy) NSDateComponents * startDateComponents;              //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,copy) NSDateComponents * dueDateComponents;                //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) unsigned long long priority; 
+(id)knownSingleValueKeysForComparison;
+(Class)frozenClass;
+(id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2 ;
+(id)reminderWithEventStore:(id)arg1 ;
+(void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2 ;
-(id)description;
-(id)init;
-(void)setTimeZone:(id)arg1 ;
-(id)timeZone;
-(BOOL)_reset;
-(void)reset;
-(void)rollback;
-(BOOL)refresh;
-(BOOL)validate:(id*)arg1 ;
-(EKObjectID *)parentID;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setDueDate:(id)arg1 ;
-(id)dueDate;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(void)setAllDay:(BOOL)arg1 ;
-(unsigned long long)entityType;
-(BOOL)isCompleted;
-(NSDateComponents *)startDateComponents;
-(NSDateComponents *)startDateComponents;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(id)externalURI;
-(BOOL)isAllDay;
-(void)forceUpdateFrozenCalendar:(id)arg1 ;
-(unsigned long long)displayOrder;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(id)initWithPersistentObject:(id)arg1 ;
-(id)startTimeZone;
-(void)setStartTimeZone:(id)arg1 ;
-(id)_generateNewUniqueID;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)startDateForRecurrence;
-(id)reminderIdentifier;
-(void)setParentID:(EKObjectID *)arg1 ;
-(NSDateComponents *)dueDateComponents;
-(NSDateComponents *)dueDateComponents;
-(id)firstAlertDate;
-(void)setFirstAlertDate:(id)arg1 ;
-(void)clearParentID;
-(id)bestDisplayAlarm;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(NSTimeZone *)dueDateTimeZone;
-(BOOL)dueDateAllDay;
-(void)_adjustPersistedStartDateComponentsForNewTimeZone:(id)arg1 ;
-(id)startDateComponentsRaw;
-(id)startDateTimeZone;
-(void)setStartDateTimeZone:(id)arg1 ;
-(BOOL)startDateAllDay;
-(void)setStartDateAllDay:(BOOL)arg1 ;
@end

