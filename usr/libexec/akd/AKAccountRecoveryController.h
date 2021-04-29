//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAuthenticationUILiaison, AKClient;

@interface AKAccountRecoveryController : NSObject
{
    AKAuthenticationUILiaison *_authUILiaison;	// 8 = 0x8
    AKClient *_client;	// 16 = 0x10
}

+ (_Bool)shouldProcessServerUIRequest:(id)arg1;	// IMP=0x0000000100012c10
- (void).cxx_destruct;	// IMP=0x0000000100014870
- (void)persistMasterKeyVerifier:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000145e8
- (void)verifyMasterKey:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013e14
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000136d4
- (id)_recoveryContextFromServerInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001362c
- (void)retrieveRecoveryDataForServerContext:(id)arg1 recoveryInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012ca0
- (id)initWithUILiaison:(id)arg1 client:(id)arg2;	// IMP=0x0000000100012b6c

@end
