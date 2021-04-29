//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSBTLinkManagerDelegate-Protocol.h"
#import "IDSCellularLinkDelegate-Protocol.h"
#import "IDSLinkDelegate-Protocol.h"
#import "IDSWPLinkManagerDelegate-Protocol.h"
#import "IMSystemMonitorListener-Protocol.h"

@class IDSBTLinkManager, IDSSockAddrWrapper, IDSWPLinkManager, NSDictionary, NSMutableDictionary, NSString;
@protocol IDSLinkDelegate, OS_dispatch_source;

@interface IDSLinkManager : NSObject <IDSLinkDelegate, IDSBTLinkManagerDelegate, IDSWPLinkManagerDelegate, IMSystemMonitorListener, IDSCellularLinkDelegate>
{
    NSMutableDictionary *_cbuuidToLinks;	// 8 = 0x8
    NSMutableDictionary *_deviceIDToCurrentLink;	// 16 = 0x10
    NSDictionary *_deviceIDToUDPDestinations;	// 24 = 0x18
    IDSBTLinkManager *_btLinkManager;	// 32 = 0x20
    IDSWPLinkManager *_wpLinkManager;	// 40 = 0x28
    _Bool _isCentral;	// 48 = 0x30
    _Bool _mayBringUpWiFi;	// 49 = 0x31
    _Bool _isWiFiBroughtUp;	// 50 = 0x32
    _Bool _shouldBringWiFiDown;	// 51 = 0x33
    _Bool _shouldKeepWiFiUp;	// 52 = 0x34
    unsigned int _handshakeCounter;	// 56 = 0x38
    unsigned int _WiFiBringUpCounter;	// 60 = 0x3c
    double _addressRetransmissionInterval;	// 64 = 0x40
    _Bool _requireBT;	// 72 = 0x48
    _Bool _shouldStartBTLinkManager;	// 73 = 0x49
    NSMutableDictionary *_deviceIDToAllocRequests;	// 80 = 0x50
    NSMutableDictionary *_deviceIDToGlobalLinkUp;	// 88 = 0x58
    _Bool _delayedDefaultDeviceAllocateRequest;	// 96 = 0x60
    void *_wifiManager;	// 104 = 0x68
    void *_wifiDevice;	// 112 = 0x70
    _Bool _isWiFiAssociated;	// 120 = 0x78
    unsigned int _WiFiAssociationCounter;	// 124 = 0x7c
    double _rejectedPreferInfraWiFi;	// 128 = 0x80
    CDUnknownBlockType _WiFiAssociationFailureHandler;	// 136 = 0x88
    long long _currentWiFiAutoJoinStatus;	// 144 = 0x90
    NSString *_currentWiFiSSID;	// 152 = 0x98
    id _WiFiPowerAssertion;	// 160 = 0xa0
    double _WiFiAssociationStartTime;	// 168 = 0xa8
    double _preferInfraWiFiConnectionTimeout;	// 176 = 0xb0
    unsigned long long _totalBytesSent;	// 184 = 0xb8
    unsigned long long _totalPacketsSent;	// 192 = 0xc0
    unsigned long long _totalBytesReceived;	// 200 = 0xc8
    unsigned long long _totalPacketsReceived;	// 208 = 0xd0
    unsigned long long _totalPacketsDropped;	// 216 = 0xd8
    unsigned long long _previousBytesSent;	// 224 = 0xe0
    unsigned long long _previousPacketsSent;	// 232 = 0xe8
    unsigned long long _previousBytesReceived;	// 240 = 0xf0
    unsigned long long _previousPacketsReceived;	// 248 = 0xf8
    unsigned long long _previousPacketsDropped;	// 256 = 0x100
    double _previousReportTime;	// 264 = 0x108
    double _previousReportFileOpenTime;	// 272 = 0x110
    double _minReportFileOpenTimeInterval;	// 280 = 0x118
    char _reporterFile[1025];	// 288 = 0x120
    int _reporterFd;	// 1316 = 0x524
    _Bool _isInternalInstall;	// 1320 = 0x528
    _Bool _demoMode;	// 1321 = 0x529
    NSString *_fixedInterface;	// 1328 = 0x530
    NSString *_fixedInterfaceDestination;	// 1336 = 0x538
    _Bool _hasFixedDestination;	// 1344 = 0x540
    NSObject<OS_dispatch_source> *_reporterTimer;	// 1352 = 0x548
    struct __SCDynamicStore *_dynamicStore;	// 1360 = 0x550
    _Bool _cellularDataStatusListenerStarted;	// 1368 = 0x558
    id <IDSLinkDelegate> _delegate;	// 1376 = 0x560
    NSString *_defaultDeviceCbuuid;	// 1384 = 0x568
    _Bool _doesDefaultDevicePreferInfraWiFi;	// 1392 = 0x570
    _Bool _isDefaultDeviceUsingBTLink;	// 1393 = 0x571
    _Bool _isDefaultDeviceNearby;	// 1394 = 0x572
    _Bool _lastSentDefaultDeviceNearby;	// 1395 = 0x573
    _Bool _lastSentDefaultDeviceConnectivity;	// 1396 = 0x574
    _Bool _lastSentDefaultDeviceCloudConnectivity;	// 1397 = 0x575
    _Bool _lastSentDefaultPeerConnectivity;	// 1398 = 0x576
    _Bool _isDefaultDeviceOnPhoneCall;	// 1399 = 0x577
    _Bool _hasDelayedNoConnectivityNotification;	// 1400 = 0x578
    IDSSockAddrWrapper *_localWiFiAddressUsedForDefaultDevice;	// 1408 = 0x580
    unsigned long long _currentDefaultDeviceLinkType;	// 1416 = 0x588
}

- (void).cxx_destruct;	// IMP=0x0000000100344e84
@property(readonly, nonatomic) unsigned long long currentDefaultDeviceLinkType; // @synthesize currentDefaultDeviceLinkType=_currentDefaultDeviceLinkType;
- (void)cellularSoMaskDidChange:(unsigned int)arg1;	// IMP=0x00000001003448ec
- (void)cellularRadioAccessTechnologyDidChange:(_Bool)arg1;	// IMP=0x0000000100344274
- (void)_unsubscribeFromWRMForLinkRecommendation;	// IMP=0x0000000100344220
- (void)_subscribeToWRMForLinkRecommendation:(unsigned long long)arg1;	// IMP=0x0000000100344004
- (void)_handleWRMLinkRecommendation:(unsigned long long)arg1;	// IMP=0x0000000100343e48
- (unsigned long long)_getWRMLinkTypeFromIDSLinkType:(unsigned long long)arg1;	// IMP=0x0000000100343dcc
- (unsigned long long)_getIDSLinkTypeFromWRMLinkType:(unsigned long long)arg1;	// IMP=0x0000000100343d54
- (id)_getIDSLinkTypeString:(unsigned long long)arg1;	// IMP=0x0000000100343c5c
- (unsigned long long)currentLinkType:(id)arg1;	// IMP=0x00000001003438ac
- (id)linkForCBUUID:(id)arg1;	// IMP=0x00000001003437f4
- (void)currentLinkType:(unsigned long long *)arg1 andRATType:(unsigned int *)arg2 forDeviceID:(id)arg3;	// IMP=0x00000001003433c8
- (void)_handleNetworkChanges:(id)arg1;	// IMP=0x00000001003422dc
- (void)manager:(id)arg1 didPairedDeviceChange:(_Bool)arg2;	// IMP=0x0000000100341b3c
- (void)manager:(id)arg1 linkDidDisconnect:(id)arg2;	// IMP=0x00000001003417c0
- (void)manager:(id)arg1 linkDidConnect:(id)arg2;	// IMP=0x0000000100341394
- (void)manager:(id)arg1 didPowerStateChange:(_Bool)arg2;	// IMP=0x0000000100340ce4
- (void)link:(id)arg1 didAddQREvent:(id)arg2;	// IMP=0x0000000100340c08
- (void)link:(id)arg1 didReceiveReportEvent:(id)arg2;	// IMP=0x000000010034094c
- (void)link:(id)arg1 didReceiveSessionInfo:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 success:(_Bool)arg5;	// IMP=0x00000001003405cc
- (void)link:(id)arg1 didGetLinkProbingStatus:(id)arg2;	// IMP=0x0000000100340310
- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;	// IMP=0x0000000100340060
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;	// IMP=0x000000010033fd78
- (void)link:(id)arg1 didCellularNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x000000010033fac8
- (void)link:(id)arg1 didWiFiNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x000000010033f818
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(_Bool)arg2 currentDefaultLinkID:(BOOL)arg3;	// IMP=0x000000010033f550
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(id)arg3 reason:(unsigned char)arg4;	// IMP=0x000000010033f1b4
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(id)arg3 localAttributes:(id)arg4 remoteAttributes:(id)arg5;	// IMP=0x000000010033ee7c
- (void)link:(id)arg1 didDisconnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010033e8d4
- (void)link:(id)arg1 didFailToConnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010033e4f8
- (void)link:(id)arg1 didConnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010033dfa8
- (void)link:(id)arg1 didReceiveSKEData:(id)arg2;	// IMP=0x000000010033dc8c
- (void)link:(id)arg1 hasSpaceAvailable:(_Bool)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x000000010033d9fc
- (void)link:(id)arg1 hostAwakeDidChange:(_Bool)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x000000010033d848
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_78c9ccae *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x000000010033d620
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010033d32c
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010033ccfc
- (void)setIsOnPhoneCall:(_Bool)arg1 forDeviceID:(id)arg2;	// IMP=0x000000010033c9f0
- (void)updateSessionParticipants:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 participants:(id)arg4;	// IMP=0x000000010033c66c
- (void)getSessionInfo:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 options:(id)arg4;	// IMP=0x000000010033bf14
- (void)setRemoteDeviceVersion:(id)arg1 version:(unsigned int)arg2;	// IMP=0x000000010033bbd4
- (void)flushLinkProbingStatus:(id)arg1 options:(id)arg2;	// IMP=0x000000010033b898
- (void)queryLinkProbingStatus:(id)arg1 options:(id)arg2;	// IMP=0x000000010033b55c
- (void)stopLinkProbing:(id)arg1 options:(id)arg2;	// IMP=0x000000010033b220
- (void)startLinkProbing:(id)arg1 options:(id)arg2;	// IMP=0x000000010033aee4
- (void)currentCellularSignalStrength:(id)arg1 signalRaw:(int *)arg2 signalStrength:(int *)arg3 signalGrade:(int *)arg4;	// IMP=0x000000010033abb4
- (void)setWiFiAssistState:(id)arg1 isWiFiAssistEnabled:(_Bool)arg2;	// IMP=0x000000010033a85c
- (void)stopKeepAlive:(id)arg1 linkIDs:(id)arg2;	// IMP=0x000000010033a520
- (void)updateProtocolQualityOfService:(id)arg1 linkID:(BOOL)arg2 isGood:(_Bool)arg3;	// IMP=0x000000010033a17c
- (void)dropIPPackets:(id)arg1 linkID:(BOOL)arg2 payloadArray:(id)arg3;	// IMP=0x0000000100339e14
- (void)setPacketNotificationFilter:(id)arg1 linkID:(BOOL)arg2 uniqueTag:(unsigned int)arg3 isEnabled:(_Bool)arg4;	// IMP=0x0000000100339a60
- (void)setDefaultUnderlyingLink:(id)arg1 linkID:(BOOL)arg2;	// IMP=0x0000000100339738
- (void)sendSKEData:(id)arg1 skeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100339134
- (void)setHasPendingAllocation:(_Bool)arg1 forIDSSession:(id)arg2;	// IMP=0x0000000100338d9c
- (void)setAcceptedRelaySession:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3;	// IMP=0x0000000100338a3c
- (void)handleAllocateRequestFailureForDevice:(id)arg1 requestID:(id)arg2 errorCode:(int)arg3;	// IMP=0x00000001003386d4
- (void)_removeAllocateRequestForDevice:(id)arg1 requestID:(id)arg2;	// IMP=0x00000001003385f4
- (void)_addAllocateRequestForDevice:(id)arg1 requestID:(id)arg2;	// IMP=0x0000000100338248
- (void)disconnectGlobalLinkForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100337e00
- (void)connectGlobalLinkForDevice:(id)arg1 sessionInfo:(id)arg2 connectReadyHandler:(CDUnknownBlockType)arg3 withLocalInterfacePreference:(int)arg4;	// IMP=0x00000001003370f4
- (void)stopGlobalLinkForDevice:(id)arg1;	// IMP=0x0000000100336730
- (void)startGlobalLinkForDevice:(id)arg1;	// IMP=0x0000000100335e10
- (void)_startAllocateRequestForDevice:(id)arg1;	// IMP=0x0000000100334cb8
- (void)stopBTDatagramLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x0000000100334a50
- (void)startBTDatagramLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x00000001003347e8
- (void)startConnectionForDevice:(id)arg1 isInitiator:(_Bool)arg2 remotePartyID:(id)arg3 useStunMICheck:(_Bool)arg4;	// IMP=0x0000000100334400
- (void)processRemoteConnectionDataForDevice:(id)arg1 remoteConnectionData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100333d6c
- (void)createConnectionDataForDevice:(id)arg1 localPartyID:(id)arg2 dataReadyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001003336b8
- (void)stopUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x0000000100333234
- (void)startUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x000000010033302c
- (void)stopLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 disconnectWP:(_Bool)arg3;	// IMP=0x0000000100332d2c
- (void)startLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x0000000100332814
- (void)setShouldStartBTLinkManager:(_Bool)arg1;	// IMP=0x000000010033252c
- (void)setRequireBT:(_Bool)arg1;	// IMP=0x00000001003322bc
- (void)triggerBTCorruptionRecoveryForCBUUID:(id)arg1;	// IMP=0x0000000100332128
- (_Bool)isConnectedToDeviceID:(id)arg1;	// IMP=0x0000000100332050
- (void)setLinkPreferences:(id)arg1;	// IMP=0x0000000100331fec
- (void)setPreferInfraWiFi:(_Bool)arg1;	// IMP=0x0000000100331750
- (void)deletePairedDevice:(id)arg1;	// IMP=0x0000000100330f50
- (void)connectPairedDevice:(id)arg1;	// IMP=0x0000000100330c60
- (void)addPairedDevice:(id)arg1;	// IMP=0x000000010033066c
- (void)obliterateConnectionInfo;	// IMP=0x000000010032fdd4
- (void)startLocalSetup;	// IMP=0x000000010032fbd0
- (void)flushBuffer:(unsigned long long)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010032fa60
- (unsigned long long)sendPacketBufferArray:(struct **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x000000010032f7d4
- (unsigned long long)_sendPacketBuffer:(CDStruct_78c9ccae *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 link:(id)arg4;	// IMP=0x000000010032f3a8
- (unsigned long long)sendPacketBuffer:(CDStruct_78c9ccae *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010032db00
- (void)_startCellularDataStatusListener:(_Bool)arg1;	// IMP=0x000000010032d694
- (void)_startNetworkInterfaceListener:(_Bool)arg1;	// IMP=0x000000010032d0e4
- (_Bool)_hasGlobalLinkConnectingOrConnected;	// IMP=0x000000010032cb00
- (void)_removeAllLinksForDeviceID:(id)arg1;	// IMP=0x000000010032c96c
- (void)_removeLinkForDeviceID:(id)arg1 linkKey:(id)arg2 verifyWithLink:(id)arg3;	// IMP=0x000000010032c55c
- (void)_bringUpWiFi:(_Bool)arg1;	// IMP=0x000000010032b6c0
- (id)_newGlobalLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 options:(id)arg3;	// IMP=0x000000010032a998
- (id)_newUDPGlobalLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x000000010032a474
- (id)_newUDPLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 IPVersion:(unsigned long long)arg3 port:(unsigned short)arg4;	// IMP=0x0000000100329d34
- (void)_setBestLinkToCurrent:(id)arg1;	// IMP=0x0000000100329170
- (id)_selectBestLink:(id)arg1;	// IMP=0x0000000100328f2c
- (void)_processLinkChangeForDefaultDeviceFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000100328308
- (_Bool)_startUDPLinkHandshakeForDefaultDevice:(_Bool)arg1 immediately:(_Bool)arg2;	// IMP=0x00000001003256c8
- (void)_handleWiFiAutoJoinStatusChange:(long long)arg1 WiFiSSID:(id)arg2;	// IMP=0x00000001003253fc
- (void)_clearWiFiAssociationPowerAssertion;	// IMP=0x00000001003251d0
- (void)_createWiFiAssociationPowerAssertion:(double)arg1;	// IMP=0x0000000100324f5c
- (void)_sendUDPLinkInterfaceAddresses:(id)arg1 toDeviceID:(id)arg2 isRetransmission:(_Bool)arg3 isReply:(_Bool)arg4;	// IMP=0x0000000100323ad0
- (void)_processLMCommandPacket:(CDStruct_78c9ccae *)arg1 fromLink:(id)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x0000000100321ef0
- (void)_nearbyChangedForDefaultDevice;	// IMP=0x0000000100321ba8
- (void)_connectivityChangedForDefaultDevice:(_Bool)arg1 isCloudConnected:(_Bool)arg2;	// IMP=0x0000000100320b7c
- (void)injectFakePacketInBTLink:(CDStruct_78c9ccae *)arg1 cbuuid:(id)arg2;	// IMP=0x0000000100320a38
- (void)_suspendBTLink:(_Bool)arg1 cbuuid:(id)arg2;	// IMP=0x0000000100320590
- (id)_linkKeyForLink:(id)arg1;	// IMP=0x0000000100320354
- (void)_createWiFiManagerClient;	// IMP=0x000000010031f2cc
- (void)_startReporter;	// IMP=0x000000010031e8bc
- (id)generateLinkReport:(double)arg1 forceReport:(_Bool)arg2;	// IMP=0x000000010031bf68
- (id)copyLinkStatsDict;	// IMP=0x000000010031baa8
- (void)triggerFixedInterfaceLinksDidConnect;	// IMP=0x000000010031b76c
- (void)start;	// IMP=0x000000010031b358
- (void)dealloc;	// IMP=0x000000010031af1c
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010031a574

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
