//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class NSNumber, NSString, SSAuthenticationContext, SSLookupProperties, SSLookupResponse;

@interface LookupRequestOperation : ISOperation <ISStoreURLOperationDelegate>
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    NSString *_clientIdentifierHeader;	// 104 = 0x68
    long long _personalizationStyle;	// 112 = 0x70
    SSLookupProperties *_properties;	// 120 = 0x78
    SSLookupResponse *_response;	// 128 = 0x80
    _Bool _shouldSuppressCookies;	// 136 = 0x88
    NSString *_userAgent;	// 144 = 0x90
}

- (id)_URLBagContext;	// IMP=0x0000000100149240
- (void)_setLookupResponse:(id)arg1;	// IMP=0x00000001001491dc
- (void)_setAccountID:(id)arg1;	// IMP=0x000000010014911c
- (_Bool)_performPlatformLookup:(id *)arg1;	// IMP=0x00000001001489c4
- (_Bool)_performLocationLookup:(id *)arg1;	// IMP=0x0000000100148594
- (_Bool)_performJSSignLookupWithURLBag:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001480fc
- (id)_newStoreURLOperationWithBagKey:(id)arg1;	// IMP=0x0000000100147ee4
- (id)_newLookupResponseWithResultsFromOperation:(id)arg1;	// IMP=0x0000000100147e30
- (id)_authenticationContext;	// IMP=0x0000000100147d78
- (void)operation:(id)arg1 willSendRequest:(id)arg2;	// IMP=0x0000000100147ca0
- (void)run;	// IMP=0x0000000100147a6c
@property(copy) NSString *userAgent;
@property _Bool shouldSuppressCookies;
@property long long personalizationStyle;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SSLookupResponse *lookupResponse;
@property(readonly) SSLookupProperties *lookupProperties;
- (void)dealloc;	// IMP=0x0000000100147608
- (id)initWithLookupProperties:(id)arg1;	// IMP=0x00000001001475a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end
