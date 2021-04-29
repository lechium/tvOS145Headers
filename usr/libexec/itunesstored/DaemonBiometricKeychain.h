//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DaemonBiometricKeychain : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueueX509;	// 16 = 0x10
}

+ (void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ecb3c
+ (void)x509CertChainDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000ec834
+ (void)signDataUsingContextWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000ec1e0
+ (void)signDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000ebbb8
+ (void)getPublicKeyDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000eb990
+ (void)deleteKeychainTokensWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000eb7a0
+ (void)createX509CertChainDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000eb578
+ (void)createAttestationDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000eb350
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00000001000eb250
+ (id)sharedInstance;	// IMP=0x00000001000e9418
- (void).cxx_destruct;	// IMP=0x00000001000f1e34
- (id)_signData:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000f1e24
- (id)_regenerateKeychainTokensForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001000f1394
- (id)_queryForPrivateKeyWithLabel:(id)arg1 prompt:(id)arg2 useTokenID:(_Bool)arg3;	// IMP=0x00000001000f10ac
- (id)_queryForPrivateKeyWithLabel:(id)arg1 prompt:(id)arg2;	// IMP=0x00000001000f109c
- (id)_publicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateKeys:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000001000f06b0
- (id)_presentPaymentSheetForChallenge:(id)arg1 authContext:(id)arg2 biometricContext:(id)arg3 touchIDContext:(id)arg4 touchIDOptions:(id)arg5 accessControlRef:(struct __SecAccessControl *)arg6 passwordToken:(id *)arg7 paymentTokenData:(id *)arg8 fpanID:(id *)arg9 error:(id *)arg10;	// IMP=0x00000001000f0628
- (_Bool)_generateKeychainTokensForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001000f0618
- (_Bool)_deleteKeychainTokensForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001000f0608
- (_Bool)_deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000f012c
- (id)_createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001000f010c
- (id)_createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001000ef528
- (id)_copyPublicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001000ed76c
- (id)_constraintsForPurchase;	// IMP=0x00000001000ed2c8
- (id)_constraintsForExtendedActions;	// IMP=0x00000001000ed06c
- (_Bool)_isDeviceUnlocked;	// IMP=0x00000001000ece90
- (id)_amsKeychainLabelForPurpose:(long long)arg1;	// IMP=0x00000001000ecac8
- (id)_amsCertificateLabelForPurpose:(long long)arg1;	// IMP=0x00000001000ecaa4
- (id)x509CertChainDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 regenerateCerts:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000001000ea530
- (id)signData_:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000ea00c
- (id)publicKeyDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 regenerateKeys:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000001000e9bc0
- (id)publicKeyDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001000e9bac
- (_Bool)deleteKeychainTokensForAccountIdentifier_:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000e99b0
- (id)createX509CertChainDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001000e9550
- (id)createAttestationDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00000001000e9540
- (id)init;	// IMP=0x00000001000e94b8

@end

