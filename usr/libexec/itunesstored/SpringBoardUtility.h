//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SpringBoardUtility : NSObject
{
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSDictionary *_enabledRemoteNotificationTypes;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
    long long _observeAllIdentifiersCount;	// 40 = 0x28
    NSCountedSet *_observedApplicationIdentifiers;	// 48 = 0x30
    NSMutableArray *_pendingAlerts;	// 56 = 0x38
    SSXPCConnection *_pluginConnection;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_pluginConnectionTimeout;	// 72 = 0x48
    NSMutableArray *_pluginDeferredBlocks;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_springBoardQueue;	// 88 = 0x58
    NSMutableDictionary *_stateCache;	// 96 = 0x60
}

+ (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015c468
+ (_Bool)_hasEntitlements:(id)arg1;	// IMP=0x000000010015bbc8
+ (void)testPluginAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015ae78
+ (void)testLockscreenAccountSheetWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015ae18
+ (void)testBadgingWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015abc0
+ (void)registerPluginConnectionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015ab54
+ (void)restartApplicationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015aa10
+ (void)observeXPCServer:(id)arg1;	// IMP=0x000000010015a92c
+ (void)dequeueAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015a874
+ (id)sharedInstance;	// IMP=0x00000001001576f8
- (void).cxx_destruct;	// IMP=0x000000010015cd00
- (void)_timeoutPluginConnection;	// IMP=0x000000010015cb44
- (void)_setApplicationStatesWithDictionary:(id)arg1;	// IMP=0x000000010015c8d4
- (void)_setApplicationState:(unsigned int)arg1 forClientID:(id)arg2;	// IMP=0x000000010015c6b4
- (void)_requestPluginConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010015c010
- (void)_registerPluginConnectionWithMessage:(id)arg1;	// IMP=0x000000010015bbdc
- (_Bool)_getProcessID:(int *)arg1 forApplicationIdentifier:(id)arg2;	// IMP=0x000000010015bb38
- (id)_getApplicationInfoForIdentifier:(id)arg1 key:(id)arg2;	// IMP=0x000000010015b910
- (void)_fireDeferredPluginBlocksWithConnection:(id)arg1;	// IMP=0x000000010015b714
- (void)_disconnectPluginConnection:(id)arg1;	// IMP=0x000000010015b4a8
- (id)_applicationStateMonitor;	// IMP=0x000000010015b2cc
- (void)sendPluginMessage:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010015b10c
- (void)sendPluginMessage:(id)arg1;	// IMP=0x000000010015b060
- (void)_dequeueAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010015a4f8
- (void)wakeAppUsingRequest:(id)arg1;	// IMP=0x0000000100159974
- (void)suspendFrontApplication;	// IMP=0x0000000100159970
- (void)setBadgeValue:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000010015967c
- (void)resetEnabledRemoteNotificationTypes;	// IMP=0x0000000100159614
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)arg1;	// IMP=0x00000001001592dc
- (unsigned int)mostElevatedApplicationStateForPID:(int)arg1;	// IMP=0x00000001001591f0
- (_Bool)launchApplicationWithIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100158fac
@property(readonly, getter=isScreenLocked) _Bool screenLocked;
@property(readonly) NSString *frontmostClientIdentifier;
- (void)endGeneratingStateChangeNotificationsForIdentifiers:(id)arg1;	// IMP=0x00000001001589d0
- (void)endGeneratingStateChangeNotifications;	// IMP=0x0000000100158824
- (id)copyBundleInfoValueForKey:(id)arg1 PID:(int)arg2;	// IMP=0x0000000100158688
- (void)beginGeneratingStateChangeNotificationsForIdentifiers:(id)arg1;	// IMP=0x0000000100158344
- (void)beginGeneratingStateChangeNotificationsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100157fc0
- (unsigned int)applicationStateForIdentifier:(id)arg1;	// IMP=0x0000000100157da8
- (void)activateAlertWithDescription:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100157798
- (void)dealloc;	// IMP=0x0000000100157674
- (id)init;	// IMP=0x0000000100157594

@end

