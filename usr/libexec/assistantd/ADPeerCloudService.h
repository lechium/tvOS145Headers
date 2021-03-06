//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADRemoteExecution-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADPeerCloudService : NSObject <IDSServiceDelegate, ADRemoteExecution>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSService *_service;	// 16 = 0x10
    NSMutableDictionary *_completions;	// 24 = 0x18
    NSMapTable *_sharedDataObservers;	// 32 = 0x20
    NSMapTable *_sharedDataRequestObservers;	// 40 = 0x28
    NSMapTable *_remoteRequestObservers;	// 48 = 0x30
    NSString *_companionIdentifier;	// 56 = 0x38
    NSString *_airPlayRouteIdentifier;	// 64 = 0x40
    _Bool _airPlayRouteIdentifierNeedsUpdate;	// 72 = 0x48
    NSMutableSet *_deviceIdentifiers;	// 80 = 0x50
    NSMutableDictionary *_peerSharedData;	// 88 = 0x58
    _Bool _hasActiveAccount;	// 96 = 0x60
}

+ (id)_pointerToBlockMap;	// IMP=0x00000001001215a4
+ (id)_wrappedSendFailureError:(id)arg1;	// IMP=0x0000000100121490
+ (id)_timedOutError;	// IMP=0x0000000100121454
+ (id)_unexpectedMessageError;	// IMP=0x0000000100121418
+ (id)sharedInstance;	// IMP=0x00000001001213a0
- (void).cxx_destruct;	// IMP=0x0000000100128520
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0000000100128030
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0000000100127f38
- (void)_handleMessageResponse:(id)arg1 ofType:(unsigned short)arg2 orError:(id)arg3 fromID:(id)arg4 handler:(id)arg5;	// IMP=0x0000000100127a04
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0000000100127878
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100127188
- (_Bool)_handleRemoteExecution:(id)arg1 peer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100126c60
- (void)_notifyObserversOfRequestInfo:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001267b0
- (void)setRemoteRequestObserver:(CDUnknownBlockType)arg1 withHandle:(void *)arg2;	// IMP=0x0000000100126694
- (void)startListeningForRemote;	// IMP=0x0000000100126368
- (void)startRemoteSerialzedCommandExecution:(id)arg1 onPeer:(id)arg2 executionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100125be4
- (void)startRemoteExecution:(id)arg1 onPeer:(id)arg2 allowsRelay:(_Bool)arg3 throughProxyDevice:(id)arg4 executionContext:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100125a50
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001258ac
- (void)_startRemoteRequest:(id)arg1 onPeers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100125270
- (void)_notifyObserversOfSharedDataRequestFromPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100124dcc
- (void)setSharedDataRequestObserver:(CDUnknownBlockType)arg1 withHandler:(void *)arg2;	// IMP=0x0000000100124cb0
- (void)getSharedDataFromPeers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100124754
- (void)_notifyObserversOfSharedData:(id)arg1 fromPeer:(id)arg2;	// IMP=0x00000001001244dc
- (void)setSharedDataObserver:(CDUnknownBlockType)arg1 withHandle:(void *)arg2;	// IMP=0x0000000100124334
- (void)sendSharedData:(id)arg1 toPeers:(id)arg2;	// IMP=0x000000010012418c
- (void)_updateAirPlayRouteIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100123e70
- (void)_airplayRouteDidChange:(id)arg1;	// IMP=0x0000000100123d78
- (void)_companionIdentifierDidChangeNotification:(id)arg1;	// IMP=0x0000000100123bd0
- (void)_updateActiveAccountState;	// IMP=0x00000001001239d8
- (void)_setCachedSharedData:(id)arg1 forUniqueId:(id)arg2;	// IMP=0x000000010012392c
- (id)_cachedSharedDataForUniqueId:(id)arg1;	// IMP=0x00000001001238c0
- (id)cachedSharedDataForUniqueId:(id)arg1;	// IMP=0x000000010012377c
- (id)_peerInfoForAssistantId:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x00000001001236ac
- (id)peerInfoForAssistantId:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x000000010012355c
- (id)companionPeerUniqueIdentifier;	// IMP=0x000000010012344c
- (id)_companionPeer;	// IMP=0x00000001001233fc
- (id)companionPeer;	// IMP=0x0000000100123100
- (id)localPeerIDSDeviceUniqueIdentifier;	// IMP=0x00000001001230ec
- (id)_peerInfoForIDSDeviceUniqueIdentifier:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x0000000100122e9c
- (id)peerInfoForIDSDeviceUniqueIdentifier:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x0000000100122d60
- (id)_uniqueIdentifierForPeer:(id)arg1;	// IMP=0x0000000100122b94
- (id)uniqueIdentifierForPeer:(id)arg1;	// IMP=0x0000000100122a6c
- (id)peers;	// IMP=0x0000000100122958
- (id)_peers;	// IMP=0x0000000100122714
- (_Bool)hasActiveAccount;	// IMP=0x000000010012270c
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 originalRequestId:(id)arg3 toPeers:(id)arg4 responseType:(unsigned short)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100121fe4
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 toPeers:(id)arg3 responseType:(unsigned short)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100121fc8
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 toPeers:(id)arg3;	// IMP=0x0000000100121fac
- (id)_destinationsForPeers:(id)arg1;	// IMP=0x0000000100121c2c
- (id)_service;	// IMP=0x0000000100121c24
- (id)_init;	// IMP=0x00000001001215d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

