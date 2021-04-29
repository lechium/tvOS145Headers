//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ODRDownloadManager : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100268330
- (void).cxx_destruct;	// IMP=0x0000000100270950
- (void)_stopTrackingDownload:(id)arg1;	// IMP=0x00000001002708ac
- (void)_startTrackingDownload:(id)arg1;	// IMP=0x00000001002707d0
- (id)_popAssetDownloads:(id)arg1;	// IMP=0x0000000100270598
- (id)_downloadRequestForKey:(id)arg1;	// IMP=0x0000000100270518
- (void)_refreshRequest:(id)arg1 originalError:(id)arg2;	// IMP=0x000000010026ffa8
- (_Bool)_moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000010026ff00
- (id)_missingPrefetchAssetPacksForApplication:(id)arg1 withReason:(long long)arg2;	// IMP=0x000000010026fd70
- (id)_missingInitialAssetPacksForApplication:(id)arg1 withReason:(long long)arg2;	// IMP=0x000000010026fbb4
- (void)_finalizeStateForDownload:(id)arg1;	// IMP=0x000000010026f68c
- (void)_fetchManifestForContext:(id)arg1;	// IMP=0x000000010026ef7c
- (_Bool)_hasExceededMaxPinnedResources:(id)arg1;	// IMP=0x000000010026eccc
- (void)_handleDownloadError:(id)arg1 forDownloadRequest:(id)arg2;	// IMP=0x000000010026e9ac
- (id)_duplicateDownloadFor:(id)arg1;	// IMP=0x000000010026e90c
- (void)_deleteDownloadFromScratchDirectory:(id)arg1;	// IMP=0x000000010026e67c
- (void)_completeDownload:(id)arg1 withError:(id)arg2;	// IMP=0x000000010026e438
- (id)_configureDownloadsForContext:(id)arg1;	// IMP=0x000000010026de08
- (void)_configureCoordinatorsForDownloadRequests:(id)arg1 coordinatorID:(id)arg2 withLogKey:(id)arg3;	// IMP=0x000000010026d9c4
- (id)_bandwithLimitForDownloadRequest:(id)arg1;	// IMP=0x000000010026d7a4
- (void)_attemptDownload:(id)arg1;	// IMP=0x000000010026c95c
- (_Bool)_assetExistsAndMatchesDownload:(id)arg1;	// IMP=0x000000010026c758
- (void)_addDownloadRequest:(id)arg1;	// IMP=0x000000010026bc6c
- (id)currentDownloadRequestForAssetPack:(id)arg1;	// IMP=0x000000010026bb80
- (id)allCurrentDownloadRequests;	// IMP=0x000000010026ba20
- (void)startDownloadsForInstall:(id)arg1;	// IMP=0x000000010026b510
- (void)handlePrefetchDownloadsForBundleID:(id)arg1 withCoordinatorID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010026a8e0
- (void)restartInProgressDownloads;	// IMP=0x0000000100269820
- (void)resumeDownloadRequestsForBundleID:(id)arg1 andCoordinatorID:(id)arg2;	// IMP=0x0000000100269064
- (void)pauseDownloadRequestsForBundleID:(id)arg1 andCoordinatorID:(id)arg2;	// IMP=0x0000000100268ae0
- (void)cancelDownloadRequestsForBundleID:(id)arg1 andCoordinatorID:(id)arg2;	// IMP=0x000000010026852c
- (void)addDownloadRequest:(id)arg1;	// IMP=0x0000000100268494
- (id)init;	// IMP=0x00000001002683cc

@end

