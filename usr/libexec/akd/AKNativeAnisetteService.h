//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKAnisetteServiceProtocol-Protocol.h"

@class AKClient, NSString;

@interface AKNativeAnisetteService : NSObject <AKAnisetteServiceProtocol>
{
    AKClient *_client;	// 8 = 0x8
}

+ (unsigned long long)activeAnisetteDSIDWithEnvironment:(unsigned long long)arg1;	// IMP=0x000000010001fd64
+ (unsigned long long)lastKnownActiveAnisetteDSID;	// IMP=0x000000010001fcf4
+ (void)initialize;	// IMP=0x000000010001c534
- (void).cxx_destruct;	// IMP=0x000000010001fe20
- (void)_signRequestWithProvisioningHeaders:(id)arg1;	// IMP=0x000000010001fbdc
- (id)_createSyncURLRequestWithMID:(id)arg1 SRM:(id)arg2 routingInfo:(unsigned long long)arg3;	// IMP=0x000000010001f910
- (id)_createProvisioningEndURLRequestWithCPIM:(id)arg1;	// IMP=0x000000010001f6ec
- (id)_createProvisioningStartURLRequest;	// IMP=0x000000010001f554
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001f314
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e554
- (void)_unsafe_provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d0a8
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d00c
- (id)_unsafe_anisetteDataForDSID:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x000000010001cd80
- (id)_unsafe_anisetteDataWithRoutingInfoForDSID:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x000000010001cc80
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ca6c
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c618
- (id)initWithClient:(id)arg1;	// IMP=0x000000010001c5a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

