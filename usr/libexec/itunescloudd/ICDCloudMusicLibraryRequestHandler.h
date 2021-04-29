//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BaseRequestHandler.h"

#import "ICDCloudMusicLibraryJaliscoUpdateTaskHelper-Protocol.h"
#import "ICDCloudMusicLibrarySagaUpdateTaskHelper-Protocol.h"
#import "ICEnvironmentMonitorObserver-Protocol.h"

@class JaliscoRequestHandler, NSMutableDictionary, NSObject, NSOperationQueue, NSString, SagaRequestHandler;
@protocol OS_dispatch_queue;

@interface ICDCloudMusicLibraryRequestHandler : BaseRequestHandler <ICDCloudMusicLibrarySagaUpdateTaskHelper, ICDCloudMusicLibraryJaliscoUpdateTaskHelper, ICEnvironmentMonitorObserver>
{
    SagaRequestHandler *_sagaRequestHandler;	// 8 = 0x8
    JaliscoRequestHandler *_jaliscoRequestHandler;	// 16 = 0x10
    long long _musicSubscriptionCheckStatus;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_accessQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    NSOperationQueue *_retryQueue;	// 56 = 0x38
    int _autoEnableFailureCount;	// 64 = 0x40
    int _subscriptionStatusFailureCount;	// 68 = 0x44
    int _autoRetryCloudAuthenticateFailureCount;	// 72 = 0x48
    int _sagaImportFailureCount;	// 76 = 0x4c
    int _deauthOperationCount;	// 80 = 0x50
    _Bool _havePendingSubscriptionStatusCheck;	// 84 = 0x54
    _Bool _havePendingAutoEnableICMLCheck;	// 85 = 0x55
    _Bool _havePendingCloudUpdateLibraryCheck;	// 86 = 0x56
    _Bool _didAdjustMergePreference;	// 87 = 0x57
    _Bool _havePendingSagaUpdate;	// 88 = 0x58
    _Bool _didManuallyReloadCloudLibrary;	// 89 = 0x59
    _Bool _isPendingAuthentication;	// 90 = 0x5a
    _Bool _isHandlerActive;	// 91 = 0x5b
    NSMutableDictionary *_syncProgressDictionary;	// 96 = 0x60
}

+ (id)handler;	// IMP=0x000000010001ada8
+ (id)handlers;	// IMP=0x000000010001ad68
- (void).cxx_destruct;	// IMP=0x000000010000c068
- (void)_handleSagaAuthentication:(id)arg1 finishedForReason:(long long)arg2 explicitUserAction:(_Bool)arg3 shouldStartInitialImport:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010000bcc8
- (id)_prepareLibraryLoadErrorWithJaliscoError:(id)arg1 sagaError:(id)arg2;	// IMP=0x000000010000bbd0
- (void)_postLibraryUpdateProgressChangedForLibraryType:(long long)arg1;	// IMP=0x000000010000bb00
- (void)_performInitialSagaImportAllowingNoisyAuthPrompt:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b8ec
- (void)_performJaliscoImportByAddingMediaKind:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b77c
- (void)_performInitialJaliscoImportWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b538
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x000000010000b358
- (void)_runDisableCloudLibraryOperationByDeletingDatabase:(_Bool)arg1 disableActiveLockerAccount:(_Bool)arg2 removeSourcePurchaseHistory:(_Bool)arg3 isHandlerDeactivating:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010000ada0
- (void)_runSagaAuthenticateOperationWithMergePreference:(id)arg1 allowNoisyPrompt:(_Bool)arg2 cloudLibraryEnableReason:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000aa54
- (void)_tryEnablingCloudMusicLibraryForReason:(long long)arg1;	// IMP=0x000000010000a9b8
- (void)_tryEnablingICMLOnDevicesSupportingSideLoadedContentWithProperties:(id)arg1 reason:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a5e0
- (void)_authenticateAndStartInitialImportWithMergePreference:(id)arg1 userIdentityProperties:(id)arg2 enableReason:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000a52c
- (void)_registerDeviceAndPerformInitialImportWithUserIdentityProperties:(id)arg1 cloudLibraryEnableReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009e64
- (long long)_shouldHandleDaemonStartupOrAccountChangedNotificationWithProperties:(id)arg1;	// IMP=0x0000000100009b58
- (void)_adjustMergePreferenceWithUserIdentityProperties:(id)arg1;	// IMP=0x00000001000095d0
- (_Bool)_wasRestoredFromCloudBackup:(id)arg1;	// IMP=0x0000000100009048
- (long long)_canEnableCloudMusicLibraryOnPlatformsWithSideLoadedMediaContentWithProperties:(id)arg1 includeLocalContentCheck:(_Bool)arg2;	// IMP=0x0000000100008a48
- (long long)_getCurrentSubscriptionStatusForReason:(long long)arg1;	// IMP=0x0000000100008a0c
- (void)_retryEnablingCloudMusicLibraryForReason:(long long)arg1;	// IMP=0x000000010000884c
- (void)_reloadSubscriptionStatusAndEnableCloudMusicLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000085dc
- (void)_enqueueCloudUpdateLibraryOperationForReason:(long long)arg1;	// IMP=0x00000001000084a8
- (void)_enqueueSubscriptionStatusCheckForReason:(long long)arg1;	// IMP=0x00000001000081ec
- (void)_runSubscriptionStatusCheckOperationWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008150
- (void)_handleMusicSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x0000000100007e60
- (_Bool)_isNativeMusicAppInstalled;	// IMP=0x0000000100007d38
- (void)_resetInternalCloudLibraryState;	// IMP=0x0000000100007cf8
- (void)_deactivateJaliscoLibraryByDeauthenticating:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007bd8
- (void)_deactivateSagaLibraryByDeauthenticating:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000077d4
- (void)updateLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007584
- (void)becomeInactiveWithDeauthentication:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000074e8
- (void)becomeActive;	// IMP=0x0000000100007488
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x000000010000738c
- (void)scheduleBackgroundTaskToUpdateLibraryType:(long long)arg1;	// IMP=0x0000000100007308
- (void)setUpdateProgress:(float)arg1 forLibraryType:(long long)arg2;	// IMP=0x00000001000072a4
- (void)finishedUpdateOperationForLibraryType:(long long)arg1 withResponse:(id)arg2;	// IMP=0x0000000100007208
- (void)startingUpdateOperationForLibraryType:(long long)arg1 isInitialImport:(_Bool)arg2;	// IMP=0x00000001000071a4
- (_Bool)shouldIncludeMediaKindSongForJaliscoImport;	// IMP=0x0000000100006f38
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006e74
- (void)loadMissingArtwork;	// IMP=0x0000000100006e14
- (void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006d50
- (void)cancelUpdateJaliscoGeniusDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006cc4
- (void)updateJaliscoGeniusDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006c38
- (void)enableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006bac
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006b10
- (void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006a84
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000069f8
- (void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000696c
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000068e0
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000681c
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006758
- (void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006694
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000065cc
- (void)removeLibraryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006540
- (void)disableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000064b4
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x0000000100006454
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x00000001000063f4
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006358
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000062bc
- (void)loadLastKnownEnableICMLStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005ec0
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005dfc
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005d38
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005c74
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005bd8
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 requestReason:(long long)arg3 pinnedOnly:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100005af8
- (void)updatePlaylistPlayDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005a6c
- (void)updateItemPlayDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000059e0
- (void)setAlbumProperties:(id)arg1 forItemsWithAlbumPersistentID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005918
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005850
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000057b4
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000056b4
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000055f0
- (void)addStoreItemWithOpaqueID:(id)arg1 requestingBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005500
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005438
- (void)addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100005338
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005298
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000051c0
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100005094
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004ff8
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004f34
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004e70
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004dd4
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100004ca8
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100004ba8
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x0000000100004b48
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;	// IMP=0x0000000100004ae8
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x0000000100004a88
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000049ec
- (void)importScreenshotForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004950
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000048b4
- (void)updateProgressForLibraryType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004818
- (void)cancelPendingChangesForLibraryType:(long long)arg1;	// IMP=0x00000001000047b8
- (void)addBackgroundOperation:(id)arg1 forLibraryType:(long long)arg2 priority:(int)arg3;	// IMP=0x0000000100004714
- (void)addOperation:(id)arg1 forLibraryType:(long long)arg2 priority:(int)arg3;	// IMP=0x0000000100004670
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000045d4
- (void)updateSagaLibraryWithReason:(long long)arg1 allowNoisyAuthPrompt:(_Bool)arg2 isExplicitUserAction:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100004520
- (void)updateCloudLibraryProgressWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000044fc
- (void)isUpdatingCloudLibraryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004470
- (_Bool)isUpdatingCloudLibrary;	// IMP=0x00000001000043d8
- (void)disableCloudLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003bc0
- (void)enableCloudLibraryAndStartInitialImport:(_Bool)arg1 enableCloudLibraryPolicy:(long long)arg2 isExplicitUserAction:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100003b0c
- (void)handleMusicAppInstalled;	// IMP=0x0000000100003aac
- (void)handleMusicAppRemoved;	// IMP=0x00000001000039ec
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000010000366c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
