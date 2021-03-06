//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BLOperation.h"

@class AMSURLRequestEncoder, BLStoreDownloadQueueRequest;

__attribute__((visibility("hidden")))
@interface BLCheckDownloadQueueOperation : BLOperation
{
    long long _numberOfAvailableDownloads;	// 80 = 0x50
    BLStoreDownloadQueueRequest *_request;	// 88 = 0x58
    AMSURLRequestEncoder *_requestEncoder;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100028720
- (id)_newURLRequestWithError:(id *)arg1;	// IMP=0x000000010002856c
- (id)_account;	// IMP=0x00000001000284b0
- (void)run;	// IMP=0x0000000100027ffc
@property(readonly) long long numberOfAvailableDownloads;
@property(readonly) BLStoreDownloadQueueRequest *downloadQueueRequest;
- (id)initWithDownloadQueueRequest:(id)arg1;	// IMP=0x0000000100027f1c

@end

