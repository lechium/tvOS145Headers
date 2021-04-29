//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDatabase, CKKSAccountStateTracker, CKKSLaunchSequence, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSReachabilityTracker, CKKSZoneModifier, CKOperationGroup, CKRecordZoneID, NSArray, NSHashTable, NSSet, TPSyncingPolicy;
@protocol CKKSDatabaseProviderProtocol, OctagonStateFlagHandler;

__attribute__((visibility("hidden")))
@interface CKKSOperationDependencies : NSObject
{
    NSSet *_zones;	// 8 = 0x8
    CKRecordZoneID *_zoneID;	// 16 = 0x10
    CKOperationGroup *_ckoperationGroup;	// 24 = 0x18
    CKDatabase *_ckdatabase;	// 32 = 0x20
    CKOperationGroup *_currentOutgoingQueueOperationGroup;	// 40 = 0x28
    CKKSLaunchSequence *_launch;	// 48 = 0x30
    id <OctagonStateFlagHandler> _flagHandler;	// 56 = 0x38
    CKKSAccountStateTracker *_accountStateTracker;	// 64 = 0x40
    CKKSLockStateTracker *_lockStateTracker;	// 72 = 0x48
    CKKSReachabilityTracker *_reachabilityTracker;	// 80 = 0x50
    NSArray *_peerProviders;	// 88 = 0x58
    TPSyncingPolicy *_syncingPolicy;	// 96 = 0x60
    id <CKKSDatabaseProviderProtocol> _databaseProvider;	// 104 = 0x68
    CKKSZoneModifier *_zoneModifier;	// 112 = 0x70
    CKKSNearFutureScheduler *_notifyViewChangedScheduler;	// 120 = 0x78
    CKKSNearFutureScheduler *_savedTLKNotifier;	// 128 = 0x80
    CKKSNearFutureScheduler *_requestPolicyCheck;	// 136 = 0x88
    NSHashTable *_keysetProviderOperations;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000010008d83c
@property(retain) NSHashTable *keysetProviderOperations; // @synthesize keysetProviderOperations=_keysetProviderOperations;
@property(retain) CKKSNearFutureScheduler *requestPolicyCheck; // @synthesize requestPolicyCheck=_requestPolicyCheck;
@property(readonly) CKKSNearFutureScheduler *savedTLKNotifier; // @synthesize savedTLKNotifier=_savedTLKNotifier;
@property(readonly) CKKSNearFutureScheduler *notifyViewChangedScheduler; // @synthesize notifyViewChangedScheduler=_notifyViewChangedScheduler;
@property(retain) CKKSZoneModifier *zoneModifier; // @synthesize zoneModifier=_zoneModifier;
@property(readonly) __weak id <CKKSDatabaseProviderProtocol> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(retain) TPSyncingPolicy *syncingPolicy; // @synthesize syncingPolicy=_syncingPolicy;
@property(retain) NSArray *peerProviders; // @synthesize peerProviders=_peerProviders;
@property(readonly) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(readonly) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(readonly) CKKSAccountStateTracker *accountStateTracker; // @synthesize accountStateTracker=_accountStateTracker;
@property(readonly) id <OctagonStateFlagHandler> flagHandler; // @synthesize flagHandler=_flagHandler;
@property(readonly) CKKSLaunchSequence *launch; // @synthesize launch=_launch;
@property(retain) CKOperationGroup *currentOutgoingQueueOperationGroup; // @synthesize currentOutgoingQueueOperationGroup=_currentOutgoingQueueOperationGroup;
@property(retain) CKDatabase *ckdatabase; // @synthesize ckdatabase=_ckdatabase;
@property(retain) CKOperationGroup *ckoperationGroup; // @synthesize ckoperationGroup=_ckoperationGroup;
@property(readonly) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(readonly) NSSet *zones; // @synthesize zones=_zones;
- (_Bool)intransactionCKWriteFailed:(id)arg1 attemptedRecordsChanged:(id)arg2;	// IMP=0x000000010008ca0c
- (_Bool)intransactionCKRecordDeleted:(id)arg1 recordType:(id)arg2 resync:(_Bool)arg3;	// IMP=0x000000010008c5a0
- (_Bool)intransactionCKRecordChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x000000010008be80
- (void)provideKeySet:(id)arg1;	// IMP=0x000000010008bbfc
- (id)currentTrustStates;	// IMP=0x000000010008b9b4
- (id)initWithViewState:(id)arg1 zoneModifier:(id)arg2 ckdatabase:(id)arg3 ckoperationGroup:(id)arg4 flagHandler:(id)arg5 launchSequence:(id)arg6 accountStateTracker:(id)arg7 lockStateTracker:(id)arg8 reachabilityTracker:(id)arg9 peerProviders:(id)arg10 databaseProvider:(id)arg11 notifyViewChangedScheduler:(id)arg12 savedTLKNotifier:(id)arg13;	// IMP=0x000000010008b6c0

@end

