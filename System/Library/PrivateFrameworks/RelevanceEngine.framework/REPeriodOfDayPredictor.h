/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REPeriodOfDayPredictorProperties.h>

@class NSArray, NSLock, REUpNextTimer, REDuetKnowledgeStore, NSDateInterval;

@interface REPeriodOfDayPredictor : REPredictor <REPeriodOfDayPredictorProperties> {

	NSArray* _storedPeriods;
	NSLock* _storedPeriodsLock;
	REUpNextTimer* _periodOfDayUpdateTimer;
	REDuetKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,readonly) unsigned long long currentPeriodOfDay; 
@property (nonatomic,readonly) NSDateInterval * intervalForCurrentPeriodOfDay; 
@property (nonatomic,readonly) NSArray * storedPeriods; 
+(double)updateInterval;
-(void)dealloc;
-(id)_init;
-(void)update;
-(void)_handleSignificantTimeChange;
-(unsigned long long)currentPeriodOfDay;
-(NSDateInterval *)intervalForCurrentPeriodOfDay;
-(id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 ;
-(id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 ;
-(id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 beforeDate:(id)arg2 ;
-(id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 afterDate:(id)arg2 ;
-(id)_defaultDayPeriodsOfDayForDate:(id)arg1 ;
-(void)_queue_updateNextDateUpdateTimer;
-(id)_periodsOfDayForSleepIntervals:(id)arg1 ;
-(void)_getAllSleepIntervalsWithCompletion:(/*^block*/id)arg1 ;
-(void)_getPredictedSleepIntervalsWithCompletion:(/*^block*/id)arg1 ;
-(void)_getHistoricSleepIntervalsWithCompletion:(/*^block*/id)arg1 ;
-(id)_nextDayPeriodUpdateDate;
-(NSArray *)storedPeriods;
@end

