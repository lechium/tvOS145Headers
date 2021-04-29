//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class ADPeerStreamConnection, IDSDeviceConnection, IDSService, NSDictionary, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADSharedPeerStreamConnection : NSObject <IDSServiceDelegate>
{
    _Bool _listener;	// 8 = 0x8
    NSHashTable *_delegates;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    IDSService *_idsService;	// 40 = 0x28
    ADPeerStreamConnection *_currentPeerStreamConnection;	// 48 = 0x30
    NSMutableDictionary *_metricsResponses;	// 56 = 0x38
    NSString *_wakeupMessageIdentifier;	// 64 = 0x40
    NSString *_currentStreamIdentifier;	// 72 = 0x48
    _Bool _gettingDeviceSocket;	// 80 = 0x50
    _Bool _socketForConnectionHasBeenVended;	// 81 = 0x51
    IDSDeviceConnection *_deviceConnection;	// 88 = 0x58
    int _sockfd;	// 96 = 0x60
    CDUnknownBlockType _socketCompletion;	// 104 = 0x68
    _Bool _prefersBTClassic;	// 112 = 0x70
    NSString *_productType;	// 120 = 0x78
    NSString *_buildVersion;	// 128 = 0x80
    _Bool _peerSupportsNamedStreams;	// 136 = 0x88
    NSMutableSet *_nearbyDeviceIdentifiers;	// 144 = 0x90
    double _lastSharedDataUpdateTimestamp;	// 152 = 0x98
    _Bool _optimisticRetriesAreBlocked;	// 160 = 0xa0
    _Bool _peerSupportsExtendedHeader;	// 161 = 0xa1
    double _lastNearbyDevicesChangedTimestamp;	// 168 = 0xa8
    double _lastIDSMessageSentTimestamp;	// 176 = 0xb0
    double _lastIDSMessageStartSendTimestamp;	// 184 = 0xb8
    double _lastWakeUpMessageDuration;	// 192 = 0xc0
    double _lastStreamEstablishmentDuration;	// 200 = 0xc8
    unsigned long long _lastOpenErrorCode;	// 208 = 0xd0
    NSDictionary *_lastIDSMetricsContext;	// 216 = 0xd8
    _Bool _lastIDSMessageSuccess;	// 224 = 0xe0
}

+ (id)sharedPeerStreamConnectionWithServiceIdentifier:(id)arg1 listener:(_Bool)arg2;	// IMP=0x0000000100054188
+ (id)_streamPairInterruptedError;	// IMP=0x0000000100053d20
+ (id)_deviceConnectionClosedErrorWithUnderlyingError:(id)arg1;	// IMP=0x0000000100053d0c
+ (id)_noDeviceError;	// IMP=0x0000000100053cf8
+ (id)_noNearbyPeerError;	// IMP=0x0000000100053ce4
+ (id)_errorWithCode:(long long)arg1 underylingError:(id)arg2;	// IMP=0x0000000100053bdc
- (void).cxx_destruct;	// IMP=0x00000001000587d0
- (_Bool)deviceIsNearby;	// IMP=0x0000000100058784
- (void)preheat;	// IMP=0x000000010005871c
- (void)_preheat;	// IMP=0x00000001000586a8
- (_Bool)peerSupportsExtendedHeader;	// IMP=0x00000001000586a0
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00000001000585b0
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x0000000100058150
- (void)_establishEagerStreamPair;	// IMP=0x0000000100058070
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0000000100057da4
- (void)_handleResponseProtobuf:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000100057c1c
- (void)_handleReestablishMessage:(id)arg1 context:(id)arg2;	// IMP=0x0000000100057a70
- (void)_handleGetMetricsMessage:(id)arg1 context:(id)arg2;	// IMP=0x0000000100057688
- (void)_handleWakeUpMessage:(id)arg1 context:(id)arg2;	// IMP=0x00000001000573b4
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100057198
- (void)_updatePairedDeviceInfo;	// IMP=0x0000000100056f64
- (void)getMetricsContext:(CDUnknownBlockType)arg1;	// IMP=0x0000000100056e74
- (id)_failureMetricsContextDictionary;	// IMP=0x0000000100056a20
- (void)_setPreferBTClassic:(_Bool)arg1;	// IMP=0x000000010005687c
- (void)setPreferBTClassic:(_Bool)arg1;	// IMP=0x0000000100056808
- (_Bool)hasNearbyPeer;	// IMP=0x0000000100056724
- (void)_requestStreamEstablishment;	// IMP=0x0000000100056438
- (void)_invokeMetricsCompletionWithMetrics:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000010005639c
- (void)getAWDMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005629c
- (void)getRemoteMetrics:(CDUnknownBlockType)arg1;	// IMP=0x0000000100055d54
- (void)_close;	// IMP=0x0000000100055c6c
- (void)closeForConnection:(id)arg1;	// IMP=0x0000000100055a08
- (void)_invokeSocketCompletionWithCurrentSocketOrError:(id)arg1;	// IMP=0x00000001000558d0
- (void)_getSocketFromDeviceForStreamIdentifier:(id)arg1;	// IMP=0x0000000100055078
- (void)_getSocketFromDevice;	// IMP=0x0000000100054ffc
- (void)getSocketForConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100054cfc
- (void)_initiateOptimisticEagerStreamFetchRetry;	// IMP=0x0000000100054b14
- (void)_wakeUpMessageFailedWithError:(id)arg1;	// IMP=0x00000001000548c0
- (_Bool)_wakeUpRemoteForStreamIdentifier:(id)arg1;	// IMP=0x00000001000545bc
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000100054524
- (void)addDelegate:(id)arg1;	// IMP=0x0000000100054434
- (id)_destination;	// IMP=0x0000000100054128
- (id)_account;	// IMP=0x00000001000540d0
- (id)_pairedDevice;	// IMP=0x0000000100053f68
- (id)_service;	// IMP=0x0000000100053f60
- (id)_initWithServiceIdentifier:(id)arg1 listener:(_Bool)arg2;	// IMP=0x0000000100053d34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

