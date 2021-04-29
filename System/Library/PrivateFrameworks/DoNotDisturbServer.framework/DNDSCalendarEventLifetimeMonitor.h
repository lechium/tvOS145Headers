/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DNDSBaseLifetimeMonitor.h>

@class EKEventStore, PCPersistentTimer;

@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor {

	EKEventStore* _eventStore;
	PCPersistentTimer* _lifetimeTimer;

}
+(Class)lifetimeClass;
-(id)init;
-(void)_timerFired:(id)arg1 ;
-(id)updateForModeAssertions:(id)arg1 date:(id)arg2 ;
-(void)_calendarEventStoreChangedWithNotification:(id)arg1 ;
-(id)activeDateIntervalForCalendarEventLifetime:(id)arg1 assertionStartDate:(id)arg2 ;
@end

