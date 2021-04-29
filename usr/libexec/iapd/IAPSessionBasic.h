//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IAPSession.h"

@class NSCondition, NSMutableData, NSThread;

@interface IAPSessionBasic : IAPSession
{
    NSCondition *_sessionPacketsFromAppCondition;	// 88 = 0x58
    struct EAPacket **_sessionPacketsFromApp;	// 96 = 0x60
    unsigned int _sessionPacketsFromAppHead;	// 104 = 0x68
    unsigned int _sessionPacketsFromAppReady;	// 108 = 0x6c
    unsigned int _sessionPacketsFromAppTail;	// 112 = 0x70
    unsigned long long _sessionPacketsBytesRemainingCached;	// 120 = 0x78
    NSThread *_sessionPacketsFromAppThread;	// 128 = 0x80
    _Bool _hasSessionPacketFromAppNotificationBeenPosted;	// 136 = 0x88
    NSMutableData *_sessionDataFromAcc;	// 144 = 0x90
    NSCondition *_sessionDataFromAccCondition;	// 152 = 0x98
    NSThread *_sessionDataFromAccThread;	// 160 = 0xa0
    unsigned int _numberOfSessionPacketsFromApp;	// 168 = 0xa8
    unsigned int _numberOfSessionPacketsFromAppMask;	// 172 = 0xac
    _Bool _openPipeToAppCompleted;	// 176 = 0xb0
    _Bool _openPipeFromAppCompleted;	// 177 = 0xb1
}

- (void)_sessionBufferToAppHasSpaceAvailable;	// IMP=0x00000001000154fc
- (void)_writeSessionDataFromAccThread;	// IMP=0x0000000100015278
- (void)_readSessionDataFromAppThread;	// IMP=0x0000000100014bdc
- (unsigned long long)_sessionPacketsFromAppBytesFree;	// IMP=0x0000000100014a7c
- (unsigned int)sendBytesToApp:(const char *)arg1 length:(int)arg2;	// IMP=0x000000010001492c
- (_Bool)bufferToAppHasSpaceAvailable;	// IMP=0x000000010001486c
- (void)recycleOutPacket:(struct EAPacket *)arg1;	// IMP=0x00000001000146dc
- (struct EAPacket *)consumeNextOutPacket;	// IMP=0x00000001000144d4
- (_Bool)isPacketAvailable;	// IMP=0x00000001000143f0
- (_Bool)closeDataPipes;	// IMP=0x00000001000142c4
- (void)_openPipeFromApp;	// IMP=0x0000000100014128
- (void)_openPipeToApp;	// IMP=0x0000000100013f98
- (void)dealloc;	// IMP=0x0000000100013f64
- (void)shuttingDownSession;	// IMP=0x0000000100013d2c
- (id)initWithClient:(id)arg1 connectionID:(unsigned int)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short *)arg4;	// IMP=0x0000000100013a14
- (id)init;	// IMP=0x00000001000139dc

@end

