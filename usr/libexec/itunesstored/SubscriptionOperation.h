//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class NSNumber, NSString, SSAuthenticationContext, SSVSubscriptionResponse;

@interface SubscriptionOperation : ISOperation <ISStoreURLOperationDelegate>
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    long long _operationType;	// 104 = 0x68
    _Bool _requestingOfflineSlot;	// 112 = 0x70
    SSVSubscriptionResponse *_response;	// 120 = 0x78
    NSString *_userAgent;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000001000c0048
- (id)_requestPropertiesWithAccount:(id)arg1 syncState:(id)arg2 fairPlaySubscriptionController:(id)arg3;	// IMP=0x00000001000bf8a4
- (id)_newMachineDataOperationWithAccount:(id)arg1 response:(id)arg2;	// IMP=0x00000001000bf76c
- (void)run;	// IMP=0x00000001000beb24
@property(copy) NSString *userAgent;
@property(getter=isRequestingOfflineSlot) _Bool requestingOfflineSlot;
@property long long operationType;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly, copy) SSVSubscriptionResponse *response;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end
