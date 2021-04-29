//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class ICPlayActivityController, NSOperationQueue, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CloudPlayActivityRequestListener : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSOperationQueue *_flushOperationQueue;	// 24 = 0x18
    long long _flushOperationCount;	// 32 = 0x20
    double _nextFlushPlayActivityFireSyncInterval;	// 40 = 0x28
    double _testNextFlushPlayActivityFireSyncInterval;	// 48 = 0x30
    ICPlayActivityController *_playActivityController;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0000000100097138
- (void).cxx_destruct;	// IMP=0x0000000100094a48
- (void)_scheduleNextPlayActivityFlushOperationWithCriteria:(id)arg1;	// IMP=0x00000001000949b4
- (_Bool)_isValidTimeInterval:(double)arg1;	// IMP=0x0000000100094940
- (id)_criteriaDictionaryForEndPointIdentifier:(id)arg1 withPostFrequency:(double)arg2;	// IMP=0x000000010009462c
- (void)_timeIntervalForNextFlushOperationWithReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100094404
- (void)_playActivityControllerDidRecordEventsNotification:(id)arg1;	// IMP=0x00000001000943ac
- (void)_playActivityControllerEndpointRevisionInformationDidChangeNotification:(id)arg1;	// IMP=0x0000000100094228
- (void)_flushPlayActivityEventsForEndPointIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100093f20
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100093b44
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 result:(unsigned long long)arg3 withReplyBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100093a74
- (void)insertPlayActivityEvents:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000939b8
- (void)removePlayActivityEventsUptoRevision:(unsigned long long)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100093924
- (void)setRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withReplyBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010009382c
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 storeAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(_Bool)arg3 withReplyBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010009375c
- (void)flushPlayActivityEventsForEndPointIdentifier:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000936a0
- (void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100093690
- (void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100093680
- (void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100093670
- (void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100093660
- (void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100093650
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100093640
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100093630
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100093620
- (void)stop;	// IMP=0x0000000100093520
- (void)start;	// IMP=0x00000001000933d0
- (id)_init;	// IMP=0x0000000100093290
- (id)init;	// IMP=0x0000000100093240

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
