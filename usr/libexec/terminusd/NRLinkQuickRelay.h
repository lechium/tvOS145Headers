//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRLink.h"

#import "IDSServiceDelegate-Protocol.h"
#import "IDSSessionDelegate-Protocol.h"
#import "NEIKEv2ListenerDelegate-Protocol.h"
#import "NEIKEv2PacketDelegate-Protocol.h"
#import "NENexusDelegate-Protocol.h"

@class IDSService, IDSSession, NEIKEv2Listener, NEIKEv2Session, NEIPsecNexus, NRAnalyticsCmpnLinkQuickRelay, NSDate, NSMutableArray, NSObject, NSString, NWDatagramConnection;
@protocol NEIKEv2PacketReceiver, OS_dispatch_group, OS_dispatch_source, OS_nw_path_evaluator;

@interface NRLinkQuickRelay : NRLink <IDSServiceDelegate, IDSSessionDelegate, NENexusDelegate, NEIKEv2PacketDelegate, NEIKEv2ListenerDelegate>
{
    _Bool _dNexusReadSourceSuspended;	// 72 = 0x48
    _Bool _dNexusWriteSourceSuspended;	// 73 = 0x49
    _Bool _hasPendingInputAvailable;	// 74 = 0x4a
    _Bool _idsSessionStarted;	// 75 = 0x4b
    _Bool _invitationInProgress;	// 76 = 0x4c
    _Bool _isResponder;	// 77 = 0x4d
    _Bool _addedConnectionStateObserver;	// 78 = 0x4e
    _Bool _currentlyCreatingIDSSession;	// 79 = 0x4f
    _Bool _idsSessionIsIncoming;	// 80 = 0x50
    unsigned char _invitationRetryCounter;	// 81 = 0x51
    unsigned char _ikeClassDRetryCounter;	// 82 = 0x52
    unsigned char _ikeClassCRetryCounter;	// 83 = 0x53
    _Bool _resumeRequested;	// 84 = 0x54
    _Bool _shouldCancelOnSuspend;	// 85 = 0x55
    _Bool _ikeSessionTimeoutScheduledOnce;	// 86 = 0x56
    IDSService *_idsService;	// 88 = 0x58
    IDSSession *_idsSession;	// 96 = 0x60
    NSString *_idsDestination;	// 104 = 0x68
    NSDate *_idsSessionStartTime;	// 112 = 0x70
    NWDatagramConnection *_connection;	// 120 = 0x78
    NEIKEv2Listener *_ikeListener;	// 128 = 0x80
    NEIKEv2Session *_ikeSessionClassD;	// 136 = 0x88
    NEIKEv2Session *_ikeSessionClassC;	// 144 = 0x90
    NEIPsecNexus *_packetNexus;	// 152 = 0x98
    id <NEIKEv2PacketReceiver> _ikePacketReceiver;	// 160 = 0xa0
    struct channel *_nexusChannel;	// 168 = 0xa8
    struct channel_ring_desc *_nexusInputRing;	// 176 = 0xb0
    struct channel_ring_desc *_nexusOutputRing;	// 184 = 0xb8
    NSObject<OS_dispatch_source> *_dNexusReadSource;	// 192 = 0xc0
    NSObject<OS_dispatch_source> *_dNexusWriteSource;	// 200 = 0xc8
    NSObject<OS_dispatch_group> *_nexusGroup;	// 208 = 0xd0
    NSMutableArray *_receivedDatagrams;	// 216 = 0xd8
    NSDate *_ikeClassDEstablishedTime;	// 224 = 0xe0
    NSDate *_ikeClassCEstablishedTime;	// 232 = 0xe8
    unsigned long long _sessionInvitationCounter;	// 240 = 0xf0
    unsigned long long _lastRecordedSessionInvitationCounter;	// 248 = 0xf8
    unsigned long long _bytesToQRBeforeSend;	// 256 = 0x100
    unsigned long long _bytesToQRSent;	// 264 = 0x108
    unsigned long long _bytesToQRSendFailed;	// 272 = 0x110
    unsigned long long _bytesFromQR;	// 280 = 0x118
    unsigned long long _lastRecordedBytesToQRSent;	// 288 = 0x120
    unsigned long long _lastRecordedBytesFromQR;	// 296 = 0x128
    unsigned long long _bytesFromNexus;	// 304 = 0x130
    unsigned long long _bytesToNexus;	// 312 = 0x138
    unsigned long long _nexusInputAvailableCount;	// 320 = 0x140
    unsigned long long _nexusOutputAvailableCount;	// 328 = 0x148
    unsigned long long _sentIKEv2PointToPoint;	// 336 = 0x150
    unsigned long long _recvIKEv2PointToPoint;	// 344 = 0x158
    unsigned long long _sentUncompressedIP;	// 352 = 0x160
    unsigned long long _sentEncapsulated6LoWPAN;	// 360 = 0x168
    unsigned long long _sentKnownIPv6Hdr_ESP;	// 368 = 0x170
    unsigned long long _sentKnownIPv6Hdr_ESP_ECT0;	// 376 = 0x178
    unsigned long long _sentKnownIPv6Hdr_ESP_ClassC;	// 384 = 0x180
    unsigned long long _sentKnownIPv6Hdr_ESP_ClassC_ECT0;	// 392 = 0x188
    unsigned long long _sentKnownIPv6Hdr_TCP;	// 400 = 0x190
    unsigned long long _sentKnownIPv6Hdr_TCP_ECT0;	// 408 = 0x198
    unsigned long long _recvUncompressedIP;	// 416 = 0x1a0
    unsigned long long _recvEncapsulated6LoWPAN;	// 424 = 0x1a8
    unsigned long long _recvKnownIPv6Hdr_ESP;	// 432 = 0x1b0
    unsigned long long _recvKnownIPv6Hdr_ESP_ECT0;	// 440 = 0x1b8
    unsigned long long _recvKnownIPv6Hdr_ESP_ClassC;	// 448 = 0x1c0
    unsigned long long _recvKnownIPv6Hdr_ESP_ClassC_ECT0;	// 456 = 0x1c8
    unsigned long long _recvKnownIPv6Hdr_TCP;	// 464 = 0x1d0
    unsigned long long _recvKnownIPv6Hdr_TCP_ECT0;	// 472 = 0x1d8
    NSObject<OS_dispatch_source> *_linkIdleTimerSource;	// 480 = 0x1e0
    NSObject<OS_dispatch_source> *_ikeSessionTimeoutSource;	// 488 = 0x1e8
    NSMutableArray *_receivedIKEPackets;	// 496 = 0x1f0
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;	// 504 = 0x1f8
    NRAnalyticsCmpnLinkQuickRelay *_linkAnalytics;	// 512 = 0x200
    struct in6_addr _localAddrClassD;	// 520 = 0x208
    struct in6_addr _remoteAddrClassD;	// 536 = 0x218
}

- (void).cxx_destruct;	// IMP=0x000000010001f554
@property(nonatomic) _Bool ikeSessionTimeoutScheduledOnce; // @synthesize ikeSessionTimeoutScheduledOnce=_ikeSessionTimeoutScheduledOnce;
@property(nonatomic) _Bool shouldCancelOnSuspend; // @synthesize shouldCancelOnSuspend=_shouldCancelOnSuspend;
@property(retain, nonatomic) NRAnalyticsCmpnLinkQuickRelay *linkAnalytics; // @synthesize linkAnalytics=_linkAnalytics;
@property(nonatomic) _Bool resumeRequested; // @synthesize resumeRequested=_resumeRequested;
@property(nonatomic) struct in6_addr remoteAddrClassD; // @synthesize remoteAddrClassD=_remoteAddrClassD;
@property(nonatomic) struct in6_addr localAddrClassD; // @synthesize localAddrClassD=_localAddrClassD;
@property(retain, nonatomic) NSObject<OS_nw_path_evaluator> *pathEvaluator; // @synthesize pathEvaluator=_pathEvaluator;
@property(nonatomic) unsigned char ikeClassCRetryCounter; // @synthesize ikeClassCRetryCounter=_ikeClassCRetryCounter;
@property(nonatomic) unsigned char ikeClassDRetryCounter; // @synthesize ikeClassDRetryCounter=_ikeClassDRetryCounter;
@property(nonatomic) unsigned char invitationRetryCounter; // @synthesize invitationRetryCounter=_invitationRetryCounter;
@property(retain, nonatomic) NSMutableArray *receivedIKEPackets; // @synthesize receivedIKEPackets=_receivedIKEPackets;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *ikeSessionTimeoutSource; // @synthesize ikeSessionTimeoutSource=_ikeSessionTimeoutSource;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *linkIdleTimerSource; // @synthesize linkIdleTimerSource=_linkIdleTimerSource;
@property(nonatomic) _Bool idsSessionIsIncoming; // @synthesize idsSessionIsIncoming=_idsSessionIsIncoming;
@property(nonatomic) _Bool currentlyCreatingIDSSession; // @synthesize currentlyCreatingIDSSession=_currentlyCreatingIDSSession;
@property(nonatomic) _Bool addedConnectionStateObserver; // @synthesize addedConnectionStateObserver=_addedConnectionStateObserver;
@property(nonatomic) _Bool isResponder; // @synthesize isResponder=_isResponder;
@property(nonatomic) unsigned long long recvKnownIPv6Hdr_TCP_ECT0; // @synthesize recvKnownIPv6Hdr_TCP_ECT0=_recvKnownIPv6Hdr_TCP_ECT0;
@property(nonatomic) unsigned long long recvKnownIPv6Hdr_TCP; // @synthesize recvKnownIPv6Hdr_TCP=_recvKnownIPv6Hdr_TCP;
@property(nonatomic) unsigned long long recvKnownIPv6Hdr_ESP_ClassC_ECT0; // @synthesize recvKnownIPv6Hdr_ESP_ClassC_ECT0=_recvKnownIPv6Hdr_ESP_ClassC_ECT0;
@property(nonatomic) unsigned long long recvKnownIPv6Hdr_ESP_ClassC; // @synthesize recvKnownIPv6Hdr_ESP_ClassC=_recvKnownIPv6Hdr_ESP_ClassC;
@property(nonatomic) unsigned long long recvKnownIPv6Hdr_ESP_ECT0; // @synthesize recvKnownIPv6Hdr_ESP_ECT0=_recvKnownIPv6Hdr_ESP_ECT0;
@property(nonatomic) unsigned long long recvKnownIPv6Hdr_ESP; // @synthesize recvKnownIPv6Hdr_ESP=_recvKnownIPv6Hdr_ESP;
@property(nonatomic) unsigned long long recvEncapsulated6LoWPAN; // @synthesize recvEncapsulated6LoWPAN=_recvEncapsulated6LoWPAN;
@property(nonatomic) unsigned long long recvUncompressedIP; // @synthesize recvUncompressedIP=_recvUncompressedIP;
@property(nonatomic) unsigned long long sentKnownIPv6Hdr_TCP_ECT0; // @synthesize sentKnownIPv6Hdr_TCP_ECT0=_sentKnownIPv6Hdr_TCP_ECT0;
@property(nonatomic) unsigned long long sentKnownIPv6Hdr_TCP; // @synthesize sentKnownIPv6Hdr_TCP=_sentKnownIPv6Hdr_TCP;
@property(nonatomic) unsigned long long sentKnownIPv6Hdr_ESP_ClassC_ECT0; // @synthesize sentKnownIPv6Hdr_ESP_ClassC_ECT0=_sentKnownIPv6Hdr_ESP_ClassC_ECT0;
@property(nonatomic) unsigned long long sentKnownIPv6Hdr_ESP_ClassC; // @synthesize sentKnownIPv6Hdr_ESP_ClassC=_sentKnownIPv6Hdr_ESP_ClassC;
@property(nonatomic) unsigned long long sentKnownIPv6Hdr_ESP_ECT0; // @synthesize sentKnownIPv6Hdr_ESP_ECT0=_sentKnownIPv6Hdr_ESP_ECT0;
@property(nonatomic) unsigned long long sentKnownIPv6Hdr_ESP; // @synthesize sentKnownIPv6Hdr_ESP=_sentKnownIPv6Hdr_ESP;
@property(nonatomic) unsigned long long sentEncapsulated6LoWPAN; // @synthesize sentEncapsulated6LoWPAN=_sentEncapsulated6LoWPAN;
@property(nonatomic) unsigned long long sentUncompressedIP; // @synthesize sentUncompressedIP=_sentUncompressedIP;
@property(nonatomic) unsigned long long recvIKEv2PointToPoint; // @synthesize recvIKEv2PointToPoint=_recvIKEv2PointToPoint;
@property(nonatomic) unsigned long long sentIKEv2PointToPoint; // @synthesize sentIKEv2PointToPoint=_sentIKEv2PointToPoint;
@property(nonatomic) unsigned long long nexusOutputAvailableCount; // @synthesize nexusOutputAvailableCount=_nexusOutputAvailableCount;
@property(nonatomic) unsigned long long nexusInputAvailableCount; // @synthesize nexusInputAvailableCount=_nexusInputAvailableCount;
@property(nonatomic) unsigned long long bytesToNexus; // @synthesize bytesToNexus=_bytesToNexus;
@property(nonatomic) unsigned long long bytesFromNexus; // @synthesize bytesFromNexus=_bytesFromNexus;
@property(nonatomic) unsigned long long lastRecordedBytesFromQR; // @synthesize lastRecordedBytesFromQR=_lastRecordedBytesFromQR;
@property(nonatomic) unsigned long long lastRecordedBytesToQRSent; // @synthesize lastRecordedBytesToQRSent=_lastRecordedBytesToQRSent;
@property(nonatomic) unsigned long long bytesFromQR; // @synthesize bytesFromQR=_bytesFromQR;
@property(nonatomic) unsigned long long bytesToQRSendFailed; // @synthesize bytesToQRSendFailed=_bytesToQRSendFailed;
@property(nonatomic) unsigned long long bytesToQRSent; // @synthesize bytesToQRSent=_bytesToQRSent;
@property(nonatomic) unsigned long long bytesToQRBeforeSend; // @synthesize bytesToQRBeforeSend=_bytesToQRBeforeSend;
@property(nonatomic) unsigned long long lastRecordedSessionInvitationCounter; // @synthesize lastRecordedSessionInvitationCounter=_lastRecordedSessionInvitationCounter;
@property(nonatomic) unsigned long long sessionInvitationCounter; // @synthesize sessionInvitationCounter=_sessionInvitationCounter;
@property(nonatomic) _Bool invitationInProgress; // @synthesize invitationInProgress=_invitationInProgress;
@property(nonatomic) _Bool idsSessionStarted; // @synthesize idsSessionStarted=_idsSessionStarted;
@property(retain, nonatomic) NSDate *ikeClassCEstablishedTime; // @synthesize ikeClassCEstablishedTime=_ikeClassCEstablishedTime;
@property(retain, nonatomic) NSDate *ikeClassDEstablishedTime; // @synthesize ikeClassDEstablishedTime=_ikeClassDEstablishedTime;
@property(nonatomic) _Bool hasPendingInputAvailable; // @synthesize hasPendingInputAvailable=_hasPendingInputAvailable;
@property(retain, nonatomic) NSMutableArray *receivedDatagrams; // @synthesize receivedDatagrams=_receivedDatagrams;
@property(nonatomic) _Bool dNexusWriteSourceSuspended; // @synthesize dNexusWriteSourceSuspended=_dNexusWriteSourceSuspended;
@property(nonatomic) _Bool dNexusReadSourceSuspended; // @synthesize dNexusReadSourceSuspended=_dNexusReadSourceSuspended;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *nexusGroup; // @synthesize nexusGroup=_nexusGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dNexusWriteSource; // @synthesize dNexusWriteSource=_dNexusWriteSource;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dNexusReadSource; // @synthesize dNexusReadSource=_dNexusReadSource;
@property(nonatomic) struct channel_ring_desc *nexusOutputRing; // @synthesize nexusOutputRing=_nexusOutputRing;
@property(nonatomic) struct channel_ring_desc *nexusInputRing; // @synthesize nexusInputRing=_nexusInputRing;
@property(nonatomic) struct channel *nexusChannel; // @synthesize nexusChannel=_nexusChannel;
@property(retain, nonatomic) id <NEIKEv2PacketReceiver> ikePacketReceiver; // @synthesize ikePacketReceiver=_ikePacketReceiver;
@property(retain, nonatomic) NEIPsecNexus *packetNexus; // @synthesize packetNexus=_packetNexus;
@property(retain, nonatomic) NEIKEv2Session *ikeSessionClassC; // @synthesize ikeSessionClassC=_ikeSessionClassC;
@property(retain, nonatomic) NEIKEv2Session *ikeSessionClassD; // @synthesize ikeSessionClassD=_ikeSessionClassD;
@property(retain, nonatomic) NEIKEv2Listener *ikeListener; // @synthesize ikeListener=_ikeListener;
@property(retain, nonatomic) NWDatagramConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSDate *idsSessionStartTime; // @synthesize idsSessionStartTime=_idsSessionStartTime;
@property(retain, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(retain, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;	// IMP=0x000000010001ea38
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;	// IMP=0x000000010001e860
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;	// IMP=0x000000010001e688
- (void)session:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x000000010001e430
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x000000010001df10
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010001de70
- (void)sessionStarted:(id)arg1;	// IMP=0x000000010001d8a0
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5;	// IMP=0x000000010001d168
- (void)requestConfigurationForListener:(id)arg1 session:(id)arg2 sessionConfig:(id)arg3 childConfig:(id)arg4 validateAuthBlock:(CDUnknownBlockType)arg5 responseBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000010001c5e0
- (void)listener:(id)arg1 receivedNewSession:(id)arg2;	// IMP=0x000000010001c4bc
- (void)handleRequestToActivateNexus:(id)arg1 fromFlow:(id)arg2;	// IMP=0x000000010001c4b8
- (void)acceptNewFlow:(id)arg1 fromNexus:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001c4a8
- (void)setPacketReceiver:(id)arg1;	// IMP=0x000000010001c218
- (_Bool)sendPacketData:(id)arg1;	// IMP=0x000000010001bdd4
- (void)readDatagramFromSession;	// IMP=0x000000010001bb08
- (_Bool)writeDatagramToSession:(id)arg1;	// IMP=0x000000010001b738
- (_Bool)sendControlData:(id)arg1;	// IMP=0x000000010001b4a4
- (void)setupIPsec;	// IMP=0x000000010001afb4
- (void)setupIPsecClassC;	// IMP=0x000000010001af08
- (void)setupIPsecClassD;	// IMP=0x000000010001ae5c
- (void)setupIKEListener;	// IMP=0x000000010001acec
- (void)setupIKEInitiatorSessionForClass:(unsigned char)arg1;	// IMP=0x000000010001a7d0
- (void)setupIKECallbacksForClass:(unsigned char)arg1;	// IMP=0x000000010001a284
- (void)restartIKESessionForClass:(unsigned char)arg1;	// IMP=0x000000010001a0fc
- (void)invalidateIKESessionForClass:(unsigned char)arg1;	// IMP=0x000000010001a090
- (id *)ikeSessionPointerForDataProtectionClass:(unsigned char)arg1;	// IMP=0x0000000100019f4c
- (void)handleIKEConnected;	// IMP=0x0000000100019db0
- (void)ikeSessionTimeoutSourceDisarm;	// IMP=0x0000000100019d24
- (void)armIKELinkTimeout;	// IMP=0x0000000100019b44
- (void)handleLinkIdleTimeout;	// IMP=0x0000000100019a48
- (void)armLinkIdleTimer;	// IMP=0x0000000100019860
- (void)linkIdleTimerDisarm;	// IMP=0x00000001000197d4
- (_Bool)setupNexus;	// IMP=0x000000010001839c
- (void)sendInvitation;	// IMP=0x00000001000181c4
- (void)reportEventToPowerLog:(int)arg1 withSessionID:(id)arg2;	// IMP=0x00000001000180d4
- (void)invalidateIDSSession;	// IMP=0x0000000100017db0
- (void)invalidateConnection;	// IMP=0x0000000100017c5c
- (void)setupIDSSessionAndSendInvitation;	// IMP=0x0000000100017890
- (_Bool)setupIDSService;	// IMP=0x00000001000176ac
- (_Bool)resume;	// IMP=0x00000001000174b4
- (_Bool)suspend;	// IMP=0x0000000100017028
- (_Bool)start;	// IMP=0x0000000100016df8
- (id)copyStatusString;	// IMP=0x00000001000162c4
- (unsigned short)metric;	// IMP=0x00000001000162bc
- (_Bool)cancelWithReason:(id)arg1;	// IMP=0x0000000100015fd4
- (void)invalidateLink;	// IMP=0x0000000100015b38
- (void)dealloc;	// IMP=0x0000000100015a9c
- (id)initLinkWithQueue:(id)arg1 linkDelegate:(id)arg2 nrUUID:(id)arg3;	// IMP=0x00000001000157f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

