//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "_DASActivityMetering-Protocol.h"
#import "_DASActivityOmnibusScheduling-Protocol.h"
#import "_DASPluginDelegate-Protocol.h"

@class NSCountedSet, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults, NSXPCListener, _CDContextualKeyPath, _DASBARScheduler, _DASBatchingQueue, _DASBlueListManager, _DASBudgetManager, _DASClosureManager, _DASControlEngine, _DASENManager, _DASFairScheduleManager, _DASNetworkEvaluationMonitor, _DASRateLimiter, _DASSleepWakeMonitor, _DASTimer, _DASUserRequestedBackupTaskManager;
@protocol OS_dispatch_queue, OS_dispatch_source, _CDLocalContext, _DASDataStore;

@interface _DASDaemon : NSObject <NSXPCListenerDelegate, _DASPluginDelegate, _DASActivityOmnibusScheduling, _DASActivityMetering>
{
    struct os_unfair_lock_s _groupLock;	// 8 = 0x8
    struct os_unfair_lock_s _constraintsLock;	// 12 = 0xc
    NSMutableArray *_clients;	// 16 = 0x10
    struct os_unfair_recursive_lock_s _activityStateLock;	// 24 = 0x18
    NSMutableSet *_pendingTasks;	// 32 = 0x20
    NSMutableSet *_prerunningTasks;	// 40 = 0x28
    NSMutableSet *_runningTasks;	// 48 = 0x30
    NSDictionary *_triggerToPolicyMap;	// 56 = 0x38
    NSMutableDictionary *_triggerToActivitiesMap;	// 64 = 0x40
    NSMutableDictionary *_activityToIncompatibleActivitiesMap;	// 72 = 0x48
    NSMutableDictionary *_groups;	// 80 = 0x50
    NSMutableDictionary *_groupToPendingTasks;	// 88 = 0x58
    NSMutableDictionary *_groupToRunningTasks;	// 96 = 0x60
    NSMutableDictionary *_groupToPrerunningTasks;	// 104 = 0x68
    struct os_unfair_recursive_lock_s _applicationLaunchRequestsLock;	// 112 = 0x70
    NSMutableDictionary *_applicationLaunchRequests;	// 120 = 0x78
    NSMutableDictionary *_extensionLaunchRequests;	// 128 = 0x80
    _DASUserRequestedBackupTaskManager *_backupTaskManager;	// 136 = 0x88
    NSXPCListener *_listener;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_timerSchedulingQueue;	// 152 = 0x98
    _DASTimer *_schedulingTimer;	// 160 = 0xa0
    NSDate *_timerEarliestFireDate;	// 168 = 0xa8
    NSDate *_timerLatestFireDate;	// 176 = 0xb0
    _DASNetworkEvaluationMonitor *_networkEvaluationMonitor;	// 184 = 0xb8
    _DASSleepWakeMonitor *_sleepWakeMonitor;	// 192 = 0xc0
    id <_DASDataStore> _store;	// 200 = 0xc8
    NSObject<OS_dispatch_source> *_optimalScoringTimer;	// 208 = 0xd0
    NSObject<OS_dispatch_source> *_databaseMaintenanceTimer;	// 216 = 0xd8
    NSObject<OS_dispatch_queue> *_evaluationQueue;	// 224 = 0xe0
    _DASBatchingQueue *_triggerBatchingQueue;	// 232 = 0xe8
    _DASBatchingQueue *_activityCompletedBatchingQueue;	// 240 = 0xf0
    _DASENManager *_enManager;	// 248 = 0xf8
    _DASFairScheduleManager *_fairScheduleManager;	// 256 = 0x100
    _DASRateLimiter *_rateLimiter;	// 264 = 0x108
    _DASControlEngine *_controlEnginge;	// 272 = 0x110
    NSMutableDictionary *_recentlyLaunchedApps;	// 280 = 0x118
    NSCountedSet *_launchesPerApp;	// 288 = 0x120
    NSObject<OS_dispatch_source> *_launchTimeResetTimer;	// 296 = 0x128
    NSObject<OS_dispatch_queue> *_launchQueue;	// 304 = 0x130
    NSObject<OS_dispatch_queue> *_profilerQueue;	// 312 = 0x138
    _DASBARScheduler *_barScheduler;	// 320 = 0x140
    _DASBlueListManager *_blueListManager;	// 328 = 0x148
    NSObject<OS_dispatch_queue> *_activityLaunchQueue;	// 336 = 0x150
    _DASClosureManager *_closureManager;	// 344 = 0x158
    _DASBudgetManager *_budgetManager;	// 352 = 0x160
    unsigned long long _photosIsBlocked;	// 360 = 0x168
    _CDContextualKeyPath *_utilityConstraintsKP;	// 368 = 0x170
    _CDContextualKeyPath *_maintenanceConstraintsKP;	// 376 = 0x178
    unsigned long long _utilityConstraints;	// 384 = 0x180
    unsigned long long _maintenanceConstraints;	// 392 = 0x188
    NSDictionary *_testModeParameters;	// 400 = 0x190
    NSDictionary *_pausedParameters;	// 408 = 0x198
    NSUserDefaults *_testingDefaults;	// 416 = 0x1a0
    NSMutableDictionary *_activitiesWaitingForBGTaskClients;	// 424 = 0x1a8
    NSMutableDictionary *_connectedBGTaskClients;	// 432 = 0x1b0
    id <_CDLocalContext> _context;	// 440 = 0x1b8
}

+ (id)sharedInstance;	// IMP=0x0000000100043dfc
+ (id)daemon;	// IMP=0x0000000100042ed8
- (void).cxx_destruct;	// IMP=0x0000000100062da4
@property(retain, nonatomic) id <_CDLocalContext> context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableDictionary *connectedBGTaskClients; // @synthesize connectedBGTaskClients=_connectedBGTaskClients;
@property(retain, nonatomic) NSMutableDictionary *activitiesWaitingForBGTaskClients; // @synthesize activitiesWaitingForBGTaskClients=_activitiesWaitingForBGTaskClients;
@property(retain, nonatomic) NSUserDefaults *testingDefaults; // @synthesize testingDefaults=_testingDefaults;
@property(retain) NSDictionary *pausedParameters; // @synthesize pausedParameters=_pausedParameters;
@property(retain) NSDictionary *testModeParameters; // @synthesize testModeParameters=_testModeParameters;
@property(nonatomic) unsigned long long maintenanceConstraints; // @synthesize maintenanceConstraints=_maintenanceConstraints;
@property(nonatomic) unsigned long long utilityConstraints; // @synthesize utilityConstraints=_utilityConstraints;
@property(retain, nonatomic) _CDContextualKeyPath *maintenanceConstraintsKP; // @synthesize maintenanceConstraintsKP=_maintenanceConstraintsKP;
@property(retain, nonatomic) _CDContextualKeyPath *utilityConstraintsKP; // @synthesize utilityConstraintsKP=_utilityConstraintsKP;
@property(nonatomic) struct os_unfair_lock_s constraintsLock; // @synthesize constraintsLock=_constraintsLock;
@property(nonatomic) unsigned long long photosIsBlocked; // @synthesize photosIsBlocked=_photosIsBlocked;
@property(retain, nonatomic) _DASBudgetManager *budgetManager; // @synthesize budgetManager=_budgetManager;
@property(retain, nonatomic) _DASClosureManager *closureManager; // @synthesize closureManager=_closureManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activityLaunchQueue; // @synthesize activityLaunchQueue=_activityLaunchQueue;
@property(retain, nonatomic) _DASBlueListManager *blueListManager; // @synthesize blueListManager=_blueListManager;
@property(retain, nonatomic) _DASBARScheduler *barScheduler; // @synthesize barScheduler=_barScheduler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *profilerQueue; // @synthesize profilerQueue=_profilerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *launchQueue; // @synthesize launchQueue=_launchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *launchTimeResetTimer; // @synthesize launchTimeResetTimer=_launchTimeResetTimer;
@property(retain, nonatomic) NSCountedSet *launchesPerApp; // @synthesize launchesPerApp=_launchesPerApp;
@property(retain, nonatomic) NSMutableDictionary *recentlyLaunchedApps; // @synthesize recentlyLaunchedApps=_recentlyLaunchedApps;
@property(retain, nonatomic) _DASControlEngine *controlEnginge; // @synthesize controlEnginge=_controlEnginge;
@property(retain, nonatomic) _DASRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(retain, nonatomic) _DASFairScheduleManager *fairScheduleManager; // @synthesize fairScheduleManager=_fairScheduleManager;
@property(retain, nonatomic) _DASENManager *enManager; // @synthesize enManager=_enManager;
@property(retain, nonatomic) _DASBatchingQueue *activityCompletedBatchingQueue; // @synthesize activityCompletedBatchingQueue=_activityCompletedBatchingQueue;
@property(retain, nonatomic) _DASBatchingQueue *triggerBatchingQueue; // @synthesize triggerBatchingQueue=_triggerBatchingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *evaluationQueue; // @synthesize evaluationQueue=_evaluationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *databaseMaintenanceTimer; // @synthesize databaseMaintenanceTimer=_databaseMaintenanceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *optimalScoringTimer; // @synthesize optimalScoringTimer=_optimalScoringTimer;
@property(retain, nonatomic) id <_DASDataStore> store; // @synthesize store=_store;
@property(retain, nonatomic) _DASSleepWakeMonitor *sleepWakeMonitor; // @synthesize sleepWakeMonitor=_sleepWakeMonitor;
@property(retain, nonatomic) _DASNetworkEvaluationMonitor *networkEvaluationMonitor; // @synthesize networkEvaluationMonitor=_networkEvaluationMonitor;
@property(retain, nonatomic) NSDate *timerLatestFireDate; // @synthesize timerLatestFireDate=_timerLatestFireDate;
@property(retain, nonatomic) NSDate *timerEarliestFireDate; // @synthesize timerEarliestFireDate=_timerEarliestFireDate;
@property(retain, nonatomic) _DASTimer *schedulingTimer; // @synthesize schedulingTimer=_schedulingTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timerSchedulingQueue; // @synthesize timerSchedulingQueue=_timerSchedulingQueue;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) _DASUserRequestedBackupTaskManager *backupTaskManager; // @synthesize backupTaskManager=_backupTaskManager;
@property(retain, nonatomic) NSMutableDictionary *extensionLaunchRequests; // @synthesize extensionLaunchRequests=_extensionLaunchRequests;
@property(retain, nonatomic) NSMutableDictionary *applicationLaunchRequests; // @synthesize applicationLaunchRequests=_applicationLaunchRequests;
@property(nonatomic) struct os_unfair_recursive_lock_s applicationLaunchRequestsLock; // @synthesize applicationLaunchRequestsLock=_applicationLaunchRequestsLock;
@property(retain, nonatomic) NSMutableDictionary *groupToPrerunningTasks; // @synthesize groupToPrerunningTasks=_groupToPrerunningTasks;
@property(retain, nonatomic) NSMutableDictionary *groupToRunningTasks; // @synthesize groupToRunningTasks=_groupToRunningTasks;
@property(retain, nonatomic) NSMutableDictionary *groupToPendingTasks; // @synthesize groupToPendingTasks=_groupToPendingTasks;
@property(retain, nonatomic) NSMutableDictionary *groups; // @synthesize groups=_groups;
@property(nonatomic) struct os_unfair_lock_s groupLock; // @synthesize groupLock=_groupLock;
@property(retain, nonatomic) NSMutableDictionary *activityToIncompatibleActivitiesMap; // @synthesize activityToIncompatibleActivitiesMap=_activityToIncompatibleActivitiesMap;
@property(retain, nonatomic) NSMutableDictionary *triggerToActivitiesMap; // @synthesize triggerToActivitiesMap=_triggerToActivitiesMap;
@property(retain, nonatomic) NSDictionary *triggerToPolicyMap; // @synthesize triggerToPolicyMap=_triggerToPolicyMap;
@property(retain, nonatomic) NSMutableSet *runningTasks; // @synthesize runningTasks=_runningTasks;
@property(retain, nonatomic) NSMutableSet *prerunningTasks; // @synthesize prerunningTasks=_prerunningTasks;
@property(retain, nonatomic) NSMutableSet *pendingTasks; // @synthesize pendingTasks=_pendingTasks;
@property(nonatomic) struct os_unfair_recursive_lock_s activityStateLock; // @synthesize activityStateLock=_activityStateLock;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (void)extensionActivity:(id)arg1 finishedWithStatus:(unsigned char)arg2;	// IMP=0x00000001000627c4
- (void)activityStoppedWithParameters:(id)arg1;	// IMP=0x00000001000624bc
- (void)activityStartedWithParameters:(id)arg1;	// IMP=0x00000001000624ac
- (id)tasksNoLongerEligible;	// IMP=0x0000000100062428
- (id)tasksNoLongerEligibleFromTasks:(id)arg1;	// IMP=0x0000000100061d90
- (id)candidateGroupActivityForPreemption:(id)arg1;	// IMP=0x0000000100061af8
- (id)candidateLongRunningActivityForPreemption:(id)arg1;	// IMP=0x0000000100061840
- (_Bool)shouldPreemptTask:(id)arg1 withStartDate:(id)arg2 atDate:(id)arg3;	// IMP=0x0000000100061634
- (_Bool)activity:(id)arg1 withStartDate:(id)arg2 runningForTooLongAtDate:(id)arg3;	// IMP=0x0000000100061474
- (void)evaluateScoreAndRunAllActivitiesForReason:(id)arg1;	// IMP=0x0000000100061284
- (void)unprotectedEvaluateScoreAndRunActivities:(id)arg1;	// IMP=0x0000000100060c30
- (void)evaluateScoreAndRunActivities:(id)arg1;	// IMP=0x0000000100060b5c
- (void)chooseActivitiesToRunFromCandidateActivities:(id)arg1 toBeRunActivities:(id)arg2 toLaunchApplications:(id)arg3 toLaunchExtension:(id)arg4;	// IMP=0x000000010005fe0c
- (void)determineNextTimerFireDateAndSchedule;	// IMP=0x000000010005f768
- (void)schedulingTimerFired;	// IMP=0x000000010005f64c
- (void)periodicCalculationForOptimal;	// IMP=0x000000010005f438
- (void)removeActivityFromTriggerMap:(id)arg1;	// IMP=0x000000010005f350
- (void)associateActivity:(id)arg1 withTriggerKeys:(id)arg2;	// IMP=0x000000010005f11c
- (void)addTriggersToActivity:(id)arg1;	// IMP=0x000000010005ec74
- (void)registerTriggersWithContextStoreForPolicies:(id)arg1;	// IMP=0x000000010005e8f4
- (void)registerWithContextStoreForId:(id)arg1 contextualPredicate:(id)arg2 dismissalCondition:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(_Bool)arg5;	// IMP=0x000000010005e3b8
- (void)handleCompletedActivities:(id)arg1;	// IMP=0x000000010005e020
- (void)handleTriggers:(id)arg1;	// IMP=0x000000010005d334
- (void)registerForNetworkPathEvaluation;	// IMP=0x000000010005d1b0
- (void)pauseWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005d040
- (void)enterTestModeWithParameters:(id)arg1;	// IMP=0x000000010005cf58
- (void)blockingPoliciesWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005c9ec
- (void)clasStatusWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c968
- (void)policiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c7a4
- (void)setCapacity:(double)arg1 forBudgetWithName:(id)arg2;	// IMP=0x000000010005c794
- (void)setBalance:(double)arg1 forBudgetWithName:(id)arg2;	// IMP=0x000000010005c784
- (void)remainingBalanceForBudgetWithName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005c71c
- (void)allBudgetsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c6ac
- (void)statisticsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c48c
- (id)widgetRefreshStatisticsWithStore:(id)arg1;	// IMP=0x000000010005bae4
- (id)widgetViewsStatisticsWithStore:(id)arg1;	// IMP=0x000000010005b344
- (id)earlyToday;	// IMP=0x000000010005b270
- (void)currentPredictionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b1fc
- (void)forceRunActivities:(id)arg1;	// IMP=0x000000010005af88
- (id)activityRunStatistics;	// IMP=0x000000010005af80
- (void)activityRunStatisticsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005af6c
- (void)scoresForActivityWithName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005af58
- (void)runningGroupActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005ad70
- (void)runningActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005aa2c
- (void)delayedRunningActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a898
- (void)submittedActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a634
- (void)completeTaskRequest:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000010005a628
- (void)completeTaskRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005a624
- (void)willExpireBGTaskActivities:(id)arg1;	// IMP=0x000000010005a620
- (void)handleLaunchFromDaemonForActivities:(id)arg1;	// IMP=0x000000010005a61c
- (void)establishConnectionFromClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005a114
- (void)establishConnection:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a110
- (void)scheduleConnectionTimeoutForPid:(int)arg1;	// IMP=0x0000000100059bf8
- (void)getPendingTaskRequestsForApplication:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000599d4
- (void)getPendingTaskRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000599d0
- (void)cancelTaskRequestWithIdentifier:(id)arg1 forApplication:(id)arg2;	// IMP=0x0000000100059738
- (void)cancelTaskRequestWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100059734
- (void)cancelAllTaskRequestsForApplication:(id)arg1;	// IMP=0x0000000100059578
- (void)cancelAllTaskRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100059574
- (_Bool)canSubmitValidatedTaskRequest:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100058c00
- (void)submitTaskRequest:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100058bfc
- (void)setMinimumBackgroundFetchInterval:(double)arg1 forApp:(id)arg2;	// IMP=0x0000000100058bec
- (void)submitActivity:(id)arg1 inGroup:(id)arg2;	// IMP=0x0000000100058a0c
- (void)submitActivity:(id)arg1 inGroupWithName:(id)arg2;	// IMP=0x0000000100058a00
- (void)createActivityGroup:(id)arg1;	// IMP=0x00000001000588d4
- (void)addPendingActivitiesToGroups:(id)arg1;	// IMP=0x0000000100058770
- (void)addPendingActivity:(id)arg1 toGroupWithName:(id)arg2;	// IMP=0x0000000100058690
- (void)addRunningActivity:(id)arg1 toGroupWithName:(id)arg2;	// IMP=0x0000000100058480
- (void)addPrerunningActivity:(id)arg1 toGroupWithName:(id)arg2;	// IMP=0x0000000100058090
- (void)updateActivity:(id)arg1 withParameters:(id)arg2;	// IMP=0x0000000100057e3c
- (void)activityCanceled:(id)arg1;	// IMP=0x0000000100057aec
- (void)activityCompleted:(id)arg1;	// IMP=0x000000010005786c
- (id)activityAnalyticsWithActivity:(id)arg1 didComplete:(_Bool)arg2;	// IMP=0x0000000100056a68
- (id)currentReportingConditions;	// IMP=0x000000010005673c
- (void)activityStarted:(id)arg1;	// IMP=0x00000001000562ec
- (void)handleNoLongerRunningActivity:(id)arg1;	// IMP=0x0000000100055798
- (void)handleRescindedActivity:(id)arg1;	// IMP=0x0000000100055648
- (void)handleRunningActivities:(id)arg1;	// IMP=0x00000001000554e8
- (void)submitActivities:(id)arg1;	// IMP=0x0000000100054894
- (void)startedActivities:(id)arg1;	// IMP=0x0000000100054600
- (void)submitActivity:(id)arg1;	// IMP=0x00000001000532e8
- (void)advanceAppLaunchDateIfNecessaryForActivity:(id)arg1;	// IMP=0x0000000100052dc0
- (_Bool)shouldEvaluateTask:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000100052c48
- (void)handleEligibleActivities:(CDUnknownBlockType)arg1;	// IMP=0x0000000100052c44
- (void)immediatelyBeginWorkForActivity:(id)arg1;	// IMP=0x0000000100052be4
- (void)beginWorkForActivity:(id)arg1;	// IMP=0x0000000100052b08
- (void)moveActivityToRunning:(id)arg1;	// IMP=0x0000000100052980
- (void)clearActivityFromPrerunning:(id)arg1;	// IMP=0x00000001000526bc
- (void)moveActivityToPrerunning:(id)arg1;	// IMP=0x0000000100052580
- (void)prepareActivityForStart:(id)arg1 atTime:(id)arg2;	// IMP=0x0000000100052574
- (_Bool)shouldRunActivityNow:(id)arg1;	// IMP=0x00000001000524e0
- (_Bool)shouldRunActivityNow:(id)arg1 withOtherActivities:(id)arg2;	// IMP=0x0000000100051a18
- (_Bool)activityIsTimewiseEligible:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000100051934
- (_Bool)testModeConstraintsRequireOverridingDecisionWithScores:(id)arg1 ignoredPolicies:(id)arg2 honoredPolicies:(id)arg3;	// IMP=0x0000000100051624
- (_Bool)testModeConstraintsApplyToActivity:(id)arg1;	// IMP=0x0000000100051130
- (_Bool)pausedParametersApplyToActivity:(id)arg1;	// IMP=0x0000000100050978
- (void)reportActivity:(id)arg1 isBlockedWithDecision:(long long)arg2;	// IMP=0x0000000100050238
- (void)updateiCPLTasksBlocked:(unsigned long long)arg1;	// IMP=0x000000010004ff60
- (void)removeConstraint:(unsigned long long)arg1 forSchedulingPriority:(unsigned long long)arg2;	// IMP=0x000000010004fe7c
- (void)addConstraint:(unsigned long long)arg1 forSchedulingPriority:(unsigned long long)arg2;	// IMP=0x000000010004fdb8
- (id)getActivityRunningWithName:(id)arg1;	// IMP=0x000000010004fc1c
- (id)getActivityWithName:(id)arg1;	// IMP=0x000000010004fba0
- (id)getActivityWithUUID:(id)arg1;	// IMP=0x000000010004fb24
- (id)activityMatchingPredicate:(id)arg1;	// IMP=0x000000010004f9b8
- (void)delayedStartActivities:(id)arg1;	// IMP=0x000000010004f9b4
- (void)runActivitiesWithDelayedStart:(id)arg1;	// IMP=0x000000010004f9b0
- (void)activity:(id)arg1 runWithoutHonoringPolicies:(id)arg2;	// IMP=0x000000010004f8a0
- (void)activity:(id)arg1 blockedOnPolicies:(id)arg2;	// IMP=0x000000010004f790
- (void)cancelActivities:(id)arg1;	// IMP=0x000000010004f570
- (void)suspendActivities:(id)arg1;	// IMP=0x000000010004e7f0
- (void)suspendActivity:(id)arg1;	// IMP=0x000000010004e79c
- (void)deferActivities:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e4c4
- (void)warnBGTaskClientsForActivitiesAboutToExpire:(id)arg1;	// IMP=0x000000010004e30c
- (void)suspendPlugin:(id)arg1;	// IMP=0x000000010004e048
- (void)runApplicationLaunchActivities:(id)arg1;	// IMP=0x000000010004c874
- (void)runExtensionLaunchActivities:(id)arg1;	// IMP=0x000000010004c29c
- (id)assertionForActivity:(id)arg1 pid:(int)arg2;	// IMP=0x000000010004be40
- (void)launchApplication:(id)arg1 applicationURL:(id)arg2 additionalOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004b9e8
- (void)runLaunchTasks:(id)arg1 forApplication:(id)arg2 forApplicationURL:(id)arg3 onLaunch:(CDUnknownBlockType)arg4 onCompletion:(CDUnknownBlockType)arg5 onFailure:(CDUnknownBlockType)arg6;	// IMP=0x00000001000495dc
- (void)clearRecentlyLaunchedApps;	// IMP=0x000000010004915c
- (void)runActivitiesAndRemoveUnknown:(id)arg1;	// IMP=0x0000000100048bb8
- (void)runActivities:(id)arg1;	// IMP=0x000000010004850c
- (void)runLocalActivity:(id)arg1;	// IMP=0x00000001000483a0
- (id)clientForActivity:(id)arg1;	// IMP=0x0000000100048184
- (void)allClientsDo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100048020
- (void)removeClient:(id)arg1;	// IMP=0x0000000100047e84
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100047c54
@property(readonly, copy) NSString *description;
- (id)allTimewiseEligibleNetworkTasksAllowingCell:(_Bool)arg1;	// IMP=0x0000000100047978
- (id)allPendingSyncOnBackupTasks;	// IMP=0x0000000100047800
- (id)allPendingBackgroundTasks;	// IMP=0x0000000100047600
- (id)allPendingPushLaunchTasks;	// IMP=0x00000001000473c4
- (id)allPendingRestartTasks;	// IMP=0x00000001000472fc
- (id)allPendingTasks;	// IMP=0x00000001000472a8
@property(readonly, nonatomic) unsigned long long submittedTaskCount;
- (void)start;	// IMP=0x000000010004724c
- (unsigned long long)requestCountForApplication:(id)arg1;	// IMP=0x00000001000471bc
- (void)removeLaunchRequest:(id)arg1;	// IMP=0x0000000100046f80
- (_Bool)addLaunchRequest:(id)arg1;	// IMP=0x00000001000469b0
- (void)delayLaunchesOfType:(id)arg1 forApps:(id)arg2;	// IMP=0x00000001000465b0
- (void)cancelAllBackgroundTasks;	// IMP=0x0000000100046378
- (void)cancelContactTracingTasksForApps:(id)arg1;	// IMP=0x0000000100046110
- (void)cancelBackgroundTasksForApps:(id)arg1;	// IMP=0x0000000100046064
- (void)cancelAppRefreshTasksForApps:(id)arg1;	// IMP=0x0000000100045fd0
- (void)cancelPushLaunchTasksForApps:(id)arg1;	// IMP=0x0000000100045f3c
- (void)cancelLaunchesOfTypes:(id)arg1 forApps:(id)arg2;	// IMP=0x0000000100045c70
- (long long)additionalCapacityForActivity:(id)arg1 inGroupWithName:(id)arg2 shouldTryToSuspend:(_Bool)arg3;	// IMP=0x00000001000458a0
- (long long)currentLoadFromActivities:(id)arg1 inGroupWithName:(id)arg2;	// IMP=0x000000010004550c
- (long long)capacityFromGroupMax:(long long)arg1 forPriority:(unsigned long long)arg2;	// IMP=0x00000001000454d4
- (void)loadTestingDefaults;	// IMP=0x00000001000453e0
- (void)loadStateWhenAvailable;	// IMP=0x0000000100044e04
- (void)loadState;	// IMP=0x0000000100044ae0
- (void)removeDuplicateLaunchTasks:(id)arg1;	// IMP=0x00000001000445f8
- (void)setupDatabaseMaintenance;	// IMP=0x00000001000444f0
- (void)scheduleTimerOnBehalfOf:(id)arg1 between:(double)arg2 and:(double)arg3 waking:(_Bool)arg4;	// IMP=0x000000010004411c
- (void)scheduleTimerForActivity:(id)arg1;	// IMP=0x0000000100043fc8
- (void)setupTimers;	// IMP=0x0000000100043ed0
- (void)solicitActivityResubmission;	// IMP=0x0000000100043e3c
- (void)enforceRateLimiting;	// IMP=0x0000000100043e08
- (id)initAsAnonymous:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x0000000100042f8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

