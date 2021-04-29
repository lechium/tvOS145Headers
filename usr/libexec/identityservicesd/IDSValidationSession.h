//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSBaseMessageSigningSession-Protocol.h"

@class NSData, NSString;
@protocol OS_dispatch_queue;

@interface IDSValidationSession : NSObject <IDSBaseMessageSigningSession>
{
    NSData *_helloMessage;	// 8 = 0x8
    NSString *_UDID;	// 16 = 0x10
    NSString *_serialNumber;	// 24 = 0x18
    NSString *_IMEI;	// 32 = 0x20
    NSString *_MEID;	// 40 = 0x28
    NSData *_scoringNonce;	// 48 = 0x30
    struct PSCSessionInternal_ *_pscSession;	// 56 = 0x38
    struct __SecKey *_BIKKeyRef;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_BAAQueue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    long long _stateFlags;	// 88 = 0x58
    NSData *_BAACert;	// 96 = 0x60
    NSData *_intermediateRootCert;	// 104 = 0x68
}

+ (id)_BAACertTTLInMinutesFromServerBag;	// IMP=0x00000001001bc424
+ (id)_BAAFetchTimeoutFromServerBag;	// IMP=0x00000001001bc320
+ (_Bool)_isBAAOptionEnabledByServerBag;	// IMP=0x00000001001bc1cc
+ (_Bool)_isAbsintheV3EnabledByServerBag;	// IMP=0x00000001001bc0b0
+ (_Bool)isScoringSupported;	// IMP=0x00000001001bc094
+ (_Bool)isSigningSupported;	// IMP=0x00000001001bbfb4
- (void).cxx_destruct;	// IMP=0x00000001001be22c
@property(copy, nonatomic) NSData *intermediateRootCert; // @synthesize intermediateRootCert=_intermediateRootCert;
@property(copy, nonatomic) NSData *BAACert; // @synthesize BAACert=_BAACert;
@property(nonatomic) long long stateFlags; // @synthesize stateFlags=_stateFlags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *BAAQueue; // @synthesize BAAQueue=_BAAQueue;
@property(nonatomic) struct __SecKey *BIKKeyRef; // @synthesize BIKKeyRef=_BIKKeyRef;
@property(nonatomic) struct PSCSessionInternal_ *pscSession; // @synthesize pscSession=_pscSession;
@property(copy, nonatomic) NSData *scoringNonce; // @synthesize scoringNonce=_scoringNonce;
@property(copy, nonatomic) NSString *MEID; // @synthesize MEID=_MEID;
@property(copy, nonatomic) NSString *IMEI; // @synthesize IMEI=_IMEI;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(copy, nonatomic) NSData *helloMessage; // @synthesize helloMessage=_helloMessage;
- (id)_deviceAbsintheMEID;	// IMP=0x00000001001bdd90
- (id)_deviceAbsintheIMEI;	// IMP=0x00000001001bdd54
- (id)_deviceAbsintheSerialNumber;	// IMP=0x00000001001bdd18
- (id)_deviceAbsintheUDID;	// IMP=0x00000001001bdcdc
- (void)_fetchDeviceIdentityIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bc7cc
- (_Bool)_shouldUseDebugPiscoLogging;	// IMP=0x00000001001bc718
- (_Bool)_shouldUseBAACertOption;	// IMP=0x00000001001bc634
- (_Bool)_shouldUseBAAOnly;	// IMP=0x00000001001bc618
- (_Bool)_shouldUseAbsintheV4;	// IMP=0x00000001001bc544
- (_Bool)_shouldUseAbsinthe;	// IMP=0x00000001001bc528
@property(readonly, nonatomic) _Bool isUsingBAA;
@property(readonly, nonatomic) _Bool isUsingAbsintheV4;
@property(readonly, nonatomic) _Bool isUsingAbsintheV3;
@property(readonly, nonatomic) _Bool isInitializedForScoring;
@property(readonly, nonatomic) _Bool isInitializedForSigning;
- (void)invalidate;	// IMP=0x00000001001bbc80
- (void)deviceScoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bbae0
- (id)headersBySigningData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001bb460
- (id)signData:(id)arg1;	// IMP=0x00000001001bacd0
- (id)activateWithValidationData:(id)arg1 serverKey:(id)arg2 scoringNonce:(id)arg3;	// IMP=0x00000001001ba200
- (void)initializeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b8b6c
- (void)dealloc;	// IMP=0x00000001001b8b14
- (id)description;	// IMP=0x00000001001b8a40
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001001b8964

@end
