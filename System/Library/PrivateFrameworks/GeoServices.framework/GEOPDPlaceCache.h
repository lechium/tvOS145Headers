/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOPDPlaceCacheSchedulingDelegate.h>
#import <libobjc.A.dylib/GEOPDPlaceCacheManifestInfoProviding.h>

@protocol GEOPDPlaceCacheSchedulingDelegate, GEOPDPlaceCacheManifestInfoProviding, OS_dispatch_source;
@class NSArray, GEOSQLiteDB, NSObject, NSMutableDictionary, NSMutableOrderedSet;

@interface GEOPDPlaceCache : NSObject <GEOPDPlaceCacheSchedulingDelegate, GEOPDPlaceCacheManifestInfoProviding> {

	GEOSQLiteDB* _db;
	id<GEOPDPlaceCacheSchedulingDelegate> _schedulingDelegate;
	id<GEOPDPlaceCacheManifestInfoProviding> _manifestInfoProvider;
	NSObject*<OS_dispatch_source> _cleanupTimer;
	NSMutableDictionary* _accessTimesDict;
	NSMutableOrderedSet* _recentlySeenPlaceHashes;

}

@property (nonatomic,readonly) NSArray * serviceVersions; 
-(void)dealloc;
-(void)close;
-(void)_localeChanged:(id)arg1 ;
-(unsigned long long)_shrinkBySize:(unsigned long long)arg1 ;
-(unsigned long long)shrinkBySizeSync:(unsigned long long)arg1 ;
-(long long)currentTime;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(void)shrinkBySize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(unsigned long long)calculateFreeableSpaceSync;
-(NSArray *)serviceVersions;
-(id)initWithCacheFilePath:(id)arg1 schedulingDelegate:(id)arg2 manifestInfoProvider:(id)arg3 ;
-(id)lookupPlaceByIdentifier:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL*)arg3 ;
-(id)lookupIdentifierByPhoneNumber:(id)arg1 ;
-(void)iterateAllPlacesWithBlock:(/*^block*/id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(void)trackPlace:(id)arg1 ;
-(id)lookupPlaceByHandle:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL*)arg3 ;
-(id)lookupPlaceByRequest:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL*)arg3 ;
-(void)storePlace:(id)arg1 forRequest:(id)arg2 ;
-(void)evictAllEntries;
-(void)deletePhoneNumberMapping;
-(BOOL)_deleteAndResetDB:(id)arg1 ;
-(BOOL)_validateDBLocaleAndResetIfNecessary;
-(BOOL)_meetsManifestVersionPolicyForPlace:(id)arg1 ;
-(void)scheduleCleanup;
-(void)trackPlace:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_cacheKeysForPlace:(id)arg1 request:(id)arg2 ;
-(void)_storePlace:(id)arg1 withHash:(id)arg2 forRequestKeys:(id)arg3 ;
-(void)storePlace:(id)arg1 forRequest:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_cacheKeyForHandle:(id)arg1 ;
-(void)enqueueAccessTimeUpdateForCacheKey:(id)arg1 accessTime:(long long)arg2 ;
-(void)_evictPlaceWithHash:(id)arg1 ;
-(id)_lookupPlaceByRequestKey:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL*)arg3 ;
-(unsigned long long)_calculateFreeableSpace;
-(void)cancelCleanupBlockSchedule;
-(void)periodicCleanupAndAccessTimeUpdate;
-(void)runCleanupBlock:(/*^block*/id)arg1 inSecondsFromNow:(long long)arg2 ;
-(void)_iterateAllPlacesFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(/*^block*/id)arg2 finishedBlock:(/*^block*/id)arg3 ;
-(void)_iterateAllKeysFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(/*^block*/id)arg2 finishedBlock:(/*^block*/id)arg3 ;
-(id)lookupPlaceByPhoneNumber:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL*)arg3 ;
-(void)iterateMUIDPlacesWithBlock:(/*^block*/id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(void)iterateBasemapIdPlacesWithBlock:(/*^block*/id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(void)iteratePhonePlacesWithBlock:(/*^block*/id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(void)iterateHandlePlacesWithBlock:(/*^block*/id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(void)iterateAllKeysWithBlock:(/*^block*/id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(void)iterateAllMUIDKeysWithBlock:(/*^block*/id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(void)iterateAllBasemapIdKeysWithBlock:(/*^block*/id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(void)iterateAllPhoneKeysWithBlock:(/*^block*/id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(void)iterateAllHandleKeysWithBlock:(/*^block*/id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(id)internalSerialQueue;
@end

