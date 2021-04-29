//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSUTunConnectionDelegate-Protocol.h"
#import "IDSWPLinkManagerConnectivityDelegate-Protocol.h"

@class IDSUTunConnection, IDSUTunPeerServiceMap, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSTimer;
@protocol IDSUTunPeerDelegate, OS_dispatch_source;

@interface IDSUTunPeer : NSObject <IDSUTunConnectionDelegate, IDSWPLinkManagerConnectivityDelegate>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_btUUID;	// 16 = 0x10
    NSString *_uniqueID;	// 24 = 0x18
    NSString *_originalbtUUID;	// 32 = 0x20
    _Bool _shouldUseIPsecLink;	// 40 = 0x28
    NSArray *_directConnections;	// 48 = 0x30
    NSArray *_urgentDirectConnections;	// 56 = 0x38
    NSArray *_defaultDirectConnections;	// 64 = 0x40
    NSArray *_syncDirectConnections;	// 72 = 0x48
    NSMutableDictionary *_connectedStates;	// 80 = 0x50
    NSMutableDictionary *_emptyStates;	// 88 = 0x58
    IDSUTunConnection *_urgentConnectionForAck;	// 96 = 0x60
    IDSUTunConnection *_defaultConnectionForAck;	// 104 = 0x68
    IDSUTunConnection *_syncConnectionForAck;	// 112 = 0x70
    IDSUTunConnection *_urgentCloudConnectionForAck;	// 120 = 0x78
    IDSUTunConnection *_defaultCloudConnectionForAck;	// 128 = 0x80
    _Bool _isCloudConnected;	// 136 = 0x88
    _Bool _isNearby;	// 137 = 0x89
    _Bool _isMagnetIndicatingPeerIsAwake;	// 138 = 0x8a
    _Bool _localSetupInProgress;	// 139 = 0x8b
    _Bool _isPeerAlwaysConnected;	// 140 = 0x8c
    _Bool _isDefaultPairedDevice;	// 141 = 0x8d
    _Bool _waitForDefaultPairedDevice;	// 142 = 0x8e
    _Bool _supportsCloudConnections;	// 143 = 0x8f
    _Bool _pendingCloudEnable;	// 144 = 0x90
    id <IDSUTunPeerDelegate> _delegate;	// 152 = 0x98
    NSMutableSet *_servicesPreferringInfraWiFi;	// 160 = 0xa0
    unsigned long long _totalDeliveredMessagesInfraWiFi;	// 168 = 0xa8
    unsigned long long _totalPacketsReceivedInfraWiFi;	// 176 = 0xb0
    unsigned long long _totalPacketsReceivedClientSockets;	// 184 = 0xb8
    unsigned int _dispatchCounterInfraWiFi;	// 192 = 0xc0
    _Bool _hadInfraWiFiTraffic;	// 196 = 0xc4
    NSTimer *_disableTimer;	// 200 = 0xc8
    NSTimer *_cloudDisableTimer;	// 208 = 0xd0
    NSObject<OS_dispatch_source> *_powerLogTimerUrgent;	// 216 = 0xd8
    NSObject<OS_dispatch_source> *_powerLogTimerDefault;	// 224 = 0xe0
    NSObject<OS_dispatch_source> *_powerLogTimerSync;	// 232 = 0xe8
    NSObject<OS_dispatch_source> *_powerLogTimerSockets;	// 240 = 0xf0
    int _continuityConnectCount;	// 248 = 0xf8
    IDSUTunPeerServiceMap *_incomingServiceMap;	// 256 = 0x100
    IDSUTunPeerServiceMap *_outgoingServiceMap;	// 264 = 0x108
    _Bool _isClassCConnected;	// 272 = 0x110
    struct os_unfair_lock_s _emptyStatesLock;	// 276 = 0x114
}

- (void).cxx_destruct;	// IMP=0x0000000100089e30
@property(nonatomic) struct os_unfair_lock_s emptyStatesLock; // @synthesize emptyStatesLock=_emptyStatesLock;
@property(nonatomic) _Bool isClassCConnected; // @synthesize isClassCConnected=_isClassCConnected;
@property(nonatomic) _Bool isCloudConnected; // @synthesize isCloudConnected=_isCloudConnected;
@property(copy, nonatomic) NSString *originalbtUUID; // @synthesize originalbtUUID=_originalbtUUID;
@property(nonatomic) int continuityConnectCount; // @synthesize continuityConnectCount=_continuityConnectCount;
@property(nonatomic) _Bool isPeerAlwaysConnected; // @synthesize isPeerAlwaysConnected=_isPeerAlwaysConnected;
@property(nonatomic) _Bool pendingCloudEnable; // @synthesize pendingCloudEnable=_pendingCloudEnable;
@property(nonatomic) _Bool supportsCloudConnections; // @synthesize supportsCloudConnections=_supportsCloudConnections;
@property(nonatomic) _Bool isMagnetIndicatingPeerIsAwake; // @synthesize isMagnetIndicatingPeerIsAwake=_isMagnetIndicatingPeerIsAwake;
@property(nonatomic) _Bool localSetupInProgress; // @synthesize localSetupInProgress=_localSetupInProgress;
@property(nonatomic) _Bool isNearby; // @synthesize isNearby=_isNearby;
@property(nonatomic) _Bool isDefaultPairedDevice; // @synthesize isDefaultPairedDevice=_isDefaultPairedDevice;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) NSString *btUUID; // @synthesize btUUID=_btUUID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IDSUTunPeerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldLogTransportStats;	// IMP=0x0000000100089a10
- (void)admissionPolicyChangedForTopic:(id)arg1 allowed:(_Bool)arg2;	// IMP=0x00000001000898bc
- (void)forceOTRNegotiationForTopic:(id)arg1 priority:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100088cdc
- (void)_cloudDisableTimerFired:(id)arg1;	// IMP=0x000000010008868c
- (void)_startCloudDisableTimerIfNecessary;	// IMP=0x000000010008856c
- (void)_clearCloudDisableTimer;	// IMP=0x00000001000884f0
- (_Bool)_allCloudConnectionsAreIdle;	// IMP=0x0000000100087e74
- (void)_disableTimerFired:(id)arg1;	// IMP=0x0000000100087c7c
- (void)_startDisableTimerIfNecessary;	// IMP=0x0000000100087b68
- (void)_clearDisableTimer;	// IMP=0x0000000100087aec
- (_Bool)_allConnectionsAreIdle;	// IMP=0x0000000100087244
- (_Bool)manager:(id)arg1 cbuuidDidDiscover:(id)arg2;	// IMP=0x00000001000870dc
- (void)manager:(id)arg1 cbuuidDidDisconnect:(id)arg2;	// IMP=0x0000000100086d88
- (void)manager:(id)arg1 cbuuidDidFailToConnect:(id)arg2 withReason:(id)arg3;	// IMP=0x0000000100086b4c
- (void)_handleCBUUIDFailToConnect:(id)arg1 withReason:(id)arg2;	// IMP=0x0000000100086788
- (void)manager:(id)arg1 cbuuidDidConnect:(id)arg2 isAlwaysConnected:(_Bool)arg3;	// IMP=0x0000000100085c44
- (void)_handleCBUUIDDidConnect:(id)arg1 isDefaultPairedDevice:(_Bool)arg2 isAlwaysConnected:(_Bool)arg3;	// IMP=0x000000010008560c
- (void)connectionIsEmptyOfCloudMessages:(id)arg1;	// IMP=0x0000000100085008
- (void)connectionIsEmpty:(id)arg1;	// IMP=0x0000000100084c40
- (void)connectionHasSpaceForMessages:(id)arg1 dataProtectionClass:(unsigned int)arg2;	// IMP=0x00000001000848e0
- (void)connection:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5;	// IMP=0x00000001000846d8
- (void)connection:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(_Bool)arg11 didWakeHint:(_Bool)arg12;	// IMP=0x0000000100084378
- (void)connection:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(_Bool)arg11 didWakeHint:(_Bool)arg12;	// IMP=0x0000000100084018
- (void)connection:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(_Bool)arg11 didWakeHint:(_Bool)arg12;	// IMP=0x0000000100083cb8
- (void)connection:(id)arg1 connectivityChanged:(_Bool)arg2;	// IMP=0x0000000100083578
- (long long)_connectionTypeForConnection:(id)arg1;	// IMP=0x00000001000834f8
- (long long)_priorityForConnection:(id)arg1;	// IMP=0x0000000100083490
- (_Bool)_messageTypeSupportedForCloudConnection:(long long)arg1;	// IMP=0x0000000100083424
- (id)_connectionForPriority:(long long)arg1 messageType:(long long)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x00000001000831d8
- (id)rapportClient;	// IMP=0x00000001000831a4
- (void)sendMessage:(id)arg1 priority:(long long)arg2 messageType:(long long)arg3;	// IMP=0x0000000100082168
- (void)kickProgressBlockForMessageID:(id)arg1;	// IMP=0x0000000100081fec
- (void)cancelMessageID:(id)arg1;	// IMP=0x0000000100081e70
- (void)clearStats;	// IMP=0x0000000100081d6c
- (void)trafficClassesChanged;	// IMP=0x0000000100081ca0
- (void)dropDisallowedMessages;	// IMP=0x0000000100081bd4
- (void)unpairStart;	// IMP=0x0000000100081ae8
- (void)setLinkPreferences:(id)arg1;	// IMP=0x0000000100081820
- (void)setPreferInfraWiFi:(_Bool)arg1 services:(id)arg2;	// IMP=0x00000001000811bc
- (void)_checkServicesPreferringInfraWiFi:(unsigned int)arg1;	// IMP=0x0000000100080328
- (void)_powerLogServices:(id)arg1 prefersInfraWifi:(_Bool)arg2;	// IMP=0x00000001000800cc
- (void)setEnableOTR:(_Bool)arg1;	// IMP=0x000000010007fe64
- (void)disableCloudConnectionForReason:(long long)arg1;	// IMP=0x000000010007f980
- (void)disableConnectionForReason:(long long)arg1 shouldWait:(_Bool)arg2;	// IMP=0x000000010007eff0
- (void)enableCloudConnection;	// IMP=0x000000010007e924
- (void)enableConnection;	// IMP=0x000000010007e68c
- (void)logCurrentTransportStatsAndResetTimers;	// IMP=0x000000010007dc68
- (void)_startPowerLogTimersForAllPriorities;	// IMP=0x000000010007d4ec
- (void)_powerlogTransportStats;	// IMP=0x000000010007d0fc
- (void)_powerlogDictionaryForSockets;	// IMP=0x000000010007c8ac
- (void)_powerlogDictionaryForPriority:(long long)arg1;	// IMP=0x000000010007c05c
- (id)_copyPowerlogDictionaryWithOutgoingStats:(id)arg1 incomingStats:(id)arg2;	// IMP=0x000000010007b73c
- (void)_accumulateStats:(id)arg1 intoMessages:(unsigned long long *)arg2 andBytes:(unsigned long long *)arg3;	// IMP=0x000000010007b5ec
- (id)syncCloudPriorityMessageStatistics;	// IMP=0x000000010007b5d0
- (id)defaultCloudPriorityMessageStatistics;	// IMP=0x000000010007b378
@property(readonly, nonatomic) NSDictionary *urgentCloudPriorityMessageStatistics;
@property(readonly, nonatomic) NSDictionary *urgentPriorityMessageStatistics;
@property(readonly, nonatomic) NSDictionary *defaultPriorityMessageStatistics;
@property(readonly, nonatomic) NSDictionary *syncPriorityMessageStatistics;
@property(readonly, nonatomic) NSDictionary *sendingMessageStatistics;
- (id)_copyStatisticsDict:(id)arg1;	// IMP=0x000000010007967c
- (void)_addStatsFromDict:(id)arg1 toAggregate:(id)arg2;	// IMP=0x00000001000793d8
@property(readonly, nonatomic) _Bool isConnected;
- (_Bool)hasSpaceForMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2 messageType:(long long)arg3;	// IMP=0x0000000100078e60
- (_Bool)sendAckForMessageWithSequenceNumber:(unsigned int)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 connectionType:(long long)arg4;	// IMP=0x0000000100078968
- (void)performBlock:(CDUnknownBlockType)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x0000000100077ea4
- (void)performBlockSynchronouslyForAllConnections:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077b20
- (void)performBlockForAllConnections:(CDUnknownBlockType)arg1;	// IMP=0x000000010007779c
- (void)performBlockForDirectConnections:(CDUnknownBlockType)arg1;	// IMP=0x000000010007750c
- (void)dealloc;	// IMP=0x0000000100077100
- (id)initWithIdentifier:(id)arg1 btUUID:(id)arg2 uniqueID:(id)arg3 shouldUseIPsecLink:(_Bool)arg4 isNearby:(_Bool)arg5 isClassCConnected:(_Bool)arg6;	// IMP=0x0000000100076134
- (id)createConnectionWithIdentifier:(id)arg1 priority:(long long)arg2 shouldUseIPsecLink:(_Bool)arg3 dataProtectionClass:(unsigned int)arg4;	// IMP=0x0000000100075b68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
