//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class MicroPaymentQueueRequest, NSDate, NSNumber, NSString;

@interface LoadMicroPaymentQueueCountOperation : ISOperation <ISStoreURLOperationDelegate>
{
    NSDate *_lastQueueCheckDate;	// 96 = 0x60
    long long _queueItemCount;	// 104 = 0x68
    MicroPaymentQueueRequest *_request;	// 112 = 0x70
    NSString *_urlBagKey;	// 120 = 0x78
}

@property(retain) NSString *URLBagKey; // @synthesize URLBagKey=_urlBagKey;
@property(copy) MicroPaymentQueueRequest *request; // @synthesize request=_request;
@property long long queueItemCount; // @synthesize queueItemCount=_queueItemCount;
@property(retain) NSDate *lastQueueCheckDate; // @synthesize lastQueueCheckDate=_lastQueueCheckDate;
- (_Bool)_setCountWithResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100089b3c
- (_Bool)_loadCountReturningError:(id *)arg1;	// IMP=0x0000000100089848
- (void)run;	// IMP=0x0000000100089578
- (void)dealloc;	// IMP=0x0000000100089508

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

