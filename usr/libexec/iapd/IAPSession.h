//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IAPEAClient, NSMutableDictionary;

@interface IAPSession : NSObject
{
    NSMutableDictionary *_accessory;	// 8 = 0x8
    IAPEAClient *_client;	// 16 = 0x10
    unsigned int _connectionID;	// 24 = 0x18
    unsigned char _protocolID;	// 28 = 0x1c
    unsigned short _sessionID;	// 30 = 0x1e
    int _listenSock;	// 32 = 0x20
    struct __CFSocket *_listenSockRef;	// 40 = 0x28
    struct __CFRunLoopSource *_listenSockRls;	// 48 = 0x30
    int _sock;	// 56 = 0x38
    struct __CFSocket *_sockRef;	// 64 = 0x40
    struct __CFRunLoopSource *_sockRls;	// 72 = 0x48
    _Bool _openPipeToAppAfterAccept;	// 80 = 0x50
    _Bool _openPipeFromAppAfterAccept;	// 81 = 0x51
    _Bool _isWirelessSession;	// 82 = 0x52
}

+ (void)resetSessionIDCounter;	// IMP=0x0000000100013514
@property(readonly, nonatomic) unsigned char protocolID; // @synthesize protocolID=_protocolID;
@property(readonly, nonatomic) unsigned short sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) unsigned int connectionID; // @synthesize connectionID=_connectionID;
@property(readonly, nonatomic) IAPEAClient *client; // @synthesize client=_client;
- (id)description;	// IMP=0x000000010001391c
- (void)_writeSocketCB:(struct __CFSocket *)arg1;	// IMP=0x0000000100013918
- (void)_readSocketCB:(struct __CFSocket *)arg1;	// IMP=0x0000000100013914
- (void)_acceptSocketCB:(struct __CFSocket *)arg1 acceptedSock:(int)arg2;	// IMP=0x0000000100013758
- (void)_registerListenSocket;	// IMP=0x0000000100013520
- (_Bool)closeDataPipes;	// IMP=0x0000000100013420
- (void)_openPipeFromApp;	// IMP=0x000000010001341c
- (_Bool)openPipeFromApp;	// IMP=0x00000001000133d8
- (void)_openPipeToApp;	// IMP=0x00000001000133d4
- (_Bool)openPipeToApp;	// IMP=0x0000000100013390
- (void)dealloc;	// IMP=0x000000010001331c
- (void)shuttingDownSession;	// IMP=0x0000000100013120
- (id)initWithClient:(id)arg1 connectionID:(unsigned int)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short *)arg4;	// IMP=0x0000000100012d18
- (id)init;	// IMP=0x0000000100012ce0

@end
