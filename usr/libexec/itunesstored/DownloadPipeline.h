//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetDownloadDelegate-Protocol.h"
#import "DownloadAssetFairPlayStreamingKeyLoaderDelegate-Protocol.h"
#import "ISOperationDelegate-Protocol.h"
#import "NSURLSessionAVAssetDownloadDelegate-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"

@class DownloadsDatabase, ISOperationQueue, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_source;

@interface DownloadPipeline : NSObject <NSURLSessionDataDelegate, ISOperationDelegate, NSURLSessionAVAssetDownloadDelegate, AVAssetDownloadDelegate, DownloadAssetFairPlayStreamingKeyLoaderDelegate>
{
    NSMapTable *_aggregateDownloadProgress;	// 8 = 0x8
    ISOperationQueue *_authenticationChallengeQueue;	// 16 = 0x10
    ISOperationQueue *_backgroundOperationQueue;	// 24 = 0x18
    DownloadsDatabase *_database;	// 32 = 0x20
    NSMutableSet *_dirtyTaskStates;	// 40 = 0x28
    NSMutableSet *_downloadHandlerSessions;	// 48 = 0x30
    _Bool _holdingKeepAliveAssertion;	// 56 = 0x38
    NSMutableOrderedSet *_preparationDownloadIDs;	// 64 = 0x40
    ISOperationQueue *_preparationOperationQueue;	// 72 = 0x48
    ISOperationQueue *_processingOperationQueue;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_progressTimer;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_reconnectTimer;	// 96 = 0x60
    NSMapTable *_resourceLoaders;	// 104 = 0x68
    NSMapTable *_taskStates;	// 112 = 0x70
    NSMutableDictionary *_urlSessions;	// 120 = 0x78
    NSMutableDictionary *_downloadOperationsByTask;	// 128 = 0x80
    ISOperationQueue *_discretionaryDownloadOperationQueue;	// 136 = 0x88
    ISOperationQueue *_nonDiscretionaryDownloadOperationQueue;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000100138bd8
- (_Bool)_isPodcast:(id)arg1;	// IMP=0x0000000100138b84
- (void)_startProgressTimer;	// IMP=0x0000000100138a40
- (void)_setDownloadPhase:(id)arg1 forDownloadIdentifier:(long long)arg2 databaseTransaction:(id)arg3;	// IMP=0x00000001001387a4
- (void)_scheduleReconnect;	// IMP=0x0000000100138494
- (void)_reloadKeepAliveAssertion;	// IMP=0x00000001001382e4
- (void)_releaseDownloadHandlerSession:(id)arg1 withTaskState:(id)arg2;	// IMP=0x000000010013806c
- (void)_processDownloadFailureWithTaskState:(id)arg1 cancelReason:(long long)arg2;	// IMP=0x0000000100137d34
- (void)_queueFinishDownloadWithtaskState:(id)arg1 databaseSession:(id)arg2 setupBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100137af8
- (void)_processDownloadWithTaskState:(id)arg1 databaseSession:(id)arg2 setupBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100137a38
- (void)_prepareDownloadsMatchingPredicate:(id)arg1 ignoreDownloadHandlers:(_Bool)arg2 filtersExistingTasks:(_Bool)arg3;	// IMP=0x0000000100137464
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1 withSessionProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100136d98
- (void)_logDownloadEvent:(id)arg1 forTaskWithState:(id)arg2 session:(id)arg3;	// IMP=0x0000000100136ca4
- (_Bool)_hasAutomaticUpdateTasks;	// IMP=0x0000000100136b34
- (void)_finishRecoveryWithOperation:(id)arg1 response:(id)arg2;	// IMP=0x0000000100136620
- (void)_performDownloadOperation:(id)arg1;	// IMP=0x0000000100134630
- (void)_taskReceived:(id)arg1 persistAVAssetDownloadToken:(unsigned long long)arg2;	// IMP=0x0000000100133f38
- (void)_finishDownloadWithOperation:(id)arg1 response:(id)arg2;	// IMP=0x0000000100132dfc
- (void)_failDownloadWithIdentifier:(id)arg1 error:(id)arg2 transaction:(id)arg3;	// IMP=0x0000000100132ce8
- (id)_downloadSessionPropertiesWithPhase:(id)arg1 taskState:(id)arg2 databaseSession:(id)arg3;	// IMP=0x0000000100132a50
- (_Bool)_downloadIsForLegacyClientWithIdentifier:(id)arg1;	// IMP=0x000000010013280c
- (void)_disavowDownloadHandlerSession:(id)arg1 withTaskState:(id)arg2;	// IMP=0x0000000100132408
- (void)_commitProgressTimer;	// IMP=0x0000000100131ab4
- (id)_authenticationChallengeQueue;	// IMP=0x0000000100131a44
- (void)_attemptRecoveryForDownloadWithTaskState:(id)arg1 databaseSession:(id)arg2;	// IMP=0x000000010013186c
- (id)_applicationHandleForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2;	// IMP=0x00000001001316b0
- (id)_applicationBundleIdentifierForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2;	// IMP=0x0000000100131558
- (void)downloadAssetFairPlayStreamingKeyLoader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100131114
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100130930
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;	// IMP=0x00000001001303d8
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100130010
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000010012e908
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010012dfd0
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5 forMediaSelection:(id)arg6;	// IMP=0x000000010012d990
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3;	// IMP=0x000000010012d708
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;	// IMP=0x000000010012d4e0
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5;	// IMP=0x000000010012d080
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000010012cc3c
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x000000010012cb04
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didReceiveAVAssetDownloadToken:(unsigned long long)arg3;	// IMP=0x000000010012caf0
- (void)operation:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x000000010012c978
- (void)updateAfterSessionsChanged:(id)arg1;	// IMP=0x000000010012bef0
- (void)stopDownloadsWithIdentifiers:(id)arg1 reason:(long long)arg2;	// IMP=0x000000010012b2e4
- (id)restartDownloadsWithIdentifiers:(id)arg1;	// IMP=0x000000010012aef0
- (void)prioritizeDownloadWithIdentifier:(id)arg1;	// IMP=0x000000010012a578
- (void)reconnectWithURLSessionTasks;	// IMP=0x000000010012a320
- (void)addDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0000000100129df0
- (void)dealloc;	// IMP=0x0000000100129d80
- (id)initWithDownloadsDatabase:(id)arg1;	// IMP=0x0000000100129a4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
