/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <TVContentPartnerKitUI/TVCKDataClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, HSCloudClient, ML3MusicLibrary, NSNumber, TVSBackgroundTask, NSMutableDictionary, NSLock, TVSDocumentLoader, NSTimer, NSMapTable, NSDictionary;

@interface TVCKCloudDataClient : TVCKDataClient {

	mach_timebase_info _timebaseInfo;
	BOOL _servicesInitialized;
	NSObject*<OS_dispatch_queue> _artworkProcessingQueue;
	unsigned short _concurrentArtworkRequestCount;
	BOOL _shouldInitializeMusicAfterDeauthentication;
	BOOL _waitingForURLBag;
	NSArray* _rentalDataItemsFromPendingSongs;
	NSArray* _rentalDataItemsAcquiredDuringPendingSongsRequest;
	BOOL _supportsSaga;
	BOOL _isSagaPurchased;
	BOOL _monitorsCheckedOutRentals;
	BOOL _isFusePurchased;
	BOOL _forceUpdateRentals;
	BOOL _monitorNotificationObserversAdded;
	BOOL _needsToCheckForOutstandingRentals;
	float _musicSyncProgress;
	long long _musicSyncStatus;
	long long _purchaseSyncStatus;
	HSCloudClient* _hsCloudClient;
	ML3MusicLibrary* _mlLibrary;
	NSNumber* _accountDSID;
	TVSBackgroundTask* _jaliscoPushUpdateTask;
	TVSBackgroundTask* _sagaPushUpdateTask;
	TVSBackgroundTask* _itemPropertiesUploadTask;
	NSMutableDictionary* _artworkRequestMap;
	NSLock* _jaliscoRevisionLock;
	NSLock* _sagaRevisionLock;
	TVSDocumentLoader* _storeRentalCheckCountRequest;
	TVSDocumentLoader* _storeRentalItemsRequest;
	NSTimer* _rentalExpirationTimer;
	NSNumber* _rentalsLocalRank;
	NSNumber* _rentalsLocalLastModTime;
	long long _lastRefreshInitiated;
	long long _acquisitionRefreshesRentals;
	NSTimer* _rentalMonitorTimer;
	long long _numCheckedOutRentals;
	NSMapTable* _acquiredItemsDict;
	NSDictionary* _cachedDataItemDictionary;

}

@property (assign,nonatomic) BOOL isSagaPurchased;                                          //@synthesize isSagaPurchased=_isSagaPurchased - In the implementation block
@property (assign,nonatomic) BOOL isFusePurchased;                                          //@synthesize isFusePurchased=_isFusePurchased - In the implementation block
@property (assign,nonatomic) long long musicSyncStatus;                                     //@synthesize musicSyncStatus=_musicSyncStatus - In the implementation block
@property (assign,nonatomic) float musicSyncProgress;                                       //@synthesize musicSyncProgress=_musicSyncProgress - In the implementation block
@property (assign,nonatomic) long long purchaseSyncStatus;                                  //@synthesize purchaseSyncStatus=_purchaseSyncStatus - In the implementation block
@property (nonatomic,retain) HSCloudClient * hsCloudClient;                                 //@synthesize hsCloudClient=_hsCloudClient - In the implementation block
@property (nonatomic,retain) ML3MusicLibrary * mlLibrary;                                   //@synthesize mlLibrary=_mlLibrary - In the implementation block
@property (nonatomic,retain) NSNumber * accountDSID;                                        //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,retain) TVSBackgroundTask * jaliscoPushUpdateTask;                     //@synthesize jaliscoPushUpdateTask=_jaliscoPushUpdateTask - In the implementation block
@property (nonatomic,retain) TVSBackgroundTask * sagaPushUpdateTask;                        //@synthesize sagaPushUpdateTask=_sagaPushUpdateTask - In the implementation block
@property (nonatomic,retain) TVSBackgroundTask * itemPropertiesUploadTask;                  //@synthesize itemPropertiesUploadTask=_itemPropertiesUploadTask - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * artworkRequestMap;                       //@synthesize artworkRequestMap=_artworkRequestMap - In the implementation block
@property (nonatomic,retain) NSLock * jaliscoRevisionLock;                                  //@synthesize jaliscoRevisionLock=_jaliscoRevisionLock - In the implementation block
@property (nonatomic,retain) NSLock * sagaRevisionLock;                                     //@synthesize sagaRevisionLock=_sagaRevisionLock - In the implementation block
@property (nonatomic,retain) TVSDocumentLoader * storeRentalCheckCountRequest;              //@synthesize storeRentalCheckCountRequest=_storeRentalCheckCountRequest - In the implementation block
@property (nonatomic,retain) TVSDocumentLoader * storeRentalItemsRequest;                   //@synthesize storeRentalItemsRequest=_storeRentalItemsRequest - In the implementation block
@property (nonatomic,retain) NSTimer * rentalExpirationTimer;                               //@synthesize rentalExpirationTimer=_rentalExpirationTimer - In the implementation block
@property (nonatomic,retain) NSNumber * rentalsLocalRank;                                   //@synthesize rentalsLocalRank=_rentalsLocalRank - In the implementation block
@property (nonatomic,retain) NSNumber * rentalsLocalLastModTime;                            //@synthesize rentalsLocalLastModTime=_rentalsLocalLastModTime - In the implementation block
@property (assign,nonatomic) long long lastRefreshInitiated;                                //@synthesize lastRefreshInitiated=_lastRefreshInitiated - In the implementation block
@property (assign,nonatomic) long long acquisitionRefreshesRentals;                         //@synthesize acquisitionRefreshesRentals=_acquisitionRefreshesRentals - In the implementation block
@property (assign,nonatomic) BOOL forceUpdateRentals;                                       //@synthesize forceUpdateRentals=_forceUpdateRentals - In the implementation block
@property (nonatomic,retain) NSTimer * rentalMonitorTimer;                                  //@synthesize rentalMonitorTimer=_rentalMonitorTimer - In the implementation block
@property (assign,nonatomic) BOOL monitorNotificationObserversAdded;                        //@synthesize monitorNotificationObserversAdded=_monitorNotificationObserversAdded - In the implementation block
@property (assign,nonatomic) BOOL needsToCheckForOutstandingRentals;                        //@synthesize needsToCheckForOutstandingRentals=_needsToCheckForOutstandingRentals - In the implementation block
@property (assign,nonatomic) long long numCheckedOutRentals;                                //@synthesize numCheckedOutRentals=_numCheckedOutRentals - In the implementation block
@property (nonatomic,retain) NSMapTable * acquiredItemsDict;                                //@synthesize acquiredItemsDict=_acquiredItemsDict - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedDataItemDictionary;                       //@synthesize cachedDataItemDictionary=_cachedDataItemDictionary - In the implementation block
@property (assign,nonatomic) BOOL supportsSaga;                                             //@synthesize supportsSaga=_supportsSaga - In the implementation block
@property (nonatomic,readonly) BOOL isSagaAvailableInStoreFront; 
@property (assign,getter=isSagaEnabled,nonatomic) BOOL sagaEnabled; 
@property (nonatomic,readonly) BOOL isSagaGeniusEnabled; 
@property (nonatomic,readonly) BOOL isJaliscoAvailableInStoreFront; 
@property (getter=isUpdatingRentals,nonatomic,readonly) BOOL updatingRentals; 
@property (assign,nonatomic) BOOL monitorsCheckedOutRentals;                                //@synthesize monitorsCheckedOutRentals=_monitorsCheckedOutRentals - In the implementation block
+(id)sectionIndexTitles;
+(id)cloudDataClient;
-(id)init;
-(void)dealloc;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(NSNumber *)accountDSID;
-(void)setAccountDSID:(NSNumber *)arg1 ;
-(BOOL)isSagaEnabled;
-(void)setSagaEnabled:(BOOL)arg1 ;
-(long long)cloudAddToPlaylistBehavior;
-(void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadGeniusItemsForSagaID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_processRequest:(id)arg1 ;
-(id)_rentals;
-(void)_handleRequest:(id)arg1 ;
-(void)_networkChanged:(id)arg1 ;
-(id)imageKeyForObject:(id)arg1 ;
-(void)cancelLoad:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_urlBagLoaded:(id)arg1 ;
-(void)concreteDataClientConnect;
-(void)concreteDataClientDisconnect;
-(void)executeQuery:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)processQueryAsync:(id)arg1 ;
-(void)_iTunesAccountActivity:(id)arg1 ;
-(void)_itemPropertyUpdateNotification:(id)arg1 ;
-(BOOL)supportsSaga;
-(void)_setSagaEnabled:(BOOL)arg1 ;
-(long long)purchaseSyncStatus;
-(HSCloudClient *)hsCloudClient;
-(ML3MusicLibrary *)mlLibrary;
-(void)_updateSaga;
-(void)_updateJaliscoWithReason:(long long)arg1 ;
-(void)_updateRentals:(BOOL)arg1 ;
-(TVSDocumentLoader *)storeRentalCheckCountRequest;
-(TVSDocumentLoader *)storeRentalItemsRequest;
-(void)_checkinRental:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_checkoutRental:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_acquireWithProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_cancelAcquisition:(id)arg1 ;
-(id)_recentlyAcquiredDataItem;
-(void)_clearRecentlyAcquiredDataItem;
-(id)_startMonitoringItemsOfType:(id)arg1 withItemIDs:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_stopMonitoring:(id)arg1 ;
-(void)_initializeServices;
-(void)_getAccountInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_deinitializeMusic;
-(void)_deinitializeRentals;
-(BOOL)_isRentalQuery:(id)arg1 ;
-(void)_handleRentalQuery:(id)arg1 ;
-(void)processNewArtworkQuery:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleQuery:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_cloudItemIDListForDataItems:(id)arg1 ;
-(void)_initializeMusic;
-(void)_initializeRentals;
-(void)setIsFusePurchased:(BOOL)arg1 ;
-(void)setIsSagaPurchased:(BOOL)arg1 ;
-(BOOL)isSagaPurchased;
-(BOOL)isFusePurchased;
-(void)_iTunesAccountChanged;
-(void)_disableMusic;
-(void)setMusicSyncStatus:(long long)arg1 ;
-(void)_videoItem:(id)arg1 didChangeValuesForProperties:(id)arg2 ;
-(void)_musicItem:(id)arg1 didChangeValuesForProperties:(id)arg2 ;
-(BOOL)isSagaAvailableInStoreFront;
-(BOOL)isSagaGeniusEnabled;
-(BOOL)isJaliscoAvailableInStoreFront;
-(void)loadArtworkURLsForTrackIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadArtworkURLsForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isAlbumArtworkAvailableForTrackID:(id)arg1 ;
-(void)loadArtworkURLsForPlaylistIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)albumStoreIDForPersistentID:(long long)arg1 ;
-(long long)artistStoreIDForPersistentID:(long long)arg1 ;
-(id)representativeItemForAlbumPersistentID:(long long)arg1 ;
-(void)updateSaga;
-(void)updateJalisco;
-(void)updateRentals;
-(void)setNeedsUpdateRentals;
-(BOOL)isUpdatingRentals;
-(void)checkinRental:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)checkoutRental:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)acquireWithProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelAcquisition:(id)arg1 ;
-(id)recentlyAcquiredDataItem;
-(void)clearRecentlyAcquiredDataItem;
-(id)startMonitoringItemsOfType:(id)arg1 withItemIDs:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stopMonitoring:(id)arg1 ;
-(BOOL)canProcessQueryConcurrently:(id)arg1 ;
-(id)mediaItemForDataItem:(id)arg1 ;
-(void)addItemToPlaylist:(id)arg1 item:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)checkStoreSubscriptionIDInLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createPlaylistWithName:(id)arg1 items:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_iTunesAccountSubscriptionStatusChanged;
-(void)_registerDataClientDidUpdateObserver:(/*^block*/id)arg1 ;
-(void)_postDataClientDidUpdateNotificationWithUserInfo:(id)arg1 ;
-(void)setSupportsSaga:(BOOL)arg1 ;
-(long long)musicSyncStatus;
-(float)musicSyncProgress;
-(void)setMusicSyncProgress:(float)arg1 ;
-(void)setPurchaseSyncStatus:(long long)arg1 ;
-(BOOL)monitorsCheckedOutRentals;
-(void)setMonitorsCheckedOutRentals:(BOOL)arg1 ;
-(void)setHsCloudClient:(HSCloudClient *)arg1 ;
-(void)setMlLibrary:(ML3MusicLibrary *)arg1 ;
-(TVSBackgroundTask *)jaliscoPushUpdateTask;
-(void)setJaliscoPushUpdateTask:(TVSBackgroundTask *)arg1 ;
-(TVSBackgroundTask *)sagaPushUpdateTask;
-(void)setSagaPushUpdateTask:(TVSBackgroundTask *)arg1 ;
-(TVSBackgroundTask *)itemPropertiesUploadTask;
-(void)setItemPropertiesUploadTask:(TVSBackgroundTask *)arg1 ;
-(NSMutableDictionary *)artworkRequestMap;
-(void)setArtworkRequestMap:(NSMutableDictionary *)arg1 ;
-(NSLock *)jaliscoRevisionLock;
-(void)setJaliscoRevisionLock:(NSLock *)arg1 ;
-(NSLock *)sagaRevisionLock;
-(void)setSagaRevisionLock:(NSLock *)arg1 ;
-(void)setStoreRentalCheckCountRequest:(TVSDocumentLoader *)arg1 ;
-(void)setStoreRentalItemsRequest:(TVSDocumentLoader *)arg1 ;
-(NSTimer *)rentalExpirationTimer;
-(void)setRentalExpirationTimer:(NSTimer *)arg1 ;
-(NSNumber *)rentalsLocalRank;
-(void)setRentalsLocalRank:(NSNumber *)arg1 ;
-(NSNumber *)rentalsLocalLastModTime;
-(void)setRentalsLocalLastModTime:(NSNumber *)arg1 ;
-(long long)lastRefreshInitiated;
-(void)setLastRefreshInitiated:(long long)arg1 ;
-(long long)acquisitionRefreshesRentals;
-(void)setAcquisitionRefreshesRentals:(long long)arg1 ;
-(BOOL)forceUpdateRentals;
-(void)setForceUpdateRentals:(BOOL)arg1 ;
-(NSTimer *)rentalMonitorTimer;
-(void)setRentalMonitorTimer:(NSTimer *)arg1 ;
-(BOOL)monitorNotificationObserversAdded;
-(void)setMonitorNotificationObserversAdded:(BOOL)arg1 ;
-(BOOL)needsToCheckForOutstandingRentals;
-(void)setNeedsToCheckForOutstandingRentals:(BOOL)arg1 ;
-(long long)numCheckedOutRentals;
-(void)setNumCheckedOutRentals:(long long)arg1 ;
-(NSMapTable *)acquiredItemsDict;
-(void)setAcquiredItemsDict:(NSMapTable *)arg1 ;
-(NSDictionary *)cachedDataItemDictionary;
-(void)setCachedDataItemDictionary:(NSDictionary *)arg1 ;
-(void)_rootCollectionUpdated:(id)arg1 ;
-(id)_sagaGetCloudAccountID;
-(id)_jaliscoGetAccountID;
-(void)_syncJalisco;
-(void)_syncSaga;
-(void)_disableCloudDatabase;
-(void)_stopPeriodicJaliscoUpdate;
-(void)_startPeriodicJaliscoUpdate;
-(void)_registerForMLDatabaseUpdates;
-(void)_updateSyncProgress;
-(void)_getJaliscoDatabaseRevision:(/*^block*/id)arg1 ;
-(BOOL)_shouldSyncCloudLibrary;
-(void)_setLockerAccount;
-(void)_getSagaDatabaseRevision:(/*^block*/id)arg1 ;
-(void)_cloudClientLibraryUpdated:(id)arg1 ;
-(BOOL)_shouldSyncSaga;
-(id)_periodicJaliscoUpdateTask;
-(void)handleGeniusQuery:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleAddQuery:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleDeleteQuery:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryCompleted:(id)arg1 withError:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_getArtworkItemsForPlaylistPID:(id)arg1 uniqueArtists:(BOOL)arg2 ;
-(void)_loadArtworkFromInfoDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_loadPlaylistArtworkForTrackIDs:(id)arg1 query:(id)arg2 imageSize:(CGSize)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)_getArtworkForTrack:(id)arg1 sagaID:(id*)arg2 purchaseID:(id*)arg3 urlString:(id*)arg4 ;
-(void)_processFirstRequest;
-(void)_handleCustomRequest:(id)arg1 ;
-(void)_handleResponse:(id)arg1 responseDict:(id)arg2 forRequest:(id)arg3 error:(id)arg4 cancelled:(BOOL)arg5 ;
-(id)_dataItemsFromStoreResponseDict:(id)arg1 ;
-(void)_addAcquiredItems:(id)arg1 ;
-(void)_acquisitionSucceededForItems:(id)arg1 responseDict:(id)arg2 ;
-(void)_rentalsChanged;
-(void)_musicLibraryContentsChanged;
-(void)_ensureMonitoringSupportSetup;
-(id)_newMonitorTokenWithItemIDs:(id)arg1 type:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_updateMonitoringInfosWithItemIDs:(id)arg1 type:(id)arg2 ;
-(void)_notifyMonitoringClients;
-(BOOL)_isItemWithItemIDRented:(id)arg1 ;
-(void)_updateMonitoringInfosForMovieRentalsWithItemIDs:(id)arg1 ;
-(void)_networkStateChanged:(id)arg1 ;
-(void)_refreshAvailableRentals;
-(void)_rentalDataItemsUpdatedWithNewRentals:(id)arg1 oldRentals:(id)arg2 ;
-(void)_scheduleRentalMonitorTimer;
-(id)_sinfArrayFromSinfs:(id)arg1 ;
-(void)_updateRentalsFromStore;
-(void)_queueRentalRefreshCompleteNotification:(id)arg1 ;
-(id)_rentalsRequestWithStartID:(id)arg1 endID:(id)arg2 ;
-(void)_markItemsAsRented:(id)arg1 ;
-(id)_rentalItemsByMergingNewItems:(id)arg1 intoExistingItems:(id)arg2 ;
-(void)_updateRentalExpirationTask;
-(void)_fetchRentalsFromStore;
-(id)_mediaItemWithEarliestExpirationDate;
-(void)_rentalExpirationTimerFired:(id)arg1 ;
-(void)_addPurchase:(id)arg1 ;
-(void)_rentalMonitorTimerFired:(id)arg1 ;
-(void)_updateBookmarkForMediaItem:(id)arg1 withPropertiesUpdated:(id)arg2 ;
-(void)_checkInOutstandingRentals:(id)arg1 ;
-(id)_cloudItems;
-(id)_rentalsAndPurchases;
@end

