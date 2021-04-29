//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAccountManagerObserver-Protocol.h"
#import "PDApplyManagerObserver-Protocol.h"
#import "PDPaymentTransactionProcessorObserver-Protocol.h"
#import "PDPeerPaymentWebServiceCoordinatorObserver-Protocol.h"
#import "PDScheduledActivityClient-Protocol.h"
#import "PDTransitNotificationServiceObserver-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSString, NSURL, PDAccountManager, PDApplyManager, PDDatabaseManager, PDPaymentTransactionProcessor, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator, PDRuleManager, PDTransitNotificationService, PDUserNotificationManager;
@protocol OS_dispatch_queue, PDDiscoveryManagerDelegate;

@interface PDDiscoveryManager : NSObject <PDAccountManagerObserver, PDApplyManagerObserver, PDPeerPaymentWebServiceCoordinatorObserver, PDTransitNotificationServiceObserver, PDScheduledActivityClient, PDPaymentTransactionProcessorObserver>
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 16 = 0x10
    PDRuleManager *_ruleManager;	// 24 = 0x18
    PDAccountManager *_accountManager;	// 32 = 0x20
    PDApplyManager *_applyManager;	// 40 = 0x28
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 48 = 0x30
    PDTransitNotificationService *_transitNotificationService;	// 56 = 0x38
    PDUserNotificationManager *_userNotificationManager;	// 64 = 0x40
    PDPaymentTransactionProcessor *_paymentTransactionProcessor;	// 72 = 0x48
    id <PDDiscoveryManagerDelegate> _delegate;	// 80 = 0x50
    NSURL *_discoveryManifestURL;	// 88 = 0x58
    _Bool _isUpdatingDiscoveryManifest;	// 96 = 0x60
    _Bool _isEvaluatingRules;	// 97 = 0x61
    _Bool _forceUpdateBadgeCountOnNextProcessingOfDiscoveryObjects;	// 98 = 0x62
    NSMutableArray *_pendingProcessingDiscoveryObjectsBlocks;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_workQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_replyQueue;	// 120 = 0x78
    long long _currentMessagesBundleVersion;	// 128 = 0x80
    _Bool _shouldRestoreDiscoveryItemsStatusFromDefaults;	// 136 = 0x88
    _Bool _shouldRestoreDiscoveryMessagesStatusFromDefaults;	// 137 = 0x89
    _Bool _shouldRestoreNotificationsStatusFromDefaults;	// 138 = 0x8a
    NSDate *_lastProcessForTransactionUpdateDate;	// 144 = 0x90
    NSArray *_discoveryArticleLayoutOverrides;	// 152 = 0x98
    NSArray *_engagementMessageOverrides;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000010028eaf0
- (void)_queue_updateDiscoveryNotificationsStatusDefaultsForUpdatedNotifications:(id)arg1;	// IMP=0x000000010028e858
- (void)_queue_updateDiscoveryNotificationsStatusDefaults;	// IMP=0x000000010028e808
- (void)_queue_restoreDiscoveryNotificationStatusFromDefaultsIfNecessaryWithServerNotifications:(id)arg1;	// IMP=0x000000010028e52c
- (void)_updateDiscoveryEngagementMessageStatusDefaultsForUpdatedMessages:(id)arg1;	// IMP=0x000000010028e294
- (void)_queue_updateDiscoveryEngagementMessageStatusDefaults;	// IMP=0x000000010028e244
- (void)_queue_restoreDiscoveryEngagementMessageStatusFromDefaultsIfNecessaryWithServerMessages:(id)arg1;	// IMP=0x000000010028df68
- (void)_updateDiscoveryItemStatusDefaultsForUpdatedItems:(id)arg1;	// IMP=0x000000010028dcd0
- (void)_queue_updateDiscoveryItemStatusDefaults;	// IMP=0x000000010028dc80
- (void)_queue_restoreDiscoveryItemStatusFromDefaultsIfNecessaryWithServerItems:(id)arg1;	// IMP=0x000000010028d9a4
- (void)_cleanArticleLayoutsDirectories;	// IMP=0x000000010028d530
- (id)_deleteMessagesBundle;	// IMP=0x000000010028d3bc
- (id)_discoveryMessageManifestFromBundle:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010028d22c
- (id)_discoveryArticleLayoutFromBundleForDiscoveryItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000010028cfd8
- (id)_filterEngagementMessagesForViewCount:(id)arg1;	// IMP=0x000000010028ce3c
- (id)_filterItemsForViewCount:(id)arg1;	// IMP=0x000000010028cca0
- (id)_filterDiscoveryObjectsForOSAndHardwareVersion:(id)arg1;	// IMP=0x000000010028ca38
- (id)_filterNotificationsForOSAndHardwareVersion:(id)arg1;	// IMP=0x000000010028ca2c
- (id)_filterEngagementMessagesForOSAndHardwareVersion:(id)arg1;	// IMP=0x000000010028ca20
- (id)_filterDiscoveryItemsForOSAndHardwareVersion:(id)arg1;	// IMP=0x000000010028ca14
- (id)_filterRulesForOSVersion:(id)arg1;	// IMP=0x000000010028c81c
- (void)_fetchAndWriteBundleFromRemoteBundleURL:(id)arg1 toLocalBundleURL:(id)arg2 processTempBundle:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010028bf6c
- (void)_fetchAndWriteBundleForDiscoveryItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028bda4
- (void)_articleLayoutForDiscoveryItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028b9a0
- (void)_queue_performProcessingDiscoveryObjectsShouldForceBadgeCountUpdate:(_Bool)arg1 withCompletionBlocks:(id)arg2 finalCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010028af48
- (void)_queue_scheduleTaskForNextAction;	// IMP=0x000000010028ac14
- (void)_queue_insertDiscoveryNotificationsIfNecessary;	// IMP=0x0000000100289cb4
- (void)_queue_processExistingDiscoveryUserNotifications:(id)arg1;	// IMP=0x000000010028975c
- (void)_queue_performNextProcessingDiscoveryObjects;	// IMP=0x0000000100289564
- (void)_queue_processDiscoveryItemsAndMessagesShouldForceBadgeCountUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002894f4
- (void)_queue_updateWithServerNotifications:(id)arg1;	// IMP=0x000000010028944c
- (void)_queue_updateWithServerEngagementMessages:(id)arg1;	// IMP=0x00000001002893a4
- (void)_queue_updateWithServerDiscoveryItems:(id)arg1;	// IMP=0x00000001002892fc
- (long long)_currentMessagesBundleVersion;	// IMP=0x00000001002891b4
- (void)_callDelegateWithUpdatedDiscoveryItems:(id)arg1 engagementMessages:(id)arg2;	// IMP=0x0000000100288fd0
- (void)_processUpdatedNotifications;	// IMP=0x0000000100288c88
- (void)_queue_processDiscoveryManifest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028860c
- (void)_processDiscoveryManifest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100288538
- (void)_fetchDiscoverManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002882d0
- (void)_queue_shouldUpdateDiscoveryManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100288010
- (void)_shouldUpdateDiscoveryManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100287f78
- (void)removeDiscoveryUserNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100287be0
- (void)removeDiscoveryMessageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100287a8c
- (void)insertDiscoveryEngagementMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002878c4
- (void)processDiscoveryItemsAndMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100287710
- (void)insertDiscoveryItems:(id)arg1 discoveryArticleLayouts:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100287548
- (void)discoveryItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002873fc
- (void)updateDiscoveryManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002872b4
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x0000000100286cb8
- (void)paymentTransactionUpdated:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x0000000100286a3c
- (_Bool)_shouldReprocessForTransaction:(id)arg1 withLastProcessedForTransactionUpdateDate:(id)arg2;	// IMP=0x000000010028694c
- (void)transitNotificationService:(id)arg1 didAddRenotifyNotificationForMarket:(id)arg2;	// IMP=0x000000010028684c
- (void)transitNotificationService:(id)arg1 didAddOpenLoopUpgradeNotificationForMarket:(id)arg2;	// IMP=0x000000010028674c
- (void)transitNotificationService:(id)arg1 didAddDCINotificationForMarket:(id)arg2;	// IMP=0x000000010028664c
- (void)applyManager:(id)arg1 didUpdateApplication:(id)arg2 oldApplication:(id)arg3;	// IMP=0x000000010028654c
- (void)applyManager:(id)arg1 didRemoveApplication:(id)arg2;	// IMP=0x000000010028644c
- (void)applyManager:(id)arg1 didAddApplication:(id)arg2;	// IMP=0x000000010028634c
- (void)peerPaymentWebServiceCoordinator:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x0000000100285f8c
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x0000000100285e8c
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x0000000100285d8c
- (void)passAdded:(id)arg1;	// IMP=0x0000000100285c8c
- (void)displayedDiscoveryItemWithIdentifier:(id)arg1;	// IMP=0x0000000100285bb0
- (void)displayedDiscoveryEngagementMessageWithIdentifier:(id)arg1;	// IMP=0x0000000100285ad8
- (void)updateDiscoveryEngagementMessageWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100285708
- (void)discoveryEngagementMessagesForPassUniqueIdentifier:(id)arg1 active:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100284d7c
- (void)updateDiscoveryItemWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100284a30
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100284634
- (void)discoveryArticleLayoutsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100283aec
- (void)_paymentWebServiceContextChanged;	// IMP=0x000000010028386c
- (void)_startup;	// IMP=0x000000010028372c
- (void)dealloc;	// IMP=0x0000000100283640
- (id)initWithDatabaseManager:(id)arg1 paymentWebServiceCoordinator:(id)arg2 ruleManager:(id)arg3 accountManager:(id)arg4 applyManager:(id)arg5 peerPaymentWebServiceCoordinator:(id)arg6 transitNotificationService:(id)arg7 userNotificationManager:(id)arg8 transactionProcessor:(id)arg9 delegate:(id)arg10;	// IMP=0x0000000100283254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

