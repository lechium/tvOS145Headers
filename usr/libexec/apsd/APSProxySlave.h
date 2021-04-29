//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSIDSProxyManagerListener-Protocol.h"
#import "APSOutgoingMessageOriginator-Protocol.h"

@class APSEnvironment, APSIDSProxyManager, APSTopicGroup, NSData, NSDate, NSMutableSet, NSString;
@protocol APSProxySlaveDelegate;

@interface APSProxySlave : NSObject <APSIDSProxyManagerListener, APSOutgoingMessageOriginator>
{
    APSIDSProxyManager *_proxyManager;	// 8 = 0x8
    NSString *_guid;	// 16 = 0x10
    APSEnvironment *_environment;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
    _Bool _invalidated;	// 33 = 0x21
    unsigned long long _state[2];	// 40 = 0x28
    NSDate *_lastPresence;	// 56 = 0x38
    NSData *_certificate;	// 64 = 0x40
    NSData *_nonce;	// 72 = 0x48
    NSData *_signature;	// 80 = 0x50
    NSString *_hwVersion;	// 88 = 0x58
    NSString *_swVersion;	// 96 = 0x60
    NSString *_swBuild;	// 104 = 0x68
    APSTopicGroup *_topics;	// 112 = 0x70
    NSData *_token;	// 120 = 0x78
    NSMutableSet *_pendingMessageGUIDs;	// 128 = 0x80
    id <APSProxySlaveDelegate> _delegate;	// 136 = 0x88
    _Bool _isConnected;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000100061d0c
@property(copy, nonatomic) NSString *hwVersion; // @synthesize hwVersion=_hwVersion;
@property(copy, nonatomic) NSString *swBuild; // @synthesize swBuild=_swBuild;
@property(copy, nonatomic) NSString *swVersion; // @synthesize swVersion=_swVersion;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalidated;
@property(readonly, retain, nonatomic) NSDate *lastPresence; // @synthesize lastPresence=_lastPresence;
@property(readonly, retain, nonatomic) APSTopicGroup *topics; // @synthesize topics=_topics;
@property(copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSData *certificate; // @synthesize certificate=_certificate;
@property(copy, nonatomic) NSData *publicToken; // @synthesize publicToken=_token;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) APSIDSProxyManager *proxyManager; // @synthesize proxyManager=_proxyManager;
@property(nonatomic) __weak id <APSProxySlaveDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSString *tokenName;
- (void)handleAppTokenGenerateResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000100061ae4
- (void)handleResult:(id)arg1 forSendingOutgoingMessage:(id)arg2;	// IMP=0x0000000100061854
- (void)proxyManager:(id)arg1 messageTracingWithStatus:(int)arg2 topic:(id)arg3 tracingUUID:(id)arg4 token:(id)arg5 guid:(id)arg6 environmentName:(id)arg7;	// IMP=0x00000001000615f8
- (void)proxyManager:(id)arg1 appTokenGenerateWithTopicHash:(id)arg2 baseToken:(id)arg3 appId:(id)arg4 guid:(id)arg5 environmentName:(id)arg6;	// IMP=0x00000001000613d8
- (void)proxyManager:(id)arg1 sendReversePush:(id)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x000000010006131c
- (void)proxyManager:(id)arg1 receivedPushAckResponse:(id)arg2 messageId:(id)arg3 token:(id)arg4 interface:(id)arg5 generation:(id)arg6 guid:(id)arg7 environmentName:(id)arg8;	// IMP=0x00000001000610bc
- (void)proxyManager:(id)arg1 inactiveReceivedForGuid:(id)arg2 environmentName:(id)arg3;	// IMP=0x0000000100060eb0
- (void)proxyManager:(id)arg1 incomingFilterForGuid:(id)arg2 environmentName:(id)arg3 enabledTopics:(id)arg4 ignoredTopics:(id)arg5 opportunisticTopics:(id)arg6 nonWakingTopics:(id)arg7;	// IMP=0x0000000100060b14
- (void)proxyManager:(id)arg1 isNearbyChanged:(_Bool)arg2;	// IMP=0x0000000100060a2c
- (void)setMessageSize:(unsigned long long)arg1;	// IMP=0x00000001000609c8
- (void)setLargeMessageSize:(unsigned long long)arg1;	// IMP=0x0000000100060964
- (void)invalidate;	// IMP=0x0000000100060890
- (_Bool)_setToken:(id)arg1;	// IMP=0x00000001000604b0
- (unsigned long long)stateOnInterface:(long long)arg1;	// IMP=0x00000001000604a4
- (void)setState:(unsigned long long)arg1 onInterface:(long long)arg2;	// IMP=0x00000001000602e4
- (void)_adjustConnectedState;	// IMP=0x00000001000601a4
- (_Bool)isConnectedOnInterface:(long long)arg1;	// IMP=0x0000000100060190
@property(readonly, nonatomic) _Bool needsToDisconnect;
- (_Bool)needsToDisconnectOnInterface:(long long)arg1;	// IMP=0x000000010006010c
@property(readonly, nonatomic) _Bool needsToConnect;
- (_Bool)needsToConnectOnInterface:(long long)arg1;	// IMP=0x0000000100060090
- (void)receivedPush:(id)arg1 onInterface:(long long)arg2 withGeneration:(unsigned long long)arg3;	// IMP=0x000000010005fff4
- (void)handleExpiredNonceWithServerTime:(id)arg1;	// IMP=0x000000010005ff70
- (void)incomingPresenceWithCertificate:(id)arg1 nonce:(id)arg2 signature:(id)arg3 token:(id)arg4 hwVersion:(id)arg5 swVersion:(id)arg6 swBuild:(id)arg7;	// IMP=0x000000010005fd2c
- (void)dealloc;	// IMP=0x000000010005fc54
- (id)initWithEnvironment:(id)arg1 guid:(id)arg2;	// IMP=0x000000010005fba4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

