//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface NDSpringBoard : NSObject
{
    BKSApplicationStateMonitor *_monitor;	// 8 = 0x8
    NSMutableDictionary *_assertions;	// 16 = 0x10
    NSMutableDictionary *_observers;	// 24 = 0x18
    NSMutableDictionary *_appStates;	// 32 = 0x20
    NSMutableDictionary *_observedBackgroundSettings;	// 40 = 0x28
    _Bool _backgroundUpdatesAllowed;	// 48 = 0x30
    NSMutableSet *_monitoredBundleIDs;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    struct os_unfair_lock_s _assertion_lock;	// 72 = 0x48
}

+ (id)sharedSpringBoard;	// IMP=0x000000010004d004
- (void).cxx_destruct;	// IMP=0x000000010004b580
- (_Bool)identifierIsForSpringBoardApplication:(id)arg1;	// IMP=0x000000010004b4e4
- (_Bool)wakeUpApp:(id)arg1 forSession:(id)arg2 withSessionUUID:(id)arg3;	// IMP=0x000000010004b03c
- (_Bool)takeAssertionForBundleID:(id)arg1 sessionID:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x000000010004aae8
- (id)assertionNameForSessionUUID:(id)arg1;	// IMP=0x000000010004aaa8
- (void)removePendingLaunchTasksForBundleID:(id)arg1 sessionID:(id)arg2 cancel:(_Bool)arg3;	// IMP=0x000000010004aaa4
- (void)releaseAssertionForBundleID:(id)arg1 sessionID:(id)arg2;	// IMP=0x000000010004a9e8
- (void)_onqueue_releaseAssertionForBundleID:(id)arg1 sessionID:(id)arg2;	// IMP=0x000000010004a7fc
- (_Bool)applicationBackgroundUpdatesEnabled:(id)arg1;	// IMP=0x000000010004a750
- (_Bool)application:(id)arg1 isHandlingBackgroundSessionWithIdentifier:(id)arg2 withSessionUUID:(id)arg3;	// IMP=0x000000010004a51c
- (_Bool)applicationHasBackgroundTaskCompletion:(id)arg1;	// IMP=0x000000010004a250
- (_Bool)application:(id)arg1 hasAssertionWithName:(id)arg2;	// IMP=0x000000010004a038
- (_Bool)isValidAssertion:(id)arg1 withName:(id)arg2;	// IMP=0x0000000100049eb8
- (_Bool)applicationIsBeingDebugged:(id)arg1;	// IMP=0x0000000100049ea8
- (_Bool)applicationIsSuspended:(id)arg1;	// IMP=0x0000000100049e84
- (_Bool)applicationIsAwake:(id)arg1;	// IMP=0x0000000100049e54
- (_Bool)applicationIsForeground:(id)arg1;	// IMP=0x0000000100049e30
- (unsigned int)applicationStateForBundleID:(id)arg1;	// IMP=0x0000000100049d7c
- (void)stopMonitoringBundleID:(id)arg1;	// IMP=0x0000000100049cf8
- (void)startMonitoringBundleID:(id)arg1;	// IMP=0x0000000100049c74
- (void)removeObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0000000100049bb0
- (void)addObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0000000100049aec
- (void)handleApplicationStateChange:(id)arg1;	// IMP=0x0000000100049a68
- (void)handleBackgroundSettingsChange;	// IMP=0x0000000100049a10
- (id)getBackgroundSettingsAppList;	// IMP=0x0000000100049944
- (void)setupMonitor;	// IMP=0x00000001000498b8
- (void)dealloc;	// IMP=0x00000001000497f0
- (id)init;	// IMP=0x00000001000495a8

@end

