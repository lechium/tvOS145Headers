//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSTimer, iAP2Session;

@interface iAP2AuthenticationController : NSObject
{
    _Bool _disableAuthForTestingPref;	// 8 = 0x8
    struct __CFDictionary *_authInfoDict;	// 16 = 0x10
    int _authState;	// 24 = 0x18
    const void *_pkAuthCaps;	// 32 = 0x20
    unsigned char _keyLength;	// 40 = 0x28
    NSDictionary *_AuthVersionsSupported;	// 48 = 0x30
    iAP2Session *_controlSession;	// 56 = 0x38
    NSTimer *_AuthTimer;	// 64 = 0x40
    NSData *_pNSDataAuthSerNum;	// 72 = 0x48
    NSString *_pNSStrAuthSerNum;	// 80 = 0x50
    _Bool _bCertMatchInCache;	// 88 = 0x58
    _Bool _skippedForCTA;	// 89 = 0x59
    NSData *_certificateSerial;	// 96 = 0x60
    NSString *_certificateSerialString;	// 104 = 0x68
}

@property(nonatomic) NSString *certificateSerialString; // @synthesize certificateSerialString=_certificateSerialString;
@property(nonatomic) NSData *certificateSerial; // @synthesize certificateSerial=_certificateSerial;
@property(readonly, nonatomic) _Bool skippedForCTA; // @synthesize skippedForCTA=_skippedForCTA;
@property(readonly, nonatomic) struct __CFDictionary *authInfoDict; // @synthesize authInfoDict=_authInfoDict;
@property(nonatomic) iAP2Session *controlSession; // @synthesize controlSession=_controlSession;
@property(readonly, nonatomic) NSDictionary *AuthVersionsSupported; // @synthesize AuthVersionsSupported=_AuthVersionsSupported;
@property(readonly, nonatomic) const void *pkAuthCaps; // @synthesize pkAuthCaps=_pkAuthCaps;
@property(readonly, nonatomic) int authState; // @synthesize authState=_authState;
- (void)_changeAuthStateAndNotify:(int)arg1;	// IMP=0x0000000100024e54
- (void)_handleAuthChallengeResponseFailure;	// IMP=0x0000000100024d84
- (void)_handleAuthInfoFailure;	// IMP=0x0000000100024cb4
- (_Bool)_notifyOfAuthStateEarly;	// IMP=0x0000000100024bec
- (void)_sendAuthFailureMessageAndLockoutPort:(id)arg1;	// IMP=0x00000001000249f0
- (int)_getAuthVersionMajor;	// IMP=0x0000000100024974
- (void)_setAuthVersionMajor:(unsigned short)arg1;	// IMP=0x0000000100024918
- (void)_setCertOrNonceOrChallengeInternal:(struct __CFString *)arg1 withBytes:(const char *)arg2 andLength:(unsigned int)arg3;	// IMP=0x0000000100024894
- (void)_setChallengeResponseInDictionary:(const char *)arg1 withLength:(unsigned int)arg2;	// IMP=0x0000000100024874
- (_Bool)_verifyCertificateValidity;	// IMP=0x000000010002476c
- (void)_createNonceAndStoreInDictionary;	// IMP=0x0000000100024700
- (void)_setCertificate:(const char *)arg1 withLength:(unsigned int)arg2 authVersion:(unsigned short)arg3;	// IMP=0x00000001000245ac
- (const char *)getCertificateAndLength:(unsigned long long *)arg1;	// IMP=0x0000000100024540
- (void)sendiPodSignature:(const char *)arg1 withLength:(unsigned short)arg2;	// IMP=0x0000000100024418
- (void)sendiPodCertificate;	// IMP=0x0000000100024304
- (_Bool)verifyAccessoryChallengeResponse:(const char *)arg1 withLength:(unsigned int)arg2;	// IMP=0x0000000100023d0c
- (void)handleAccessoryCertificate:(const char *)arg1 withLength:(unsigned short)arg2;	// IMP=0x0000000100023474
- (void)skipAuthenticationAsCTAPassForCertCaps:(const void *)arg1 certSerial:(id)arg2;	// IMP=0x00000001000233d0
- (void)startAuthentication:(_Bool)arg1;	// IMP=0x00000001000231ec
- (void)dealloc;	// IMP=0x0000000100023170
- (void)shutdownAuthController;	// IMP=0x0000000100023134
- (id)init;	// IMP=0x0000000100022bcc

@end

