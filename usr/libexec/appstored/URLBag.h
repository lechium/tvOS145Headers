//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSBagProtocol-Protocol.h"
#import "AdoptionContract-Protocol.h"
#import "AppUsageBagContract-Protocol.h"
#import "ArcadeBagContract-Protocol.h"
#import "AutoUpdateBagContract-Protocol.h"
#import "BuildToolsBagContract-Protocol.h"
#import "CrossfireBagContract-Protocol.h"
#import "DRMRecovery-Protocol.h"
#import "IAPInfoBagContract-Protocol.h"
#import "OnDemandResourcesBagContract-Protocol.h"
#import "OwnsCheckBagContract-Protocol.h"
#import "PersonalizationBagContract-Protocol.h"
#import "PlatformConextBagContract-Protocol.h"
#import "PurchaseHistoryBagContract-Protocol.h"
#import "PushNotificationBagContract-Protocol.h"
#import "StoreKitBagContract-Protocol.h"
#import "StoreQueueBagContract-Protocol.h"
#import "SubscriptionEntitlementsBagContract-Protocol.h"
#import "SystemAppsBagContract-Protocol.h"
#import "TestFlightExtensionBagContract-Protocol.h"
#import "TestFlightFeedbackBagContract-Protocol.h"
#import "UpdatesBagContract-Protocol.h"
#import "WatchSyncBagContract-Protocol.h"
#import "WelcomeToAppStoreNotificationBagContract-Protocol.h"

@class AMSBagValue, AMSProcessInfo, NSDate, NSString, URLBagMemoizedValue;
@protocol AMSBagProtocol;

@interface URLBag : NSObject <AMSBagProtocol, AdoptionContract, AppUsageBagContract, ArcadeBagContract, AutoUpdateBagContract, BuildToolsBagContract, DRMRecovery, CrossfireBagContract, OnDemandResourcesBagContract, OwnsCheckBagContract, PlatformConextBagContract, PersonalizationBagContract, IAPInfoBagContract, PurchaseHistoryBagContract, SubscriptionEntitlementsBagContract, UpdatesBagContract, StoreKitBagContract, StoreQueueBagContract, PushNotificationBagContract, SystemAppsBagContract, TestFlightFeedbackBagContract, TestFlightExtensionBagContract, WatchSyncBagContract, WelcomeToAppStoreNotificationBagContract>
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    _Bool expired;	// 16 = 0x10
    NSDate *expirationDate;	// 24 = 0x18
    NSString *profile;	// 32 = 0x20
    NSString *profileVersion;	// 40 = 0x28
}

+ (id)_keySet;	// IMP=0x0000000100174a80
+ (id)sandboxBag;	// IMP=0x00000001001733dc
+ (id)octaneBag;	// IMP=0x0000000100173364
+ (id)defaultBag;	// IMP=0x00000001001732f8
- (void).cxx_destruct;	// IMP=0x0000000100175b74
@property(readonly, nonatomic, getter=isExpired) _Bool expired; // @synthesize expired;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate;
@property(readonly) AMSBagValue *welcomeToAppStoreActionURL;
@property(readonly) AMSBagValue *welcomeToAppStoreActionButton;
@property(readonly) AMSBagValue *welcomeToAppStoreDontRemindMe;
@property(readonly) AMSBagValue *welcomeToAppStoreRemindMe;
@property(readonly) AMSBagValue *welcomeToAppStoreLaterButton;
@property(readonly) AMSBagValue *welcomeToAppStoreMessage;
@property(readonly) AMSBagValue *welcomeToAppStoreTitle;
@property(readonly) AMSBagValue *welcomeToAppStoreSample;
@property(readonly) AMSBagValue *welcomeToAppStoreDelay;
@property(readonly) AMSBagValue *watchSuppressDialogs;
@property(readonly) AMSBagValue *watchRequestThrottle;
- (id)updatesReloadIntervalCellular;	// IMP=0x0000000100174960
- (id)updatesReloadInterval;	// IMP=0x0000000100174948
- (id)updateProductContentType;	// IMP=0x0000000100174930
- (id)v2UpdateSchedulingEnabled;	// IMP=0x0000000100174918
- (id)viewUpdatesRequestURL;	// IMP=0x0000000100174900
- (id)updateUsingOptimizedRequest;	// IMP=0x00000001001748e8
- (id)doNotUpdateList;	// IMP=0x00000001001748d0
- (id)availableUpdatesRequestURL;	// IMP=0x00000001001748b8
@property(readonly) AMSBagValue *testFlightExtensionSyncGracePeriodMinutes;
@property(readonly) AMSBagValue *testFlightExtensionSyncIntervalMinutes;
@property(readonly) AMSBagValue *testFlightExtensionPushEnabled;
@property(readonly) AMSBagValue *testFlightExtensionEnabled;
@property(readonly) AMSBagValue *uploadFeedbackURL;
@property(readonly) AMSBagValue *getImageUploadURLsURL;
@property(readonly) AMSBagValue *backoffRandomRange;
@property(readonly) AMSBagValue *backoffDelays;
@property(readonly) AMSBagValue *hideableSystemAppsForWatch;
@property(readonly) AMSBagValue *hideableSystemApps;
@property(readonly) AMSBagValue *pendingAppsURL;
@property(readonly) AMSBagValue *completeStoreDownloadURL;
@property(readonly) AMSBagValue *automaticDownloadsURL;
@property(readonly, nonatomic) AMSBagValue *redeemCodeURL;
@property(readonly, nonatomic) AMSBagValue *StoreKitMessagesEndpointURL;
@property(readonly, nonatomic) AMSBagValue *restoreTransactionsURL;
@property(readonly, nonatomic) AMSBagValue *renewVPPReceiptURL;
@property(readonly, nonatomic) AMSBagValue *productOffersBatchSize;
@property(readonly, nonatomic) AMSBagValue *productOffersURL;
@property(readonly, nonatomic) AMSBagValue *installAttributionStartEndWindow;
@property(readonly, nonatomic) AMSBagValue *installAttributionLowFidelityCap;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxImpressionsAge;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxPingbackRetries;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxPingbackAge;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxLowFidelityParamsAge;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxParamsAge;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxCampaignNumber;
@property(readonly, nonatomic) AMSBagValue *inAppTransactionDoneURL;
@property(readonly, nonatomic) AMSBagValue *inAppPendingQueueCountURL;
@property(readonly, nonatomic) AMSBagValue *inAppPendingQueueURL;
@property(readonly, nonatomic) AMSBagValue *disablePurchaseIntentNotifications;
@property(readonly, nonatomic) AMSBagValue *createAppReceiptURL;
@property(readonly, nonatomic) AMSBagValue *countryCode;
@property(readonly, nonatomic) AMSBagValue *appleIDLookupURL;
@property(readonly, nonatomic) URLBagMemoizedValue *subscriptionEntitlementsRefreshIntervalInSeconds;
@property(readonly) AMSBagValue *subscriptionEntitlementsTimeout;
@property(readonly) AMSBagValue *subscriptionEntitlementsURL;
- (id)URLForKey:(id)arg1;	// IMP=0x00000001001744fc
- (id)stringForKey:(id)arg1;	// IMP=0x00000001001744ec
- (id)integerForKey:(id)arg1;	// IMP=0x00000001001744dc
- (id)doubleForKey:(id)arg1;	// IMP=0x00000001001744cc
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0000000100174280
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100174270
- (id)boolForKey:(id)arg1;	// IMP=0x0000000100174260
- (id)arrayForKey:(id)arg1;	// IMP=0x0000000100174250
@property(readonly) AMSBagValue *removePushTypeURL;
@property(readonly) AMSBagValue *registerPushTokenURL;
@property(readonly) AMSBagValue *pushNotificationEnvironment;
@property(readonly) AMSBagValue *addPushTypeURL;
@property(readonly) AMSBagValue *PurchaseHistoryUpdatePollingFrequencySeconds;
@property(readonly) AMSBagValue *PurchaseHistoryPurchaseRefreshEnabled;
@property(readonly) AMSBagValue *PurchaseHistoryForcedRefreshMinutes;
@property(readonly) AMSBagValue *PurchaseHistoryDatabaseID;
@property(readonly) AMSBagValue *PurchaseHistoryBaseURL;
@property(readonly, nonatomic) AMSBagValue *manageSubsOnAppDeleteBlacklist;
@property(readonly) AMSBagValue *IAPInfoUpdatePollingFrequencySeconds;
@property(readonly) AMSBagValue *IAPInfoForcedRefreshMinutes;
@property(readonly) AMSBagValue *IAPInfoDatabaseID;
@property(readonly) AMSBagValue *IAPInfoBaseURL;
@property(readonly) AMSBagValue *clusterMappingRefreshFrequencySeconds;
@property(readonly) AMSBagValue *clusterMappingURL;
@property(readonly) URLBagMemoizedValue *appUsageSamplingPercentage;
@property(readonly) AMSBagValue *appUsageResetActorIDFrequencySeconds;
@property(readonly) URLBagMemoizedValue *appUsagePostsPerDay;
@property(readonly) URLBagMemoizedValue *appUsagePostSpreadPeriodSeconds;
@property(readonly) URLBagMemoizedValue *appUsagePostGracePeriodSeconds;
@property(readonly) AMSBagValue *ownsCheckURL;
@property(readonly) AMSBagValue *odrURL;
@property(readonly) URLBagMemoizedValue *crossfireIncludeLaunches;
@property(readonly) URLBagMemoizedValue *crossfireSamplingPercentage;
@property(readonly) URLBagMemoizedValue *crossfirePostIntervalSeconds;
@property(readonly) AMSBagValue *drmRecovery;
@property(readonly) AMSBagValue *invalidBuildToolVersions;
@property(readonly) AMSBagValue *deltaIncompatibleBuildToolVersions;
@property(readonly) AMSBagValue *autoUpdateReloadIntervalCellular;
@property(readonly) AMSBagValue *autoUpdateReloadIntervalSeconds;
@property(readonly) AMSBagValue *arcadeSubscriptionGroupIdentifier;
@property(readonly) URLBagMemoizedValue *appUsageFlushIntervalSeconds;
@property(readonly, nonatomic) AMSBagValue *enableMacOSCompatibleIOSAppsForCarry;
@property(readonly, nonatomic) AMSBagValue *enableMacOSCompatibleIOSApps;
@property(readonly) AMSBagValue *unadoptURL;
@property(readonly) AMSBagValue *adoptionEligibilityURL;
@property(readonly) AMSBagValue *adoptProductsURL;
@property(readonly, nonatomic) AMSBagValue *switchArcadeUserURL;
@property(readonly, nonatomic) AMSBagValue *switchArcadeUserFallbackURL;
@property(readonly, nonatomic) AMSBagValue *sbsyncRefreshIntervalSeconds;
@property(readonly, nonatomic) AMSBagValue *sbsyncSandboxURL;
@property(readonly, nonatomic) AMSBagValue *sbsyncProductionURL;
@property(readonly, nonatomic) URLBagMemoizedValue *ocelotPostPayoutIntervalSeconds;
@property(readonly, nonatomic) URLBagMemoizedValue *ocelotPostIntervalSeconds;
@property(readonly, nonatomic) URLBagMemoizedValue *ocelotPayoutQualifyingDurationSeconds;
@property(readonly, nonatomic) URLBagMemoizedValue *ocelotDeviceIDDaysValid;
@property(readonly, nonatomic) URLBagMemoizedValue *arcadeLaunchTimeoutIntervalSeconds;
@property(readonly, nonatomic) AMSBagValue *lowDataPromptThreshold;
@property(readonly, nonatomic) AMSBagValue *contentRestoreURL;
@property(readonly, nonatomic) AMSBagValue *contentRestoreMaxItemCount;
@property(readonly, nonatomic) AMSBagValue *upToDateClaimURL;
@property(readonly, nonatomic) AMSBagValue *authorizeURL;
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile;
@property(readonly, nonatomic) AMSBagValue *storefront;
@property(readonly) AMSBagValue *unpersonalizedLookupURL;
@property(readonly) AMSBagValue *personalizedLookupURL;
@property(readonly) AMSBagValue *mescalSignedActions;
- (id)initWithOctane;	// IMP=0x0000000100173598
- (id)initWithSandbox:(_Bool)arg1;	// IMP=0x0000000100173468
- (id)init;	// IMP=0x0000000100173458

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end
