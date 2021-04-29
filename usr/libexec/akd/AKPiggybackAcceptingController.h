//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "KCJoiningAcceptSecretDelegate-Protocol.h"

@class AKCAPiggybackReporter, AKCircleRequestPayload, KCJoiningAcceptAccountCircleDelegate, KCJoiningAcceptSession, NSString;

@interface AKPiggybackAcceptingController : NSObject <KCJoiningAcceptSecretDelegate>
{
    AKCircleRequestPayload *_lastPayload;	// 8 = 0x8
    AKCircleRequestPayload *_initiatingPayload;	// 16 = 0x10
    long long _verificationAttempts;	// 24 = 0x18
    KCJoiningAcceptAccountCircleDelegate *_circleDelegate;	// 32 = 0x20
    _Bool _verificationFailed;	// 40 = 0x28
    AKCAPiggybackReporter *_piggybackReporter;	// 48 = 0x30
    KCJoiningAcceptSession *_acceptSession;	// 56 = 0x38
}

+ (_Bool)isInCircle;	// IMP=0x000000010000cfa0
- (void).cxx_destruct;	// IMP=0x000000010000d2e0
@property(retain, nonatomic) KCJoiningAcceptSession *acceptSession; // @synthesize acceptSession=_acceptSession;
- (void)_releaseAssertion;	// IMP=0x000000010000d2c8
- (void)_grabLockAssertion;	// IMP=0x000000010000d2c4
- (id)_generateSecret;	// IMP=0x000000010000d27c
- (id)accountCode;	// IMP=0x000000010000d1f0
- (int)verificationFailed:(id *)arg1;	// IMP=0x000000010000d0f8
- (id)secret;	// IMP=0x000000010000d004
- (_Bool)isDone;	// IMP=0x000000010000cff4
- (id)_authKitAccountForPayload:(id)arg1;	// IMP=0x000000010000cef4
- (id)replyContextWithPayload:(id)arg1;	// IMP=0x000000010000cd64
- (id)_acceptSessionForPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000cbf0
- (void)processPushPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c180
- (id)initWithPiggybackReporter:(id)arg1;	// IMP=0x000000010000c108

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
