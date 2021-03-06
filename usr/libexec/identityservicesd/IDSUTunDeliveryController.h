//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSNRDeviceBridgeDelegate-Protocol.h"
#import "IDSPairingManagerDelegate-Protocol.h"
#import "IDSRapportClientDelegate-Protocol.h"
#import "IDSUTunPeerDelegate-Protocol.h"
#import "IMSystemMonitorListener-Protocol.h"

@class IDSConnectivityMonitor, IDSNRDeviceBridge, IDSNRDevicePreferencesHandler, IMTimer, NSDictionary, NSHashTable, NSMutableDictionary, NSSet, NSString;
@protocol IDSUTunDeliveryControllerDelegate, OS_dispatch_queue;

@interface IDSUTunDeliveryController : NSObject <IDSNRDeviceBridgeDelegate, IDSUTunPeerDelegate, IMSystemMonitorListener, IDSPairingManagerDelegate, IDSRapportClientDelegate>
{
    struct _opaque_pthread_mutex_t _deviceIDToPeerLock;	// 8 = 0x8
    NSMutableDictionary *_deviceIDToPeer;	// 72 = 0x48
    NSMutableDictionary *_btuuidToSessionID;	// 80 = 0x50
    struct _opaque_pthread_mutex_t _streamIDToTopicLock;	// 88 = 0x58
    NSMutableDictionary *_streamIDToTopic;	// 152 = 0x98
    unsigned int _messageID;	// 160 = 0xa0
    double _lastConnectedTime;	// 168 = 0xa8
    double _lastIsNearbyBecameTrue;	// 176 = 0xb0
    id <IDSUTunDeliveryControllerDelegate> _delegate;	// 184 = 0xb8
    _Bool _isLinkForDefaultPeerConnected;	// 192 = 0xc0
    NSHashTable *_connectivityDelegates;	// 200 = 0xc8
    struct _opaque_pthread_mutex_t _trafficClassLock;	// 208 = 0xd0
    NSSet *_allowedTrafficClasses;	// 272 = 0x110
    _Bool _enableOTR;	// 280 = 0x118
    IMTimer *_otrTimer;	// 288 = 0x120
    _Bool _otrInitialized;	// 296 = 0x128
    _Bool _localAccountSetupCompleted;	// 297 = 0x129
    _Bool _defaultPeerConnectedDeferred;	// 298 = 0x12a
    struct _opaque_pthread_mutex_t _continuityPeerLock;	// 304 = 0x130
    NSMutableDictionary *_lockedPeerMap;	// 368 = 0x170
    NSMutableDictionary *_peerListMap;	// 376 = 0x178
    NSMutableDictionary *_pendingPeerMap;	// 384 = 0x180
    NSMutableDictionary *_peerConnectBlocksMap;	// 392 = 0x188
    NSMutableDictionary *_peerFailureBlocksMap;	// 400 = 0x190
    double _lastCloudConnectedTime;	// 408 = 0x198
    NSObject<OS_dispatch_queue> *_broadcastQueue;	// 416 = 0x1a0
    _Bool _isConnected;	// 424 = 0x1a8
    _Bool _isCloudConnected;	// 425 = 0x1a9
    _Bool _isClassCConnected;	// 426 = 0x1aa
    _Bool _shouldUseIPsecLinkForDefaultPairedDevice;	// 427 = 0x1ab
    _Bool _isLocalSetUpInProgress;	// 428 = 0x1ac
    IDSNRDeviceBridge *_idsNRDeviceBridge;	// 432 = 0x1b0
    IDSNRDevicePreferencesHandler *_nrDevicePreferencesHandler;	// 440 = 0x1b8
    IDSConnectivityMonitor *_connectivityMonitor;	// 448 = 0x1c0
    double _notificationDelayInSeconds;	// 456 = 0x1c8
}

+ (id)sharedInstance;	// IMP=0x000000010026f17c
- (void).cxx_destruct;	// IMP=0x0000000100286cc0
@property(nonatomic) _Bool isLocalSetUpInProgress; // @synthesize isLocalSetUpInProgress=_isLocalSetUpInProgress;
@property(nonatomic) double notificationDelayInSeconds; // @synthesize notificationDelayInSeconds=_notificationDelayInSeconds;
@property(retain, nonatomic) IDSConnectivityMonitor *connectivityMonitor; // @synthesize connectivityMonitor=_connectivityMonitor;
@property(retain, nonatomic) IDSNRDevicePreferencesHandler *nrDevicePreferencesHandler; // @synthesize nrDevicePreferencesHandler=_nrDevicePreferencesHandler;
@property(retain, nonatomic) IDSNRDeviceBridge *idsNRDeviceBridge; // @synthesize idsNRDeviceBridge=_idsNRDeviceBridge;
@property(nonatomic) _Bool shouldUseIPsecLinkForDefaultPairedDevice; // @synthesize shouldUseIPsecLinkForDefaultPairedDevice=_shouldUseIPsecLinkForDefaultPairedDevice;
@property(nonatomic) double lastCloudConnectedTime; // @synthesize lastCloudConnectedTime=_lastCloudConnectedTime;
@property(nonatomic) _Bool isClassCConnected; // @synthesize isClassCConnected=_isClassCConnected;
@property(nonatomic) _Bool isCloudConnected; // @synthesize isCloudConnected=_isCloudConnected;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) _Bool enableOTR; // @synthesize enableOTR=_enableOTR;
@property(nonatomic) __weak id <IDSUTunDeliveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rapportClient:(id)arg1 didLoseDevice:(id)arg2;	// IMP=0x0000000100286698
- (void)rapportClient:(id)arg1 didDiscoverDevice:(id)arg2;	// IMP=0x0000000100286360
- (void)enableOTRForDefaultPairedDevice;	// IMP=0x000000010028607c
- (id)_currentOTRTimer;	// IMP=0x0000000100286060
- (id)pairingManager;	// IMP=0x000000010028602c
- (id)sessionIDforPeer:(id)arg1;	// IMP=0x0000000100285f58
- (_Bool)isPeerForPhoneContinuityLocalMessage:(id)arg1;	// IMP=0x0000000100285a80
- (void)tryNextContinuityPeer:(id)arg1;	// IMP=0x0000000100284af8
- (void)addContinuityPeer:(id)arg1 btUUID:(id)arg2 connectBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100283ea0
- (id)pendingContinuityPeerID:(id)arg1;	// IMP=0x0000000100283dcc
- (id)lockedContinuityPeerID:(id)arg1;	// IMP=0x0000000100283cf8
- (void)unlockAllContinuityPeers;	// IMP=0x0000000100283b04
- (void)unlockContinuityPeer:(id)arg1;	// IMP=0x000000010028387c
- (void)lockContinuityPeer:(id)arg1 btUUID:(id)arg2;	// IMP=0x00000001002833dc
- (void)_cleanupContinuityPeerMaps:(id)arg1;	// IMP=0x000000010028316c
- (void)admissionPolicyChangedForTopic:(id)arg1 allowed:(_Bool)arg2;	// IMP=0x0000000100282fac
- (void)findDefaultPeerToForceOTRNegotiation:(id)arg1 priority:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100282eb8
- (void)didUpdatePairedDevice:(id)arg1;	// IMP=0x0000000100282b54
- (void)didRemovePairedDevice:(id)arg1;	// IMP=0x0000000100282868
- (void)didAddPairedDevice:(id)arg1;	// IMP=0x00000001002825dc
- (void)_disableOTRForDefaultPairedPeer:(id)arg1;	// IMP=0x00000001002823a0
- (void)_enableOTRForDefaultPairedDevice;	// IMP=0x0000000100282110
- (void)_setOTREnableTimer;	// IMP=0x0000000100281f00
- (void)nrDeviceBridge:(id)arg1 defaultPeerClassCConnectivityDidChange:(_Bool)arg2;	// IMP=0x0000000100281e88
- (void)nrDeviceBridge:(id)arg1 linkType:(unsigned char)arg2;	// IMP=0x0000000100281bdc
- (void)nrDeviceBridge:(id)arg1 deviceMagnetIndicationOfAwakeStateDidChange:(_Bool)arg2;	// IMP=0x0000000100281b64
- (void)nrDeviceBridge:(id)arg1 defaultPeerCloudConnectivityDidChange:(_Bool)arg2;	// IMP=0x0000000100281aec
- (void)nrDeviceBridge:(id)arg1 defaultPeerNearbyDidChange:(_Bool)arg2;	// IMP=0x0000000100281608
- (void)nrDeviceBridge:(id)arg1 defaultPeerConnectivityDidChange:(_Bool)arg2;	// IMP=0x0000000100281590
@property(readonly, nonatomic) _Bool isTerminusConnectedOverBluetooth;
@property(readonly, nonatomic) _Bool isTerminusRegistered;
@property(readonly, nonatomic) _Bool isTerminusNearby;
@property(readonly, nonatomic) _Bool isTerminusConnected;
- (void)_setCloudConnectionConnected:(_Bool)arg1 forPeer:(id)arg2;	// IMP=0x0000000100280ef8
- (void)peerCloudConnectivityChanged:(id)arg1 isCloudConnected:(_Bool)arg2;	// IMP=0x0000000100280ac0
- (void)defaultPeerDropDisallowedMessages;	// IMP=0x0000000100280898
- (void)defaultPeerUnpairStart;	// IMP=0x0000000100280658
- (void)defaultPeerSetWantsQuickRelayRequest:(_Bool)arg1;	// IMP=0x00000001002802d0
- (void)defaultPeerSetLinkPreferences:(id)arg1;	// IMP=0x000000010027f848
- (void)defaultPeerSetPreferInfraWiFi:(_Bool)arg1 services:(id)arg2;	// IMP=0x000000010027f31c
- (void)defaultPeerClassCConnectivityDidChange:(_Bool)arg1;	// IMP=0x000000010027f070
- (void)defaultPeerMagnetIndicationOfAwakeStateChanged:(_Bool)arg1;	// IMP=0x000000010027edf4
- (void)legacyUTunBTLinkManagerDefaultPeerCloudConnectivityChanged:(_Bool)arg1;	// IMP=0x000000010027ec80
- (void)defaultPeerCloudConnectivityChanged:(_Bool)arg1;	// IMP=0x000000010027e9b4
- (void)legacyUTunBTLinkManagerDefaultPeerNearbyChanged:(_Bool)arg1;	// IMP=0x000000010027e840
- (void)defaultPeerNearbyChanged:(_Bool)arg1;	// IMP=0x000000010027e4f0
- (void)legacyUTunBTLinkManagerDefaultPeerConnectivityChanged:(_Bool)arg1;	// IMP=0x000000010027e37c
- (void)defaultPeerConnectivityChanged:(_Bool)arg1;	// IMP=0x000000010027dcdc
- (void)peerHasSpaceForUrgentMessages:(id)arg1 dataProtectionClass:(unsigned int)arg2 withTypes:(id)arg3;	// IMP=0x000000010027d8b8
- (void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x000000010027d430
- (void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 withTypes:(id)arg4;	// IMP=0x000000010027cf84
- (void)peerCloudConnectivityChanged:(id)arg1;	// IMP=0x000000010027c9b4
- (void)peerConnectivityChanged:(id)arg1;	// IMP=0x000000010027bccc
- (void)peerNearbyStateChanged:(id)arg1 forceNotify:(_Bool)arg2;	// IMP=0x000000010027b394
- (void)peer:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5 priority:(long long)arg6 connectionType:(long long)arg7;	// IMP=0x000000010027b1ac
- (void)peer:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x000000010027adb8
- (void)peer:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x000000010027aaa4
- (void)peer:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x000000010027a790
- (id)_deviceIDForPeer:(id)arg1;	// IMP=0x000000010027a4cc
- (void)removeConnectivityDelegate:(id)arg1;	// IMP=0x000000010027a45c
- (void)addConnectivityDelegate:(id)arg1;	// IMP=0x000000010027a3b0
- (void)addUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2;	// IMP=0x0000000100279d38
- (void)removeUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2 reason:(long long)arg3 shouldWait:(_Bool)arg4;	// IMP=0x0000000100279bd8
- (void)removeUTunPeerWithSessionID:(id)arg1 reason:(long long)arg2 shouldWait:(_Bool)arg3;	// IMP=0x0000000100279858
- (void)systemScreenDidPowerDown;	// IMP=0x0000000100279584
@property(retain, nonatomic) NSSet *allowedTrafficClasses; // @synthesize allowedTrafficClasses=_allowedTrafficClasses;
@property(readonly) NSDictionary *queuedIncomingMessageDictionary;
@property(readonly) NSDictionary *sendingMessageStatistics;
@property(readonly) NSDictionary *urgentCloudPriorityMessageStatistics;
@property(readonly) NSDictionary *urgentPriorityMessageStatistics;
@property(readonly) NSDictionary *defaultPriorityMessageStatistics;
@property(readonly) NSDictionary *syncPriorityMessageStatistics;
- (void)setTopics:(id)arg1;	// IMP=0x000000010027882c
- (_Bool)hasSpaceForCloudMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2;	// IMP=0x0000000100278754
- (_Bool)hasSpaceForMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2;	// IMP=0x000000010027867c
- (void)enableCloudConnectionForDefaultPairedDevice:(_Bool)arg1;	// IMP=0x0000000100278258
- (void)enableConnectionForDefaultPairedDevice:(_Bool)arg1;	// IMP=0x0000000100277e2c
- (void)localAccountSetupCompleted;	// IMP=0x0000000100277a2c
@property(readonly, nonatomic) _Bool defaultPeerIsCloudConnected;
@property(readonly, nonatomic) _Bool defaultPeerIsNearby;
@property(readonly, nonatomic) _Bool defaultPeerIsConnected;
@property(readonly, nonatomic) _Bool isPresent;
- (id)topicForStreamID:(unsigned short)arg1;	// IMP=0x0000000100277788
- (void)kickProgressBlockForMessageID:(id)arg1;	// IMP=0x00000001002775a0
- (void)cancelMessageID:(id)arg1;	// IMP=0x00000001002771f4
- (void)sendData:(id)arg1 service:(id)arg2 protobuf:(id)arg3 resourcePath:(id)arg4 resourceMetadata:(id)arg5 priority:(long long)arg6 dataProtectionClass:(unsigned int)arg7 nonWaking:(_Bool)arg8 nonCloudWaking:(_Bool)arg9 requireBluetooth:(_Bool)arg10 requireLocalWiFi:(_Bool)arg11 queueOneIdentifier:(id)arg12 expirationDate:(id)arg13 enforceRemoteTimeouts:(_Bool)arg14 expectsPeerResponse:(_Bool)arg15 wantsAppAck:(_Bool)arg16 compressPayload:(_Bool)arg17 compressed:(_Bool)arg18 peerResponseIdentifier:(id)arg19 messageID:(id)arg20 topic:(id)arg21 awdTopic:(id)arg22 command:(id)arg23 fromID:(id)arg24 uriToDeviceID:(id)arg25 localDeviceDestinationDeviceUUID:(id)arg26 bypassDuet:(_Bool)arg27 duetIdentifiersOverride:(id)arg28 messageType:(long long)arg29 fallbackBlock:(CDUnknownBlockType)arg30 progressBlock:(CDUnknownBlockType)arg31 completionBlock:(CDUnknownBlockType)arg32;	// IMP=0x0000000100273c08
- (id)_createPeerFromDeviceInfo:(id)arg1;	// IMP=0x0000000100273184
- (id)_createPeerFromDeviceID:(id)arg1;	// IMP=0x00000001002730c0
- (void)_removePeerFromDeviceID:(id)arg1;	// IMP=0x000000010027303c
- (void)setPendingCloudFlagOnDefaultPeer;	// IMP=0x0000000100272fcc
- (void)ensureLocalSetupInProgressConsistencyAfterQWS;	// IMP=0x0000000100272e3c
- (void)updatecloudDeliveryStateOnDefaultPeer;	// IMP=0x0000000100272c00
- (void)prepareForQuickSwitch;	// IMP=0x00000001002729c0
- (_Bool)localSetupInProgress;	// IMP=0x0000000100272934
- (void)localSetupCompleted;	// IMP=0x00000001002726e8
- (void)localSetupStarted;	// IMP=0x00000001002724a8
- (void)_updateLocalSetupInProgressState:(_Bool)arg1;	// IMP=0x000000010027236c
- (void)deviceWithUniqueID:(id)arg1 updatedUUID:(id)arg2;	// IMP=0x0000000100271b7c
- (void)setDeviceUniqueIDToCBUUID:(id)arg1;	// IMP=0x000000010027183c
- (id)hashForString:(id)arg1;	// IMP=0x00000001002716b0
- (id)_copyPairedDevice;	// IMP=0x0000000100271674
- (id)_copyPeerWithID:(id)arg1;	// IMP=0x00000001002715b4
- (id)copyPeerWithID:(id)arg1;	// IMP=0x0000000100271548
- (unsigned int)_nextMessageID;	// IMP=0x0000000100271508
- (void)_refreshIPsecStatus;	// IMP=0x0000000100271448
- (void)_removeDevicePreferencesHandler;	// IMP=0x00000001002713b8
- (void)stopIdsNRDeviceBridgeAndPreferenceHandler;	// IMP=0x0000000100271370
- (void)startIdsNRDeviceBridgeAndPreferenceHandlerWithIdentifier:(id)arg1;	// IMP=0x0000000100270fa4
- (id)_pairedDeviceUUID;	// IMP=0x0000000100270b18
- (void)dealloc;	// IMP=0x000000010027094c
- (id)init;	// IMP=0x00000001002708b4
- (id)initWithBroadcastQueue:(id)arg1;	// IMP=0x000000010026f310

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

