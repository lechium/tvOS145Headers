/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CADStatCollector : NSObject

@property (nonatomic,readonly) BOOL wantsStores; 
@property (nonatomic,readonly) BOOL wantsCalendars; 
@property (nonatomic,readonly) BOOL wantsBirthdays; 
@property (nonatomic,readonly) BOOL wantsOccurrences; 
@property (nonatomic,readonly) BOOL wantsEvents; 
@property (nonatomic,readonly) BOOL wantsSignificantEvents; 
+(BOOL)enabled;
+(id)eventName;
-(void)prepareWithContext:(id)arg1 ;
-(BOOL)wantsCalendars;
-(void)processCalendars:(id)arg1 inStore:(void*)arg2 ;
-(id)eventDictionaries;
-(BOOL)wantsStores;
-(BOOL)wantsBirthdays;
-(BOOL)wantsOccurrences;
-(BOOL)wantsEvents;
-(BOOL)wantsSignificantEvents;
-(void)processStores:(id)arg1 ;
-(void)processBirthdayCalendarEvents:(id)arg1 ;
-(void)processOccurrences:(id)arg1 ;
-(void)processEvents:(id)arg1 ;
-(void)processSignificantEventWithPredictedLocation:(BOOL)arg1 onSharedCalendar:(BOOL)arg2 ;
@end

