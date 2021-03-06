//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAuthenticationUILiaison, AKClient;
@protocol AKDServerUIDelegate;

@interface AKDServerUIController : NSObject
{
    AKAuthenticationUILiaison *_authUILiaison;	// 8 = 0x8
    id <AKDServerUIDelegate> _delegate;	// 16 = 0x10
    AKClient *_client;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000698d0
- (id)_fetchPhoneInformationWithAdditionalInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100069844
- (void)_fetchIDSCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000697c4
- (void)_decorateLoadDelegate:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000100069414
- (id)resourceLoadDelegateWithContext:(id)arg1 authResponse:(id)arg2;	// IMP=0x00000001000690ec
- (id)resourceLoadDelegateWithContext:(id)arg1;	// IMP=0x0000000100069084
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100068d98
- (void)getServerUILoadDelegateWithServerContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100068a1c
- (id)_errorFromServerResponse:(id)arg1;	// IMP=0x0000000100068888
- (void)_showServerUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100067f10
- (void)showServerUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100067c98
- (id)_AKIDSCertificateFetchQueue;	// IMP=0x0000000100067c00
- (id)initWithLiaison:(id)arg1 client:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000100067b44
- (id)initWithClient:(id)arg1;	// IMP=0x0000000100067ae0

@end

