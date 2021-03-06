//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BLOSTransactionCoordinating-Protocol.h"
#import "BLPurchaseManagerDelegate-Protocol.h"
#import "BLServiceProtocol-Protocol.h"
#import "BUUserAccountObserving-Protocol.h"

@class BLBookInstallManager, BLDatabaseManager, BLDownloadManager, BLDownloadPolicyManager, BLMediaLibraryManager, BLPurchaseManager, NSMutableDictionary, NSString;
@protocol BLAutomaticDownloadProcessing;

__attribute__((visibility("hidden")))
@interface BLService : NSObject <BLPurchaseManagerDelegate, BLOSTransactionCoordinating, BUUserAccountObserving, BLServiceProtocol>
{
    struct os_unfair_lock_s _transactionsUpdateLock;	// 8 = 0x8
    BLDownloadManager *_downloadManager;	// 16 = 0x10
    BLBookInstallManager *_installManager;	// 24 = 0x18
    BLDatabaseManager *_databaseManager;	// 32 = 0x20
    BLMediaLibraryManager *_mediaLibraryManager;	// 40 = 0x28
    BLPurchaseManager *_purchaseManager;	// 48 = 0x30
    BLDownloadPolicyManager *_downloadPolicyManager;	// 56 = 0x38
    NSMutableDictionary *_transactionsMap;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010001058c
@property(retain, nonatomic) NSMutableDictionary *transactionsMap; // @synthesize transactionsMap=_transactionsMap;
@property(retain, nonatomic) BLDownloadPolicyManager *downloadPolicyManager; // @synthesize downloadPolicyManager=_downloadPolicyManager;
@property(retain, nonatomic) BLPurchaseManager *purchaseManager; // @synthesize purchaseManager=_purchaseManager;
@property(retain, nonatomic) BLMediaLibraryManager *mediaLibraryManager; // @synthesize mediaLibraryManager=_mediaLibraryManager;
@property(retain, nonatomic) BLDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) BLBookInstallManager *installManager; // @synthesize installManager=_installManager;
@property(retain, nonatomic) BLDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)_cancelAllActiveDownloads;	// IMP=0x0000000100010144
- (void)userAccount:(unsigned long long)arg1 didChangeWithReason:(unsigned long long)arg2;	// IMP=0x00000001000100b8
- (void)purchaseManager:(id)arg1 requestDownloadWithParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010030
- (void)didFinishTransactionWithIdenfifier:(id)arg1;	// IMP=0x000000010000ff34
- (void)willStartTransactionWithIdentifier:(id)arg1;	// IMP=0x000000010000fdc0
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000fd34
- (void)setValueSimulateDeviceOutOfSpace:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000fc84
- (void)resetAllCrashSimulationOverridesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000fb64
- (void)getCrashSimulationOverrideValuesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000fa1c
- (void)setValueSimulateCrashAtInstallDuringFinish:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f990
- (void)setValueSimulateCrashAtInstallDuringUnzip:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f904
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f878
- (void)setValueSimulateCrashAtInstallStart:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f7ec
- (void)reloadFromServerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000f6b8
- (void)processAutomaticDownloadsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000f5d4
- (void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f514
- (void)purchaseWithRequest:(id)arg1 uiHostProxy:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f358
- (void)purchaseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f344
- (void)cancelAllActiveDownloadsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000f298
- (void)cancelDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f158
- (void)resumeDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f018
- (void)pauseDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000eed8
- (void)flushMetricsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ec84
- (void)requestDownloadsWithManifestRequest:(id)arg1 uiHostProxy:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000eb24
- (void)requestDownloadsWithRestoreContentRequestItems:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e9e0
- (void)requestDownloadsWithMetadata:(id)arg1 areRestore:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e49c
- (void)requestDownloadWithMetadata:(id)arg1 isRestore:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e350
- (void)requestDownloadWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e20c
- (void)fetchDownloadFromDownloadID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e0c8
- (void)fetchDownloadListWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000dfa8
- (void)cleanupOrphanedScratchDirectoriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000dbc8
- (void)startPendingOperations;	// IMP=0x000000010000da10
- (void)performPreListenerStartupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d618
@property(readonly, nonatomic) id <BLAutomaticDownloadProcessing> automaticDownloadProcessor;
- (void)dealloc;	// IMP=0x000000010000d544
- (id)init;	// IMP=0x000000010000d1f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

