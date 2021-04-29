//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, WLDPlaybackDirectPlayObserver, WLDPlaybackNowPlayingObserver, WLDRateLimiter, WLKTransactionScope;

__attribute__((visibility("hidden")))
@interface WLDPlaybackManager : NSObject
{
    NSMutableDictionary *_reporterDictionary;	// 8 = 0x8
    WLDPlaybackNowPlayingObserver *_nowPlayingObserver;	// 16 = 0x10
    WLDPlaybackDirectPlayObserver *_directPlayObserver;	// 24 = 0x18
    NSOperationQueue *_queue;	// 32 = 0x20
    WLKTransactionScope *_pendingReportsTransaction;	// 40 = 0x28
    _Bool _isPrompting;	// 48 = 0x30
    WLDRateLimiter *_rateLimiter;	// 56 = 0x38
    NSMutableSet *_directPlayClientList;	// 64 = 0x40
    _Bool _disableDirectPlaybackReporting;	// 72 = 0x48
    NSMutableDictionary *_lastSummaryDictionary;	// 80 = 0x50
}

+ (id)sharedManager;	// IMP=0x0000000100011e10
- (void).cxx_destruct;	// IMP=0x0000000100016b04
@property(retain) NSMutableDictionary *lastSummaryDictionary; // @synthesize lastSummaryDictionary=_lastSummaryDictionary;
- (_Bool)_isDirectPlaybackReportingDisabled;	// IMP=0x0000000100016ab4
- (void)_catalogSummary:(id)arg1;	// IMP=0x0000000100016908
- (id)_queuePathForSummary:(id)arg1;	// IMP=0x00000001000166b8
- (id)_queueDir;	// IMP=0x0000000100016600
- (void)_cleanupSummary:(id)arg1;	// IMP=0x0000000100016590
- (_Bool)_serialize:(id)arg1;	// IMP=0x000000010001625c
- (void)_networkReachabilityChanged:(id)arg1;	// IMP=0x0000000100016138
- (void)_scanForPendingReports;	// IMP=0x0000000100015830
- (void)_enqueuePendingReports;	// IMP=0x000000010001576c
- (_Bool)_promptForBundleID:(id)arg1;	// IMP=0x0000000100015368
- (_Bool)_shouldPromptForBundleID:(id)arg1 outAccessStatus:(unsigned long long *)arg2;	// IMP=0x000000010001505c
- (void)_onlineValidation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014a0c
- (_Bool)_offlineValidation:(id)arg1;	// IMP=0x0000000100014774
- (void)_handleReportingError:(id)arg1 forSummary:(id)arg2;	// IMP=0x0000000100014508
- (void)_enqueuePlaybackSummary:(id)arg1 sessionID:(id)arg2 serialize:(_Bool)arg3;	// IMP=0x0000000100013e74
- (void)_handleDirectPlaybackAppTermination:(id)arg1;	// IMP=0x0000000100013c80
- (void)_endSession:(id)arg1;	// IMP=0x0000000100013b48
- (void)_removeReporterBySessionID:(id)arg1;	// IMP=0x0000000100013a6c
- (id)_getReporterBySessionID:(id)arg1;	// IMP=0x00000001000138f4
- (id)_getSessionReporterBySessionID:(id)arg1;	// IMP=0x0000000100013854
- (void)_setLastSummaryBySessionID:(id)arg1 sessionID:(id)arg2;	// IMP=0x00000001000137ac
- (void)_setSessionReporter:(id)arg1 sessionID:(id)arg2;	// IMP=0x0000000100013700
- (void)_removeLastSummaryBySessionID:(id)arg1;	// IMP=0x0000000100013674
- (id)_getLastSummaryBySessionID:(id)arg1;	// IMP=0x00000001000135d4
- (id)reporter;	// IMP=0x00000001000135c0
- (id)queue;	// IMP=0x0000000100013514
- (void)checkPendingReports;	// IMP=0x00000001000134e0
- (void)handleSubscriptionRegistration;	// IMP=0x0000000100013250
- (void)fetchDecoratedNowPlayingSummaries:(CDUnknownBlockType)arg1;	// IMP=0x000000010001295c
- (void)fetchNowPlayingSummaries:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012834
- (void)handlePlaybackSummary:(id)arg1 sessionID:(id)arg2;	// IMP=0x0000000100012584
- (void)endDirectPlaybackSession:(id)arg1;	// IMP=0x0000000100012578
- (void)handleDirectPlaybackSummary:(id)arg1 sessionID:(id)arg2;	// IMP=0x0000000100012384
- (id)nowPlayingObserver;	// IMP=0x000000010001237c
- (void)dealloc;	// IMP=0x0000000100012304
- (id)init;	// IMP=0x0000000100011e7c

@end
