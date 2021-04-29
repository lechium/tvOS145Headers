//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRLink.h"

#import "NEIKEv2ListenerDelegate-Protocol.h"
#import "NWNetworkOfInterestManagerDelegate-Protocol.h"

@class NEIKEv2Listener, NEIKEv2Session, NRAnalyticsCmpnLinkWiFi, NSNumber, NSString, NSUUID, NWAddressEndpoint, NWNetworkOfInterestManager;

@interface NRLinkWiFi : NRLink <NEIKEv2ListenerDelegate, NWNetworkOfInterestManagerDelegate>
{
    _Bool _ikeRetryBackoffScheduled;	// 72 = 0x48
    unsigned int _ikeRetryCounter;	// 76 = 0x4c
    unsigned int _startRetryCounter;	// 80 = 0x50
    unsigned int _setupIPsecRetryCounter;	// 84 = 0x54
    unsigned int _ikeAuthFailureBackoffCounter;	// 88 = 0x58
    unsigned int _symptomsAdvisoryCounter;	// 92 = 0x5c
    unsigned int _powerAssertion;	// 96 = 0x60
    int _notifyToken;	// 100 = 0x64
    NSNumber *_listenerPort;	// 104 = 0x68
    NWAddressEndpoint *_localOuterEndpoint;	// 112 = 0x70
    NWAddressEndpoint *_remoteOuterEndpoint;	// 120 = 0x78
    NEIKEv2Listener *_ikeListener;	// 128 = 0x80
    NEIKEv2Session *_ikeSessionClassC;	// 136 = 0x88
    NSString *_wifiInterfaceName;	// 144 = 0x90
    NWNetworkOfInterestManager *_symptomsNOIManager;	// 152 = 0x98
    NRAnalyticsCmpnLinkWiFi *_linkAnalytics;	// 160 = 0xa0
    NSUUID *_randomUUIDForWiFiAssertion;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000001000143b4
@property(retain, nonatomic) NSUUID *randomUUIDForWiFiAssertion; // @synthesize randomUUIDForWiFiAssertion=_randomUUIDForWiFiAssertion;
@property(retain, nonatomic) NRAnalyticsCmpnLinkWiFi *linkAnalytics; // @synthesize linkAnalytics=_linkAnalytics;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(nonatomic) unsigned int powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(retain, nonatomic) NWNetworkOfInterestManager *symptomsNOIManager; // @synthesize symptomsNOIManager=_symptomsNOIManager;
@property(nonatomic) unsigned int symptomsAdvisoryCounter; // @synthesize symptomsAdvisoryCounter=_symptomsAdvisoryCounter;
@property(nonatomic) _Bool ikeRetryBackoffScheduled; // @synthesize ikeRetryBackoffScheduled=_ikeRetryBackoffScheduled;
@property(nonatomic) unsigned int ikeAuthFailureBackoffCounter; // @synthesize ikeAuthFailureBackoffCounter=_ikeAuthFailureBackoffCounter;
@property(nonatomic) unsigned int setupIPsecRetryCounter; // @synthesize setupIPsecRetryCounter=_setupIPsecRetryCounter;
@property(nonatomic) unsigned int startRetryCounter; // @synthesize startRetryCounter=_startRetryCounter;
@property(nonatomic) unsigned int ikeRetryCounter; // @synthesize ikeRetryCounter=_ikeRetryCounter;
@property(retain, nonatomic) NSString *wifiInterfaceName; // @synthesize wifiInterfaceName=_wifiInterfaceName;
@property(retain, nonatomic) NEIKEv2Session *ikeSessionClassC; // @synthesize ikeSessionClassC=_ikeSessionClassC;
@property(retain, nonatomic) NEIKEv2Listener *ikeListener; // @synthesize ikeListener=_ikeListener;
@property(retain, nonatomic) NWAddressEndpoint *remoteOuterEndpoint; // @synthesize remoteOuterEndpoint=_remoteOuterEndpoint;
@property(retain, nonatomic) NWAddressEndpoint *localOuterEndpoint; // @synthesize localOuterEndpoint=_localOuterEndpoint;
@property(retain, nonatomic) NSNumber *listenerPort; // @synthesize listenerPort=_listenerPort;
- (_Bool)resume;	// IMP=0x0000000100014088
- (_Bool)suspend;	// IMP=0x0000000100013fa0
- (void)handleNotifyCode:(unsigned short)arg1 payload:(id)arg2;	// IMP=0x0000000100013e8c
- (_Bool)sendControlData:(id)arg1;	// IMP=0x0000000100013c6c
- (void)requestConfigurationForListener:(id)arg1 session:(id)arg2 sessionConfig:(id)arg3 childConfig:(id)arg4 validateAuthBlock:(CDUnknownBlockType)arg5 responseBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000010001342c
- (void)listener:(id)arg1 receivedNewSession:(id)arg2;	// IMP=0x0000000100013330
- (_Bool)setupIPsec;	// IMP=0x0000000100012d18
- (void)setupIKECallbacksClassC;	// IMP=0x00000001000128c4
- (void)scheduleIKERetryWithBackoff;	// IMP=0x0000000100012750
- (void)checkPeerAvailabilityWithForceAggressive:(_Bool)arg1;	// IMP=0x0000000100012550
- (void)didStopTrackingAllNOIs:(id)arg1;	// IMP=0x00000001000124a0
- (void)didStartTrackingNOI:(id)arg1;	// IMP=0x00000001000123e0
- (void)stopSymptomsMonitor;	// IMP=0x00000001000121b4
- (void)startSymptomsMonitor;	// IMP=0x0000000100011ef0
- (void)stopSymptomsNOIManagerTracking;	// IMP=0x0000000100011e2c
- (void)startSymptomsNOIManagerTracking;	// IMP=0x0000000100011c18
- (void)restartIKESessionClassC;	// IMP=0x0000000100011a70
- (void)setWiFiPowerAssertionState:(_Bool)arg1;	// IMP=0x0000000100011800
- (_Bool)setupVirtualInterface;	// IMP=0x000000010001134c
- (_Bool)cancelWithReason:(id)arg1;	// IMP=0x0000000100010f6c
- (_Bool)start;	// IMP=0x0000000100010d14
- (void)retrySetupIPsec:(int)arg1;	// IMP=0x0000000100010a48
- (void)retrySetupVirtualInterface;	// IMP=0x0000000100010860
- (unsigned short)metric;	// IMP=0x0000000100010858
- (id)copyDescriptionInner;	// IMP=0x0000000100010784
- (void)refreshCompanionProxyAgent;	// IMP=0x00000001000106fc
- (void)dealloc;	// IMP=0x000000010001067c
- (void)invalidateLink;	// IMP=0x00000001000104d0
- (void)setIsPrimary:(_Bool)arg1;	// IMP=0x000000010001049c
- (void)invalidateIKESessionClassC;	// IMP=0x0000000100010438
- (id)initLinkWithQueue:(id)arg1 linkDelegate:(id)arg2 nrUUID:(id)arg3 wifiInterfaceName:(id)arg4 localOuterEndpoint:(id)arg5 remoteOuterEndpoint:(id)arg6 listenerPort:(id)arg7;	// IMP=0x000000010001007c
- (id)copyStatusString;	// IMP=0x000000010000fed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

