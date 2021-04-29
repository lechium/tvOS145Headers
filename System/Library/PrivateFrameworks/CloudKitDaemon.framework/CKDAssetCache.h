/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, NSObject;
@class CKDMMCS, CKSQLitePool, NSString, NSObject, NSOperationQueue, NSMutableDictionary, NSMutableSet;

@interface CKDAssetCache : NSObject {

	BOOL _isUnitTestingAccount;
	BOOL _hasMigrated;
	BOOL _isEvictionScheduled;
	BOOL _didDrop;
	int _fileDownloadPathFd;
	CKDMMCS* _MMCS;
	CKSQLitePool* _dbPool;
	NSString* _fileDownloadPath;
	NSString* _applicationBundleID;
	NSString* _dbPath;
	NSString* _fileStagingPath;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _opQueue;
	long long _checkoutCount;
	id<NSObject> _assetHandleExpirationNotificationObserver;
	NSMutableDictionary* _volumeUUIDByVolumeIndex;
	NSMutableDictionary* _volumeIndexByVolumeUUID;
	NSMutableSet* _deferredDeletedAssetHandles;
	NSMutableDictionary* _deferredLastUsedTimeByTrackingUUID;

}

@property (nonatomic,retain) NSString * applicationBundleID;                                        //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * dbPath;                                                     //@synthesize dbPath=_dbPath - In the implementation block
@property (nonatomic,retain) NSString * fileStagingPath;                                            //@synthesize fileStagingPath=_fileStagingPath - In the implementation block
@property (nonatomic,retain) NSString * fileDownloadPath;                                           //@synthesize fileDownloadPath=_fileDownloadPath - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * opQueue;                                            //@synthesize opQueue=_opQueue - In the implementation block
@property (assign,nonatomic) int fileDownloadPathFd;                                                //@synthesize fileDownloadPathFd=_fileDownloadPathFd - In the implementation block
@property (assign) BOOL isEvictionScheduled;                                                        //@synthesize isEvictionScheduled=_isEvictionScheduled - In the implementation block
@property (assign,nonatomic) BOOL hasMigrated;                                                      //@synthesize hasMigrated=_hasMigrated - In the implementation block
@property (assign,nonatomic) BOOL didDrop;                                                          //@synthesize didDrop=_didDrop - In the implementation block
@property (assign,nonatomic) long long checkoutCount;                                               //@synthesize checkoutCount=_checkoutCount - In the implementation block
@property (nonatomic,retain) id<NSObject> assetHandleExpirationNotificationObserver;                //@synthesize assetHandleExpirationNotificationObserver=_assetHandleExpirationNotificationObserver - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * volumeUUIDByVolumeIndex;                         //@synthesize volumeUUIDByVolumeIndex=_volumeUUIDByVolumeIndex - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * volumeIndexByVolumeUUID;                         //@synthesize volumeIndexByVolumeUUID=_volumeIndexByVolumeUUID - In the implementation block
@property (nonatomic,retain) NSMutableSet * deferredDeletedAssetHandles;                            //@synthesize deferredDeletedAssetHandles=_deferredDeletedAssetHandles - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deferredLastUsedTimeByTrackingUUID;              //@synthesize deferredLastUsedTimeByTrackingUUID=_deferredLastUsedTimeByTrackingUUID - In the implementation block
@property (assign,nonatomic,__weak) CKDMMCS * MMCS;                                                 //@synthesize MMCS=_MMCS - In the implementation block
@property (nonatomic,readonly) CKSQLitePool * dbPool;                                               //@synthesize dbPool=_dbPool - In the implementation block
@property (assign,nonatomic) BOOL isUnitTestingAccount;                                             //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
+(id)assetCacheWithApplicationBundleID:(id)arg1 assetDirectoryContext:(id)arg2 didInit:(BOOL*)arg3 error:(id*)arg4 ;
+(id)_sharedCachesQueue;
+(id)_sharedCachesByPath;
+(int)openFdForDownloadPath:(id)arg1 error:(id*)arg2 ;
+(void)registerExpirationForAssetHandles;
-(void)dealloc;
-(void)cleanup;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)hasMigrated;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)applicationBundleID;
-(NSOperationQueue *)opQueue;
-(BOOL)isUnitTestingAccount;
-(void)setIsUnitTestingAccount:(BOOL)arg1 ;
-(void)clearAssetCache;
-(unsigned long long)countAssetCacheItems;
-(void)showAssetCache;
-(void)drop;
-(CKSQLitePool *)dbPool;
-(CKDMMCS *)MMCS;
-(void)setFileStagingPath:(NSString *)arg1 ;
-(void)setFileDownloadPath:(NSString *)arg1 ;
-(void)setMMCS:(CKDMMCS *)arg1 ;
-(void)cancelExpiryTimer;
-(unsigned long long)evictAllFilesForced:(BOOL)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(NSString *)dbPath;
-(id)trackDownloadedData:(id)arg1 signature:(id)arg2 error:(id*)arg3 ;
-(id)trackCachedButNotRegisteredMMCSItems:(id)arg1 error:(id*)arg2 ;
-(void)stopTrackingAssetHandlesByItemIDs:(id)arg1 ;
-(long long)checkoutCount;
-(void)setCheckoutCount:(long long)arg1 ;
-(BOOL)didDrop;
-(void)setDidDrop:(BOOL)arg1 ;
-(NSString *)fileDownloadPath;
-(void)setupPersistentStateAtStartup;
-(void)checkAssetHandlesForRegisteredMMCSItems:(id)arg1 ;
-(void)unregisterItemIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)updateAssetHandlesForRegisteredMMCSItems:(id)arg1 error:(id*)arg2 ;
-(id)_initWithApplicationBundleID:(id)arg1 assetDirectoryContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)initDatabaseWithError:(id*)arg1 ;
-(void)setAssetHandleExpirationNotificationObserver:(id<NSObject>)arg1 ;
-(void)_setVolumeIndex:(id)arg1 forVolumeUUID:(id)arg2 ;
-(id)existingOrNewVolumeIndexForVolumeUUID:(id)arg1 usingDB:(id)arg2 ;
-(id)volumeUUIDWithVolumeIndex:(id)arg1 ;
-(id)existingOrNewVolumeIndexForVolumeUUID:(id)arg1 ;
-(void)expireAssetHandlesIfNecessaryWithGroup:(id)arg1 ;
-(unsigned long long)_clearForced:(BOOL)arg1 group:(id)arg2 ;
-(unsigned long long)_evictWithEvictionInfo:(id)arg1 ;
-(void)scheduleUnregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)deviceIDForVolumeIndex:(id)arg1 ;
-(id)assetHandleWithCachedPath:(id)arg1 ;
-(void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1 deleteUnregisteredAssetHandlesWithIDs:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_saveData:(id)arg1 error:(id*)arg2 ;
-(id)existingOrNewVolumeIndexForDeviceID:(id)arg1 ;
-(id)existingOrNewVolumeIndexForDeviceID:(id)arg1 usingDB:(id)arg2 ;
-(void)unregisterDeferredItemIDs:(id)arg1 andDeleteAssetHandles:(id)arg2 usingDB:(id)arg3 ;
-(void)updateDeferredLastAccessTimeForUUIDsUsingDB:(id)arg1 ;
-(void)_scheduleEvictionForDownloadedFiles;
-(void)_scheduleExpirationForAssetHandles;
-(int)fileDownloadPathFd;
-(id)_getAssetHandlesForDownloadedMMCSItems:(id)arg1 error:(id*)arg2 ;
-(id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)arg1 error:(id*)arg2 ;
-(NSMutableSet *)deferredDeletedAssetHandles;
-(BOOL)parseCachedPath:(id)arg1 assetHandleUUIDString:(id*)arg2 assetSignatureString:(id*)arg3 ;
-(BOOL)parseCachedPath:(id)arg1 assetHandleUUID:(id*)arg2 assetSignature:(id*)arg3 ;
-(BOOL)isEvictionScheduled;
-(void)setIsEvictionScheduled:(BOOL)arg1 ;
-(unsigned long long)_evictDownloadedFilesEvictionInfo:(id)arg1 ;
-(unsigned long long)_evictDownloadedFilesWithDatabase:(id)arg1 evictionInfo:(id)arg2 ;
-(void)_expireAssetHandlesWithExpiryDate:(id)arg1 group:(id)arg2 ;
-(void)_expireAssetHandlesWithGroup:(id)arg1 ;
-(void)setHasMigrated:(BOOL)arg1 ;
-(void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumesWithDB:(id)arg1 ;
-(void)_resetAssetInflightUsingDB:(id)arg1 ;
-(void)forgetVolumeUUID:(id)arg1 ;
-(unsigned long long)clearForced:(BOOL)arg1 ;
-(void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1 ;
-(id)updateAssetHandlesForChunkedMMCSItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateAssetHandlesForGetMMCSItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateAssetHandlesForPutMMCSItems:(id)arg1 error:(id*)arg2 ;
-(id)trackDownloadedMMCSItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)startTrackingRegisterOrPutAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id*)arg3 ;
-(BOOL)startTrackingGetAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id*)arg3 ;
-(void)deferredStopTrackingAssetHandlesByItemIDs:(id)arg1 ;
-(id)findAssetHandleForItemID:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)deferredUpdateLastTimeUsedForUUID:(id)arg1 ;
-(unsigned long long)predictedEvictedSizeForAllFilesForced:(BOOL)arg1 ;
-(void)setDbPath:(NSString *)arg1 ;
-(NSString *)fileStagingPath;
-(void)setOpQueue:(NSOperationQueue *)arg1 ;
-(void)setFileDownloadPathFd:(int)arg1 ;
-(id<NSObject>)assetHandleExpirationNotificationObserver;
-(NSMutableDictionary *)volumeUUIDByVolumeIndex;
-(void)setVolumeUUIDByVolumeIndex:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)volumeIndexByVolumeUUID;
-(void)setVolumeIndexByVolumeUUID:(NSMutableDictionary *)arg1 ;
-(void)setDeferredDeletedAssetHandles:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)deferredLastUsedTimeByTrackingUUID;
-(void)setDeferredLastUsedTimeByTrackingUUID:(NSMutableDictionary *)arg1 ;
@end

