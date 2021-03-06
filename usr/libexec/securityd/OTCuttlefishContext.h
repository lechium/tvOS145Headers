//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKKSCloudKitAccountStateListener-Protocol.h"
#import "CKKSPeerUpdateListener-Protocol.h"
#import "OTAuthKitAdapterNotifier-Protocol.h"
#import "OTCuttlefishAccountStateHolderNotifier-Protocol.h"
#import "OTDeviceInformationNameUpdateListener-Protocol.h"
#import "OctagonCuttlefishUpdateReceiver-Protocol.h"
#import "OctagonStateMachineEngine-Protocol.h"

@class CKAccountInfo, CKKSCondition, CKKSLaunchSequence, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSViewManager, CuttlefishXPCWrapper, NSData, NSOperationQueue, NSString, OTCuttlefishAccountStateHolder, OTFollowup, OctagonAPSReceiver, OctagonStateMachine, TPPolicyVersion;
@protocol CKKSCloudKitAccountStateTrackingProvider><CKKSOctagonStatusMemoizer, CKKSPeerProvider, OS_dispatch_queue, OTAuthKitAdapter, OTDeviceInformationAdapter, OTSOSAdapter;

__attribute__((visibility("hidden")))
@interface OTCuttlefishContext : NSObject <OTCuttlefishAccountStateHolderNotifier, OctagonCuttlefishUpdateReceiver, OTAuthKitAdapterNotifier, OctagonStateMachineEngine, CKKSCloudKitAccountStateListener, CKKSPeerUpdateListener, OTDeviceInformationNameUpdateListener>
{
    NSString *_bottleID;	// 8 = 0x8
    NSString *_bottleSalt;	// 16 = 0x10
    NSData *_entropy;	// 24 = 0x18
    NSString *_recoveryKey;	// 32 = 0x20
    long long _resetReason;	// 40 = 0x28
    _Bool _skipRateLimitingCheck;	// 48 = 0x30
    _Bool _initialBecomeUntrustedPosted;	// 49 = 0x31
    CuttlefishXPCWrapper *_cuttlefishXPCWrapper;	// 56 = 0x38
    OTFollowup *_followupHandler;	// 64 = 0x40
    NSString *_containerName;	// 72 = 0x48
    NSString *_contextID;	// 80 = 0x50
    NSString *_altDSID;	// 88 = 0x58
    NSString *_pairingUUID;	// 96 = 0x60
    CKKSLockStateTracker *_lockStateTracker;	// 104 = 0x68
    OTCuttlefishAccountStateHolder *_accountMetadataStore;	// 112 = 0x70
    OctagonStateMachine *_stateMachine;	// 120 = 0x78
    CKKSNearFutureScheduler *_apsRateLimiter;	// 128 = 0x80
    CKKSNearFutureScheduler *_sosConsistencyRateLimiter;	// 136 = 0x88
    CKKSViewManager *_viewManager;	// 144 = 0x90
    id <OTDeviceInformationAdapter> _deviceAdapter;	// 152 = 0x98
    id <OTAuthKitAdapter> _authKitAdapter;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_queue;	// 168 = 0xa8
    TPPolicyVersion *_policyOverride;	// 176 = 0xb0
    CKKSLaunchSequence *_launchSequence;	// 184 = 0xb8
    NSOperationQueue *_operationQueue;	// 192 = 0xc0
    id <CKKSCloudKitAccountStateTrackingProvider><CKKSOctagonStatusMemoizer> _accountStateTracker;	// 200 = 0xc8
    CKAccountInfo *_cloudKitAccountInfo;	// 208 = 0xd0
    CKKSCondition *_cloudKitAccountStateKnown;	// 216 = 0xd8
    CKKSNearFutureScheduler *_suggestTLKUploadNotifier;	// 224 = 0xe0
    CKKSNearFutureScheduler *_requestPolicyCheckNotifier;	// 232 = 0xe8
    CKKSNearFutureScheduler *_upgradeUserControllableViewsRateLimiter;	// 240 = 0xf0
    OctagonAPSReceiver *_apsReceiver;	// 248 = 0xf8
    id <OTSOSAdapter> _sosAdapter;	// 256 = 0x100
    id <CKKSPeerProvider> _octagonAdapter;	// 264 = 0x108
    Class _escrowRequestClass;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00000001000c6878
@property(nonatomic) _Bool initialBecomeUntrustedPosted; // @synthesize initialBecomeUntrustedPosted=_initialBecomeUntrustedPosted;
@property(readonly) Class escrowRequestClass; // @synthesize escrowRequestClass=_escrowRequestClass;
@property(retain) id <CKKSPeerProvider> octagonAdapter; // @synthesize octagonAdapter=_octagonAdapter;
@property(retain) id <OTSOSAdapter> sosAdapter; // @synthesize sosAdapter=_sosAdapter;
@property(retain) OctagonAPSReceiver *apsReceiver; // @synthesize apsReceiver=_apsReceiver;
@property(retain) CKKSNearFutureScheduler *upgradeUserControllableViewsRateLimiter; // @synthesize upgradeUserControllableViewsRateLimiter=_upgradeUserControllableViewsRateLimiter;
@property(retain) CKKSNearFutureScheduler *requestPolicyCheckNotifier; // @synthesize requestPolicyCheckNotifier=_requestPolicyCheckNotifier;
@property(retain) CKKSNearFutureScheduler *suggestTLKUploadNotifier; // @synthesize suggestTLKUploadNotifier=_suggestTLKUploadNotifier;
@property(retain) CKKSCondition *cloudKitAccountStateKnown; // @synthesize cloudKitAccountStateKnown=_cloudKitAccountStateKnown;
@property(retain) CKAccountInfo *cloudKitAccountInfo; // @synthesize cloudKitAccountInfo=_cloudKitAccountInfo;
@property(readonly) id <CKKSCloudKitAccountStateTrackingProvider><CKKSOctagonStatusMemoizer> accountStateTracker; // @synthesize accountStateTracker=_accountStateTracker;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) CKKSLaunchSequence *launchSequence; // @synthesize launchSequence=_launchSequence;
@property(retain) TPPolicyVersion *policyOverride; // @synthesize policyOverride=_policyOverride;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) id <OTAuthKitAdapter> authKitAdapter; // @synthesize authKitAdapter=_authKitAdapter;
@property(readonly) id <OTDeviceInformationAdapter> deviceAdapter; // @synthesize deviceAdapter=_deviceAdapter;
@property(retain) CKKSViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) CKKSNearFutureScheduler *sosConsistencyRateLimiter; // @synthesize sosConsistencyRateLimiter=_sosConsistencyRateLimiter;
@property(retain, nonatomic) CKKSNearFutureScheduler *apsRateLimiter; // @synthesize apsRateLimiter=_apsRateLimiter;
@property(readonly) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) OTCuttlefishAccountStateHolder *accountMetadataStore; // @synthesize accountMetadataStore=_accountMetadataStore;
@property(readonly, nonatomic) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain, nonatomic) NSString *pairingUUID; // @synthesize pairingUUID=_pairingUUID;
@property(readonly) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly) NSString *contextID; // @synthesize contextID=_contextID;
@property(readonly) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain) OTFollowup *followupHandler; // @synthesize followupHandler=_followupHandler;
@property(readonly) CuttlefishXPCWrapper *cuttlefishXPCWrapper; // @synthesize cuttlefishXPCWrapper=_cuttlefishXPCWrapper;
- (void)rpcResetAccountCDPContents:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c64d8
- (id)egoPeerStatus:(id *)arg1;	// IMP=0x00000001000c6330
- (_Bool)machineIDOnMemoizedList:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c6158
- (void)waitForOctagonUpgrade:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c59b4
- (void)checkOctagonHealth:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c5514
- (_Bool)postConfirmPasscodeCFU:(id *)arg1;	// IMP=0x00000001000c53f8
- (_Bool)leaveTrust:(id *)arg1;	// IMP=0x00000001000c5380
- (_Bool)shouldPostConfirmPasscodeCFU:(id *)arg1;	// IMP=0x00000001000c5124
- (_Bool)postRepairCFU:(id *)arg1;	// IMP=0x00000001000c4fa0
- (void)rpcSetUserControllableViewsSyncingStatus:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c4ec8
- (void)rpcFetchUserControllableViewsSyncingStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c4a50
- (void)rpcRefetchCKKSPolicy:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c47f8
- (void)rpcValidatePeers:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c44bc
- (void)fetchEscrowContents:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c43a4
- (void)rpcInvalidateEscrowCache:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c41f8
- (void)rpcFetchAllViableEscrowRecords:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c4038
- (void)rpcFetchAllViableBottles:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c3e84
- (void)rpcTrustStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c38a8
- (void)rpcTrustStatusCachedStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c371c
- (void)rpcSetRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c34fc
- (void)rpcFetchDeviceNamesByPeerID:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c334c
- (void)rpcFetchEgoPeerID:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c31dc
- (void)rpcStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c26fc
- (id)sosSelvesStatus;	// IMP=0x00000001000c2374
- (id)sosTrustedPeersStatus;	// IMP=0x00000001000c2124
- (id)ckksPeerStatus:(id)arg1;	// IMP=0x00000001000c1f8c
- (void)rpcJoin:(id)arg1 vouchSig:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c1c50
- (id)joinStatePathDictionary;	// IMP=0x00000001000c1944
- (void)joinWithRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c1698
- (void)joinWithBottle:(id)arg1 entropy:(id)arg2 bottleSalt:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000c1394
- (void)rpcPrepareIdentityAsApplicantWithConfiguration:(id)arg1 epoch:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c0eb4
- (id)errorNoiCloudAccount;	// IMP=0x00000001000c0e8c
- (long long)checkForCKAccount:(id)arg1;	// IMP=0x00000001000c0ab8
- (void)trustedPeerSetChanged:(id)arg1;	// IMP=0x00000001000c078c
- (void)selfPeerChanged:(id)arg1;	// IMP=0x00000001000c0788
- (void)deviceNameUpdated;	// IMP=0x00000001000c0648
- (void)requestTrustedDeviceListRefresh;	// IMP=0x00000001000c0600
- (id)currentMemoizedLastHealthCheck;	// IMP=0x00000001000c0488
- (int)currentMemoizedAccountState;	// IMP=0x00000001000c0354
- (int)currentMemoizedTrustState;	// IMP=0x00000001000c0220
- (_Bool)waitForReady:(long long)arg1;	// IMP=0x00000001000c0190
- (void)notifyContainerChangeWithUserInfo:(id)arg1;	// IMP=0x00000001000bfd54
- (void)notifyContainerChange:(id)arg1;	// IMP=0x00000001000bfd04
- (void)handleTTRRequest:(id)arg1;	// IMP=0x00000001000bf850
- (void)handleHealthRequest;	// IMP=0x00000001000bf6bc
- (id)extractStringKey:(id)arg1 fromDictionary:(id)arg2;	// IMP=0x00000001000bf64c
- (id)becomeReadyOperation;	// IMP=0x00000001000bf564
- (id)becomeUntrustedOperation:(id)arg1;	// IMP=0x00000001000bf460
- (void)checkTrustStatusAndPostRepairCFUIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bf34c
- (id)repairAccountIfTrustedByTPHWithIntendedState:(id)arg1;	// IMP=0x00000001000bf1c4
- (id)cloudKitAccountNewlyAvailableOperation:(id)arg1;	// IMP=0x00000001000bf0a4
- (id)postRepairCFUAndBecomeUntrusted;	// IMP=0x00000001000bf020
- (id)cuttlefishTrustEvaluation;	// IMP=0x00000001000bee98
- (id)evaluateTPHOctagonTrust;	// IMP=0x00000001000bee14
- (id)evaluateSecdOctagonTrust;	// IMP=0x00000001000bed90
- (id)initializingOperation;	// IMP=0x00000001000beca8
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x00000001000bbe44
- (void)handlePairingRestart:(id)arg1;	// IMP=0x00000001000bbaf0
- (void)startOctagonStateMachine;	// IMP=0x00000001000bbab0
- (id)operationDependencies;	// IMP=0x00000001000bb86c
- (id)prepareInformation;	// IMP=0x00000001000bb594
- (void)rpcRemoveFriendsInClique:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bb464
- (void)rpcLeaveClique:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bb174
- (void)rpcResetAndEstablish:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000baf70
- (void)rpcEstablish:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bae70
- (id)establishStatePathDictionary;	// IMP=0x00000001000bab28
- (void)localReset:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ba9d8
- (void)resetOctagonStateMachine;	// IMP=0x00000001000ba81c
- (_Bool)setCDPEnabled:(id *)arg1;	// IMP=0x00000001000ba658
- (long long)getCDPStatus:(id *)arg1;	// IMP=0x00000001000ba474
- (_Bool)accountNoLongerAvailable:(id *)arg1;	// IMP=0x00000001000ba270
- (_Bool)idmsTrustLevelChanged:(id *)arg1;	// IMP=0x00000001000ba220
- (void)moveToCheckTrustedState;	// IMP=0x00000001000b9ff0
- (_Bool)accountAvailable:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000b9d04
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x00000001000b9b08
- (void)incompleteNotificationOfMachineIDListChange;	// IMP=0x00000001000b9a80
- (void)machinesRemoved:(id)arg1 altDSID:(id)arg2;	// IMP=0x00000001000b96c4
- (void)machinesAdded:(id)arg1 altDSID:(id)arg2;	// IMP=0x00000001000b9308
@property(readonly, copy) NSString *description;
- (void)accountStateUpdated:(id)arg1 from:(id)arg2;	// IMP=0x00000001000b90c0
- (void)notifyTrustChanged:(int)arg1;	// IMP=0x00000001000b8fdc
- (void)dealloc;	// IMP=0x00000001000b8fa8
- (void)clearCKKSViewManager;	// IMP=0x00000001000b8f98
- (id)initWithContainerName:(id)arg1 contextID:(id)arg2 cuttlefish:(id)arg3 sosAdapter:(id)arg4 authKitAdapter:(id)arg5 ckksViewManager:(id)arg6 lockStateTracker:(id)arg7 reachabilityTracker:(id)arg8 accountStateTracker:(id)arg9 deviceInformationAdapter:(id)arg10 apsConnectionClass:(Class)arg11 escrowRequestClass:(Class)arg12 cdpd:(id)arg13;	// IMP=0x00000001000b8880

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

