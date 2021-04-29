//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface CloudBackgroundTaskManager : NSObject
{
    NSMapTable *_jobNameToSelectorMap;	// 8 = 0x8
}

+ (id)sharedTaskManager;	// IMP=0x00000001000d0d38
- (void).cxx_destruct;	// IMP=0x00000001000d0210
- (_Bool)_cellularDataAllowedForJaliscoMedia;	// IMP=0x00000001000d0174
- (_Bool)_cellularDataAllowedForJaliscoApps;	// IMP=0x00000001000d0120
- (id)_nextJaliscoAppsPollTimeKey;	// IMP=0x00000001000d0114
- (id)_nextJaliscoMediaPollTimeKey;	// IMP=0x00000001000d0108
- (id)_nextEvaluateSyncRulesThrottleOperationTimeKey;	// IMP=0x00000001000d00fc
- (id)_nextEvaluateSyncRulesOperationTimeKey;	// IMP=0x00000001000d00f0
- (double)_throttledDeferredEvaluateKeepLocalTime;	// IMP=0x00000001000d002c
- (id)_homeSharingPrefsNumberForKey:(id)arg1;	// IMP=0x00000001000d000c
- (void)_setHomeSharingPrefsNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000cffd8
- (id)_baseBtaJobForPeriodicPollCellularDataAllowed:(_Bool)arg1;	// IMP=0x00000001000cff60
- (id)_baseBtaJobForDeferredPush;	// IMP=0x00000001000cff04
- (void)_handleJobNamed:(const char *)arg1 satisfied:(_Bool)arg2 invalid:(_Bool)arg3;	// IMP=0x00000001000cfdc4
- (void)_unscheduleJobNamed:(const char *)arg1;	// IMP=0x00000001000cfd04
- (void)_scheduleJobNamed:(const char *)arg1 withStartTime:(id)arg2 baseBtaJob:(id)arg3;	// IMP=0x00000001000cfb5c
- (void)_initializeBTAHandlers;	// IMP=0x00000001000cfa60
- (void)_handleJaliscoMediaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00000001000cf834
- (void)_handleJaliscoMediaPeriodicPollJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00000001000cf5b8
- (void)_handleSagaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00000001000cf384
- (void)unscheduleJaliscoMediaDeferredPushUpate;	// IMP=0x00000001000cf370
- (void)scheduleJaliscoMediaDeferredPushUpate;	// IMP=0x00000001000cf2ac
- (void)unscheduleJaliscoMediaPeriodicPoll;	// IMP=0x00000001000cf298
- (void)scheduleJaliscoMediaPeriodicPoll;	// IMP=0x00000001000cf1d8
- (void)unscheduleSagaDeferredPushUpate;	// IMP=0x00000001000cf1c4
- (void)scheduleSagaDeferredPushUpate;	// IMP=0x00000001000cf100
- (id)init;	// IMP=0x00000001000cf0a8

@end

