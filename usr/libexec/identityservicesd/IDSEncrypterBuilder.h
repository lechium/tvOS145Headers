//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSOTRController, IDSPeerIDManager, IDSPublicKeyStorage, IDSRateLimiter, IDSRegistrationKeyManager;

@interface IDSEncrypterBuilder : NSObject
{
    _Bool _avoidMainQueue;	// 8 = 0x8
    _Bool _forceLegacy;	// 9 = 0x9
    IDSPublicKeyStorage *_publicKeyStorage;	// 16 = 0x10
    IDSPeerIDManager *_peerIDManager;	// 24 = 0x18
    IDSDAccountController *_accountController;	// 32 = 0x20
    IDSRegistrationKeyManager *_registrationKeyManager;	// 40 = 0x28
    IDSRateLimiter *_rateLimiter;	// 48 = 0x30
    IDSOTRController *_OTRController;	// 56 = 0x38
}

+ (id)builderWithPublicKeyStorage:(id)arg1 peerIDManager:(id)arg2 accountController:(id)arg3 registrationKeyManager:(id)arg4 rateLimiter:(id)arg5 OTRController:(id)arg6 avoidMainQueue:(_Bool)arg7 forceLegacy:(_Bool)arg8;	// IMP=0x00000001001198a8
- (void).cxx_destruct;	// IMP=0x000000010011a5a4
@property(nonatomic) _Bool forceLegacy; // @synthesize forceLegacy=_forceLegacy;
@property(nonatomic) _Bool avoidMainQueue; // @synthesize avoidMainQueue=_avoidMainQueue;
@property(retain, nonatomic) IDSOTRController *OTRController; // @synthesize OTRController=_OTRController;
@property(retain, nonatomic) IDSRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(retain, nonatomic) IDSRegistrationKeyManager *registrationKeyManager; // @synthesize registrationKeyManager=_registrationKeyManager;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
@property(retain, nonatomic) IDSPublicKeyStorage *publicKeyStorage; // @synthesize publicKeyStorage=_publicKeyStorage;
- (id)encrypterWithOTRToken:(id)arg1;	// IMP=0x000000010011a27c
- (id)encrypterWithEndpoint:(id)arg1;	// IMP=0x000000010011a120
- (id)encrypterWithDeviceID:(id)arg1;	// IMP=0x000000010011a008
- (id)encrypterWithLocalURI:(id)arg1 remoteURI:(id)arg2 pushToken:(id)arg3 service:(id)arg4 cert:(id)arg5;	// IMP=0x0000000100119d68
- (id)_createHashingDeviceIdentityEncrypter;	// IMP=0x0000000100119c58
- (id)initWithPublicKeyStorage:(id)arg1 peerIDManager:(id)arg2 accountController:(id)arg3 registrationKeyManager:(id)arg4 rateLimiter:(id)arg5 OTRController:(id)arg6 avoidMainQueue:(_Bool)arg7 forceLegacy:(_Bool)arg8;	// IMP=0x0000000100119a44

@end

