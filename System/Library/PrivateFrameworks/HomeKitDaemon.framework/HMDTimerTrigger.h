/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDTrigger.h>

@class NSDate, NSTimeZone, NSString, NSDateComponents, NSArray, NSTimer;

@interface HMDTimerTrigger : HMDTrigger {

	os_unfair_lock_s _lock;
	NSDate* currentFireDate;
	NSDate* _currentFireDate;
	NSDate* _fireDate;
	NSTimeZone* _fireDateTimeZone;
	NSString* _significantEvent;
	NSDateComponents* _significantEventOffset;
	NSDateComponents* _fireRepeatInterval;
	NSArray* _recurrences;
	NSString* _timerID;
	NSTimer* _timer;

}

@property (nonatomic,copy) NSDate * fireDate;                                      //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * fireDateTimeZone;                          //@synthesize fireDateTimeZone=_fireDateTimeZone - In the implementation block
@property (nonatomic,copy) NSString * significantEvent;                            //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,copy) NSDateComponents * significantEventOffset;              //@synthesize significantEventOffset=_significantEventOffset - In the implementation block
@property (nonatomic,copy) NSDateComponents * fireRepeatInterval;                  //@synthesize fireRepeatInterval=_fireRepeatInterval - In the implementation block
@property (nonatomic,copy) NSArray * recurrences;                                  //@synthesize recurrences=_recurrences - In the implementation block
@property (nonatomic,retain) NSString * timerID;                                   //@synthesize timerID=_timerID - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                      //@synthesize timer=_timer - In the implementation block
@property (readonly) NSDate * currentFireDate;                                     //@synthesize currentFireDate=_currentFireDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)validateTriggerModel:(id)arg1 message:(id)arg2 currentFireDate:(id)arg3 ;
+(id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2 ;
+(id)getCalendar:(id)arg1 ;
+(id)validateRecurrence:(id)arg1 calendar:(id)arg2 fireDate:(id)arg3 ;
+(id)validateRecurrences:(id)arg1 ;
+(id)validateSignificantOffset:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(NSDate *)fireDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(unsigned long long)triggerType;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopTimer;
-(NSString *)timerID;
-(NSArray *)recurrences;
-(void)setRecurrences:(NSArray *)arg1 ;
-(void)setTimerID:(NSString *)arg1 ;
-(id)dumpState;
-(void)_startTimerWithFireDate:(id)arg1 ;
-(id)_nextFireDate;
-(void)timerFired:(id)arg1 ;
-(id)_serializeForAdd;
-(NSString *)significantEvent;
-(void)_registerForMessages;
-(id)initWithName:(id)arg1 uuid:(id)arg2 ;
-(NSDateComponents *)significantEventOffset;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)setSignificantEventOffset:(NSDateComponents *)arg1 ;
-(BOOL)shouldActivateOnLocalDevice;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3 ;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(void)completeConfiguration;
-(NSTimeZone *)fireDateTimeZone;
-(NSDateComponents *)fireRepeatInterval;
-(void)_timerTriggered;
-(id)getCalendar;
-(id)getFireInterval;
-(void)_startTimer:(id)arg1 ;
-(void)setCurrentFireDate:(NSDate *)arg1 ;
-(void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1 ;
-(void)setFireDateTimeZone:(NSTimeZone *)arg1 ;
-(void)setFireRepeatInterval:(NSDateComponents *)arg1 ;
-(void)_handleUpdateTimerTriggerPropertiesModel:(id)arg1 message:(id)arg2 ;
-(BOOL)_reactivateFireDateTrigger;
-(BOOL)_reactivateSignificantEventTrigger;
-(void)_disableTimerOffReactivationFailure;
-(id)_nextSignificantEventFireDate;
-(void)_startTimerWithSignificantEventDate:(id)arg1 ;
-(void)_reactiveTriggerAfterDelay;
-(void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id*)arg5 returnDateAfter:(id*)arg6 ;
-(BOOL)_shouldExecuteActionSet;
-(BOOL)_reactivateTrigger;
-(void)_handleTimerTriggerUpdate:(id)arg1 message:(id)arg2 ;
-(void)timerTriggered;
-(NSDate *)currentFireDate;
-(void)nsTimerTriggered:(id)arg1 ;
@end

