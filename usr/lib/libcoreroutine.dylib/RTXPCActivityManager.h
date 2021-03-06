/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTService.h>

@class RTDefaultsManager, RTTimerManager, RTTimer, NSMutableDictionary, RTXPCActivityTask, NSMutableArray;

@interface RTXPCActivityManager : RTService {

	RTDefaultsManager* _defaultsManager;
	RTTimerManager* _timerManager;
	RTTimer* _timer;
	NSMutableDictionary* _registrants;
	RTXPCActivityTask* _runningTask;
	NSMutableArray* _pendingTasks;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;              //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTTimerManager * timerManager;                    //@synthesize timerManager=_timerManager - In the implementation block
@property (nonatomic,retain) RTTimer * timer;                                  //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registrants;                //@synthesize registrants=_registrants - In the implementation block
@property (nonatomic,retain) RTXPCActivityTask * runningTask;                  //@synthesize runningTask=_runningTask - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingTasks;                    //@synthesize pendingTasks=_pendingTasks - In the implementation block
+(void)xpcActivityUnregisterIdentifier:(const char*)arg1 ;
+(id)lastAttemptDateKeyForIdentifier:(id)arg1 ;
+(id)lastCompleteDateKeyForIdentifier:(id)arg1 ;
+(BOOL)xpcActivityShouldDeferActivity:(id)arg1 ;
+(id)criteriaDictionaryWithCriteria:(id)arg1 ;
+(long long)xpcActivityGetStateActivity:(id)arg1 ;
+(id)xpcActivityCopyCriteriaActivity:(id)arg1 ;
+(void)xpcActivitySetCriteriaActivity:(id)arg1 criteria:(id)arg2 ;
+(BOOL)xpcActivitySetStateActivity:(id)arg1 state:(long long)arg2 ;
+(void)xpcActivityRegisterIdentifier:(const char*)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(void)_setup;
-(void)setTimer:(RTTimer *)arg1 ;
-(RTTimer *)timer;
-(void)_shutdown;
-(void)registerActivityWithIdentifier:(id)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTTimerManager *)timerManager;
-(void)setTimerManager:(RTTimerManager *)arg1 ;
-(void)_stopDeferCheckTimer;
-(void)_startDeferCheckTimer;
-(RTDefaultsManager *)defaultsManager;
-(id)initWithDefaultsManager:(id)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)unregisterActivityWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 timerManager:(id)arg2 ;
-(NSMutableDictionary *)registrants;
-(id)_lastAttemptDateForIdentifier:(id)arg1 ;
-(id)_registerRegistrant:(id)arg1 ;
-(NSMutableArray *)pendingTasks;
-(void)_scheduleNextTask;
-(void)_runRegistrantWithIdentifier:(id)arg1 activity:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTXPCActivityTask *)runningTask;
-(void)_onDeferCheckTimer;
-(void)setRunningTask:(RTXPCActivityTask *)arg1 ;
-(void)_updateLastCompleteDateForIdentifier:(id)arg1 ;
-(id)_lastCompleteDateForIdentifier:(id)arg1 ;
-(void)_updateLastAttemptDateForIdentifier:(id)arg1 ;
-(void)runRegistrantWithIdentifier:(id)arg1 activity:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_registerActivityWithIdentifier:(id)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_unregisterActivityWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setRegistrants:(NSMutableDictionary *)arg1 ;
-(void)setPendingTasks:(NSMutableArray *)arg1 ;
@end

