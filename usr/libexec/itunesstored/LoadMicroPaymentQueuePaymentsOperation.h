//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class MicroPaymentQueueRequest, MicroPaymentQueueResponse, NSNumber, NSString;

@interface LoadMicroPaymentQueuePaymentsOperation : ISOperation <ISStoreURLOperationDelegate>
{
    MicroPaymentQueueRequest *_request;	// 96 = 0x60
    MicroPaymentQueueResponse *_response;	// 104 = 0x68
    NSString *_urlBagKey;	// 112 = 0x70
}

@property(retain) NSString *URLBagKey; // @synthesize URLBagKey=_urlBagKey;
@property(retain) MicroPaymentQueueResponse *response; // @synthesize response=_response;
@property(copy) MicroPaymentQueueRequest *request; // @synthesize request=_request;
- (_Bool)_parsePropertyList:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008c368
- (_Bool)_loadResponseReturningError:(id *)arg1;	// IMP=0x000000010008c074
- (_Bool)_appendRangeRequestsToResponse:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008be44
- (void)run;	// IMP=0x000000010008bde0
- (void)dealloc;	// IMP=0x000000010008bd70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end
