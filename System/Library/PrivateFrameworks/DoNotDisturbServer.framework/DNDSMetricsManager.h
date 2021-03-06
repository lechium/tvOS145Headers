/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DNDSBackingStore;
@class DNDSMutableMetricsRecord, NSCalendar, NSDateFormatter;

@interface DNDSMetricsManager : NSObject {

	id<DNDSBackingStore> _metricsBackingStore;
	DNDSMutableMetricsRecord* _metricsRecord;
	NSCalendar* _calendar;
	NSDateFormatter* _dateFormatter;

}
-(id)init;
-(id)_calendar;
-(id)_dateFormatter;
-(void)_aggregateMetricsWithEnabled:(BOOL)arg1 manuallyEnabled:(BOOL)arg2 numberOfNewSessions:(int)arg3 numberOfNewManualSessions:(int)arg4 controlCenterPhone:(BOOL)arg5 controlCenterWatch:(BOOL)arg6 type:(id)arg7 mode:(id)arg8 dayOfWeek:(id)arg9 ;
-(void)sendMetricsHeartbeatsIfNeeded;
-(void)_sendDailyHeartbeatIfNeeded;
-(void)_sendWeeklyHeartbeatIfNeeded;
-(void)_sendMonthlyHeartbeatIfNeeded;
-(id)_metricsDayStringForDate:(id)arg1 ;
-(id)_metricsWeekStringForDate:(id)arg1 ;
-(id)_metricsMonthStringForDate:(id)arg1 ;
-(void)_writeMetricsToStore:(id)arg1 ;
-(id)_dateForYesterday;
-(id)_startOfWeekWithDate:(id)arg1 ;
-(id)_startOfLastWeek;
-(id)_startOfMonthWithDate:(id)arg1 ;
-(id)_startOfLastMonth;
-(void)assertionTaken:(id)arg1 withClientDetails:(id)arg2 lockState:(unsigned long long)arg3 ;
@end

