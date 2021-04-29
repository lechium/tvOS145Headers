//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OctagonStateMachineEngine-Protocol.h"
#import "SOSControlProtocol-Protocol.h"

@class CKKSNearFutureScheduler, CKKSPBFileStorage, CKKeyParameter, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults, OctagonStateMachine, SOSAccountTrustClassic, SOSCKCircleStorage, SOSKVSCircleStorageTransport, SOSMessageKVS;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SOSAccount : NSObject <OctagonStateMachineEngine, SOSControlProtocol>
{
    _Bool _isListeningForSync;	// 8 = 0x8
    _Bool _circle_rings_retirements_need_attention;	// 9 = 0x9
    _Bool _engine_peer_state_needs_repair;	// 10 = 0xa
    _Bool _key_interests_need_updating;	// 11 = 0xb
    _Bool _need_backup_peers_created_after_backup_key_set;	// 12 = 0xc
    _Bool _accountKeyIsTrusted;	// 13 = 0xd
    _Bool _notifyCircleChangeOnExit;	// 14 = 0xe
    _Bool _notifyViewChangeOnExit;	// 15 = 0xf
    _Bool _notifyBackupOnExit;	// 16 = 0x10
    _Bool _accountIsChanging;	// 17 = 0x11
    int _lock_notification_token;	// 20 = 0x14
    struct __SecKey *_accountKey;	// 24 = 0x18
    struct __SecKey *_accountPrivateKey;	// 32 = 0x20
    struct __SecKey *_previousAccountKey;	// 40 = 0x28
    struct __SecKey *_peerPublicKey;	// 48 = 0x30
    NSDictionary *_gestalt;	// 56 = 0x38
    NSData *_backup_key;	// 64 = 0x40
    NSString *_deviceID;	// 72 = 0x48
    SOSAccountTrustClassic *_trust;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_user_private_timer;	// 96 = 0x60
    struct SOSDataSourceFactory *_factory;	// 104 = 0x68
    NSData *__password_tmp;	// 112 = 0x70
    CKKeyParameter *_key_transport;	// 120 = 0x78
    SOSKVSCircleStorageTransport *_circle_transport;	// 128 = 0x80
    SOSMessageKVS *_kvs_message_transport;	// 136 = 0x88
    SOSCKCircleStorage *_ck_storage;	// 144 = 0x90
    NSMutableArray *_change_blocks;	// 152 = 0x98
    NSMutableDictionary *_waitForInitialSync_blocks;	// 160 = 0xa0
    NSData *_accountKeyDerivationParameters;	// 168 = 0xa8
    CDUnknownBlockType _saveBlock;	// 176 = 0xb0
    NSUserDefaults *_settings;	// 184 = 0xb8
    struct __SecKey *_octagonSigningFullKeyRef;	// 192 = 0xc0
    struct __SecKey *_octagonEncryptionFullKeyRef;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_stateMachineQueue;	// 208 = 0xd0
    OctagonStateMachine *_stateMachine;	// 216 = 0xd8
    CKKSPBFileStorage *_accountConfiguration;	// 224 = 0xe0
    CKKSNearFutureScheduler *_performBackups;	// 232 = 0xe8
    CKKSNearFutureScheduler *_performRingUpdates;	// 240 = 0xf0
}

+ (id)urlForSOSAccountSettings;	// IMP=0x000000010019a6ec
+ (unsigned int)ghostBustGetRampSettings;	// IMP=0x000000010019a6e4
+ (id)accountFromData:(id)arg1 factory:(struct SOSDataSourceFactory *)arg2 error:(id *)arg3;	// IMP=0x00000001001a89fc
+ (id)accountFromDER:(const char **)arg1 end:(const char *)arg2 factory:(struct SOSDataSourceFactory *)arg3 error:(id *)arg4;	// IMP=0x00000001001a7cc8
+ (void)performOnQuietAccountQueue:(CDUnknownBlockType)arg1;	// IMP=0x00000001001abcb4
- (void).cxx_destruct;	// IMP=0x00000001001971c0
@property(retain) CKKSNearFutureScheduler *performRingUpdates; // @synthesize performRingUpdates=_performRingUpdates;
@property(retain) CKKSNearFutureScheduler *performBackups; // @synthesize performBackups=_performBackups;
@property(retain) CKKSPBFileStorage *accountConfiguration; // @synthesize accountConfiguration=_accountConfiguration;
@property(retain) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain) NSObject<OS_dispatch_queue> *stateMachineQueue; // @synthesize stateMachineQueue=_stateMachineQueue;
@property(nonatomic) _Bool accountIsChanging; // @synthesize accountIsChanging=_accountIsChanging;
@property(nonatomic) struct __SecKey *octagonEncryptionFullKeyRef; // @synthesize octagonEncryptionFullKeyRef=_octagonEncryptionFullKeyRef;
@property(nonatomic) struct __SecKey *octagonSigningFullKeyRef; // @synthesize octagonSigningFullKeyRef=_octagonSigningFullKeyRef;
@property(retain, nonatomic) NSUserDefaults *settings; // @synthesize settings=_settings;
@property(nonatomic) _Bool notifyBackupOnExit; // @synthesize notifyBackupOnExit=_notifyBackupOnExit;
@property(nonatomic) _Bool notifyViewChangeOnExit; // @synthesize notifyViewChangeOnExit=_notifyViewChangeOnExit;
@property(nonatomic) _Bool notifyCircleChangeOnExit; // @synthesize notifyCircleChangeOnExit=_notifyCircleChangeOnExit;
@property(copy) CDUnknownBlockType saveBlock; // @synthesize saveBlock=_saveBlock;
@property(nonatomic) _Bool accountKeyIsTrusted; // @synthesize accountKeyIsTrusted=_accountKeyIsTrusted;
@property(retain, nonatomic) NSData *accountKeyDerivationParameters; // @synthesize accountKeyDerivationParameters=_accountKeyDerivationParameters;
@property(retain, nonatomic) NSMutableDictionary *waitForInitialSync_blocks; // @synthesize waitForInitialSync_blocks=_waitForInitialSync_blocks;
@property(retain, nonatomic) NSMutableArray *change_blocks; // @synthesize change_blocks=_change_blocks;
@property(nonatomic) _Bool need_backup_peers_created_after_backup_key_set; // @synthesize need_backup_peers_created_after_backup_key_set=_need_backup_peers_created_after_backup_key_set;
@property(nonatomic) _Bool key_interests_need_updating; // @synthesize key_interests_need_updating=_key_interests_need_updating;
@property(nonatomic) _Bool engine_peer_state_needs_repair; // @synthesize engine_peer_state_needs_repair=_engine_peer_state_needs_repair;
@property(nonatomic) _Bool circle_rings_retirements_need_attention; // @synthesize circle_rings_retirements_need_attention=_circle_rings_retirements_need_attention;
@property(retain, nonatomic) SOSCKCircleStorage *ck_storage; // @synthesize ck_storage=_ck_storage;
@property(retain, nonatomic) SOSMessageKVS *kvs_message_transport; // @synthesize kvs_message_transport=_kvs_message_transport;
@property(retain, nonatomic) SOSKVSCircleStorageTransport *circle_transport; // @synthesize circle_transport=_circle_transport;
@property(retain, nonatomic) CKKeyParameter *key_transport; // @synthesize key_transport=_key_transport;
@property(nonatomic) int lock_notification_token; // @synthesize lock_notification_token=_lock_notification_token;
@property(nonatomic) _Bool isListeningForSync; // @synthesize isListeningForSync=_isListeningForSync;
@property(retain, nonatomic) NSData *_password_tmp; // @synthesize _password_tmp=__password_tmp;
@property(nonatomic) struct SOSDataSourceFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *user_private_timer; // @synthesize user_private_timer=_user_private_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SOSAccountTrustClassic *trust; // @synthesize trust=_trust;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSData *backup_key; // @synthesize backup_key=_backup_key;
@property(retain, nonatomic) NSDictionary *gestalt; // @synthesize gestalt=_gestalt;
@property(nonatomic) struct __SecKey *peerPublicKey; // @synthesize peerPublicKey=_peerPublicKey;
@property(nonatomic) struct __SecKey *previousAccountKey; // @synthesize previousAccountKey=_previousAccountKey;
@property(nonatomic) struct __SecKey *accountPrivateKey; // @synthesize accountPrivateKey=_accountPrivateKey;
@property(nonatomic) struct __SecKey *accountKey; // @synthesize accountKey=_accountKey;
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x0000000100196c9c
- (id)performRingUpdate;	// IMP=0x0000000100196bb4
- (id)performBackup;	// IMP=0x0000000100196acc
- (void)triggerRingUpdate;	// IMP=0x00000001001969fc
- (void)triggerBackupForPeers:(id)arg1;	// IMP=0x00000001001968a8
- (void)addRingUpdateFlag;	// IMP=0x000000010019682c
- (void)addBackupFlag;	// IMP=0x00000001001967b0
- (void)setupStateMachine;	// IMP=0x0000000100196268
- (void)_onQueueRecordRetiredPeersInCircle;	// IMP=0x0000000100196100
- (_Bool)_onQueueEnsureInBackupRings;	// IMP=0x0000000100195c94
- (_Bool)isInCircle:(struct __CFError **)arg1;	// IMP=0x0000000100195c44
- (int)getCircleStatus:(struct __CFError **)arg1;	// IMP=0x0000000100195b98
- (void)flattenToSaveBlock;	// IMP=0x0000000100195ad8
- (void)removeV0Peers:(CDUnknownBlockType)arg1;	// IMP=0x0000000100195a44
- (void)setWatchdogParmeters:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00000001001958c0
- (void)getWatchdogParameters:(CDUnknownBlockType)arg1;	// IMP=0x0000000100195728
- (void)rpcTriggerRingUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00000001001956d0
- (void)rpcTriggerBackup:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00000001001955f4
- (void)rpcTriggerSync:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x000000010019540c
- (void)importInitialSyncCredentials:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100195360
- (void)initialSyncCredentials:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100194f1c
- (void)joinCircleWithBlob:(id)arg1 version:(int)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100194db8
- (void)circleJoiningBlob:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100194b3c
- (void)iCloudIdentityStatus_internal:(CDUnknownBlockType)arg1;	// IMP=0x0000000100194b28
- (void)iCloudIdentityStatus:(CDUnknownBlockType)arg1;	// IMP=0x0000000100194b14
- (_Bool)ghostBustCheckDate;	// IMP=0x0000000100194b0c
- (void)ghostBustInfo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100194af8
- (void)ghostBustTriggerTimed:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100194ae4
- (void)ghostBustPeriodic:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100194ad0
- (void)ghostBust:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100194abc
- (void)ghostBustSchedule;	// IMP=0x0000000100194ab8
- (void)ghostBustFollowup;	// IMP=0x0000000100194ab4
- (id)ghostBustGetDate;	// IMP=0x0000000100194aac
- (void)circleHash:(CDUnknownBlockType)arg1;	// IMP=0x00000001001949ac
- (void)myPeerInfo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100194870
- (void)stashAccountCredential:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x000000010019479c
- (void)validatedStashedAccountCredential:(CDUnknownBlockType)arg1;	// IMP=0x00000001001946a4
- (_Bool)syncWaitAndFlush:(struct __CFError **)arg1;	// IMP=0x00000001001943e8
- (void)assertStashedAccountCredential:(CDUnknownBlockType)arg1;	// IMP=0x0000000100194334
- (void)stashedCredentialPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x0000000100194280
- (void)rateLimitingPerformanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x00000001001941f4
- (void)kvsPerformanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x0000000100194150
- (void)userPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x000000010019409c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100193de4
- (void)startStateMachine;	// IMP=0x0000000100193da4
- (id)initWithGestalt:(struct __CFDictionary *)arg1 factory:(struct SOSDataSourceFactory *)arg2;	// IMP=0x000000010019397c
- (void)ensureOctagonPeerKeys;	// IMP=0x00000001001938c0
- (_Bool)ensureFactoryCircles;	// IMP=0x0000000100193594
@property(readonly, nonatomic) NSString *peerID;
@property(readonly, nonatomic) struct __OpaqueSOSFullPeerInfo *fullPeerInfo;
@property(readonly, nonatomic) struct __OpaqueSOSPeerInfo *peerInfo;
@property(readonly, nonatomic) _Bool hasPeerInfo;
- (void)dealloc;	// IMP=0x0000000100193228
- (id)encodedData:(id *)arg1;	// IMP=0x00000001001a7b90
- (void)performTransaction:(_Bool)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x00000001001abb74
- (void)performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000001001abb60
- (void)performTransaction_Locked:(_Bool)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x00000001001abacc
- (void)performTransaction_Locked:(CDUnknownBlockType)arg1;	// IMP=0x00000001001abab8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

