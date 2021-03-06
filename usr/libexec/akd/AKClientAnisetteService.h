//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKAnisetteServiceProtocol-Protocol.h"

@class AKAppleIDAuthenticationContext, NSString;
@protocol AKAnisetteProvisioningClientProtocol;

@interface AKClientAnisetteService : NSObject <AKAnisetteServiceProtocol>
{
    id <AKAnisetteProvisioningClientProtocol> _clientProxy;	// 8 = 0x8
    AKAppleIDAuthenticationContext *_context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100069e88
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100069da4
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100069cdc
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100069c14
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100069b30
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100069a60
- (id)initWithClient:(id)arg1 context:(id)arg2;	// IMP=0x0000000100069958

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

