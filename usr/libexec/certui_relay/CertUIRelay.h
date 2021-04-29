//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSTimer;

@interface CertUIRelay : NSObject
{
    NSMutableDictionary *_promptsForDigest;	// 8 = 0x8
    _Bool _waitingOnPrompt;	// 16 = 0x10
    long long _outstandingRequestCount;	// 24 = 0x18
    NSTimer *_killTimer;	// 32 = 0x20
    NSData *_previousPromptDigest;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100001ee0
- (id)init;	// IMP=0x0000000100001d28
- (void)_trustInfoMessageReceived:(id)arg1 userInfo:(id)arg2 auditToken:(CDStruct_6ad76789 *)arg3;	// IMP=0x0000000100001a84
- (id)_uniqueDigest;	// IMP=0x00000001000019e8
- (void)_showNextPrompt;	// IMP=0x0000000100001538
- (void)_registerReply;	// IMP=0x00000001000014b8
- (void)_registerNewRequest;	// IMP=0x000000010000147c
- (void)_centerDiedWithNotification:(id)arg1;	// IMP=0x0000000100001338
- (void)_killTimerFired;	// IMP=0x000000010000132c
- (void)_shutdown;	// IMP=0x0000000100001264
- (id)_relayCenter;	// IMP=0x0000000100001244

@end

