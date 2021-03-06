//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IAPEAClient, iAP2Connection;

@interface iAP2EASession : NSObject
{
    IAPEAClient *_client;	// 8 = 0x8
    iAP2Connection *_connection;	// 16 = 0x10
    unsigned int _connectionID;	// 24 = 0x18
    unsigned char _protocolID;	// 28 = 0x1c
    unsigned short _sessionID;	// 30 = 0x1e
    int _listenSock;	// 32 = 0x20
    int _sock;	// 36 = 0x24
    _Bool _openPipeToAppAfterAccept;	// 40 = 0x28
    _Bool _openPipeFromAppAfterAccept;	// 41 = 0x29
    _Bool _isWirelessSession;	// 42 = 0x2a
}

+ (void)resetSessionIDCounter;	// IMP=0x00000001000686f0
@property(readonly, nonatomic) iAP2Connection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) unsigned char protocolID; // @synthesize protocolID=_protocolID;
@property(readonly, nonatomic) unsigned short sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) IAPEAClient *client; // @synthesize client=_client;
- (id)description;	// IMP=0x000000010006884c
- (int)_createListenSocket;	// IMP=0x00000001000686fc
- (_Bool)closeDataPipes;	// IMP=0x00000001000686a8
- (void)_openPipeFromApp;	// IMP=0x00000001000686a4
- (_Bool)openPipeFromApp;	// IMP=0x0000000100068670
- (void)_openPipeToApp;	// IMP=0x000000010006866c
- (_Bool)openPipeToApp;	// IMP=0x0000000100068638
- (void)dealloc;	// IMP=0x00000001000685e4
- (void)shuttingDownSession;	// IMP=0x000000010006845c
- (id)initWithClient:(id)arg1 connection:(id)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short *)arg4;	// IMP=0x00000001000680e8
- (id)init;	// IMP=0x00000001000680b0

@end

