//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray, NSString;

@interface CheckDownloadQueueTask : Task
{
    long long _numberOfAvailableDownloads;	// 8 = 0x8
    long long _downloadQueueType;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    NSArray *_storeItems;	// 32 = 0x20
    NSString *_storeCorrelationID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001001329d4
@property(readonly) NSString *storeCorrelationID; // @synthesize storeCorrelationID=_storeCorrelationID;
@property(readonly, nonatomic) NSArray *storeItems; // @synthesize storeItems=_storeItems;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly) long long downloadQueueType; // @synthesize downloadQueueType=_downloadQueueType;
- (void)_setItems:(id)arg1;	// IMP=0x0000000100132980
- (void)_runPendingCancelDownloadOperations;	// IMP=0x0000000100132878
- (id)_metadataForStoreItems:(id)arg1;	// IMP=0x0000000100132514
- (id)_requestURL:(id *)arg1;	// IMP=0x0000000100132438
- (id)_newBaseRequestBodyDictionaryWithAccountID:(id)arg1;	// IMP=0x00000001001322f4
- (void)main;	// IMP=0x0000000100131cb8
@property(readonly) long long numberOfAvailableDownloads; // @synthesize numberOfAvailableDownloads=_numberOfAvailableDownloads;
- (id)initWithDownloadQueueType:(long long)arg1;	// IMP=0x0000000100131c20
- (id)init;	// IMP=0x0000000100131bdc

@end

