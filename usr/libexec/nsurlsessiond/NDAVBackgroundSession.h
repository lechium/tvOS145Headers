//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NDBackgroundSession.h"

#import "NDAVAssetDownloadSessionWrapperDelegate-Protocol.h"
#import "NDBackgroundSessionProtocol-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSObject, NSString, NSURLSessionConfiguration;
@protocol OS_dispatch_source;

@interface NDAVBackgroundSession : NDBackgroundSession <NDBackgroundSessionProtocol, NDAVAssetDownloadSessionWrapperDelegate>
{
    NSMutableDictionary *_identifiersToAVWrappers;	// 240 = 0xf0
    NSMutableDictionary *_identifiersToThroughputMonitors;	// 248 = 0xf8
    NSMutableDictionary *_identifiersToTCPConnections;	// 256 = 0x100
    NSMutableDictionary *_identifiersToDASActivities;	// 264 = 0x108
    NSMapTable *_assetDownloadTokensToAssets;	// 272 = 0x110
    NSURLSessionConfiguration *_clientConfig;	// 280 = 0x118
    NSObject<OS_dispatch_source> *_delayedWakeTimer;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x000000010005b344
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x000000010005af6c
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didResolveMediaSelectionPropertyList:(id)arg2;	// IMP=0x000000010005ad5c
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didFinishDownloadForMediaSelectionPropertyList:(id)arg2;	// IMP=0x000000010005acc8
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4 forMediaSelectionPropertyList:(id)arg5;	// IMP=0x000000010005abc0
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didUpdateProgressWithLastBytesWritten:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;	// IMP=0x000000010005aa94
- (void)taskWithIdentifier:(unsigned long long)arg1 didCompleteWithError:(id)arg2;	// IMP=0x000000010005a248
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x000000010005a030
- (void)cancelTCPConnectionForTask:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x0000000100059c70
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x0000000100059b3c
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100059b30
- (void)stopAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100059a28
- (void)startAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100059718
- (_Bool)ensureAVAssetDownloadSessionWrapperForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x00000001000593c4
- (id)newAVAssetDownloadSessionWrapperForTaskInfo:(id)arg1;	// IMP=0x0000000100059030
- (long long)adjustedTCPConnectionPriorityForTaskPriority:(long long)arg1;	// IMP=0x0000000100058f28
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x0000000100058cc0
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x0000000100058858
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2;	// IMP=0x0000000100058350
- (void)setPriority:(long long)arg1 forTCPConnectionWithTaskIdentifier:(unsigned long long)arg2;	// IMP=0x000000010005834c
- (void)cancelAVDownloadAndFailTaskWithIdentifier:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x0000000100058138
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100058134
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100058038
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x0000000100057fc4
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100057dcc
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 childDownloadSessionIdentifier:(id)arg6 identifier:(unsigned long long)arg7 uniqueIdentifier:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x00000001000576f8
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 taskKind:(unsigned long long)arg10 reply:(CDUnknownBlockType)arg11;	// IMP=0x0000000100056b3c
- (_Bool)doesAVAssetDownloadSessionSupportMultipleDownloads;	// IMP=0x0000000100056b14
- (id)avAssetForURL:(id)arg1 downloadToken:(unsigned long long)arg2;	// IMP=0x00000001000568b8
- (_Bool)hasEntitlementToSpecifyDownloadDestinationURL;	// IMP=0x0000000100056844
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 pipeHandle:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100056834
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100056824
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100056814
- (void)applicationEndedTransitionalDiscretionaryBackgroundPeriod:(id)arg1;	// IMP=0x0000000100056790
- (void)backgroundUpdatesDisabledForApplication:(id)arg1;	// IMP=0x000000010005678c
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x0000000100056708
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x0000000100056684
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0000000100056600
- (id)destinationURLToUseForTask:(id)arg1;	// IMP=0x0000000100056124
- (id)downloadDirectoryToUse:(id)arg1;	// IMP=0x00000001000560a0
- (id)avAssetDownloadsDirectory;	// IMP=0x0000000100055b6c
- (void)updatePriorityForTaskID:(id)arg1;	// IMP=0x0000000100055b68
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x0000000100055a68
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x0000000100055968
- (void)cancelThroughputMonitorForWrapper:(unsigned long long)arg1;	// IMP=0x0000000100055854
- (void)setupThroughputMonitorForWrapper:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3;	// IMP=0x00000001000556d0
- (void)cancelDelayedCompletionWakeTimer;	// IMP=0x0000000100055594
- (void)setupDelayedCompletionWakeTimer;	// IMP=0x00000001000553cc
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 archiveQueue:(id)arg9;	// IMP=0x00000001000550e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
