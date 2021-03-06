//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSEncryptionQueueManager, IDSOTRController, IDSPeerIDManager, IDSPublicKeyStorage, IDSRateLimiter, IDSRegistrationKeyManager;

@interface IDSEncryptionController : NSObject
{
    IDSRateLimiter *_failedTokenCache;	// 8 = 0x8
    IDSEncryptionQueueManager *_queueManager;	// 16 = 0x10
    IDSPeerIDManager *_peerIDManager;	// 24 = 0x18
    IDSRegistrationKeyManager *_registrationKeyManager;	// 32 = 0x20
    IDSOTRController *_OTRController;	// 40 = 0x28
    IDSPublicKeyStorage *_publicKeyStorage;	// 48 = 0x30
    IDSDAccountController *_accountController;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00000001003f9f14
- (void).cxx_destruct;	// IMP=0x00000001003fd414
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSPublicKeyStorage *publicKeyStorage; // @synthesize publicKeyStorage=_publicKeyStorage;
@property(retain, nonatomic) IDSOTRController *OTRController; // @synthesize OTRController=_OTRController;
@property(retain, nonatomic) IDSRegistrationKeyManager *registrationKeyManager; // @synthesize registrationKeyManager=_registrationKeyManager;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
@property(retain, nonatomic) IDSEncryptionQueueManager *queueManager; // @synthesize queueManager=_queueManager;
@property(retain, nonatomic) IDSRateLimiter *failedTokenCache; // @synthesize failedTokenCache=_failedTokenCache;
- (void)logRemoteDecryptionErrorForToken:(id)arg1 deviceID:(id)arg2 forURI:(id)arg3 fromURI:(id)arg4 forService:(id)arg5 messageData:(id)arg6 type:(long long)arg7;	// IMP=0x00000001003fceec
- (void)logEncryptionErrorForToken:(id)arg1 deviceID:(id)arg2 forURI:(id)arg3 fromURI:(id)arg4 forService:(id)arg5 messageData:(id)arg6 type:(long long)arg7;	// IMP=0x00000001003fcbf4
- (void)performSyncBlock:(CDUnknownBlockType)arg1 priority:(long long)arg2;	// IMP=0x00000001003fcb60
- (void)performAsyncBlock:(CDUnknownBlockType)arg1 priority:(long long)arg2;	// IMP=0x00000001003fcacc
- (id)_builderAvoidMainQueue:(_Bool)arg1 forceLegacy:(_Bool)arg2;	// IMP=0x00000001003fc9f4
- (void)_decryptData:(id)arg1 encrypter:(id)arg2 pkType:(long long)arg3 isRetry:(_Bool)arg4 priority:(long long)arg5 replayKey:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001003fc600
- (void)_encryptData:(id)arg1 encrypter:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001003fc39c
- (id)OTRDecryptData:(id)arg1 OTRToken:(id)arg2 priority:(long long)arg3 error:(long long *)arg4;	// IMP=0x00000001003fc22c
- (id)OTREncryptData:(id)arg1 OTRToken:(id)arg2 priority:(long long)arg3 error:(long long *)arg4;	// IMP=0x00000001003fc0bc
- (id)publicKeyDecryptData:(id)arg1 toDeviceID:(id)arg2 publicKeyType:(long long)arg3 priority:(long long)arg4 error:(id *)arg5;	// IMP=0x00000001003fbee8
- (void)publicKeyDecryptData:(id)arg1 toDeviceID:(id)arg2 priority:(long long)arg3 publicKeyType:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000001003fbc04
- (id)publicKeyEncryptData:(id)arg1 toDeviceID:(id)arg2 publicKeyType:(long long)arg3 priority:(long long)arg4 error:(id *)arg5;	// IMP=0x00000001003fba58
- (void)publicKeyEncryptData:(id)arg1 toDeviceID:(id)arg2 priority:(long long)arg3 publicKeyType:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000001003fb794
- (void)publicKeyDecryptData:(id)arg1 fromURI:(id)arg2 identity:(id)arg3 toURI:(id)arg4 pushToken:(id)arg5 service:(id)arg6 priority:(long long)arg7 isRetry:(_Bool)arg8 replayKey:(id)arg9 publicKeyType:(long long)arg10 completionBlock:(CDUnknownBlockType)arg11 avoidMainQueue:(_Bool)arg12;	// IMP=0x00000001003fb368
- (void)publicKeyEncryptData:(id)arg1 fromURI:(id)arg2 identity:(id)arg3 toURI:(id)arg4 pushToken:(id)arg5 service:(id)arg6 priority:(long long)arg7 completionBlock:(CDUnknownBlockType)arg8 forceLegacy:(_Bool)arg9 avoidMainQueue:(_Bool)arg10;	// IMP=0x00000001003fafac
- (void)publicKeyDecryptData:(id)arg1 fromEndpoint:(id)arg2 pkType:(long long)arg3 priority:(long long)arg4 replayKey:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000001003fac50
- (id)publicKeyDecryptData:(id)arg1 fromEndpoint:(id)arg2 pkType:(long long)arg3 priority:(long long)arg4 error:(id *)arg5;	// IMP=0x00000001003faa14
- (id)legacyPublicKeyEncryptData:(id)arg1 toEndpoint:(id)arg2 priority:(long long)arg3 error:(id *)arg4;	// IMP=0x00000001003fa810
- (id)publicKeyEncryptData:(id)arg1 toEndpoint:(id)arg2 usedEncryptionType:(long long *)arg3 priority:(long long)arg4 error:(id *)arg5;	// IMP=0x00000001003fa610
- (id)initWithPeerIDManager:(id)arg1 registrationKeyManager:(id)arg2 OTRController:(id)arg3 publicKeyStorage:(id)arg4 accountController:(id)arg5 queueManager:(id)arg6 failedTokenCache:(id)arg7;	// IMP=0x00000001003fa418
- (id)init;	// IMP=0x00000001003fa0a8

@end

