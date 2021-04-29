//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, PCSDevice, PCSIDSTransport, PCSKeyClient, PCSKeySyncing;

@interface PCSPeerSyncing : NSObject
{
    _Bool _pendingRequest;	// 8 = 0x8
    int _clientVersion;	// 12 = 0xc
    PCSDevice *_device;	// 16 = 0x10
    PCSIDSTransport *_transport;	// 24 = 0x18
    NSData *_keys;	// 32 = 0x20
    PCSKeyClient *_client;	// 40 = 0x28
    PCSKeySyncing *_syncingManager;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010000d520
@property(retain) PCSKeySyncing *syncingManager; // @synthesize syncingManager=_syncingManager;
@property(retain) PCSKeyClient *client; // @synthesize client=_client;
@property int clientVersion; // @synthesize clientVersion=_clientVersion;
@property _Bool pendingRequest; // @synthesize pendingRequest=_pendingRequest;
@property(retain) NSData *keys; // @synthesize keys=_keys;
@property(retain) PCSIDSTransport *transport; // @synthesize transport=_transport;
@property(retain) PCSDevice *device; // @synthesize device=_device;
- (void)handleIncomingMessage:(id)arg1;	// IMP=0x000000010000d060
- (void)sendReply:(int)arg1 error:(id)arg2 toMessage:(id)arg3;	// IMP=0x000000010000ce88
- (void)keyFailure:(id)arg1;	// IMP=0x000000010000cce8
- (void)setPeerCircleStatus:(_Bool)arg1;	// IMP=0x000000010000cbc8
- (void)setPeeriCDPStatus:(_Bool)arg1;	// IMP=0x000000010000caa8
- (void)haveKeys:(id)arg1;	// IMP=0x000000010000c804
- (void)sendKeys;	// IMP=0x000000010000bf8c
- (void)sendCurrentKeys:(id)arg1;	// IMP=0x000000010000bbbc
- (void)sendSomeKeys:(id)arg1 dsid:(id)arg2;	// IMP=0x000000010000b23c
- (void)sendKeysOld;	// IMP=0x000000010000aaa8
- (void)checkSyncing:(_Bool)arg1;	// IMP=0x0000000100009b98
- (_Bool)checkHashWithRateLimit:(id)arg1;	// IMP=0x0000000100009ac8
- (_Bool)ratelimitClientSyncing;	// IMP=0x0000000100009aa4
- (double)timeUntilSyncing;	// IMP=0x0000000100009970
- (double)checkRatelimit:(double)arg1;	// IMP=0x00000001000098ac
- (void)sendiCDPStatus:(_Bool)arg1 circleStatus:(_Bool)arg2 handleReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009718
- (void)sendKeys:(id)arg1 dsid:(id)arg2 handleReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000950c
- (void)sendCurrents:(id)arg1 dsid:(id)arg2 handleReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009300
- (void)sendCommand:(unsigned int)arg1 data:(id)arg2 dsid:(id)arg3 handleReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100009084
- (void)updateLastSeen;	// IMP=0x0000000100008fa8
- (id)uuid;	// IMP=0x0000000100008f54
- (id)initWithDevice:(id)arg1 syncingManager:(id)arg2;	// IMP=0x0000000100008e04

@end

