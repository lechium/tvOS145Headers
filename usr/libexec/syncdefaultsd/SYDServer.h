//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SYDServerManagementMessages-Protocol.h"
#import "SYDServerMessages-Protocol.h"

@class NSLock, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, SYDDeviceStateManager, SYDPerformBlock, SYDPersistenceManager, SYDPushManager, SYDWriteTracker;
@protocol OS_dispatch_source, OS_os_transaction, OS_xpc_object;

@interface SYDServer : NSObject <SYDServerMessages, SYDServerManagementMessages>
{
    _Bool _exitsBecauseOfIdle;	// 8 = 0x8
    _Bool _someSchedulerIsSynchronizing;	// 9 = 0x9
    _Bool _needsSaving;	// 10 = 0xa
    _Bool _shuttingDown;	// 11 = 0xb
    _Bool _tracksUsage;	// 12 = 0xc
    _Bool _tracksUsageInited;	// 13 = 0xd
    int _isHandlingMemoryWarning;	// 16 = 0x10
    SYDPersistenceManager *_persistenceManager;	// 24 = 0x18
    NSMutableDictionary *_appByBundleIdentifier;	// 32 = 0x20
    NSMutableDictionary *_appByAdditionalStoreByBundleIdentifier;	// 40 = 0x28
    NSMutableDictionary *_appsByStoreIdentifier;	// 48 = 0x30
    NSMutableSet *_peers;	// 56 = 0x38
    NSMutableDictionary *_schedulersByIdentifier;	// 64 = 0x40
    SYDWriteTracker *_writeTracker;	// 72 = 0x48
    SYDPushManager *_pushManager;	// 80 = 0x50
    SYDDeviceStateManager *_deviceStateManager;	// 88 = 0x58
    double _startupTime;	// 96 = 0x60
    NSObject<OS_xpc_object> *_listener;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_mwSource;	// 112 = 0x70
    NSLock *_cloudLock;	// 120 = 0x78
    SYDPerformBlock *_loggedWhoLaunchedUsBlock;	// 128 = 0x80
    NSMutableOrderedSet *_queuedSchedulerIdentifiers;	// 136 = 0x88
    NSObject<OS_os_transaction> *_mainTransaction;	// 144 = 0x90
    SYDPerformBlock *_postExternalChangeNotificationRequest;	// 152 = 0x98
    SYDPerformBlock *_delayStoreIdentifiersRefresh;	// 160 = 0xa0
    SYDPerformBlock *_storeAppsOnDiskRequest;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000010003769c
@property int isHandlingMemoryWarning; // @synthesize isHandlingMemoryWarning=_isHandlingMemoryWarning;
@property(retain, nonatomic) SYDPerformBlock *storeAppsOnDiskRequest; // @synthesize storeAppsOnDiskRequest=_storeAppsOnDiskRequest;
@property(retain, nonatomic) SYDPerformBlock *delayStoreIdentifiersRefresh; // @synthesize delayStoreIdentifiersRefresh=_delayStoreIdentifiersRefresh;
@property(retain, nonatomic) SYDPerformBlock *postExternalChangeNotificationRequest; // @synthesize postExternalChangeNotificationRequest=_postExternalChangeNotificationRequest;
@property(retain, nonatomic) NSObject<OS_os_transaction> *mainTransaction; // @synthesize mainTransaction=_mainTransaction;
@property(retain, nonatomic) NSMutableOrderedSet *queuedSchedulerIdentifiers; // @synthesize queuedSchedulerIdentifiers=_queuedSchedulerIdentifiers;
@property(nonatomic) _Bool tracksUsageInited; // @synthesize tracksUsageInited=_tracksUsageInited;
@property(nonatomic) _Bool tracksUsage; // @synthesize tracksUsage=_tracksUsage;
@property(retain, nonatomic) SYDPerformBlock *loggedWhoLaunchedUsBlock; // @synthesize loggedWhoLaunchedUsBlock=_loggedWhoLaunchedUsBlock;
@property(nonatomic) _Bool shuttingDown; // @synthesize shuttingDown=_shuttingDown;
@property(nonatomic) _Bool needsSaving; // @synthesize needsSaving=_needsSaving;
@property(retain, nonatomic) NSLock *cloudLock; // @synthesize cloudLock=_cloudLock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *mwSource; // @synthesize mwSource=_mwSource;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(nonatomic) double startupTime; // @synthesize startupTime=_startupTime;
@property(retain, nonatomic) SYDDeviceStateManager *deviceStateManager; // @synthesize deviceStateManager=_deviceStateManager;
@property(retain, nonatomic) SYDPushManager *pushManager; // @synthesize pushManager=_pushManager;
@property(retain, nonatomic) SYDWriteTracker *writeTracker; // @synthesize writeTracker=_writeTracker;
@property(retain, nonatomic) NSMutableDictionary *schedulersByIdentifier; // @synthesize schedulersByIdentifier=_schedulersByIdentifier;
@property(retain, nonatomic) NSMutableSet *peers; // @synthesize peers=_peers;
@property(retain, nonatomic) NSMutableDictionary *appsByStoreIdentifier; // @synthesize appsByStoreIdentifier=_appsByStoreIdentifier;
@property(retain, nonatomic) NSMutableDictionary *appByAdditionalStoreByBundleIdentifier; // @synthesize appByAdditionalStoreByBundleIdentifier=_appByAdditionalStoreByBundleIdentifier;
@property(retain, nonatomic) NSMutableDictionary *appByBundleIdentifier; // @synthesize appByBundleIdentifier=_appByBundleIdentifier;
@property(retain, nonatomic) SYDPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property(nonatomic) _Bool someSchedulerIsSynchronizing; // @synthesize someSchedulerIsSynchronizing=_someSchedulerIsSynchronizing;
@property(nonatomic) _Bool exitsBecauseOfIdle; // @synthesize exitsBecauseOfIdle=_exitsBecauseOfIdle;
- (_Bool)isCloudSyncAllowedForApp:(id)arg1;	// IMP=0x0000000100036f9c
- (_Bool)_isCloudSyncAllowedForApp:(id)arg1 peer:(id)arg2;	// IMP=0x0000000100036dd8
- (void)_didReceiveMemoryWarning;	// IMP=0x0000000100036bd8
- (void)_createMemoryWarningSource;	// IMP=0x0000000100036a48
- (void)peerDisconnected:(id)arg1;	// IMP=0x0000000100036910
- (void)peerConnected:(id)arg1;	// IMP=0x00000001000367f0
- (void)handleIncomingMessage:(id)arg1;	// IMP=0x0000000100036498
- (void)_handleNewConnection:(id)arg1;	// IMP=0x00000001000363e8
- (void)_createListener;	// IMP=0x00000001000361ec
- (void)_applicationDidChange:(id)arg1;	// IMP=0x0000000100036168
- (void)_postExternalChangeNotification:(id)arg1;	// IMP=0x00000001000360f4
- (void)_cancelRequestForPostExternalChangeNotification;	// IMP=0x00000001000360b0
- (void)_requestPostExternalChangeNotification;	// IMP=0x0000000100035f34
- (void)setPersistentStateNeedsSaving;	// IMP=0x0000000100035e7c
- (void)_requestStoreAppsOnDiskImmediate:(_Bool)arg1;	// IMP=0x0000000100035c80
- (void)shutdownWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100035234
- (void)noteSchedulerIsIdle:(id)arg1;	// IMP=0x0000000100034fb8
- (void)noteSchedulerCancelWillIdle:(id)arg1;	// IMP=0x0000000100034f48
- (void)noteSchedulerWillIdle:(id)arg1;	// IMP=0x0000000100034dd0
- (void)printDebugDescriptionWithMessage:(id)arg1;	// IMP=0x0000000100034bd0
- (void)allApplicationInfoWithMessage:(id)arg1;	// IMP=0x0000000100034aa0
- (void)migrateForceWithMessage:(id)arg1;	// IMP=0x0000000100034a90
- (void)migrateWithMessage:(id)arg1;	// IMP=0x0000000100034a80
- (void)migrateWithMessage:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000010003469c
- (id)migrateApplication:(id)arg1 withBundleIdentifier:(id)arg2 force:(_Bool)arg3;	// IMP=0x000000010003413c
- (_Bool)migrateSyncedPreferencesFile:(id)arg1 additionalStoreName:(id)arg2 systemBase:(id)arg3 containerBase:(id)arg4 force:(_Bool)arg5;	// IMP=0x0000000100033b18
- (void)deviceUnlockedSinceBootChange;	// IMP=0x00000001000339f8
- (void)passwordChangeWithMessage:(id)arg1;	// IMP=0x00000001000338d8
- (void)accountChangeWithMessage:(id)arg1;	// IMP=0x00000001000337b8
- (void)pingWithMessage:(id)arg1;	// IMP=0x00000001000337a0
- (void)getConfigurationWithMessage:(id)arg1;	// IMP=0x0000000100033710
- (void)discardJournalEntriesWithMessage:(id)arg1;	// IMP=0x000000010003353c
- (void)trackSynchronizeRemoteWithMessage:(id)arg1;	// IMP=0x0000000100032f9c
- (void)synchronizeRemoteWithMessage:(id)arg1;	// IMP=0x0000000100032d38
- (void)helpWithMessage:(id)arg1;	// IMP=0x0000000100032b5c
- (void)shutdownWithMessage:(id)arg1;	// IMP=0x0000000100032aac
- (void)simulatememorywarningWithMessage:(id)arg1;	// IMP=0x0000000100032a4c
- (void)resetwritetrackingWithMessage:(id)arg1;	// IMP=0x00000001000329bc
- (void)disablewritetrackingWithMessage:(id)arg1;	// IMP=0x000000010003291c
- (void)enablewritetrackingWithMessage:(id)arg1;	// IMP=0x000000010003289c
- (void)resetusageWithMessage:(id)arg1;	// IMP=0x0000000100032820
- (void)usageWithMessage:(id)arg1;	// IMP=0x00000001000326cc
- (void)enableusagetrackingWithMessage:(id)arg1;	// IMP=0x000000010003264c
- (void)disableusagetrackingWithMessage:(id)arg1;	// IMP=0x00000001000325cc
- (void)enablethrottlingWithMessage:(id)arg1;	// IMP=0x000000010003254c
- (void)disablethrottlingWithMessage:(id)arg1;	// IMP=0x00000001000324cc
- (void)disablefulljournalWithMessage:(id)arg1;	// IMP=0x000000010003244c
- (void)enablefulljournalWithMessage:(id)arg1;	// IMP=0x00000001000323cc
- (void)disablesyncindicatorWithMessage:(id)arg1;	// IMP=0x00000001000323b4
- (void)enablesyncindicatorWithMessage:(id)arg1;	// IMP=0x000000010003239c
- (void)serverlimitsWithMessage:(id)arg1;	// IMP=0x0000000100032244
- (void)setDefaultsConfigWithMessage:(id)arg1;	// IMP=0x0000000100032078
- (void)lastrequestWithMessage:(id)arg1;	// IMP=0x0000000100031ecc
- (void)statusWithMessage:(id)arg1;	// IMP=0x0000000100031bbc
- (void)refetchconfigurationWithMessage:(id)arg1;	// IMP=0x0000000100031b40
- (void)resetupdatesWithMessage:(id)arg1;	// IMP=0x0000000100031ac4
- (void)resetappsWithMessage:(id)arg1;	// IMP=0x0000000100031a48
- (_Bool)_enumerateSchedulersFromMessage:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100031804
- (void)diagnoseappWithMessage:(id)arg1;	// IMP=0x00000001000313bc
- (void)unregisterWithMessage:(id)arg1;	// IMP=0x0000000100031024
- (void)registerWithMessage:(id)arg1;	// IMP=0x0000000100030bcc
- (id)registeredApplicationsForStoreIdentifier:(id)arg1;	// IMP=0x0000000100030b98
- (id)registeredApplications;	// IMP=0x00000001000309a0
- (id)registeredApplicationsForScheduler:(id)arg1;	// IMP=0x0000000100030858
- (void)synchronizeWithMessage:(id)arg1;	// IMP=0x00000001000304d0
- (void)endDebuggingApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x00000001000304ac
- (void)beginDebuggingApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100030488
- (void)enumerateAppsWithBundleIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000302a4
- (void)enumerateAppsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ff78
- (id)applicationForBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x000000010002fc94
- (void)performSyncForNextQueuedScheduler;	// IMP=0x000000010002fb0c
- (void)queueSyncForSchedulerIdentifier:(id)arg1;	// IMP=0x000000010002fabc
- (void)_storeAppsOnDisk:(id)arg1;	// IMP=0x000000010002fa64
- (void)_storeAppsOnDiskHelper:(id)arg1;	// IMP=0x000000010002f450
- (void)_loadAppsFromDisk;	// IMP=0x000000010002e3f4
- (void)_installedAppsDidChange;	// IMP=0x000000010002e288
- (void)_refreshStoreIdentifiers:(id)arg1;	// IMP=0x000000010002e230
- (void)_refreshStoreIdentifiersHelper:(id)arg1;	// IMP=0x000000010002ce14
- (void)_appendApp:(id)arg1 new:(_Bool)arg2;	// IMP=0x000000010002c804
- (_Bool)isGlobalIdentifier:(id)arg1;	// IMP=0x000000010002c75c
- (id)schedulerWithIdentifier:(id)arg1;	// IMP=0x000000010002c74c
- (id)defaultScheduler;	// IMP=0x000000010002c6e4
- (void)noteScheduler:(id)arg1 receivedBackgroundJobNotification:(id)arg2;	// IMP=0x000000010002c628
- (void)noteScheduler:(id)arg1 receivedNotificationForStores:(id)arg2;	// IMP=0x000000010002c52c
- (void)_logWhoLaunchedUsWithMessage:(id)arg1 administrativeMessage:(_Bool)arg2;	// IMP=0x000000010002c2a0
- (void)_logWhoLaunchedUs:(id)arg1 toScheduler:(id)arg2;	// IMP=0x000000010002c208
- (void)_noMessageReceived;	// IMP=0x000000010002c1b4
- (void)dealloc;	// IMP=0x000000010002c13c
- (id)init;	// IMP=0x000000010002be74

@end
