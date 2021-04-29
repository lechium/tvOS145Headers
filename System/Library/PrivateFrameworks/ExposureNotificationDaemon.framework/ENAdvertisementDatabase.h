/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
@class NSString, ENAdvertisementSQLiteStore, ENQueryFilter, NSNumber;

@interface ENAdvertisementDatabase : NSObject {

	SCD_Struct_EN6* _advertisementInsertionCache;
	unsigned _advertisementInsertionCacheCount;
	unsigned _advertisementInsertionIndex;
	BOOL _advertisementInsertionCacheOverflowed;
	unsigned long long _previousStoreFullAlertTimestamp;
	NSString* _databaseFolderPath;
	ENAdvertisementSQLiteStore* _centralStore;
	ENAdvertisementSQLiteStore* _temporaryStore;
	/*^block*/id _errorMetricReporter;
	unsigned long long _currentStoreType;
	ENQueryFilter* _inlineQueryFilter;
	unsigned long long _droppedAdvertisementCount;
	double _storageFullAlertInterval;

}

@property (nonatomic,readonly) unsigned long long currentStoreType;                       //@synthesize currentStoreType=_currentStoreType - In the implementation block
@property (nonatomic,readonly) BOOL temporaryStoresPresent; 
@property (nonatomic,retain) ENQueryFilter * inlineQueryFilter;                           //@synthesize inlineQueryFilter=_inlineQueryFilter - In the implementation block
@property (nonatomic,readonly) NSNumber * storedAdvertisementCount; 
@property (nonatomic,readonly) unsigned long long droppedAdvertisementCount;              //@synthesize droppedAdvertisementCount=_droppedAdvertisementCount - In the implementation block
@property (assign,nonatomic) double storageFullAlertInterval;                             //@synthesize storageFullAlertInterval=_storageFullAlertInterval - In the implementation block
+(BOOL)purgeAllStoresInPath:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)flushCache;
-(id)queryFilterWithBufferSize:(unsigned long long)arg1 hashCount:(unsigned long long)arg2 attenuationThreshold:(unsigned char)arg3 ;
-(void)setInlineQueryFilter:(ENQueryFilter *)arg1 ;
-(id)advertisementsBufferMatchingDailyKeys:(id)arg1 attenuationThreshold:(unsigned char)arg2 timestampTolerance:(double)arg3 ;
-(NSNumber *)storedAdvertisementCount;
-(id)beaconCountMetricsWithStartDate:(id)arg1 endDate:(id)arg2 windowDuration:(double)arg3 ;
-(id)initWithDatabaseFolderPath:(id)arg1 cacheCount:(unsigned long long)arg2 ;
-(id)initWithDatabaseFolderPath:(id)arg1 cacheCount:(unsigned long long)arg2 errorMetricReporter:(/*^block*/id)arg3 ;
-(BOOL)openStoreAndReturnError:(id*)arg1 ;
-(void)reportErrorMetric:(unsigned)arg1 ;
-(BOOL)openCentralStoreAndReturnError:(id*)arg1 ;
-(BOOL)mergeTemporaryStores;
-(BOOL)openTemporaryStore;
-(void)reportStoreError:(id)arg1 ;
-(void)closeAllStores;
-(BOOL)mergeStores:(id)arg1 ;
-(id)currentStore;
-(unsigned)cacheRecordCount;
-(void)displayStorageFullAlert;
-(BOOL)switchToCentralStore;
-(id)matchingAdvertisementBufferForRPIBuffer:(id)arg1 exposureKeys:(id)arg2 ;
-(BOOL)purgeAdvertismentsSeenBeforeDate:(id)arg1 ;
-(BOOL)temporaryStoresPresent;
-(BOOL)mergeStoresFromFolderPath:(id)arg1 ;
-(BOOL)saveContactTracingAdvertisement:(id)arg1 ;
-(id)createQuerySessionWithAttenuationThreshold:(unsigned char)arg1 queue:(id)arg2 error:(id*)arg3 ;
-(BOOL)purgeAdvertismentsOlderThan:(double)arg1 ;
-(BOOL)purgeAllStoresInActiveDatabasePath;
-(BOOL)cloneDatabaseTo:(id)arg1 ;
-(unsigned long long)currentStoreType;
-(ENQueryFilter *)inlineQueryFilter;
-(unsigned long long)droppedAdvertisementCount;
-(double)storageFullAlertInterval;
-(void)setStorageFullAlertInterval:(double)arg1 ;
@end

