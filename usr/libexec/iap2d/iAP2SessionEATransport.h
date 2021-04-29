//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "iAP2EASession.h"

@class NSMutableArray, NSObject, NSRunLoop, NSString, NSThread;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface iAP2SessionEATransport : iAP2EASession
{
    NSMutableArray *_writeBufferArray;	// 48 = 0x30
    NSMutableArray *_readBufferArray;	// 56 = 0x38
    NSMutableArray *_dataForAppArray;	// 64 = 0x40
    NSMutableArray *_allReadBuffers;	// 72 = 0x48
    NSMutableArray *_allWriteBuffers;	// 80 = 0x50
    struct __CFSocket *_listenSockRef;	// 88 = 0x58
    struct __CFRunLoopSource *_listenSockRls;	// 96 = 0x60
    struct __CFSocket *_sockRef;	// 104 = 0x68
    struct __CFRunLoopSource *_sockRls;	// 112 = 0x70
    _Bool _sockReadDisabled;	// 120 = 0x78
    unsigned long long _deviceRegistryID;	// 128 = 0x80
    NSString *_protocolName;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_msgSerialQueue;	// 144 = 0x90
    NSObject<OS_dispatch_source> *_listenSource;	// 152 = 0x98
    NSObject<OS_dispatch_source> *_readSource;	// 160 = 0xa0
    unsigned int _eaProtocolConnect;	// 168 = 0xa8
    unsigned int _eaProtocolService;	// 172 = 0xac
    struct IONotificationPort *_eaProtocolNotificationPort;	// 176 = 0xb0
    NSThread *_runLoopThread;	// 184 = 0xb8
    NSRunLoop *_runLoop;	// 192 = 0xc0
}

- (unsigned int)_getEAConnect;	// IMP=0x0000000100058014
- (void)_writeSessionDataToApp;	// IMP=0x0000000100057e2c
- (void)_readCompleteFromThread:(id)arg1;	// IMP=0x0000000100057d7c
- (void)_readComplete:(id)arg1 readLength:(unsigned long long)arg2;	// IMP=0x0000000100057c74
- (void)_registerEAReadCB;	// IMP=0x0000000100057ad8
- (void)_writeComplete:(id)arg1 writeLength:(unsigned long long)arg2;	// IMP=0x0000000100057a2c
- (void)_writeEASessionData:(id)arg1;	// IMP=0x0000000100057958
- (void)_readSessionDataFromApp;	// IMP=0x00000001000577e0
- (id)_dequeueReadBuffer;	// IMP=0x0000000100057758
- (void)_enqueueReadBuffer:(id)arg1;	// IMP=0x0000000100057740
- (id)_dequeueWriteBuffer;	// IMP=0x00000001000576b8
- (void)_enqueueWriteBuffer:(id)arg1;	// IMP=0x0000000100057658
- (void)_cancelThread;	// IMP=0x0000000100057538
- (_Bool)closeDataPipes;	// IMP=0x0000000100057494
- (void)_openPipeFromAppOnThread;	// IMP=0x000000010005745c
- (void)_openPipeFromApp;	// IMP=0x000000010005740c
- (void)_openPipeToAppOnThread;	// IMP=0x0000000100057400
- (void)_openPipeToApp;	// IMP=0x00000001000573b0
- (void)_writeSocketCB:(struct __CFSocket *)arg1;	// IMP=0x00000001000573a4
- (void)_readSocketCB:(struct __CFSocket *)arg1;	// IMP=0x0000000100057398
- (void)_acceptSocketCB:(struct __CFSocket *)arg1 acceptedSock:(int)arg2;	// IMP=0x00000001000571d0
- (void)_registerListenSocket;	// IMP=0x00000001000570cc
- (void)_run;	// IMP=0x0000000100057060
- (void)dealloc;	// IMP=0x0000000100056f4c
- (void)shuttingDownSession;	// IMP=0x0000000100056f00
- (id)initWithClient:(id)arg1 connection:(id)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short *)arg4 deviceID:(unsigned long long)arg5 protocolName:(id)arg6;	// IMP=0x0000000100056b7c

@end

