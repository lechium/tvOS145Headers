/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BBDataProviderManagerDelegate.h>
#import <libobjc.A.dylib/BBServerConduitServerInterface.h>
#import <libobjc.A.dylib/BBSettingsGatewayServerInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AFSiriUserNotificationRequestCapabilityObserving.h>
#import <libobjc.A.dylib/BBSectionAuthorizationManagerDelegate.h>
#import <libobjc.A.dylib/BBSyncServiceDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject, BBDataProviderManager, NSMutableSet, BBMaskedSet, NSMutableArray, NSDate, NSDateComponents, BBSyncService, NSXPCListener, BBDismissalSyncCache, BBSectionAuthorizationManager, BBBiometricResource, NSString;

@interface BBServer : NSObject <BBDataProviderManagerDelegate, BBServerConduitServerInterface, BBSettingsGatewayServerInterface, NSXPCListenerDelegate, AFSiriUserNotificationRequestCapabilityObserving, BBSectionAuthorizationManagerDelegate, BBSyncServiceDelegate> {

	NSMutableDictionary* _bulletinRequestsByID;
	NSMutableDictionary* _sectionInfoByID;
	unsigned long long _currentSystemState;
	unsigned long long _globalCounter;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isRunning;
	BBDataProviderManager* _dataProviderManager;
	NSMutableSet* _observers;
	BBMaskedSet* _observerFeedSet;
	NSMutableArray* _observerGateways;
	NSMutableDictionary* _observerGatewaysByName;
	NSMutableDictionary* _observerGatewayEnumerators;
	NSMutableDictionary* _pendingUpdatesByBulletinID;
	NSMutableSet* _settingsGatewayConnections;
	NSMutableDictionary* _activeSectionIDsByCategory;
	NSMutableDictionary* _sortedSectionIDsByCategory;
	NSMutableDictionary* _bulletinsByID;
	NSMutableDictionary* _bulletinIDsBySectionID;
	NSMutableDictionary* _noticeBulletinIDsBySectionID;
	NSMutableArray* _expiringBulletinIDs;
	NSObject*<OS_dispatch_source> _expirationTimer;
	NSMutableArray* _eventBasedExpiringBulletinIDs;
	NSDate* _nextScheduledExpirationTimerFireDate;
	NSDateComponents* _defaultExpirationComponents;
	NSDateComponents* _expirationReferenceComponents;
	NSMutableDictionary* _clearedSections;
	int _serverIsRunningToken;
	BBSyncService* _syncService;
	NSXPCListener* _observerListener;
	NSXPCListener* _conduitListener;
	NSXPCListener* _settingsListener;
	NSMutableSet* _suspendedConnections;
	BBDismissalSyncCache* _dismissalSyncCache;
	BBSectionAuthorizationManager* _sectionAuthorizationManager;
	BBBiometricResource* _biometricResource;
	BOOL _siriAllowedWhenLocked;
	BOOL _siriEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(unsigned long long)pairedDeviceCount;
+(id)_sectionInfoPath;
+(id)_versionedSectionInfoPath;
+(void)writeSectionInfo:(id)arg1 withVersionNumber:(unsigned long long)arg2 ;
+(id)_dataDirectoryPath;
+(id)_clearedSectionsPath;
+(id)savedClearedSections;
+(void)writeClearedSections:(id)arg1 ;
+(id)_sectionOrderPath;
+(BOOL)_removeSavedChronologicalSectionInfos:(id)arg1 ;
+(void)writeSectionInfo:(id)arg1 ;
+(id)_sectionIdentifiersForNonDefaultSectionCategoriesFromSectionInfos:(id)arg1 ;
+(id)_sectionIdentifiersForWeeAppsFromSectionInfos:(id)arg1 ;
+(id)savedSectionInfo;
+(id)_behaviorOverridesPath;
+(id)savedChronologicalSectionOrder;
+(id)savedOrderDictionary;
+(void)writeOrderDictionary:(id)arg1 ;
+(id)savedLegacyOrderArray;
+(void)removeSavedChronologicalSectionInfo:(id)arg1 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_removeObserver:(id)arg1 ;
-(BOOL)isRunning;
-(id)initWithQueue:(id)arg1 ;
-(void)ping:(/*^block*/id)arg1 ;
-(void)_addObserver:(id)arg1 ;
-(void)hasEligibleSetupChanged:(BOOL)arg1 ;
-(void)requestCanBeHandledChanged:(BOOL)arg1 ;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getBulletinsWithHandler:(/*^block*/id)arg1 ;
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getSectionParametersForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 dataProviderManager:(id)arg2 syncService:(id)arg3 dismissalSyncCache:(id)arg4 observerListener:(id)arg5 conduitListener:(id)arg6 settingsListener:(id)arg7 ;
-(void)_addStateCaptureHandlers;
-(void)_clearExpirationTimer;
-(void)_unobserveManagedProfileChanges;
-(void)_addSuspendedConnection:(id)arg1 ;
-(void)_removeSuspendedConnection:(id)arg1 ;
-(void)_removeSettingsGatewayConnection:(id)arg1 ;
-(void)_addSettingsGatewayConnection:(id)arg1 ;
-(unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2 ;
-(void)_addBulletin:(id)arg1 ;
-(void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 ;
-(void)noteFinishedWithBulletinID:(id)arg1 ;
-(void)_modifyBulletin:(id)arg1 ;
-(void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 ;
-(void)_scheduleExpirationForBulletin:(id)arg1 ;
-(void)_removeBulletin:(id)arg1 shouldSync:(BOOL)arg2 ;
-(id)_mapForFeed:(unsigned long long)arg1 ;
-(void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
-(void)removeBulletinID:(id)arg1 fromSection:(id)arg2 inFeed:(unsigned long long)arg3 ;
-(id)bulletinIDsForSectionID:(id)arg1 inFeed:(unsigned long long)arg2 ;
-(id)_effectiveSectionInfoForSectionInfo:(id)arg1 ;
-(id)_sectionInfoForSectionID:(id)arg1 effective:(BOOL)arg2 ;
-(id)_observerGatewaysForFeeds:(unsigned long long)arg1 ;
-(void)_performPendingBulletinUpdatesForBulletinID:(id)arg1 ;
-(void)_sendBulletinUpdate:(id)arg1 ;
-(id)dataProviderForSectionID:(id)arg1 ;
-(void)_enqueueBulletinUpdate:(id)arg1 ;
-(void)_sendRemoveBulletins:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
-(void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(BOOL)arg2 ;
-(void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(BOOL)arg2 shouldSync:(BOOL)arg3 ;
-(void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)_updateAllBulletinsForDataProvider:(id)arg1 ;
-(id)_bulletinsForIDs:(id)arg1 ;
-(void)_removeBulletins:(id)arg1 forSectionID:(id)arg2 shouldSync:(BOOL)arg3 ;
-(void)_dataProviderDidClearInfo:(id)arg1 forSection:(id)arg2 ;
-(id)_allBulletinsForSectionID:(id)arg1 ;
-(void)_writeSectionInfo;
-(void)_writeClearedSections;
-(void)_sendRemoveSection:(id)arg1 ;
-(id)_applicableSectionInfosForBulletin:(id)arg1 inSection:(id)arg2 ;
-(id)allBulletinIDsForSectionID:(id)arg1 ;
-(long long)_effectiveGlobalContentPreviewsSetting;
-(long long)_effectiveGlobalSpokenNotificationSetting;
-(id)_sortedSectionIDs;
-(void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2 ;
-(id)_activeSectionIDs;
-(id)_sectionInfoArrayForSectionIDs:(id)arg1 effective:(BOOL)arg2 ;
-(id)noticesBulletinIDsForSectionID:(id)arg1 ;
-(void)_expireBulletinsAndRescheduleTimerIfNecessary;
-(void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(BOOL)_didNotificationCenterSettingsChangeWithSectionInfo:(id)arg1 replacingSectionInfo:(id)arg2 ;
-(void)_sendUpdateSectionInfo:(id)arg1 ;
-(void)_updateDataProviderForSectionInfo:(id)arg1 sectionID:(id)arg2 ;
-(void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)arg1 ;
-(id)_sectionInfoArray:(BOOL)arg1 ;
-(long long)_globalContentPreviewsSetting;
-(long long)_defaultGlobalContentPreviewSetting;
-(long long)_globalSpokenNotificationSetting;
-(BOOL)_isSpokenNotificationsSupported;
-(void)_expireBulletins;
-(id)_nextExpireBulletinsDate;
-(void)_scheduleTimerForDate:(id)arg1 ;
-(void)deliverResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3 ;
-(id)_newValidatedDefaultExpirationComponentsFromComponents:(id)arg1 ;
-(id)_newDateCompontentsByInvertingInterestingPartsOfComponents:(id)arg1 ;
-(void)_setDefaultExpirationComponents:(id)arg1 ;
-(id)_bulletinDefaultExpirationDateFromDate:(id)arg1 ;
-(unsigned long long)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3 ;
-(void)_storeObserver:(id)arg1 forFeed:(unsigned long long)arg2 ;
-(id)_openApplicationOptionsForResponse:(id)arg1 ;
-(void)_didReceiveResponseForBulletin:(id)arg1 ;
-(void)_clearSection:(id)arg1 ;
-(void)_clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 forSection:(id)arg3 ;
-(void)_clearBulletinIDs:(id)arg1 forSectionID:(id)arg2 shouldSync:(BOOL)arg3 ;
-(id)_sectionInfoArrayForActiveSections:(BOOL)arg1 ;
-(void)_sendObserver:(id)arg1 noticesBulletinsForSectionID:(id)arg2 ;
-(void)_updateGlobalSettings;
-(void)_updateAllSectionInfos;
-(void)_setGlobalContentPreviewsSetting:(long long)arg1 ;
-(void)_setSpokenNotificationsSupported:(BOOL)arg1 ;
-(void)_updateSiriPreferences;
-(void)_updateSpokenNotificationSettings;
-(void)_updateSpokenNotificationControlCenterModuleAvailability;
-(void)_saveGlobalSpokenNotificationSettingEnabledEvent;
-(void)_setGlobalSpokenNotificationSetting:(long long)arg1 ;
-(id)universalSectionIDForSectionID:(id)arg1 ;
-(id)bulletinsRequestsForBulletinIDs:(id)arg1 ;
-(id)bulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 ;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)effectivePushSettingsForSectionInfo:(id)arg1 ;
-(void)_setSectionInfoNoteSettingsChanged:(id)arg1 forSectionID:(id)arg2 ;
-(void)_updateBulletinsInFeed:(unsigned long long)arg1 ifSectionIsEnabled:(id)arg2 ;
-(void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3 ;
-(void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2 ;
-(void)_reloadSectionParametersForSectionID:(id)arg1 ;
-(void)_reloadReloadSectionInfoForSectionID:(id)arg1 ;
-(void)_updateClearedInfoForSectionID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_updateSectionInfoForSectionID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_clearedInfoForSectionID:(id)arg1 ;
-(void)_saveUpdatedClearedInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)_saveUpdatedSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(id)_sectionIDsToMigrate;
-(void)_loadDataProvidersAndSettings;
-(void)_removeVestigialSections:(id)arg1 ;
-(void)_migrateSectionIDs:(id)arg1 ;
-(void)_migrateContentPreviewSettings:(id)arg1 ;
-(void)_siriPreferencesDidChange:(id)arg1 ;
-(void)_loadSystemCapabilities;
-(void)_ensureDataDirectoryExists;
-(void)_migrateSectionInfoIfNeeded;
-(void)_loadSavedSectionInfo;
-(void)_loadClearedSections;
-(void)_migrateLoadedData;
-(void)_publishBulletinsForAllDataProviders;
-(void)_resumeAllSuspendedConnectionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_observeManagedProfileChanges;
-(void)_updateSectionParametersForDataProvider:(id)arg1 ;
-(void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProviderIfSectionIsEnabled:(id)arg2 ;
-(id)_enabledSectionIDsForDataProvider:(id)arg1 ;
-(void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProvider:(id)arg2 enabledSectionIDs:(id)arg3 ;
-(id)_sinceDate;
-(BOOL)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2 ;
-(void)updateSection:(id)arg1 inFeed:(unsigned long long)arg2 withBulletinRequests:(id)arg3 ;
-(void)_sendBulletinsLoadedForSectionID:(id)arg1 ;
-(void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2 ;
-(void)_addActiveSectionID:(id)arg1 ;
-(void)_removeSection:(id)arg1 ;
-(id)_bulletinsForSectionID:(id)arg1 inFeeds:(unsigned long long)arg2 ;
-(void)_expireBulletinsDueToSystemEvent:(unsigned long long)arg1 ;
-(id)sectionIDsForUniversalSectionID:(id)arg1 ;
-(unsigned long long)_pairedDeviceCount;
-(void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3 ;
-(void)dpManager:(id)arg1 addParentSectionFactory:(id)arg2 ;
-(void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2 ;
-(id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2 ;
-(void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(BOOL)arg2 ;
-(void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(/*^block*/id)arg2 ;
-(void)getEffectiveGlobalContentPreviewsSettingWithHandler:(/*^block*/id)arg1 ;
-(void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getEffectiveGlobalSpokenNotificationSettingWithHandler:(/*^block*/id)arg1 ;
-(void)setEffectiveGlobalSpokenNotificationSetting:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getEffectiveSectionInfoWithHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getEffectiveSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)getSectionIDsWithHandler:(/*^block*/id)arg1 ;
-(void)didChangeEffectiveAuthorizationStatusForSectionID:(id)arg1 ;
-(void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5 ;
-(BOOL)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2 ;
-(id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2 ;
-(id)syncService:(id)arg1 sectionIdentifiersForUniversalSectionIdentifier:(id)arg2 ;
-(void)publishBulletin:(id)arg1 destinations:(unsigned long long)arg2 ;
-(void)withdrawBulletinID:(id)arg1 ;
-(void)removeBulletinID:(id)arg1 fromNoticesSection:(id)arg2 ;
-(id)carBulletinIDsForSectionID:(id)arg1 ;
-(id)_observersForNoticesFeed;
-(void)clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(BOOL)arg2 ;
-(void)_sortSectionIDs:(id)arg1 usingOrder:(id)arg2 ;
-(void)_handleSystemSleep;
-(void)_handleSystemWake;
-(void)_handleSignificantTimeChange;
-(void)_validateExpirationDateForBulletinRequest:(id)arg1 ;
-(void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 attachToLightsAndSirensGateway:(id)arg3 ;
-(void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 asLightsAndSirensGateway:(id)arg3 priority:(unsigned long long)arg4 ;
-(void)observer:(id)arg1 handleResponse:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 clearSection:(id)arg2 ;
-(void)observer:(id)arg1 clearBulletinsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4 ;
-(void)observer:(id)arg1 clearBulletinIDs:(id)arg2 inSection:(id)arg3 ;
-(void)observer:(id)arg1 removeBulletins:(id)arg2 inSection:(id)arg3 fromFeeds:(unsigned long long)arg4 ;
-(void)observer:(id)arg1 getSectionInfoWithHandler:(/*^block*/id)arg2 ;
-(void)observer:(id)arg1 getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg2 ;
-(void)observer:(id)arg1 getSectionInfoForSectionIDs:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)observer:(id)arg1 requestNoticesBulletinsForSectionID:(id)arg2 ;
-(void)requestNoticesBulletinsForAllSections:(id)arg1 ;
-(void)_biometricResourceStateChanged;
-(void)loadDataProvidersAndSettings;
-(unsigned long long)_filtersForSectionID:(id)arg1 ;
-(void)_removeActiveSectionID:(id)arg1 ;
-(BOOL)_deviceSupportsFavorites;
-(void)_queue_managedUserNotificationsSetttingsDidChange;
-(void)noteChangeOfState:(unsigned long long)arg1 newValue:(BOOL)arg2 ;
-(void)noteOccurrenceOfEvent:(unsigned long long)arg1 ;
-(void)_assignIDToBulletinRequest:(id)arg1 ;
-(void)_updateShowsMessagePreviewForBulletin:(id)arg1 ;
-(id)_bulletinRequestsForIDs:(id)arg1 ;
-(void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2 ;
@end

