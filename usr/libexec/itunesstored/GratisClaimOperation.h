//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class NSData, NSDictionary, NSNumber, NSString, SSURLConnectionResponse, SSURLRequestProperties, SSVGratisRequestBody;

@interface GratisClaimOperation : ISOperation <ISStoreURLOperationDelegate>
{
    NSNumber *_accountID;	// 96 = 0x60
    NSString *_authenticationReasonDescription;	// 104 = 0x68
    NSData *_clientAuditTokenData;	// 112 = 0x70
    SSURLRequestProperties *_defaultRequestProperties;	// 120 = 0x78
    NSDictionary *_rawOutput;	// 128 = 0x80
    SSVGratisRequestBody *_requestBody;	// 136 = 0x88
    _Bool _suppressesErrorDialogs;	// 144 = 0x90
    SSURLConnectionResponse *_urlResponse;	// 152 = 0x98
}

- (id)_newRetryRequestPropertiesWithURL:(id)arg1;	// IMP=0x0000000100152cb4
- (id)_newDefaultRequestProperties;	// IMP=0x0000000100152b60
- (id)_bodyData;	// IMP=0x0000000100152a88
- (id)_authenticationContext;	// IMP=0x0000000100152984
- (id)_accountID;	// IMP=0x00000001001528d8
- (void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2;	// IMP=0x00000001001527f0
- (void)run;	// IMP=0x0000000100152318
@property(readonly) SSURLConnectionResponse *URLResponse;
@property _Bool suppressesErrorDialogs;
@property(retain, nonatomic) NSData *clientAuditTokenData;
@property(copy) NSString *authenticationReasonDescription;
@property(readonly) NSDictionary *rawOutput;
- (void)dealloc;	// IMP=0x0000000100151fcc
- (id)initWithRequestBody:(id)arg1;	// IMP=0x0000000100151f24
- (id)initWithPurchase:(id)arg1;	// IMP=0x0000000100151da8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

