//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCListener.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "_DKDaemonInterface-Protocol.h"

@class NSString, _DKDataProtectionStateMonitor, _DKKnowledgeStorage, _DKPrivacyPolicyEnforcer, _DKRateLimitPolicyEnforcer;
@protocol _DKSyncCoordinator;

@interface CDKnowledgeDaemon : NSXPCListener <NSXPCListenerDelegate, _DKDaemonInterface>
{
    _DKDataProtectionStateMonitor *_dataProtection;	// 8 = 0x8
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;	// 16 = 0x10
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;	// 24 = 0x18
    _DKKnowledgeStorage *_storage;	// 32 = 0x20
    id <_DKSyncCoordinator> _syncCoordinator;	// 40 = 0x28
}

+ (id)defaultUserDaemon;	// IMP=0x000000010001fd04
+ (id)defaultDaemon;	// IMP=0x000000010001fa14
- (void).cxx_destruct;	// IMP=0x0000000100022520
@property(retain, nonatomic) id <_DKSyncCoordinator> syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(readonly, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
- (void)deviceUUIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000223d8
- (void)sourceDeviceIdentityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000222c4
- (void)deleteRemoteState:(CDUnknownBlockType)arg1;	// IMP=0x000000010002214c
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021fa8
- (void)synchronizeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021e20
- (void)registerARPHomeControlNotificationTask;	// IMP=0x0000000100021e1c
- (void)registerCloudFamilyPredictionTask;	// IMP=0x0000000100021e18
- (void)registerMailIntelligencePETDataCollectionTask;	// IMP=0x0000000100021e14
- (void)macSleepModelingDataCollectionTasks;	// IMP=0x0000000100021e10
- (void)registerAirPlayTasks;	// IMP=0x0000000100021e0c
- (void)registerHomeControlDataCollectionTask;	// IMP=0x0000000100021e08
- (void)registerCDInteractionDataCollectionTask;	// IMP=0x0000000100021e04
- (void)registerDataCollectionTasks;	// IMP=0x0000000100021d84
- (void)confirmDatabaseConnectionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021c68
- (id)confirmDatabaseConnectionError;	// IMP=0x0000000100021b98
- (void)reportEventStatistics;	// IMP=0x0000000100021894
- (void)logSizeOfStorage:(id)arg1;	// IMP=0x00000001000213e0
- (void)maintainPrivacyWithActivity:(id)arg1;	// IMP=0x0000000100021114
- (void)executeQuery:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020f9c
- (void)deleteAllEventsMatchingPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020e8c
- (void)deleteAllEventsInEventStreamNamed:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020e00
- (void)deleteObjects:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020c04
- (void)saveObjects:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000209bc
- (id)classCError;	// IMP=0x00000001000208ec
- (void)handleError:(id)arg1;	// IMP=0x0000000100020818
- (_Bool)isClassCLocked;	// IMP=0x00000001000207e0
- (id)initWithMachServiceName:(id)arg1 storePath:(id)arg2;	// IMP=0x00000001000202d0
- (id)initWithMachServiceName:(id)arg1;	// IMP=0x0000000100020248
- (id)init;	// IMP=0x0000000100020230
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010001ffc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

