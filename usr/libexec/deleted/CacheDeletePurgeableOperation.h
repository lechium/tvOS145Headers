//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CacheDeleteOperation.h"

#import "CacheDeleteOperation-Protocol.h"

@class CDPurgeableOperationResult, NSArray, NSCountedSet, NSObject, NSString;
@protocol CDPurgeableResultCache, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CacheDeletePurgeableOperation : CacheDeleteOperation <CacheDeleteOperation>
{
    _Bool _cancel;	// 8 = 0x8
    CDPurgeableOperationResult *_purgeableResult;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_inflight_q;	// 24 = 0x18
    NSCountedSet *_inflight;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010003ff0c
@property(retain, nonatomic) NSCountedSet *inflight; // @synthesize inflight=_inflight;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inflight_q; // @synthesize inflight_q=_inflight_q;
@property _Bool cancel; // @synthesize cancel=_cancel;
@property(retain, nonatomic) CDPurgeableOperationResult *purgeableResult; // @synthesize purgeableResult=_purgeableResult;
- (void)_startOperation:(CDUnknownBlockType)arg1;	// IMP=0x000000010003cf5c
- (id)copyInFlights;	// IMP=0x000000010003cdf0
- (void)removeInFlight:(id)arg1;	// IMP=0x000000010003ccf4
- (void)addInFlight:(id)arg1;	// IMP=0x000000010003cbf8
- (void)cancelOperation;	// IMP=0x000000010003cbe8
- (id)initWithInfo:(id)arg1 services:(id)arg2 volumes:(id)arg3;	// IMP=0x000000010003c96c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <CDPurgeableResultCache> resultCache;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSArray *volumes;

@end

